// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/video_decode_accelerator.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('arc.mojom');
  var gfx$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/gfx.mojom', 'gfx.mojom.js');
  }
  var video_common$ =
      mojo.internal.exposeNamespace('arc.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/arc/common/video_common.mojom', 'video_common.mojom.js');
  }



  function BitstreamBuffer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BitstreamBuffer.prototype.initDefaults_ = function() {
    this.bitstreamId = 0;
    this.handleFd = null;
    this.offset = 0;
    this.bytesUsed = 0;
  };
  BitstreamBuffer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BitstreamBuffer.generate = function(generator_) {
    var generated = new BitstreamBuffer;
    generated.bitstreamId = generator_.generateInt32();
    generated.handleFd = generator_.generateHandle(false);
    generated.offset = generator_.generateUint32();
    generated.bytesUsed = generator_.generateUint32();
    return generated;
  };

  BitstreamBuffer.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitstreamId = mutator_.mutateInt32(this.bitstreamId);
    }
    if (mutator_.chooseMutateField()) {
      this.handleFd = mutator_.mutateHandle(this.handleFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint32(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.bytesUsed = mutator_.mutateUint32(this.bytesUsed);
    }
    return this;
  };
  BitstreamBuffer.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handleFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  BitstreamBuffer.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BitstreamBuffer.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handleFd = handles[idx++];;
    return idx;
  };

  BitstreamBuffer.validate = function(messageValidator, offset) {
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



    // validate BitstreamBuffer.handleFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BitstreamBuffer.encodedSize = codec.kStructHeaderSize + 16;

  BitstreamBuffer.decode = function(decoder) {
    var packed;
    var val = new BitstreamBuffer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitstreamId = decoder.decodeStruct(codec.Int32);
    val.handleFd = decoder.decodeStruct(codec.Handle);
    val.offset = decoder.decodeStruct(codec.Uint32);
    val.bytesUsed = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  BitstreamBuffer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BitstreamBuffer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bitstreamId);
    encoder.encodeStruct(codec.Handle, val.handleFd);
    encoder.encodeStruct(codec.Uint32, val.offset);
    encoder.encodeStruct(codec.Uint32, val.bytesUsed);
  };
  function Picture(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Picture.prototype.initDefaults_ = function() {
    this.pictureBufferId = 0;
    this.bitstreamId = 0;
    this.cropRect = null;
  };
  Picture.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Picture.generate = function(generator_) {
    var generated = new Picture;
    generated.pictureBufferId = generator_.generateInt32();
    generated.bitstreamId = generator_.generateInt32();
    generated.cropRect = generator_.generateStruct(arc.mojom.Rect, false);
    return generated;
  };

  Picture.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pictureBufferId = mutator_.mutateInt32(this.pictureBufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.bitstreamId = mutator_.mutateInt32(this.bitstreamId);
    }
    if (mutator_.chooseMutateField()) {
      this.cropRect = mutator_.mutateStruct(arc.mojom.Rect, false);
    }
    return this;
  };
  Picture.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Picture.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Picture.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Picture.validate = function(messageValidator, offset) {
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




    // validate Picture.cropRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, gfx$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Picture.encodedSize = codec.kStructHeaderSize + 16;

  Picture.decode = function(decoder) {
    var packed;
    var val = new Picture();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pictureBufferId = decoder.decodeStruct(codec.Int32);
    val.bitstreamId = decoder.decodeStruct(codec.Int32);
    val.cropRect = decoder.decodeStructPointer(gfx$.Rect);
    return val;
  };

  Picture.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Picture.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pictureBufferId);
    encoder.encodeStruct(codec.Int32, val.bitstreamId);
    encoder.encodeStructPointer(gfx$.Rect, val.cropRect);
  };
  function PictureBufferFormat(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PictureBufferFormat.prototype.initDefaults_ = function() {
    this.minNumBuffers = 0;
    this.codedSize = null;
  };
  PictureBufferFormat.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PictureBufferFormat.generate = function(generator_) {
    var generated = new PictureBufferFormat;
    generated.minNumBuffers = generator_.generateUint32();
    generated.codedSize = generator_.generateStruct(arc.mojom.Size, false);
    return generated;
  };

  PictureBufferFormat.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.minNumBuffers = mutator_.mutateUint32(this.minNumBuffers);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSize = mutator_.mutateStruct(arc.mojom.Size, false);
    }
    return this;
  };
  PictureBufferFormat.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PictureBufferFormat.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PictureBufferFormat.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PictureBufferFormat.validate = function(messageValidator, offset) {
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



    // validate PictureBufferFormat.codedSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, video_common$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PictureBufferFormat.encodedSize = codec.kStructHeaderSize + 16;

  PictureBufferFormat.decode = function(decoder) {
    var packed;
    var val = new PictureBufferFormat();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.minNumBuffers = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.codedSize = decoder.decodeStructPointer(video_common$.Size);
    return val;
  };

  PictureBufferFormat.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PictureBufferFormat.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.minNumBuffers);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(video_common$.Size, val.codedSize);
  };
  function VideoDecodeAcceleratorConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAcceleratorConfig.prototype.initDefaults_ = function() {
    this.profile = 0;
    this.secureMode = false;
  };
  VideoDecodeAcceleratorConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAcceleratorConfig.generate = function(generator_) {
    var generated = new VideoDecodeAcceleratorConfig;
    generated.profile = generator_.generateEnum(0, 24);
    generated.secureMode = generator_.generateBool();
    return generated;
  };

  VideoDecodeAcceleratorConfig.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.profile = mutator_.mutateEnum(this.profile, 0, 24);
    }
    if (mutator_.chooseMutateField()) {
      this.secureMode = mutator_.mutateBool(this.secureMode);
    }
    return this;
  };
  VideoDecodeAcceleratorConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAcceleratorConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAcceleratorConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAcceleratorConfig.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAcceleratorConfig.profile
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, video_common$.VideoCodecProfile);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VideoDecodeAcceleratorConfig.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAcceleratorConfig.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAcceleratorConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.profile = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.secureMode = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAcceleratorConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAcceleratorConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.profile);
    packed = 0;
    packed |= (val.secureMode & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeAccelerator_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Initialize_Params.prototype.initDefaults_ = function() {
    this.config = null;
    this.client = new VideoDecodeClientPtr();
  };
  VideoDecodeAccelerator_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Initialize_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Initialize_Params;
    generated.config = generator_.generateStruct(arc.mojom.VideoDecodeAcceleratorConfig, false);
    generated.client = generator_.generateInterface("arc.mojom.VideoDecodeClient", false);
    return generated;
  };

  VideoDecodeAccelerator_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateStruct(arc.mojom.VideoDecodeAcceleratorConfig, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "arc.mojom.VideoDecodeClient", false);
    }
    return this;
  };
  VideoDecodeAccelerator_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["arc.mojom.VideoDecodeClientPtr"]);
    }
    return handles;
  };

  VideoDecodeAccelerator_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  VideoDecodeAccelerator_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAccelerator_Initialize_Params.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VideoDecodeAcceleratorConfig, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecodeAccelerator_Initialize_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeAccelerator_Initialize_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoDecodeAccelerator_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStructPointer(VideoDecodeAcceleratorConfig);
    val.client = decoder.decodeStruct(new codec.Interface(VideoDecodeClientPtr));
    return val;
  };

  VideoDecodeAccelerator_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VideoDecodeAcceleratorConfig, val.config);
    encoder.encodeStruct(new codec.Interface(VideoDecodeClientPtr), val.client);
  };
  function VideoDecodeAccelerator_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  VideoDecodeAccelerator_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Initialize_ResponseParams;
    generated.result = generator_.generateEnum(0, 6);
    return generated;
  };

  VideoDecodeAccelerator_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 6);
    }
    return this;
  };
  VideoDecodeAccelerator_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAccelerator_Initialize_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoDecodeAccelerator.Result);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeAccelerator_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAccelerator_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAccelerator_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeAccelerator_Decode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Decode_Params.prototype.initDefaults_ = function() {
    this.bitstreamBuffer = null;
  };
  VideoDecodeAccelerator_Decode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Decode_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Decode_Params;
    generated.bitstreamBuffer = generator_.generateStruct(arc.mojom.BitstreamBuffer, false);
    return generated;
  };

  VideoDecodeAccelerator_Decode_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitstreamBuffer = mutator_.mutateStruct(arc.mojom.BitstreamBuffer, false);
    }
    return this;
  };
  VideoDecodeAccelerator_Decode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bitstreamBuffer !== null) {
      Array.prototype.push.apply(handles, this.bitstreamBuffer.getHandleDeps());
    }
    return handles;
  };

  VideoDecodeAccelerator_Decode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Decode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bitstreamBuffer.setHandlesInternal_(handles, idx);
    return idx;
  };

  VideoDecodeAccelerator_Decode_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAccelerator_Decode_Params.bitstreamBuffer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, BitstreamBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeAccelerator_Decode_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAccelerator_Decode_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Decode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitstreamBuffer = decoder.decodeStructPointer(BitstreamBuffer);
    return val;
  };

  VideoDecodeAccelerator_Decode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Decode_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(BitstreamBuffer, val.bitstreamBuffer);
  };
  function VideoDecodeAccelerator_AssignPictureBuffers_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_AssignPictureBuffers_Params.prototype.initDefaults_ = function() {
    this.count = 0;
  };
  VideoDecodeAccelerator_AssignPictureBuffers_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_AssignPictureBuffers_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_AssignPictureBuffers_Params;
    generated.count = generator_.generateUint32();
    return generated;
  };

  VideoDecodeAccelerator_AssignPictureBuffers_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.count = mutator_.mutateUint32(this.count);
    }
    return this;
  };
  VideoDecodeAccelerator_AssignPictureBuffers_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_AssignPictureBuffers_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_AssignPictureBuffers_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_AssignPictureBuffers_Params.validate = function(messageValidator, offset) {
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

  VideoDecodeAccelerator_AssignPictureBuffers_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAccelerator_AssignPictureBuffers_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_AssignPictureBuffers_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.count = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAccelerator_AssignPictureBuffers_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_AssignPictureBuffers_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.count);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeAccelerator_ImportBufferForPicture_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_ImportBufferForPicture_Params.prototype.initDefaults_ = function() {
    this.pictureBufferId = 0;
    this.format = 0;
    this.handleFd = null;
    this.planes = null;
  };
  VideoDecodeAccelerator_ImportBufferForPicture_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_ImportBufferForPicture_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_ImportBufferForPicture_Params;
    generated.pictureBufferId = generator_.generateInt32();
    generated.format = generator_.generateEnum(0, 842094169);
    generated.handleFd = generator_.generateHandle(false);
    generated.planes = generator_.generateArray(function() {
      return generator_.generateStruct(arc.mojom.VideoFramePlane, false);
    });
    return generated;
  };

  VideoDecodeAccelerator_ImportBufferForPicture_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pictureBufferId = mutator_.mutateInt32(this.pictureBufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format, 0, 842094169);
    }
    if (mutator_.chooseMutateField()) {
      this.handleFd = mutator_.mutateHandle(this.handleFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.planes = mutator_.mutateArray(this.planes, function(val) {
        return mutator_.mutateStruct(arc.mojom.VideoFramePlane, false);
      });
    }
    return this;
  };
  VideoDecodeAccelerator_ImportBufferForPicture_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handleFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VideoDecodeAccelerator_ImportBufferForPicture_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_ImportBufferForPicture_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handleFd = handles[idx++];;
    return idx;
  };

  VideoDecodeAccelerator_ImportBufferForPicture_Params.validate = function(messageValidator, offset) {
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



    // validate VideoDecodeAccelerator_ImportBufferForPicture_Params.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, video_common$.HalPixelFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecodeAccelerator_ImportBufferForPicture_Params.handleFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecodeAccelerator_ImportBufferForPicture_Params.planes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(video_common$.VideoFramePlane), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeAccelerator_ImportBufferForPicture_Params.encodedSize = codec.kStructHeaderSize + 24;

  VideoDecodeAccelerator_ImportBufferForPicture_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_ImportBufferForPicture_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pictureBufferId = decoder.decodeStruct(codec.Int32);
    val.format = decoder.decodeStruct(codec.Int32);
    val.handleFd = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.planes = decoder.decodeArrayPointer(new codec.PointerTo(video_common$.VideoFramePlane));
    return val;
  };

  VideoDecodeAccelerator_ImportBufferForPicture_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_ImportBufferForPicture_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pictureBufferId);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Handle, val.handleFd);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(video_common$.VideoFramePlane), val.planes);
  };
  function VideoDecodeAccelerator_ReusePictureBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_ReusePictureBuffer_Params.prototype.initDefaults_ = function() {
    this.pictureBufferId = 0;
  };
  VideoDecodeAccelerator_ReusePictureBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_ReusePictureBuffer_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_ReusePictureBuffer_Params;
    generated.pictureBufferId = generator_.generateInt32();
    return generated;
  };

  VideoDecodeAccelerator_ReusePictureBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pictureBufferId = mutator_.mutateInt32(this.pictureBufferId);
    }
    return this;
  };
  VideoDecodeAccelerator_ReusePictureBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_ReusePictureBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_ReusePictureBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_ReusePictureBuffer_Params.validate = function(messageValidator, offset) {
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

  VideoDecodeAccelerator_ReusePictureBuffer_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAccelerator_ReusePictureBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_ReusePictureBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pictureBufferId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAccelerator_ReusePictureBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_ReusePictureBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pictureBufferId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeAccelerator_Reset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Reset_Params.prototype.initDefaults_ = function() {
  };
  VideoDecodeAccelerator_Reset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Reset_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Reset_Params;
    return generated;
  };

  VideoDecodeAccelerator_Reset_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoDecodeAccelerator_Reset_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_Reset_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Reset_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_Reset_Params.validate = function(messageValidator, offset) {
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

  VideoDecodeAccelerator_Reset_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoDecodeAccelerator_Reset_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Reset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDecodeAccelerator_Reset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Reset_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDecodeAccelerator_Reset_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Reset_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  VideoDecodeAccelerator_Reset_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Reset_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Reset_ResponseParams;
    generated.result = generator_.generateEnum(0, 6);
    return generated;
  };

  VideoDecodeAccelerator_Reset_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 6);
    }
    return this;
  };
  VideoDecodeAccelerator_Reset_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_Reset_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Reset_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_Reset_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAccelerator_Reset_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoDecodeAccelerator.Result);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeAccelerator_Reset_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAccelerator_Reset_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Reset_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAccelerator_Reset_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Reset_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeAccelerator_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Flush_Params.prototype.initDefaults_ = function() {
  };
  VideoDecodeAccelerator_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Flush_Params.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Flush_Params;
    return generated;
  };

  VideoDecodeAccelerator_Flush_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoDecodeAccelerator_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_Flush_Params.validate = function(messageValidator, offset) {
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

  VideoDecodeAccelerator_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoDecodeAccelerator_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDecodeAccelerator_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDecodeAccelerator_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeAccelerator_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  VideoDecodeAccelerator_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeAccelerator_Flush_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecodeAccelerator_Flush_ResponseParams;
    generated.result = generator_.generateEnum(0, 6);
    return generated;
  };

  VideoDecodeAccelerator_Flush_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 6);
    }
    return this;
  };
  VideoDecodeAccelerator_Flush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeAccelerator_Flush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeAccelerator_Flush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeAccelerator_Flush_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeAccelerator_Flush_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoDecodeAccelerator.Result);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeAccelerator_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeAccelerator_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeAccelerator_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeAccelerator_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeAccelerator_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeClient_ProvidePictureBuffers_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeClient_ProvidePictureBuffers_Params.prototype.initDefaults_ = function() {
    this.format = null;
  };
  VideoDecodeClient_ProvidePictureBuffers_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeClient_ProvidePictureBuffers_Params.generate = function(generator_) {
    var generated = new VideoDecodeClient_ProvidePictureBuffers_Params;
    generated.format = generator_.generateStruct(arc.mojom.PictureBufferFormat, false);
    return generated;
  };

  VideoDecodeClient_ProvidePictureBuffers_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateStruct(arc.mojom.PictureBufferFormat, false);
    }
    return this;
  };
  VideoDecodeClient_ProvidePictureBuffers_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeClient_ProvidePictureBuffers_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeClient_ProvidePictureBuffers_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeClient_ProvidePictureBuffers_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeClient_ProvidePictureBuffers_Params.format
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PictureBufferFormat, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeClient_ProvidePictureBuffers_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeClient_ProvidePictureBuffers_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeClient_ProvidePictureBuffers_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.format = decoder.decodeStructPointer(PictureBufferFormat);
    return val;
  };

  VideoDecodeClient_ProvidePictureBuffers_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeClient_ProvidePictureBuffers_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PictureBufferFormat, val.format);
  };
  function VideoDecodeClient_PictureReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeClient_PictureReady_Params.prototype.initDefaults_ = function() {
    this.picture = null;
  };
  VideoDecodeClient_PictureReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeClient_PictureReady_Params.generate = function(generator_) {
    var generated = new VideoDecodeClient_PictureReady_Params;
    generated.picture = generator_.generateStruct(arc.mojom.Picture, false);
    return generated;
  };

  VideoDecodeClient_PictureReady_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.picture = mutator_.mutateStruct(arc.mojom.Picture, false);
    }
    return this;
  };
  VideoDecodeClient_PictureReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeClient_PictureReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeClient_PictureReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeClient_PictureReady_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeClient_PictureReady_Params.picture
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Picture, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeClient_PictureReady_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeClient_PictureReady_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeClient_PictureReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.picture = decoder.decodeStructPointer(Picture);
    return val;
  };

  VideoDecodeClient_PictureReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeClient_PictureReady_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Picture, val.picture);
  };
  function VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.prototype.initDefaults_ = function() {
    this.bitstreamId = 0;
  };
  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.generate = function(generator_) {
    var generated = new VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params;
    generated.bitstreamId = generator_.generateInt32();
    return generated;
  };

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitstreamId = mutator_.mutateInt32(this.bitstreamId);
    }
    return this;
  };
  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.validate = function(messageValidator, offset) {
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

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitstreamId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bitstreamId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecodeClient_NotifyError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecodeClient_NotifyError_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  VideoDecodeClient_NotifyError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecodeClient_NotifyError_Params.generate = function(generator_) {
    var generated = new VideoDecodeClient_NotifyError_Params;
    generated.error = generator_.generateEnum(0, 6);
    return generated;
  };

  VideoDecodeClient_NotifyError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 6);
    }
    return this;
  };
  VideoDecodeClient_NotifyError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecodeClient_NotifyError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecodeClient_NotifyError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecodeClient_NotifyError_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecodeClient_NotifyError_Params.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VideoDecodeAccelerator.Result);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecodeClient_NotifyError_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecodeClient_NotifyError_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecodeClient_NotifyError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecodeClient_NotifyError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecodeClient_NotifyError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVideoDecodeAccelerator_Initialize_Name = 1543581538;
  var kVideoDecodeAccelerator_Decode_Name = 248755457;
  var kVideoDecodeAccelerator_AssignPictureBuffers_Name = 1619854363;
  var kVideoDecodeAccelerator_ImportBufferForPicture_Name = 1752006300;
  var kVideoDecodeAccelerator_ReusePictureBuffer_Name = 1542629252;
  var kVideoDecodeAccelerator_Reset_Name = 194024395;
  var kVideoDecodeAccelerator_Flush_Name = 1853523313;

  function VideoDecodeAcceleratorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDecodeAccelerator,
                                                   handleOrPtrInfo);
  }

  function VideoDecodeAcceleratorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDecodeAccelerator, associatedInterfacePtrInfo);
  }

  VideoDecodeAcceleratorAssociatedPtr.prototype =
      Object.create(VideoDecodeAcceleratorPtr.prototype);
  VideoDecodeAcceleratorAssociatedPtr.prototype.constructor =
      VideoDecodeAcceleratorAssociatedPtr;

  function VideoDecodeAcceleratorProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDecodeAcceleratorPtr.prototype.initialize = function() {
    return VideoDecodeAcceleratorProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.initialize = function(config, client) {
    var params_ = new VideoDecodeAccelerator_Initialize_Params();
    params_.config = config;
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecodeAccelerator_Initialize_Name,
          codec.align(VideoDecodeAccelerator_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecodeAccelerator_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecodeAccelerator_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecodeAcceleratorPtr.prototype.decode = function() {
    return VideoDecodeAcceleratorProxy.prototype.decode
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.decode = function(bitstreamBuffer) {
    var params_ = new VideoDecodeAccelerator_Decode_Params();
    params_.bitstreamBuffer = bitstreamBuffer;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeAccelerator_Decode_Name,
        codec.align(VideoDecodeAccelerator_Decode_Params.encodedSize));
    builder.encodeStruct(VideoDecodeAccelerator_Decode_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeAcceleratorPtr.prototype.assignPictureBuffers = function() {
    return VideoDecodeAcceleratorProxy.prototype.assignPictureBuffers
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.assignPictureBuffers = function(count) {
    var params_ = new VideoDecodeAccelerator_AssignPictureBuffers_Params();
    params_.count = count;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeAccelerator_AssignPictureBuffers_Name,
        codec.align(VideoDecodeAccelerator_AssignPictureBuffers_Params.encodedSize));
    builder.encodeStruct(VideoDecodeAccelerator_AssignPictureBuffers_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeAcceleratorPtr.prototype.importBufferForPicture = function() {
    return VideoDecodeAcceleratorProxy.prototype.importBufferForPicture
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.importBufferForPicture = function(pictureBufferId, format, handleFd, planes) {
    var params_ = new VideoDecodeAccelerator_ImportBufferForPicture_Params();
    params_.pictureBufferId = pictureBufferId;
    params_.format = format;
    params_.handleFd = handleFd;
    params_.planes = planes;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeAccelerator_ImportBufferForPicture_Name,
        codec.align(VideoDecodeAccelerator_ImportBufferForPicture_Params.encodedSize));
    builder.encodeStruct(VideoDecodeAccelerator_ImportBufferForPicture_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeAcceleratorPtr.prototype.reusePictureBuffer = function() {
    return VideoDecodeAcceleratorProxy.prototype.reusePictureBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.reusePictureBuffer = function(pictureBufferId) {
    var params_ = new VideoDecodeAccelerator_ReusePictureBuffer_Params();
    params_.pictureBufferId = pictureBufferId;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeAccelerator_ReusePictureBuffer_Name,
        codec.align(VideoDecodeAccelerator_ReusePictureBuffer_Params.encodedSize));
    builder.encodeStruct(VideoDecodeAccelerator_ReusePictureBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeAcceleratorPtr.prototype.reset = function() {
    return VideoDecodeAcceleratorProxy.prototype.reset
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.reset = function() {
    var params_ = new VideoDecodeAccelerator_Reset_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecodeAccelerator_Reset_Name,
          codec.align(VideoDecodeAccelerator_Reset_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecodeAccelerator_Reset_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecodeAccelerator_Reset_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecodeAcceleratorPtr.prototype.flush = function() {
    return VideoDecodeAcceleratorProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeAcceleratorProxy.prototype.flush = function() {
    var params_ = new VideoDecodeAccelerator_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecodeAccelerator_Flush_Name,
          codec.align(VideoDecodeAccelerator_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecodeAccelerator_Flush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecodeAccelerator_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VideoDecodeAcceleratorStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDecodeAcceleratorStub.prototype.initialize = function(config, client) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(config, client);
  }
  VideoDecodeAcceleratorStub.prototype.decode = function(bitstreamBuffer) {
    return this.delegate_ && this.delegate_.decode && this.delegate_.decode(bitstreamBuffer);
  }
  VideoDecodeAcceleratorStub.prototype.assignPictureBuffers = function(count) {
    return this.delegate_ && this.delegate_.assignPictureBuffers && this.delegate_.assignPictureBuffers(count);
  }
  VideoDecodeAcceleratorStub.prototype.importBufferForPicture = function(pictureBufferId, format, handleFd, planes) {
    return this.delegate_ && this.delegate_.importBufferForPicture && this.delegate_.importBufferForPicture(pictureBufferId, format, handleFd, planes);
  }
  VideoDecodeAcceleratorStub.prototype.reusePictureBuffer = function(pictureBufferId) {
    return this.delegate_ && this.delegate_.reusePictureBuffer && this.delegate_.reusePictureBuffer(pictureBufferId);
  }
  VideoDecodeAcceleratorStub.prototype.reset = function() {
    return this.delegate_ && this.delegate_.reset && this.delegate_.reset();
  }
  VideoDecodeAcceleratorStub.prototype.flush = function() {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush();
  }

  VideoDecodeAcceleratorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecodeAccelerator_Decode_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_Decode_Params);
      this.decode(params.bitstreamBuffer);
      return true;
    case kVideoDecodeAccelerator_AssignPictureBuffers_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_AssignPictureBuffers_Params);
      this.assignPictureBuffers(params.count);
      return true;
    case kVideoDecodeAccelerator_ImportBufferForPicture_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_ImportBufferForPicture_Params);
      this.importBufferForPicture(params.pictureBufferId, params.format, params.handleFd, params.planes);
      return true;
    case kVideoDecodeAccelerator_ReusePictureBuffer_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_ReusePictureBuffer_Params);
      this.reusePictureBuffer(params.pictureBufferId);
      return true;
    default:
      return false;
    }
  };

  VideoDecodeAcceleratorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecodeAccelerator_Initialize_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_Initialize_Params);
      this.initialize(params.config, params.client).then(function(response) {
        var responseParams =
            new VideoDecodeAccelerator_Initialize_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kVideoDecodeAccelerator_Initialize_Name,
            codec.align(VideoDecodeAccelerator_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecodeAccelerator_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoDecodeAccelerator_Reset_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_Reset_Params);
      this.reset().then(function(response) {
        var responseParams =
            new VideoDecodeAccelerator_Reset_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kVideoDecodeAccelerator_Reset_Name,
            codec.align(VideoDecodeAccelerator_Reset_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecodeAccelerator_Reset_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoDecodeAccelerator_Flush_Name:
      var params = reader.decodeStruct(VideoDecodeAccelerator_Flush_Params);
      this.flush().then(function(response) {
        var responseParams =
            new VideoDecodeAccelerator_Flush_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kVideoDecodeAccelerator_Flush_Name,
            codec.align(VideoDecodeAccelerator_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecodeAccelerator_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoDecodeAcceleratorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecodeAccelerator_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecodeAccelerator_Initialize_Params;
      break;
      case kVideoDecodeAccelerator_Decode_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeAccelerator_Decode_Params;
      break;
      case kVideoDecodeAccelerator_AssignPictureBuffers_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeAccelerator_AssignPictureBuffers_Params;
      break;
      case kVideoDecodeAccelerator_ImportBufferForPicture_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeAccelerator_ImportBufferForPicture_Params;
      break;
      case kVideoDecodeAccelerator_ReusePictureBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeAccelerator_ReusePictureBuffer_Params;
      break;
      case kVideoDecodeAccelerator_Reset_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecodeAccelerator_Reset_Params;
      break;
      case kVideoDecodeAccelerator_Flush_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecodeAccelerator_Flush_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecodeAcceleratorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoDecodeAccelerator_Initialize_Name:
        if (message.isResponse())
          paramsClass = VideoDecodeAccelerator_Initialize_ResponseParams;
        break;
      case kVideoDecodeAccelerator_Reset_Name:
        if (message.isResponse())
          paramsClass = VideoDecodeAccelerator_Reset_ResponseParams;
        break;
      case kVideoDecodeAccelerator_Flush_Name:
        if (message.isResponse())
          paramsClass = VideoDecodeAccelerator_Flush_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoDecodeAccelerator = {
    name: 'arc.mojom.VideoDecodeAccelerator',
    kVersion: 2,
    ptrClass: VideoDecodeAcceleratorPtr,
    proxyClass: VideoDecodeAcceleratorProxy,
    stubClass: VideoDecodeAcceleratorStub,
    validateRequest: validateVideoDecodeAcceleratorRequest,
    validateResponse: validateVideoDecodeAcceleratorResponse,
    mojomId: 'components/arc/common/video_decode_accelerator.mojom',
    fuzzMethods: {
      initialize: {
        params: VideoDecodeAccelerator_Initialize_Params,
      },
      decode: {
        params: VideoDecodeAccelerator_Decode_Params,
      },
      assignPictureBuffers: {
        params: VideoDecodeAccelerator_AssignPictureBuffers_Params,
      },
      importBufferForPicture: {
        params: VideoDecodeAccelerator_ImportBufferForPicture_Params,
      },
      reusePictureBuffer: {
        params: VideoDecodeAccelerator_ReusePictureBuffer_Params,
      },
      reset: {
        params: VideoDecodeAccelerator_Reset_Params,
      },
      flush: {
        params: VideoDecodeAccelerator_Flush_Params,
      },
    },
  };
  VideoDecodeAccelerator.Result = {};
  VideoDecodeAccelerator.Result.SUCCESS = 0;
  VideoDecodeAccelerator.Result.ILLEGAL_STATE = 1;
  VideoDecodeAccelerator.Result.INVALID_ARGUMENT = 2;
  VideoDecodeAccelerator.Result.UNREADABLE_INPUT = 3;
  VideoDecodeAccelerator.Result.PLATFORM_FAILURE = 4;
  VideoDecodeAccelerator.Result.INSUFFICIENT_RESOURCES = 5;
  VideoDecodeAccelerator.Result.CANCELLED = 6;

  VideoDecodeAccelerator.Result.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  VideoDecodeAccelerator.Result.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  VideoDecodeAcceleratorStub.prototype.validator = validateVideoDecodeAcceleratorRequest;
  VideoDecodeAcceleratorProxy.prototype.validator = validateVideoDecodeAcceleratorResponse;
  var kVideoDecodeClient_ProvidePictureBuffers_Name = 1463202235;
  var kVideoDecodeClient_PictureReady_Name = 2048873723;
  var kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name = 1689076977;
  var kVideoDecodeClient_NotifyError_Name = 1519140349;

  function VideoDecodeClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDecodeClient,
                                                   handleOrPtrInfo);
  }

  function VideoDecodeClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDecodeClient, associatedInterfacePtrInfo);
  }

  VideoDecodeClientAssociatedPtr.prototype =
      Object.create(VideoDecodeClientPtr.prototype);
  VideoDecodeClientAssociatedPtr.prototype.constructor =
      VideoDecodeClientAssociatedPtr;

  function VideoDecodeClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDecodeClientPtr.prototype.providePictureBuffers = function() {
    return VideoDecodeClientProxy.prototype.providePictureBuffers
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeClientProxy.prototype.providePictureBuffers = function(format) {
    var params_ = new VideoDecodeClient_ProvidePictureBuffers_Params();
    params_.format = format;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeClient_ProvidePictureBuffers_Name,
        codec.align(VideoDecodeClient_ProvidePictureBuffers_Params.encodedSize));
    builder.encodeStruct(VideoDecodeClient_ProvidePictureBuffers_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeClientPtr.prototype.pictureReady = function() {
    return VideoDecodeClientProxy.prototype.pictureReady
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeClientProxy.prototype.pictureReady = function(picture) {
    var params_ = new VideoDecodeClient_PictureReady_Params();
    params_.picture = picture;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeClient_PictureReady_Name,
        codec.align(VideoDecodeClient_PictureReady_Params.encodedSize));
    builder.encodeStruct(VideoDecodeClient_PictureReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeClientPtr.prototype.notifyEndOfBitstreamBuffer = function() {
    return VideoDecodeClientProxy.prototype.notifyEndOfBitstreamBuffer
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeClientProxy.prototype.notifyEndOfBitstreamBuffer = function(bitstreamId) {
    var params_ = new VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params();
    params_.bitstreamId = bitstreamId;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name,
        codec.align(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params.encodedSize));
    builder.encodeStruct(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecodeClientPtr.prototype.notifyError = function() {
    return VideoDecodeClientProxy.prototype.notifyError
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecodeClientProxy.prototype.notifyError = function(error) {
    var params_ = new VideoDecodeClient_NotifyError_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kVideoDecodeClient_NotifyError_Name,
        codec.align(VideoDecodeClient_NotifyError_Params.encodedSize));
    builder.encodeStruct(VideoDecodeClient_NotifyError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDecodeClientStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDecodeClientStub.prototype.providePictureBuffers = function(format) {
    return this.delegate_ && this.delegate_.providePictureBuffers && this.delegate_.providePictureBuffers(format);
  }
  VideoDecodeClientStub.prototype.pictureReady = function(picture) {
    return this.delegate_ && this.delegate_.pictureReady && this.delegate_.pictureReady(picture);
  }
  VideoDecodeClientStub.prototype.notifyEndOfBitstreamBuffer = function(bitstreamId) {
    return this.delegate_ && this.delegate_.notifyEndOfBitstreamBuffer && this.delegate_.notifyEndOfBitstreamBuffer(bitstreamId);
  }
  VideoDecodeClientStub.prototype.notifyError = function(error) {
    return this.delegate_ && this.delegate_.notifyError && this.delegate_.notifyError(error);
  }

  VideoDecodeClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecodeClient_ProvidePictureBuffers_Name:
      var params = reader.decodeStruct(VideoDecodeClient_ProvidePictureBuffers_Params);
      this.providePictureBuffers(params.format);
      return true;
    case kVideoDecodeClient_PictureReady_Name:
      var params = reader.decodeStruct(VideoDecodeClient_PictureReady_Params);
      this.pictureReady(params.picture);
      return true;
    case kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name:
      var params = reader.decodeStruct(VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params);
      this.notifyEndOfBitstreamBuffer(params.bitstreamId);
      return true;
    case kVideoDecodeClient_NotifyError_Name:
      var params = reader.decodeStruct(VideoDecodeClient_NotifyError_Params);
      this.notifyError(params.error);
      return true;
    default:
      return false;
    }
  };

  VideoDecodeClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoDecodeClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecodeClient_ProvidePictureBuffers_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeClient_ProvidePictureBuffers_Params;
      break;
      case kVideoDecodeClient_PictureReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeClient_PictureReady_Params;
      break;
      case kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params;
      break;
      case kVideoDecodeClient_NotifyError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecodeClient_NotifyError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecodeClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoDecodeClient = {
    name: 'arc.mojom.VideoDecodeClient',
    kVersion: 1,
    ptrClass: VideoDecodeClientPtr,
    proxyClass: VideoDecodeClientProxy,
    stubClass: VideoDecodeClientStub,
    validateRequest: validateVideoDecodeClientRequest,
    validateResponse: null,
    mojomId: 'components/arc/common/video_decode_accelerator.mojom',
    fuzzMethods: {
      providePictureBuffers: {
        params: VideoDecodeClient_ProvidePictureBuffers_Params,
      },
      pictureReady: {
        params: VideoDecodeClient_PictureReady_Params,
      },
      notifyEndOfBitstreamBuffer: {
        params: VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params,
      },
      notifyError: {
        params: VideoDecodeClient_NotifyError_Params,
      },
    },
  };
  VideoDecodeClientStub.prototype.validator = validateVideoDecodeClientRequest;
  VideoDecodeClientProxy.prototype.validator = null;
  exports.BitstreamBuffer = BitstreamBuffer;
  exports.Picture = Picture;
  exports.PictureBufferFormat = PictureBufferFormat;
  exports.VideoDecodeAcceleratorConfig = VideoDecodeAcceleratorConfig;
  exports.VideoDecodeAccelerator = VideoDecodeAccelerator;
  exports.VideoDecodeAcceleratorPtr = VideoDecodeAcceleratorPtr;
  exports.VideoDecodeAcceleratorAssociatedPtr = VideoDecodeAcceleratorAssociatedPtr;
  exports.VideoDecodeClient = VideoDecodeClient;
  exports.VideoDecodeClientPtr = VideoDecodeClientPtr;
  exports.VideoDecodeClientAssociatedPtr = VideoDecodeClientAssociatedPtr;
})();