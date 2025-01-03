// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.Manifest = class {
  constructor() {
    /** @type { mojoBase.mojom.String16 } */
    this.name;
    /** @type { mojoBase.mojom.String16 } */
    this.shortName;
    /** @type { url.mojom.Url } */
    this.startUrl;
    /** @type { !blink.mojom.DisplayMode } */
    this.display;
    /** @type { !device.mojom.ScreenOrientationLockType } */
    this.orientation;
    /** @type { Array<blink.mojom.ManifestIcon> } */
    this.icons;
    /** @type { blink.mojom.ManifestShareTarget } */
    this.shareTarget;
    /** @type { Array<blink.mojom.ManifestRelatedApplication> } */
    this.relatedApplications;
    /** @type { !boolean } */
    this.preferRelatedApplications;
    /** @type { !boolean } */
    this.hasThemeColor;
    /** @type { !boolean } */
    this.hasBackgroundColor;
    /** @type { !number } */
    this.themeColor;
    /** @type { !number } */
    this.backgroundColor;
    /** @type { url.mojom.Url } */
    this.splashScreenUrl;
    /** @type { mojoBase.mojom.String16 } */
    this.gcmSenderId;
    /** @type { url.mojom.Url } */
    this.scope;
  }
};
blink.mojom.ManifestIcon = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.src;
    /** @type { mojoBase.mojom.String16 } */
    this.type;
    /** @type { !Array<gfx.mojom.Size> } */
    this.sizes;
    /** @type { !Array<blink.mojom.Purpose> } */
    this.purpose;
  }
};
blink.mojom.ManifestRelatedApplication = class {
  constructor() {
    /** @type { mojoBase.mojom.String16 } */
    this.platform;
    /** @type { url.mojom.Url } */
    this.url;
    /** @type { mojoBase.mojom.String16 } */
    this.id;
  }
};
blink.mojom.ManifestShareTarget = class {
  constructor() {
    /** @type { url.mojom.Url } */
    this.urlTemplate;
  }
};
blink.mojom.ManifestDebugInfo = class {
  constructor() {
    /** @type { !Array<blink.mojom.ManifestError> } */
    this.errors;
    /** @type { !string } */
    this.rawManifest;
  }
};
blink.mojom.ManifestError = class {
  constructor() {
    /** @type { !string } */
    this.message;
    /** @type { !boolean } */
    this.critical;
    /** @type { !number } */
    this.line;
    /** @type { !number } */
    this.column;
  }
};
