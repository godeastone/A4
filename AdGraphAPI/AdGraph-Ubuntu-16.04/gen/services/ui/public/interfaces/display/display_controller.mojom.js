// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/display/display_controller.mojom';
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
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function DisplayController_IncreaseInternalDisplayZoom_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_IncreaseInternalDisplayZoom_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_IncreaseInternalDisplayZoom_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_IncreaseInternalDisplayZoom_Params.generate = function(generator_) {
    var generated = new DisplayController_IncreaseInternalDisplayZoom_Params;
    return generated;
  };

  DisplayController_IncreaseInternalDisplayZoom_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_IncreaseInternalDisplayZoom_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_IncreaseInternalDisplayZoom_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_IncreaseInternalDisplayZoom_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_IncreaseInternalDisplayZoom_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_IncreaseInternalDisplayZoom_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_IncreaseInternalDisplayZoom_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_IncreaseInternalDisplayZoom_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_IncreaseInternalDisplayZoom_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_IncreaseInternalDisplayZoom_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_DecreaseInternalDisplayZoom_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_DecreaseInternalDisplayZoom_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_DecreaseInternalDisplayZoom_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_DecreaseInternalDisplayZoom_Params.generate = function(generator_) {
    var generated = new DisplayController_DecreaseInternalDisplayZoom_Params;
    return generated;
  };

  DisplayController_DecreaseInternalDisplayZoom_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_DecreaseInternalDisplayZoom_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_DecreaseInternalDisplayZoom_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_DecreaseInternalDisplayZoom_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_DecreaseInternalDisplayZoom_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_DecreaseInternalDisplayZoom_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_DecreaseInternalDisplayZoom_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_DecreaseInternalDisplayZoom_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_DecreaseInternalDisplayZoom_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_DecreaseInternalDisplayZoom_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_ResetInternalDisplayZoom_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_ResetInternalDisplayZoom_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_ResetInternalDisplayZoom_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_ResetInternalDisplayZoom_Params.generate = function(generator_) {
    var generated = new DisplayController_ResetInternalDisplayZoom_Params;
    return generated;
  };

  DisplayController_ResetInternalDisplayZoom_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_ResetInternalDisplayZoom_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_ResetInternalDisplayZoom_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_ResetInternalDisplayZoom_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_ResetInternalDisplayZoom_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_ResetInternalDisplayZoom_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_ResetInternalDisplayZoom_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_ResetInternalDisplayZoom_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_ResetInternalDisplayZoom_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_ResetInternalDisplayZoom_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_RotateCurrentDisplayCW_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_RotateCurrentDisplayCW_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_RotateCurrentDisplayCW_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_RotateCurrentDisplayCW_Params.generate = function(generator_) {
    var generated = new DisplayController_RotateCurrentDisplayCW_Params;
    return generated;
  };

  DisplayController_RotateCurrentDisplayCW_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_RotateCurrentDisplayCW_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_RotateCurrentDisplayCW_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_RotateCurrentDisplayCW_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_RotateCurrentDisplayCW_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_RotateCurrentDisplayCW_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_RotateCurrentDisplayCW_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_RotateCurrentDisplayCW_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_RotateCurrentDisplayCW_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_RotateCurrentDisplayCW_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_SwapPrimaryDisplay_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_SwapPrimaryDisplay_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_SwapPrimaryDisplay_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_SwapPrimaryDisplay_Params.generate = function(generator_) {
    var generated = new DisplayController_SwapPrimaryDisplay_Params;
    return generated;
  };

  DisplayController_SwapPrimaryDisplay_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_SwapPrimaryDisplay_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_SwapPrimaryDisplay_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_SwapPrimaryDisplay_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_SwapPrimaryDisplay_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_SwapPrimaryDisplay_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_SwapPrimaryDisplay_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_SwapPrimaryDisplay_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_SwapPrimaryDisplay_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_SwapPrimaryDisplay_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_ToggleMirrorMode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_ToggleMirrorMode_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_ToggleMirrorMode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_ToggleMirrorMode_Params.generate = function(generator_) {
    var generated = new DisplayController_ToggleMirrorMode_Params;
    return generated;
  };

  DisplayController_ToggleMirrorMode_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_ToggleMirrorMode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_ToggleMirrorMode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_ToggleMirrorMode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_ToggleMirrorMode_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_ToggleMirrorMode_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_ToggleMirrorMode_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_ToggleMirrorMode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_ToggleMirrorMode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_ToggleMirrorMode_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_TakeDisplayControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_TakeDisplayControl_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_TakeDisplayControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_TakeDisplayControl_Params.generate = function(generator_) {
    var generated = new DisplayController_TakeDisplayControl_Params;
    return generated;
  };

  DisplayController_TakeDisplayControl_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_TakeDisplayControl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_TakeDisplayControl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_TakeDisplayControl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_TakeDisplayControl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_TakeDisplayControl_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_TakeDisplayControl_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_TakeDisplayControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_TakeDisplayControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_TakeDisplayControl_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_TakeDisplayControl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_TakeDisplayControl_ResponseParams.prototype.initDefaults_ = function() {
    this.status = false;
  };
  DisplayController_TakeDisplayControl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_TakeDisplayControl_ResponseParams.generate = function(generator_) {
    var generated = new DisplayController_TakeDisplayControl_ResponseParams;
    generated.status = generator_.generateBool();
    return generated;
  };

  DisplayController_TakeDisplayControl_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateBool(this.status);
    }
    return this;
  };
  DisplayController_TakeDisplayControl_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_TakeDisplayControl_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_TakeDisplayControl_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_TakeDisplayControl_ResponseParams.validate = function(messageValidator, offset) {
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

  DisplayController_TakeDisplayControl_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DisplayController_TakeDisplayControl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DisplayController_TakeDisplayControl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.status = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DisplayController_TakeDisplayControl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_TakeDisplayControl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.status & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DisplayController_RelinquishDisplayControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_RelinquishDisplayControl_Params.prototype.initDefaults_ = function() {
  };
  DisplayController_RelinquishDisplayControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_RelinquishDisplayControl_Params.generate = function(generator_) {
    var generated = new DisplayController_RelinquishDisplayControl_Params;
    return generated;
  };

  DisplayController_RelinquishDisplayControl_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DisplayController_RelinquishDisplayControl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_RelinquishDisplayControl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_RelinquishDisplayControl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_RelinquishDisplayControl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_RelinquishDisplayControl_Params.encodedSize = codec.kStructHeaderSize + 0;

  DisplayController_RelinquishDisplayControl_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_RelinquishDisplayControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DisplayController_RelinquishDisplayControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_RelinquishDisplayControl_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DisplayController_RelinquishDisplayControl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_RelinquishDisplayControl_ResponseParams.prototype.initDefaults_ = function() {
    this.status = false;
  };
  DisplayController_RelinquishDisplayControl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_RelinquishDisplayControl_ResponseParams.generate = function(generator_) {
    var generated = new DisplayController_RelinquishDisplayControl_ResponseParams;
    generated.status = generator_.generateBool();
    return generated;
  };

  DisplayController_RelinquishDisplayControl_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateBool(this.status);
    }
    return this;
  };
  DisplayController_RelinquishDisplayControl_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_RelinquishDisplayControl_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_RelinquishDisplayControl_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_RelinquishDisplayControl_ResponseParams.validate = function(messageValidator, offset) {
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

  DisplayController_RelinquishDisplayControl_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DisplayController_RelinquishDisplayControl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DisplayController_RelinquishDisplayControl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.status = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DisplayController_RelinquishDisplayControl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_RelinquishDisplayControl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.status & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DisplayController_SetDisplayWorkArea_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayController_SetDisplayWorkArea_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.size = null;
    this.insets = null;
  };
  DisplayController_SetDisplayWorkArea_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayController_SetDisplayWorkArea_Params.generate = function(generator_) {
    var generated = new DisplayController_SetDisplayWorkArea_Params;
    generated.displayId = generator_.generateInt64();
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    generated.insets = generator_.generateStruct(gfx.mojom.Insets, false);
    return generated;
  };

  DisplayController_SetDisplayWorkArea_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.insets = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    return this;
  };
  DisplayController_SetDisplayWorkArea_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayController_SetDisplayWorkArea_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayController_SetDisplayWorkArea_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayController_SetDisplayWorkArea_Params.validate = function(messageValidator, offset) {
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



    // validate DisplayController_SetDisplayWorkArea_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayController_SetDisplayWorkArea_Params.insets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayController_SetDisplayWorkArea_Params.encodedSize = codec.kStructHeaderSize + 24;

  DisplayController_SetDisplayWorkArea_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayController_SetDisplayWorkArea_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.insets = decoder.decodeStructPointer(geometry$.Insets);
    return val;
  };

  DisplayController_SetDisplayWorkArea_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayController_SetDisplayWorkArea_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStructPointer(geometry$.Insets, val.insets);
  };
  var kDisplayController_IncreaseInternalDisplayZoom_Name = 990736016;
  var kDisplayController_DecreaseInternalDisplayZoom_Name = 643786694;
  var kDisplayController_ResetInternalDisplayZoom_Name = 1340808013;
  var kDisplayController_RotateCurrentDisplayCW_Name = 299024122;
  var kDisplayController_SwapPrimaryDisplay_Name = 1064718937;
  var kDisplayController_ToggleMirrorMode_Name = 1510793238;
  var kDisplayController_TakeDisplayControl_Name = 1876903779;
  var kDisplayController_RelinquishDisplayControl_Name = 1168941872;
  var kDisplayController_SetDisplayWorkArea_Name = 960632813;

  function DisplayControllerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DisplayController,
                                                   handleOrPtrInfo);
  }

  function DisplayControllerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DisplayController, associatedInterfacePtrInfo);
  }

  DisplayControllerAssociatedPtr.prototype =
      Object.create(DisplayControllerPtr.prototype);
  DisplayControllerAssociatedPtr.prototype.constructor =
      DisplayControllerAssociatedPtr;

  function DisplayControllerProxy(receiver) {
    this.receiver_ = receiver;
  }
  DisplayControllerPtr.prototype.increaseInternalDisplayZoom = function() {
    return DisplayControllerProxy.prototype.increaseInternalDisplayZoom
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.increaseInternalDisplayZoom = function() {
    var params_ = new DisplayController_IncreaseInternalDisplayZoom_Params();
    var builder = new codec.MessageV0Builder(
        kDisplayController_IncreaseInternalDisplayZoom_Name,
        codec.align(DisplayController_IncreaseInternalDisplayZoom_Params.encodedSize));
    builder.encodeStruct(DisplayController_IncreaseInternalDisplayZoom_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayControllerPtr.prototype.decreaseInternalDisplayZoom = function() {
    return DisplayControllerProxy.prototype.decreaseInternalDisplayZoom
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.decreaseInternalDisplayZoom = function() {
    var params_ = new DisplayController_DecreaseInternalDisplayZoom_Params();
    var builder = new codec.MessageV0Builder(
        kDisplayController_DecreaseInternalDisplayZoom_Name,
        codec.align(DisplayController_DecreaseInternalDisplayZoom_Params.encodedSize));
    builder.encodeStruct(DisplayController_DecreaseInternalDisplayZoom_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayControllerPtr.prototype.resetInternalDisplayZoom = function() {
    return DisplayControllerProxy.prototype.resetInternalDisplayZoom
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.resetInternalDisplayZoom = function() {
    var params_ = new DisplayController_ResetInternalDisplayZoom_Params();
    var builder = new codec.MessageV0Builder(
        kDisplayController_ResetInternalDisplayZoom_Name,
        codec.align(DisplayController_ResetInternalDisplayZoom_Params.encodedSize));
    builder.encodeStruct(DisplayController_ResetInternalDisplayZoom_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayControllerPtr.prototype.rotateCurrentDisplayCW = function() {
    return DisplayControllerProxy.prototype.rotateCurrentDisplayCW
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.rotateCurrentDisplayCW = function() {
    var params_ = new DisplayController_RotateCurrentDisplayCW_Params();
    var builder = new codec.MessageV0Builder(
        kDisplayController_RotateCurrentDisplayCW_Name,
        codec.align(DisplayController_RotateCurrentDisplayCW_Params.encodedSize));
    builder.encodeStruct(DisplayController_RotateCurrentDisplayCW_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayControllerPtr.prototype.swapPrimaryDisplay = function() {
    return DisplayControllerProxy.prototype.swapPrimaryDisplay
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.swapPrimaryDisplay = function() {
    var params_ = new DisplayController_SwapPrimaryDisplay_Params();
    var builder = new codec.MessageV0Builder(
        kDisplayController_SwapPrimaryDisplay_Name,
        codec.align(DisplayController_SwapPrimaryDisplay_Params.encodedSize));
    builder.encodeStruct(DisplayController_SwapPrimaryDisplay_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayControllerPtr.prototype.toggleMirrorMode = function() {
    return DisplayControllerProxy.prototype.toggleMirrorMode
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.toggleMirrorMode = function() {
    var params_ = new DisplayController_ToggleMirrorMode_Params();
    var builder = new codec.MessageV0Builder(
        kDisplayController_ToggleMirrorMode_Name,
        codec.align(DisplayController_ToggleMirrorMode_Params.encodedSize));
    builder.encodeStruct(DisplayController_ToggleMirrorMode_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayControllerPtr.prototype.takeDisplayControl = function() {
    return DisplayControllerProxy.prototype.takeDisplayControl
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.takeDisplayControl = function() {
    var params_ = new DisplayController_TakeDisplayControl_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDisplayController_TakeDisplayControl_Name,
          codec.align(DisplayController_TakeDisplayControl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DisplayController_TakeDisplayControl_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DisplayController_TakeDisplayControl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DisplayControllerPtr.prototype.relinquishDisplayControl = function() {
    return DisplayControllerProxy.prototype.relinquishDisplayControl
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.relinquishDisplayControl = function() {
    var params_ = new DisplayController_RelinquishDisplayControl_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDisplayController_RelinquishDisplayControl_Name,
          codec.align(DisplayController_RelinquishDisplayControl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DisplayController_RelinquishDisplayControl_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DisplayController_RelinquishDisplayControl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DisplayControllerPtr.prototype.setDisplayWorkArea = function() {
    return DisplayControllerProxy.prototype.setDisplayWorkArea
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayControllerProxy.prototype.setDisplayWorkArea = function(displayId, size, insets) {
    var params_ = new DisplayController_SetDisplayWorkArea_Params();
    params_.displayId = displayId;
    params_.size = size;
    params_.insets = insets;
    var builder = new codec.MessageV0Builder(
        kDisplayController_SetDisplayWorkArea_Name,
        codec.align(DisplayController_SetDisplayWorkArea_Params.encodedSize));
    builder.encodeStruct(DisplayController_SetDisplayWorkArea_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DisplayControllerStub(delegate) {
    this.delegate_ = delegate;
  }
  DisplayControllerStub.prototype.increaseInternalDisplayZoom = function() {
    return this.delegate_ && this.delegate_.increaseInternalDisplayZoom && this.delegate_.increaseInternalDisplayZoom();
  }
  DisplayControllerStub.prototype.decreaseInternalDisplayZoom = function() {
    return this.delegate_ && this.delegate_.decreaseInternalDisplayZoom && this.delegate_.decreaseInternalDisplayZoom();
  }
  DisplayControllerStub.prototype.resetInternalDisplayZoom = function() {
    return this.delegate_ && this.delegate_.resetInternalDisplayZoom && this.delegate_.resetInternalDisplayZoom();
  }
  DisplayControllerStub.prototype.rotateCurrentDisplayCW = function() {
    return this.delegate_ && this.delegate_.rotateCurrentDisplayCW && this.delegate_.rotateCurrentDisplayCW();
  }
  DisplayControllerStub.prototype.swapPrimaryDisplay = function() {
    return this.delegate_ && this.delegate_.swapPrimaryDisplay && this.delegate_.swapPrimaryDisplay();
  }
  DisplayControllerStub.prototype.toggleMirrorMode = function() {
    return this.delegate_ && this.delegate_.toggleMirrorMode && this.delegate_.toggleMirrorMode();
  }
  DisplayControllerStub.prototype.takeDisplayControl = function() {
    return this.delegate_ && this.delegate_.takeDisplayControl && this.delegate_.takeDisplayControl();
  }
  DisplayControllerStub.prototype.relinquishDisplayControl = function() {
    return this.delegate_ && this.delegate_.relinquishDisplayControl && this.delegate_.relinquishDisplayControl();
  }
  DisplayControllerStub.prototype.setDisplayWorkArea = function(displayId, size, insets) {
    return this.delegate_ && this.delegate_.setDisplayWorkArea && this.delegate_.setDisplayWorkArea(displayId, size, insets);
  }

  DisplayControllerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayController_IncreaseInternalDisplayZoom_Name:
      var params = reader.decodeStruct(DisplayController_IncreaseInternalDisplayZoom_Params);
      this.increaseInternalDisplayZoom();
      return true;
    case kDisplayController_DecreaseInternalDisplayZoom_Name:
      var params = reader.decodeStruct(DisplayController_DecreaseInternalDisplayZoom_Params);
      this.decreaseInternalDisplayZoom();
      return true;
    case kDisplayController_ResetInternalDisplayZoom_Name:
      var params = reader.decodeStruct(DisplayController_ResetInternalDisplayZoom_Params);
      this.resetInternalDisplayZoom();
      return true;
    case kDisplayController_RotateCurrentDisplayCW_Name:
      var params = reader.decodeStruct(DisplayController_RotateCurrentDisplayCW_Params);
      this.rotateCurrentDisplayCW();
      return true;
    case kDisplayController_SwapPrimaryDisplay_Name:
      var params = reader.decodeStruct(DisplayController_SwapPrimaryDisplay_Params);
      this.swapPrimaryDisplay();
      return true;
    case kDisplayController_ToggleMirrorMode_Name:
      var params = reader.decodeStruct(DisplayController_ToggleMirrorMode_Params);
      this.toggleMirrorMode();
      return true;
    case kDisplayController_SetDisplayWorkArea_Name:
      var params = reader.decodeStruct(DisplayController_SetDisplayWorkArea_Params);
      this.setDisplayWorkArea(params.displayId, params.size, params.insets);
      return true;
    default:
      return false;
    }
  };

  DisplayControllerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayController_TakeDisplayControl_Name:
      var params = reader.decodeStruct(DisplayController_TakeDisplayControl_Params);
      this.takeDisplayControl().then(function(response) {
        var responseParams =
            new DisplayController_TakeDisplayControl_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kDisplayController_TakeDisplayControl_Name,
            codec.align(DisplayController_TakeDisplayControl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DisplayController_TakeDisplayControl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDisplayController_RelinquishDisplayControl_Name:
      var params = reader.decodeStruct(DisplayController_RelinquishDisplayControl_Params);
      this.relinquishDisplayControl().then(function(response) {
        var responseParams =
            new DisplayController_RelinquishDisplayControl_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kDisplayController_RelinquishDisplayControl_Name,
            codec.align(DisplayController_RelinquishDisplayControl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DisplayController_RelinquishDisplayControl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDisplayControllerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplayController_IncreaseInternalDisplayZoom_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_IncreaseInternalDisplayZoom_Params;
      break;
      case kDisplayController_DecreaseInternalDisplayZoom_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_DecreaseInternalDisplayZoom_Params;
      break;
      case kDisplayController_ResetInternalDisplayZoom_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_ResetInternalDisplayZoom_Params;
      break;
      case kDisplayController_RotateCurrentDisplayCW_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_RotateCurrentDisplayCW_Params;
      break;
      case kDisplayController_SwapPrimaryDisplay_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_SwapPrimaryDisplay_Params;
      break;
      case kDisplayController_ToggleMirrorMode_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_ToggleMirrorMode_Params;
      break;
      case kDisplayController_TakeDisplayControl_Name:
        if (message.expectsResponse())
          paramsClass = DisplayController_TakeDisplayControl_Params;
      break;
      case kDisplayController_RelinquishDisplayControl_Name:
        if (message.expectsResponse())
          paramsClass = DisplayController_RelinquishDisplayControl_Params;
      break;
      case kDisplayController_SetDisplayWorkArea_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayController_SetDisplayWorkArea_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayControllerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDisplayController_TakeDisplayControl_Name:
        if (message.isResponse())
          paramsClass = DisplayController_TakeDisplayControl_ResponseParams;
        break;
      case kDisplayController_RelinquishDisplayControl_Name:
        if (message.isResponse())
          paramsClass = DisplayController_RelinquishDisplayControl_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DisplayController = {
    name: 'display.mojom.DisplayController',
    kVersion: 0,
    ptrClass: DisplayControllerPtr,
    proxyClass: DisplayControllerProxy,
    stubClass: DisplayControllerStub,
    validateRequest: validateDisplayControllerRequest,
    validateResponse: validateDisplayControllerResponse,
    mojomId: 'services/ui/public/interfaces/display/display_controller.mojom',
    fuzzMethods: {
      increaseInternalDisplayZoom: {
        params: DisplayController_IncreaseInternalDisplayZoom_Params,
      },
      decreaseInternalDisplayZoom: {
        params: DisplayController_DecreaseInternalDisplayZoom_Params,
      },
      resetInternalDisplayZoom: {
        params: DisplayController_ResetInternalDisplayZoom_Params,
      },
      rotateCurrentDisplayCW: {
        params: DisplayController_RotateCurrentDisplayCW_Params,
      },
      swapPrimaryDisplay: {
        params: DisplayController_SwapPrimaryDisplay_Params,
      },
      toggleMirrorMode: {
        params: DisplayController_ToggleMirrorMode_Params,
      },
      takeDisplayControl: {
        params: DisplayController_TakeDisplayControl_Params,
      },
      relinquishDisplayControl: {
        params: DisplayController_RelinquishDisplayControl_Params,
      },
      setDisplayWorkArea: {
        params: DisplayController_SetDisplayWorkArea_Params,
      },
    },
  };
  DisplayControllerStub.prototype.validator = validateDisplayControllerRequest;
  DisplayControllerProxy.prototype.validator = validateDisplayControllerResponse;
  exports.DisplayController = DisplayController;
  exports.DisplayControllerPtr = DisplayControllerPtr;
  exports.DisplayControllerAssociatedPtr = DisplayControllerAssociatedPtr;
})();