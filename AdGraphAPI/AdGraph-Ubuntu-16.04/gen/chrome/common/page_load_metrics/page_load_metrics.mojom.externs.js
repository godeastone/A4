// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let pageLoadMetrics = {};
/** @const */
pageLoadMetrics.mojom = {};
/** @implements {mojo.InterfacePtr} */
pageLoadMetrics.mojom.PageLoadMetricsPtr = class {

  /**
   * @param { !pageLoadMetrics.mojom.PageLoadTiming } pageLoadTiming
   * @param { !pageLoadMetrics.mojom.PageLoadMetadata } pageLoadMetadata
   * @param { !pageLoadMetrics.mojom.PageLoadFeatures } newFeatures
   */
   updateTiming(pageLoadTiming, pageLoadMetadata, newFeatures) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
pageLoadMetrics.mojom.PageLoadMetrics;
pageLoadMetrics.mojom.DocumentTiming = class {
  constructor() {
    /** @type { mojoBase.mojom.TimeDelta } */
    this.domContentLoadedEventStart;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.loadEventStart;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstLayout;
  }
};
pageLoadMetrics.mojom.PaintTiming = class {
  constructor() {
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstPaint;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstTextPaint;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstImagePaint;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstContentfulPaint;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstMeaningfulPaint;
  }
};
pageLoadMetrics.mojom.ParseTiming = class {
  constructor() {
    /** @type { mojoBase.mojom.TimeDelta } */
    this.parseStart;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.parseStop;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.parseBlockedOnScriptLoadDuration;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.parseBlockedOnScriptLoadFromDocumentWriteDuration;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.parseBlockedOnScriptExecutionDuration;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.parseBlockedOnScriptExecutionFromDocumentWriteDuration;
  }
};
pageLoadMetrics.mojom.StyleSheetTiming = class {
  constructor() {
    /** @type { mojoBase.mojom.TimeDelta } */
    this.authorStyleSheetParseDurationBeforeFcp;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.updateStyleDurationBeforeFcp;
  }
};
pageLoadMetrics.mojom.InteractiveTiming = class {
  constructor() {
    /** @type { mojoBase.mojom.TimeDelta } */
    this.interactive;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.interactiveDetection;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstInvalidatingInput;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstInputDelay;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.firstInputTimestamp;
  }
};
pageLoadMetrics.mojom.PageLoadTiming = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.navigationStart;
    /** @type { mojoBase.mojom.TimeDelta } */
    this.responseStart;
    /** @type { !pageLoadMetrics.mojom.DocumentTiming } */
    this.documentTiming;
    /** @type { !pageLoadMetrics.mojom.InteractiveTiming } */
    this.interactiveTiming;
    /** @type { !pageLoadMetrics.mojom.PaintTiming } */
    this.paintTiming;
    /** @type { !pageLoadMetrics.mojom.ParseTiming } */
    this.parseTiming;
    /** @type { !pageLoadMetrics.mojom.StyleSheetTiming } */
    this.styleSheetTiming;
  }
};
pageLoadMetrics.mojom.PageLoadMetadata = class {
  constructor() {
    /** @type { !number } */
    this.behaviorFlags;
  }
};
pageLoadMetrics.mojom.PageLoadFeatures = class {
  constructor() {
    /** @type { !Array<blink.mojom.WebFeature> } */
    this.features;
    /** @type { !Array<number> } */
    this.cssProperties;
    /** @type { !Array<number> } */
    this.animatedCssProperties;
  }
};
pageLoadMetrics.mojom.PageLoadMetrics_UpdateTiming_Params = class {
  constructor() {
    /** @type { !pageLoadMetrics.mojom.PageLoadTiming } */
    this.pageLoadTiming;
    /** @type { !pageLoadMetrics.mojom.PageLoadMetadata } */
    this.pageLoadMetadata;
    /** @type { !pageLoadMetrics.mojom.PageLoadFeatures } */
    this.newFeatures;
  }
};
