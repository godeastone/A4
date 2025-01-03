// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let metrics = {};
/** @const */
metrics.mojom = {};
/** @implements {mojo.InterfacePtr} */
metrics.mojom.SingleSampleMetricsProviderPtr = class {

  /**
   * @param { !string } histogramName
   * @param { !number } min
   * @param { !number } max
   * @param { !number } bucketCount
   * @param { !number } flags
   * @param { !mojo.InterfaceRequest } request
   */
   acquireSingleSampleMetric(histogramName, min, max, bucketCount, flags, request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
metrics.mojom.SingleSampleMetricsProvider;
/** @implements {mojo.InterfacePtr} */
metrics.mojom.SingleSampleMetricPtr = class {

  /**
   * @param { !number } sample
   */
   setSample(sample) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
metrics.mojom.SingleSampleMetric;
metrics.mojom.SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params = class {
  constructor() {
    /** @type { !string } */
    this.histogramName;
    /** @type { !number } */
    this.min;
    /** @type { !number } */
    this.max;
    /** @type { !number } */
    this.bucketCount;
    /** @type { !number } */
    this.flags;
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
metrics.mojom.SingleSampleMetric_SetSample_Params = class {
  constructor() {
    /** @type { !number } */
    this.sample;
  }
};
