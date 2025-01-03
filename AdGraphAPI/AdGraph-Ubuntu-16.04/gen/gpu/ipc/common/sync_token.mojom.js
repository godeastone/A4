// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/sync_token.mojom';
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


  var CommandBufferNamespace = {};
  CommandBufferNamespace.INVALID = -1;
  CommandBufferNamespace.GPU_IO = CommandBufferNamespace.INVALID + 1;
  CommandBufferNamespace.IN_PROCESS = CommandBufferNamespace.GPU_IO + 1;
  CommandBufferNamespace.MOJO = CommandBufferNamespace.IN_PROCESS + 1;
  CommandBufferNamespace.MOJO_LOCAL = CommandBufferNamespace.MOJO + 1;
  CommandBufferNamespace.NUM_COMMAND_BUFFER_NAMESPACES = CommandBufferNamespace.MOJO_LOCAL + 1;

  CommandBufferNamespace.isKnownEnumValue = function(value) {
    switch (value) {
    case -1:
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  CommandBufferNamespace.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SyncToken(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyncToken.prototype.initDefaults_ = function() {
    this.verifiedFlush = false;
    this.namespaceId = 0;
    this.commandBufferId = 0;
    this.releaseCount = 0;
  };
  SyncToken.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyncToken.generate = function(generator_) {
    var generated = new SyncToken;
    generated.verifiedFlush = generator_.generateBool();
    generated.namespaceId = generator_.generateEnum(0, 4);
    generated.commandBufferId = generator_.generateUint64();
    generated.releaseCount = generator_.generateUint64();
    return generated;
  };

  SyncToken.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.verifiedFlush = mutator_.mutateBool(this.verifiedFlush);
    }
    if (mutator_.chooseMutateField()) {
      this.namespaceId = mutator_.mutateEnum(this.namespaceId, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.commandBufferId = mutator_.mutateUint64(this.commandBufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.releaseCount = mutator_.mutateUint64(this.releaseCount);
    }
    return this;
  };
  SyncToken.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyncToken.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyncToken.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyncToken.validate = function(messageValidator, offset) {
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



    // validate SyncToken.namespaceId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, CommandBufferNamespace);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SyncToken.encodedSize = codec.kStructHeaderSize + 24;

  SyncToken.decode = function(decoder) {
    var packed;
    var val = new SyncToken();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.verifiedFlush = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.namespaceId = decoder.decodeStruct(codec.Int32);
    val.commandBufferId = decoder.decodeStruct(codec.Uint64);
    val.releaseCount = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  SyncToken.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyncToken.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.verifiedFlush & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.namespaceId);
    encoder.encodeStruct(codec.Uint64, val.commandBufferId);
    encoder.encodeStruct(codec.Uint64, val.releaseCount);
  };
  exports.CommandBufferNamespace = CommandBufferNamespace;
  exports.SyncToken = SyncToken;
})();