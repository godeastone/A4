// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * Specifies page visibility in guest mode in cr and cros.
 * @typedef {{
 *   advancedSettings: (boolean|undefined),
 *   appearance: (boolean|undefined|AppearancePageVisibility),
 *   dateTime: (boolean|undefined|DateTimePageVisibility),
 *   defaultBrowser: (boolean|undefined),
 *   downloads: (boolean|undefined|DownloadsPageVisibility),
 *   multidevice: (boolean|undefined),
 *   onStartup: (boolean|undefined),
 *   passwordsAndForms: (boolean|undefined),
 *   people: (boolean|undefined),
 *   privacy: (boolean|undefined|PrivacyPageVisibility),
 *   reset:(boolean|undefined),
 * }}
 */
let GuestModePageVisibility;

/**
 * @typedef {{
 *   bookmarksBar: boolean,
 *   homeButton: boolean,
 *   pageZoom: boolean,
 *   setTheme: boolean,
 *   setWallpaper: boolean,
 * }}
 */
let AppearancePageVisibility;

/**
 * @typedef {{
 *   timeZoneSelector: boolean,
 * }}
 */
let DateTimePageVisibility;

/**
 * @typedef {{
 *   googleDrive: boolean
 * }}
 */
let DownloadsPageVisibility;

/**
 * @typedef {{
 *   networkPrediction: boolean,
 *   searchPrediction: boolean,
 * }}
 */
let PrivacyPageVisibility;

cr.define('settings', function() {
  /**
   * Dictionary defining page visibility.
   * @type {!GuestModePageVisibility}
   */
  let pageVisibility;

  if (loadTimeData.getBoolean('isGuest')) {
    // "if not chromeos" and "if chromeos" in two completely separate blocks
    // to work around closure compiler.
    // 
    pageVisibility = {
      passwordsAndForms: false,
      people: false,
      onStartup: false,
      reset: false,
      appearance: false,
      defaultBrowser: false,
      advancedSettings: false,
    };
    // 
    // 
  } else {
    // All pages are visible when not in chromeos. Since polymer only notifies
    // after a property is set.
    // 
  }

  return {pageVisibility: pageVisibility};
});
