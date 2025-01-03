// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/interface_factory.mojom';
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
  var audio_decoder$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_decoder.mojom', 'audio_decoder.mojom.js');
  }
  var cdm_proxy$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/cdm_proxy.mojom', 'cdm_proxy.mojom.js');
  }
  var decryptor$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/decryptor.mojom', 'decryptor.mojom.js');
  }
  var content_decryption_module$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/content_decryption_module.mojom', 'content_decryption_module.mojom.js');
  }
  var renderer$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/renderer.mojom', 'renderer.mojom.js');
  }
  var video_decoder$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/video_decoder.mojom', 'video_decoder.mojom.js');
  }


  var HostedRendererType = {};
  HostedRendererType.kDefault = 0;

  HostedRendererType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  HostedRendererType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function InterfaceFactory_CreateAudioDecoder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceFactory_CreateAudioDecoder_Params.prototype.initDefaults_ = function() {
    this.audioDecoder = new bindings.InterfaceRequest();
  };
  InterfaceFactory_CreateAudioDecoder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceFactory_CreateAudioDecoder_Params.generate = function(generator_) {
    var generated = new InterfaceFactory_CreateAudioDecoder_Params;
    generated.audioDecoder = generator_.generateInterfaceRequest("media.mojom.AudioDecoder", false);
    return generated;
  };

  InterfaceFactory_CreateAudioDecoder_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.audioDecoder = mutator_.mutateInterfaceRequest(this.audioDecoder, "media.mojom.AudioDecoder", false);
    }
    return this;
  };
  InterfaceFactory_CreateAudioDecoder_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.audioDecoder !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioDecoderRequest"]);
    }
    return handles;
  };

  InterfaceFactory_CreateAudioDecoder_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceFactory_CreateAudioDecoder_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.audioDecoder = handles[idx++];;
    return idx;
  };

  InterfaceFactory_CreateAudioDecoder_Params.validate = function(messageValidator, offset) {
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


    // validate InterfaceFactory_CreateAudioDecoder_Params.audioDecoder
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceFactory_CreateAudioDecoder_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterfaceFactory_CreateAudioDecoder_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceFactory_CreateAudioDecoder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.audioDecoder = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterfaceFactory_CreateAudioDecoder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceFactory_CreateAudioDecoder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.audioDecoder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InterfaceFactory_CreateVideoDecoder_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceFactory_CreateVideoDecoder_Params.prototype.initDefaults_ = function() {
    this.videoDecoder = new bindings.InterfaceRequest();
  };
  InterfaceFactory_CreateVideoDecoder_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceFactory_CreateVideoDecoder_Params.generate = function(generator_) {
    var generated = new InterfaceFactory_CreateVideoDecoder_Params;
    generated.videoDecoder = generator_.generateInterfaceRequest("media.mojom.VideoDecoder", false);
    return generated;
  };

  InterfaceFactory_CreateVideoDecoder_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.videoDecoder = mutator_.mutateInterfaceRequest(this.videoDecoder, "media.mojom.VideoDecoder", false);
    }
    return this;
  };
  InterfaceFactory_CreateVideoDecoder_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.videoDecoder !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.VideoDecoderRequest"]);
    }
    return handles;
  };

  InterfaceFactory_CreateVideoDecoder_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceFactory_CreateVideoDecoder_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.videoDecoder = handles[idx++];;
    return idx;
  };

  InterfaceFactory_CreateVideoDecoder_Params.validate = function(messageValidator, offset) {
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


    // validate InterfaceFactory_CreateVideoDecoder_Params.videoDecoder
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceFactory_CreateVideoDecoder_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterfaceFactory_CreateVideoDecoder_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceFactory_CreateVideoDecoder_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.videoDecoder = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterfaceFactory_CreateVideoDecoder_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceFactory_CreateVideoDecoder_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.videoDecoder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InterfaceFactory_CreateRenderer_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceFactory_CreateRenderer_Params.prototype.initDefaults_ = function() {
    this.type = 0;
    this.renderer = new bindings.InterfaceRequest();
    this.typeSpecificId = null;
  };
  InterfaceFactory_CreateRenderer_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceFactory_CreateRenderer_Params.generate = function(generator_) {
    var generated = new InterfaceFactory_CreateRenderer_Params;
    generated.type = generator_.generateEnum(0, 0);
    generated.typeSpecificId = generator_.generateString(false);
    generated.renderer = generator_.generateInterfaceRequest("media.mojom.Renderer", false);
    return generated;
  };

  InterfaceFactory_CreateRenderer_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.typeSpecificId = mutator_.mutateString(this.typeSpecificId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.renderer = mutator_.mutateInterfaceRequest(this.renderer, "media.mojom.Renderer", false);
    }
    return this;
  };
  InterfaceFactory_CreateRenderer_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.renderer !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.RendererRequest"]);
    }
    return handles;
  };

  InterfaceFactory_CreateRenderer_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceFactory_CreateRenderer_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.renderer = handles[idx++];;
    return idx;
  };

  InterfaceFactory_CreateRenderer_Params.validate = function(messageValidator, offset) {
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


    // validate InterfaceFactory_CreateRenderer_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, HostedRendererType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InterfaceFactory_CreateRenderer_Params.typeSpecificId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InterfaceFactory_CreateRenderer_Params.renderer
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceFactory_CreateRenderer_Params.encodedSize = codec.kStructHeaderSize + 16;

  InterfaceFactory_CreateRenderer_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceFactory_CreateRenderer_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.renderer = decoder.decodeStruct(codec.InterfaceRequest);
    val.typeSpecificId = decoder.decodeStruct(codec.String);
    return val;
  };

  InterfaceFactory_CreateRenderer_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceFactory_CreateRenderer_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.InterfaceRequest, val.renderer);
    encoder.encodeStruct(codec.String, val.typeSpecificId);
  };
  function InterfaceFactory_CreateCdm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceFactory_CreateCdm_Params.prototype.initDefaults_ = function() {
    this.keySystem = null;
    this.cdm = new bindings.InterfaceRequest();
  };
  InterfaceFactory_CreateCdm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceFactory_CreateCdm_Params.generate = function(generator_) {
    var generated = new InterfaceFactory_CreateCdm_Params;
    generated.keySystem = generator_.generateString(false);
    generated.cdm = generator_.generateInterfaceRequest("media.mojom.ContentDecryptionModule", false);
    return generated;
  };

  InterfaceFactory_CreateCdm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keySystem = mutator_.mutateString(this.keySystem, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cdm = mutator_.mutateInterfaceRequest(this.cdm, "media.mojom.ContentDecryptionModule", false);
    }
    return this;
  };
  InterfaceFactory_CreateCdm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cdm !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.ContentDecryptionModuleRequest"]);
    }
    return handles;
  };

  InterfaceFactory_CreateCdm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceFactory_CreateCdm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cdm = handles[idx++];;
    return idx;
  };

  InterfaceFactory_CreateCdm_Params.validate = function(messageValidator, offset) {
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


    // validate InterfaceFactory_CreateCdm_Params.keySystem
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InterfaceFactory_CreateCdm_Params.cdm
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceFactory_CreateCdm_Params.encodedSize = codec.kStructHeaderSize + 16;

  InterfaceFactory_CreateCdm_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceFactory_CreateCdm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keySystem = decoder.decodeStruct(codec.String);
    val.cdm = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterfaceFactory_CreateCdm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceFactory_CreateCdm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.keySystem);
    encoder.encodeStruct(codec.InterfaceRequest, val.cdm);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InterfaceFactory_CreateDecryptor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceFactory_CreateDecryptor_Params.prototype.initDefaults_ = function() {
    this.cdmId = 0;
    this.decryptor = new bindings.InterfaceRequest();
  };
  InterfaceFactory_CreateDecryptor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceFactory_CreateDecryptor_Params.generate = function(generator_) {
    var generated = new InterfaceFactory_CreateDecryptor_Params;
    generated.cdmId = generator_.generateInt32();
    generated.decryptor = generator_.generateInterfaceRequest("media.mojom.Decryptor", false);
    return generated;
  };

  InterfaceFactory_CreateDecryptor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cdmId = mutator_.mutateInt32(this.cdmId);
    }
    if (mutator_.chooseMutateField()) {
      this.decryptor = mutator_.mutateInterfaceRequest(this.decryptor, "media.mojom.Decryptor", false);
    }
    return this;
  };
  InterfaceFactory_CreateDecryptor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.decryptor !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.DecryptorRequest"]);
    }
    return handles;
  };

  InterfaceFactory_CreateDecryptor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceFactory_CreateDecryptor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.decryptor = handles[idx++];;
    return idx;
  };

  InterfaceFactory_CreateDecryptor_Params.validate = function(messageValidator, offset) {
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



    // validate InterfaceFactory_CreateDecryptor_Params.decryptor
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceFactory_CreateDecryptor_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterfaceFactory_CreateDecryptor_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceFactory_CreateDecryptor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cdmId = decoder.decodeStruct(codec.Int32);
    val.decryptor = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  InterfaceFactory_CreateDecryptor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceFactory_CreateDecryptor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.cdmId);
    encoder.encodeStruct(codec.InterfaceRequest, val.decryptor);
  };
  function InterfaceFactory_CreateCdmProxy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterfaceFactory_CreateCdmProxy_Params.prototype.initDefaults_ = function() {
    this.cdmGuid = null;
    this.cdmProxy = new bindings.InterfaceRequest();
  };
  InterfaceFactory_CreateCdmProxy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterfaceFactory_CreateCdmProxy_Params.generate = function(generator_) {
    var generated = new InterfaceFactory_CreateCdmProxy_Params;
    generated.cdmGuid = generator_.generateString(false);
    generated.cdmProxy = generator_.generateInterfaceRequest("media.mojom.CdmProxy", false);
    return generated;
  };

  InterfaceFactory_CreateCdmProxy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cdmGuid = mutator_.mutateString(this.cdmGuid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cdmProxy = mutator_.mutateInterfaceRequest(this.cdmProxy, "media.mojom.CdmProxy", false);
    }
    return this;
  };
  InterfaceFactory_CreateCdmProxy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cdmProxy !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.CdmProxyRequest"]);
    }
    return handles;
  };

  InterfaceFactory_CreateCdmProxy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterfaceFactory_CreateCdmProxy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cdmProxy = handles[idx++];;
    return idx;
  };

  InterfaceFactory_CreateCdmProxy_Params.validate = function(messageValidator, offset) {
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


    // validate InterfaceFactory_CreateCdmProxy_Params.cdmGuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InterfaceFactory_CreateCdmProxy_Params.cdmProxy
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterfaceFactory_CreateCdmProxy_Params.encodedSize = codec.kStructHeaderSize + 16;

  InterfaceFactory_CreateCdmProxy_Params.decode = function(decoder) {
    var packed;
    var val = new InterfaceFactory_CreateCdmProxy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cdmGuid = decoder.decodeStruct(codec.String);
    val.cdmProxy = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterfaceFactory_CreateCdmProxy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterfaceFactory_CreateCdmProxy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.cdmGuid);
    encoder.encodeStruct(codec.InterfaceRequest, val.cdmProxy);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kInterfaceFactory_CreateAudioDecoder_Name = 1028411754;
  var kInterfaceFactory_CreateVideoDecoder_Name = 598348435;
  var kInterfaceFactory_CreateRenderer_Name = 1472627316;
  var kInterfaceFactory_CreateCdm_Name = 1735483564;
  var kInterfaceFactory_CreateDecryptor_Name = 506568624;
  var kInterfaceFactory_CreateCdmProxy_Name = 1876205816;

  function InterfaceFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InterfaceFactory,
                                                   handleOrPtrInfo);
  }

  function InterfaceFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InterfaceFactory, associatedInterfacePtrInfo);
  }

  InterfaceFactoryAssociatedPtr.prototype =
      Object.create(InterfaceFactoryPtr.prototype);
  InterfaceFactoryAssociatedPtr.prototype.constructor =
      InterfaceFactoryAssociatedPtr;

  function InterfaceFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  InterfaceFactoryPtr.prototype.createAudioDecoder = function() {
    return InterfaceFactoryProxy.prototype.createAudioDecoder
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceFactoryProxy.prototype.createAudioDecoder = function(audioDecoder) {
    var params_ = new InterfaceFactory_CreateAudioDecoder_Params();
    params_.audioDecoder = audioDecoder;
    var builder = new codec.MessageV0Builder(
        kInterfaceFactory_CreateAudioDecoder_Name,
        codec.align(InterfaceFactory_CreateAudioDecoder_Params.encodedSize));
    builder.encodeStruct(InterfaceFactory_CreateAudioDecoder_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterfaceFactoryPtr.prototype.createVideoDecoder = function() {
    return InterfaceFactoryProxy.prototype.createVideoDecoder
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceFactoryProxy.prototype.createVideoDecoder = function(videoDecoder) {
    var params_ = new InterfaceFactory_CreateVideoDecoder_Params();
    params_.videoDecoder = videoDecoder;
    var builder = new codec.MessageV0Builder(
        kInterfaceFactory_CreateVideoDecoder_Name,
        codec.align(InterfaceFactory_CreateVideoDecoder_Params.encodedSize));
    builder.encodeStruct(InterfaceFactory_CreateVideoDecoder_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterfaceFactoryPtr.prototype.createRenderer = function() {
    return InterfaceFactoryProxy.prototype.createRenderer
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceFactoryProxy.prototype.createRenderer = function(type, typeSpecificId, renderer) {
    var params_ = new InterfaceFactory_CreateRenderer_Params();
    params_.type = type;
    params_.typeSpecificId = typeSpecificId;
    params_.renderer = renderer;
    var builder = new codec.MessageV0Builder(
        kInterfaceFactory_CreateRenderer_Name,
        codec.align(InterfaceFactory_CreateRenderer_Params.encodedSize));
    builder.encodeStruct(InterfaceFactory_CreateRenderer_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterfaceFactoryPtr.prototype.createCdm = function() {
    return InterfaceFactoryProxy.prototype.createCdm
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceFactoryProxy.prototype.createCdm = function(keySystem, cdm) {
    var params_ = new InterfaceFactory_CreateCdm_Params();
    params_.keySystem = keySystem;
    params_.cdm = cdm;
    var builder = new codec.MessageV0Builder(
        kInterfaceFactory_CreateCdm_Name,
        codec.align(InterfaceFactory_CreateCdm_Params.encodedSize));
    builder.encodeStruct(InterfaceFactory_CreateCdm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterfaceFactoryPtr.prototype.createDecryptor = function() {
    return InterfaceFactoryProxy.prototype.createDecryptor
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceFactoryProxy.prototype.createDecryptor = function(cdmId, decryptor) {
    var params_ = new InterfaceFactory_CreateDecryptor_Params();
    params_.cdmId = cdmId;
    params_.decryptor = decryptor;
    var builder = new codec.MessageV0Builder(
        kInterfaceFactory_CreateDecryptor_Name,
        codec.align(InterfaceFactory_CreateDecryptor_Params.encodedSize));
    builder.encodeStruct(InterfaceFactory_CreateDecryptor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterfaceFactoryPtr.prototype.createCdmProxy = function() {
    return InterfaceFactoryProxy.prototype.createCdmProxy
        .apply(this.ptr.getProxy(), arguments);
  };

  InterfaceFactoryProxy.prototype.createCdmProxy = function(cdmGuid, cdmProxy) {
    var params_ = new InterfaceFactory_CreateCdmProxy_Params();
    params_.cdmGuid = cdmGuid;
    params_.cdmProxy = cdmProxy;
    var builder = new codec.MessageV0Builder(
        kInterfaceFactory_CreateCdmProxy_Name,
        codec.align(InterfaceFactory_CreateCdmProxy_Params.encodedSize));
    builder.encodeStruct(InterfaceFactory_CreateCdmProxy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InterfaceFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  InterfaceFactoryStub.prototype.createAudioDecoder = function(audioDecoder) {
    return this.delegate_ && this.delegate_.createAudioDecoder && this.delegate_.createAudioDecoder(audioDecoder);
  }
  InterfaceFactoryStub.prototype.createVideoDecoder = function(videoDecoder) {
    return this.delegate_ && this.delegate_.createVideoDecoder && this.delegate_.createVideoDecoder(videoDecoder);
  }
  InterfaceFactoryStub.prototype.createRenderer = function(type, typeSpecificId, renderer) {
    return this.delegate_ && this.delegate_.createRenderer && this.delegate_.createRenderer(type, typeSpecificId, renderer);
  }
  InterfaceFactoryStub.prototype.createCdm = function(keySystem, cdm) {
    return this.delegate_ && this.delegate_.createCdm && this.delegate_.createCdm(keySystem, cdm);
  }
  InterfaceFactoryStub.prototype.createDecryptor = function(cdmId, decryptor) {
    return this.delegate_ && this.delegate_.createDecryptor && this.delegate_.createDecryptor(cdmId, decryptor);
  }
  InterfaceFactoryStub.prototype.createCdmProxy = function(cdmGuid, cdmProxy) {
    return this.delegate_ && this.delegate_.createCdmProxy && this.delegate_.createCdmProxy(cdmGuid, cdmProxy);
  }

  InterfaceFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInterfaceFactory_CreateAudioDecoder_Name:
      var params = reader.decodeStruct(InterfaceFactory_CreateAudioDecoder_Params);
      this.createAudioDecoder(params.audioDecoder);
      return true;
    case kInterfaceFactory_CreateVideoDecoder_Name:
      var params = reader.decodeStruct(InterfaceFactory_CreateVideoDecoder_Params);
      this.createVideoDecoder(params.videoDecoder);
      return true;
    case kInterfaceFactory_CreateRenderer_Name:
      var params = reader.decodeStruct(InterfaceFactory_CreateRenderer_Params);
      this.createRenderer(params.type, params.typeSpecificId, params.renderer);
      return true;
    case kInterfaceFactory_CreateCdm_Name:
      var params = reader.decodeStruct(InterfaceFactory_CreateCdm_Params);
      this.createCdm(params.keySystem, params.cdm);
      return true;
    case kInterfaceFactory_CreateDecryptor_Name:
      var params = reader.decodeStruct(InterfaceFactory_CreateDecryptor_Params);
      this.createDecryptor(params.cdmId, params.decryptor);
      return true;
    case kInterfaceFactory_CreateCdmProxy_Name:
      var params = reader.decodeStruct(InterfaceFactory_CreateCdmProxy_Params);
      this.createCdmProxy(params.cdmGuid, params.cdmProxy);
      return true;
    default:
      return false;
    }
  };

  InterfaceFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInterfaceFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInterfaceFactory_CreateAudioDecoder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceFactory_CreateAudioDecoder_Params;
      break;
      case kInterfaceFactory_CreateVideoDecoder_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceFactory_CreateVideoDecoder_Params;
      break;
      case kInterfaceFactory_CreateRenderer_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceFactory_CreateRenderer_Params;
      break;
      case kInterfaceFactory_CreateCdm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceFactory_CreateCdm_Params;
      break;
      case kInterfaceFactory_CreateDecryptor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceFactory_CreateDecryptor_Params;
      break;
      case kInterfaceFactory_CreateCdmProxy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterfaceFactory_CreateCdmProxy_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInterfaceFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InterfaceFactory = {
    name: 'media.mojom.InterfaceFactory',
    kVersion: 0,
    ptrClass: InterfaceFactoryPtr,
    proxyClass: InterfaceFactoryProxy,
    stubClass: InterfaceFactoryStub,
    validateRequest: validateInterfaceFactoryRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/interface_factory.mojom',
    fuzzMethods: {
      createAudioDecoder: {
        params: InterfaceFactory_CreateAudioDecoder_Params,
      },
      createVideoDecoder: {
        params: InterfaceFactory_CreateVideoDecoder_Params,
      },
      createRenderer: {
        params: InterfaceFactory_CreateRenderer_Params,
      },
      createCdm: {
        params: InterfaceFactory_CreateCdm_Params,
      },
      createDecryptor: {
        params: InterfaceFactory_CreateDecryptor_Params,
      },
      createCdmProxy: {
        params: InterfaceFactory_CreateCdmProxy_Params,
      },
    },
  };
  InterfaceFactoryStub.prototype.validator = validateInterfaceFactoryRequest;
  InterfaceFactoryProxy.prototype.validator = null;
  exports.HostedRendererType = HostedRendererType;
  exports.InterfaceFactory = InterfaceFactory;
  exports.InterfaceFactoryPtr = InterfaceFactoryPtr;
  exports.InterfaceFactoryAssociatedPtr = InterfaceFactoryAssociatedPtr;
})();