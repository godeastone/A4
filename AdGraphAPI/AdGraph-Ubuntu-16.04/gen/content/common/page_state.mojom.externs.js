// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.history = {};
/** @const */
content.history.mojom = {};
content.history.mojom.DEPRECATED_FileSystemFile = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.filesystemUrl;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.length;
    /** @type { !mojoBase.mojom.Time } */
    this.modificationTime;
  }
};
content.history.mojom.File = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.path;
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.length;
    /** @type { !mojoBase.mojom.Time } */
    this.modificationTime;
  }
};
content.history.mojom.RequestBody = class {
  constructor() {
    /** @type { !Array<Object> } */
    this.elements;
    /** @type { !number } */
    this.identifier;
    /** @type { !boolean } */
    this.containsSensitiveInfo;
  }
};
content.history.mojom.HttpBody = class {
  constructor() {
    /** @type { mojoBase.mojom.String16 } */
    this.httpContentType;
    /** @type { content.history.mojom.RequestBody } */
    this.requestBody;
    /** @type { !boolean } */
    this.containsPasswords;
  }
};
content.history.mojom.ViewState = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.visualViewportScrollOffset;
    /** @type { !gfx.mojom.Point } */
    this.scrollOffset;
    /** @type { !number } */
    this.pageScaleFactor;
    /** @type { mojoBase.mojom.String16 } */
    this.scrollAnchorSelector;
    /** @type { gfx.mojom.PointF } */
    this.scrollAnchorOffset;
    /** @type { !number } */
    this.scrollAnchorSimhash;
  }
};
content.history.mojom.FrameState = class {
  constructor() {
    /** @type { mojoBase.mojom.String16 } */
    this.urlString;
    /** @type { mojoBase.mojom.String16 } */
    this.referrer;
    /** @type { mojoBase.mojom.String16 } */
    this.target;
    /** @type { mojoBase.mojom.String16 } */
    this.stateObject;
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.documentState;
    /** @type { !content.history.mojom.ScrollRestorationType } */
    this.scrollRestorationType;
    /** @type { !blink.mojom.ReferrerPolicy } */
    this.referrerPolicy;
    /** @type { content.history.mojom.ViewState } */
    this.viewState;
    /** @type { !number } */
    this.itemSequenceNumber;
    /** @type { !number } */
    this.documentSequenceNumber;
    /** @type { !content.history.mojom.HttpBody } */
    this.httpBody;
    /** @type { !Array<content.history.mojom.FrameState> } */
    this.children;
  }
};
content.history.mojom.PageState = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.referencedFiles;
    /** @type { !content.history.mojom.FrameState } */
    this.top;
  }
};
