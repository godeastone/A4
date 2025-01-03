// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/gamma_ramp_rgb_entry.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('display.mojom');



  function GammaRampRGBEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GammaRampRGBEntry.prototype.initDefaults_ = function() {
    this.r = 0;
    this.g = 0;
    this.b = 0;
  };
  GammaRampRGBEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GammaRampRGBEntry.generate = function(generator_) {
    var generated = new GammaRampRGBEntry;
    generated.r = generator_.generateUint16();
    generated.g = generator_.generateUint16();
    generated.b = generator_.generateUint16();
    return generated;
  };

  GammaRampRGBEntry.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.r = mutator_.mutateUint16(this.r);
    }
    if (mutator_.chooseMutateField()) {
      this.g = mutator_.mutateUint16(this.g);
    }
    if (mutator_.chooseMutateField()) {
      this.b = mutator_.mutateUint16(this.b);
    }
    return this;
  };
  GammaRampRGBEntry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GammaRampRGBEntry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GammaRampRGBEntry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GammaRampRGBEntry.validate = function(messageValidator, offset) {
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

  GammaRampRGBEntry.encodedSize = codec.kStructHeaderSize + 8;

  GammaRampRGBEntry.decode = function(decoder) {
    var packed;
    var val = new GammaRampRGBEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.r = decoder.decodeStruct(codec.Uint16);
    val.g = decoder.decodeStruct(codec.Uint16);
    val.b = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GammaRampRGBEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GammaRampRGBEntry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.r);
    encoder.encodeStruct(codec.Uint16, val.g);
    encoder.encodeStruct(codec.Uint16, val.b);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.GammaRampRGBEntry = GammaRampRGBEntry;
})();