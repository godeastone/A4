// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/video_decoder.mojom';
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
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var media_log$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_log.mojom', 'media_log.mojom.js');
  }
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', 'media_types.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', '../../../ui/gfx/mojo/color_space.mojom.js');
  }



  function CommandBufferId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CommandBufferId.prototype.initDefaults_ = function() {
    this.channelToken = null;
    this.routeId = 0;
  };
  CommandBufferId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CommandBufferId.generate = function(generator_) {
    var generated = new CommandBufferId;
    generated.channelToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.routeId = generator_.generateInt32();
    return generated;
  };

  CommandBufferId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.channelToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateInt32(this.routeId);
    }
    return this;
  };
  CommandBufferId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CommandBufferId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CommandBufferId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CommandBufferId.validate = function(messageValidator, offset) {
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


    // validate CommandBufferId.channelToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CommandBufferId.encodedSize = codec.kStructHeaderSize + 16;

  CommandBufferId.decode = function(decoder) {
    var packed;
    var val = new CommandBufferId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.channelToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.routeId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CommandBufferId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CommandBufferId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.channelToken);
    encoder.encodeStruct(codec.Int32, val.routeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function OverlayInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OverlayInfo.prototype.initDefaults_ = function() {
  };
  OverlayInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OverlayInfo.generate = function(generator_) {
    var generated = new OverlayInfo;
    return generated;
  };

  OverlayInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  OverlayInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OverlayInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OverlayInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OverlayInfo.validate = function(messageValidator, offset) {
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

  OverlayInfo.encodedSize = codec.kStructHeaderSize + 0;

  OverlayInfo.decode = function(decoder) {
    var packed;
    var val = new OverlayInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  OverlayInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OverlayInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoFrameHandleReleaser_ReleaseVideoFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.prototype.initDefaults_ = function() {
    this.releaseToken = null;
    this.releaseSyncToken = null;
  };
  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.generate = function(generator_) {
    var generated = new VideoFrameHandleReleaser_ReleaseVideoFrame_Params;
    generated.releaseToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.releaseSyncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    return generated;
  };

  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.releaseToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.releaseSyncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    return this;
  };
  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.validate = function(messageValidator, offset) {
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


    // validate VideoFrameHandleReleaser_ReleaseVideoFrame_Params.releaseToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoFrameHandleReleaser_ReleaseVideoFrame_Params.releaseSyncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.decode = function(decoder) {
    var packed;
    var val = new VideoFrameHandleReleaser_ReleaseVideoFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.releaseToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.releaseSyncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    return val;
  };

  VideoFrameHandleReleaser_ReleaseVideoFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoFrameHandleReleaser_ReleaseVideoFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.releaseToken);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.releaseSyncToken);
  };
  function VideoDecoder_Construct_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Construct_Params.prototype.initDefaults_ = function() {
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
    this.mediaLog = new associatedBindings.AssociatedInterfacePtrInfo();
    this.videoFrameHandleReleaser = new bindings.InterfaceRequest();
    this.decoderBufferPipe = null;
    this.commandBufferId = null;
    this.targetColorSpace = null;
  };
  VideoDecoder_Construct_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Construct_Params.generate = function(generator_) {
    var generated = new VideoDecoder_Construct_Params;
    generated.client = generator_.generateAssociatedInterface("media.mojom.VideoDecoderClient", false);
    generated.mediaLog = generator_.generateAssociatedInterface("media.mojom.MediaLog", false);
    generated.videoFrameHandleReleaser = generator_.generateInterfaceRequest("media.mojom.VideoFrameHandleReleaser", false);
    generated.decoderBufferPipe = generator_.generateDataPipeConsumer(false);
    generated.commandBufferId = generator_.generateStruct(media.mojom.CommandBufferId, true);
    generated.targetColorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    return generated;
  };

  VideoDecoder_Construct_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "media.mojom.VideoDecoderClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaLog = mutator_.mutateAssociatedInterface(this.mediaLog, "media.mojom.MediaLog", false);
    }
    if (mutator_.chooseMutateField()) {
      this.videoFrameHandleReleaser = mutator_.mutateInterfaceRequest(this.videoFrameHandleReleaser, "media.mojom.VideoFrameHandleReleaser", false);
    }
    if (mutator_.chooseMutateField()) {
      this.decoderBufferPipe = mutator_.mutateDataPipeConsumer(this.decoderBufferPipe, false);
    }
    if (mutator_.chooseMutateField()) {
      this.commandBufferId = mutator_.mutateStruct(media.mojom.CommandBufferId, true);
    }
    if (mutator_.chooseMutateField()) {
      this.targetColorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    return this;
  };
  VideoDecoder_Construct_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.VideoDecoderClientAssociatedPtr"]);
    }
    if (this.mediaLog !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.MediaLogAssociatedPtr"]);
    }
    if (this.videoFrameHandleReleaser !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.VideoFrameHandleReleaserRequest"]);
    }
    if (this.decoderBufferPipe !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    return handles;
  };

  VideoDecoder_Construct_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Construct_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    this.mediaLog = handles[idx++];;
    this.videoFrameHandleReleaser = handles[idx++];;
    this.decoderBufferPipe = handles[idx++];;
    return idx;
  };

  VideoDecoder_Construct_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecoder_Construct_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecoder_Construct_Params.mediaLog
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecoder_Construct_Params.videoFrameHandleReleaser
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecoder_Construct_Params.decoderBufferPipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 20, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecoder_Construct_Params.commandBufferId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, CommandBufferId, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoDecoder_Construct_Params.targetColorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Construct_Params.encodedSize = codec.kStructHeaderSize + 40;

  VideoDecoder_Construct_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Construct_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.mediaLog = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.videoFrameHandleReleaser = decoder.decodeStruct(codec.InterfaceRequest);
    val.decoderBufferPipe = decoder.decodeStruct(codec.Handle);
    val.commandBufferId = decoder.decodeStructPointer(CommandBufferId);
    val.targetColorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    return val;
  };

  VideoDecoder_Construct_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Construct_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.mediaLog);
    encoder.encodeStruct(codec.InterfaceRequest, val.videoFrameHandleReleaser);
    encoder.encodeStruct(codec.Handle, val.decoderBufferPipe);
    encoder.encodeStructPointer(CommandBufferId, val.commandBufferId);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.targetColorSpace);
  };
  function VideoDecoder_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Initialize_Params.prototype.initDefaults_ = function() {
    this.config = null;
    this.lowDelay = false;
    this.cdmId = 0;
  };
  VideoDecoder_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Initialize_Params.generate = function(generator_) {
    var generated = new VideoDecoder_Initialize_Params;
    generated.config = generator_.generateStruct(media.mojom.VideoDecoderConfig, false);
    generated.lowDelay = generator_.generateBool();
    generated.cdmId = generator_.generateInt32();
    return generated;
  };

  VideoDecoder_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateStruct(media.mojom.VideoDecoderConfig, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lowDelay = mutator_.mutateBool(this.lowDelay);
    }
    if (mutator_.chooseMutateField()) {
      this.cdmId = mutator_.mutateInt32(this.cdmId);
    }
    return this;
  };
  VideoDecoder_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecoder_Initialize_Params.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.VideoDecoderConfig, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VideoDecoder_Initialize_Params.encodedSize = codec.kStructHeaderSize + 16;

  VideoDecoder_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStructPointer(media_types$.VideoDecoderConfig);
    packed = decoder.readUint8();
    val.lowDelay = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.cdmId = decoder.decodeStruct(codec.Int32);
    return val;
  };

  VideoDecoder_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.VideoDecoderConfig, val.config);
    packed = 0;
    packed |= (val.lowDelay & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.cdmId);
  };
  function VideoDecoder_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.needsBitstreamConversion = false;
    this.maxDecodeRequests = 0;
  };
  VideoDecoder_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecoder_Initialize_ResponseParams;
    generated.success = generator_.generateBool();
    generated.needsBitstreamConversion = generator_.generateBool();
    generated.maxDecodeRequests = generator_.generateInt32();
    return generated;
  };

  VideoDecoder_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.needsBitstreamConversion = mutator_.mutateBool(this.needsBitstreamConversion);
    }
    if (mutator_.chooseMutateField()) {
      this.maxDecodeRequests = mutator_.mutateInt32(this.maxDecodeRequests);
    }
    return this;
  };
  VideoDecoder_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoDecoder_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    val.needsBitstreamConversion = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxDecodeRequests = decoder.decodeStruct(codec.Int32);
    return val;
  };

  VideoDecoder_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    packed |= (val.needsBitstreamConversion & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.maxDecodeRequests);
  };
  function VideoDecoder_Decode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Decode_Params.prototype.initDefaults_ = function() {
    this.buffer = null;
  };
  VideoDecoder_Decode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Decode_Params.generate = function(generator_) {
    var generated = new VideoDecoder_Decode_Params;
    generated.buffer = generator_.generateStruct(media.mojom.DecoderBuffer, false);
    return generated;
  };

  VideoDecoder_Decode_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateStruct(media.mojom.DecoderBuffer, false);
    }
    return this;
  };
  VideoDecoder_Decode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_Decode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Decode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_Decode_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecoder_Decode_Params.buffer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.DecoderBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Decode_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_Decode_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Decode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStructPointer(media_types$.DecoderBuffer);
    return val;
  };

  VideoDecoder_Decode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Decode_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.DecoderBuffer, val.buffer);
  };
  function VideoDecoder_Decode_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Decode_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  VideoDecoder_Decode_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Decode_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecoder_Decode_ResponseParams;
    generated.status = generator_.generateEnum();
    return generated;
  };

  VideoDecoder_Decode_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status);
    }
    return this;
  };
  VideoDecoder_Decode_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_Decode_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Decode_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_Decode_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VideoDecoder_Decode_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.DecodeStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_Decode_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_Decode_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Decode_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecoder_Decode_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Decode_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoDecoder_Reset_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Reset_Params.prototype.initDefaults_ = function() {
  };
  VideoDecoder_Reset_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Reset_Params.generate = function(generator_) {
    var generated = new VideoDecoder_Reset_Params;
    return generated;
  };

  VideoDecoder_Reset_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoDecoder_Reset_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_Reset_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Reset_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_Reset_Params.validate = function(messageValidator, offset) {
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

  VideoDecoder_Reset_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoDecoder_Reset_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Reset_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDecoder_Reset_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Reset_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDecoder_Reset_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_Reset_ResponseParams.prototype.initDefaults_ = function() {
  };
  VideoDecoder_Reset_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_Reset_ResponseParams.generate = function(generator_) {
    var generated = new VideoDecoder_Reset_ResponseParams;
    return generated;
  };

  VideoDecoder_Reset_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoDecoder_Reset_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_Reset_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_Reset_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_Reset_ResponseParams.validate = function(messageValidator, offset) {
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

  VideoDecoder_Reset_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VideoDecoder_Reset_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_Reset_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDecoder_Reset_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_Reset_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDecoder_OnOverlayInfoChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoder_OnOverlayInfoChanged_Params.prototype.initDefaults_ = function() {
    this.overlayInfo = null;
  };
  VideoDecoder_OnOverlayInfoChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoder_OnOverlayInfoChanged_Params.generate = function(generator_) {
    var generated = new VideoDecoder_OnOverlayInfoChanged_Params;
    generated.overlayInfo = generator_.generateStruct(media.mojom.OverlayInfo, false);
    return generated;
  };

  VideoDecoder_OnOverlayInfoChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.overlayInfo = mutator_.mutateStruct(media.mojom.OverlayInfo, false);
    }
    return this;
  };
  VideoDecoder_OnOverlayInfoChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoder_OnOverlayInfoChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoder_OnOverlayInfoChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoder_OnOverlayInfoChanged_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecoder_OnOverlayInfoChanged_Params.overlayInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, OverlayInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoder_OnOverlayInfoChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoder_OnOverlayInfoChanged_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoder_OnOverlayInfoChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.overlayInfo = decoder.decodeStructPointer(OverlayInfo);
    return val;
  };

  VideoDecoder_OnOverlayInfoChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoder_OnOverlayInfoChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(OverlayInfo, val.overlayInfo);
  };
  function VideoDecoderClient_OnVideoFrameDecoded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.initDefaults_ = function() {
    this.frame = null;
    this.canReadWithoutStalling = false;
    this.releaseToken = null;
  };
  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoderClient_OnVideoFrameDecoded_Params.generate = function(generator_) {
    var generated = new VideoDecoderClient_OnVideoFrameDecoded_Params;
    generated.frame = generator_.generateStruct(media.mojom.VideoFrame, false);
    generated.canReadWithoutStalling = generator_.generateBool();
    generated.releaseToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, true);
    return generated;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frame = mutator_.mutateStruct(media.mojom.VideoFrame, false);
    }
    if (mutator_.chooseMutateField()) {
      this.canReadWithoutStalling = mutator_.mutateBool(this.canReadWithoutStalling);
    }
    if (mutator_.chooseMutateField()) {
      this.releaseToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, true);
    }
    return this;
  };
  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.frame !== null) {
      Array.prototype.push.apply(handles, this.frame.getHandleDeps());
    }
    return handles;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoderClient_OnVideoFrameDecoded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.frame.setHandlesInternal_(handles, idx);
    return idx;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDecoderClient_OnVideoFrameDecoded_Params.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.VideoFrame, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate VideoDecoderClient_OnVideoFrameDecoded_Params.releaseToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, unguessable_token$.UnguessableToken, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize = codec.kStructHeaderSize + 24;

  VideoDecoderClient_OnVideoFrameDecoded_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoderClient_OnVideoFrameDecoded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame = decoder.decodeStructPointer(media_types$.VideoFrame);
    packed = decoder.readUint8();
    val.canReadWithoutStalling = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.releaseToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  VideoDecoderClient_OnVideoFrameDecoded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.VideoFrame, val.frame);
    packed = 0;
    packed |= (val.canReadWithoutStalling & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.releaseToken);
  };
  function VideoDecoderClient_RequestOverlayInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDecoderClient_RequestOverlayInfo_Params.prototype.initDefaults_ = function() {
    this.restartForTransitions = false;
  };
  VideoDecoderClient_RequestOverlayInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDecoderClient_RequestOverlayInfo_Params.generate = function(generator_) {
    var generated = new VideoDecoderClient_RequestOverlayInfo_Params;
    generated.restartForTransitions = generator_.generateBool();
    return generated;
  };

  VideoDecoderClient_RequestOverlayInfo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.restartForTransitions = mutator_.mutateBool(this.restartForTransitions);
    }
    return this;
  };
  VideoDecoderClient_RequestOverlayInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDecoderClient_RequestOverlayInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDecoderClient_RequestOverlayInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDecoderClient_RequestOverlayInfo_Params.validate = function(messageValidator, offset) {
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

  VideoDecoderClient_RequestOverlayInfo_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDecoderClient_RequestOverlayInfo_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDecoderClient_RequestOverlayInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.restartForTransitions = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VideoDecoderClient_RequestOverlayInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDecoderClient_RequestOverlayInfo_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.restartForTransitions & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVideoFrameHandleReleaser_ReleaseVideoFrame_Name = 494884711;

  function VideoFrameHandleReleaserPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoFrameHandleReleaser,
                                                   handleOrPtrInfo);
  }

  function VideoFrameHandleReleaserAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoFrameHandleReleaser, associatedInterfacePtrInfo);
  }

  VideoFrameHandleReleaserAssociatedPtr.prototype =
      Object.create(VideoFrameHandleReleaserPtr.prototype);
  VideoFrameHandleReleaserAssociatedPtr.prototype.constructor =
      VideoFrameHandleReleaserAssociatedPtr;

  function VideoFrameHandleReleaserProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoFrameHandleReleaserPtr.prototype.releaseVideoFrame = function() {
    return VideoFrameHandleReleaserProxy.prototype.releaseVideoFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoFrameHandleReleaserProxy.prototype.releaseVideoFrame = function(releaseToken, releaseSyncToken) {
    var params_ = new VideoFrameHandleReleaser_ReleaseVideoFrame_Params();
    params_.releaseToken = releaseToken;
    params_.releaseSyncToken = releaseSyncToken;
    var builder = new codec.MessageV0Builder(
        kVideoFrameHandleReleaser_ReleaseVideoFrame_Name,
        codec.align(VideoFrameHandleReleaser_ReleaseVideoFrame_Params.encodedSize));
    builder.encodeStruct(VideoFrameHandleReleaser_ReleaseVideoFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoFrameHandleReleaserStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoFrameHandleReleaserStub.prototype.releaseVideoFrame = function(releaseToken, releaseSyncToken) {
    return this.delegate_ && this.delegate_.releaseVideoFrame && this.delegate_.releaseVideoFrame(releaseToken, releaseSyncToken);
  }

  VideoFrameHandleReleaserStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoFrameHandleReleaser_ReleaseVideoFrame_Name:
      var params = reader.decodeStruct(VideoFrameHandleReleaser_ReleaseVideoFrame_Params);
      this.releaseVideoFrame(params.releaseToken, params.releaseSyncToken);
      return true;
    default:
      return false;
    }
  };

  VideoFrameHandleReleaserStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoFrameHandleReleaserRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoFrameHandleReleaser_ReleaseVideoFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoFrameHandleReleaser_ReleaseVideoFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoFrameHandleReleaserResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoFrameHandleReleaser = {
    name: 'media.mojom.VideoFrameHandleReleaser',
    kVersion: 0,
    ptrClass: VideoFrameHandleReleaserPtr,
    proxyClass: VideoFrameHandleReleaserProxy,
    stubClass: VideoFrameHandleReleaserStub,
    validateRequest: validateVideoFrameHandleReleaserRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/video_decoder.mojom',
    fuzzMethods: {
      releaseVideoFrame: {
        params: VideoFrameHandleReleaser_ReleaseVideoFrame_Params,
      },
    },
  };
  VideoFrameHandleReleaserStub.prototype.validator = validateVideoFrameHandleReleaserRequest;
  VideoFrameHandleReleaserProxy.prototype.validator = null;
  var kVideoDecoder_Construct_Name = 514685884;
  var kVideoDecoder_Initialize_Name = 1465544223;
  var kVideoDecoder_Decode_Name = 473400812;
  var kVideoDecoder_Reset_Name = 1135541172;
  var kVideoDecoder_OnOverlayInfoChanged_Name = 609577922;

  function VideoDecoderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDecoder,
                                                   handleOrPtrInfo);
  }

  function VideoDecoderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDecoder, associatedInterfacePtrInfo);
  }

  VideoDecoderAssociatedPtr.prototype =
      Object.create(VideoDecoderPtr.prototype);
  VideoDecoderAssociatedPtr.prototype.constructor =
      VideoDecoderAssociatedPtr;

  function VideoDecoderProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDecoderPtr.prototype.construct = function() {
    return VideoDecoderProxy.prototype.construct
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderProxy.prototype.construct = function(client, mediaLog, videoFrameHandleReleaser, decoderBufferPipe, commandBufferId, targetColorSpace) {
    var params_ = new VideoDecoder_Construct_Params();
    params_.client = client;
    params_.mediaLog = mediaLog;
    params_.videoFrameHandleReleaser = videoFrameHandleReleaser;
    params_.decoderBufferPipe = decoderBufferPipe;
    params_.commandBufferId = commandBufferId;
    params_.targetColorSpace = targetColorSpace;
    var builder = new codec.MessageV2Builder(
        kVideoDecoder_Construct_Name,
        codec.align(VideoDecoder_Construct_Params.encodedSize));
    builder.setPayload(VideoDecoder_Construct_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecoderPtr.prototype.initialize = function() {
    return VideoDecoderProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderProxy.prototype.initialize = function(config, lowDelay, cdmId) {
    var params_ = new VideoDecoder_Initialize_Params();
    params_.config = config;
    params_.lowDelay = lowDelay;
    params_.cdmId = cdmId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecoder_Initialize_Name,
          codec.align(VideoDecoder_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecoder_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecoder_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecoderPtr.prototype.decode = function() {
    return VideoDecoderProxy.prototype.decode
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderProxy.prototype.decode = function(buffer) {
    var params_ = new VideoDecoder_Decode_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecoder_Decode_Name,
          codec.align(VideoDecoder_Decode_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecoder_Decode_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecoder_Decode_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecoderPtr.prototype.reset = function() {
    return VideoDecoderProxy.prototype.reset
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderProxy.prototype.reset = function() {
    var params_ = new VideoDecoder_Reset_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVideoDecoder_Reset_Name,
          codec.align(VideoDecoder_Reset_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VideoDecoder_Reset_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VideoDecoder_Reset_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VideoDecoderPtr.prototype.onOverlayInfoChanged = function() {
    return VideoDecoderProxy.prototype.onOverlayInfoChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderProxy.prototype.onOverlayInfoChanged = function(overlayInfo) {
    var params_ = new VideoDecoder_OnOverlayInfoChanged_Params();
    params_.overlayInfo = overlayInfo;
    var builder = new codec.MessageV0Builder(
        kVideoDecoder_OnOverlayInfoChanged_Name,
        codec.align(VideoDecoder_OnOverlayInfoChanged_Params.encodedSize));
    builder.encodeStruct(VideoDecoder_OnOverlayInfoChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDecoderStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDecoderStub.prototype.construct = function(client, mediaLog, videoFrameHandleReleaser, decoderBufferPipe, commandBufferId, targetColorSpace) {
    return this.delegate_ && this.delegate_.construct && this.delegate_.construct(client, mediaLog, videoFrameHandleReleaser, decoderBufferPipe, commandBufferId, targetColorSpace);
  }
  VideoDecoderStub.prototype.initialize = function(config, lowDelay, cdmId) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(config, lowDelay, cdmId);
  }
  VideoDecoderStub.prototype.decode = function(buffer) {
    return this.delegate_ && this.delegate_.decode && this.delegate_.decode(buffer);
  }
  VideoDecoderStub.prototype.reset = function() {
    return this.delegate_ && this.delegate_.reset && this.delegate_.reset();
  }
  VideoDecoderStub.prototype.onOverlayInfoChanged = function(overlayInfo) {
    return this.delegate_ && this.delegate_.onOverlayInfoChanged && this.delegate_.onOverlayInfoChanged(overlayInfo);
  }

  VideoDecoderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecoder_Construct_Name:
      var params = reader.decodeStruct(VideoDecoder_Construct_Params);
      this.construct(params.client, params.mediaLog, params.videoFrameHandleReleaser, params.decoderBufferPipe, params.commandBufferId, params.targetColorSpace);
      return true;
    case kVideoDecoder_OnOverlayInfoChanged_Name:
      var params = reader.decodeStruct(VideoDecoder_OnOverlayInfoChanged_Params);
      this.onOverlayInfoChanged(params.overlayInfo);
      return true;
    default:
      return false;
    }
  };

  VideoDecoderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecoder_Initialize_Name:
      var params = reader.decodeStruct(VideoDecoder_Initialize_Params);
      this.initialize(params.config, params.lowDelay, params.cdmId).then(function(response) {
        var responseParams =
            new VideoDecoder_Initialize_ResponseParams();
        responseParams.success = response.success;
        responseParams.needsBitstreamConversion = response.needsBitstreamConversion;
        responseParams.maxDecodeRequests = response.maxDecodeRequests;
        var builder = new codec.MessageV1Builder(
            kVideoDecoder_Initialize_Name,
            codec.align(VideoDecoder_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecoder_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoDecoder_Decode_Name:
      var params = reader.decodeStruct(VideoDecoder_Decode_Params);
      this.decode(params.buffer).then(function(response) {
        var responseParams =
            new VideoDecoder_Decode_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kVideoDecoder_Decode_Name,
            codec.align(VideoDecoder_Decode_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecoder_Decode_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVideoDecoder_Reset_Name:
      var params = reader.decodeStruct(VideoDecoder_Reset_Params);
      this.reset().then(function(response) {
        var responseParams =
            new VideoDecoder_Reset_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVideoDecoder_Reset_Name,
            codec.align(VideoDecoder_Reset_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VideoDecoder_Reset_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVideoDecoderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecoder_Construct_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecoder_Construct_Params;
      break;
      case kVideoDecoder_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecoder_Initialize_Params;
      break;
      case kVideoDecoder_Decode_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecoder_Decode_Params;
      break;
      case kVideoDecoder_Reset_Name:
        if (message.expectsResponse())
          paramsClass = VideoDecoder_Reset_Params;
      break;
      case kVideoDecoder_OnOverlayInfoChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecoder_OnOverlayInfoChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecoderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVideoDecoder_Initialize_Name:
        if (message.isResponse())
          paramsClass = VideoDecoder_Initialize_ResponseParams;
        break;
      case kVideoDecoder_Decode_Name:
        if (message.isResponse())
          paramsClass = VideoDecoder_Decode_ResponseParams;
        break;
      case kVideoDecoder_Reset_Name:
        if (message.isResponse())
          paramsClass = VideoDecoder_Reset_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VideoDecoder = {
    name: 'media.mojom.VideoDecoder',
    kVersion: 0,
    ptrClass: VideoDecoderPtr,
    proxyClass: VideoDecoderProxy,
    stubClass: VideoDecoderStub,
    validateRequest: validateVideoDecoderRequest,
    validateResponse: validateVideoDecoderResponse,
    mojomId: 'media/mojo/interfaces/video_decoder.mojom',
    fuzzMethods: {
      construct: {
        params: VideoDecoder_Construct_Params,
      },
      initialize: {
        params: VideoDecoder_Initialize_Params,
      },
      decode: {
        params: VideoDecoder_Decode_Params,
      },
      reset: {
        params: VideoDecoder_Reset_Params,
      },
      onOverlayInfoChanged: {
        params: VideoDecoder_OnOverlayInfoChanged_Params,
      },
    },
  };
  VideoDecoderStub.prototype.validator = validateVideoDecoderRequest;
  VideoDecoderProxy.prototype.validator = validateVideoDecoderResponse;
  var kVideoDecoderClient_OnVideoFrameDecoded_Name = 108638112;
  var kVideoDecoderClient_RequestOverlayInfo_Name = 965331124;

  function VideoDecoderClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDecoderClient,
                                                   handleOrPtrInfo);
  }

  function VideoDecoderClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDecoderClient, associatedInterfacePtrInfo);
  }

  VideoDecoderClientAssociatedPtr.prototype =
      Object.create(VideoDecoderClientPtr.prototype);
  VideoDecoderClientAssociatedPtr.prototype.constructor =
      VideoDecoderClientAssociatedPtr;

  function VideoDecoderClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDecoderClientPtr.prototype.onVideoFrameDecoded = function() {
    return VideoDecoderClientProxy.prototype.onVideoFrameDecoded
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderClientProxy.prototype.onVideoFrameDecoded = function(frame, canReadWithoutStalling, releaseToken) {
    var params_ = new VideoDecoderClient_OnVideoFrameDecoded_Params();
    params_.frame = frame;
    params_.canReadWithoutStalling = canReadWithoutStalling;
    params_.releaseToken = releaseToken;
    var builder = new codec.MessageV0Builder(
        kVideoDecoderClient_OnVideoFrameDecoded_Name,
        codec.align(VideoDecoderClient_OnVideoFrameDecoded_Params.encodedSize));
    builder.encodeStruct(VideoDecoderClient_OnVideoFrameDecoded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDecoderClientPtr.prototype.requestOverlayInfo = function() {
    return VideoDecoderClientProxy.prototype.requestOverlayInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDecoderClientProxy.prototype.requestOverlayInfo = function(restartForTransitions) {
    var params_ = new VideoDecoderClient_RequestOverlayInfo_Params();
    params_.restartForTransitions = restartForTransitions;
    var builder = new codec.MessageV0Builder(
        kVideoDecoderClient_RequestOverlayInfo_Name,
        codec.align(VideoDecoderClient_RequestOverlayInfo_Params.encodedSize));
    builder.encodeStruct(VideoDecoderClient_RequestOverlayInfo_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDecoderClientStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDecoderClientStub.prototype.onVideoFrameDecoded = function(frame, canReadWithoutStalling, releaseToken) {
    return this.delegate_ && this.delegate_.onVideoFrameDecoded && this.delegate_.onVideoFrameDecoded(frame, canReadWithoutStalling, releaseToken);
  }
  VideoDecoderClientStub.prototype.requestOverlayInfo = function(restartForTransitions) {
    return this.delegate_ && this.delegate_.requestOverlayInfo && this.delegate_.requestOverlayInfo(restartForTransitions);
  }

  VideoDecoderClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDecoderClient_OnVideoFrameDecoded_Name:
      var params = reader.decodeStruct(VideoDecoderClient_OnVideoFrameDecoded_Params);
      this.onVideoFrameDecoded(params.frame, params.canReadWithoutStalling, params.releaseToken);
      return true;
    case kVideoDecoderClient_RequestOverlayInfo_Name:
      var params = reader.decodeStruct(VideoDecoderClient_RequestOverlayInfo_Params);
      this.requestOverlayInfo(params.restartForTransitions);
      return true;
    default:
      return false;
    }
  };

  VideoDecoderClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoDecoderClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDecoderClient_OnVideoFrameDecoded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecoderClient_OnVideoFrameDecoded_Params;
      break;
      case kVideoDecoderClient_RequestOverlayInfo_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDecoderClient_RequestOverlayInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDecoderClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoDecoderClient = {
    name: 'media.mojom.VideoDecoderClient',
    kVersion: 0,
    ptrClass: VideoDecoderClientPtr,
    proxyClass: VideoDecoderClientProxy,
    stubClass: VideoDecoderClientStub,
    validateRequest: validateVideoDecoderClientRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/video_decoder.mojom',
    fuzzMethods: {
      onVideoFrameDecoded: {
        params: VideoDecoderClient_OnVideoFrameDecoded_Params,
      },
      requestOverlayInfo: {
        params: VideoDecoderClient_RequestOverlayInfo_Params,
      },
    },
  };
  VideoDecoderClientStub.prototype.validator = validateVideoDecoderClientRequest;
  VideoDecoderClientProxy.prototype.validator = null;
  exports.CommandBufferId = CommandBufferId;
  exports.OverlayInfo = OverlayInfo;
  exports.VideoFrameHandleReleaser = VideoFrameHandleReleaser;
  exports.VideoFrameHandleReleaserPtr = VideoFrameHandleReleaserPtr;
  exports.VideoFrameHandleReleaserAssociatedPtr = VideoFrameHandleReleaserAssociatedPtr;
  exports.VideoDecoder = VideoDecoder;
  exports.VideoDecoderPtr = VideoDecoderPtr;
  exports.VideoDecoderAssociatedPtr = VideoDecoderAssociatedPtr;
  exports.VideoDecoderClient = VideoDecoderClient;
  exports.VideoDecoderClientPtr = VideoDecoderClientPtr;
  exports.VideoDecoderClientAssociatedPtr = VideoDecoderClientAssociatedPtr;
})();