// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

cr.define('settings', function() {
  /** @interface */
  class LifetimeBrowserProxy {
    // Triggers a browser restart.
    restart() {}

    // Triggers a browser relaunch.
    relaunch() {}

    // 
  }

  /**
   * @implements {settings.LifetimeBrowserProxy}
   */
  class LifetimeBrowserProxyImpl {
    /** @override */
    restart() {
      chrome.send('restart');
    }

    /** @override */
    relaunch() {
      chrome.send('relaunch');
    }

    // 
  }

  cr.addSingletonGetter(LifetimeBrowserProxyImpl);

  return {
    LifetimeBrowserProxy: LifetimeBrowserProxy,
    LifetimeBrowserProxyImpl: LifetimeBrowserProxyImpl,
  };
});
