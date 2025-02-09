// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/ref_counted_memory.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojoBase.mojom');
  var big_buffer$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/big_buffer.mojom', 'big_buffer.mojom.js');
  }



  function RefCountedMemory(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RefCountedMemory.prototype.initDefaults_ = function() {
    this.data = null;
  };
  RefCountedMemory.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RefCountedMemory.generate = function(generator_) {
    var generated = new RefCountedMemory;
    generated.data = generator_.generateUnion(mojoBase.mojom.BigBuffer, false);
    return generated;
  };

  RefCountedMemory.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateUnion(mojoBase.mojom.BigBuffer, false);
    }
    return this;
  };
  RefCountedMemory.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.data !== null) {
      Array.prototype.push.apply(handles, this.data.getHandleDeps());
    }
    return handles;
  };

  RefCountedMemory.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RefCountedMemory.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.data.setHandlesInternal_(handles, idx);
    return idx;
  };

  RefCountedMemory.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RefCountedMemory.data
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, big_buffer$.BigBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RefCountedMemory.encodedSize = codec.kStructHeaderSize + 16;

  RefCountedMemory.decode = function(decoder) {
    var packed;
    var val = new RefCountedMemory();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStruct(big_buffer$.BigBuffer);
    return val;
  };

  RefCountedMemory.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RefCountedMemory.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(big_buffer$.BigBuffer, val.data);
  };
  exports.RefCountedMemory = RefCountedMemory;
})();