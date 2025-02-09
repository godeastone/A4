// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/returned_resource.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../../gpu/ipc/common/sync_token.mojom.js');
  }



  function ReturnedResource(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReturnedResource.prototype.initDefaults_ = function() {
    this.id = 0;
    this.count = 0;
    this.syncToken = null;
    this.lost = false;
  };
  ReturnedResource.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ReturnedResource.generate = function(generator_) {
    var generated = new ReturnedResource;
    generated.id = generator_.generateUint32();
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    generated.count = generator_.generateInt32();
    generated.lost = generator_.generateBool();
    return generated;
  };

  ReturnedResource.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateInt32(this.count);
    }
    if (mutator_.chooseMutateField()) {
      this.lost = mutator_.mutateBool(this.lost);
    }
    return this;
  };
  ReturnedResource.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ReturnedResource.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ReturnedResource.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ReturnedResource.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ReturnedResource.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ReturnedResource.encodedSize = codec.kStructHeaderSize + 24;

  ReturnedResource.decode = function(decoder) {
    var packed;
    var val = new ReturnedResource();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.count = decoder.decodeStruct(codec.Int32);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    packed = decoder.readUint8();
    val.lost = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ReturnedResource.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReturnedResource.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Int32, val.count);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
    packed = 0;
    packed |= (val.lost & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.ReturnedResource = ReturnedResource;
})();