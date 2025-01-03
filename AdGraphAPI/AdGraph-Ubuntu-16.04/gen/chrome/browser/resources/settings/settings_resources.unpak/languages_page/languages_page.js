// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview 'settings-languages-page' is the settings page
 * for language and input method settings.
 */
cr.exportPath('settings');

/**
 * @type {number} Millisecond delay that can be used when closing an action
 *      menu to keep it briefly on-screen.
 */
settings.kMenuCloseDelay = 100;

/**
 * Name of the language setting is shown uma histogram.
 * @type {string}
 */
const LANGUAGE_SETTING_IS_SHOWN_UMA_NAME = 'Translate.LanguageSettingsIsShown';

(function() {
'use strict';

Polymer({
  is: 'settings-languages-page',

  properties: {
    /**
     * Preferences state.
     */
    prefs: {
      type: Object,
      notify: true,
    },

    /**
     * Read-only reference to the languages model provided by the
     * 'settings-languages' instance.
     * @type {!LanguagesModel|undefined}
     */
    languages: {
      type: Object,
      notify: true,
    },

    /** @type {!LanguageHelper} */
    languageHelper: Object,

    // 
    /** @private */
    spellCheckSecondaryText_: {
      type: String,
      value: '',
      computed: 'getSpellCheckSecondaryText_(languages.enabled.*, ' +
          'languages.forcedSpellCheckLanguages.*, ' +
          'prefs.browser.enable_spellchecking.*)',
    },

    /** @private */
    spellCheckLanguages_: {
      type: Array,
      value: function() {
        return [];
      },
    },

    /** @private */
    spellCheckDisabled_: {
      type: Boolean,
      value: false,
    },
    // 

    /**
     * The language to display the details for.
     * @type {!LanguageState|undefined}
     * @private
     */
    detailLanguage_: Object,

    /**
     * Whether the language settings list is opened.
     * @private
     */
    languagesOpened_: {
      type: Boolean,
      observer: 'onLanguagesOpenedChanged_',
    },

    /** @private */
    showAddLanguagesDialog_: Boolean,

    /** @private {!Map<string, string>} */
    focusConfig_: {
      type: Object,
      value: function() {
        const map = new Map();
        // 
        if (settings.routes.EDIT_DICTIONARY) {
          map.set(
              settings.routes.EDIT_DICTIONARY.path,
              '#spellCheckCollapse .subpage-arrow');
        }
        // 
        // 
        return map;
      },
    },
  },

  // 
  observers: [
    'updateSpellcheckLanguages_(languages.enabled.*, ' +
        'languages.forcedSpellCheckLanguages.*)',
    'updateSpellcheckEnabled_(prefs.browser.enable_spellchecking.*)',
  ],

  /**
   * Checks if there are any errors downloading the spell check dictionary. This
   * is used for showing/hiding error messages, spell check toggle and retry.
   * button.
   * @param {number} downloadDictionaryFailureCount
   * @param {number} threshold
   * @return {boolean}
   * @private
   */
  errorsGreaterThan_: function(downloadDictionaryFailureCount, threshold) {
    return downloadDictionaryFailureCount > threshold;
  },
  // 

  /**
   * Stamps and opens the Add Languages dialog, registering a listener to
   * disable the dialog's dom-if again on close.
   * @param {!Event} e
   * @private
   */
  onAddLanguagesTap_: function(e) {
    e.preventDefault();
    this.showAddLanguagesDialog_ = true;
    this.async(function() {
      const dialog = this.$$('settings-add-languages-dialog');
      dialog.addEventListener('close', () => {
        this.showAddLanguagesDialog_ = false;
        cr.ui.focusWithoutInk(assert(this.$.addLanguages));
      });
    });
  },

  /**
   * Used to determine which "Move" buttons to show for ordering enabled
   * languages.
   * @param {number} n
   * @param {!LanguageState} language
   * @return {boolean} True if |language| is at the |n|th index in the list of
   *     enabled languages.
   * @private
   */
  isNthLanguage_: function(n, language) {
    const compareLanguage = assert(this.languages.enabled[n]);
    return language.language == compareLanguage.language;
  },

  /**
   * @param {!LanguageState} language
   * @return {boolean} True if the "Move to top" option for |language| should be
   *     visible.
   * @private
   */
  showMoveUp_: function(language) {
    // "Move up" is a no-op for the top language, and redundant with
    // "Move to top" for the 2nd language.
    return !this.isNthLanguage_(0, language) &&
        !this.isNthLanguage_(1, language);
  },

  /**
   * @param {!LanguageState} language
   * @return {boolean} True if the "Move down" option for |language| should be
   *     visible.
   * @private
   */
  showMoveDown_: function(language) {
    return !this.isNthLanguage_(this.languages.enabled.length - 1, language);
  },

  /**
   * @param {!Object} change Polymer change object for languages.enabled.*.
   * @return {boolean} True if there are less than 2 languages.
   */
  isHelpTextHidden_: function(change) {
    return this.languages.enabled.length <= 1;
  },

  // 

  // 

  /**
   * @param {!chrome.languageSettingsPrivate.Language} language
   * @param {string} targetLanguageCode The default translate target language.
   * @return {boolean} True if the translate checkbox should be disabled.
   * @private
   */
  disableTranslateCheckbox_: function(language, targetLanguageCode) {
    if (!language.supportsTranslate)
      return true;

    return this.languageHelper.convertLanguageCodeForTranslate(language.code) ==
        targetLanguageCode;
  },

  /**
   * Handler for changes to the translate checkbox.
   * @param {!{target: !Element}} e
   * @private
   */
  onTranslateCheckboxChange_: function(e) {
    if (e.target.checked) {
      this.languageHelper.enableTranslateLanguage(
          this.detailLanguage_.language.code);
    } else {
      this.languageHelper.disableTranslateLanguage(
          this.detailLanguage_.language.code);
    }
    this.closeMenuSoon_();
  },

  /**
   * Returns "complex" if the menu includes checkboxes, which should change the
   * spacing of items and show a separator in the menu.
   * @param {boolean} translateEnabled
   * @return {string}
   */
  getMenuClass_: function(translateEnabled) {
    if (translateEnabled || cr.isChromeOS || cr.isWindows)
      return 'complex';
    return '';
  },

  /**
   * Moves the language to the top of the list.
   * @private
   */
  onMoveToTopTap_: function() {
    /** @type {!CrActionMenuElement} */ (this.$.menu.get()).close();
    this.languageHelper.moveLanguageToFront(this.detailLanguage_.language.code);
  },

  /**
   * Moves the language up in the list.
   * @private
   */
  onMoveUpTap_: function() {
    /** @type {!CrActionMenuElement} */ (this.$.menu.get()).close();
    this.languageHelper.moveLanguage(
        this.detailLanguage_.language.code, true /* upDirection */);
  },

  /**
   * Moves the language down in the list.
   * @private
   */
  onMoveDownTap_: function() {
    /** @type {!CrActionMenuElement} */ (this.$.menu.get()).close();
    this.languageHelper.moveLanguage(
        this.detailLanguage_.language.code, false /* upDirection */);
  },

  /**
   * Disables the language.
   * @private
   */
  onRemoveLanguageTap_: function() {
    /** @type {!CrActionMenuElement} */ (this.$.menu.get()).close();
    this.languageHelper.disableLanguage(this.detailLanguage_.language.code);
  },

  // 

  /**
   * @return {string}
   * @private
   */
  getLanguageListTwoLine_: function() {
    return cr.isChromeOS || cr.isWindows ? 'two-line' : '';
  },

  // 
  /**
   * Returns the secondary text for the spell check subsection based on the
   * enabled spell check languages, listing at most 2 languages.
   * @return {string}
   * @private
   */
  getSpellCheckSecondaryText_: function() {
    if (this.getSpellCheckDisabled_())
      return loadTimeData.getString('spellCheckDisabled');
    const enabledSpellCheckLanguages =
        this.getSpellCheckLanguages_().filter(function(languageState) {
          return (languageState.spellCheckEnabled || languageState.isManaged) &&
              languageState.language.supportsSpellcheck;
        });
    switch (enabledSpellCheckLanguages.length) {
      case 0:
        return '';
      case 1:
        return enabledSpellCheckLanguages[0].language.displayName;
      case 2:
        return loadTimeData.getStringF(
            'spellCheckSummaryTwoLanguages',
            enabledSpellCheckLanguages[0].language.displayName,
            enabledSpellCheckLanguages[1].language.displayName);
      case 3:
        // "foo, bar, and 1 other"
        return loadTimeData.getStringF(
            'spellCheckSummaryThreeLanguages',
            enabledSpellCheckLanguages[0].language.displayName,
            enabledSpellCheckLanguages[1].language.displayName);
      default:
        // "foo, bar, and [N-2] others"
        return loadTimeData.getStringF(
            'spellCheckSummaryMultipleLanguages',
            enabledSpellCheckLanguages[0].language.displayName,
            enabledSpellCheckLanguages[1].language.displayName,
            (enabledSpellCheckLanguages.length - 2).toLocaleString());
    }
  },

  /**
   * Returns whether spellcheck is disabled by policy or not.
   * @return {boolean}
   * @private
   */
  getSpellCheckDisabled_: function() {
    const pref = /** @type {!chrome.settingsPrivate.PrefObject} */ (
        this.get('browser.enable_spellchecking', this.prefs));
    return pref.value === false;
  },

  /**
   * Returns an array of enabled languages, plus spellcheck languages that are
   * forced by policy.
   * @return {!Array<!LanguageState|!ForcedLanguageState>}
   * @private
   */
  getSpellCheckLanguages_: function() {
    return this.languages.enabled.concat(
        this.languages.forcedSpellCheckLanguages);
  },

  /** @private */
  updateSpellcheckLanguages_: function() {
    this.set('spellCheckLanguages_', this.getSpellCheckLanguages_());

    // Notify Polymer of subproperties that might have changed on the items in
    // the spellCheckLanguages_ array, to make sure the UI updates. Polymer
    // would otherwise not notice the changes in the subproperties, as some of
    // them are references to those from |this.languages.enabled|. It would be
    // possible to |this.linkPaths()| objects from |this.languages.enabled| to
    // |this.spellCheckLanguages_|, but that would require complex housekeeping
    // to |this.unlinkPaths()| as |this.languages.enabled| changes.
    for (let i = 0; i < this.spellCheckLanguages_.length; i++) {
      this.notifyPath(`spellCheckLanguages_.${i}.isManaged`);
      this.notifyPath(`spellCheckLanguages_.${i}.spellCheckEnabled`);
      this.notifyPath(
          `spellCheckLanguages_.${i}.downloadDictionaryFailureCount`);
    }
  },

  /** @private */
  updateSpellcheckEnabled_: function() {
    this.set('spellCheckDisabled_', this.getSpellCheckDisabled_());

    // If the spellcheck section was expanded, close it.
    if (this.spellCheckDisabled_)
      this.set('spellCheckOpened_', false);
  },

  /**
   * Opens the Custom Dictionary page.
   * @private
   */
  onEditDictionaryTap_: function() {
    settings.navigateTo(settings.routes.EDIT_DICTIONARY);
  },

  /**
   * Handler for enabling or disabling spell check.
   * @param {!{target: Element, model: !{item: !LanguageState}}} e
   */
  onSpellCheckChange_: function(e) {
    const item = e.model.item;
    if (!item.language.supportsSpellcheck)
      return;

    this.languageHelper.toggleSpellCheck(
        item.language.code, !item.spellCheckEnabled);
  },

  /**
   * Handler to initiate another attempt at downloading the spell check
   * dictionary for a specified language.
   * @param {!{target: Element, model: !{item: !LanguageState}}} e
   */
  onRetryDictionaryDownloadClick_: function(e) {
    assert(this.errorsGreaterThan_(
        e.model.item.downloadDictionaryFailureCount, 0));
    this.languageHelper.retryDownloadDictionary(e.model.item.language.code);
  },

  /**
   * Handler for clicking on the name of the language. The action taken must
   * match the control that is available.
   * @param {!{target: Element, model: !{item: !LanguageState}}} e
   */
  onSpellCheckNameClick_: function(e) {
    assert(!this.isSpellCheckNameClickDisabled_(e.model.item));
    this.onSpellCheckChange_(e);
  },

  /**
   * Name only supports clicking when language is not managed, supports
   * spellcheck, and the dictionary has been downloaded with no errors.
   * @param {!LanguageState|!ForcedLanguageState} item
   * @return {boolean}
   * @private
   */
  isSpellCheckNameClickDisabled_: function(item) {
    return item.isManaged || !item.language.supportsSpellcheck ||
        item.downloadDictionaryFailureCount > 0;
  },

  /**
   * @return {string}
   * @private
   */
  getSpellCheckListTwoLine_: function() {
    return this.spellCheckSecondaryText_.length ? 'two-line' : '';
  },
  // 

  /**
   * Returns either the "selected" class, if the language matches the
   * prospective UI language, or an empty string. Languages can only be
   * selected on Chrome OS and Windows.
   * @param {string} languageCode The language code identifying a language.
   * @param {string} prospectiveUILanguage The prospective UI language.
   * @return {string} The class name for the language item.
   * @private
   */
  getLanguageItemClass_: function(languageCode, prospectiveUILanguage) {
    if ((cr.isChromeOS || cr.isWindows) &&
        languageCode == prospectiveUILanguage) {
      return 'selected';
    }
    return '';
  },

  // 

  /**
   * @param {!Event} e
   * @private
   */
  onDotsTap_: function(e) {
    // Set a copy of the LanguageState object since it is not data-bound to the
    // languages model directly.
    this.detailLanguage_ = /** @type {!LanguageState} */ (Object.assign(
        {},
        /** @type {!{model: !{item: !LanguageState}}} */ (e).model.item));

    // Ensure the template has been stamped.
    let menu = /** @type {?CrActionMenuElement} */ (this.$.menu.getIfExists());
    if (!menu) {
      menu = /** @type {!CrActionMenuElement} */ (this.$.menu.get());
      // 
    }

    menu.showAt(/** @type {!Element} */ (e.target));
  },

  /**
   * @param {boolean} newVal The new value of languagesOpened_.
   * @param {boolean} oldVal The old value of languagesOpened_.
   * @private
   */
  onLanguagesOpenedChanged_: function(newVal, oldVal) {
    if (!oldVal && newVal) {
      chrome.send(
          'metricsHandler:recordBooleanHistogram',
          [LANGUAGE_SETTING_IS_SHOWN_UMA_NAME, true]);
    }
  },

  /**
   * Closes the shared action menu after a short delay, so when a checkbox is
   * clicked it can be seen to change state before disappearing.
   * @private
   */
  closeMenuSoon_: function() {
    const menu = /** @type {!CrActionMenuElement} */ (this.$.menu.get());
    setTimeout(function() {
      if (menu.open)
        menu.close();
    }, settings.kMenuCloseDelay);
  },

  // 

  /**
   * Toggles the expand button within the element being listened to.
   * @param {!Event} e
   * @private
   */
  toggleExpandButton_: function(e) {
    // The expand button handles toggling itself.
    const expandButtonTag = 'CR-EXPAND-BUTTON';
    if (e.target.tagName == expandButtonTag)
      return;

    if (!e.currentTarget.hasAttribute('actionable'))
      return;

    /** @type {!CrExpandButtonElement} */
    const expandButton = e.currentTarget.querySelector(expandButtonTag);
    assert(expandButton);
    expandButton.expanded = !expandButton.expanded;
  },
});
})();
