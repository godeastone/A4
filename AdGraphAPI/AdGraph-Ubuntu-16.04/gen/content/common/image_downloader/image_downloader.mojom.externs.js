// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ImageDownloaderPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !boolean } isFavicon
   * @param { !number } maxBitmapSize
   * @param { !boolean } bypassCache
   * @return {Promise}
   */
   downloadImage(url, isFavicon, maxBitmapSize, bypassCache) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ImageDownloader;
content.mojom.ImageDownloader_DownloadImage_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !boolean } */
    this.isFavicon;
    /** @type { !boolean } */
    this.bypassCache;
    /** @type { !number } */
    this.maxBitmapSize;
  }
};
content.mojom.ImageDownloader_DownloadImage_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.httpStatusCode;
    /** @type { !Array<skia.mojom.Bitmap> } */
    this.images;
    /** @type { !Array<gfx.mojom.Size> } */
    this.originalImageSizes;
  }
};
