// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.SiteEngagementDetailsProviderPtr = class {

  /**
   * @return {Promise}
   */
   getSiteEngagementDetails() {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !number } score
   */
   setSiteEngagementBaseScoreForUrl(url, score) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.SiteEngagementDetailsProvider;
mojom.SiteEngagementDetails = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.origin;
    /** @type { !number } */
    this.totalScore;
    /** @type { !number } */
    this.baseScore;
    /** @type { !number } */
    this.installedBonus;
  }
};
mojom.SiteEngagementDetailsProvider_GetSiteEngagementDetails_Params = class {
  constructor() {
  }
};
mojom.SiteEngagementDetailsProvider_GetSiteEngagementDetails_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojom.SiteEngagementDetails> } */
    this.info;
  }
};
mojom.SiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.score;
  }
};
