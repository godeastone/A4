// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.MediaParserPtr = class {

  /**
   * @param { !string } mimeType
   * @param { !number } totalSize
   * @param { !boolean } getAttachedImages
   * @param { !chrome.mojom.MediaDataSourcePtr } mediaDataSource
   * @return {Promise}
   */
   parseMediaMetadata(mimeType, totalSize, getAttachedImages, mediaDataSource) {}
  /**
   * @param { !mojoBase.mojom.TimeDelta } decodeTime
   * @param { !mojoBase.mojom.File } file
   * @return {Promise}
   */
   checkMediaFile(decodeTime, file) {}
  /**
   * @return {Promise}
   */
   getCpuInfo() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.MediaParser;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.MediaParserFactoryPtr = class {

  /**
   * @param { !number } libyuvCpuFlags
   * @param { !number } libavutilCpuFlags
   * @return {Promise}
   */
   createMediaParser(libyuvCpuFlags, libavutilCpuFlags) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.MediaParserFactory;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.MediaDataSourcePtr = class {

  /**
   * @param { !number } position
   * @param { !number } length
   * @return {Promise}
   */
   read(position, length) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.MediaDataSource;
chrome.mojom.MediaStreamInfo = class {
  constructor() {
    /** @type { !string } */
    this.type;
    /** @type { !mojoBase.mojom.DictionaryValue } */
    this.additionalProperties;
  }
};
chrome.mojom.MediaMetadata = class {
  constructor() {
    /** @type { !string } */
    this.mimeType;
    /** @type { !number } */
    this.height;
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.duration;
    /** @type { !number } */
    this.rotation;
    /** @type { !number } */
    this.disc;
    /** @type { !string } */
    this.album;
    /** @type { !string } */
    this.artist;
    /** @type { !string } */
    this.comment;
    /** @type { !string } */
    this.copyright;
    /** @type { !string } */
    this.genre;
    /** @type { !string } */
    this.language;
    /** @type { !string } */
    this.title;
    /** @type { !number } */
    this.track;
    /** @type { !Array<chrome.mojom.MediaStreamInfo> } */
    this.rawTags;
  }
};
chrome.mojom.AttachedImage = class {
  constructor() {
    /** @type { !string } */
    this.type;
    /** @type { !Array<number> } */
    this.data;
  }
};
chrome.mojom.MediaParser_ParseMediaMetadata_Params = class {
  constructor() {
    /** @type { !string } */
    this.mimeType;
    /** @type { !number } */
    this.totalSize;
    /** @type { !boolean } */
    this.getAttachedImages;
    /** @type { !chrome.mojom.MediaDataSourcePtr } */
    this.mediaDataSource;
  }
};
chrome.mojom.MediaParser_ParseMediaMetadata_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.parseSuccess;
    /** @type { !chrome.mojom.MediaMetadata } */
    this.metadata;
    /** @type { !Array<chrome.mojom.AttachedImage> } */
    this.attachedImages;
  }
};
chrome.mojom.MediaParser_CheckMediaFile_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.decodeTime;
    /** @type { !mojoBase.mojom.File } */
    this.file;
  }
};
chrome.mojom.MediaParser_CheckMediaFile_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
chrome.mojom.MediaParser_GetCpuInfo_Params = class {
  constructor() {
  }
};
chrome.mojom.MediaParser_GetCpuInfo_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.libyuvCpuFlags;
    /** @type { !number } */
    this.ffmpegCpuFlags;
  }
};
chrome.mojom.MediaParserFactory_CreateMediaParser_Params = class {
  constructor() {
    /** @type { !number } */
    this.libyuvCpuFlags;
    /** @type { !number } */
    this.libavutilCpuFlags;
  }
};
chrome.mojom.MediaParserFactory_CreateMediaParser_ResponseParams = class {
  constructor() {
    /** @type { !chrome.mojom.MediaParserPtr } */
    this.mediaParser;
  }
};
chrome.mojom.MediaDataSource_Read_Params = class {
  constructor() {
    /** @type { !number } */
    this.position;
    /** @type { !number } */
    this.length;
  }
};
chrome.mojom.MediaDataSource_Read_ResponseParams = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
  }
};
