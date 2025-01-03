// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/events/devices/mojo/touch_device_transform.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../gfx/mojo/transform.mojom.js');
  }



  function TouchDeviceTransform(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TouchDeviceTransform.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.deviceId = 0;
    this.transform = null;
    this.radiusScale = 0;
  };
  TouchDeviceTransform.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TouchDeviceTransform.generate = function(generator_) {
    var generated = new TouchDeviceTransform;
    generated.displayId = generator_.generateInt64();
    generated.deviceId = generator_.generateInt32();
    generated.transform = generator_.generateStruct(gfx.mojom.Transform, false);
    generated.radiusScale = generator_.generateDouble();
    return generated;
  };

  TouchDeviceTransform.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateInt32(this.deviceId);
    }
    if (mutator_.chooseMutateField()) {
      this.transform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    if (mutator_.chooseMutateField()) {
      this.radiusScale = mutator_.mutateDouble(this.radiusScale);
    }
    return this;
  };
  TouchDeviceTransform.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TouchDeviceTransform.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TouchDeviceTransform.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TouchDeviceTransform.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate TouchDeviceTransform.transform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TouchDeviceTransform.encodedSize = codec.kStructHeaderSize + 32;

  TouchDeviceTransform.decode = function(decoder) {
    var packed;
    var val = new TouchDeviceTransform();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.deviceId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.transform = decoder.decodeStructPointer(transform$.Transform);
    val.radiusScale = decoder.decodeStruct(codec.Double);
    return val;
  };

  TouchDeviceTransform.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TouchDeviceTransform.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStruct(codec.Int32, val.deviceId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(transform$.Transform, val.transform);
    encoder.encodeStruct(codec.Double, val.radiusScale);
  };
  exports.TouchDeviceTransform = TouchDeviceTransform;
})();