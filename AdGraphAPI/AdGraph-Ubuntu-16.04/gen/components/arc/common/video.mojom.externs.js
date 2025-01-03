// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoHostPtr = class {

  /**
   * @return {Promise}
   */
   onBootstrapVideoAcceleratorFactory() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoHost;
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoInstancePtr = class {

  /**
   * @param { !arc.mojom.VideoHostPtr } hostPtr
   */
   initDeprecated(hostPtr) {}
  /**
   * @param { !arc.mojom.VideoHostPtr } hostPtr
   * @return {Promise}
   */
   init(hostPtr) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoInstance;
/** @implements {mojo.InterfacePtr} */
arc.mojom.VideoAcceleratorFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } videoEncoder
   */
   createEncodeAccelerator(videoEncoder) {}
  /**
   * @param { !mojo.InterfaceRequest } videoDecoder
   */
   createDecodeAccelerator(videoDecoder) {}
  /**
   * @param { !mojo.InterfaceRequest } videoProtectedBufferAllocator
   */
   createProtectedBufferAllocator(videoProtectedBufferAllocator) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
arc.mojom.VideoAcceleratorFactory;
arc.mojom.VideoHost_OnBootstrapVideoAcceleratorFactory_Params = class {
  constructor() {
  }
};
arc.mojom.VideoHost_OnBootstrapVideoAcceleratorFactory_ResponseParams = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.channelHandle;
    /** @type { !string } */
    this.token;
  }
};
arc.mojom.VideoInstance_InitDeprecated_Params = class {
  constructor() {
    /** @type { !arc.mojom.VideoHostPtr } */
    this.hostPtr;
  }
};
arc.mojom.VideoInstance_Init_Params = class {
  constructor() {
    /** @type { !arc.mojom.VideoHostPtr } */
    this.hostPtr;
  }
};
arc.mojom.VideoInstance_Init_ResponseParams = class {
  constructor() {
  }
};
arc.mojom.VideoAcceleratorFactory_CreateEncodeAccelerator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.videoEncoder;
  }
};
arc.mojom.VideoAcceleratorFactory_CreateDecodeAccelerator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.videoDecoder;
  }
};
arc.mojom.VideoAcceleratorFactory_CreateProtectedBufferAllocator_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.videoProtectedBufferAllocator;
  }
};
