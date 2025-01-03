// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let safeBrowsing = {};
/** @const */
safeBrowsing.mojom = {};
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.SafeBrowsingPtr = class {

  /**
   * @param { !number } renderFrameId
   * @param { !mojo.InterfaceRequest } request
   * @param { !url.mojom.Url } url
   * @param { !string } method
   * @param { !network.mojom.HttpRequestHeaders } headers
   * @param { !number } loadFlags
   * @param { !content.mojom.ResourceType } resourceType
   * @param { !boolean } hasUserGesture
   * @param { !boolean } originatedFromServiceWorker
   * @return {Promise}
   */
   createCheckerAndCheck(renderFrameId, request, url, method, headers, loadFlags, resourceType, hasUserGesture, originatedFromServiceWorker) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   clone(request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.SafeBrowsing;
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.SafeBrowsingUrlCheckerPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !string } method
   * @return {Promise}
   */
   checkUrl(url, method) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.SafeBrowsingUrlChecker;
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.UrlCheckNotifierPtr = class {

  /**
   * @param { !boolean } proceed
   * @param { !boolean } showedInterstitial
   */
   onCompleteCheck(proceed, showedInterstitial) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.UrlCheckNotifier;
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.ThreatReporterPtr = class {

  /**
   * @return {Promise}
   */
   getThreatDOMDetails() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.ThreatReporter;
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.PhishingDetectorPtr = class {

  /**
   * @param { !url.mojom.Url } url
   */
   startPhishingDetection(url) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.PhishingDetector;
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.PhishingDetectorClientPtr = class {

  /**
   * @param { !string } requestProto
   */
   phishingDetectionDone(requestProto) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.PhishingDetectorClient;
/** @implements {mojo.InterfacePtr} */
safeBrowsing.mojom.PhishingModelSetterPtr = class {

  /**
   * @param { !string } model
   */
   setPhishingModel(model) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
safeBrowsing.mojom.PhishingModelSetter;
safeBrowsing.mojom.AttributeNameValue = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.value;
  }
};
safeBrowsing.mojom.ThreatDOMDetailsNode = class {
  constructor() {
    /** @type { !number } */
    this.nodeId;
    /** @type { !number } */
    this.parentNodeId;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.tagName;
    /** @type { !url.mojom.Url } */
    this.parent;
    /** @type { !Array<url.mojom.Url> } */
    this.children;
    /** @type { !Array<number> } */
    this.childNodeIds;
    /** @type { !Array<safeBrowsing.mojom.AttributeNameValue> } */
    this.attributes;
    /** @type { !number } */
    this.childFrameRoutingId;
  }
};
safeBrowsing.mojom.SafeBrowsing_CreateCheckerAndCheck_Params = class {
  constructor() {
    /** @type { !number } */
    this.renderFrameId;
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.method;
    /** @type { !network.mojom.HttpRequestHeaders } */
    this.headers;
    /** @type { !number } */
    this.loadFlags;
    /** @type { !content.mojom.ResourceType } */
    this.resourceType;
    /** @type { !boolean } */
    this.hasUserGesture;
    /** @type { !boolean } */
    this.originatedFromServiceWorker;
  }
};
safeBrowsing.mojom.SafeBrowsing_CreateCheckerAndCheck_ResponseParams = class {
  constructor() {
    /** @type { mojo.InterfaceRequest } */
    this.slowCheckNotifier;
    /** @type { !boolean } */
    this.proceed;
    /** @type { !boolean } */
    this.showedInterstitial;
  }
};
safeBrowsing.mojom.SafeBrowsing_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
safeBrowsing.mojom.SafeBrowsingUrlChecker_CheckUrl_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.method;
  }
};
safeBrowsing.mojom.SafeBrowsingUrlChecker_CheckUrl_ResponseParams = class {
  constructor() {
    /** @type { mojo.InterfaceRequest } */
    this.slowCheckNotifier;
    /** @type { !boolean } */
    this.proceed;
    /** @type { !boolean } */
    this.showedInterstitial;
  }
};
safeBrowsing.mojom.UrlCheckNotifier_OnCompleteCheck_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.proceed;
    /** @type { !boolean } */
    this.showedInterstitial;
  }
};
safeBrowsing.mojom.ThreatReporter_GetThreatDOMDetails_Params = class {
  constructor() {
  }
};
safeBrowsing.mojom.ThreatReporter_GetThreatDOMDetails_ResponseParams = class {
  constructor() {
    /** @type { !Array<safeBrowsing.mojom.ThreatDOMDetailsNode> } */
    this.nodes;
  }
};
safeBrowsing.mojom.PhishingDetector_StartPhishingDetection_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
safeBrowsing.mojom.PhishingDetectorClient_PhishingDetectionDone_Params = class {
  constructor() {
    /** @type { !string } */
    this.requestProto;
  }
};
safeBrowsing.mojom.PhishingModelSetter_SetPhishingModel_Params = class {
  constructor() {
    /** @type { !string } */
    this.model;
  }
};
