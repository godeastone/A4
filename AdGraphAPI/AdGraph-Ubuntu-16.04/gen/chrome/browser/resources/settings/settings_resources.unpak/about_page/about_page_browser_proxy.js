// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview A helper object used from the "About" section to interact with
 * the browser.
 */

// 

/**
 * Enumeration of all possible update statuses. The string literals must match
 * the ones defined at |AboutHandler::UpdateStatusToString|.
 * @enum {string}
 */
const UpdateStatus = {
  CHECKING: 'checking',
  UPDATING: 'updating',
  NEARLY_UPDATED: 'nearly_updated',
  UPDATED: 'updated',
  FAILED: 'failed',
  DISABLED: 'disabled',
  DISABLED_BY_ADMIN: 'disabled_by_admin',
  NEED_PERMISSION_TO_UPDATE: 'need_permission_to_update',
};

// 

/**
 * @typedef {{
 *   status: !UpdateStatus,
 *   progress: (number|undefined),
 *   message: (string|undefined),
 *   connectionTypes: (string|undefined),
 *   version: (string|undefined),
 *   size: (string|undefined),
 * }}
 */
let UpdateStatusChangedEvent;

cr.define('settings', function() {
  /**
   * @param {!BrowserChannel} channel
   * @return {string}
   */
  function browserChannelToI18nId(channel) {
    switch (channel) {
      case BrowserChannel.BETA:
        return 'aboutChannelBeta';
      case BrowserChannel.CANARY:
        return 'aboutChannelCanary';
      case BrowserChannel.DEV:
        return 'aboutChannelDev';
      case BrowserChannel.STABLE:
        return 'aboutChannelStable';
    }

    assertNotReached();
  }

  /**
   * @param {!BrowserChannel} currentChannel
   * @param {!BrowserChannel} targetChannel
   * @return {boolean} Whether the target channel is more stable than the
   *     current channel.
   */
  function isTargetChannelMoreStable(currentChannel, targetChannel) {
    // List of channels in increasing stability order.
    const channelList = [
      BrowserChannel.CANARY,
      BrowserChannel.DEV,
      BrowserChannel.BETA,
      BrowserChannel.STABLE,
    ];
    const currentIndex = channelList.indexOf(currentChannel);
    const targetIndex = channelList.indexOf(targetChannel);
    return currentIndex < targetIndex;
  }

  /** @interface */
  class AboutPageBrowserProxy {
    /**
     * Indicates to the browser that the page is ready.
     */
    pageReady() {}

    /**
     * Request update status from the browser. It results in one or more
     * 'update-status-changed' WebUI events.
     */
    refreshUpdateStatus() {}

    /** Opens the help page. */
    openHelpPage() {}

    // 

    // 

    // 
  }

  /**
   * @implements {settings.AboutPageBrowserProxy}
   */
  class AboutPageBrowserProxyImpl {
    /** @override */
    pageReady() {
      chrome.send('aboutPageReady');
    }

    /** @override */
    refreshUpdateStatus() {
      chrome.send('refreshUpdateStatus');
    }

    // 

    /** @override */
    openHelpPage() {
      chrome.send('openHelpPage');
    }

    // 

    // 
  }

  cr.addSingletonGetter(AboutPageBrowserProxyImpl);

  return {
    AboutPageBrowserProxy: AboutPageBrowserProxy,
    AboutPageBrowserProxyImpl: AboutPageBrowserProxyImpl,
    browserChannelToI18nId: browserChannelToI18nId,
    isTargetChannelMoreStable: isTargetChannelMoreStable,
  };
});
