// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.MediaEngagementScoreDetailsProviderPtr = class {

  /**
   * @return {Promise}
   */
   getMediaEngagementScoreDetails() {}
  /**
   * @return {Promise}
   */
   getMediaEngagementConfig() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.MediaEngagementScoreDetailsProvider;
media.mojom.MediaEngagementScoreDetails = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.origin;
    /** @type { !number } */
    this.totalScore;
    /** @type { !number } */
    this.visits;
    /** @type { !number } */
    this.mediaPlaybacks;
    /** @type { !number } */
    this.lastMediaPlaybackTime;
    /** @type { !boolean } */
    this.isHigh;
    /** @type { !number } */
    this.audiblePlaybacks;
    /** @type { !number } */
    this.significantPlaybacks;
    /** @type { !number } */
    this.highScoreChanges;
  }
};
media.mojom.MediaEngagementConfig = class {
  constructor() {
    /** @type { !number } */
    this.scoreMinVisits;
    /** @type { !boolean } */
    this.featureRecordData;
    /** @type { !boolean } */
    this.featureBypassAutoplay;
    /** @type { !boolean } */
    this.featurePreloadData;
    /** @type { !number } */
    this.highScoreLowerThreshold;
    /** @type { !number } */
    this.highScoreUpperThreshold;
    /** @type { !string } */
    this.autoplayPolicy;
    /** @type { !string } */
    this.preloadVersion;
  }
};
media.mojom.MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Params = class {
  constructor() {
  }
};
media.mojom.MediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_ResponseParams = class {
  constructor() {
    /** @type { !Array<media.mojom.MediaEngagementScoreDetails> } */
    this.info;
  }
};
media.mojom.MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Params = class {
  constructor() {
  }
};
media.mojom.MediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_ResponseParams = class {
  constructor() {
    /** @type { !media.mojom.MediaEngagementConfig } */
    this.config;
  }
};
