// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

cr.define('settings', function() {
  /** @interface */
  class AppearanceBrowserProxy {
    /** @return {!Promise<number>} */
    getDefaultZoom() {}

    /**
     * @param {string} themeId
     * @return {!Promise<!chrome.management.ExtensionInfo>} Theme info.
     */
    getThemeInfo(themeId) {}

    /** @return {boolean} Whether the current profile is supervised. */
    isSupervised() {}

    /**
     * @return {!Promise<boolean>} Whether the wallpaper setting row should be
     *     visible.
     */
    isWallpaperSettingVisible() {}

    /**
     * @return {!Promise<boolean>} Whether the wallpaper is policy controlled.
     */
    isWallpaperPolicyControlled() {}

    // 

    useDefaultTheme() {}

    // 
    useSystemTheme() {}

    // 

    /**
     * @param {string} url The url of which to check validity.
     * @return {!Promise<boolean>}
     */
    validateStartupPage(url) {}
  }

  /**
   * @implements {settings.AppearanceBrowserProxy}
   */
  class AppearanceBrowserProxyImpl {
    /** @override */
    getDefaultZoom() {
      return new Promise(function(resolve) {
        chrome.settingsPrivate.getDefaultZoom(resolve);
      });
    }

    /** @override */
    getThemeInfo(themeId) {
      return new Promise(function(resolve) {
        chrome.management.get(themeId, resolve);
      });
    }

    /** @override */
    isSupervised() {
      return loadTimeData.getBoolean('isSupervised');
    }

    // 

    /** @override */
    useDefaultTheme() {
      chrome.send('useDefaultTheme');
    }

    // 
    /** @override */
    useSystemTheme() {
      chrome.send('useSystemTheme');
    }

    // 

    /** @override */
    validateStartupPage(url) {
      return cr.sendWithPromise('validateStartupPage', url);
    }
  }

  cr.addSingletonGetter(AppearanceBrowserProxyImpl);

  return {
    AppearanceBrowserProxy: AppearanceBrowserProxy,
    AppearanceBrowserProxyImpl: AppearanceBrowserProxyImpl,
  };
});
