// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var big_buffer$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/big_buffer.mojom', '../../../../../mojo/public/mojom/base/big_buffer.mojom.js');
  }



  function SerializedArrayBufferContents(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SerializedArrayBufferContents.prototype.initDefaults_ = function() {
    this.contents = null;
  };
  SerializedArrayBufferContents.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerializedArrayBufferContents.generate = function(generator_) {
    var generated = new SerializedArrayBufferContents;
    generated.contents = generator_.generateUnion(mojoBase.mojom.BigBuffer, false);
    return generated;
  };

  SerializedArrayBufferContents.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.contents = mutator_.mutateUnion(mojoBase.mojom.BigBuffer, false);
    }
    return this;
  };
  SerializedArrayBufferContents.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.contents !== null) {
      Array.prototype.push.apply(handles, this.contents.getHandleDeps());
    }
    return handles;
  };

  SerializedArrayBufferContents.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerializedArrayBufferContents.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.contents.setHandlesInternal_(handles, idx);
    return idx;
  };

  SerializedArrayBufferContents.validate = function(messageValidator, offset) {
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


    // validate SerializedArrayBufferContents.contents
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, big_buffer$.BigBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerializedArrayBufferContents.encodedSize = codec.kStructHeaderSize + 16;

  SerializedArrayBufferContents.decode = function(decoder) {
    var packed;
    var val = new SerializedArrayBufferContents();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.contents = decoder.decodeStruct(big_buffer$.BigBuffer);
    return val;
  };

  SerializedArrayBufferContents.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerializedArrayBufferContents.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(big_buffer$.BigBuffer, val.contents);
  };
  exports.SerializedArrayBufferContents = SerializedArrayBufferContents;
})();