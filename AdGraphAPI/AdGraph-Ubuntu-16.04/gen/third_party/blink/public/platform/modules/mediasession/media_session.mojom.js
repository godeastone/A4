// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/mediasession/media_session.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var MediaSessionAction = {};
  MediaSessionAction.PLAY = 0;
  MediaSessionAction.PAUSE = MediaSessionAction.PLAY + 1;
  MediaSessionAction.PREVIOUS_TRACK = MediaSessionAction.PAUSE + 1;
  MediaSessionAction.NEXT_TRACK = MediaSessionAction.PREVIOUS_TRACK + 1;
  MediaSessionAction.SEEK_BACKWARD = MediaSessionAction.NEXT_TRACK + 1;
  MediaSessionAction.SEEK_FORWARD = MediaSessionAction.SEEK_BACKWARD + 1;
  MediaSessionAction.LAST = MediaSessionAction.SEEK_FORWARD;

  MediaSessionAction.isKnownEnumValue = function(value) {
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

  MediaSessionAction.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var MediaSessionPlaybackState = {};
  MediaSessionPlaybackState.NONE = 0;
  MediaSessionPlaybackState.PAUSED = MediaSessionPlaybackState.NONE + 1;
  MediaSessionPlaybackState.PLAYING = MediaSessionPlaybackState.PAUSED + 1;

  MediaSessionPlaybackState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MediaSessionPlaybackState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function MediaImage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaImage.prototype.initDefaults_ = function() {
    this.src = null;
    this.type = null;
    this.sizes = null;
  };
  MediaImage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaImage.generate = function(generator_) {
    var generated = new MediaImage;
    generated.src = generator_.generateStruct(url.mojom.Url, false);
    generated.type = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.sizes = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Size, false);
    });
    return generated;
  };

  MediaImage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.src = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sizes = mutator_.mutateArray(this.sizes, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Size, false);
      });
    }
    return this;
  };
  MediaImage.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaImage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaImage.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaImage.validate = function(messageValidator, offset) {
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


    // validate MediaImage.src
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaImage.type
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaImage.sizes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Size), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaImage.encodedSize = codec.kStructHeaderSize + 24;

  MediaImage.decode = function(decoder) {
    var packed;
    var val = new MediaImage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.src = decoder.decodeStructPointer(url$.Url);
    val.type = decoder.decodeStructPointer(string16$.String16);
    val.sizes = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Size));
    return val;
  };

  MediaImage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaImage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.src);
    encoder.encodeStructPointer(string16$.String16, val.type);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Size), val.sizes);
  };
  function MediaMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetadata.prototype.initDefaults_ = function() {
    this.title = null;
    this.artist = null;
    this.album = null;
    this.artwork = null;
  };
  MediaMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetadata.generate = function(generator_) {
    var generated = new MediaMetadata;
    generated.title = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.artist = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.album = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.artwork = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.MediaImage, false);
    });
    return generated;
  };

  MediaMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.artist = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.album = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.artwork = mutator_.mutateArray(this.artwork, function(val) {
        return mutator_.mutateStruct(blink.mojom.MediaImage, false);
      });
    }
    return this;
  };
  MediaMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetadata.validate = function(messageValidator, offset) {
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


    // validate MediaMetadata.title
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.artist
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.album
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.artwork
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(MediaImage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetadata.encodedSize = codec.kStructHeaderSize + 32;

  MediaMetadata.decode = function(decoder) {
    var packed;
    var val = new MediaMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.title = decoder.decodeStructPointer(string16$.String16);
    val.artist = decoder.decodeStructPointer(string16$.String16);
    val.album = decoder.decodeStructPointer(string16$.String16);
    val.artwork = decoder.decodeArrayPointer(new codec.PointerTo(MediaImage));
    return val;
  };

  MediaMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.title);
    encoder.encodeStructPointer(string16$.String16, val.artist);
    encoder.encodeStructPointer(string16$.String16, val.album);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaImage), val.artwork);
  };
  function MediaSessionClient_DidReceiveAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSessionClient_DidReceiveAction_Params.prototype.initDefaults_ = function() {
    this.action = 0;
  };
  MediaSessionClient_DidReceiveAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSessionClient_DidReceiveAction_Params.generate = function(generator_) {
    var generated = new MediaSessionClient_DidReceiveAction_Params;
    generated.action = generator_.generateEnum(0, 5);
    return generated;
  };

  MediaSessionClient_DidReceiveAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateEnum(this.action, 0, 5);
    }
    return this;
  };
  MediaSessionClient_DidReceiveAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaSessionClient_DidReceiveAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSessionClient_DidReceiveAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaSessionClient_DidReceiveAction_Params.validate = function(messageValidator, offset) {
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


    // validate MediaSessionClient_DidReceiveAction_Params.action
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaSessionAction);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSessionClient_DidReceiveAction_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaSessionClient_DidReceiveAction_Params.decode = function(decoder) {
    var packed;
    var val = new MediaSessionClient_DidReceiveAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.action = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaSessionClient_DidReceiveAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSessionClient_DidReceiveAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.action);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaSessionService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSessionService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = new MediaSessionClientPtr();
  };
  MediaSessionService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSessionService_SetClient_Params.generate = function(generator_) {
    var generated = new MediaSessionService_SetClient_Params;
    generated.client = generator_.generateInterface("blink.mojom.MediaSessionClient", false);
    return generated;
  };

  MediaSessionService_SetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "blink.mojom.MediaSessionClient", false);
    }
    return this;
  };
  MediaSessionService_SetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.MediaSessionClientPtr"]);
    }
    return handles;
  };

  MediaSessionService_SetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSessionService_SetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  MediaSessionService_SetClient_Params.validate = function(messageValidator, offset) {
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


    // validate MediaSessionService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSessionService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaSessionService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new MediaSessionService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(MediaSessionClientPtr));
    return val;
  };

  MediaSessionService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSessionService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(MediaSessionClientPtr), val.client);
  };
  function MediaSessionService_SetPlaybackState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSessionService_SetPlaybackState_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  MediaSessionService_SetPlaybackState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSessionService_SetPlaybackState_Params.generate = function(generator_) {
    var generated = new MediaSessionService_SetPlaybackState_Params;
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  MediaSessionService_SetPlaybackState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  MediaSessionService_SetPlaybackState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaSessionService_SetPlaybackState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSessionService_SetPlaybackState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaSessionService_SetPlaybackState_Params.validate = function(messageValidator, offset) {
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


    // validate MediaSessionService_SetPlaybackState_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaSessionPlaybackState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSessionService_SetPlaybackState_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaSessionService_SetPlaybackState_Params.decode = function(decoder) {
    var packed;
    var val = new MediaSessionService_SetPlaybackState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaSessionService_SetPlaybackState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSessionService_SetPlaybackState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaSessionService_SetMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSessionService_SetMetadata_Params.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  MediaSessionService_SetMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSessionService_SetMetadata_Params.generate = function(generator_) {
    var generated = new MediaSessionService_SetMetadata_Params;
    generated.metadata = generator_.generateStruct(blink.mojom.MediaMetadata, true);
    return generated;
  };

  MediaSessionService_SetMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(blink.mojom.MediaMetadata, true);
    }
    return this;
  };
  MediaSessionService_SetMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaSessionService_SetMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSessionService_SetMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaSessionService_SetMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate MediaSessionService_SetMetadata_Params.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaMetadata, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSessionService_SetMetadata_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaSessionService_SetMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new MediaSessionService_SetMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata = decoder.decodeStructPointer(MediaMetadata);
    return val;
  };

  MediaSessionService_SetMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSessionService_SetMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaMetadata, val.metadata);
  };
  function MediaSessionService_EnableAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSessionService_EnableAction_Params.prototype.initDefaults_ = function() {
    this.action = 0;
  };
  MediaSessionService_EnableAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSessionService_EnableAction_Params.generate = function(generator_) {
    var generated = new MediaSessionService_EnableAction_Params;
    generated.action = generator_.generateEnum(0, 5);
    return generated;
  };

  MediaSessionService_EnableAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateEnum(this.action, 0, 5);
    }
    return this;
  };
  MediaSessionService_EnableAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaSessionService_EnableAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSessionService_EnableAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaSessionService_EnableAction_Params.validate = function(messageValidator, offset) {
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


    // validate MediaSessionService_EnableAction_Params.action
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaSessionAction);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSessionService_EnableAction_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaSessionService_EnableAction_Params.decode = function(decoder) {
    var packed;
    var val = new MediaSessionService_EnableAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.action = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaSessionService_EnableAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSessionService_EnableAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.action);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaSessionService_DisableAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSessionService_DisableAction_Params.prototype.initDefaults_ = function() {
    this.action = 0;
  };
  MediaSessionService_DisableAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSessionService_DisableAction_Params.generate = function(generator_) {
    var generated = new MediaSessionService_DisableAction_Params;
    generated.action = generator_.generateEnum(0, 5);
    return generated;
  };

  MediaSessionService_DisableAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateEnum(this.action, 0, 5);
    }
    return this;
  };
  MediaSessionService_DisableAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaSessionService_DisableAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSessionService_DisableAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaSessionService_DisableAction_Params.validate = function(messageValidator, offset) {
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


    // validate MediaSessionService_DisableAction_Params.action
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaSessionAction);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSessionService_DisableAction_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaSessionService_DisableAction_Params.decode = function(decoder) {
    var packed;
    var val = new MediaSessionService_DisableAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.action = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaSessionService_DisableAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSessionService_DisableAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.action);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kMediaSessionClient_DidReceiveAction_Name = 2061730700;

  function MediaSessionClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaSessionClient,
                                                   handleOrPtrInfo);
  }

  function MediaSessionClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaSessionClient, associatedInterfacePtrInfo);
  }

  MediaSessionClientAssociatedPtr.prototype =
      Object.create(MediaSessionClientPtr.prototype);
  MediaSessionClientAssociatedPtr.prototype.constructor =
      MediaSessionClientAssociatedPtr;

  function MediaSessionClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaSessionClientPtr.prototype.didReceiveAction = function() {
    return MediaSessionClientProxy.prototype.didReceiveAction
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaSessionClientProxy.prototype.didReceiveAction = function(action) {
    var params_ = new MediaSessionClient_DidReceiveAction_Params();
    params_.action = action;
    var builder = new codec.MessageV0Builder(
        kMediaSessionClient_DidReceiveAction_Name,
        codec.align(MediaSessionClient_DidReceiveAction_Params.encodedSize));
    builder.encodeStruct(MediaSessionClient_DidReceiveAction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaSessionClientStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaSessionClientStub.prototype.didReceiveAction = function(action) {
    return this.delegate_ && this.delegate_.didReceiveAction && this.delegate_.didReceiveAction(action);
  }

  MediaSessionClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaSessionClient_DidReceiveAction_Name:
      var params = reader.decodeStruct(MediaSessionClient_DidReceiveAction_Params);
      this.didReceiveAction(params.action);
      return true;
    default:
      return false;
    }
  };

  MediaSessionClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaSessionClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaSessionClient_DidReceiveAction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaSessionClient_DidReceiveAction_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaSessionClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaSessionClient = {
    name: 'blink.mojom.MediaSessionClient',
    kVersion: 0,
    ptrClass: MediaSessionClientPtr,
    proxyClass: MediaSessionClientProxy,
    stubClass: MediaSessionClientStub,
    validateRequest: validateMediaSessionClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/mediasession/media_session.mojom',
    fuzzMethods: {
      didReceiveAction: {
        params: MediaSessionClient_DidReceiveAction_Params,
      },
    },
  };
  MediaSessionClientStub.prototype.validator = validateMediaSessionClientRequest;
  MediaSessionClientProxy.prototype.validator = null;
  var kMediaSessionService_SetClient_Name = 1205083209;
  var kMediaSessionService_SetPlaybackState_Name = 1945870571;
  var kMediaSessionService_SetMetadata_Name = 831853815;
  var kMediaSessionService_EnableAction_Name = 1046519861;
  var kMediaSessionService_DisableAction_Name = 1962629212;

  function MediaSessionServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaSessionService,
                                                   handleOrPtrInfo);
  }

  function MediaSessionServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaSessionService, associatedInterfacePtrInfo);
  }

  MediaSessionServiceAssociatedPtr.prototype =
      Object.create(MediaSessionServicePtr.prototype);
  MediaSessionServiceAssociatedPtr.prototype.constructor =
      MediaSessionServiceAssociatedPtr;

  function MediaSessionServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaSessionServicePtr.prototype.setClient = function() {
    return MediaSessionServiceProxy.prototype.setClient
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaSessionServiceProxy.prototype.setClient = function(client) {
    var params_ = new MediaSessionService_SetClient_Params();
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kMediaSessionService_SetClient_Name,
        codec.align(MediaSessionService_SetClient_Params.encodedSize));
    builder.encodeStruct(MediaSessionService_SetClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaSessionServicePtr.prototype.setPlaybackState = function() {
    return MediaSessionServiceProxy.prototype.setPlaybackState
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaSessionServiceProxy.prototype.setPlaybackState = function(state) {
    var params_ = new MediaSessionService_SetPlaybackState_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kMediaSessionService_SetPlaybackState_Name,
        codec.align(MediaSessionService_SetPlaybackState_Params.encodedSize));
    builder.encodeStruct(MediaSessionService_SetPlaybackState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaSessionServicePtr.prototype.setMetadata = function() {
    return MediaSessionServiceProxy.prototype.setMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaSessionServiceProxy.prototype.setMetadata = function(metadata) {
    var params_ = new MediaSessionService_SetMetadata_Params();
    params_.metadata = metadata;
    var builder = new codec.MessageV0Builder(
        kMediaSessionService_SetMetadata_Name,
        codec.align(MediaSessionService_SetMetadata_Params.encodedSize));
    builder.encodeStruct(MediaSessionService_SetMetadata_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaSessionServicePtr.prototype.enableAction = function() {
    return MediaSessionServiceProxy.prototype.enableAction
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaSessionServiceProxy.prototype.enableAction = function(action) {
    var params_ = new MediaSessionService_EnableAction_Params();
    params_.action = action;
    var builder = new codec.MessageV0Builder(
        kMediaSessionService_EnableAction_Name,
        codec.align(MediaSessionService_EnableAction_Params.encodedSize));
    builder.encodeStruct(MediaSessionService_EnableAction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaSessionServicePtr.prototype.disableAction = function() {
    return MediaSessionServiceProxy.prototype.disableAction
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaSessionServiceProxy.prototype.disableAction = function(action) {
    var params_ = new MediaSessionService_DisableAction_Params();
    params_.action = action;
    var builder = new codec.MessageV0Builder(
        kMediaSessionService_DisableAction_Name,
        codec.align(MediaSessionService_DisableAction_Params.encodedSize));
    builder.encodeStruct(MediaSessionService_DisableAction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaSessionServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaSessionServiceStub.prototype.setClient = function(client) {
    return this.delegate_ && this.delegate_.setClient && this.delegate_.setClient(client);
  }
  MediaSessionServiceStub.prototype.setPlaybackState = function(state) {
    return this.delegate_ && this.delegate_.setPlaybackState && this.delegate_.setPlaybackState(state);
  }
  MediaSessionServiceStub.prototype.setMetadata = function(metadata) {
    return this.delegate_ && this.delegate_.setMetadata && this.delegate_.setMetadata(metadata);
  }
  MediaSessionServiceStub.prototype.enableAction = function(action) {
    return this.delegate_ && this.delegate_.enableAction && this.delegate_.enableAction(action);
  }
  MediaSessionServiceStub.prototype.disableAction = function(action) {
    return this.delegate_ && this.delegate_.disableAction && this.delegate_.disableAction(action);
  }

  MediaSessionServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaSessionService_SetClient_Name:
      var params = reader.decodeStruct(MediaSessionService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kMediaSessionService_SetPlaybackState_Name:
      var params = reader.decodeStruct(MediaSessionService_SetPlaybackState_Params);
      this.setPlaybackState(params.state);
      return true;
    case kMediaSessionService_SetMetadata_Name:
      var params = reader.decodeStruct(MediaSessionService_SetMetadata_Params);
      this.setMetadata(params.metadata);
      return true;
    case kMediaSessionService_EnableAction_Name:
      var params = reader.decodeStruct(MediaSessionService_EnableAction_Params);
      this.enableAction(params.action);
      return true;
    case kMediaSessionService_DisableAction_Name:
      var params = reader.decodeStruct(MediaSessionService_DisableAction_Params);
      this.disableAction(params.action);
      return true;
    default:
      return false;
    }
  };

  MediaSessionServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaSessionServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaSessionService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaSessionService_SetClient_Params;
      break;
      case kMediaSessionService_SetPlaybackState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaSessionService_SetPlaybackState_Params;
      break;
      case kMediaSessionService_SetMetadata_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaSessionService_SetMetadata_Params;
      break;
      case kMediaSessionService_EnableAction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaSessionService_EnableAction_Params;
      break;
      case kMediaSessionService_DisableAction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaSessionService_DisableAction_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaSessionServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaSessionService = {
    name: 'blink.mojom.MediaSessionService',
    kVersion: 0,
    ptrClass: MediaSessionServicePtr,
    proxyClass: MediaSessionServiceProxy,
    stubClass: MediaSessionServiceStub,
    validateRequest: validateMediaSessionServiceRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/mediasession/media_session.mojom',
    fuzzMethods: {
      setClient: {
        params: MediaSessionService_SetClient_Params,
      },
      setPlaybackState: {
        params: MediaSessionService_SetPlaybackState_Params,
      },
      setMetadata: {
        params: MediaSessionService_SetMetadata_Params,
      },
      enableAction: {
        params: MediaSessionService_EnableAction_Params,
      },
      disableAction: {
        params: MediaSessionService_DisableAction_Params,
      },
    },
  };
  MediaSessionServiceStub.prototype.validator = validateMediaSessionServiceRequest;
  MediaSessionServiceProxy.prototype.validator = null;
  exports.MediaSessionAction = MediaSessionAction;
  exports.MediaSessionPlaybackState = MediaSessionPlaybackState;
  exports.MediaImage = MediaImage;
  exports.MediaMetadata = MediaMetadata;
  exports.MediaSessionClient = MediaSessionClient;
  exports.MediaSessionClientPtr = MediaSessionClientPtr;
  exports.MediaSessionClientAssociatedPtr = MediaSessionClientAssociatedPtr;
  exports.MediaSessionService = MediaSessionService;
  exports.MediaSessionServicePtr = MediaSessionServicePtr;
  exports.MediaSessionServiceAssociatedPtr = MediaSessionServiceAssociatedPtr;
})();