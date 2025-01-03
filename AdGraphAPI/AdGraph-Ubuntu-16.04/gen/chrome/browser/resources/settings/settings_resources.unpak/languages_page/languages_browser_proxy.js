// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview A helper object used from the languages section
 * to interact with the browser.
 */

cr.define('settings', function() {
  /** @interface */
  class LanguagesBrowserProxy {
    // 

    /** @return {!LanguageSettingsPrivate} */
    getLanguageSettingsPrivate() {}

    // 
  }

  /**
   * @implements {settings.LanguagesBrowserProxy}
   */
  class LanguagesBrowserProxyImpl {
    // 

    /** @override */
    getLanguageSettingsPrivate() {
      return /** @type {!LanguageSettingsPrivate} */ (
          chrome.languageSettingsPrivate);
    }

    // 
  }

  // The singleton instance_ is replaced with a test version of this wrapper
  // during testing.
  cr.addSingletonGetter(LanguagesBrowserProxyImpl);

  return {
    LanguagesBrowserProxy: LanguagesBrowserProxy,
    LanguagesBrowserProxyImpl: LanguagesBrowserProxyImpl,
  };
});
