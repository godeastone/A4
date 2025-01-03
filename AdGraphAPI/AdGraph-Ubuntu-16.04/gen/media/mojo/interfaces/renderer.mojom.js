// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/renderer.mojom';
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
  var demuxer_stream$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/demuxer_stream.mojom', 'demuxer_stream.mojom.js');
  }
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
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function Renderer_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Initialize_Params.prototype.initDefaults_ = function() {
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
    this.streams = null;
    this.mediaUrl = null;
    this.firstPartyForCookies = null;
  };
  Renderer_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_Initialize_Params.generate = function(generator_) {
    var generated = new Renderer_Initialize_Params;
    generated.client = generator_.generateAssociatedInterface("media.mojom.RendererClient", false);
    generated.streams = generator_.generateArray(function() {
      return generator_.generateInterface("media.mojom.DemuxerStream", false);
    });
    generated.mediaUrl = generator_.generateStruct(url.mojom.Url, true);
    generated.firstPartyForCookies = generator_.generateStruct(url.mojom.Url, true);
    return generated;
  };

  Renderer_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "media.mojom.RendererClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.streams = mutator_.mutateArray(this.streams, function(val) {
        return mutator_.mutateInterface(val, "media.mojom.DemuxerStream", false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.mediaUrl = mutator_.mutateStruct(url.mojom.Url, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstPartyForCookies = mutator_.mutateStruct(url.mojom.Url, true);
    }
    return this;
  };
  Renderer_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.RendererClientAssociatedPtr"]);
    }
    if (this.streams !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.streams.map(function(val) {
        if (val) {
          return ["media.mojom.DemuxerStreamPtr"];
        }
        return [];
      })));
    }
    return handles;
  };

  Renderer_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    this.streams.forEach(function(val) {
      val = handles[idx++];;
    });
    return idx;
  };

  Renderer_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_Initialize_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_Initialize_Params.streams
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.Interface(demuxer_stream$.DemuxerStreamPtr), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_Initialize_Params.mediaUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_Initialize_Params.firstPartyForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_Initialize_Params.encodedSize = codec.kStructHeaderSize + 32;

  Renderer_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.streams = decoder.decodeArrayPointer(new codec.Interface(demuxer_stream$.DemuxerStreamPtr));
    val.mediaUrl = decoder.decodeStructPointer(url$.Url);
    val.firstPartyForCookies = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  Renderer_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
    encoder.encodeArrayPointer(new codec.Interface(demuxer_stream$.DemuxerStreamPtr), val.streams);
    encoder.encodeStructPointer(url$.Url, val.mediaUrl);
    encoder.encodeStructPointer(url$.Url, val.firstPartyForCookies);
  };
  function Renderer_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Renderer_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new Renderer_Initialize_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Renderer_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Renderer_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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

  Renderer_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_Initialize_ResponseParams();
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

  Renderer_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Initialize_ResponseParams.encodedSize);
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
  function Renderer_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Flush_Params.prototype.initDefaults_ = function() {
  };
  Renderer_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_Flush_Params.generate = function(generator_) {
    var generated = new Renderer_Flush_Params;
    return generated;
  };

  Renderer_Flush_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Renderer_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_Flush_Params.validate = function(messageValidator, offset) {
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

  Renderer_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  Renderer_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Renderer_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Renderer_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_Flush_ResponseParams.prototype.initDefaults_ = function() {
  };
  Renderer_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_Flush_ResponseParams.generate = function(generator_) {
    var generated = new Renderer_Flush_ResponseParams;
    return generated;
  };

  Renderer_Flush_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  Renderer_Flush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_Flush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_Flush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_Flush_ResponseParams.validate = function(messageValidator, offset) {
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

  Renderer_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Renderer_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Renderer_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function Renderer_StartPlayingFrom_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_StartPlayingFrom_Params.prototype.initDefaults_ = function() {
    this.time = null;
  };
  Renderer_StartPlayingFrom_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_StartPlayingFrom_Params.generate = function(generator_) {
    var generated = new Renderer_StartPlayingFrom_Params;
    generated.time = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  Renderer_StartPlayingFrom_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  Renderer_StartPlayingFrom_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_StartPlayingFrom_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_StartPlayingFrom_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_StartPlayingFrom_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_StartPlayingFrom_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_StartPlayingFrom_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_StartPlayingFrom_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_StartPlayingFrom_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  Renderer_StartPlayingFrom_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_StartPlayingFrom_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.time);
  };
  function Renderer_SetPlaybackRate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetPlaybackRate_Params.prototype.initDefaults_ = function() {
    this.playbackRate = 0;
  };
  Renderer_SetPlaybackRate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetPlaybackRate_Params.generate = function(generator_) {
    var generated = new Renderer_SetPlaybackRate_Params;
    generated.playbackRate = generator_.generateDouble();
    return generated;
  };

  Renderer_SetPlaybackRate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.playbackRate = mutator_.mutateDouble(this.playbackRate);
    }
    return this;
  };
  Renderer_SetPlaybackRate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetPlaybackRate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetPlaybackRate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetPlaybackRate_Params.validate = function(messageValidator, offset) {
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

  Renderer_SetPlaybackRate_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetPlaybackRate_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetPlaybackRate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.playbackRate = decoder.decodeStruct(codec.Double);
    return val;
  };

  Renderer_SetPlaybackRate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetPlaybackRate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.playbackRate);
  };
  function Renderer_SetVolume_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetVolume_Params.prototype.initDefaults_ = function() {
    this.volume = 0;
  };
  Renderer_SetVolume_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetVolume_Params.generate = function(generator_) {
    var generated = new Renderer_SetVolume_Params;
    generated.volume = generator_.generateFloat();
    return generated;
  };

  Renderer_SetVolume_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.volume = mutator_.mutateFloat(this.volume);
    }
    return this;
  };
  Renderer_SetVolume_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetVolume_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetVolume_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetVolume_Params.validate = function(messageValidator, offset) {
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

  Renderer_SetVolume_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetVolume_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetVolume_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.volume = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetVolume_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetVolume_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.volume);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetCdm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetCdm_Params.prototype.initDefaults_ = function() {
    this.cdmId = 0;
  };
  Renderer_SetCdm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetCdm_Params.generate = function(generator_) {
    var generated = new Renderer_SetCdm_Params;
    generated.cdmId = generator_.generateInt32();
    return generated;
  };

  Renderer_SetCdm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cdmId = mutator_.mutateInt32(this.cdmId);
    }
    return this;
  };
  Renderer_SetCdm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetCdm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetCdm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetCdm_Params.validate = function(messageValidator, offset) {
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

  Renderer_SetCdm_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetCdm_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetCdm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cdmId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetCdm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetCdm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.cdmId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetCdm_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetCdm_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Renderer_SetCdm_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetCdm_ResponseParams.generate = function(generator_) {
    var generated = new Renderer_SetCdm_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Renderer_SetCdm_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Renderer_SetCdm_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetCdm_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetCdm_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetCdm_ResponseParams.validate = function(messageValidator, offset) {
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

  Renderer_SetCdm_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetCdm_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetCdm_ResponseParams();
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

  Renderer_SetCdm_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetCdm_ResponseParams.encodedSize);
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
  function Renderer_InitiateScopedSurfaceRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_InitiateScopedSurfaceRequest_Params.prototype.initDefaults_ = function() {
  };
  Renderer_InitiateScopedSurfaceRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_InitiateScopedSurfaceRequest_Params.generate = function(generator_) {
    var generated = new Renderer_InitiateScopedSurfaceRequest_Params;
    return generated;
  };

  Renderer_InitiateScopedSurfaceRequest_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Renderer_InitiateScopedSurfaceRequest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_InitiateScopedSurfaceRequest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_InitiateScopedSurfaceRequest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_InitiateScopedSurfaceRequest_Params.validate = function(messageValidator, offset) {
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

  Renderer_InitiateScopedSurfaceRequest_Params.encodedSize = codec.kStructHeaderSize + 0;

  Renderer_InitiateScopedSurfaceRequest_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_InitiateScopedSurfaceRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Renderer_InitiateScopedSurfaceRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_InitiateScopedSurfaceRequest_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Renderer_InitiateScopedSurfaceRequest_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_InitiateScopedSurfaceRequest_ResponseParams.prototype.initDefaults_ = function() {
    this.requestToken = null;
  };
  Renderer_InitiateScopedSurfaceRequest_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_InitiateScopedSurfaceRequest_ResponseParams.generate = function(generator_) {
    var generated = new Renderer_InitiateScopedSurfaceRequest_ResponseParams;
    generated.requestToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  Renderer_InitiateScopedSurfaceRequest_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  Renderer_InitiateScopedSurfaceRequest_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_InitiateScopedSurfaceRequest_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_InitiateScopedSurfaceRequest_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_InitiateScopedSurfaceRequest_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Renderer_InitiateScopedSurfaceRequest_ResponseParams.requestToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_InitiateScopedSurfaceRequest_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_InitiateScopedSurfaceRequest_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Renderer_InitiateScopedSurfaceRequest_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  Renderer_InitiateScopedSurfaceRequest_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_InitiateScopedSurfaceRequest_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.requestToken);
  };
  function RendererClient_OnTimeUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnTimeUpdate_Params.prototype.initDefaults_ = function() {
    this.time = null;
    this.maxTime = null;
    this.captureTime = null;
  };
  RendererClient_OnTimeUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnTimeUpdate_Params.generate = function(generator_) {
    var generated = new RendererClient_OnTimeUpdate_Params;
    generated.time = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.maxTime = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.captureTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  RendererClient_OnTimeUpdate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxTime = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.captureTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  RendererClient_OnTimeUpdate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnTimeUpdate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnTimeUpdate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnTimeUpdate_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnTimeUpdate_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererClient_OnTimeUpdate_Params.maxTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererClient_OnTimeUpdate_Params.captureTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnTimeUpdate_Params.encodedSize = codec.kStructHeaderSize + 24;

  RendererClient_OnTimeUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnTimeUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(time$.TimeDelta);
    val.maxTime = decoder.decodeStructPointer(time$.TimeDelta);
    val.captureTime = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  RendererClient_OnTimeUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnTimeUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.time);
    encoder.encodeStructPointer(time$.TimeDelta, val.maxTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.captureTime);
  };
  function RendererClient_OnBufferingStateChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnBufferingStateChange_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  RendererClient_OnBufferingStateChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnBufferingStateChange_Params.generate = function(generator_) {
    var generated = new RendererClient_OnBufferingStateChange_Params;
    generated.state = generator_.generateEnum();
    return generated;
  };

  RendererClient_OnBufferingStateChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state);
    }
    return this;
  };
  RendererClient_OnBufferingStateChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnBufferingStateChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnBufferingStateChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnBufferingStateChange_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnBufferingStateChange_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.BufferingState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnBufferingStateChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnBufferingStateChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnBufferingStateChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererClient_OnBufferingStateChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnBufferingStateChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererClient_OnEnded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnEnded_Params.prototype.initDefaults_ = function() {
  };
  RendererClient_OnEnded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnEnded_Params.generate = function(generator_) {
    var generated = new RendererClient_OnEnded_Params;
    return generated;
  };

  RendererClient_OnEnded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RendererClient_OnEnded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnEnded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnEnded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnEnded_Params.validate = function(messageValidator, offset) {
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

  RendererClient_OnEnded_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererClient_OnEnded_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnEnded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererClient_OnEnded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnEnded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnError_Params.prototype.initDefaults_ = function() {
  };
  RendererClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnError_Params.generate = function(generator_) {
    var generated = new RendererClient_OnError_Params;
    return generated;
  };

  RendererClient_OnError_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RendererClient_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnError_Params.validate = function(messageValidator, offset) {
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

  RendererClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererClient_OnAudioConfigChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnAudioConfigChange_Params.prototype.initDefaults_ = function() {
    this.config = null;
  };
  RendererClient_OnAudioConfigChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnAudioConfigChange_Params.generate = function(generator_) {
    var generated = new RendererClient_OnAudioConfigChange_Params;
    generated.config = generator_.generateStruct(media.mojom.AudioDecoderConfig, false);
    return generated;
  };

  RendererClient_OnAudioConfigChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateStruct(media.mojom.AudioDecoderConfig, false);
    }
    return this;
  };
  RendererClient_OnAudioConfigChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnAudioConfigChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnAudioConfigChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnAudioConfigChange_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnAudioConfigChange_Params.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.AudioDecoderConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnAudioConfigChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnAudioConfigChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnAudioConfigChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStructPointer(media_types$.AudioDecoderConfig);
    return val;
  };

  RendererClient_OnAudioConfigChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnAudioConfigChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.AudioDecoderConfig, val.config);
  };
  function RendererClient_OnVideoConfigChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnVideoConfigChange_Params.prototype.initDefaults_ = function() {
    this.config = null;
  };
  RendererClient_OnVideoConfigChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnVideoConfigChange_Params.generate = function(generator_) {
    var generated = new RendererClient_OnVideoConfigChange_Params;
    generated.config = generator_.generateStruct(media.mojom.VideoDecoderConfig, false);
    return generated;
  };

  RendererClient_OnVideoConfigChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateStruct(media.mojom.VideoDecoderConfig, false);
    }
    return this;
  };
  RendererClient_OnVideoConfigChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnVideoConfigChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnVideoConfigChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnVideoConfigChange_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnVideoConfigChange_Params.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.VideoDecoderConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnVideoConfigChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnVideoConfigChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnVideoConfigChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.config = decoder.decodeStructPointer(media_types$.VideoDecoderConfig);
    return val;
  };

  RendererClient_OnVideoConfigChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnVideoConfigChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.VideoDecoderConfig, val.config);
  };
  function RendererClient_OnVideoNaturalSizeChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnVideoNaturalSizeChange_Params.prototype.initDefaults_ = function() {
    this.size = null;
  };
  RendererClient_OnVideoNaturalSizeChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnVideoNaturalSizeChange_Params.generate = function(generator_) {
    var generated = new RendererClient_OnVideoNaturalSizeChange_Params;
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  RendererClient_OnVideoNaturalSizeChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnVideoNaturalSizeChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnVideoNaturalSizeChange_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnVideoNaturalSizeChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnVideoNaturalSizeChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  RendererClient_OnVideoNaturalSizeChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnVideoNaturalSizeChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.size);
  };
  function RendererClient_OnVideoOpacityChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnVideoOpacityChange_Params.prototype.initDefaults_ = function() {
    this.opaque = false;
  };
  RendererClient_OnVideoOpacityChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnVideoOpacityChange_Params.generate = function(generator_) {
    var generated = new RendererClient_OnVideoOpacityChange_Params;
    generated.opaque = generator_.generateBool();
    return generated;
  };

  RendererClient_OnVideoOpacityChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.opaque = mutator_.mutateBool(this.opaque);
    }
    return this;
  };
  RendererClient_OnVideoOpacityChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnVideoOpacityChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnVideoOpacityChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnVideoOpacityChange_Params.validate = function(messageValidator, offset) {
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

  RendererClient_OnVideoOpacityChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnVideoOpacityChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnVideoOpacityChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.opaque = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererClient_OnVideoOpacityChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnVideoOpacityChange_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.opaque & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererClient_OnStatisticsUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnStatisticsUpdate_Params.prototype.initDefaults_ = function() {
    this.stats = null;
  };
  RendererClient_OnStatisticsUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnStatisticsUpdate_Params.generate = function(generator_) {
    var generated = new RendererClient_OnStatisticsUpdate_Params;
    generated.stats = generator_.generateStruct(media.mojom.PipelineStatistics, false);
    return generated;
  };

  RendererClient_OnStatisticsUpdate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stats = mutator_.mutateStruct(media.mojom.PipelineStatistics, false);
    }
    return this;
  };
  RendererClient_OnStatisticsUpdate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnStatisticsUpdate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnStatisticsUpdate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnStatisticsUpdate_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnStatisticsUpdate_Params.stats
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.PipelineStatistics, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnStatisticsUpdate_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnStatisticsUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnStatisticsUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stats = decoder.decodeStructPointer(media_types$.PipelineStatistics);
    return val;
  };

  RendererClient_OnStatisticsUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnStatisticsUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.PipelineStatistics, val.stats);
  };
  function RendererClient_OnWaitingForDecryptionKey_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnWaitingForDecryptionKey_Params.prototype.initDefaults_ = function() {
  };
  RendererClient_OnWaitingForDecryptionKey_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnWaitingForDecryptionKey_Params.generate = function(generator_) {
    var generated = new RendererClient_OnWaitingForDecryptionKey_Params;
    return generated;
  };

  RendererClient_OnWaitingForDecryptionKey_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RendererClient_OnWaitingForDecryptionKey_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnWaitingForDecryptionKey_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnWaitingForDecryptionKey_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnWaitingForDecryptionKey_Params.validate = function(messageValidator, offset) {
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

  RendererClient_OnWaitingForDecryptionKey_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererClient_OnWaitingForDecryptionKey_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnWaitingForDecryptionKey_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererClient_OnWaitingForDecryptionKey_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnWaitingForDecryptionKey_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererClient_OnDurationChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererClient_OnDurationChange_Params.prototype.initDefaults_ = function() {
    this.duration = null;
  };
  RendererClient_OnDurationChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererClient_OnDurationChange_Params.generate = function(generator_) {
    var generated = new RendererClient_OnDurationChange_Params;
    generated.duration = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  RendererClient_OnDurationChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.duration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  RendererClient_OnDurationChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererClient_OnDurationChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererClient_OnDurationChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererClient_OnDurationChange_Params.validate = function(messageValidator, offset) {
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


    // validate RendererClient_OnDurationChange_Params.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererClient_OnDurationChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererClient_OnDurationChange_Params.decode = function(decoder) {
    var packed;
    var val = new RendererClient_OnDurationChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.duration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  RendererClient_OnDurationChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererClient_OnDurationChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.duration);
  };
  var kRenderer_Initialize_Name = 296950658;
  var kRenderer_Flush_Name = 1962837039;
  var kRenderer_StartPlayingFrom_Name = 101082141;
  var kRenderer_SetPlaybackRate_Name = 985547464;
  var kRenderer_SetVolume_Name = 174756234;
  var kRenderer_SetCdm_Name = 987545218;
  var kRenderer_InitiateScopedSurfaceRequest_Name = 572050759;

  function RendererPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Renderer,
                                                   handleOrPtrInfo);
  }

  function RendererAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Renderer, associatedInterfacePtrInfo);
  }

  RendererAssociatedPtr.prototype =
      Object.create(RendererPtr.prototype);
  RendererAssociatedPtr.prototype.constructor =
      RendererAssociatedPtr;

  function RendererProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererPtr.prototype.initialize = function() {
    return RendererProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.initialize = function(client, streams, mediaUrl, firstPartyForCookies) {
    var params_ = new Renderer_Initialize_Params();
    params_.client = client;
    params_.streams = streams;
    params_.mediaUrl = mediaUrl;
    params_.firstPartyForCookies = firstPartyForCookies;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kRenderer_Initialize_Name,
          codec.align(Renderer_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(Renderer_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RendererPtr.prototype.flush = function() {
    return RendererProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.flush = function() {
    var params_ = new Renderer_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderer_Flush_Name,
          codec.align(Renderer_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Renderer_Flush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RendererPtr.prototype.startPlayingFrom = function() {
    return RendererProxy.prototype.startPlayingFrom
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.startPlayingFrom = function(time) {
    var params_ = new Renderer_StartPlayingFrom_Params();
    params_.time = time;
    var builder = new codec.MessageV0Builder(
        kRenderer_StartPlayingFrom_Name,
        codec.align(Renderer_StartPlayingFrom_Params.encodedSize));
    builder.encodeStruct(Renderer_StartPlayingFrom_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setPlaybackRate = function() {
    return RendererProxy.prototype.setPlaybackRate
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setPlaybackRate = function(playbackRate) {
    var params_ = new Renderer_SetPlaybackRate_Params();
    params_.playbackRate = playbackRate;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetPlaybackRate_Name,
        codec.align(Renderer_SetPlaybackRate_Params.encodedSize));
    builder.encodeStruct(Renderer_SetPlaybackRate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setVolume = function() {
    return RendererProxy.prototype.setVolume
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setVolume = function(volume) {
    var params_ = new Renderer_SetVolume_Params();
    params_.volume = volume;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetVolume_Name,
        codec.align(Renderer_SetVolume_Params.encodedSize));
    builder.encodeStruct(Renderer_SetVolume_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setCdm = function() {
    return RendererProxy.prototype.setCdm
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setCdm = function(cdmId) {
    var params_ = new Renderer_SetCdm_Params();
    params_.cdmId = cdmId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderer_SetCdm_Name,
          codec.align(Renderer_SetCdm_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Renderer_SetCdm_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_SetCdm_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RendererPtr.prototype.initiateScopedSurfaceRequest = function() {
    return RendererProxy.prototype.initiateScopedSurfaceRequest
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.initiateScopedSurfaceRequest = function() {
    var params_ = new Renderer_InitiateScopedSurfaceRequest_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderer_InitiateScopedSurfaceRequest_Name,
          codec.align(Renderer_InitiateScopedSurfaceRequest_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Renderer_InitiateScopedSurfaceRequest_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Renderer_InitiateScopedSurfaceRequest_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function RendererStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererStub.prototype.initialize = function(client, streams, mediaUrl, firstPartyForCookies) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(client, streams, mediaUrl, firstPartyForCookies);
  }
  RendererStub.prototype.flush = function() {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush();
  }
  RendererStub.prototype.startPlayingFrom = function(time) {
    return this.delegate_ && this.delegate_.startPlayingFrom && this.delegate_.startPlayingFrom(time);
  }
  RendererStub.prototype.setPlaybackRate = function(playbackRate) {
    return this.delegate_ && this.delegate_.setPlaybackRate && this.delegate_.setPlaybackRate(playbackRate);
  }
  RendererStub.prototype.setVolume = function(volume) {
    return this.delegate_ && this.delegate_.setVolume && this.delegate_.setVolume(volume);
  }
  RendererStub.prototype.setCdm = function(cdmId) {
    return this.delegate_ && this.delegate_.setCdm && this.delegate_.setCdm(cdmId);
  }
  RendererStub.prototype.initiateScopedSurfaceRequest = function() {
    return this.delegate_ && this.delegate_.initiateScopedSurfaceRequest && this.delegate_.initiateScopedSurfaceRequest();
  }

  RendererStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderer_StartPlayingFrom_Name:
      var params = reader.decodeStruct(Renderer_StartPlayingFrom_Params);
      this.startPlayingFrom(params.time);
      return true;
    case kRenderer_SetPlaybackRate_Name:
      var params = reader.decodeStruct(Renderer_SetPlaybackRate_Params);
      this.setPlaybackRate(params.playbackRate);
      return true;
    case kRenderer_SetVolume_Name:
      var params = reader.decodeStruct(Renderer_SetVolume_Params);
      this.setVolume(params.volume);
      return true;
    default:
      return false;
    }
  };

  RendererStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderer_Initialize_Name:
      var params = reader.decodeStruct(Renderer_Initialize_Params);
      this.initialize(params.client, params.streams, params.mediaUrl, params.firstPartyForCookies).then(function(response) {
        var responseParams =
            new Renderer_Initialize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV2Builder(
            kRenderer_Initialize_Name,
            codec.align(Renderer_Initialize_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(Renderer_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderer_Flush_Name:
      var params = reader.decodeStruct(Renderer_Flush_Params);
      this.flush().then(function(response) {
        var responseParams =
            new Renderer_Flush_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kRenderer_Flush_Name,
            codec.align(Renderer_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Renderer_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderer_SetCdm_Name:
      var params = reader.decodeStruct(Renderer_SetCdm_Params);
      this.setCdm(params.cdmId).then(function(response) {
        var responseParams =
            new Renderer_SetCdm_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kRenderer_SetCdm_Name,
            codec.align(Renderer_SetCdm_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Renderer_SetCdm_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderer_InitiateScopedSurfaceRequest_Name:
      var params = reader.decodeStruct(Renderer_InitiateScopedSurfaceRequest_Params);
      this.initiateScopedSurfaceRequest().then(function(response) {
        var responseParams =
            new Renderer_InitiateScopedSurfaceRequest_ResponseParams();
        responseParams.requestToken = response.requestToken;
        var builder = new codec.MessageV1Builder(
            kRenderer_InitiateScopedSurfaceRequest_Name,
            codec.align(Renderer_InitiateScopedSurfaceRequest_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Renderer_InitiateScopedSurfaceRequest_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRendererRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderer_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_Initialize_Params;
      break;
      case kRenderer_Flush_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_Flush_Params;
      break;
      case kRenderer_StartPlayingFrom_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_StartPlayingFrom_Params;
      break;
      case kRenderer_SetPlaybackRate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetPlaybackRate_Params;
      break;
      case kRenderer_SetVolume_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetVolume_Params;
      break;
      case kRenderer_SetCdm_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_SetCdm_Params;
      break;
      case kRenderer_InitiateScopedSurfaceRequest_Name:
        if (message.expectsResponse())
          paramsClass = Renderer_InitiateScopedSurfaceRequest_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRenderer_Initialize_Name:
        if (message.isResponse())
          paramsClass = Renderer_Initialize_ResponseParams;
        break;
      case kRenderer_Flush_Name:
        if (message.isResponse())
          paramsClass = Renderer_Flush_ResponseParams;
        break;
      case kRenderer_SetCdm_Name:
        if (message.isResponse())
          paramsClass = Renderer_SetCdm_ResponseParams;
        break;
      case kRenderer_InitiateScopedSurfaceRequest_Name:
        if (message.isResponse())
          paramsClass = Renderer_InitiateScopedSurfaceRequest_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Renderer = {
    name: 'media.mojom.Renderer',
    kVersion: 0,
    ptrClass: RendererPtr,
    proxyClass: RendererProxy,
    stubClass: RendererStub,
    validateRequest: validateRendererRequest,
    validateResponse: validateRendererResponse,
    mojomId: 'media/mojo/interfaces/renderer.mojom',
    fuzzMethods: {
      initialize: {
        params: Renderer_Initialize_Params,
      },
      flush: {
        params: Renderer_Flush_Params,
      },
      startPlayingFrom: {
        params: Renderer_StartPlayingFrom_Params,
      },
      setPlaybackRate: {
        params: Renderer_SetPlaybackRate_Params,
      },
      setVolume: {
        params: Renderer_SetVolume_Params,
      },
      setCdm: {
        params: Renderer_SetCdm_Params,
      },
      initiateScopedSurfaceRequest: {
        params: Renderer_InitiateScopedSurfaceRequest_Params,
      },
    },
  };
  RendererStub.prototype.validator = validateRendererRequest;
  RendererProxy.prototype.validator = validateRendererResponse;
  var kRendererClient_OnTimeUpdate_Name = 1484955645;
  var kRendererClient_OnBufferingStateChange_Name = 413926226;
  var kRendererClient_OnEnded_Name = 96463507;
  var kRendererClient_OnError_Name = 1069495139;
  var kRendererClient_OnAudioConfigChange_Name = 890155742;
  var kRendererClient_OnVideoConfigChange_Name = 969957719;
  var kRendererClient_OnVideoNaturalSizeChange_Name = 2052726994;
  var kRendererClient_OnVideoOpacityChange_Name = 1275365027;
  var kRendererClient_OnStatisticsUpdate_Name = 1159474325;
  var kRendererClient_OnWaitingForDecryptionKey_Name = 394327158;
  var kRendererClient_OnDurationChange_Name = 1325767083;

  function RendererClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RendererClient,
                                                   handleOrPtrInfo);
  }

  function RendererClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RendererClient, associatedInterfacePtrInfo);
  }

  RendererClientAssociatedPtr.prototype =
      Object.create(RendererClientPtr.prototype);
  RendererClientAssociatedPtr.prototype.constructor =
      RendererClientAssociatedPtr;

  function RendererClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererClientPtr.prototype.onTimeUpdate = function() {
    return RendererClientProxy.prototype.onTimeUpdate
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onTimeUpdate = function(time, maxTime, captureTime) {
    var params_ = new RendererClient_OnTimeUpdate_Params();
    params_.time = time;
    params_.maxTime = maxTime;
    params_.captureTime = captureTime;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnTimeUpdate_Name,
        codec.align(RendererClient_OnTimeUpdate_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnTimeUpdate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onBufferingStateChange = function() {
    return RendererClientProxy.prototype.onBufferingStateChange
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onBufferingStateChange = function(state) {
    var params_ = new RendererClient_OnBufferingStateChange_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnBufferingStateChange_Name,
        codec.align(RendererClient_OnBufferingStateChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnBufferingStateChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onEnded = function() {
    return RendererClientProxy.prototype.onEnded
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onEnded = function() {
    var params_ = new RendererClient_OnEnded_Params();
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnEnded_Name,
        codec.align(RendererClient_OnEnded_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnEnded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onError = function() {
    return RendererClientProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onError = function() {
    var params_ = new RendererClient_OnError_Params();
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnError_Name,
        codec.align(RendererClient_OnError_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onAudioConfigChange = function() {
    return RendererClientProxy.prototype.onAudioConfigChange
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onAudioConfigChange = function(config) {
    var params_ = new RendererClient_OnAudioConfigChange_Params();
    params_.config = config;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnAudioConfigChange_Name,
        codec.align(RendererClient_OnAudioConfigChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnAudioConfigChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onVideoConfigChange = function() {
    return RendererClientProxy.prototype.onVideoConfigChange
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onVideoConfigChange = function(config) {
    var params_ = new RendererClient_OnVideoConfigChange_Params();
    params_.config = config;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnVideoConfigChange_Name,
        codec.align(RendererClient_OnVideoConfigChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnVideoConfigChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onVideoNaturalSizeChange = function() {
    return RendererClientProxy.prototype.onVideoNaturalSizeChange
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onVideoNaturalSizeChange = function(size) {
    var params_ = new RendererClient_OnVideoNaturalSizeChange_Params();
    params_.size = size;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnVideoNaturalSizeChange_Name,
        codec.align(RendererClient_OnVideoNaturalSizeChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnVideoNaturalSizeChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onVideoOpacityChange = function() {
    return RendererClientProxy.prototype.onVideoOpacityChange
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onVideoOpacityChange = function(opaque) {
    var params_ = new RendererClient_OnVideoOpacityChange_Params();
    params_.opaque = opaque;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnVideoOpacityChange_Name,
        codec.align(RendererClient_OnVideoOpacityChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnVideoOpacityChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onStatisticsUpdate = function() {
    return RendererClientProxy.prototype.onStatisticsUpdate
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onStatisticsUpdate = function(stats) {
    var params_ = new RendererClient_OnStatisticsUpdate_Params();
    params_.stats = stats;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnStatisticsUpdate_Name,
        codec.align(RendererClient_OnStatisticsUpdate_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnStatisticsUpdate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onWaitingForDecryptionKey = function() {
    return RendererClientProxy.prototype.onWaitingForDecryptionKey
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onWaitingForDecryptionKey = function() {
    var params_ = new RendererClient_OnWaitingForDecryptionKey_Params();
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnWaitingForDecryptionKey_Name,
        codec.align(RendererClient_OnWaitingForDecryptionKey_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnWaitingForDecryptionKey_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererClientPtr.prototype.onDurationChange = function() {
    return RendererClientProxy.prototype.onDurationChange
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererClientProxy.prototype.onDurationChange = function(duration) {
    var params_ = new RendererClient_OnDurationChange_Params();
    params_.duration = duration;
    var builder = new codec.MessageV0Builder(
        kRendererClient_OnDurationChange_Name,
        codec.align(RendererClient_OnDurationChange_Params.encodedSize));
    builder.encodeStruct(RendererClient_OnDurationChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererClientStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererClientStub.prototype.onTimeUpdate = function(time, maxTime, captureTime) {
    return this.delegate_ && this.delegate_.onTimeUpdate && this.delegate_.onTimeUpdate(time, maxTime, captureTime);
  }
  RendererClientStub.prototype.onBufferingStateChange = function(state) {
    return this.delegate_ && this.delegate_.onBufferingStateChange && this.delegate_.onBufferingStateChange(state);
  }
  RendererClientStub.prototype.onEnded = function() {
    return this.delegate_ && this.delegate_.onEnded && this.delegate_.onEnded();
  }
  RendererClientStub.prototype.onError = function() {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError();
  }
  RendererClientStub.prototype.onAudioConfigChange = function(config) {
    return this.delegate_ && this.delegate_.onAudioConfigChange && this.delegate_.onAudioConfigChange(config);
  }
  RendererClientStub.prototype.onVideoConfigChange = function(config) {
    return this.delegate_ && this.delegate_.onVideoConfigChange && this.delegate_.onVideoConfigChange(config);
  }
  RendererClientStub.prototype.onVideoNaturalSizeChange = function(size) {
    return this.delegate_ && this.delegate_.onVideoNaturalSizeChange && this.delegate_.onVideoNaturalSizeChange(size);
  }
  RendererClientStub.prototype.onVideoOpacityChange = function(opaque) {
    return this.delegate_ && this.delegate_.onVideoOpacityChange && this.delegate_.onVideoOpacityChange(opaque);
  }
  RendererClientStub.prototype.onStatisticsUpdate = function(stats) {
    return this.delegate_ && this.delegate_.onStatisticsUpdate && this.delegate_.onStatisticsUpdate(stats);
  }
  RendererClientStub.prototype.onWaitingForDecryptionKey = function() {
    return this.delegate_ && this.delegate_.onWaitingForDecryptionKey && this.delegate_.onWaitingForDecryptionKey();
  }
  RendererClientStub.prototype.onDurationChange = function(duration) {
    return this.delegate_ && this.delegate_.onDurationChange && this.delegate_.onDurationChange(duration);
  }

  RendererClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererClient_OnTimeUpdate_Name:
      var params = reader.decodeStruct(RendererClient_OnTimeUpdate_Params);
      this.onTimeUpdate(params.time, params.maxTime, params.captureTime);
      return true;
    case kRendererClient_OnBufferingStateChange_Name:
      var params = reader.decodeStruct(RendererClient_OnBufferingStateChange_Params);
      this.onBufferingStateChange(params.state);
      return true;
    case kRendererClient_OnEnded_Name:
      var params = reader.decodeStruct(RendererClient_OnEnded_Params);
      this.onEnded();
      return true;
    case kRendererClient_OnError_Name:
      var params = reader.decodeStruct(RendererClient_OnError_Params);
      this.onError();
      return true;
    case kRendererClient_OnAudioConfigChange_Name:
      var params = reader.decodeStruct(RendererClient_OnAudioConfigChange_Params);
      this.onAudioConfigChange(params.config);
      return true;
    case kRendererClient_OnVideoConfigChange_Name:
      var params = reader.decodeStruct(RendererClient_OnVideoConfigChange_Params);
      this.onVideoConfigChange(params.config);
      return true;
    case kRendererClient_OnVideoNaturalSizeChange_Name:
      var params = reader.decodeStruct(RendererClient_OnVideoNaturalSizeChange_Params);
      this.onVideoNaturalSizeChange(params.size);
      return true;
    case kRendererClient_OnVideoOpacityChange_Name:
      var params = reader.decodeStruct(RendererClient_OnVideoOpacityChange_Params);
      this.onVideoOpacityChange(params.opaque);
      return true;
    case kRendererClient_OnStatisticsUpdate_Name:
      var params = reader.decodeStruct(RendererClient_OnStatisticsUpdate_Params);
      this.onStatisticsUpdate(params.stats);
      return true;
    case kRendererClient_OnWaitingForDecryptionKey_Name:
      var params = reader.decodeStruct(RendererClient_OnWaitingForDecryptionKey_Params);
      this.onWaitingForDecryptionKey();
      return true;
    case kRendererClient_OnDurationChange_Name:
      var params = reader.decodeStruct(RendererClient_OnDurationChange_Params);
      this.onDurationChange(params.duration);
      return true;
    default:
      return false;
    }
  };

  RendererClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRendererClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererClient_OnTimeUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnTimeUpdate_Params;
      break;
      case kRendererClient_OnBufferingStateChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnBufferingStateChange_Params;
      break;
      case kRendererClient_OnEnded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnEnded_Params;
      break;
      case kRendererClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnError_Params;
      break;
      case kRendererClient_OnAudioConfigChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnAudioConfigChange_Params;
      break;
      case kRendererClient_OnVideoConfigChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnVideoConfigChange_Params;
      break;
      case kRendererClient_OnVideoNaturalSizeChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnVideoNaturalSizeChange_Params;
      break;
      case kRendererClient_OnVideoOpacityChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnVideoOpacityChange_Params;
      break;
      case kRendererClient_OnStatisticsUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnStatisticsUpdate_Params;
      break;
      case kRendererClient_OnWaitingForDecryptionKey_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnWaitingForDecryptionKey_Params;
      break;
      case kRendererClient_OnDurationChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererClient_OnDurationChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RendererClient = {
    name: 'media.mojom.RendererClient',
    kVersion: 0,
    ptrClass: RendererClientPtr,
    proxyClass: RendererClientProxy,
    stubClass: RendererClientStub,
    validateRequest: validateRendererClientRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/renderer.mojom',
    fuzzMethods: {
      onTimeUpdate: {
        params: RendererClient_OnTimeUpdate_Params,
      },
      onBufferingStateChange: {
        params: RendererClient_OnBufferingStateChange_Params,
      },
      onEnded: {
        params: RendererClient_OnEnded_Params,
      },
      onError: {
        params: RendererClient_OnError_Params,
      },
      onAudioConfigChange: {
        params: RendererClient_OnAudioConfigChange_Params,
      },
      onVideoConfigChange: {
        params: RendererClient_OnVideoConfigChange_Params,
      },
      onVideoNaturalSizeChange: {
        params: RendererClient_OnVideoNaturalSizeChange_Params,
      },
      onVideoOpacityChange: {
        params: RendererClient_OnVideoOpacityChange_Params,
      },
      onStatisticsUpdate: {
        params: RendererClient_OnStatisticsUpdate_Params,
      },
      onWaitingForDecryptionKey: {
        params: RendererClient_OnWaitingForDecryptionKey_Params,
      },
      onDurationChange: {
        params: RendererClient_OnDurationChange_Params,
      },
    },
  };
  RendererClientStub.prototype.validator = validateRendererClientRequest;
  RendererClientProxy.prototype.validator = null;
  exports.Renderer = Renderer;
  exports.RendererPtr = RendererPtr;
  exports.RendererAssociatedPtr = RendererAssociatedPtr;
  exports.RendererClient = RendererClient;
  exports.RendererClientPtr = RendererClientPtr;
  exports.RendererClientAssociatedPtr = RendererClientAssociatedPtr;
})();