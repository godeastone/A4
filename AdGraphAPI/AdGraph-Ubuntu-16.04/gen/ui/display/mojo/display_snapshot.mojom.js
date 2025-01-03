// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/display_snapshot.mojom';
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
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var display_constants$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display_constants.mojom', 'display_constants.mojom.js');
  }
  var display_mode$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display_mode.mojom', 'display_mode.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../gfx/geometry/mojo/geometry.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', '../../gfx/mojo/color_space.mojom.js');
  }



  function DisplaySnapshot(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplaySnapshot.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.origin = null;
    this.physicalSize = null;
    this.type = 0;
    this.isAspectPreservingScaling = false;
    this.hasOverscan = false;
    this.hasColorCorrectionMatrix = false;
    this.hasCurrentMode = false;
    this.hasNativeMode = false;
    this.colorSpace = null;
    this.displayName = null;
    this.sysPath = null;
    this.modes = null;
    this.edid = null;
    this.currentModeIndex = 0;
    this.nativeModeIndex = 0;
    this.productCode = 0;
    this.yearOfManufacture = 0;
    this.maximumCursorSize = null;
  };
  DisplaySnapshot.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplaySnapshot.generate = function(generator_) {
    var generated = new DisplaySnapshot;
    generated.displayId = generator_.generateInt64();
    generated.origin = generator_.generateStruct(gfx.mojom.Point, false);
    generated.physicalSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.type = generator_.generateEnum(0, 64);
    generated.isAspectPreservingScaling = generator_.generateBool();
    generated.hasOverscan = generator_.generateBool();
    generated.hasColorCorrectionMatrix = generator_.generateBool();
    generated.colorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    generated.displayName = generator_.generateString(false);
    generated.sysPath = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.modes = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.DisplayMode, false);
    });
    generated.edid = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.currentModeIndex = generator_.generateUint64();
    generated.hasCurrentMode = generator_.generateBool();
    generated.nativeModeIndex = generator_.generateUint64();
    generated.hasNativeMode = generator_.generateBool();
    generated.productCode = generator_.generateInt64();
    generated.yearOfManufacture = generator_.generateInt32();
    generated.maximumCursorSize = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  DisplaySnapshot.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.physicalSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 64);
    }
    if (mutator_.chooseMutateField()) {
      this.isAspectPreservingScaling = mutator_.mutateBool(this.isAspectPreservingScaling);
    }
    if (mutator_.chooseMutateField()) {
      this.hasOverscan = mutator_.mutateBool(this.hasOverscan);
    }
    if (mutator_.chooseMutateField()) {
      this.hasColorCorrectionMatrix = mutator_.mutateBool(this.hasColorCorrectionMatrix);
    }
    if (mutator_.chooseMutateField()) {
      this.colorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateString(this.displayName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sysPath = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.modes = mutator_.mutateArray(this.modes, function(val) {
        return mutator_.mutateStruct(display.mojom.DisplayMode, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.edid = mutator_.mutateArray(this.edid, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.currentModeIndex = mutator_.mutateUint64(this.currentModeIndex);
    }
    if (mutator_.chooseMutateField()) {
      this.hasCurrentMode = mutator_.mutateBool(this.hasCurrentMode);
    }
    if (mutator_.chooseMutateField()) {
      this.nativeModeIndex = mutator_.mutateUint64(this.nativeModeIndex);
    }
    if (mutator_.chooseMutateField()) {
      this.hasNativeMode = mutator_.mutateBool(this.hasNativeMode);
    }
    if (mutator_.chooseMutateField()) {
      this.productCode = mutator_.mutateInt64(this.productCode);
    }
    if (mutator_.chooseMutateField()) {
      this.yearOfManufacture = mutator_.mutateInt32(this.yearOfManufacture);
    }
    if (mutator_.chooseMutateField()) {
      this.maximumCursorSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  DisplaySnapshot.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplaySnapshot.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplaySnapshot.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplaySnapshot.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 120}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate DisplaySnapshot.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplaySnapshot.physicalSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplaySnapshot.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, display_constants$.DisplayConnectionType);
    if (err !== validator.validationError.NONE)
        return err;





    // validate DisplaySnapshot.colorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplaySnapshot.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplaySnapshot.sysPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplaySnapshot.modes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 56, 8, new codec.PointerTo(display_mode$.DisplayMode), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplaySnapshot.edid
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;








    // validate DisplaySnapshot.maximumCursorSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 104, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplaySnapshot.encodedSize = codec.kStructHeaderSize + 112;

  DisplaySnapshot.decode = function(decoder) {
    var packed;
    var val = new DisplaySnapshot();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.origin = decoder.decodeStructPointer(geometry$.Point);
    val.physicalSize = decoder.decodeStructPointer(geometry$.Size);
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isAspectPreservingScaling = (packed >> 0) & 1 ? true : false;
    val.hasOverscan = (packed >> 1) & 1 ? true : false;
    val.hasColorCorrectionMatrix = (packed >> 2) & 1 ? true : false;
    val.hasCurrentMode = (packed >> 3) & 1 ? true : false;
    val.hasNativeMode = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.colorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    val.displayName = decoder.decodeStruct(codec.String);
    val.sysPath = decoder.decodeStructPointer(file_path$.FilePath);
    val.modes = decoder.decodeArrayPointer(new codec.PointerTo(display_mode$.DisplayMode));
    val.edid = decoder.decodeArrayPointer(codec.Uint8);
    val.currentModeIndex = decoder.decodeStruct(codec.Uint64);
    val.nativeModeIndex = decoder.decodeStruct(codec.Uint64);
    val.productCode = decoder.decodeStruct(codec.Int64);
    val.yearOfManufacture = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maximumCursorSize = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  DisplaySnapshot.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplaySnapshot.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(geometry$.Point, val.origin);
    encoder.encodeStructPointer(geometry$.Size, val.physicalSize);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.isAspectPreservingScaling & 1) << 0
    packed |= (val.hasOverscan & 1) << 1
    packed |= (val.hasColorCorrectionMatrix & 1) << 2
    packed |= (val.hasCurrentMode & 1) << 3
    packed |= (val.hasNativeMode & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.colorSpace);
    encoder.encodeStruct(codec.String, val.displayName);
    encoder.encodeStructPointer(file_path$.FilePath, val.sysPath);
    encoder.encodeArrayPointer(new codec.PointerTo(display_mode$.DisplayMode), val.modes);
    encoder.encodeArrayPointer(codec.Uint8, val.edid);
    encoder.encodeStruct(codec.Uint64, val.currentModeIndex);
    encoder.encodeStruct(codec.Uint64, val.nativeModeIndex);
    encoder.encodeStruct(codec.Int64, val.productCode);
    encoder.encodeStruct(codec.Int32, val.yearOfManufacture);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.maximumCursorSize);
  };
  exports.DisplaySnapshot = DisplaySnapshot;
})();