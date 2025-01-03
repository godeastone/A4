// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let audio = {};
/** @const */
audio.mojom = {};
/** @implements {mojo.InterfacePtr} */
audio.mojom.DebugRecordingFileProviderPtr = class {

  /**
   * @param { !audio.mojom.DebugRecordingStreamType } streamType
   * @param { !number } id
   * @return {Promise}
   */
   createWavFile(streamType, id) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.DebugRecordingFileProvider;
/** @implements {mojo.InterfacePtr} */
audio.mojom.DebugRecordingPtr = class {

  /**
   * @param { !audio.mojom.DebugRecordingFileProviderPtr } fileProvider
   */
   enable(fileProvider) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
audio.mojom.DebugRecording;
audio.mojom.DebugRecordingFileProvider_CreateWavFile_Params = class {
  constructor() {
    /** @type { !audio.mojom.DebugRecordingStreamType } */
    this.streamType;
    /** @type { !number } */
    this.id;
  }
};
audio.mojom.DebugRecordingFileProvider_CreateWavFile_ResponseParams = class {
  constructor() {
    /** @type { mojoBase.mojom.File } */
    this.file;
  }
};
audio.mojom.DebugRecording_Enable_Params = class {
  constructor() {
    /** @type { !audio.mojom.DebugRecordingFileProviderPtr } */
    this.fileProvider;
  }
};
