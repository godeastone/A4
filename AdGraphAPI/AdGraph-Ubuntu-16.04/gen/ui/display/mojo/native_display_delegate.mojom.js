// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/native_display_delegate.mojom';
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
  var display_snapshot$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display_snapshot.mojom', 'display_snapshot.mojom.js');
  }
  var gamma_ramp_rgb_entry$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/gamma_ramp_rgb_entry.mojom', 'gamma_ramp_rgb_entry.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../gfx/geometry/mojo/geometry.mojom.js');
  }



  function NativeDisplayObserver_OnConfigurationChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayObserver_OnConfigurationChanged_Params.prototype.initDefaults_ = function() {
  };
  NativeDisplayObserver_OnConfigurationChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayObserver_OnConfigurationChanged_Params.generate = function(generator_) {
    var generated = new NativeDisplayObserver_OnConfigurationChanged_Params;
    return generated;
  };

  NativeDisplayObserver_OnConfigurationChanged_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NativeDisplayObserver_OnConfigurationChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayObserver_OnConfigurationChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayObserver_OnConfigurationChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayObserver_OnConfigurationChanged_Params.validate = function(messageValidator, offset) {
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

  NativeDisplayObserver_OnConfigurationChanged_Params.encodedSize = codec.kStructHeaderSize + 0;

  NativeDisplayObserver_OnConfigurationChanged_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayObserver_OnConfigurationChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NativeDisplayObserver_OnConfigurationChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayObserver_OnConfigurationChanged_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NativeDisplayDelegate_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_Initialize_Params.prototype.initDefaults_ = function() {
    this.observer = new NativeDisplayObserverPtr();
  };
  NativeDisplayDelegate_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_Initialize_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_Initialize_Params;
    generated.observer = generator_.generateInterface("display.mojom.NativeDisplayObserver", false);
    return generated;
  };

  NativeDisplayDelegate_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "display.mojom.NativeDisplayObserver", false);
    }
    return this;
  };
  NativeDisplayDelegate_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["display.mojom.NativeDisplayObserverPtr"]);
    }
    return handles;
  };

  NativeDisplayDelegate_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  NativeDisplayDelegate_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate NativeDisplayDelegate_Initialize_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_Initialize_Params.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.Interface(NativeDisplayObserverPtr));
    return val;
  };

  NativeDisplayDelegate_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(NativeDisplayObserverPtr), val.observer);
  };
  function NativeDisplayDelegate_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.snapshots = null;
  };
  NativeDisplayDelegate_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_Initialize_ResponseParams;
    generated.snapshots = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.DisplaySnapshot, false);
    });
    return generated;
  };

  NativeDisplayDelegate_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.snapshots = mutator_.mutateArray(this.snapshots, function(val) {
        return mutator_.mutateStruct(display.mojom.DisplaySnapshot, false);
      });
    }
    return this;
  };
  NativeDisplayDelegate_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate NativeDisplayDelegate_Initialize_ResponseParams.snapshots
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(display_snapshot$.DisplaySnapshot), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.snapshots = decoder.decodeArrayPointer(new codec.PointerTo(display_snapshot$.DisplaySnapshot));
    return val;
  };

  NativeDisplayDelegate_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(display_snapshot$.DisplaySnapshot), val.snapshots);
  };
  function NativeDisplayDelegate_TakeDisplayControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_TakeDisplayControl_Params.prototype.initDefaults_ = function() {
  };
  NativeDisplayDelegate_TakeDisplayControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_TakeDisplayControl_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_TakeDisplayControl_Params;
    return generated;
  };

  NativeDisplayDelegate_TakeDisplayControl_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NativeDisplayDelegate_TakeDisplayControl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_TakeDisplayControl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_TakeDisplayControl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_TakeDisplayControl_Params.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_TakeDisplayControl_Params.encodedSize = codec.kStructHeaderSize + 0;

  NativeDisplayDelegate_TakeDisplayControl_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_TakeDisplayControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NativeDisplayDelegate_TakeDisplayControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_TakeDisplayControl_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NativeDisplayDelegate_TakeDisplayControl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_TakeDisplayControl_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_TakeDisplayControl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NativeDisplayDelegate_TakeDisplayControl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_TakeDisplayControl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NativeDisplayDelegate_RelinquishDisplayControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_RelinquishDisplayControl_Params.prototype.initDefaults_ = function() {
  };
  NativeDisplayDelegate_RelinquishDisplayControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_RelinquishDisplayControl_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_RelinquishDisplayControl_Params;
    return generated;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NativeDisplayDelegate_RelinquishDisplayControl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_RelinquishDisplayControl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_Params.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_RelinquishDisplayControl_Params.encodedSize = codec.kStructHeaderSize + 0;

  NativeDisplayDelegate_RelinquishDisplayControl_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_RelinquishDisplayControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_RelinquishDisplayControl_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NativeDisplayDelegate_GetDisplays_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_GetDisplays_Params.prototype.initDefaults_ = function() {
  };
  NativeDisplayDelegate_GetDisplays_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_GetDisplays_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_GetDisplays_Params;
    return generated;
  };

  NativeDisplayDelegate_GetDisplays_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NativeDisplayDelegate_GetDisplays_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_GetDisplays_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_GetDisplays_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_GetDisplays_Params.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_GetDisplays_Params.encodedSize = codec.kStructHeaderSize + 0;

  NativeDisplayDelegate_GetDisplays_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_GetDisplays_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NativeDisplayDelegate_GetDisplays_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_GetDisplays_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NativeDisplayDelegate_GetDisplays_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_GetDisplays_ResponseParams.prototype.initDefaults_ = function() {
    this.snapshots = null;
  };
  NativeDisplayDelegate_GetDisplays_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_GetDisplays_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_GetDisplays_ResponseParams;
    generated.snapshots = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.DisplaySnapshot, false);
    });
    return generated;
  };

  NativeDisplayDelegate_GetDisplays_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.snapshots = mutator_.mutateArray(this.snapshots, function(val) {
        return mutator_.mutateStruct(display.mojom.DisplaySnapshot, false);
      });
    }
    return this;
  };
  NativeDisplayDelegate_GetDisplays_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_GetDisplays_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_GetDisplays_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_GetDisplays_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate NativeDisplayDelegate_GetDisplays_ResponseParams.snapshots
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(display_snapshot$.DisplaySnapshot), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_GetDisplays_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_GetDisplays_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_GetDisplays_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.snapshots = decoder.decodeArrayPointer(new codec.PointerTo(display_snapshot$.DisplaySnapshot));
    return val;
  };

  NativeDisplayDelegate_GetDisplays_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_GetDisplays_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(display_snapshot$.DisplaySnapshot), val.snapshots);
  };
  function NativeDisplayDelegate_Configure_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_Configure_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.mode = null;
    this.origin = null;
  };
  NativeDisplayDelegate_Configure_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_Configure_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_Configure_Params;
    generated.displayId = generator_.generateInt64();
    generated.mode = generator_.generateStruct(display.mojom.DisplayMode, true);
    generated.origin = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  NativeDisplayDelegate_Configure_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateStruct(display.mojom.DisplayMode, true);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  NativeDisplayDelegate_Configure_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_Configure_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_Configure_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_Configure_Params.validate = function(messageValidator, offset) {
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



    // validate NativeDisplayDelegate_Configure_Params.mode
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, display_mode$.DisplayMode, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NativeDisplayDelegate_Configure_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_Configure_Params.encodedSize = codec.kStructHeaderSize + 24;

  NativeDisplayDelegate_Configure_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_Configure_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.mode = decoder.decodeStructPointer(display_mode$.DisplayMode);
    val.origin = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  NativeDisplayDelegate_Configure_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_Configure_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(display_mode$.DisplayMode, val.mode);
    encoder.encodeStructPointer(geometry$.Point, val.origin);
  };
  function NativeDisplayDelegate_Configure_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_Configure_ResponseParams.prototype.initDefaults_ = function() {
    this.status = false;
  };
  NativeDisplayDelegate_Configure_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_Configure_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_Configure_ResponseParams;
    generated.status = generator_.generateBool();
    return generated;
  };

  NativeDisplayDelegate_Configure_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateBool(this.status);
    }
    return this;
  };
  NativeDisplayDelegate_Configure_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_Configure_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_Configure_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_Configure_ResponseParams.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_Configure_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_Configure_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_Configure_ResponseParams();
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

  NativeDisplayDelegate_Configure_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_Configure_ResponseParams.encodedSize);
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
  function NativeDisplayDelegate_GetHDCPState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_GetHDCPState_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
  };
  NativeDisplayDelegate_GetHDCPState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_GetHDCPState_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_GetHDCPState_Params;
    generated.displayId = generator_.generateInt64();
    return generated;
  };

  NativeDisplayDelegate_GetHDCPState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    return this;
  };
  NativeDisplayDelegate_GetHDCPState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_GetHDCPState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_GetHDCPState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_GetHDCPState_Params.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_GetHDCPState_Params.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_GetHDCPState_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_GetHDCPState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  NativeDisplayDelegate_GetHDCPState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_GetHDCPState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
  };
  function NativeDisplayDelegate_GetHDCPState_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_GetHDCPState_ResponseParams.prototype.initDefaults_ = function() {
    this.status = false;
    this.state = 0;
  };
  NativeDisplayDelegate_GetHDCPState_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_GetHDCPState_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_GetHDCPState_ResponseParams;
    generated.status = generator_.generateBool();
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  NativeDisplayDelegate_GetHDCPState_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateBool(this.status);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  NativeDisplayDelegate_GetHDCPState_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_GetHDCPState_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_GetHDCPState_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_GetHDCPState_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate NativeDisplayDelegate_GetHDCPState_ResponseParams.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, display_constants$.HDCPState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_GetHDCPState_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_GetHDCPState_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_GetHDCPState_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.status = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.state = decoder.decodeStruct(codec.Int32);
    return val;
  };

  NativeDisplayDelegate_GetHDCPState_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_GetHDCPState_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.status & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.state);
  };
  function NativeDisplayDelegate_SetHDCPState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_SetHDCPState_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.state = 0;
  };
  NativeDisplayDelegate_SetHDCPState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_SetHDCPState_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_SetHDCPState_Params;
    generated.displayId = generator_.generateInt64();
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  NativeDisplayDelegate_SetHDCPState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  NativeDisplayDelegate_SetHDCPState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_SetHDCPState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_SetHDCPState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_SetHDCPState_Params.validate = function(messageValidator, offset) {
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



    // validate NativeDisplayDelegate_SetHDCPState_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, display_constants$.HDCPState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_SetHDCPState_Params.encodedSize = codec.kStructHeaderSize + 16;

  NativeDisplayDelegate_SetHDCPState_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_SetHDCPState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NativeDisplayDelegate_SetHDCPState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_SetHDCPState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NativeDisplayDelegate_SetHDCPState_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_SetHDCPState_ResponseParams.prototype.initDefaults_ = function() {
    this.status = false;
  };
  NativeDisplayDelegate_SetHDCPState_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_SetHDCPState_ResponseParams.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_SetHDCPState_ResponseParams;
    generated.status = generator_.generateBool();
    return generated;
  };

  NativeDisplayDelegate_SetHDCPState_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateBool(this.status);
    }
    return this;
  };
  NativeDisplayDelegate_SetHDCPState_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_SetHDCPState_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_SetHDCPState_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_SetHDCPState_ResponseParams.validate = function(messageValidator, offset) {
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

  NativeDisplayDelegate_SetHDCPState_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NativeDisplayDelegate_SetHDCPState_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_SetHDCPState_ResponseParams();
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

  NativeDisplayDelegate_SetHDCPState_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_SetHDCPState_ResponseParams.encodedSize);
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
  function NativeDisplayDelegate_SetColorCorrection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeDisplayDelegate_SetColorCorrection_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.degammaLut = null;
    this.gammaLut = null;
    this.correctionMatrix = null;
  };
  NativeDisplayDelegate_SetColorCorrection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeDisplayDelegate_SetColorCorrection_Params.generate = function(generator_) {
    var generated = new NativeDisplayDelegate_SetColorCorrection_Params;
    generated.displayId = generator_.generateInt64();
    generated.degammaLut = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.GammaRampRGBEntry, false);
    });
    generated.gammaLut = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.GammaRampRGBEntry, false);
    });
    generated.correctionMatrix = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    return generated;
  };

  NativeDisplayDelegate_SetColorCorrection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.degammaLut = mutator_.mutateArray(this.degammaLut, function(val) {
        return mutator_.mutateStruct(display.mojom.GammaRampRGBEntry, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.gammaLut = mutator_.mutateArray(this.gammaLut, function(val) {
        return mutator_.mutateStruct(display.mojom.GammaRampRGBEntry, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.correctionMatrix = mutator_.mutateArray(this.correctionMatrix, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    return this;
  };
  NativeDisplayDelegate_SetColorCorrection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativeDisplayDelegate_SetColorCorrection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeDisplayDelegate_SetColorCorrection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativeDisplayDelegate_SetColorCorrection_Params.validate = function(messageValidator, offset) {
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



    // validate NativeDisplayDelegate_SetColorCorrection_Params.degammaLut
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(gamma_ramp_rgb_entry$.GammaRampRGBEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NativeDisplayDelegate_SetColorCorrection_Params.gammaLut
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(gamma_ramp_rgb_entry$.GammaRampRGBEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NativeDisplayDelegate_SetColorCorrection_Params.correctionMatrix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 4, codec.Float, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeDisplayDelegate_SetColorCorrection_Params.encodedSize = codec.kStructHeaderSize + 32;

  NativeDisplayDelegate_SetColorCorrection_Params.decode = function(decoder) {
    var packed;
    var val = new NativeDisplayDelegate_SetColorCorrection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.degammaLut = decoder.decodeArrayPointer(new codec.PointerTo(gamma_ramp_rgb_entry$.GammaRampRGBEntry));
    val.gammaLut = decoder.decodeArrayPointer(new codec.PointerTo(gamma_ramp_rgb_entry$.GammaRampRGBEntry));
    val.correctionMatrix = decoder.decodeArrayPointer(codec.Float);
    return val;
  };

  NativeDisplayDelegate_SetColorCorrection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeDisplayDelegate_SetColorCorrection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeArrayPointer(new codec.PointerTo(gamma_ramp_rgb_entry$.GammaRampRGBEntry), val.degammaLut);
    encoder.encodeArrayPointer(new codec.PointerTo(gamma_ramp_rgb_entry$.GammaRampRGBEntry), val.gammaLut);
    encoder.encodeArrayPointer(codec.Float, val.correctionMatrix);
  };
  var kNativeDisplayObserver_OnConfigurationChanged_Name = 1904639121;

  function NativeDisplayObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NativeDisplayObserver,
                                                   handleOrPtrInfo);
  }

  function NativeDisplayObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NativeDisplayObserver, associatedInterfacePtrInfo);
  }

  NativeDisplayObserverAssociatedPtr.prototype =
      Object.create(NativeDisplayObserverPtr.prototype);
  NativeDisplayObserverAssociatedPtr.prototype.constructor =
      NativeDisplayObserverAssociatedPtr;

  function NativeDisplayObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  NativeDisplayObserverPtr.prototype.onConfigurationChanged = function() {
    return NativeDisplayObserverProxy.prototype.onConfigurationChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayObserverProxy.prototype.onConfigurationChanged = function() {
    var params_ = new NativeDisplayObserver_OnConfigurationChanged_Params();
    var builder = new codec.MessageV0Builder(
        kNativeDisplayObserver_OnConfigurationChanged_Name,
        codec.align(NativeDisplayObserver_OnConfigurationChanged_Params.encodedSize));
    builder.encodeStruct(NativeDisplayObserver_OnConfigurationChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NativeDisplayObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  NativeDisplayObserverStub.prototype.onConfigurationChanged = function() {
    return this.delegate_ && this.delegate_.onConfigurationChanged && this.delegate_.onConfigurationChanged();
  }

  NativeDisplayObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNativeDisplayObserver_OnConfigurationChanged_Name:
      var params = reader.decodeStruct(NativeDisplayObserver_OnConfigurationChanged_Params);
      this.onConfigurationChanged();
      return true;
    default:
      return false;
    }
  };

  NativeDisplayObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNativeDisplayObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNativeDisplayObserver_OnConfigurationChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NativeDisplayObserver_OnConfigurationChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNativeDisplayObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NativeDisplayObserver = {
    name: 'display.mojom.NativeDisplayObserver',
    kVersion: 0,
    ptrClass: NativeDisplayObserverPtr,
    proxyClass: NativeDisplayObserverProxy,
    stubClass: NativeDisplayObserverStub,
    validateRequest: validateNativeDisplayObserverRequest,
    validateResponse: null,
    mojomId: 'ui/display/mojo/native_display_delegate.mojom',
    fuzzMethods: {
      onConfigurationChanged: {
        params: NativeDisplayObserver_OnConfigurationChanged_Params,
      },
    },
  };
  NativeDisplayObserverStub.prototype.validator = validateNativeDisplayObserverRequest;
  NativeDisplayObserverProxy.prototype.validator = null;
  var kNativeDisplayDelegate_Initialize_Name = 2006440092;
  var kNativeDisplayDelegate_TakeDisplayControl_Name = 1397741610;
  var kNativeDisplayDelegate_RelinquishDisplayControl_Name = 104122531;
  var kNativeDisplayDelegate_GetDisplays_Name = 272993300;
  var kNativeDisplayDelegate_Configure_Name = 840284099;
  var kNativeDisplayDelegate_GetHDCPState_Name = 1845563605;
  var kNativeDisplayDelegate_SetHDCPState_Name = 363752367;
  var kNativeDisplayDelegate_SetColorCorrection_Name = 1626169386;

  function NativeDisplayDelegatePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NativeDisplayDelegate,
                                                   handleOrPtrInfo);
  }

  function NativeDisplayDelegateAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NativeDisplayDelegate, associatedInterfacePtrInfo);
  }

  NativeDisplayDelegateAssociatedPtr.prototype =
      Object.create(NativeDisplayDelegatePtr.prototype);
  NativeDisplayDelegateAssociatedPtr.prototype.constructor =
      NativeDisplayDelegateAssociatedPtr;

  function NativeDisplayDelegateProxy(receiver) {
    this.receiver_ = receiver;
  }
  NativeDisplayDelegatePtr.prototype.initialize = function() {
    return NativeDisplayDelegateProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.initialize = function(observer) {
    var params_ = new NativeDisplayDelegate_Initialize_Params();
    params_.observer = observer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_Initialize_Name,
          codec.align(NativeDisplayDelegate_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.takeDisplayControl = function() {
    return NativeDisplayDelegateProxy.prototype.takeDisplayControl
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.takeDisplayControl = function() {
    var params_ = new NativeDisplayDelegate_TakeDisplayControl_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_TakeDisplayControl_Name,
          codec.align(NativeDisplayDelegate_TakeDisplayControl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_TakeDisplayControl_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_TakeDisplayControl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.relinquishDisplayControl = function() {
    return NativeDisplayDelegateProxy.prototype.relinquishDisplayControl
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.relinquishDisplayControl = function() {
    var params_ = new NativeDisplayDelegate_RelinquishDisplayControl_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_RelinquishDisplayControl_Name,
          codec.align(NativeDisplayDelegate_RelinquishDisplayControl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_RelinquishDisplayControl_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.getDisplays = function() {
    return NativeDisplayDelegateProxy.prototype.getDisplays
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.getDisplays = function() {
    var params_ = new NativeDisplayDelegate_GetDisplays_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_GetDisplays_Name,
          codec.align(NativeDisplayDelegate_GetDisplays_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_GetDisplays_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_GetDisplays_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.configure = function() {
    return NativeDisplayDelegateProxy.prototype.configure
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.configure = function(displayId, mode, origin) {
    var params_ = new NativeDisplayDelegate_Configure_Params();
    params_.displayId = displayId;
    params_.mode = mode;
    params_.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_Configure_Name,
          codec.align(NativeDisplayDelegate_Configure_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_Configure_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_Configure_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.getHDCPState = function() {
    return NativeDisplayDelegateProxy.prototype.getHDCPState
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.getHDCPState = function(displayId) {
    var params_ = new NativeDisplayDelegate_GetHDCPState_Params();
    params_.displayId = displayId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_GetHDCPState_Name,
          codec.align(NativeDisplayDelegate_GetHDCPState_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_GetHDCPState_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_GetHDCPState_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.setHDCPState = function() {
    return NativeDisplayDelegateProxy.prototype.setHDCPState
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.setHDCPState = function(displayId, state) {
    var params_ = new NativeDisplayDelegate_SetHDCPState_Params();
    params_.displayId = displayId;
    params_.state = state;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNativeDisplayDelegate_SetHDCPState_Name,
          codec.align(NativeDisplayDelegate_SetHDCPState_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NativeDisplayDelegate_SetHDCPState_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NativeDisplayDelegate_SetHDCPState_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NativeDisplayDelegatePtr.prototype.setColorCorrection = function() {
    return NativeDisplayDelegateProxy.prototype.setColorCorrection
        .apply(this.ptr.getProxy(), arguments);
  };

  NativeDisplayDelegateProxy.prototype.setColorCorrection = function(displayId, degammaLut, gammaLut, correctionMatrix) {
    var params_ = new NativeDisplayDelegate_SetColorCorrection_Params();
    params_.displayId = displayId;
    params_.degammaLut = degammaLut;
    params_.gammaLut = gammaLut;
    params_.correctionMatrix = correctionMatrix;
    var builder = new codec.MessageV0Builder(
        kNativeDisplayDelegate_SetColorCorrection_Name,
        codec.align(NativeDisplayDelegate_SetColorCorrection_Params.encodedSize));
    builder.encodeStruct(NativeDisplayDelegate_SetColorCorrection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NativeDisplayDelegateStub(delegate) {
    this.delegate_ = delegate;
  }
  NativeDisplayDelegateStub.prototype.initialize = function(observer) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(observer);
  }
  NativeDisplayDelegateStub.prototype.takeDisplayControl = function() {
    return this.delegate_ && this.delegate_.takeDisplayControl && this.delegate_.takeDisplayControl();
  }
  NativeDisplayDelegateStub.prototype.relinquishDisplayControl = function() {
    return this.delegate_ && this.delegate_.relinquishDisplayControl && this.delegate_.relinquishDisplayControl();
  }
  NativeDisplayDelegateStub.prototype.getDisplays = function() {
    return this.delegate_ && this.delegate_.getDisplays && this.delegate_.getDisplays();
  }
  NativeDisplayDelegateStub.prototype.configure = function(displayId, mode, origin) {
    return this.delegate_ && this.delegate_.configure && this.delegate_.configure(displayId, mode, origin);
  }
  NativeDisplayDelegateStub.prototype.getHDCPState = function(displayId) {
    return this.delegate_ && this.delegate_.getHDCPState && this.delegate_.getHDCPState(displayId);
  }
  NativeDisplayDelegateStub.prototype.setHDCPState = function(displayId, state) {
    return this.delegate_ && this.delegate_.setHDCPState && this.delegate_.setHDCPState(displayId, state);
  }
  NativeDisplayDelegateStub.prototype.setColorCorrection = function(displayId, degammaLut, gammaLut, correctionMatrix) {
    return this.delegate_ && this.delegate_.setColorCorrection && this.delegate_.setColorCorrection(displayId, degammaLut, gammaLut, correctionMatrix);
  }

  NativeDisplayDelegateStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNativeDisplayDelegate_SetColorCorrection_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_SetColorCorrection_Params);
      this.setColorCorrection(params.displayId, params.degammaLut, params.gammaLut, params.correctionMatrix);
      return true;
    default:
      return false;
    }
  };

  NativeDisplayDelegateStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNativeDisplayDelegate_Initialize_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_Initialize_Params);
      this.initialize(params.observer).then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_Initialize_ResponseParams();
        responseParams.snapshots = response.snapshots;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_Initialize_Name,
            codec.align(NativeDisplayDelegate_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNativeDisplayDelegate_TakeDisplayControl_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_TakeDisplayControl_Params);
      this.takeDisplayControl().then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_TakeDisplayControl_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_TakeDisplayControl_Name,
            codec.align(NativeDisplayDelegate_TakeDisplayControl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_TakeDisplayControl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNativeDisplayDelegate_RelinquishDisplayControl_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_RelinquishDisplayControl_Params);
      this.relinquishDisplayControl().then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_RelinquishDisplayControl_Name,
            codec.align(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNativeDisplayDelegate_GetDisplays_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_GetDisplays_Params);
      this.getDisplays().then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_GetDisplays_ResponseParams();
        responseParams.snapshots = response.snapshots;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_GetDisplays_Name,
            codec.align(NativeDisplayDelegate_GetDisplays_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_GetDisplays_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNativeDisplayDelegate_Configure_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_Configure_Params);
      this.configure(params.displayId, params.mode, params.origin).then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_Configure_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_Configure_Name,
            codec.align(NativeDisplayDelegate_Configure_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_Configure_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNativeDisplayDelegate_GetHDCPState_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_GetHDCPState_Params);
      this.getHDCPState(params.displayId).then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_GetHDCPState_ResponseParams();
        responseParams.status = response.status;
        responseParams.state = response.state;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_GetHDCPState_Name,
            codec.align(NativeDisplayDelegate_GetHDCPState_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_GetHDCPState_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNativeDisplayDelegate_SetHDCPState_Name:
      var params = reader.decodeStruct(NativeDisplayDelegate_SetHDCPState_Params);
      this.setHDCPState(params.displayId, params.state).then(function(response) {
        var responseParams =
            new NativeDisplayDelegate_SetHDCPState_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kNativeDisplayDelegate_SetHDCPState_Name,
            codec.align(NativeDisplayDelegate_SetHDCPState_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NativeDisplayDelegate_SetHDCPState_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNativeDisplayDelegateRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNativeDisplayDelegate_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_Initialize_Params;
      break;
      case kNativeDisplayDelegate_TakeDisplayControl_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_TakeDisplayControl_Params;
      break;
      case kNativeDisplayDelegate_RelinquishDisplayControl_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_RelinquishDisplayControl_Params;
      break;
      case kNativeDisplayDelegate_GetDisplays_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_GetDisplays_Params;
      break;
      case kNativeDisplayDelegate_Configure_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_Configure_Params;
      break;
      case kNativeDisplayDelegate_GetHDCPState_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_GetHDCPState_Params;
      break;
      case kNativeDisplayDelegate_SetHDCPState_Name:
        if (message.expectsResponse())
          paramsClass = NativeDisplayDelegate_SetHDCPState_Params;
      break;
      case kNativeDisplayDelegate_SetColorCorrection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NativeDisplayDelegate_SetColorCorrection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNativeDisplayDelegateResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNativeDisplayDelegate_Initialize_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_Initialize_ResponseParams;
        break;
      case kNativeDisplayDelegate_TakeDisplayControl_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_TakeDisplayControl_ResponseParams;
        break;
      case kNativeDisplayDelegate_RelinquishDisplayControl_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_RelinquishDisplayControl_ResponseParams;
        break;
      case kNativeDisplayDelegate_GetDisplays_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_GetDisplays_ResponseParams;
        break;
      case kNativeDisplayDelegate_Configure_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_Configure_ResponseParams;
        break;
      case kNativeDisplayDelegate_GetHDCPState_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_GetHDCPState_ResponseParams;
        break;
      case kNativeDisplayDelegate_SetHDCPState_Name:
        if (message.isResponse())
          paramsClass = NativeDisplayDelegate_SetHDCPState_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NativeDisplayDelegate = {
    name: 'display.mojom.NativeDisplayDelegate',
    kVersion: 0,
    ptrClass: NativeDisplayDelegatePtr,
    proxyClass: NativeDisplayDelegateProxy,
    stubClass: NativeDisplayDelegateStub,
    validateRequest: validateNativeDisplayDelegateRequest,
    validateResponse: validateNativeDisplayDelegateResponse,
    mojomId: 'ui/display/mojo/native_display_delegate.mojom',
    fuzzMethods: {
      initialize: {
        params: NativeDisplayDelegate_Initialize_Params,
      },
      takeDisplayControl: {
        params: NativeDisplayDelegate_TakeDisplayControl_Params,
      },
      relinquishDisplayControl: {
        params: NativeDisplayDelegate_RelinquishDisplayControl_Params,
      },
      getDisplays: {
        params: NativeDisplayDelegate_GetDisplays_Params,
      },
      configure: {
        params: NativeDisplayDelegate_Configure_Params,
      },
      getHDCPState: {
        params: NativeDisplayDelegate_GetHDCPState_Params,
      },
      setHDCPState: {
        params: NativeDisplayDelegate_SetHDCPState_Params,
      },
      setColorCorrection: {
        params: NativeDisplayDelegate_SetColorCorrection_Params,
      },
    },
  };
  NativeDisplayDelegateStub.prototype.validator = validateNativeDisplayDelegateRequest;
  NativeDisplayDelegateProxy.prototype.validator = validateNativeDisplayDelegateResponse;
  exports.NativeDisplayObserver = NativeDisplayObserver;
  exports.NativeDisplayObserverPtr = NativeDisplayObserverPtr;
  exports.NativeDisplayObserverAssociatedPtr = NativeDisplayObserverAssociatedPtr;
  exports.NativeDisplayDelegate = NativeDisplayDelegate;
  exports.NativeDisplayDelegatePtr = NativeDisplayDelegatePtr;
  exports.NativeDisplayDelegateAssociatedPtr = NativeDisplayDelegateAssociatedPtr;
})();