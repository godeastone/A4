// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview
 * 'settings-downloads-page' is the settings page containing downloads
 * settings.
 *
 * Example:
 *
 *    <iron-animated-pages>
 *      <settings-downloads-page prefs="{{prefs}}">
 *      </settings-downloads-page>
 *      ... other pages ...
 *    </iron-animated-pages>
 */
Polymer({
  is: 'settings-downloads-page',

  behaviors: [WebUIListenerBehavior],

  properties: {
    /**
     * Preferences state.
     */
    prefs: {
      type: Object,
      notify: true,
    },

    /**
     * Dictionary defining page visibility.
     * @type {!DownloadsPageVisibility}
     */
    pageVisibility: Object,

    /** @private */
    autoOpenDownloads_: {
      type: Boolean,
      value: false,
    },

    // 

    /** @private {!Map<string, string>} */
    focusConfig_: {
      type: Object,
      value: function() {
        const map = new Map();
        // 
        return map;
      },
    },

  },

  /** @private {?settings.DownloadsBrowserProxy} */
  browserProxy_: null,

  /** @override */
  attached: function() {
    this.browserProxy_ = settings.DownloadsBrowserProxyImpl.getInstance();

    this.addWebUIListener('auto-open-downloads-changed', autoOpen => {
      this.autoOpenDownloads_ = autoOpen;
    });

    this.browserProxy_.initializeDownloads();
  },

  /** @private */
  selectDownloadLocation_: function() {
    listenOnce(this, 'transitionend', () => {
      this.browserProxy_.selectDownloadLocation();
    });
  },

  // 


  // 

  /** @private */
  onClearAutoOpenFileTypesTap_: function() {
    this.browserProxy_.resetAutoOpenFileTypes();
  },
});
