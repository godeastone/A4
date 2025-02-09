// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/local_surface_id.mojom';
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
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }



  function LocalSurfaceId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LocalSurfaceId.prototype.initDefaults_ = function() {
    this.parentSequenceNumber = 0;
    this.childSequenceNumber = 0;
    this.embedToken = null;
  };
  LocalSurfaceId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LocalSurfaceId.generate = function(generator_) {
    var generated = new LocalSurfaceId;
    generated.parentSequenceNumber = generator_.generateUint32();
    generated.childSequenceNumber = generator_.generateUint32();
    generated.embedToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  LocalSurfaceId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parentSequenceNumber = mutator_.mutateUint32(this.parentSequenceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.childSequenceNumber = mutator_.mutateUint32(this.childSequenceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.embedToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  LocalSurfaceId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LocalSurfaceId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LocalSurfaceId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LocalSurfaceId.validate = function(messageValidator, offset) {
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




    // validate LocalSurfaceId.embedToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LocalSurfaceId.encodedSize = codec.kStructHeaderSize + 16;

  LocalSurfaceId.decode = function(decoder) {
    var packed;
    var val = new LocalSurfaceId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parentSequenceNumber = decoder.decodeStruct(codec.Uint32);
    val.childSequenceNumber = decoder.decodeStruct(codec.Uint32);
    val.embedToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  LocalSurfaceId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LocalSurfaceId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.parentSequenceNumber);
    encoder.encodeStruct(codec.Uint32, val.childSequenceNumber);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.embedToken);
  };
  exports.LocalSurfaceId = LocalSurfaceId;
})();