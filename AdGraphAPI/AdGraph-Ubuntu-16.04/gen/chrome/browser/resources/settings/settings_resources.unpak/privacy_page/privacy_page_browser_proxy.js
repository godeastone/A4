// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Handles interprocess communication for the privacy page. */

/** @typedef {{enabled: boolean, managed: boolean}} */
let MetricsReporting;

/** @typedef {{enabled: boolean, managed: boolean}} */
let SberPrefState;

cr.define('settings', function() {
  /** @interface */
  class PrivacyPageBrowserProxy {
    // 

    // 

    /** @return {!Promise<!SberPrefState>} */
    getSafeBrowsingExtendedReporting() {}

    /** @param {boolean} enabled */
    setSafeBrowsingExtendedReportingEnabled(enabled) {}
  }

  /**
   * @implements {settings.PrivacyPageBrowserProxy}
   */
  class PrivacyPageBrowserProxyImpl {
    // 

    /** @override */
    getSafeBrowsingExtendedReporting() {
      return cr.sendWithPromise('getSafeBrowsingExtendedReporting');
    }

    /** @override */
    setSafeBrowsingExtendedReportingEnabled(enabled) {
      chrome.send('setSafeBrowsingExtendedReportingEnabled', [enabled]);
    }

    // 
  }

  cr.addSingletonGetter(PrivacyPageBrowserProxyImpl);

  return {
    PrivacyPageBrowserProxy: PrivacyPageBrowserProxy,
    PrivacyPageBrowserProxyImpl: PrivacyPageBrowserProxyImpl,
  };
});
