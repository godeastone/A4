// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/display_mode.mojom';
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
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../gfx/geometry/mojo/geometry.mojom.js');
  }



  function DisplayMode(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayMode.prototype.initDefaults_ = function() {
    this.size = null;
    this.isInterlaced = false;
    this.refreshRate = 0;
  };
  DisplayMode.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayMode.generate = function(generator_) {
    var generated = new DisplayMode;
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    generated.isInterlaced = generator_.generateBool();
    generated.refreshRate = generator_.generateFloat();
    return generated;
  };

  DisplayMode.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isInterlaced = mutator_.mutateBool(this.isInterlaced);
    }
    if (mutator_.chooseMutateField()) {
      this.refreshRate = mutator_.mutateFloat(this.refreshRate);
    }
    return this;
  };
  DisplayMode.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayMode.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayMode.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayMode.validate = function(messageValidator, offset) {
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


    // validate DisplayMode.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  DisplayMode.encodedSize = codec.kStructHeaderSize + 16;

  DisplayMode.decode = function(decoder) {
    var packed;
    var val = new DisplayMode();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStructPointer(geometry$.Size);
    packed = decoder.readUint8();
    val.isInterlaced = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.refreshRate = decoder.decodeStruct(codec.Float);
    return val;
  };

  DisplayMode.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayMode.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    packed = 0;
    packed |= (val.isInterlaced & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Float, val.refreshRate);
  };
  exports.DisplayMode = DisplayMode;
})();