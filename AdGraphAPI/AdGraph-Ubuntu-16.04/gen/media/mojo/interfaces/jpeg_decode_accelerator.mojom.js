// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/jpeg_decode_accelerator.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('media.mojom');
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', 'media_types.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var DecodeError = {};
  DecodeError.NO_ERRORS = 0;
  DecodeError.INVALID_ARGUMENT = DecodeError.NO_ERRORS + 1;
  DecodeError.UNREADABLE_INPUT = DecodeError.INVALID_ARGUMENT + 1;
  DecodeError.PARSE_JPEG_FAILED = DecodeError.UNREADABLE_INPUT + 1;
  DecodeError.UNSUPPORTED_JPEG = DecodeError.PARSE_JPEG_FAILED + 1;
  DecodeError.PLATFORM_FAILURE = DecodeError.UNSUPPORTED_JPEG + 1;

  DecodeError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  DecodeError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function BitstreamBuffer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BitstreamBuffer.prototype.initDefaults_ = function() {
    this.id = 0;
    this.memoryHandle = null;
    this.size = 0;
    this.offset = 0;
    this.timestamp = null;
    this.keyId = null;
    this.iv = null;
    this.subsamples = null;
  };
  BitstreamBuffer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BitstreamBuffer.generate = function(generator_) {
    var generated = new BitstreamBuffer;
    generated.id = generator_.generateInt32();
    generated.memoryHandle = generator_.generateSharedBuffer(false);
    generated.size = generator_.generateUint32();
    generated.offset = generator_.generateInt64();
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.keyId = generator_.generateString(false);
    generated.iv = generator_.generateString(false);
    generated.subsamples = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.SubsampleEntry, false);
    });
    return generated;
  };

  BitstreamBuffer.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.memoryHandle = mutator_.mutateSharedBuffer(this.memoryHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint32(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateInt64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyId = mutator_.mutateString(this.keyId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.iv = mutator_.mutateString(this.iv, false);
    }
    if (mutator_.chooseMutateField()) {
      this.subsamples = mutator_.mutateArray(this.subsamples, function(val) {
        return mutator_.mutateStruct(media.mojom.SubsampleEntry, false);
      });
    }
    return this;
  };
  BitstreamBuffer.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.memoryHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  BitstreamBuffer.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BitstreamBuffer.prototype.setHandlesInternal_ = function(handles, idx) {
    this.memoryHandle = handles[idx++];;
    return idx;
  };

  BitstreamBuffer.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate BitstreamBuffer.memoryHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate BitstreamBuffer.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BitstreamBuffer.keyId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BitstreamBuffer.iv
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BitstreamBuffer.subsamples
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(media_types$.SubsampleEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BitstreamBuffer.encodedSize = codec.kStructHeaderSize + 56;

  BitstreamBuffer.decode = function(decoder) {
    var packed;
    var val = new BitstreamBuffer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    val.memoryHandle = decoder.decodeStruct(codec.Handle);
    val.size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.offset = decoder.decodeStruct(codec.Int64);
    val.timestamp = decoder.decodeStructPointer(time$.TimeDelta);
    val.keyId = decoder.decodeStruct(codec.String);
    val.iv = decoder.decodeStruct(codec.String);
    val.subsamples = decoder.decodeArrayPointer(new codec.PointerTo(media_types$.SubsampleEntry));
    return val;
  };

  BitstreamBuffer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BitstreamBuffer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.encodeStruct(codec.Handle, val.memoryHandle);
    encoder.encodeStruct(codec.Uint32, val.size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.offset);
    encoder.encodeStructPointer(time$.TimeDelta, val.timestamp);
    encoder.encodeStruct(codec.String, val.keyId);
    encoder.encodeStruct(codec.String, val.iv);
    encoder.encodeArrayPointer(new codec.PointerTo(media_types$.SubsampleEntry), val.subsamples);
  };
  function JpegDecodeAccelerator_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_Initialize_Params.prototype.initDefaults_ = function() {
  };
  JpegDecodeAccelerator_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_Initialize_Params.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_Initialize_Params;
    return generated;
  };

  JpegDecodeAccelerator_Initialize_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  JpegDecodeAccelerator_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegDecodeAccelerator_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegDecodeAccelerator_Initialize_Params.validate = function(messageValidator, offset) {
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

  JpegDecodeAccelerator_Initialize_Params.encodedSize = codec.kStructHeaderSize + 0;

  JpegDecodeAccelerator_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  JpegDecodeAccelerator_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function JpegDecodeAccelerator_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  JpegDecodeAccelerator_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_Initialize_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  JpegDecodeAccelerator_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  JpegDecodeAccelerator_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegDecodeAccelerator_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegDecodeAccelerator_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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

  JpegDecodeAccelerator_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  JpegDecodeAccelerator_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  JpegDecodeAccelerator_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function JpegDecodeAccelerator_Decode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_Decode_Params.prototype.initDefaults_ = function() {
    this.inputBuffer = null;
    this.codedSize = null;
    this.outputHandle = null;
    this.outputBufferSize = 0;
  };
  JpegDecodeAccelerator_Decode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_Decode_Params.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_Decode_Params;
    generated.inputBuffer = generator_.generateStruct(media.mojom.BitstreamBuffer, false);
    generated.codedSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.outputHandle = generator_.generateSharedBuffer(false);
    generated.outputBufferSize = generator_.generateUint32();
    return generated;
  };

  JpegDecodeAccelerator_Decode_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputBuffer = mutator_.mutateStruct(media.mojom.BitstreamBuffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputHandle = mutator_.mutateSharedBuffer(this.outputHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputBufferSize = mutator_.mutateUint32(this.outputBufferSize);
    }
    return this;
  };
  JpegDecodeAccelerator_Decode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.inputBuffer !== null) {
      Array.prototype.push.apply(handles, this.inputBuffer.getHandleDeps());
    }
    if (this.outputHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  JpegDecodeAccelerator_Decode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_Decode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.inputBuffer.setHandlesInternal_(handles, idx);
    this.outputHandle = handles[idx++];;
    return idx;
  };

  JpegDecodeAccelerator_Decode_Params.validate = function(messageValidator, offset) {
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


    // validate JpegDecodeAccelerator_Decode_Params.inputBuffer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, BitstreamBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate JpegDecodeAccelerator_Decode_Params.codedSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate JpegDecodeAccelerator_Decode_Params.outputHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  JpegDecodeAccelerator_Decode_Params.encodedSize = codec.kStructHeaderSize + 24;

  JpegDecodeAccelerator_Decode_Params.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_Decode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputBuffer = decoder.decodeStructPointer(BitstreamBuffer);
    val.codedSize = decoder.decodeStructPointer(geometry$.Size);
    val.outputHandle = decoder.decodeStruct(codec.Handle);
    val.outputBufferSize = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  JpegDecodeAccelerator_Decode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_Decode_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(BitstreamBuffer, val.inputBuffer);
    encoder.encodeStructPointer(geometry$.Size, val.codedSize);
    encoder.encodeStruct(codec.Handle, val.outputHandle);
    encoder.encodeStruct(codec.Uint32, val.outputBufferSize);
  };
  function JpegDecodeAccelerator_Decode_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_Decode_ResponseParams.prototype.initDefaults_ = function() {
    this.bitstreamBufferId = 0;
    this.error = 0;
  };
  JpegDecodeAccelerator_Decode_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_Decode_ResponseParams.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_Decode_ResponseParams;
    generated.bitstreamBufferId = generator_.generateInt32();
    generated.error = generator_.generateEnum(0, 5);
    return generated;
  };

  JpegDecodeAccelerator_Decode_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitstreamBufferId = mutator_.mutateInt32(this.bitstreamBufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 5);
    }
    return this;
  };
  JpegDecodeAccelerator_Decode_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegDecodeAccelerator_Decode_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_Decode_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegDecodeAccelerator_Decode_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate JpegDecodeAccelerator_Decode_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DecodeError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JpegDecodeAccelerator_Decode_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  JpegDecodeAccelerator_Decode_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_Decode_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitstreamBufferId = decoder.decodeStruct(codec.Int32);
    val.error = decoder.decodeStruct(codec.Int32);
    return val;
  };

  JpegDecodeAccelerator_Decode_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_Decode_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bitstreamBufferId);
    encoder.encodeStruct(codec.Int32, val.error);
  };
  function JpegDecodeAccelerator_DecodeWithFD_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_DecodeWithFD_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.inputFd = null;
    this.inputBufferSize = 0;
    this.codedSizeWidth = 0;
    this.codedSizeHeight = 0;
    this.outputFd = null;
    this.outputBufferSize = 0;
  };
  JpegDecodeAccelerator_DecodeWithFD_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_DecodeWithFD_Params.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_DecodeWithFD_Params;
    generated.bufferId = generator_.generateInt32();
    generated.inputFd = generator_.generateHandle(false);
    generated.inputBufferSize = generator_.generateUint32();
    generated.codedSizeWidth = generator_.generateInt32();
    generated.codedSizeHeight = generator_.generateInt32();
    generated.outputFd = generator_.generateHandle(false);
    generated.outputBufferSize = generator_.generateUint32();
    return generated;
  };

  JpegDecodeAccelerator_DecodeWithFD_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.inputFd = mutator_.mutateHandle(this.inputFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.inputBufferSize = mutator_.mutateUint32(this.inputBufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSizeWidth = mutator_.mutateInt32(this.codedSizeWidth);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSizeHeight = mutator_.mutateInt32(this.codedSizeHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.outputFd = mutator_.mutateHandle(this.outputFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputBufferSize = mutator_.mutateUint32(this.outputBufferSize);
    }
    return this;
  };
  JpegDecodeAccelerator_DecodeWithFD_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.inputFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    if (this.outputFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  JpegDecodeAccelerator_DecodeWithFD_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_DecodeWithFD_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.inputFd = handles[idx++];;
    this.outputFd = handles[idx++];;
    return idx;
  };

  JpegDecodeAccelerator_DecodeWithFD_Params.validate = function(messageValidator, offset) {
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



    // validate JpegDecodeAccelerator_DecodeWithFD_Params.inputFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;





    // validate JpegDecodeAccelerator_DecodeWithFD_Params.outputFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 20, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  JpegDecodeAccelerator_DecodeWithFD_Params.encodedSize = codec.kStructHeaderSize + 32;

  JpegDecodeAccelerator_DecodeWithFD_Params.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_DecodeWithFD_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.inputFd = decoder.decodeStruct(codec.Handle);
    val.inputBufferSize = decoder.decodeStruct(codec.Uint32);
    val.codedSizeWidth = decoder.decodeStruct(codec.Int32);
    val.codedSizeHeight = decoder.decodeStruct(codec.Int32);
    val.outputFd = decoder.decodeStruct(codec.Handle);
    val.outputBufferSize = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  JpegDecodeAccelerator_DecodeWithFD_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_DecodeWithFD_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(codec.Handle, val.inputFd);
    encoder.encodeStruct(codec.Uint32, val.inputBufferSize);
    encoder.encodeStruct(codec.Int32, val.codedSizeWidth);
    encoder.encodeStruct(codec.Int32, val.codedSizeHeight);
    encoder.encodeStruct(codec.Handle, val.outputFd);
    encoder.encodeStruct(codec.Uint32, val.outputBufferSize);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function JpegDecodeAccelerator_DecodeWithFD_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.error = 0;
  };
  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_DecodeWithFD_ResponseParams;
    generated.bufferId = generator_.generateInt32();
    generated.error = generator_.generateEnum(0, 5);
    return generated;
  };

  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 5);
    }
    return this;
  };
  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate JpegDecodeAccelerator_DecodeWithFD_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, DecodeError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_DecodeWithFD_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.error = decoder.decodeStruct(codec.Int32);
    return val;
  };

  JpegDecodeAccelerator_DecodeWithFD_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_DecodeWithFD_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(codec.Int32, val.error);
  };
  function JpegDecodeAccelerator_Uninitialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegDecodeAccelerator_Uninitialize_Params.prototype.initDefaults_ = function() {
  };
  JpegDecodeAccelerator_Uninitialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegDecodeAccelerator_Uninitialize_Params.generate = function(generator_) {
    var generated = new JpegDecodeAccelerator_Uninitialize_Params;
    return generated;
  };

  JpegDecodeAccelerator_Uninitialize_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  JpegDecodeAccelerator_Uninitialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegDecodeAccelerator_Uninitialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegDecodeAccelerator_Uninitialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegDecodeAccelerator_Uninitialize_Params.validate = function(messageValidator, offset) {
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

  JpegDecodeAccelerator_Uninitialize_Params.encodedSize = codec.kStructHeaderSize + 0;

  JpegDecodeAccelerator_Uninitialize_Params.decode = function(decoder) {
    var packed;
    var val = new JpegDecodeAccelerator_Uninitialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  JpegDecodeAccelerator_Uninitialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegDecodeAccelerator_Uninitialize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kJpegDecodeAccelerator_Initialize_Name = 379701457;
  var kJpegDecodeAccelerator_Decode_Name = 197334808;
  var kJpegDecodeAccelerator_DecodeWithFD_Name = 493603373;
  var kJpegDecodeAccelerator_Uninitialize_Name = 416289598;

  function JpegDecodeAcceleratorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(JpegDecodeAccelerator,
                                                   handleOrPtrInfo);
  }

  function JpegDecodeAcceleratorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        JpegDecodeAccelerator, associatedInterfacePtrInfo);
  }

  JpegDecodeAcceleratorAssociatedPtr.prototype =
      Object.create(JpegDecodeAcceleratorPtr.prototype);
  JpegDecodeAcceleratorAssociatedPtr.prototype.constructor =
      JpegDecodeAcceleratorAssociatedPtr;

  function JpegDecodeAcceleratorProxy(receiver) {
    this.receiver_ = receiver;
  }
  JpegDecodeAcceleratorPtr.prototype.initialize = function() {
    return JpegDecodeAcceleratorProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  JpegDecodeAcceleratorProxy.prototype.initialize = function() {
    var params_ = new JpegDecodeAccelerator_Initialize_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kJpegDecodeAccelerator_Initialize_Name,
          codec.align(JpegDecodeAccelerator_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(JpegDecodeAccelerator_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(JpegDecodeAccelerator_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  JpegDecodeAcceleratorPtr.prototype.decode = function() {
    return JpegDecodeAcceleratorProxy.prototype.decode
        .apply(this.ptr.getProxy(), arguments);
  };

  JpegDecodeAcceleratorProxy.prototype.decode = function(inputBuffer, codedSize, outputHandle, outputBufferSize) {
    var params_ = new JpegDecodeAccelerator_Decode_Params();
    params_.inputBuffer = inputBuffer;
    params_.codedSize = codedSize;
    params_.outputHandle = outputHandle;
    params_.outputBufferSize = outputBufferSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kJpegDecodeAccelerator_Decode_Name,
          codec.align(JpegDecodeAccelerator_Decode_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(JpegDecodeAccelerator_Decode_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(JpegDecodeAccelerator_Decode_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  JpegDecodeAcceleratorPtr.prototype.decodeWithFD = function() {
    return JpegDecodeAcceleratorProxy.prototype.decodeWithFD
        .apply(this.ptr.getProxy(), arguments);
  };

  JpegDecodeAcceleratorProxy.prototype.decodeWithFD = function(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, outputFd, outputBufferSize) {
    var params_ = new JpegDecodeAccelerator_DecodeWithFD_Params();
    params_.bufferId = bufferId;
    params_.inputFd = inputFd;
    params_.inputBufferSize = inputBufferSize;
    params_.codedSizeWidth = codedSizeWidth;
    params_.codedSizeHeight = codedSizeHeight;
    params_.outputFd = outputFd;
    params_.outputBufferSize = outputBufferSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kJpegDecodeAccelerator_DecodeWithFD_Name,
          codec.align(JpegDecodeAccelerator_DecodeWithFD_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(JpegDecodeAccelerator_DecodeWithFD_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(JpegDecodeAccelerator_DecodeWithFD_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  JpegDecodeAcceleratorPtr.prototype.uninitialize = function() {
    return JpegDecodeAcceleratorProxy.prototype.uninitialize
        .apply(this.ptr.getProxy(), arguments);
  };

  JpegDecodeAcceleratorProxy.prototype.uninitialize = function() {
    var params_ = new JpegDecodeAccelerator_Uninitialize_Params();
    var builder = new codec.MessageV0Builder(
        kJpegDecodeAccelerator_Uninitialize_Name,
        codec.align(JpegDecodeAccelerator_Uninitialize_Params.encodedSize));
    builder.encodeStruct(JpegDecodeAccelerator_Uninitialize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function JpegDecodeAcceleratorStub(delegate) {
    this.delegate_ = delegate;
  }
  JpegDecodeAcceleratorStub.prototype.initialize = function() {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize();
  }
  JpegDecodeAcceleratorStub.prototype.decode = function(inputBuffer, codedSize, outputHandle, outputBufferSize) {
    return this.delegate_ && this.delegate_.decode && this.delegate_.decode(inputBuffer, codedSize, outputHandle, outputBufferSize);
  }
  JpegDecodeAcceleratorStub.prototype.decodeWithFD = function(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, outputFd, outputBufferSize) {
    return this.delegate_ && this.delegate_.decodeWithFD && this.delegate_.decodeWithFD(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, outputFd, outputBufferSize);
  }
  JpegDecodeAcceleratorStub.prototype.uninitialize = function() {
    return this.delegate_ && this.delegate_.uninitialize && this.delegate_.uninitialize();
  }

  JpegDecodeAcceleratorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kJpegDecodeAccelerator_Uninitialize_Name:
      var params = reader.decodeStruct(JpegDecodeAccelerator_Uninitialize_Params);
      this.uninitialize();
      return true;
    default:
      return false;
    }
  };

  JpegDecodeAcceleratorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kJpegDecodeAccelerator_Initialize_Name:
      var params = reader.decodeStruct(JpegDecodeAccelerator_Initialize_Params);
      this.initialize().then(function(response) {
        var responseParams =
            new JpegDecodeAccelerator_Initialize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kJpegDecodeAccelerator_Initialize_Name,
            codec.align(JpegDecodeAccelerator_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(JpegDecodeAccelerator_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kJpegDecodeAccelerator_Decode_Name:
      var params = reader.decodeStruct(JpegDecodeAccelerator_Decode_Params);
      this.decode(params.inputBuffer, params.codedSize, params.outputHandle, params.outputBufferSize).then(function(response) {
        var responseParams =
            new JpegDecodeAccelerator_Decode_ResponseParams();
        responseParams.bitstreamBufferId = response.bitstreamBufferId;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kJpegDecodeAccelerator_Decode_Name,
            codec.align(JpegDecodeAccelerator_Decode_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(JpegDecodeAccelerator_Decode_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kJpegDecodeAccelerator_DecodeWithFD_Name:
      var params = reader.decodeStruct(JpegDecodeAccelerator_DecodeWithFD_Params);
      this.decodeWithFD(params.bufferId, params.inputFd, params.inputBufferSize, params.codedSizeWidth, params.codedSizeHeight, params.outputFd, params.outputBufferSize).then(function(response) {
        var responseParams =
            new JpegDecodeAccelerator_DecodeWithFD_ResponseParams();
        responseParams.bufferId = response.bufferId;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kJpegDecodeAccelerator_DecodeWithFD_Name,
            codec.align(JpegDecodeAccelerator_DecodeWithFD_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(JpegDecodeAccelerator_DecodeWithFD_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateJpegDecodeAcceleratorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kJpegDecodeAccelerator_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = JpegDecodeAccelerator_Initialize_Params;
      break;
      case kJpegDecodeAccelerator_Decode_Name:
        if (message.expectsResponse())
          paramsClass = JpegDecodeAccelerator_Decode_Params;
      break;
      case kJpegDecodeAccelerator_DecodeWithFD_Name:
        if (message.expectsResponse())
          paramsClass = JpegDecodeAccelerator_DecodeWithFD_Params;
      break;
      case kJpegDecodeAccelerator_Uninitialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = JpegDecodeAccelerator_Uninitialize_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateJpegDecodeAcceleratorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kJpegDecodeAccelerator_Initialize_Name:
        if (message.isResponse())
          paramsClass = JpegDecodeAccelerator_Initialize_ResponseParams;
        break;
      case kJpegDecodeAccelerator_Decode_Name:
        if (message.isResponse())
          paramsClass = JpegDecodeAccelerator_Decode_ResponseParams;
        break;
      case kJpegDecodeAccelerator_DecodeWithFD_Name:
        if (message.isResponse())
          paramsClass = JpegDecodeAccelerator_DecodeWithFD_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var JpegDecodeAccelerator = {
    name: 'media.mojom.JpegDecodeAccelerator',
    kVersion: 0,
    ptrClass: JpegDecodeAcceleratorPtr,
    proxyClass: JpegDecodeAcceleratorProxy,
    stubClass: JpegDecodeAcceleratorStub,
    validateRequest: validateJpegDecodeAcceleratorRequest,
    validateResponse: validateJpegDecodeAcceleratorResponse,
    mojomId: 'media/mojo/interfaces/jpeg_decode_accelerator.mojom',
    fuzzMethods: {
      initialize: {
        params: JpegDecodeAccelerator_Initialize_Params,
      },
      decode: {
        params: JpegDecodeAccelerator_Decode_Params,
      },
      decodeWithFD: {
        params: JpegDecodeAccelerator_DecodeWithFD_Params,
      },
      uninitialize: {
        params: JpegDecodeAccelerator_Uninitialize_Params,
      },
    },
  };
  JpegDecodeAcceleratorStub.prototype.validator = validateJpegDecodeAcceleratorRequest;
  JpegDecodeAcceleratorProxy.prototype.validator = validateJpegDecodeAcceleratorResponse;
  exports.DecodeError = DecodeError;
  exports.BitstreamBuffer = BitstreamBuffer;
  exports.JpegDecodeAccelerator = JpegDecodeAccelerator;
  exports.JpegDecodeAcceleratorPtr = JpegDecodeAcceleratorPtr;
  exports.JpegDecodeAcceleratorAssociatedPtr = JpegDecodeAcceleratorAssociatedPtr;
})();