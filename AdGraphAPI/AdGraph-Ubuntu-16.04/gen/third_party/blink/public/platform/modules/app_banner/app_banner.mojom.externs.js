// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.AppBannerControllerPtr = class {

  /**
   * @param { !blink.mojom.AppBannerServicePtr } service
   * @param { !mojo.InterfaceRequest } event
   * @param { !Array<string> } platform
   * @return {Promise}
   */
   bannerPromptRequest(service, event, platform) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.AppBannerController;
/** @implements {mojo.InterfacePtr} */
blink.mojom.AppBannerEventPtr = class {

  /**
   * @param { !string } platform
   */
   bannerAccepted(platform) {}
  /**
   */
   bannerDismissed() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.AppBannerEvent;
/** @implements {mojo.InterfacePtr} */
blink.mojom.AppBannerServicePtr = class {

  /**
   * @param { !boolean } userGesture
   */
   displayAppBanner(userGesture) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.AppBannerService;
blink.mojom.AppBannerController_BannerPromptRequest_Params = class {
  constructor() {
    /** @type { !blink.mojom.AppBannerServicePtr } */
    this.service;
    /** @type { !mojo.InterfaceRequest } */
    this.event;
    /** @type { !Array<string> } */
    this.platform;
  }
};
blink.mojom.AppBannerController_BannerPromptRequest_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.AppBannerPromptReply } */
    this.reply;
    /** @type { !string } */
    this.referrer;
  }
};
blink.mojom.AppBannerEvent_BannerAccepted_Params = class {
  constructor() {
    /** @type { !string } */
    this.platform;
  }
};
blink.mojom.AppBannerEvent_BannerDismissed_Params = class {
  constructor() {
  }
};
blink.mojom.AppBannerService_DisplayAppBanner_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.userGesture;
  }
};
