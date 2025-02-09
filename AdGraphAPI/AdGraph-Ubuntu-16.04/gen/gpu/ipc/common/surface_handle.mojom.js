// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/surface_handle.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gpu.mojom');



  function SurfaceHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SurfaceHandle.prototype.initDefaults_ = function() {
    this.surfaceHandle = 0;
  };
  SurfaceHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SurfaceHandle.generate = function(generator_) {
    var generated = new SurfaceHandle;
    generated.surfaceHandle = generator_.generateUint64();
    return generated;
  };

  SurfaceHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceHandle = mutator_.mutateUint64(this.surfaceHandle);
    }
    return this;
  };
  SurfaceHandle.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SurfaceHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SurfaceHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SurfaceHandle.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SurfaceHandle.encodedSize = codec.kStructHeaderSize + 8;

  SurfaceHandle.decode = function(decoder) {
    var packed;
    var val = new SurfaceHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceHandle = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  SurfaceHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SurfaceHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.surfaceHandle);
  };
  exports.SurfaceHandle = SurfaceHandle;
})();