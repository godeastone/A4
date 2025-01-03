// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.BeginNavigationParams = class {
  constructor() {
    /** @type { !string } */
    this.headers;
    /** @type { !number } */
    this.loadFlags;
    /** @type { !boolean } */
    this.skipServiceWorker;
    /** @type { !boolean } */
    this.isFormSubmission;
    /** @type { !blink.mojom.RequestContextType } */
    this.requestContextType;
    /** @type { !content.mojom.MixedContentContextType } */
    this.mixedContentContextType;
    /** @type { !url.mojom.Url } */
    this.searchableFormUrl;
    /** @type { !string } */
    this.searchableFormEncoding;
    /** @type { url.mojom.Origin } */
    this.initiatorOrigin;
    /** @type { !url.mojom.Url } */
    this.clientSideRedirectUrl;
    /** @type { mojoBase.mojom.DictionaryValue } */
    this.devtoolsInitiator;
  }
};
