// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ReportingServiceProxyPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !string } message
   * @param { !string } sourceFile
   * @param { !number } lineNumber
   * @param { !number } columnNumber
   */
   queueInterventionReport(url, message, sourceFile, lineNumber, columnNumber) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !string } id
   * @param { !mojoBase.mojom.Time } anticipatedRemoval
   * @param { !string } message
   * @param { !string } sourceFile
   * @param { !number } lineNumber
   * @param { !number } columnNumber
   */
   queueDeprecationReport(url, id, anticipatedRemoval, message, sourceFile, lineNumber, columnNumber) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !string } group
   * @param { !string } documentUri
   * @param { !string } referrer
   * @param { !string } violatedDirective
   * @param { !string } effectiveDirective
   * @param { !string } originalPolicy
   * @param { !string } disposition
   * @param { !string } blockedUri
   * @param { !number } lineNumber
   * @param { !number } columnNumber
   * @param { !string } sourceFile
   * @param { !number } statusCode
   * @param { !string } scriptSample
   */
   queueCspViolationReport(url, group, documentUri, referrer, violatedDirective, effectiveDirective, originalPolicy, disposition, blockedUri, lineNumber, columnNumber, sourceFile, statusCode, scriptSample) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ReportingServiceProxy;
blink.mojom.ReportingServiceProxy_QueueInterventionReport_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.message;
    /** @type { !string } */
    this.sourceFile;
    /** @type { !number } */
    this.lineNumber;
    /** @type { !number } */
    this.columnNumber;
  }
};
blink.mojom.ReportingServiceProxy_QueueDeprecationReport_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.id;
    /** @type { !mojoBase.mojom.Time } */
    this.anticipatedRemoval;
    /** @type { !string } */
    this.message;
    /** @type { !string } */
    this.sourceFile;
    /** @type { !number } */
    this.lineNumber;
    /** @type { !number } */
    this.columnNumber;
  }
};
blink.mojom.ReportingServiceProxy_QueueCspViolationReport_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.group;
    /** @type { !string } */
    this.documentUri;
    /** @type { !string } */
    this.referrer;
    /** @type { !string } */
    this.violatedDirective;
    /** @type { !string } */
    this.effectiveDirective;
    /** @type { !string } */
    this.originalPolicy;
    /** @type { !string } */
    this.disposition;
    /** @type { !string } */
    this.blockedUri;
    /** @type { !number } */
    this.lineNumber;
    /** @type { !number } */
    this.columnNumber;
    /** @type { !string } */
    this.sourceFile;
    /** @type { !number } */
    this.statusCode;
    /** @type { !string } */
    this.scriptSample;
  }
};
