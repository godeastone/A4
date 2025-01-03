// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.HostZoomPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !number } zoomLevel
   */
   setHostZoomLevel(url, zoomLevel) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.HostZoom;
content.mojom.HostZoom_SetHostZoomLevel_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.zoomLevel;
  }
};
