// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/interfaces/bindings/native_struct.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojo.native');



  function SerializedHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  SerializedHandle.Type = {};
  SerializedHandle.Type.MOJO_HANDLE = 0;
  SerializedHandle.Type.PLATFORM_FILE = SerializedHandle.Type.MOJO_HANDLE + 1;
  SerializedHandle.Type.WIN_HANDLE = SerializedHandle.Type.PLATFORM_FILE + 1;
  SerializedHandle.Type.MACH_PORT = SerializedHandle.Type.WIN_HANDLE + 1;
  SerializedHandle.Type.FUCHSIA_HANDLE = SerializedHandle.Type.MACH_PORT + 1;

  SerializedHandle.Type.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  SerializedHandle.Type.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  SerializedHandle.prototype.initDefaults_ = function() {
    this.theHandle = null;
    this.type = 0;
  };
  SerializedHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SerializedHandle.generate = function(generator_) {
    var generated = new SerializedHandle;
    generated.theHandle = generator_.generateHandle(false);
    generated.type = generator_.generateEnum(0, 4);
    return generated;
  };

  SerializedHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.theHandle = mutator_.mutateHandle(this.theHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 4);
    }
    return this;
  };
  SerializedHandle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.theHandle !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  SerializedHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SerializedHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.theHandle = handles[idx++];;
    return idx;
  };

  SerializedHandle.validate = function(messageValidator, offset) {
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


    // validate SerializedHandle.theHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SerializedHandle.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SerializedHandle.Type);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SerializedHandle.encodedSize = codec.kStructHeaderSize + 8;

  SerializedHandle.decode = function(decoder) {
    var packed;
    var val = new SerializedHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.theHandle = decoder.decodeStruct(codec.Handle);
    val.type = decoder.decodeStruct(codec.Int32);
    return val;
  };

  SerializedHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SerializedHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.theHandle);
    encoder.encodeStruct(codec.Int32, val.type);
  };
  function NativeStruct(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativeStruct.prototype.initDefaults_ = function() {
    this.data = null;
    this.handles = null;
  };
  NativeStruct.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativeStruct.generate = function(generator_) {
    var generated = new NativeStruct;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.handles = generator_.generateArray(function() {
      return generator_.generateStruct(mojo.native.SerializedHandle, false);
    });
    return generated;
  };

  NativeStruct.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.handles = mutator_.mutateArray(this.handles, function(val) {
        return mutator_.mutateStruct(mojo.native.SerializedHandle, false);
      });
    }
    return this;
  };
  NativeStruct.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handles !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.handles.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  NativeStruct.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativeStruct.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handles.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  NativeStruct.validate = function(messageValidator, offset) {
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


    // validate NativeStruct.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NativeStruct.handles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(SerializedHandle), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativeStruct.encodedSize = codec.kStructHeaderSize + 16;

  NativeStruct.decode = function(decoder) {
    var packed;
    var val = new NativeStruct();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.handles = decoder.decodeArrayPointer(new codec.PointerTo(SerializedHandle));
    return val;
  };

  NativeStruct.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativeStruct.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeArrayPointer(new codec.PointerTo(SerializedHandle), val.handles);
  };
  exports.SerializedHandle = SerializedHandle;
  exports.NativeStruct = NativeStruct;
})();