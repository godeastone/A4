// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/big_string.mojom';
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



  function BigString(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BigString.prototype.initDefaults_ = function() {
    this.data = null;
  };
  BigString.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BigString.generate = function(generator_) {
    var generated = new BigString;
    generated.data = generator_.generateUnion(mojoBase.mojom.BigBuffer, false);
    return generated;
  };

  BigString.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateUnion(mojoBase.mojom.BigBuffer, false);
    }
    return this;
  };
  BigString.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.data !== null) {
      Array.prototype.push.apply(handles, this.data.getHandleDeps());
    }
    return handles;
  };

  BigString.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BigString.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.data.setHandlesInternal_(handles, idx);
    return idx;
  };

  BigString.validate = function(messageValidator, offset) {
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


    // validate BigString.data
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, big_buffer$.BigBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BigString.encodedSize = codec.kStructHeaderSize + 16;

  BigString.decode = function(decoder) {
    var packed;
    var val = new BigString();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStruct(big_buffer$.BigBuffer);
    return val;
  };

  BigString.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BigString.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(big_buffer$.BigBuffer, val.data);
  };
  exports.BigString = BigString;
})();