// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/input_devices/input_device_server.mojom';
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
  var input_devices$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/devices/mojo/input_devices.mojom', '../../../../../ui/events/devices/mojo/input_devices.mojom.js');
  }



  function InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.generate = function(generator_) {
    var generated = new InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.InputDevice, false);
    });
    return generated;
  };

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(ui.mojom.InputDevice, false);
      });
    }
    return this;
  };
  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(input_devices$.InputDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice));
    return val;
  };

  InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice), val.devices);
  };
  function InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.prototype.initDefaults_ = function() {
    this.devices = null;
    this.touchscreenTargetDisplayIdsChanged = false;
  };
  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.generate = function(generator_) {
    var generated = new InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.TouchscreenDevice, false);
    });
    generated.touchscreenTargetDisplayIdsChanged = generator_.generateBool();
    return generated;
  };

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(ui.mojom.TouchscreenDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.touchscreenTargetDisplayIdsChanged = mutator_.mutateBool(this.touchscreenTargetDisplayIdsChanged);
    }
    return this;
  };
  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(input_devices$.TouchscreenDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.TouchscreenDevice));
    packed = decoder.readUint8();
    val.touchscreenTargetDisplayIdsChanged = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.TouchscreenDevice), val.devices);
    packed = 0;
    packed |= (val.touchscreenTargetDisplayIdsChanged & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.generate = function(generator_) {
    var generated = new InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.InputDevice, false);
    });
    return generated;
  };

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(ui.mojom.InputDevice, false);
      });
    }
    return this;
  };
  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(input_devices$.InputDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice));
    return val;
  };

  InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice), val.devices);
  };
  function InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.prototype.initDefaults_ = function() {
    this.devices = null;
  };
  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.generate = function(generator_) {
    var generated = new InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params;
    generated.devices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.InputDevice, false);
    });
    return generated;
  };

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devices = mutator_.mutateArray(this.devices, function(val) {
        return mutator_.mutateStruct(ui.mojom.InputDevice, false);
      });
    }
    return this;
  };
  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.devices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(input_devices$.InputDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice));
    return val;
  };

  InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice), val.devices);
  };
  function InputDeviceObserverMojo_OnDeviceListsComplete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceObserverMojo_OnDeviceListsComplete_Params.prototype.initDefaults_ = function() {
    this.keyboardDevices = null;
    this.touchscreenDevices = null;
    this.mouseDevices = null;
    this.touchpadDevices = null;
    this.areTouchscreenTargetDisplaysValid = false;
  };
  InputDeviceObserverMojo_OnDeviceListsComplete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceObserverMojo_OnDeviceListsComplete_Params.generate = function(generator_) {
    var generated = new InputDeviceObserverMojo_OnDeviceListsComplete_Params;
    generated.keyboardDevices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.InputDevice, false);
    });
    generated.touchscreenDevices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.TouchscreenDevice, false);
    });
    generated.mouseDevices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.InputDevice, false);
    });
    generated.touchpadDevices = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.InputDevice, false);
    });
    generated.areTouchscreenTargetDisplaysValid = generator_.generateBool();
    return generated;
  };

  InputDeviceObserverMojo_OnDeviceListsComplete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyboardDevices = mutator_.mutateArray(this.keyboardDevices, function(val) {
        return mutator_.mutateStruct(ui.mojom.InputDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.touchscreenDevices = mutator_.mutateArray(this.touchscreenDevices, function(val) {
        return mutator_.mutateStruct(ui.mojom.TouchscreenDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.mouseDevices = mutator_.mutateArray(this.mouseDevices, function(val) {
        return mutator_.mutateStruct(ui.mojom.InputDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.touchpadDevices = mutator_.mutateArray(this.touchpadDevices, function(val) {
        return mutator_.mutateStruct(ui.mojom.InputDevice, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.areTouchscreenTargetDisplaysValid = mutator_.mutateBool(this.areTouchscreenTargetDisplaysValid);
    }
    return this;
  };
  InputDeviceObserverMojo_OnDeviceListsComplete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceObserverMojo_OnDeviceListsComplete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceObserverMojo_OnDeviceListsComplete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceObserverMojo_OnDeviceListsComplete_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceObserverMojo_OnDeviceListsComplete_Params.keyboardDevices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(input_devices$.InputDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceObserverMojo_OnDeviceListsComplete_Params.touchscreenDevices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(input_devices$.TouchscreenDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceObserverMojo_OnDeviceListsComplete_Params.mouseDevices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(input_devices$.InputDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputDeviceObserverMojo_OnDeviceListsComplete_Params.touchpadDevices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(input_devices$.InputDevice), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  InputDeviceObserverMojo_OnDeviceListsComplete_Params.encodedSize = codec.kStructHeaderSize + 40;

  InputDeviceObserverMojo_OnDeviceListsComplete_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceObserverMojo_OnDeviceListsComplete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyboardDevices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice));
    val.touchscreenDevices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.TouchscreenDevice));
    val.mouseDevices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice));
    val.touchpadDevices = decoder.decodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice));
    packed = decoder.readUint8();
    val.areTouchscreenTargetDisplaysValid = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputDeviceObserverMojo_OnDeviceListsComplete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceObserverMojo_OnDeviceListsComplete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice), val.keyboardDevices);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.TouchscreenDevice), val.touchscreenDevices);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice), val.mouseDevices);
    encoder.encodeArrayPointer(new codec.PointerTo(input_devices$.InputDevice), val.touchpadDevices);
    packed = 0;
    packed |= (val.areTouchscreenTargetDisplaysValid & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputDeviceObserverMojo_OnStylusStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceObserverMojo_OnStylusStateChanged_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  InputDeviceObserverMojo_OnStylusStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceObserverMojo_OnStylusStateChanged_Params.generate = function(generator_) {
    var generated = new InputDeviceObserverMojo_OnStylusStateChanged_Params;
    generated.state = generator_.generateEnum(0, 1);
    return generated;
  };

  InputDeviceObserverMojo_OnStylusStateChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 1);
    }
    return this;
  };
  InputDeviceObserverMojo_OnStylusStateChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputDeviceObserverMojo_OnStylusStateChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceObserverMojo_OnStylusStateChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputDeviceObserverMojo_OnStylusStateChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceObserverMojo_OnStylusStateChanged_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, input_devices$.StylusState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceObserverMojo_OnStylusStateChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceObserverMojo_OnStylusStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceObserverMojo_OnStylusStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InputDeviceObserverMojo_OnStylusStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceObserverMojo_OnStylusStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InputDeviceServer_AddObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputDeviceServer_AddObserver_Params.prototype.initDefaults_ = function() {
    this.observer = new InputDeviceObserverMojoPtr();
  };
  InputDeviceServer_AddObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputDeviceServer_AddObserver_Params.generate = function(generator_) {
    var generated = new InputDeviceServer_AddObserver_Params;
    generated.observer = generator_.generateInterface("ui.mojom.InputDeviceObserverMojo", false);
    return generated;
  };

  InputDeviceServer_AddObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "ui.mojom.InputDeviceObserverMojo", false);
    }
    return this;
  };
  InputDeviceServer_AddObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.InputDeviceObserverMojoPtr"]);
    }
    return handles;
  };

  InputDeviceServer_AddObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputDeviceServer_AddObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  InputDeviceServer_AddObserver_Params.validate = function(messageValidator, offset) {
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


    // validate InputDeviceServer_AddObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputDeviceServer_AddObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputDeviceServer_AddObserver_Params.decode = function(decoder) {
    var packed;
    var val = new InputDeviceServer_AddObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.Interface(InputDeviceObserverMojoPtr));
    return val;
  };

  InputDeviceServer_AddObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputDeviceServer_AddObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(InputDeviceObserverMojoPtr), val.observer);
  };
  var kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name = 1315182318;
  var kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name = 1518650183;
  var kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name = 1012585390;
  var kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name = 2127499013;
  var kInputDeviceObserverMojo_OnDeviceListsComplete_Name = 23386550;
  var kInputDeviceObserverMojo_OnStylusStateChanged_Name = 936212037;

  function InputDeviceObserverMojoPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputDeviceObserverMojo,
                                                   handleOrPtrInfo);
  }

  function InputDeviceObserverMojoAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputDeviceObserverMojo, associatedInterfacePtrInfo);
  }

  InputDeviceObserverMojoAssociatedPtr.prototype =
      Object.create(InputDeviceObserverMojoPtr.prototype);
  InputDeviceObserverMojoAssociatedPtr.prototype.constructor =
      InputDeviceObserverMojoAssociatedPtr;

  function InputDeviceObserverMojoProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputDeviceObserverMojoPtr.prototype.onKeyboardDeviceConfigurationChanged = function() {
    return InputDeviceObserverMojoProxy.prototype.onKeyboardDeviceConfigurationChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceObserverMojoProxy.prototype.onKeyboardDeviceConfigurationChanged = function(devices) {
    var params_ = new InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params();
    params_.devices = devices;
    var builder = new codec.MessageV0Builder(
        kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name,
        codec.align(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params.encodedSize));
    builder.encodeStruct(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputDeviceObserverMojoPtr.prototype.onTouchscreenDeviceConfigurationChanged = function() {
    return InputDeviceObserverMojoProxy.prototype.onTouchscreenDeviceConfigurationChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceObserverMojoProxy.prototype.onTouchscreenDeviceConfigurationChanged = function(devices, touchscreenTargetDisplayIdsChanged) {
    var params_ = new InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params();
    params_.devices = devices;
    params_.touchscreenTargetDisplayIdsChanged = touchscreenTargetDisplayIdsChanged;
    var builder = new codec.MessageV0Builder(
        kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name,
        codec.align(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params.encodedSize));
    builder.encodeStruct(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputDeviceObserverMojoPtr.prototype.onMouseDeviceConfigurationChanged = function() {
    return InputDeviceObserverMojoProxy.prototype.onMouseDeviceConfigurationChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceObserverMojoProxy.prototype.onMouseDeviceConfigurationChanged = function(devices) {
    var params_ = new InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params();
    params_.devices = devices;
    var builder = new codec.MessageV0Builder(
        kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name,
        codec.align(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params.encodedSize));
    builder.encodeStruct(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputDeviceObserverMojoPtr.prototype.onTouchpadDeviceConfigurationChanged = function() {
    return InputDeviceObserverMojoProxy.prototype.onTouchpadDeviceConfigurationChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceObserverMojoProxy.prototype.onTouchpadDeviceConfigurationChanged = function(devices) {
    var params_ = new InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params();
    params_.devices = devices;
    var builder = new codec.MessageV0Builder(
        kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name,
        codec.align(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params.encodedSize));
    builder.encodeStruct(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputDeviceObserverMojoPtr.prototype.onDeviceListsComplete = function() {
    return InputDeviceObserverMojoProxy.prototype.onDeviceListsComplete
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceObserverMojoProxy.prototype.onDeviceListsComplete = function(keyboardDevices, touchscreenDevices, mouseDevices, touchpadDevices, areTouchscreenTargetDisplaysValid) {
    var params_ = new InputDeviceObserverMojo_OnDeviceListsComplete_Params();
    params_.keyboardDevices = keyboardDevices;
    params_.touchscreenDevices = touchscreenDevices;
    params_.mouseDevices = mouseDevices;
    params_.touchpadDevices = touchpadDevices;
    params_.areTouchscreenTargetDisplaysValid = areTouchscreenTargetDisplaysValid;
    var builder = new codec.MessageV0Builder(
        kInputDeviceObserverMojo_OnDeviceListsComplete_Name,
        codec.align(InputDeviceObserverMojo_OnDeviceListsComplete_Params.encodedSize));
    builder.encodeStruct(InputDeviceObserverMojo_OnDeviceListsComplete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InputDeviceObserverMojoPtr.prototype.onStylusStateChanged = function() {
    return InputDeviceObserverMojoProxy.prototype.onStylusStateChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceObserverMojoProxy.prototype.onStylusStateChanged = function(state) {
    var params_ = new InputDeviceObserverMojo_OnStylusStateChanged_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kInputDeviceObserverMojo_OnStylusStateChanged_Name,
        codec.align(InputDeviceObserverMojo_OnStylusStateChanged_Params.encodedSize));
    builder.encodeStruct(InputDeviceObserverMojo_OnStylusStateChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InputDeviceObserverMojoStub(delegate) {
    this.delegate_ = delegate;
  }
  InputDeviceObserverMojoStub.prototype.onKeyboardDeviceConfigurationChanged = function(devices) {
    return this.delegate_ && this.delegate_.onKeyboardDeviceConfigurationChanged && this.delegate_.onKeyboardDeviceConfigurationChanged(devices);
  }
  InputDeviceObserverMojoStub.prototype.onTouchscreenDeviceConfigurationChanged = function(devices, touchscreenTargetDisplayIdsChanged) {
    return this.delegate_ && this.delegate_.onTouchscreenDeviceConfigurationChanged && this.delegate_.onTouchscreenDeviceConfigurationChanged(devices, touchscreenTargetDisplayIdsChanged);
  }
  InputDeviceObserverMojoStub.prototype.onMouseDeviceConfigurationChanged = function(devices) {
    return this.delegate_ && this.delegate_.onMouseDeviceConfigurationChanged && this.delegate_.onMouseDeviceConfigurationChanged(devices);
  }
  InputDeviceObserverMojoStub.prototype.onTouchpadDeviceConfigurationChanged = function(devices) {
    return this.delegate_ && this.delegate_.onTouchpadDeviceConfigurationChanged && this.delegate_.onTouchpadDeviceConfigurationChanged(devices);
  }
  InputDeviceObserverMojoStub.prototype.onDeviceListsComplete = function(keyboardDevices, touchscreenDevices, mouseDevices, touchpadDevices, areTouchscreenTargetDisplaysValid) {
    return this.delegate_ && this.delegate_.onDeviceListsComplete && this.delegate_.onDeviceListsComplete(keyboardDevices, touchscreenDevices, mouseDevices, touchpadDevices, areTouchscreenTargetDisplaysValid);
  }
  InputDeviceObserverMojoStub.prototype.onStylusStateChanged = function(state) {
    return this.delegate_ && this.delegate_.onStylusStateChanged && this.delegate_.onStylusStateChanged(state);
  }

  InputDeviceObserverMojoStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name:
      var params = reader.decodeStruct(InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params);
      this.onKeyboardDeviceConfigurationChanged(params.devices);
      return true;
    case kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name:
      var params = reader.decodeStruct(InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params);
      this.onTouchscreenDeviceConfigurationChanged(params.devices, params.touchscreenTargetDisplayIdsChanged);
      return true;
    case kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name:
      var params = reader.decodeStruct(InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params);
      this.onMouseDeviceConfigurationChanged(params.devices);
      return true;
    case kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name:
      var params = reader.decodeStruct(InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params);
      this.onTouchpadDeviceConfigurationChanged(params.devices);
      return true;
    case kInputDeviceObserverMojo_OnDeviceListsComplete_Name:
      var params = reader.decodeStruct(InputDeviceObserverMojo_OnDeviceListsComplete_Params);
      this.onDeviceListsComplete(params.keyboardDevices, params.touchscreenDevices, params.mouseDevices, params.touchpadDevices, params.areTouchscreenTargetDisplaysValid);
      return true;
    case kInputDeviceObserverMojo_OnStylusStateChanged_Name:
      var params = reader.decodeStruct(InputDeviceObserverMojo_OnStylusStateChanged_Params);
      this.onStylusStateChanged(params.state);
      return true;
    default:
      return false;
    }
  };

  InputDeviceObserverMojoStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInputDeviceObserverMojoRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params;
      break;
      case kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params;
      break;
      case kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params;
      break;
      case kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params;
      break;
      case kInputDeviceObserverMojo_OnDeviceListsComplete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceObserverMojo_OnDeviceListsComplete_Params;
      break;
      case kInputDeviceObserverMojo_OnStylusStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceObserverMojo_OnStylusStateChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputDeviceObserverMojoResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InputDeviceObserverMojo = {
    name: 'ui.mojom.InputDeviceObserverMojo',
    kVersion: 0,
    ptrClass: InputDeviceObserverMojoPtr,
    proxyClass: InputDeviceObserverMojoProxy,
    stubClass: InputDeviceObserverMojoStub,
    validateRequest: validateInputDeviceObserverMojoRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/input_devices/input_device_server.mojom',
    fuzzMethods: {
      onKeyboardDeviceConfigurationChanged: {
        params: InputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Params,
      },
      onTouchscreenDeviceConfigurationChanged: {
        params: InputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Params,
      },
      onMouseDeviceConfigurationChanged: {
        params: InputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Params,
      },
      onTouchpadDeviceConfigurationChanged: {
        params: InputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Params,
      },
      onDeviceListsComplete: {
        params: InputDeviceObserverMojo_OnDeviceListsComplete_Params,
      },
      onStylusStateChanged: {
        params: InputDeviceObserverMojo_OnStylusStateChanged_Params,
      },
    },
  };
  InputDeviceObserverMojoStub.prototype.validator = validateInputDeviceObserverMojoRequest;
  InputDeviceObserverMojoProxy.prototype.validator = null;
  var kInputDeviceServer_AddObserver_Name = 102888946;

  function InputDeviceServerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputDeviceServer,
                                                   handleOrPtrInfo);
  }

  function InputDeviceServerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputDeviceServer, associatedInterfacePtrInfo);
  }

  InputDeviceServerAssociatedPtr.prototype =
      Object.create(InputDeviceServerPtr.prototype);
  InputDeviceServerAssociatedPtr.prototype.constructor =
      InputDeviceServerAssociatedPtr;

  function InputDeviceServerProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputDeviceServerPtr.prototype.addObserver = function() {
    return InputDeviceServerProxy.prototype.addObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  InputDeviceServerProxy.prototype.addObserver = function(observer) {
    var params_ = new InputDeviceServer_AddObserver_Params();
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kInputDeviceServer_AddObserver_Name,
        codec.align(InputDeviceServer_AddObserver_Params.encodedSize));
    builder.encodeStruct(InputDeviceServer_AddObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InputDeviceServerStub(delegate) {
    this.delegate_ = delegate;
  }
  InputDeviceServerStub.prototype.addObserver = function(observer) {
    return this.delegate_ && this.delegate_.addObserver && this.delegate_.addObserver(observer);
  }

  InputDeviceServerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputDeviceServer_AddObserver_Name:
      var params = reader.decodeStruct(InputDeviceServer_AddObserver_Params);
      this.addObserver(params.observer);
      return true;
    default:
      return false;
    }
  };

  InputDeviceServerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInputDeviceServerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputDeviceServer_AddObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InputDeviceServer_AddObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputDeviceServerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InputDeviceServer = {
    name: 'ui.mojom.InputDeviceServer',
    kVersion: 0,
    ptrClass: InputDeviceServerPtr,
    proxyClass: InputDeviceServerProxy,
    stubClass: InputDeviceServerStub,
    validateRequest: validateInputDeviceServerRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/input_devices/input_device_server.mojom',
    fuzzMethods: {
      addObserver: {
        params: InputDeviceServer_AddObserver_Params,
      },
    },
  };
  InputDeviceServerStub.prototype.validator = validateInputDeviceServerRequest;
  InputDeviceServerProxy.prototype.validator = null;
  exports.InputDeviceObserverMojo = InputDeviceObserverMojo;
  exports.InputDeviceObserverMojoPtr = InputDeviceObserverMojoPtr;
  exports.InputDeviceObserverMojoAssociatedPtr = InputDeviceObserverMojoAssociatedPtr;
  exports.InputDeviceServer = InputDeviceServer;
  exports.InputDeviceServerPtr = InputDeviceServerPtr;
  exports.InputDeviceServerAssociatedPtr = InputDeviceServerAssociatedPtr;
})();