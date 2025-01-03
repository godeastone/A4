// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/media_router/mojo/media_router.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mediaRouter.mojom');
  var media_controller$ =
      mojo.internal.exposeNamespace('mediaRouter.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'chrome/common/media_router/mojo/media_controller.mojom', 'media_controller.mojom.js');
  }
  var media_status$ =
      mojo.internal.exposeNamespace('mediaRouter.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'chrome/common/media_router/mojo/media_status.mojom', 'media_status.mojom.js');
  }
  var mirror_service_remoting$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/mirror_service_remoting.mojom', '../../../../media/mojo/interfaces/mirror_service_remoting.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var ip_address$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_address.mojom', '../../../../net/interfaces/ip_address.mojom.js');
  }
  var ip_endpoint$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_endpoint.mojom', '../../../../net/interfaces/ip_endpoint.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var SinkIconType = {};
  SinkIconType.CAST = 0;
  SinkIconType.CAST_AUDIO_GROUP = SinkIconType.CAST + 1;
  SinkIconType.CAST_AUDIO = SinkIconType.CAST_AUDIO_GROUP + 1;
  SinkIconType.MEETING = SinkIconType.CAST_AUDIO + 1;
  SinkIconType.HANGOUT = SinkIconType.MEETING + 1;
  SinkIconType.EDUCATION = SinkIconType.HANGOUT + 1;
  SinkIconType.WIRED_DISPLAY = SinkIconType.EDUCATION + 1;
  SinkIconType.GENERIC = SinkIconType.WIRED_DISPLAY + 1;

  SinkIconType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  SinkIconType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var RouteControllerType = {};
  RouteControllerType.kNone = 0;
  RouteControllerType.kGeneric = RouteControllerType.kNone + 1;
  RouteControllerType.kHangouts = RouteControllerType.kGeneric + 1;
  RouteControllerType.kMirroring = RouteControllerType.kHangouts + 1;

  RouteControllerType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  RouteControllerType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var RouteRequestResultCode = {};
  RouteRequestResultCode.UNKNOWN_ERROR = 0;
  RouteRequestResultCode.OK = RouteRequestResultCode.UNKNOWN_ERROR + 1;
  RouteRequestResultCode.TIMED_OUT = RouteRequestResultCode.OK + 1;
  RouteRequestResultCode.ROUTE_NOT_FOUND = RouteRequestResultCode.TIMED_OUT + 1;
  RouteRequestResultCode.SINK_NOT_FOUND = RouteRequestResultCode.ROUTE_NOT_FOUND + 1;
  RouteRequestResultCode.INVALID_ORIGIN = RouteRequestResultCode.SINK_NOT_FOUND + 1;
  RouteRequestResultCode.INCOGNITO_MISMATCH = RouteRequestResultCode.INVALID_ORIGIN + 1;
  RouteRequestResultCode.NO_SUPPORTED_PROVIDER = RouteRequestResultCode.INCOGNITO_MISMATCH + 1;
  RouteRequestResultCode.CANCELLED = RouteRequestResultCode.NO_SUPPORTED_PROVIDER + 1;
  RouteRequestResultCode.ROUTE_ALREADY_EXISTS = RouteRequestResultCode.CANCELLED + 1;

  RouteRequestResultCode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    }
    return false;
  };

  RouteRequestResultCode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function MediaSink(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaSink.prototype.initDefaults_ = function() {
    this.sinkId = null;
    this.name = null;
    this.description = null;
    this.domain = null;
    this.iconType = 0;
    this.providerId = 0;
    this.extraData = null;
  };
  MediaSink.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaSink.generate = function(generator_) {
    var generated = new MediaSink;
    generated.sinkId = generator_.generateString(false);
    generated.name = generator_.generateString(false);
    generated.description = generator_.generateString(true);
    generated.domain = generator_.generateString(true);
    generated.iconType = generator_.generateEnum(0, 7);
    generated.providerId = generator_.generateEnum(0, 3);
    generated.extraData = generator_.generateUnion(mediaRouter.mojom.MediaSinkExtraData, true);
    return generated;
  };

  MediaSink.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sinkId = mutator_.mutateString(this.sinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, true);
    }
    if (mutator_.chooseMutateField()) {
      this.domain = mutator_.mutateString(this.domain, true);
    }
    if (mutator_.chooseMutateField()) {
      this.iconType = mutator_.mutateEnum(this.iconType, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateEnum(this.providerId, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.extraData = mutator_.mutateUnion(mediaRouter.mojom.MediaSinkExtraData, true);
    }
    return this;
  };
  MediaSink.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaSink.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaSink.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaSink.validate = function(messageValidator, offset) {
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


    // validate MediaSink.sinkId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaSink.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaSink.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaSink.domain
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaSink.iconType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, SinkIconType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaSink.providerId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 36, MediaRouteProvider.Id);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaSink.extraData
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 40, MediaSinkExtraData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaSink.encodedSize = codec.kStructHeaderSize + 56;

  MediaSink.decode = function(decoder) {
    var packed;
    var val = new MediaSink();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sinkId = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.NullableString);
    val.domain = decoder.decodeStruct(codec.NullableString);
    val.iconType = decoder.decodeStruct(codec.Int32);
    val.providerId = decoder.decodeStruct(codec.Int32);
    val.extraData = decoder.decodeStruct(MediaSinkExtraData);
    return val;
  };

  MediaSink.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaSink.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sinkId);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.NullableString, val.description);
    encoder.encodeStruct(codec.NullableString, val.domain);
    encoder.encodeStruct(codec.Int32, val.iconType);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.encodeStruct(MediaSinkExtraData, val.extraData);
  };
  function DialMediaSink(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DialMediaSink.prototype.initDefaults_ = function() {
    this.ipAddress = null;
    this.modelName = null;
    this.appUrl = null;
  };
  DialMediaSink.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DialMediaSink.generate = function(generator_) {
    var generated = new DialMediaSink;
    generated.ipAddress = generator_.generateStruct(net.interfaces.IPAddress, false);
    generated.modelName = generator_.generateString(false);
    generated.appUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  DialMediaSink.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ipAddress = mutator_.mutateStruct(net.interfaces.IPAddress, false);
    }
    if (mutator_.chooseMutateField()) {
      this.modelName = mutator_.mutateString(this.modelName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.appUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  DialMediaSink.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DialMediaSink.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DialMediaSink.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DialMediaSink.validate = function(messageValidator, offset) {
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


    // validate DialMediaSink.ipAddress
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_address$.IPAddress, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DialMediaSink.modelName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DialMediaSink.appUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DialMediaSink.encodedSize = codec.kStructHeaderSize + 24;

  DialMediaSink.decode = function(decoder) {
    var packed;
    var val = new DialMediaSink();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ipAddress = decoder.decodeStructPointer(ip_address$.IPAddress);
    val.modelName = decoder.decodeStruct(codec.String);
    val.appUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  DialMediaSink.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DialMediaSink.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_address$.IPAddress, val.ipAddress);
    encoder.encodeStruct(codec.String, val.modelName);
    encoder.encodeStructPointer(url$.Url, val.appUrl);
  };
  function CastMediaSink(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CastMediaSink.prototype.initDefaults_ = function() {
    this.ipEndpoint = null;
    this.modelName = null;
    this.capabilities = 0;
    this.castChannelId = 0;
  };
  CastMediaSink.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CastMediaSink.generate = function(generator_) {
    var generated = new CastMediaSink;
    generated.ipEndpoint = generator_.generateStruct(net.interfaces.IPEndPoint, false);
    generated.modelName = generator_.generateString(false);
    generated.capabilities = generator_.generateUint8();
    generated.castChannelId = generator_.generateInt32();
    return generated;
  };

  CastMediaSink.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ipEndpoint = mutator_.mutateStruct(net.interfaces.IPEndPoint, false);
    }
    if (mutator_.chooseMutateField()) {
      this.modelName = mutator_.mutateString(this.modelName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.capabilities = mutator_.mutateUint8(this.capabilities);
    }
    if (mutator_.chooseMutateField()) {
      this.castChannelId = mutator_.mutateInt32(this.castChannelId);
    }
    return this;
  };
  CastMediaSink.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CastMediaSink.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CastMediaSink.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CastMediaSink.validate = function(messageValidator, offset) {
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


    // validate CastMediaSink.ipEndpoint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_endpoint$.IPEndPoint, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CastMediaSink.modelName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  CastMediaSink.encodedSize = codec.kStructHeaderSize + 24;

  CastMediaSink.decode = function(decoder) {
    var packed;
    var val = new CastMediaSink();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ipEndpoint = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.modelName = decoder.decodeStruct(codec.String);
    val.capabilities = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.castChannelId = decoder.decodeStruct(codec.Int32);
    return val;
  };

  CastMediaSink.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CastMediaSink.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.ipEndpoint);
    encoder.encodeStruct(codec.String, val.modelName);
    encoder.encodeStruct(codec.Uint8, val.capabilities);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.castChannelId);
  };
  function MediaRoute(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRoute.prototype.initDefaults_ = function() {
    this.mediaRouteId = null;
    this.presentationId = null;
    this.mediaSource = null;
    this.mediaSinkId = null;
    this.description = null;
    this.isLocal = false;
    this.forDisplay = false;
    this.isIncognito = false;
    this.isLocalPresentation = false;
    this.controllerType = 0;
  };
  MediaRoute.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRoute.generate = function(generator_) {
    var generated = new MediaRoute;
    generated.mediaRouteId = generator_.generateString(false);
    generated.presentationId = generator_.generateString(false);
    generated.mediaSource = generator_.generateString(true);
    generated.mediaSinkId = generator_.generateString(false);
    generated.description = generator_.generateString(false);
    generated.isLocal = generator_.generateBool();
    generated.controllerType = generator_.generateEnum(0, 3);
    generated.forDisplay = generator_.generateBool();
    generated.isIncognito = generator_.generateBool();
    generated.isLocalPresentation = generator_.generateBool();
    return generated;
  };

  MediaRoute.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaRouteId = mutator_.mutateString(this.mediaRouteId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.presentationId = mutator_.mutateString(this.presentationId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, true);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaSinkId = mutator_.mutateString(this.mediaSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isLocal = mutator_.mutateBool(this.isLocal);
    }
    if (mutator_.chooseMutateField()) {
      this.controllerType = mutator_.mutateEnum(this.controllerType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.forDisplay = mutator_.mutateBool(this.forDisplay);
    }
    if (mutator_.chooseMutateField()) {
      this.isIncognito = mutator_.mutateBool(this.isIncognito);
    }
    if (mutator_.chooseMutateField()) {
      this.isLocalPresentation = mutator_.mutateBool(this.isLocalPresentation);
    }
    return this;
  };
  MediaRoute.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRoute.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRoute.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRoute.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRoute.mediaRouteId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRoute.presentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRoute.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRoute.mediaSinkId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRoute.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate MediaRoute.controllerType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 44, RouteControllerType);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  MediaRoute.encodedSize = codec.kStructHeaderSize + 48;

  MediaRoute.decode = function(decoder) {
    var packed;
    var val = new MediaRoute();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaRouteId = decoder.decodeStruct(codec.String);
    val.presentationId = decoder.decodeStruct(codec.String);
    val.mediaSource = decoder.decodeStruct(codec.NullableString);
    val.mediaSinkId = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.isLocal = (packed >> 0) & 1 ? true : false;
    val.forDisplay = (packed >> 1) & 1 ? true : false;
    val.isIncognito = (packed >> 2) & 1 ? true : false;
    val.isLocalPresentation = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.controllerType = decoder.decodeStruct(codec.Int32);
    return val;
  };

  MediaRoute.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRoute.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaRouteId);
    encoder.encodeStruct(codec.String, val.presentationId);
    encoder.encodeStruct(codec.NullableString, val.mediaSource);
    encoder.encodeStruct(codec.String, val.mediaSinkId);
    encoder.encodeStruct(codec.String, val.description);
    packed = 0;
    packed |= (val.isLocal & 1) << 0
    packed |= (val.forDisplay & 1) << 1
    packed |= (val.isIncognito & 1) << 2
    packed |= (val.isLocalPresentation & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.controllerType);
  };
  function Issue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  Issue.Severity = {};
  Issue.Severity.FATAL = 0;
  Issue.Severity.WARNING = Issue.Severity.FATAL + 1;
  Issue.Severity.NOTIFICATION = Issue.Severity.WARNING + 1;

  Issue.Severity.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  Issue.Severity.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  Issue.ActionType = {};
  Issue.ActionType.DISMISS = 0;
  Issue.ActionType.LEARN_MORE = Issue.ActionType.DISMISS + 1;

  Issue.ActionType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  Issue.ActionType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  Issue.prototype.initDefaults_ = function() {
    this.routeId = null;
    this.severity = 0;
    this.isBlocking = false;
    this.title = null;
    this.message = null;
    this.defaultAction = 0;
    this.helpPageId = 0;
    this.secondaryActions = null;
  };
  Issue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Issue.generate = function(generator_) {
    var generated = new Issue;
    generated.routeId = generator_.generateString(true);
    generated.severity = generator_.generateEnum(0, 2);
    generated.isBlocking = generator_.generateBool();
    generated.title = generator_.generateString(false);
    generated.message = generator_.generateString(true);
    generated.defaultAction = generator_.generateEnum(0, 1);
    generated.secondaryActions = generator_.generateArray(function() {
      return generator_.generateEnum(0, 1);
    });
    generated.helpPageId = generator_.generateInt32();
    return generated;
  };

  Issue.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, true);
    }
    if (mutator_.chooseMutateField()) {
      this.severity = mutator_.mutateEnum(this.severity, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.isBlocking = mutator_.mutateBool(this.isBlocking);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, true);
    }
    if (mutator_.chooseMutateField()) {
      this.defaultAction = mutator_.mutateEnum(this.defaultAction, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.secondaryActions = mutator_.mutateArray(this.secondaryActions, function(val) {
        return mutator_.mutateEnum(val, 0, 1);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.helpPageId = mutator_.mutateInt32(this.helpPageId);
    }
    return this;
  };
  Issue.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Issue.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Issue.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Issue.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Issue.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Issue.severity
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, Issue.Severity);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Issue.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Issue.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Issue.defaultAction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, Issue.ActionType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Issue.secondaryActions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, new codec.Enum(Issue.ActionType), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Issue.encodedSize = codec.kStructHeaderSize + 48;

  Issue.decode = function(decoder) {
    var packed;
    var val = new Issue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.NullableString);
    val.severity = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isBlocking = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.title = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStruct(codec.NullableString);
    val.defaultAction = decoder.decodeStruct(codec.Int32);
    val.helpPageId = decoder.decodeStruct(codec.Int32);
    val.secondaryActions = decoder.decodeArrayPointer(new codec.Enum(Issue.ActionType));
    return val;
  };

  Issue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Issue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.routeId);
    encoder.encodeStruct(codec.Int32, val.severity);
    packed = 0;
    packed |= (val.isBlocking & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.title);
    encoder.encodeStruct(codec.NullableString, val.message);
    encoder.encodeStruct(codec.Int32, val.defaultAction);
    encoder.encodeStruct(codec.Int32, val.helpPageId);
    encoder.encodeArrayPointer(new codec.Enum(Issue.ActionType), val.secondaryActions);
  };
  function RouteMessage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  RouteMessage.Type = {};
  RouteMessage.Type.TEXT = 0;
  RouteMessage.Type.BINARY = RouteMessage.Type.TEXT + 1;

  RouteMessage.Type.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  RouteMessage.Type.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  RouteMessage.prototype.initDefaults_ = function() {
    this.type = 0;
    this.message = null;
    this.data = null;
  };
  RouteMessage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RouteMessage.generate = function(generator_) {
    var generated = new RouteMessage;
    generated.type = generator_.generateEnum(0, 1);
    generated.message = generator_.generateString(true);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  RouteMessage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, true);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  RouteMessage.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RouteMessage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RouteMessage.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RouteMessage.validate = function(messageValidator, offset) {
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


    // validate RouteMessage.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, RouteMessage.Type);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RouteMessage.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RouteMessage.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RouteMessage.encodedSize = codec.kStructHeaderSize + 24;

  RouteMessage.decode = function(decoder) {
    var packed;
    var val = new RouteMessage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.NullableString);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  RouteMessage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RouteMessage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.message);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function SinkSearchCriteria(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SinkSearchCriteria.prototype.initDefaults_ = function() {
    this.input = null;
    this.domain = null;
  };
  SinkSearchCriteria.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SinkSearchCriteria.generate = function(generator_) {
    var generated = new SinkSearchCriteria;
    generated.input = generator_.generateString(false);
    generated.domain = generator_.generateString(false);
    return generated;
  };

  SinkSearchCriteria.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.input = mutator_.mutateString(this.input, false);
    }
    if (mutator_.chooseMutateField()) {
      this.domain = mutator_.mutateString(this.domain, false);
    }
    return this;
  };
  SinkSearchCriteria.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SinkSearchCriteria.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SinkSearchCriteria.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SinkSearchCriteria.validate = function(messageValidator, offset) {
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


    // validate SinkSearchCriteria.input
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SinkSearchCriteria.domain
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SinkSearchCriteria.encodedSize = codec.kStructHeaderSize + 16;

  SinkSearchCriteria.decode = function(decoder) {
    var packed;
    var val = new SinkSearchCriteria();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.input = decoder.decodeStruct(codec.String);
    val.domain = decoder.decodeStruct(codec.String);
    return val;
  };

  SinkSearchCriteria.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SinkSearchCriteria.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.input);
    encoder.encodeStruct(codec.String, val.domain);
  };
  function MediaRouteProviderConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProviderConfig.prototype.initDefaults_ = function() {
    this.enableDialDiscovery = false;
    this.enableCastDiscovery = false;
    this.enableDialSinkQuery = false;
    this.enableCastSinkQuery = false;
  };
  MediaRouteProviderConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProviderConfig.generate = function(generator_) {
    var generated = new MediaRouteProviderConfig;
    generated.enableDialDiscovery = generator_.generateBool();
    generated.enableCastDiscovery = generator_.generateBool();
    generated.enableDialSinkQuery = generator_.generateBool();
    generated.enableCastSinkQuery = generator_.generateBool();
    return generated;
  };

  MediaRouteProviderConfig.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enableDialDiscovery = mutator_.mutateBool(this.enableDialDiscovery);
    }
    if (mutator_.chooseMutateField()) {
      this.enableCastDiscovery = mutator_.mutateBool(this.enableCastDiscovery);
    }
    if (mutator_.chooseMutateField()) {
      this.enableDialSinkQuery = mutator_.mutateBool(this.enableDialSinkQuery);
    }
    if (mutator_.chooseMutateField()) {
      this.enableCastSinkQuery = mutator_.mutateBool(this.enableCastSinkQuery);
    }
    return this;
  };
  MediaRouteProviderConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProviderConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProviderConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProviderConfig.validate = function(messageValidator, offset) {
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

  MediaRouteProviderConfig.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProviderConfig.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProviderConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enableDialDiscovery = (packed >> 0) & 1 ? true : false;
    val.enableCastDiscovery = (packed >> 1) & 1 ? true : false;
    val.enableDialSinkQuery = (packed >> 2) & 1 ? true : false;
    val.enableCastSinkQuery = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProviderConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProviderConfig.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enableDialDiscovery & 1) << 0
    packed |= (val.enableCastDiscovery & 1) << 1
    packed |= (val.enableDialSinkQuery & 1) << 2
    packed |= (val.enableCastSinkQuery & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_CreateRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_CreateRoute_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
    this.sinkId = null;
    this.originalPresentationId = null;
    this.origin = null;
    this.tabId = 0;
    this.incognito = false;
    this.timeout = null;
  };
  MediaRouteProvider_CreateRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_CreateRoute_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_CreateRoute_Params;
    generated.mediaSource = generator_.generateString(false);
    generated.sinkId = generator_.generateString(false);
    generated.originalPresentationId = generator_.generateString(false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.tabId = generator_.generateInt32();
    generated.timeout = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.incognito = generator_.generateBool();
    return generated;
  };

  MediaRouteProvider_CreateRoute_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sinkId = mutator_.mutateString(this.sinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.originalPresentationId = mutator_.mutateString(this.originalPresentationId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.incognito = mutator_.mutateBool(this.incognito);
    }
    return this;
  };
  MediaRouteProvider_CreateRoute_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_CreateRoute_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_CreateRoute_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_CreateRoute_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateRoute_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateRoute_Params.sinkId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateRoute_Params.originalPresentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateRoute_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate MediaRouteProvider_CreateRoute_Params.timeout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_CreateRoute_Params.encodedSize = codec.kStructHeaderSize + 48;

  MediaRouteProvider_CreateRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_CreateRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    val.sinkId = decoder.decodeStruct(codec.String);
    val.originalPresentationId = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.tabId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.incognito = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  MediaRouteProvider_CreateRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_CreateRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
    encoder.encodeStruct(codec.String, val.sinkId);
    encoder.encodeStruct(codec.String, val.originalPresentationId);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Int32, val.tabId);
    packed = 0;
    packed |= (val.incognito & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeout);
  };
  function MediaRouteProvider_CreateRoute_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_CreateRoute_ResponseParams.prototype.initDefaults_ = function() {
    this.route = null;
    this.errorText = null;
    this.resultCode = 0;
  };
  MediaRouteProvider_CreateRoute_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_CreateRoute_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_CreateRoute_ResponseParams;
    generated.route = generator_.generateStruct(mediaRouter.mojom.MediaRoute, true);
    generated.errorText = generator_.generateString(true);
    generated.resultCode = generator_.generateEnum(0, 9);
    return generated;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.route = mutator_.mutateStruct(mediaRouter.mojom.MediaRoute, true);
    }
    if (mutator_.chooseMutateField()) {
      this.errorText = mutator_.mutateString(this.errorText, true);
    }
    if (mutator_.chooseMutateField()) {
      this.resultCode = mutator_.mutateEnum(this.resultCode, 0, 9);
    }
    return this;
  };
  MediaRouteProvider_CreateRoute_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_CreateRoute_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_CreateRoute_ResponseParams.route
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaRoute, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateRoute_ResponseParams.errorText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateRoute_ResponseParams.resultCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, RouteRequestResultCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouteProvider_CreateRoute_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_CreateRoute_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route = decoder.decodeStructPointer(MediaRoute);
    val.errorText = decoder.decodeStruct(codec.NullableString);
    val.resultCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_CreateRoute_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_CreateRoute_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaRoute, val.route);
    encoder.encodeStruct(codec.NullableString, val.errorText);
    encoder.encodeStruct(codec.Int32, val.resultCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_JoinRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_JoinRoute_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
    this.presentationId = null;
    this.origin = null;
    this.tabId = 0;
    this.incognito = false;
    this.timeout = null;
  };
  MediaRouteProvider_JoinRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_JoinRoute_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_JoinRoute_Params;
    generated.mediaSource = generator_.generateString(false);
    generated.presentationId = generator_.generateString(false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.tabId = generator_.generateInt32();
    generated.timeout = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.incognito = generator_.generateBool();
    return generated;
  };

  MediaRouteProvider_JoinRoute_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.presentationId = mutator_.mutateString(this.presentationId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.incognito = mutator_.mutateBool(this.incognito);
    }
    return this;
  };
  MediaRouteProvider_JoinRoute_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_JoinRoute_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_JoinRoute_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_JoinRoute_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_JoinRoute_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_JoinRoute_Params.presentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_JoinRoute_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate MediaRouteProvider_JoinRoute_Params.timeout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_JoinRoute_Params.encodedSize = codec.kStructHeaderSize + 40;

  MediaRouteProvider_JoinRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_JoinRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    val.presentationId = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.tabId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.incognito = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  MediaRouteProvider_JoinRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_JoinRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
    encoder.encodeStruct(codec.String, val.presentationId);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Int32, val.tabId);
    packed = 0;
    packed |= (val.incognito & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeout);
  };
  function MediaRouteProvider_JoinRoute_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_JoinRoute_ResponseParams.prototype.initDefaults_ = function() {
    this.route = null;
    this.errorText = null;
    this.resultCode = 0;
  };
  MediaRouteProvider_JoinRoute_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_JoinRoute_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_JoinRoute_ResponseParams;
    generated.route = generator_.generateStruct(mediaRouter.mojom.MediaRoute, true);
    generated.errorText = generator_.generateString(true);
    generated.resultCode = generator_.generateEnum(0, 9);
    return generated;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.route = mutator_.mutateStruct(mediaRouter.mojom.MediaRoute, true);
    }
    if (mutator_.chooseMutateField()) {
      this.errorText = mutator_.mutateString(this.errorText, true);
    }
    if (mutator_.chooseMutateField()) {
      this.resultCode = mutator_.mutateEnum(this.resultCode, 0, 9);
    }
    return this;
  };
  MediaRouteProvider_JoinRoute_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_JoinRoute_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_JoinRoute_ResponseParams.route
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaRoute, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_JoinRoute_ResponseParams.errorText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_JoinRoute_ResponseParams.resultCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, RouteRequestResultCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouteProvider_JoinRoute_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_JoinRoute_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route = decoder.decodeStructPointer(MediaRoute);
    val.errorText = decoder.decodeStruct(codec.NullableString);
    val.resultCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_JoinRoute_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_JoinRoute_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaRoute, val.route);
    encoder.encodeStruct(codec.NullableString, val.errorText);
    encoder.encodeStruct(codec.Int32, val.resultCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_ConnectRouteByRouteId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
    this.routeId = null;
    this.presentationId = null;
    this.origin = null;
    this.tabId = 0;
    this.incognito = false;
    this.timeout = null;
  };
  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_ConnectRouteByRouteId_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_ConnectRouteByRouteId_Params;
    generated.mediaSource = generator_.generateString(false);
    generated.routeId = generator_.generateString(false);
    generated.presentationId = generator_.generateString(false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.tabId = generator_.generateInt32();
    generated.timeout = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.incognito = generator_.generateBool();
    return generated;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.presentationId = mutator_.mutateString(this.presentationId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.incognito = mutator_.mutateBool(this.incognito);
    }
    return this;
  };
  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_ConnectRouteByRouteId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.presentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate MediaRouteProvider_ConnectRouteByRouteId_Params.timeout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize = codec.kStructHeaderSize + 48;

  MediaRouteProvider_ConnectRouteByRouteId_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ConnectRouteByRouteId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    val.routeId = decoder.decodeStruct(codec.String);
    val.presentationId = decoder.decodeStruct(codec.String);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.tabId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.incognito = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  MediaRouteProvider_ConnectRouteByRouteId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
    encoder.encodeStruct(codec.String, val.routeId);
    encoder.encodeStruct(codec.String, val.presentationId);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Int32, val.tabId);
    packed = 0;
    packed |= (val.incognito & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeout);
  };
  function MediaRouteProvider_ConnectRouteByRouteId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.initDefaults_ = function() {
    this.route = null;
    this.errorText = null;
    this.resultCode = 0;
  };
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_ConnectRouteByRouteId_ResponseParams;
    generated.route = generator_.generateStruct(mediaRouter.mojom.MediaRoute, true);
    generated.errorText = generator_.generateString(true);
    generated.resultCode = generator_.generateEnum(0, 9);
    return generated;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.route = mutator_.mutateStruct(mediaRouter.mojom.MediaRoute, true);
    }
    if (mutator_.chooseMutateField()) {
      this.errorText = mutator_.mutateString(this.errorText, true);
    }
    if (mutator_.chooseMutateField()) {
      this.resultCode = mutator_.mutateEnum(this.resultCode, 0, 9);
    }
    return this;
  };
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.route
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MediaRoute, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.errorText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.resultCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, RouteRequestResultCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ConnectRouteByRouteId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.route = decoder.decodeStructPointer(MediaRoute);
    val.errorText = decoder.decodeStruct(codec.NullableString);
    val.resultCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MediaRoute, val.route);
    encoder.encodeStruct(codec.NullableString, val.errorText);
    encoder.encodeStruct(codec.Int32, val.resultCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_TerminateRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_TerminateRoute_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
  };
  MediaRouteProvider_TerminateRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_TerminateRoute_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_TerminateRoute_Params;
    generated.routeId = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_TerminateRoute_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    return this;
  };
  MediaRouteProvider_TerminateRoute_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_TerminateRoute_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_TerminateRoute_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_TerminateRoute_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_TerminateRoute_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_TerminateRoute_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_TerminateRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_TerminateRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_TerminateRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_TerminateRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
  };
  function MediaRouteProvider_TerminateRoute_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_TerminateRoute_ResponseParams.prototype.initDefaults_ = function() {
    this.errorText = null;
    this.resultCode = 0;
  };
  MediaRouteProvider_TerminateRoute_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_TerminateRoute_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_TerminateRoute_ResponseParams;
    generated.errorText = generator_.generateString(true);
    generated.resultCode = generator_.generateEnum(0, 9);
    return generated;
  };

  MediaRouteProvider_TerminateRoute_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.errorText = mutator_.mutateString(this.errorText, true);
    }
    if (mutator_.chooseMutateField()) {
      this.resultCode = mutator_.mutateEnum(this.resultCode, 0, 9);
    }
    return this;
  };
  MediaRouteProvider_TerminateRoute_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_TerminateRoute_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_TerminateRoute_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_TerminateRoute_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_TerminateRoute_ResponseParams.errorText
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_TerminateRoute_ResponseParams.resultCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, RouteRequestResultCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_TerminateRoute_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_TerminateRoute_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_TerminateRoute_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.errorText = decoder.decodeStruct(codec.NullableString);
    val.resultCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_TerminateRoute_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_TerminateRoute_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.errorText);
    encoder.encodeStruct(codec.Int32, val.resultCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_SendRouteMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteMessage_Params.prototype.initDefaults_ = function() {
    this.mediaRouteId = null;
    this.message = null;
  };
  MediaRouteProvider_SendRouteMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_SendRouteMessage_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_SendRouteMessage_Params;
    generated.mediaRouteId = generator_.generateString(false);
    generated.message = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_SendRouteMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaRouteId = mutator_.mutateString(this.mediaRouteId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  MediaRouteProvider_SendRouteMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_SendRouteMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_SendRouteMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_SendRouteMessage_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_SendRouteMessage_Params.mediaRouteId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_SendRouteMessage_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_SendRouteMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_SendRouteMessage_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaRouteId = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_SendRouteMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaRouteId);
    encoder.encodeStruct(codec.String, val.message);
  };
  function MediaRouteProvider_SendRouteMessage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.initDefaults_ = function() {
    this.sent = false;
  };
  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_SendRouteMessage_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_SendRouteMessage_ResponseParams;
    generated.sent = generator_.generateBool();
    return generated;
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sent = mutator_.mutateBool(this.sent);
    }
    return this;
  };
  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_SendRouteMessage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.validate = function(messageValidator, offset) {
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

  MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_SendRouteMessage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteMessage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.sent = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_SendRouteMessage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.sent & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_SendRouteBinaryMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.initDefaults_ = function() {
    this.mediaRouteId = null;
    this.data = null;
  };
  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_SendRouteBinaryMessage_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_SendRouteBinaryMessage_Params;
    generated.mediaRouteId = generator_.generateString(false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaRouteId = mutator_.mutateString(this.mediaRouteId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_SendRouteBinaryMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_SendRouteBinaryMessage_Params.mediaRouteId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_SendRouteBinaryMessage_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_SendRouteBinaryMessage_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteBinaryMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaRouteId = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  MediaRouteProvider_SendRouteBinaryMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaRouteId);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function MediaRouteProvider_SendRouteBinaryMessage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.initDefaults_ = function() {
    this.sent = false;
  };
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_SendRouteBinaryMessage_ResponseParams;
    generated.sent = generator_.generateBool();
    return generated;
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sent = mutator_.mutateBool(this.sent);
    }
    return this;
  };
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.validate = function(messageValidator, offset) {
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

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SendRouteBinaryMessage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.sent = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.sent & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_StartObservingMediaSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
  };
  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_StartObservingMediaSinks_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_StartObservingMediaSinks_Params;
    generated.mediaSource = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    return this;
  };
  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_StartObservingMediaSinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_StartObservingMediaSinks_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StartObservingMediaSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StartObservingMediaSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StartObservingMediaSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
  };
  function MediaRouteProvider_StopObservingMediaSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
  };
  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_StopObservingMediaSinks_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_StopObservingMediaSinks_Params;
    generated.mediaSource = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    return this;
  };
  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_StopObservingMediaSinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_StopObservingMediaSinks_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StopObservingMediaSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StopObservingMediaSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StopObservingMediaSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
  };
  function MediaRouteProvider_StartObservingMediaRoutes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
  };
  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_StartObservingMediaRoutes_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_StartObservingMediaRoutes_Params;
    generated.mediaSource = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    return this;
  };
  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_StartObservingMediaRoutes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_StartObservingMediaRoutes_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StartObservingMediaRoutes_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StartObservingMediaRoutes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StartObservingMediaRoutes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
  };
  function MediaRouteProvider_StopObservingMediaRoutes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
  };
  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_StopObservingMediaRoutes_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_StopObservingMediaRoutes_Params;
    generated.mediaSource = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    return this;
  };
  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_StopObservingMediaRoutes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_StopObservingMediaRoutes_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StopObservingMediaRoutes_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StopObservingMediaRoutes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StopObservingMediaRoutes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
  };
  function MediaRouteProvider_StartListeningForRouteMessages_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StartListeningForRouteMessages_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
  };
  MediaRouteProvider_StartListeningForRouteMessages_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_StartListeningForRouteMessages_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_StartListeningForRouteMessages_Params;
    generated.routeId = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_StartListeningForRouteMessages_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    return this;
  };
  MediaRouteProvider_StartListeningForRouteMessages_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_StartListeningForRouteMessages_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_StartListeningForRouteMessages_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_StartListeningForRouteMessages_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_StartListeningForRouteMessages_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StartListeningForRouteMessages_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StartListeningForRouteMessages_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StartListeningForRouteMessages_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StartListeningForRouteMessages_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StartListeningForRouteMessages_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
  };
  function MediaRouteProvider_StopListeningForRouteMessages_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
  };
  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_StopListeningForRouteMessages_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_StopListeningForRouteMessages_Params;
    generated.routeId = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    return this;
  };
  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_StopListeningForRouteMessages_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_StopListeningForRouteMessages_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_StopListeningForRouteMessages_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_StopListeningForRouteMessages_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_StopListeningForRouteMessages_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
  };
  function MediaRouteProvider_DetachRoute_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_DetachRoute_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
  };
  MediaRouteProvider_DetachRoute_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_DetachRoute_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_DetachRoute_Params;
    generated.routeId = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_DetachRoute_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    return this;
  };
  MediaRouteProvider_DetachRoute_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_DetachRoute_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_DetachRoute_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_DetachRoute_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_DetachRoute_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_DetachRoute_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_DetachRoute_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_DetachRoute_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_DetachRoute_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_DetachRoute_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
  };
  function MediaRouteProvider_EnableMdnsDiscovery_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_EnableMdnsDiscovery_Params.prototype.initDefaults_ = function() {
  };
  MediaRouteProvider_EnableMdnsDiscovery_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_EnableMdnsDiscovery_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_EnableMdnsDiscovery_Params;
    return generated;
  };

  MediaRouteProvider_EnableMdnsDiscovery_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaRouteProvider_EnableMdnsDiscovery_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_EnableMdnsDiscovery_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_EnableMdnsDiscovery_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_EnableMdnsDiscovery_Params.validate = function(messageValidator, offset) {
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

  MediaRouteProvider_EnableMdnsDiscovery_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaRouteProvider_EnableMdnsDiscovery_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_EnableMdnsDiscovery_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaRouteProvider_EnableMdnsDiscovery_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_EnableMdnsDiscovery_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaRouteProvider_UpdateMediaSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_UpdateMediaSinks_Params.prototype.initDefaults_ = function() {
    this.mediaSource = null;
  };
  MediaRouteProvider_UpdateMediaSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_UpdateMediaSinks_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_UpdateMediaSinks_Params;
    generated.mediaSource = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_UpdateMediaSinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    return this;
  };
  MediaRouteProvider_UpdateMediaSinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_UpdateMediaSinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_UpdateMediaSinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_UpdateMediaSinks_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_UpdateMediaSinks_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_UpdateMediaSinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_UpdateMediaSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_UpdateMediaSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaSource = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_UpdateMediaSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_UpdateMediaSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mediaSource);
  };
  function MediaRouteProvider_SearchSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SearchSinks_Params.prototype.initDefaults_ = function() {
    this.sinkId = null;
    this.mediaSource = null;
    this.searchCriteria = null;
  };
  MediaRouteProvider_SearchSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_SearchSinks_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_SearchSinks_Params;
    generated.sinkId = generator_.generateString(false);
    generated.mediaSource = generator_.generateString(false);
    generated.searchCriteria = generator_.generateStruct(mediaRouter.mojom.SinkSearchCriteria, false);
    return generated;
  };

  MediaRouteProvider_SearchSinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sinkId = mutator_.mutateString(this.sinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.searchCriteria = mutator_.mutateStruct(mediaRouter.mojom.SinkSearchCriteria, false);
    }
    return this;
  };
  MediaRouteProvider_SearchSinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_SearchSinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_SearchSinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_SearchSinks_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_SearchSinks_Params.sinkId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_SearchSinks_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_SearchSinks_Params.searchCriteria
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, SinkSearchCriteria, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_SearchSinks_Params.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouteProvider_SearchSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SearchSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sinkId = decoder.decodeStruct(codec.String);
    val.mediaSource = decoder.decodeStruct(codec.String);
    val.searchCriteria = decoder.decodeStructPointer(SinkSearchCriteria);
    return val;
  };

  MediaRouteProvider_SearchSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SearchSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sinkId);
    encoder.encodeStruct(codec.String, val.mediaSource);
    encoder.encodeStructPointer(SinkSearchCriteria, val.searchCriteria);
  };
  function MediaRouteProvider_SearchSinks_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_SearchSinks_ResponseParams.prototype.initDefaults_ = function() {
    this.sinkId = null;
  };
  MediaRouteProvider_SearchSinks_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_SearchSinks_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_SearchSinks_ResponseParams;
    generated.sinkId = generator_.generateString(false);
    return generated;
  };

  MediaRouteProvider_SearchSinks_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sinkId = mutator_.mutateString(this.sinkId, false);
    }
    return this;
  };
  MediaRouteProvider_SearchSinks_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_SearchSinks_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_SearchSinks_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_SearchSinks_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_SearchSinks_ResponseParams.sinkId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_SearchSinks_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_SearchSinks_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_SearchSinks_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sinkId = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouteProvider_SearchSinks_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_SearchSinks_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sinkId);
  };
  function MediaRouteProvider_ProvideSinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_ProvideSinks_Params.prototype.initDefaults_ = function() {
    this.providerName = null;
    this.sinks = null;
  };
  MediaRouteProvider_ProvideSinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_ProvideSinks_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_ProvideSinks_Params;
    generated.providerName = generator_.generateString(false);
    generated.sinks = generator_.generateArray(function() {
      return generator_.generateStruct(mediaRouter.mojom.MediaSink, false);
    });
    return generated;
  };

  MediaRouteProvider_ProvideSinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerName = mutator_.mutateString(this.providerName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sinks = mutator_.mutateArray(this.sinks, function(val) {
        return mutator_.mutateStruct(mediaRouter.mojom.MediaSink, false);
      });
    }
    return this;
  };
  MediaRouteProvider_ProvideSinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_ProvideSinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_ProvideSinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_ProvideSinks_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_ProvideSinks_Params.providerName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_ProvideSinks_Params.sinks
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(MediaSink), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_ProvideSinks_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouteProvider_ProvideSinks_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_ProvideSinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerName = decoder.decodeStruct(codec.String);
    val.sinks = decoder.decodeArrayPointer(new codec.PointerTo(MediaSink));
    return val;
  };

  MediaRouteProvider_ProvideSinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_ProvideSinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.providerName);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaSink), val.sinks);
  };
  function MediaRouteProvider_CreateMediaRouteController_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_CreateMediaRouteController_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
    this.mediaController = new bindings.InterfaceRequest();
    this.observer = new media_status$.MediaStatusObserverPtr();
  };
  MediaRouteProvider_CreateMediaRouteController_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_CreateMediaRouteController_Params.generate = function(generator_) {
    var generated = new MediaRouteProvider_CreateMediaRouteController_Params;
    generated.routeId = generator_.generateString(false);
    generated.mediaController = generator_.generateInterfaceRequest("mediaRouter.mojom.MediaController", false);
    generated.observer = generator_.generateInterface("mediaRouter.mojom.MediaStatusObserver", false);
    return generated;
  };

  MediaRouteProvider_CreateMediaRouteController_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaController = mutator_.mutateInterfaceRequest(this.mediaController, "mediaRouter.mojom.MediaController", false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "mediaRouter.mojom.MediaStatusObserver", false);
    }
    return this;
  };
  MediaRouteProvider_CreateMediaRouteController_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.mediaController !== null) {
      Array.prototype.push.apply(handles, ["mediaRouter.mojom.MediaControllerRequest"]);
    }
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["mediaRouter.mojom.MediaStatusObserverPtr"]);
    }
    return handles;
  };

  MediaRouteProvider_CreateMediaRouteController_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_CreateMediaRouteController_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.mediaController = handles[idx++];;
    this.observer = handles[idx++];;
    return idx;
  };

  MediaRouteProvider_CreateMediaRouteController_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouteProvider_CreateMediaRouteController_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateMediaRouteController_Params.mediaController
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouteProvider_CreateMediaRouteController_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouteProvider_CreateMediaRouteController_Params.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouteProvider_CreateMediaRouteController_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_CreateMediaRouteController_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    val.mediaController = decoder.decodeStruct(codec.InterfaceRequest);
    val.observer = decoder.decodeStruct(new codec.Interface(media_status$.MediaStatusObserverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouteProvider_CreateMediaRouteController_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_CreateMediaRouteController_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
    encoder.encodeStruct(codec.InterfaceRequest, val.mediaController);
    encoder.encodeStruct(new codec.Interface(media_status$.MediaStatusObserverPtr), val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouteProvider_CreateMediaRouteController_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouteProvider_CreateMediaRouteController_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  MediaRouteProvider_CreateMediaRouteController_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouteProvider_CreateMediaRouteController_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouteProvider_CreateMediaRouteController_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  MediaRouteProvider_CreateMediaRouteController_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  MediaRouteProvider_CreateMediaRouteController_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouteProvider_CreateMediaRouteController_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouteProvider_CreateMediaRouteController_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouteProvider_CreateMediaRouteController_ResponseParams.validate = function(messageValidator, offset) {
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

  MediaRouteProvider_CreateMediaRouteController_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouteProvider_CreateMediaRouteController_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouteProvider_CreateMediaRouteController_ResponseParams();
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

  MediaRouteProvider_CreateMediaRouteController_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouteProvider_CreateMediaRouteController_ResponseParams.encodedSize);
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
  function MediaRouter_RegisterMediaRouteProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_RegisterMediaRouteProvider_Params.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.mediaRouterProvider = new MediaRouteProviderPtr();
  };
  MediaRouter_RegisterMediaRouteProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_RegisterMediaRouteProvider_Params.generate = function(generator_) {
    var generated = new MediaRouter_RegisterMediaRouteProvider_Params;
    generated.providerId = generator_.generateEnum(0, 3);
    generated.mediaRouterProvider = generator_.generateInterface("mediaRouter.mojom.MediaRouteProvider", false);
    return generated;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateEnum(this.providerId, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaRouterProvider = mutator_.mutateInterface(this.mediaRouterProvider, "mediaRouter.mojom.MediaRouteProvider", false);
    }
    return this;
  };
  MediaRouter_RegisterMediaRouteProvider_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.mediaRouterProvider !== null) {
      Array.prototype.push.apply(handles, ["mediaRouter.mojom.MediaRouteProviderPtr"]);
    }
    return handles;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_RegisterMediaRouteProvider_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.mediaRouterProvider = handles[idx++];;
    return idx;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_RegisterMediaRouteProvider_Params.providerId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaRouteProvider.Id);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_RegisterMediaRouteProvider_Params.mediaRouterProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_RegisterMediaRouteProvider_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_RegisterMediaRouteProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    val.mediaRouterProvider = decoder.decodeStruct(new codec.Interface(MediaRouteProviderPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouter_RegisterMediaRouteProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_RegisterMediaRouteProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.encodeStruct(new codec.Interface(MediaRouteProviderPtr), val.mediaRouterProvider);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouter_RegisterMediaRouteProvider_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.initDefaults_ = function() {
    this.instanceId = null;
    this.config = null;
  };
  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_RegisterMediaRouteProvider_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouter_RegisterMediaRouteProvider_ResponseParams;
    generated.instanceId = generator_.generateString(false);
    generated.config = generator_.generateStruct(mediaRouter.mojom.MediaRouteProviderConfig, false);
    return generated;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instanceId = mutator_.mutateString(this.instanceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.config = mutator_.mutateStruct(mediaRouter.mojom.MediaRouteProviderConfig, false);
    }
    return this;
  };
  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_RegisterMediaRouteProvider_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_RegisterMediaRouteProvider_ResponseParams.instanceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_RegisterMediaRouteProvider_ResponseParams.config
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, MediaRouteProviderConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_RegisterMediaRouteProvider_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instanceId = decoder.decodeStruct(codec.String);
    val.config = decoder.decodeStructPointer(MediaRouteProviderConfig);
    return val;
  };

  MediaRouter_RegisterMediaRouteProvider_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instanceId);
    encoder.encodeStructPointer(MediaRouteProviderConfig, val.config);
  };
  function MediaRouter_OnSinksReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnSinksReceived_Params.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.mediaSource = null;
    this.sinks = null;
    this.origins = null;
  };
  MediaRouter_OnSinksReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnSinksReceived_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnSinksReceived_Params;
    generated.providerId = generator_.generateEnum(0, 3);
    generated.mediaSource = generator_.generateString(false);
    generated.sinks = generator_.generateArray(function() {
      return generator_.generateStruct(mediaRouter.mojom.MediaSink, false);
    });
    generated.origins = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Origin, false);
    });
    return generated;
  };

  MediaRouter_OnSinksReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateEnum(this.providerId, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sinks = mutator_.mutateArray(this.sinks, function(val) {
        return mutator_.mutateStruct(mediaRouter.mojom.MediaSink, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.origins = mutator_.mutateArray(this.origins, function(val) {
        return mutator_.mutateStruct(url.mojom.Origin, false);
      });
    }
    return this;
  };
  MediaRouter_OnSinksReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnSinksReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnSinksReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnSinksReceived_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnSinksReceived_Params.providerId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaRouteProvider.Id);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnSinksReceived_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnSinksReceived_Params.sinks
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(MediaSink), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnSinksReceived_Params.origins
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(origin$.Origin), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnSinksReceived_Params.encodedSize = codec.kStructHeaderSize + 32;

  MediaRouter_OnSinksReceived_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnSinksReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mediaSource = decoder.decodeStruct(codec.String);
    val.sinks = decoder.decodeArrayPointer(new codec.PointerTo(MediaSink));
    val.origins = decoder.decodeArrayPointer(new codec.PointerTo(origin$.Origin));
    return val;
  };

  MediaRouter_OnSinksReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnSinksReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.mediaSource);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaSink), val.sinks);
    encoder.encodeArrayPointer(new codec.PointerTo(origin$.Origin), val.origins);
  };
  function MediaRouter_OnIssue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnIssue_Params.prototype.initDefaults_ = function() {
    this.issue = null;
  };
  MediaRouter_OnIssue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnIssue_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnIssue_Params;
    generated.issue = generator_.generateStruct(mediaRouter.mojom.Issue, false);
    return generated;
  };

  MediaRouter_OnIssue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.issue = mutator_.mutateStruct(mediaRouter.mojom.Issue, false);
    }
    return this;
  };
  MediaRouter_OnIssue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnIssue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnIssue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnIssue_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnIssue_Params.issue
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Issue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnIssue_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_OnIssue_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnIssue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.issue = decoder.decodeStructPointer(Issue);
    return val;
  };

  MediaRouter_OnIssue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnIssue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Issue, val.issue);
  };
  function MediaRouter_OnRoutesUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnRoutesUpdated_Params.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.routes = null;
    this.mediaSource = null;
    this.joinableRouteIds = null;
  };
  MediaRouter_OnRoutesUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnRoutesUpdated_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnRoutesUpdated_Params;
    generated.providerId = generator_.generateEnum(0, 3);
    generated.routes = generator_.generateArray(function() {
      return generator_.generateStruct(mediaRouter.mojom.MediaRoute, false);
    });
    generated.mediaSource = generator_.generateString(false);
    generated.joinableRouteIds = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  MediaRouter_OnRoutesUpdated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateEnum(this.providerId, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.routes = mutator_.mutateArray(this.routes, function(val) {
        return mutator_.mutateStruct(mediaRouter.mojom.MediaRoute, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.mediaSource = mutator_.mutateString(this.mediaSource, false);
    }
    if (mutator_.chooseMutateField()) {
      this.joinableRouteIds = mutator_.mutateArray(this.joinableRouteIds, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  MediaRouter_OnRoutesUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnRoutesUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnRoutesUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnRoutesUpdated_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnRoutesUpdated_Params.providerId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaRouteProvider.Id);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnRoutesUpdated_Params.routes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(MediaRoute), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnRoutesUpdated_Params.mediaSource
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnRoutesUpdated_Params.joinableRouteIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnRoutesUpdated_Params.encodedSize = codec.kStructHeaderSize + 32;

  MediaRouter_OnRoutesUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnRoutesUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.routes = decoder.decodeArrayPointer(new codec.PointerTo(MediaRoute));
    val.mediaSource = decoder.decodeStruct(codec.String);
    val.joinableRouteIds = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  MediaRouter_OnRoutesUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnRoutesUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaRoute), val.routes);
    encoder.encodeStruct(codec.String, val.mediaSource);
    encoder.encodeArrayPointer(codec.String, val.joinableRouteIds);
  };
  function MediaRouter_OnSinkAvailabilityUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.availability = 0;
  };
  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnSinkAvailabilityUpdated_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnSinkAvailabilityUpdated_Params;
    generated.providerId = generator_.generateEnum(0, 3);
    generated.availability = generator_.generateEnum(0, 2);
    return generated;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateEnum(this.providerId, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.availability = mutator_.mutateEnum(this.availability, 0, 2);
    }
    return this;
  };
  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnSinkAvailabilityUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnSinkAvailabilityUpdated_Params.providerId
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, MediaRouteProvider.Id);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnSinkAvailabilityUpdated_Params.availability
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, MediaRouter.SinkAvailability);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_OnSinkAvailabilityUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnSinkAvailabilityUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    val.availability = decoder.decodeStruct(codec.Int32);
    return val;
  };

  MediaRouter_OnSinkAvailabilityUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.encodeStruct(codec.Int32, val.availability);
  };
  function MediaRouter_OnPresentationConnectionStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
    this.state = 0;
  };
  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnPresentationConnectionStateChanged_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnPresentationConnectionStateChanged_Params;
    generated.routeId = generator_.generateString(false);
    generated.state = generator_.generateEnum(0, 3);
    return generated;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 3);
    }
    return this;
  };
  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnPresentationConnectionStateChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnPresentationConnectionStateChanged_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnPresentationConnectionStateChanged_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, MediaRouter.PresentationConnectionState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_OnPresentationConnectionStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnPresentationConnectionStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaRouter_OnPresentationConnectionStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaRouter_OnPresentationConnectionClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnPresentationConnectionClosed_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
    this.reason = 0;
    this.message = null;
  };
  MediaRouter_OnPresentationConnectionClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnPresentationConnectionClosed_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnPresentationConnectionClosed_Params;
    generated.routeId = generator_.generateString(false);
    generated.reason = generator_.generateEnum(0, 2);
    generated.message = generator_.generateString(false);
    return generated;
  };

  MediaRouter_OnPresentationConnectionClosed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  MediaRouter_OnPresentationConnectionClosed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnPresentationConnectionClosed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnPresentationConnectionClosed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnPresentationConnectionClosed_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnPresentationConnectionClosed_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnPresentationConnectionClosed_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, MediaRouter.PresentationConnectionCloseReason);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnPresentationConnectionClosed_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnPresentationConnectionClosed_Params.encodedSize = codec.kStructHeaderSize + 24;

  MediaRouter_OnPresentationConnectionClosed_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnPresentationConnectionClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouter_OnPresentationConnectionClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnPresentationConnectionClosed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function MediaRouter_OnRouteMessagesReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnRouteMessagesReceived_Params.prototype.initDefaults_ = function() {
    this.routeId = null;
    this.messages = null;
  };
  MediaRouter_OnRouteMessagesReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnRouteMessagesReceived_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnRouteMessagesReceived_Params;
    generated.routeId = generator_.generateString(false);
    generated.messages = generator_.generateArray(function() {
      return generator_.generateStruct(mediaRouter.mojom.RouteMessage, false);
    });
    return generated;
  };

  MediaRouter_OnRouteMessagesReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateString(this.routeId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.messages = mutator_.mutateArray(this.messages, function(val) {
        return mutator_.mutateStruct(mediaRouter.mojom.RouteMessage, false);
      });
    }
    return this;
  };
  MediaRouter_OnRouteMessagesReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_OnRouteMessagesReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnRouteMessagesReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_OnRouteMessagesReceived_Params.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_OnRouteMessagesReceived_Params.routeId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnRouteMessagesReceived_Params.messages
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(RouteMessage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnRouteMessagesReceived_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_OnRouteMessagesReceived_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnRouteMessagesReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.String);
    val.messages = decoder.decodeArrayPointer(new codec.PointerTo(RouteMessage));
    return val;
  };

  MediaRouter_OnRouteMessagesReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnRouteMessagesReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.routeId);
    encoder.encodeArrayPointer(new codec.PointerTo(RouteMessage), val.messages);
  };
  function MediaRouter_OnMediaRemoterCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_OnMediaRemoterCreated_Params.prototype.initDefaults_ = function() {
    this.tabId = 0;
    this.remoter = new mirror_service_remoting$.MirrorServiceRemoterPtr();
    this.remotingSource = new bindings.InterfaceRequest();
  };
  MediaRouter_OnMediaRemoterCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_OnMediaRemoterCreated_Params.generate = function(generator_) {
    var generated = new MediaRouter_OnMediaRemoterCreated_Params;
    generated.tabId = generator_.generateInt32();
    generated.remoter = generator_.generateInterface("media.mojom.MirrorServiceRemoter", false);
    generated.remotingSource = generator_.generateInterfaceRequest("media.mojom.MirrorServiceRemotingSource", false);
    return generated;
  };

  MediaRouter_OnMediaRemoterCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.remoter = mutator_.mutateInterface(this.remoter, "media.mojom.MirrorServiceRemoter", false);
    }
    if (mutator_.chooseMutateField()) {
      this.remotingSource = mutator_.mutateInterfaceRequest(this.remotingSource, "media.mojom.MirrorServiceRemotingSource", false);
    }
    return this;
  };
  MediaRouter_OnMediaRemoterCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.remoter !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.MirrorServiceRemoterPtr"]);
    }
    if (this.remotingSource !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.MirrorServiceRemotingSourceRequest"]);
    }
    return handles;
  };

  MediaRouter_OnMediaRemoterCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_OnMediaRemoterCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.remoter = handles[idx++];;
    this.remotingSource = handles[idx++];;
    return idx;
  };

  MediaRouter_OnMediaRemoterCreated_Params.validate = function(messageValidator, offset) {
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



    // validate MediaRouter_OnMediaRemoterCreated_Params.remoter
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaRouter_OnMediaRemoterCreated_Params.remotingSource
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_OnMediaRemoterCreated_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaRouter_OnMediaRemoterCreated_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_OnMediaRemoterCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tabId = decoder.decodeStruct(codec.Int32);
    val.remoter = decoder.decodeStruct(new codec.Interface(mirror_service_remoting$.MirrorServiceRemoterPtr));
    val.remotingSource = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  MediaRouter_OnMediaRemoterCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_OnMediaRemoterCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.tabId);
    encoder.encodeStruct(new codec.Interface(mirror_service_remoting$.MirrorServiceRemoterPtr), val.remoter);
    encoder.encodeStruct(codec.InterfaceRequest, val.remotingSource);
  };
  function MediaRouter_GetMediaSinkServiceStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_GetMediaSinkServiceStatus_Params.prototype.initDefaults_ = function() {
  };
  MediaRouter_GetMediaSinkServiceStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_GetMediaSinkServiceStatus_Params.generate = function(generator_) {
    var generated = new MediaRouter_GetMediaSinkServiceStatus_Params;
    return generated;
  };

  MediaRouter_GetMediaSinkServiceStatus_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaRouter_GetMediaSinkServiceStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_GetMediaSinkServiceStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_GetMediaSinkServiceStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_GetMediaSinkServiceStatus_Params.validate = function(messageValidator, offset) {
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

  MediaRouter_GetMediaSinkServiceStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaRouter_GetMediaSinkServiceStatus_Params.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_GetMediaSinkServiceStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaRouter_GetMediaSinkServiceStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_GetMediaSinkServiceStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaRouter_GetMediaSinkServiceStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.status = null;
  };
  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.generate = function(generator_) {
    var generated = new MediaRouter_GetMediaSinkServiceStatus_ResponseParams;
    generated.status = generator_.generateString(false);
    return generated;
  };

  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateString(this.status, false);
    }
    return this;
  };
  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaRouter_GetMediaSinkServiceStatus_ResponseParams.status
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaRouter_GetMediaSinkServiceStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.String);
    return val;
  };

  MediaRouter_GetMediaSinkServiceStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaRouter_GetMediaSinkServiceStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.status);
  };

  function MediaSinkExtraData(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  MediaSinkExtraData.Tags = {
    dialMediaSink: 0,
    castMediaSink: 1,
  };

  MediaSinkExtraData.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  MediaSinkExtraData.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "dialMediaSink",
        "castMediaSink",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a MediaSinkExtraData member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  MediaSinkExtraData.generate = function(generator_) {
    var generated = new MediaSinkExtraData;
    var generators = [
      {
        field: "dialMediaSink",

        generator: function() { return generator_.generateStruct(mediaRouter.mojom.DialMediaSink, false); },
      },
      {
        field: "castMediaSink",

        generator: function() { return generator_.generateStruct(mediaRouter.mojom.CastMediaSink, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  MediaSinkExtraData.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "dialMediaSink",

        mutator: function() { return mutator_.mutateStruct(mediaRouter.mojom.DialMediaSink, false); },
      },
      {
        field: "castMediaSink",

        mutator: function() { return mutator_.mutateStruct(mediaRouter.mojom.CastMediaSink, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  MediaSinkExtraData.prototype.getHandleDeps = function() {
    return [];
  }
  MediaSinkExtraData.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(MediaSinkExtraData.prototype, "dialMediaSink", {
    get: function() {
      if (this.$tag != MediaSinkExtraData.Tags.dialMediaSink) {
        throw new ReferenceError(
            "MediaSinkExtraData.dialMediaSink is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = MediaSinkExtraData.Tags.dialMediaSink;
      this.$data = value;
    }
  });
  Object.defineProperty(MediaSinkExtraData.prototype, "castMediaSink", {
    get: function() {
      if (this.$tag != MediaSinkExtraData.Tags.castMediaSink) {
        throw new ReferenceError(
            "MediaSinkExtraData.castMediaSink is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = MediaSinkExtraData.Tags.castMediaSink;
      this.$data = value;
    }
  });


    MediaSinkExtraData.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case MediaSinkExtraData.Tags.dialMediaSink:
          encoder.encodeStructPointer(DialMediaSink, val.dialMediaSink);
          break;
        case MediaSinkExtraData.Tags.castMediaSink:
          encoder.encodeStructPointer(CastMediaSink, val.castMediaSink);
          break;
      }
      encoder.align();
    };


    MediaSinkExtraData.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new MediaSinkExtraData();
      var tag = decoder.readUint32();
      switch (tag) {
        case MediaSinkExtraData.Tags.dialMediaSink:
          result.dialMediaSink = decoder.decodeStructPointer(DialMediaSink);
          break;
        case MediaSinkExtraData.Tags.castMediaSink:
          result.castMediaSink = decoder.decodeStructPointer(CastMediaSink);
          break;
      }
      decoder.align();

      return result;
    };


    MediaSinkExtraData.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case MediaSinkExtraData.Tags.dialMediaSink:
          

    // validate MediaSinkExtraData.dialMediaSink
    err = messageValidator.validateStructPointer(data_offset, DialMediaSink, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case MediaSinkExtraData.Tags.castMediaSink:
          

    // validate MediaSinkExtraData.castMediaSink
    err = messageValidator.validateStructPointer(data_offset, CastMediaSink, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  MediaSinkExtraData.encodedSize = 16;
  var kMediaRouteProvider_CreateRoute_Name = 346059826;
  var kMediaRouteProvider_JoinRoute_Name = 1634581121;
  var kMediaRouteProvider_ConnectRouteByRouteId_Name = 931809421;
  var kMediaRouteProvider_TerminateRoute_Name = 1215468733;
  var kMediaRouteProvider_SendRouteMessage_Name = 1566672344;
  var kMediaRouteProvider_SendRouteBinaryMessage_Name = 1700479493;
  var kMediaRouteProvider_StartObservingMediaSinks_Name = 884455874;
  var kMediaRouteProvider_StopObservingMediaSinks_Name = 1623962878;
  var kMediaRouteProvider_StartObservingMediaRoutes_Name = 1075945847;
  var kMediaRouteProvider_StopObservingMediaRoutes_Name = 1294341778;
  var kMediaRouteProvider_StartListeningForRouteMessages_Name = 810430649;
  var kMediaRouteProvider_StopListeningForRouteMessages_Name = 1622692681;
  var kMediaRouteProvider_DetachRoute_Name = 780549444;
  var kMediaRouteProvider_EnableMdnsDiscovery_Name = 772102009;
  var kMediaRouteProvider_UpdateMediaSinks_Name = 1022068689;
  var kMediaRouteProvider_SearchSinks_Name = 451966715;
  var kMediaRouteProvider_ProvideSinks_Name = 869677498;
  var kMediaRouteProvider_CreateMediaRouteController_Name = 1059821624;

  function MediaRouteProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaRouteProvider,
                                                   handleOrPtrInfo);
  }

  function MediaRouteProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaRouteProvider, associatedInterfacePtrInfo);
  }

  MediaRouteProviderAssociatedPtr.prototype =
      Object.create(MediaRouteProviderPtr.prototype);
  MediaRouteProviderAssociatedPtr.prototype.constructor =
      MediaRouteProviderAssociatedPtr;

  function MediaRouteProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaRouteProviderPtr.prototype.createRoute = function() {
    return MediaRouteProviderProxy.prototype.createRoute
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.createRoute = function(mediaSource, sinkId, originalPresentationId, origin, tabId, timeout, incognito) {
    var params_ = new MediaRouteProvider_CreateRoute_Params();
    params_.mediaSource = mediaSource;
    params_.sinkId = sinkId;
    params_.originalPresentationId = originalPresentationId;
    params_.origin = origin;
    params_.tabId = tabId;
    params_.timeout = timeout;
    params_.incognito = incognito;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_CreateRoute_Name,
          codec.align(MediaRouteProvider_CreateRoute_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_CreateRoute_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_CreateRoute_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.joinRoute = function() {
    return MediaRouteProviderProxy.prototype.joinRoute
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.joinRoute = function(mediaSource, presentationId, origin, tabId, timeout, incognito) {
    var params_ = new MediaRouteProvider_JoinRoute_Params();
    params_.mediaSource = mediaSource;
    params_.presentationId = presentationId;
    params_.origin = origin;
    params_.tabId = tabId;
    params_.timeout = timeout;
    params_.incognito = incognito;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_JoinRoute_Name,
          codec.align(MediaRouteProvider_JoinRoute_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_JoinRoute_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_JoinRoute_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.connectRouteByRouteId = function() {
    return MediaRouteProviderProxy.prototype.connectRouteByRouteId
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.connectRouteByRouteId = function(mediaSource, routeId, presentationId, origin, tabId, timeout, incognito) {
    var params_ = new MediaRouteProvider_ConnectRouteByRouteId_Params();
    params_.mediaSource = mediaSource;
    params_.routeId = routeId;
    params_.presentationId = presentationId;
    params_.origin = origin;
    params_.tabId = tabId;
    params_.timeout = timeout;
    params_.incognito = incognito;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_ConnectRouteByRouteId_Name,
          codec.align(MediaRouteProvider_ConnectRouteByRouteId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_ConnectRouteByRouteId_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.terminateRoute = function() {
    return MediaRouteProviderProxy.prototype.terminateRoute
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.terminateRoute = function(routeId) {
    var params_ = new MediaRouteProvider_TerminateRoute_Params();
    params_.routeId = routeId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_TerminateRoute_Name,
          codec.align(MediaRouteProvider_TerminateRoute_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_TerminateRoute_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_TerminateRoute_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.sendRouteMessage = function() {
    return MediaRouteProviderProxy.prototype.sendRouteMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.sendRouteMessage = function(mediaRouteId, message) {
    var params_ = new MediaRouteProvider_SendRouteMessage_Params();
    params_.mediaRouteId = mediaRouteId;
    params_.message = message;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_SendRouteMessage_Name,
          codec.align(MediaRouteProvider_SendRouteMessage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_SendRouteMessage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_SendRouteMessage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.sendRouteBinaryMessage = function() {
    return MediaRouteProviderProxy.prototype.sendRouteBinaryMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.sendRouteBinaryMessage = function(mediaRouteId, data) {
    var params_ = new MediaRouteProvider_SendRouteBinaryMessage_Params();
    params_.mediaRouteId = mediaRouteId;
    params_.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_SendRouteBinaryMessage_Name,
          codec.align(MediaRouteProvider_SendRouteBinaryMessage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_SendRouteBinaryMessage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.startObservingMediaSinks = function() {
    return MediaRouteProviderProxy.prototype.startObservingMediaSinks
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.startObservingMediaSinks = function(mediaSource) {
    var params_ = new MediaRouteProvider_StartObservingMediaSinks_Params();
    params_.mediaSource = mediaSource;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_StartObservingMediaSinks_Name,
        codec.align(MediaRouteProvider_StartObservingMediaSinks_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StartObservingMediaSinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.stopObservingMediaSinks = function() {
    return MediaRouteProviderProxy.prototype.stopObservingMediaSinks
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.stopObservingMediaSinks = function(mediaSource) {
    var params_ = new MediaRouteProvider_StopObservingMediaSinks_Params();
    params_.mediaSource = mediaSource;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_StopObservingMediaSinks_Name,
        codec.align(MediaRouteProvider_StopObservingMediaSinks_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StopObservingMediaSinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.startObservingMediaRoutes = function() {
    return MediaRouteProviderProxy.prototype.startObservingMediaRoutes
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.startObservingMediaRoutes = function(mediaSource) {
    var params_ = new MediaRouteProvider_StartObservingMediaRoutes_Params();
    params_.mediaSource = mediaSource;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_StartObservingMediaRoutes_Name,
        codec.align(MediaRouteProvider_StartObservingMediaRoutes_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StartObservingMediaRoutes_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.stopObservingMediaRoutes = function() {
    return MediaRouteProviderProxy.prototype.stopObservingMediaRoutes
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.stopObservingMediaRoutes = function(mediaSource) {
    var params_ = new MediaRouteProvider_StopObservingMediaRoutes_Params();
    params_.mediaSource = mediaSource;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_StopObservingMediaRoutes_Name,
        codec.align(MediaRouteProvider_StopObservingMediaRoutes_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StopObservingMediaRoutes_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.startListeningForRouteMessages = function() {
    return MediaRouteProviderProxy.prototype.startListeningForRouteMessages
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.startListeningForRouteMessages = function(routeId) {
    var params_ = new MediaRouteProvider_StartListeningForRouteMessages_Params();
    params_.routeId = routeId;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_StartListeningForRouteMessages_Name,
        codec.align(MediaRouteProvider_StartListeningForRouteMessages_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StartListeningForRouteMessages_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.stopListeningForRouteMessages = function() {
    return MediaRouteProviderProxy.prototype.stopListeningForRouteMessages
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.stopListeningForRouteMessages = function(routeId) {
    var params_ = new MediaRouteProvider_StopListeningForRouteMessages_Params();
    params_.routeId = routeId;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_StopListeningForRouteMessages_Name,
        codec.align(MediaRouteProvider_StopListeningForRouteMessages_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_StopListeningForRouteMessages_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.detachRoute = function() {
    return MediaRouteProviderProxy.prototype.detachRoute
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.detachRoute = function(routeId) {
    var params_ = new MediaRouteProvider_DetachRoute_Params();
    params_.routeId = routeId;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_DetachRoute_Name,
        codec.align(MediaRouteProvider_DetachRoute_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_DetachRoute_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.enableMdnsDiscovery = function() {
    return MediaRouteProviderProxy.prototype.enableMdnsDiscovery
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.enableMdnsDiscovery = function() {
    var params_ = new MediaRouteProvider_EnableMdnsDiscovery_Params();
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_EnableMdnsDiscovery_Name,
        codec.align(MediaRouteProvider_EnableMdnsDiscovery_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_EnableMdnsDiscovery_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.updateMediaSinks = function() {
    return MediaRouteProviderProxy.prototype.updateMediaSinks
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.updateMediaSinks = function(mediaSource) {
    var params_ = new MediaRouteProvider_UpdateMediaSinks_Params();
    params_.mediaSource = mediaSource;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_UpdateMediaSinks_Name,
        codec.align(MediaRouteProvider_UpdateMediaSinks_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_UpdateMediaSinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.searchSinks = function() {
    return MediaRouteProviderProxy.prototype.searchSinks
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.searchSinks = function(sinkId, mediaSource, searchCriteria) {
    var params_ = new MediaRouteProvider_SearchSinks_Params();
    params_.sinkId = sinkId;
    params_.mediaSource = mediaSource;
    params_.searchCriteria = searchCriteria;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_SearchSinks_Name,
          codec.align(MediaRouteProvider_SearchSinks_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_SearchSinks_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_SearchSinks_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouteProviderPtr.prototype.provideSinks = function() {
    return MediaRouteProviderProxy.prototype.provideSinks
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.provideSinks = function(providerName, sinks) {
    var params_ = new MediaRouteProvider_ProvideSinks_Params();
    params_.providerName = providerName;
    params_.sinks = sinks;
    var builder = new codec.MessageV0Builder(
        kMediaRouteProvider_ProvideSinks_Name,
        codec.align(MediaRouteProvider_ProvideSinks_Params.encodedSize));
    builder.encodeStruct(MediaRouteProvider_ProvideSinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouteProviderPtr.prototype.createMediaRouteController = function() {
    return MediaRouteProviderProxy.prototype.createMediaRouteController
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouteProviderProxy.prototype.createMediaRouteController = function(routeId, mediaController, observer) {
    var params_ = new MediaRouteProvider_CreateMediaRouteController_Params();
    params_.routeId = routeId;
    params_.mediaController = mediaController;
    params_.observer = observer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouteProvider_CreateMediaRouteController_Name,
          codec.align(MediaRouteProvider_CreateMediaRouteController_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouteProvider_CreateMediaRouteController_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouteProvider_CreateMediaRouteController_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaRouteProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaRouteProviderStub.prototype.createRoute = function(mediaSource, sinkId, originalPresentationId, origin, tabId, timeout, incognito) {
    return this.delegate_ && this.delegate_.createRoute && this.delegate_.createRoute(mediaSource, sinkId, originalPresentationId, origin, tabId, timeout, incognito);
  }
  MediaRouteProviderStub.prototype.joinRoute = function(mediaSource, presentationId, origin, tabId, timeout, incognito) {
    return this.delegate_ && this.delegate_.joinRoute && this.delegate_.joinRoute(mediaSource, presentationId, origin, tabId, timeout, incognito);
  }
  MediaRouteProviderStub.prototype.connectRouteByRouteId = function(mediaSource, routeId, presentationId, origin, tabId, timeout, incognito) {
    return this.delegate_ && this.delegate_.connectRouteByRouteId && this.delegate_.connectRouteByRouteId(mediaSource, routeId, presentationId, origin, tabId, timeout, incognito);
  }
  MediaRouteProviderStub.prototype.terminateRoute = function(routeId) {
    return this.delegate_ && this.delegate_.terminateRoute && this.delegate_.terminateRoute(routeId);
  }
  MediaRouteProviderStub.prototype.sendRouteMessage = function(mediaRouteId, message) {
    return this.delegate_ && this.delegate_.sendRouteMessage && this.delegate_.sendRouteMessage(mediaRouteId, message);
  }
  MediaRouteProviderStub.prototype.sendRouteBinaryMessage = function(mediaRouteId, data) {
    return this.delegate_ && this.delegate_.sendRouteBinaryMessage && this.delegate_.sendRouteBinaryMessage(mediaRouteId, data);
  }
  MediaRouteProviderStub.prototype.startObservingMediaSinks = function(mediaSource) {
    return this.delegate_ && this.delegate_.startObservingMediaSinks && this.delegate_.startObservingMediaSinks(mediaSource);
  }
  MediaRouteProviderStub.prototype.stopObservingMediaSinks = function(mediaSource) {
    return this.delegate_ && this.delegate_.stopObservingMediaSinks && this.delegate_.stopObservingMediaSinks(mediaSource);
  }
  MediaRouteProviderStub.prototype.startObservingMediaRoutes = function(mediaSource) {
    return this.delegate_ && this.delegate_.startObservingMediaRoutes && this.delegate_.startObservingMediaRoutes(mediaSource);
  }
  MediaRouteProviderStub.prototype.stopObservingMediaRoutes = function(mediaSource) {
    return this.delegate_ && this.delegate_.stopObservingMediaRoutes && this.delegate_.stopObservingMediaRoutes(mediaSource);
  }
  MediaRouteProviderStub.prototype.startListeningForRouteMessages = function(routeId) {
    return this.delegate_ && this.delegate_.startListeningForRouteMessages && this.delegate_.startListeningForRouteMessages(routeId);
  }
  MediaRouteProviderStub.prototype.stopListeningForRouteMessages = function(routeId) {
    return this.delegate_ && this.delegate_.stopListeningForRouteMessages && this.delegate_.stopListeningForRouteMessages(routeId);
  }
  MediaRouteProviderStub.prototype.detachRoute = function(routeId) {
    return this.delegate_ && this.delegate_.detachRoute && this.delegate_.detachRoute(routeId);
  }
  MediaRouteProviderStub.prototype.enableMdnsDiscovery = function() {
    return this.delegate_ && this.delegate_.enableMdnsDiscovery && this.delegate_.enableMdnsDiscovery();
  }
  MediaRouteProviderStub.prototype.updateMediaSinks = function(mediaSource) {
    return this.delegate_ && this.delegate_.updateMediaSinks && this.delegate_.updateMediaSinks(mediaSource);
  }
  MediaRouteProviderStub.prototype.searchSinks = function(sinkId, mediaSource, searchCriteria) {
    return this.delegate_ && this.delegate_.searchSinks && this.delegate_.searchSinks(sinkId, mediaSource, searchCriteria);
  }
  MediaRouteProviderStub.prototype.provideSinks = function(providerName, sinks) {
    return this.delegate_ && this.delegate_.provideSinks && this.delegate_.provideSinks(providerName, sinks);
  }
  MediaRouteProviderStub.prototype.createMediaRouteController = function(routeId, mediaController, observer) {
    return this.delegate_ && this.delegate_.createMediaRouteController && this.delegate_.createMediaRouteController(routeId, mediaController, observer);
  }

  MediaRouteProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouteProvider_StartObservingMediaSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StartObservingMediaSinks_Params);
      this.startObservingMediaSinks(params.mediaSource);
      return true;
    case kMediaRouteProvider_StopObservingMediaSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StopObservingMediaSinks_Params);
      this.stopObservingMediaSinks(params.mediaSource);
      return true;
    case kMediaRouteProvider_StartObservingMediaRoutes_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StartObservingMediaRoutes_Params);
      this.startObservingMediaRoutes(params.mediaSource);
      return true;
    case kMediaRouteProvider_StopObservingMediaRoutes_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StopObservingMediaRoutes_Params);
      this.stopObservingMediaRoutes(params.mediaSource);
      return true;
    case kMediaRouteProvider_StartListeningForRouteMessages_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StartListeningForRouteMessages_Params);
      this.startListeningForRouteMessages(params.routeId);
      return true;
    case kMediaRouteProvider_StopListeningForRouteMessages_Name:
      var params = reader.decodeStruct(MediaRouteProvider_StopListeningForRouteMessages_Params);
      this.stopListeningForRouteMessages(params.routeId);
      return true;
    case kMediaRouteProvider_DetachRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_DetachRoute_Params);
      this.detachRoute(params.routeId);
      return true;
    case kMediaRouteProvider_EnableMdnsDiscovery_Name:
      var params = reader.decodeStruct(MediaRouteProvider_EnableMdnsDiscovery_Params);
      this.enableMdnsDiscovery();
      return true;
    case kMediaRouteProvider_UpdateMediaSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_UpdateMediaSinks_Params);
      this.updateMediaSinks(params.mediaSource);
      return true;
    case kMediaRouteProvider_ProvideSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_ProvideSinks_Params);
      this.provideSinks(params.providerName, params.sinks);
      return true;
    default:
      return false;
    }
  };

  MediaRouteProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouteProvider_CreateRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_CreateRoute_Params);
      this.createRoute(params.mediaSource, params.sinkId, params.originalPresentationId, params.origin, params.tabId, params.timeout, params.incognito).then(function(response) {
        var responseParams =
            new MediaRouteProvider_CreateRoute_ResponseParams();
        responseParams.route = response.route;
        responseParams.errorText = response.errorText;
        responseParams.resultCode = response.resultCode;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_CreateRoute_Name,
            codec.align(MediaRouteProvider_CreateRoute_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_CreateRoute_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_JoinRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_JoinRoute_Params);
      this.joinRoute(params.mediaSource, params.presentationId, params.origin, params.tabId, params.timeout, params.incognito).then(function(response) {
        var responseParams =
            new MediaRouteProvider_JoinRoute_ResponseParams();
        responseParams.route = response.route;
        responseParams.errorText = response.errorText;
        responseParams.resultCode = response.resultCode;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_JoinRoute_Name,
            codec.align(MediaRouteProvider_JoinRoute_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_JoinRoute_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_ConnectRouteByRouteId_Name:
      var params = reader.decodeStruct(MediaRouteProvider_ConnectRouteByRouteId_Params);
      this.connectRouteByRouteId(params.mediaSource, params.routeId, params.presentationId, params.origin, params.tabId, params.timeout, params.incognito).then(function(response) {
        var responseParams =
            new MediaRouteProvider_ConnectRouteByRouteId_ResponseParams();
        responseParams.route = response.route;
        responseParams.errorText = response.errorText;
        responseParams.resultCode = response.resultCode;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_ConnectRouteByRouteId_Name,
            codec.align(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_TerminateRoute_Name:
      var params = reader.decodeStruct(MediaRouteProvider_TerminateRoute_Params);
      this.terminateRoute(params.routeId).then(function(response) {
        var responseParams =
            new MediaRouteProvider_TerminateRoute_ResponseParams();
        responseParams.errorText = response.errorText;
        responseParams.resultCode = response.resultCode;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_TerminateRoute_Name,
            codec.align(MediaRouteProvider_TerminateRoute_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_TerminateRoute_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_SendRouteMessage_Name:
      var params = reader.decodeStruct(MediaRouteProvider_SendRouteMessage_Params);
      this.sendRouteMessage(params.mediaRouteId, params.message).then(function(response) {
        var responseParams =
            new MediaRouteProvider_SendRouteMessage_ResponseParams();
        responseParams.sent = response.sent;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_SendRouteMessage_Name,
            codec.align(MediaRouteProvider_SendRouteMessage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_SendRouteMessage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_SendRouteBinaryMessage_Name:
      var params = reader.decodeStruct(MediaRouteProvider_SendRouteBinaryMessage_Params);
      this.sendRouteBinaryMessage(params.mediaRouteId, params.data).then(function(response) {
        var responseParams =
            new MediaRouteProvider_SendRouteBinaryMessage_ResponseParams();
        responseParams.sent = response.sent;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_SendRouteBinaryMessage_Name,
            codec.align(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_SearchSinks_Name:
      var params = reader.decodeStruct(MediaRouteProvider_SearchSinks_Params);
      this.searchSinks(params.sinkId, params.mediaSource, params.searchCriteria).then(function(response) {
        var responseParams =
            new MediaRouteProvider_SearchSinks_ResponseParams();
        responseParams.sinkId = response.sinkId;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_SearchSinks_Name,
            codec.align(MediaRouteProvider_SearchSinks_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_SearchSinks_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouteProvider_CreateMediaRouteController_Name:
      var params = reader.decodeStruct(MediaRouteProvider_CreateMediaRouteController_Params);
      this.createMediaRouteController(params.routeId, params.mediaController, params.observer).then(function(response) {
        var responseParams =
            new MediaRouteProvider_CreateMediaRouteController_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kMediaRouteProvider_CreateMediaRouteController_Name,
            codec.align(MediaRouteProvider_CreateMediaRouteController_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouteProvider_CreateMediaRouteController_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaRouteProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaRouteProvider_CreateRoute_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_CreateRoute_Params;
      break;
      case kMediaRouteProvider_JoinRoute_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_JoinRoute_Params;
      break;
      case kMediaRouteProvider_ConnectRouteByRouteId_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_ConnectRouteByRouteId_Params;
      break;
      case kMediaRouteProvider_TerminateRoute_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_TerminateRoute_Params;
      break;
      case kMediaRouteProvider_SendRouteMessage_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_SendRouteMessage_Params;
      break;
      case kMediaRouteProvider_SendRouteBinaryMessage_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_SendRouteBinaryMessage_Params;
      break;
      case kMediaRouteProvider_StartObservingMediaSinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StartObservingMediaSinks_Params;
      break;
      case kMediaRouteProvider_StopObservingMediaSinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StopObservingMediaSinks_Params;
      break;
      case kMediaRouteProvider_StartObservingMediaRoutes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StartObservingMediaRoutes_Params;
      break;
      case kMediaRouteProvider_StopObservingMediaRoutes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StopObservingMediaRoutes_Params;
      break;
      case kMediaRouteProvider_StartListeningForRouteMessages_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StartListeningForRouteMessages_Params;
      break;
      case kMediaRouteProvider_StopListeningForRouteMessages_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_StopListeningForRouteMessages_Params;
      break;
      case kMediaRouteProvider_DetachRoute_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_DetachRoute_Params;
      break;
      case kMediaRouteProvider_EnableMdnsDiscovery_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_EnableMdnsDiscovery_Params;
      break;
      case kMediaRouteProvider_UpdateMediaSinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_UpdateMediaSinks_Params;
      break;
      case kMediaRouteProvider_SearchSinks_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_SearchSinks_Params;
      break;
      case kMediaRouteProvider_ProvideSinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouteProvider_ProvideSinks_Params;
      break;
      case kMediaRouteProvider_CreateMediaRouteController_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouteProvider_CreateMediaRouteController_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaRouteProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaRouteProvider_CreateRoute_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_CreateRoute_ResponseParams;
        break;
      case kMediaRouteProvider_JoinRoute_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_JoinRoute_ResponseParams;
        break;
      case kMediaRouteProvider_ConnectRouteByRouteId_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_ConnectRouteByRouteId_ResponseParams;
        break;
      case kMediaRouteProvider_TerminateRoute_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_TerminateRoute_ResponseParams;
        break;
      case kMediaRouteProvider_SendRouteMessage_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_SendRouteMessage_ResponseParams;
        break;
      case kMediaRouteProvider_SendRouteBinaryMessage_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_SendRouteBinaryMessage_ResponseParams;
        break;
      case kMediaRouteProvider_SearchSinks_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_SearchSinks_ResponseParams;
        break;
      case kMediaRouteProvider_CreateMediaRouteController_Name:
        if (message.isResponse())
          paramsClass = MediaRouteProvider_CreateMediaRouteController_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaRouteProvider = {
    name: 'media_router.mojom.MediaRouteProvider',
    kVersion: 0,
    ptrClass: MediaRouteProviderPtr,
    proxyClass: MediaRouteProviderProxy,
    stubClass: MediaRouteProviderStub,
    validateRequest: validateMediaRouteProviderRequest,
    validateResponse: validateMediaRouteProviderResponse,
    mojomId: 'chrome/common/media_router/mojo/media_router.mojom',
    fuzzMethods: {
      createRoute: {
        params: MediaRouteProvider_CreateRoute_Params,
      },
      joinRoute: {
        params: MediaRouteProvider_JoinRoute_Params,
      },
      connectRouteByRouteId: {
        params: MediaRouteProvider_ConnectRouteByRouteId_Params,
      },
      terminateRoute: {
        params: MediaRouteProvider_TerminateRoute_Params,
      },
      sendRouteMessage: {
        params: MediaRouteProvider_SendRouteMessage_Params,
      },
      sendRouteBinaryMessage: {
        params: MediaRouteProvider_SendRouteBinaryMessage_Params,
      },
      startObservingMediaSinks: {
        params: MediaRouteProvider_StartObservingMediaSinks_Params,
      },
      stopObservingMediaSinks: {
        params: MediaRouteProvider_StopObservingMediaSinks_Params,
      },
      startObservingMediaRoutes: {
        params: MediaRouteProvider_StartObservingMediaRoutes_Params,
      },
      stopObservingMediaRoutes: {
        params: MediaRouteProvider_StopObservingMediaRoutes_Params,
      },
      startListeningForRouteMessages: {
        params: MediaRouteProvider_StartListeningForRouteMessages_Params,
      },
      stopListeningForRouteMessages: {
        params: MediaRouteProvider_StopListeningForRouteMessages_Params,
      },
      detachRoute: {
        params: MediaRouteProvider_DetachRoute_Params,
      },
      enableMdnsDiscovery: {
        params: MediaRouteProvider_EnableMdnsDiscovery_Params,
      },
      updateMediaSinks: {
        params: MediaRouteProvider_UpdateMediaSinks_Params,
      },
      searchSinks: {
        params: MediaRouteProvider_SearchSinks_Params,
      },
      provideSinks: {
        params: MediaRouteProvider_ProvideSinks_Params,
      },
      createMediaRouteController: {
        params: MediaRouteProvider_CreateMediaRouteController_Params,
      },
    },
  };
  MediaRouteProvider.Id = {};
  MediaRouteProvider.Id.EXTENSION = 0;
  MediaRouteProvider.Id.WIRED_DISPLAY = MediaRouteProvider.Id.EXTENSION + 1;
  MediaRouteProvider.Id.CAST = MediaRouteProvider.Id.WIRED_DISPLAY + 1;
  MediaRouteProvider.Id.DIAL = MediaRouteProvider.Id.CAST + 1;

  MediaRouteProvider.Id.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  MediaRouteProvider.Id.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  MediaRouteProviderStub.prototype.validator = validateMediaRouteProviderRequest;
  MediaRouteProviderProxy.prototype.validator = validateMediaRouteProviderResponse;
  var kMediaRouter_RegisterMediaRouteProvider_Name = 760392631;
  var kMediaRouter_OnSinksReceived_Name = 865095268;
  var kMediaRouter_OnIssue_Name = 597604475;
  var kMediaRouter_OnRoutesUpdated_Name = 20391116;
  var kMediaRouter_OnSinkAvailabilityUpdated_Name = 1188176856;
  var kMediaRouter_OnPresentationConnectionStateChanged_Name = 1171390639;
  var kMediaRouter_OnPresentationConnectionClosed_Name = 409655927;
  var kMediaRouter_OnRouteMessagesReceived_Name = 803590677;
  var kMediaRouter_OnMediaRemoterCreated_Name = 1544186047;
  var kMediaRouter_GetMediaSinkServiceStatus_Name = 439770316;

  function MediaRouterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaRouter,
                                                   handleOrPtrInfo);
  }

  function MediaRouterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaRouter, associatedInterfacePtrInfo);
  }

  MediaRouterAssociatedPtr.prototype =
      Object.create(MediaRouterPtr.prototype);
  MediaRouterAssociatedPtr.prototype.constructor =
      MediaRouterAssociatedPtr;

  function MediaRouterProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaRouterPtr.prototype.registerMediaRouteProvider = function() {
    return MediaRouterProxy.prototype.registerMediaRouteProvider
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.registerMediaRouteProvider = function(providerId, mediaRouterProvider) {
    var params_ = new MediaRouter_RegisterMediaRouteProvider_Params();
    params_.providerId = providerId;
    params_.mediaRouterProvider = mediaRouterProvider;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouter_RegisterMediaRouteProvider_Name,
          codec.align(MediaRouter_RegisterMediaRouteProvider_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouter_RegisterMediaRouteProvider_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouter_RegisterMediaRouteProvider_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaRouterPtr.prototype.onSinksReceived = function() {
    return MediaRouterProxy.prototype.onSinksReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onSinksReceived = function(providerId, mediaSource, sinks, origins) {
    var params_ = new MediaRouter_OnSinksReceived_Params();
    params_.providerId = providerId;
    params_.mediaSource = mediaSource;
    params_.sinks = sinks;
    params_.origins = origins;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnSinksReceived_Name,
        codec.align(MediaRouter_OnSinksReceived_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnSinksReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onIssue = function() {
    return MediaRouterProxy.prototype.onIssue
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onIssue = function(issue) {
    var params_ = new MediaRouter_OnIssue_Params();
    params_.issue = issue;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnIssue_Name,
        codec.align(MediaRouter_OnIssue_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnIssue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onRoutesUpdated = function() {
    return MediaRouterProxy.prototype.onRoutesUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onRoutesUpdated = function(providerId, routes, mediaSource, joinableRouteIds) {
    var params_ = new MediaRouter_OnRoutesUpdated_Params();
    params_.providerId = providerId;
    params_.routes = routes;
    params_.mediaSource = mediaSource;
    params_.joinableRouteIds = joinableRouteIds;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnRoutesUpdated_Name,
        codec.align(MediaRouter_OnRoutesUpdated_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnRoutesUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onSinkAvailabilityUpdated = function() {
    return MediaRouterProxy.prototype.onSinkAvailabilityUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onSinkAvailabilityUpdated = function(providerId, availability) {
    var params_ = new MediaRouter_OnSinkAvailabilityUpdated_Params();
    params_.providerId = providerId;
    params_.availability = availability;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnSinkAvailabilityUpdated_Name,
        codec.align(MediaRouter_OnSinkAvailabilityUpdated_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnSinkAvailabilityUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onPresentationConnectionStateChanged = function() {
    return MediaRouterProxy.prototype.onPresentationConnectionStateChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onPresentationConnectionStateChanged = function(routeId, state) {
    var params_ = new MediaRouter_OnPresentationConnectionStateChanged_Params();
    params_.routeId = routeId;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnPresentationConnectionStateChanged_Name,
        codec.align(MediaRouter_OnPresentationConnectionStateChanged_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnPresentationConnectionStateChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onPresentationConnectionClosed = function() {
    return MediaRouterProxy.prototype.onPresentationConnectionClosed
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onPresentationConnectionClosed = function(routeId, reason, message) {
    var params_ = new MediaRouter_OnPresentationConnectionClosed_Params();
    params_.routeId = routeId;
    params_.reason = reason;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnPresentationConnectionClosed_Name,
        codec.align(MediaRouter_OnPresentationConnectionClosed_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnPresentationConnectionClosed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onRouteMessagesReceived = function() {
    return MediaRouterProxy.prototype.onRouteMessagesReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onRouteMessagesReceived = function(routeId, messages) {
    var params_ = new MediaRouter_OnRouteMessagesReceived_Params();
    params_.routeId = routeId;
    params_.messages = messages;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnRouteMessagesReceived_Name,
        codec.align(MediaRouter_OnRouteMessagesReceived_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnRouteMessagesReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.onMediaRemoterCreated = function() {
    return MediaRouterProxy.prototype.onMediaRemoterCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.onMediaRemoterCreated = function(tabId, remoter, remotingSource) {
    var params_ = new MediaRouter_OnMediaRemoterCreated_Params();
    params_.tabId = tabId;
    params_.remoter = remoter;
    params_.remotingSource = remotingSource;
    var builder = new codec.MessageV0Builder(
        kMediaRouter_OnMediaRemoterCreated_Name,
        codec.align(MediaRouter_OnMediaRemoterCreated_Params.encodedSize));
    builder.encodeStruct(MediaRouter_OnMediaRemoterCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  MediaRouterPtr.prototype.getMediaSinkServiceStatus = function() {
    return MediaRouterProxy.prototype.getMediaSinkServiceStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaRouterProxy.prototype.getMediaSinkServiceStatus = function() {
    var params_ = new MediaRouter_GetMediaSinkServiceStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaRouter_GetMediaSinkServiceStatus_Name,
          codec.align(MediaRouter_GetMediaSinkServiceStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaRouter_GetMediaSinkServiceStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaRouter_GetMediaSinkServiceStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaRouterStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaRouterStub.prototype.registerMediaRouteProvider = function(providerId, mediaRouterProvider) {
    return this.delegate_ && this.delegate_.registerMediaRouteProvider && this.delegate_.registerMediaRouteProvider(providerId, mediaRouterProvider);
  }
  MediaRouterStub.prototype.onSinksReceived = function(providerId, mediaSource, sinks, origins) {
    return this.delegate_ && this.delegate_.onSinksReceived && this.delegate_.onSinksReceived(providerId, mediaSource, sinks, origins);
  }
  MediaRouterStub.prototype.onIssue = function(issue) {
    return this.delegate_ && this.delegate_.onIssue && this.delegate_.onIssue(issue);
  }
  MediaRouterStub.prototype.onRoutesUpdated = function(providerId, routes, mediaSource, joinableRouteIds) {
    return this.delegate_ && this.delegate_.onRoutesUpdated && this.delegate_.onRoutesUpdated(providerId, routes, mediaSource, joinableRouteIds);
  }
  MediaRouterStub.prototype.onSinkAvailabilityUpdated = function(providerId, availability) {
    return this.delegate_ && this.delegate_.onSinkAvailabilityUpdated && this.delegate_.onSinkAvailabilityUpdated(providerId, availability);
  }
  MediaRouterStub.prototype.onPresentationConnectionStateChanged = function(routeId, state) {
    return this.delegate_ && this.delegate_.onPresentationConnectionStateChanged && this.delegate_.onPresentationConnectionStateChanged(routeId, state);
  }
  MediaRouterStub.prototype.onPresentationConnectionClosed = function(routeId, reason, message) {
    return this.delegate_ && this.delegate_.onPresentationConnectionClosed && this.delegate_.onPresentationConnectionClosed(routeId, reason, message);
  }
  MediaRouterStub.prototype.onRouteMessagesReceived = function(routeId, messages) {
    return this.delegate_ && this.delegate_.onRouteMessagesReceived && this.delegate_.onRouteMessagesReceived(routeId, messages);
  }
  MediaRouterStub.prototype.onMediaRemoterCreated = function(tabId, remoter, remotingSource) {
    return this.delegate_ && this.delegate_.onMediaRemoterCreated && this.delegate_.onMediaRemoterCreated(tabId, remoter, remotingSource);
  }
  MediaRouterStub.prototype.getMediaSinkServiceStatus = function() {
    return this.delegate_ && this.delegate_.getMediaSinkServiceStatus && this.delegate_.getMediaSinkServiceStatus();
  }

  MediaRouterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouter_OnSinksReceived_Name:
      var params = reader.decodeStruct(MediaRouter_OnSinksReceived_Params);
      this.onSinksReceived(params.providerId, params.mediaSource, params.sinks, params.origins);
      return true;
    case kMediaRouter_OnIssue_Name:
      var params = reader.decodeStruct(MediaRouter_OnIssue_Params);
      this.onIssue(params.issue);
      return true;
    case kMediaRouter_OnRoutesUpdated_Name:
      var params = reader.decodeStruct(MediaRouter_OnRoutesUpdated_Params);
      this.onRoutesUpdated(params.providerId, params.routes, params.mediaSource, params.joinableRouteIds);
      return true;
    case kMediaRouter_OnSinkAvailabilityUpdated_Name:
      var params = reader.decodeStruct(MediaRouter_OnSinkAvailabilityUpdated_Params);
      this.onSinkAvailabilityUpdated(params.providerId, params.availability);
      return true;
    case kMediaRouter_OnPresentationConnectionStateChanged_Name:
      var params = reader.decodeStruct(MediaRouter_OnPresentationConnectionStateChanged_Params);
      this.onPresentationConnectionStateChanged(params.routeId, params.state);
      return true;
    case kMediaRouter_OnPresentationConnectionClosed_Name:
      var params = reader.decodeStruct(MediaRouter_OnPresentationConnectionClosed_Params);
      this.onPresentationConnectionClosed(params.routeId, params.reason, params.message);
      return true;
    case kMediaRouter_OnRouteMessagesReceived_Name:
      var params = reader.decodeStruct(MediaRouter_OnRouteMessagesReceived_Params);
      this.onRouteMessagesReceived(params.routeId, params.messages);
      return true;
    case kMediaRouter_OnMediaRemoterCreated_Name:
      var params = reader.decodeStruct(MediaRouter_OnMediaRemoterCreated_Params);
      this.onMediaRemoterCreated(params.tabId, params.remoter, params.remotingSource);
      return true;
    default:
      return false;
    }
  };

  MediaRouterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaRouter_RegisterMediaRouteProvider_Name:
      var params = reader.decodeStruct(MediaRouter_RegisterMediaRouteProvider_Params);
      this.registerMediaRouteProvider(params.providerId, params.mediaRouterProvider).then(function(response) {
        var responseParams =
            new MediaRouter_RegisterMediaRouteProvider_ResponseParams();
        responseParams.instanceId = response.instanceId;
        responseParams.config = response.config;
        var builder = new codec.MessageV1Builder(
            kMediaRouter_RegisterMediaRouteProvider_Name,
            codec.align(MediaRouter_RegisterMediaRouteProvider_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouter_RegisterMediaRouteProvider_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaRouter_GetMediaSinkServiceStatus_Name:
      var params = reader.decodeStruct(MediaRouter_GetMediaSinkServiceStatus_Params);
      this.getMediaSinkServiceStatus().then(function(response) {
        var responseParams =
            new MediaRouter_GetMediaSinkServiceStatus_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kMediaRouter_GetMediaSinkServiceStatus_Name,
            codec.align(MediaRouter_GetMediaSinkServiceStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaRouter_GetMediaSinkServiceStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaRouterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaRouter_RegisterMediaRouteProvider_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouter_RegisterMediaRouteProvider_Params;
      break;
      case kMediaRouter_OnSinksReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnSinksReceived_Params;
      break;
      case kMediaRouter_OnIssue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnIssue_Params;
      break;
      case kMediaRouter_OnRoutesUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnRoutesUpdated_Params;
      break;
      case kMediaRouter_OnSinkAvailabilityUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnSinkAvailabilityUpdated_Params;
      break;
      case kMediaRouter_OnPresentationConnectionStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnPresentationConnectionStateChanged_Params;
      break;
      case kMediaRouter_OnPresentationConnectionClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnPresentationConnectionClosed_Params;
      break;
      case kMediaRouter_OnRouteMessagesReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnRouteMessagesReceived_Params;
      break;
      case kMediaRouter_OnMediaRemoterCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaRouter_OnMediaRemoterCreated_Params;
      break;
      case kMediaRouter_GetMediaSinkServiceStatus_Name:
        if (message.expectsResponse())
          paramsClass = MediaRouter_GetMediaSinkServiceStatus_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaRouterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaRouter_RegisterMediaRouteProvider_Name:
        if (message.isResponse())
          paramsClass = MediaRouter_RegisterMediaRouteProvider_ResponseParams;
        break;
      case kMediaRouter_GetMediaSinkServiceStatus_Name:
        if (message.isResponse())
          paramsClass = MediaRouter_GetMediaSinkServiceStatus_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaRouter = {
    name: 'media_router.mojom.MediaRouter',
    kVersion: 0,
    ptrClass: MediaRouterPtr,
    proxyClass: MediaRouterProxy,
    stubClass: MediaRouterStub,
    validateRequest: validateMediaRouterRequest,
    validateResponse: validateMediaRouterResponse,
    mojomId: 'chrome/common/media_router/mojo/media_router.mojom',
    fuzzMethods: {
      registerMediaRouteProvider: {
        params: MediaRouter_RegisterMediaRouteProvider_Params,
      },
      onSinksReceived: {
        params: MediaRouter_OnSinksReceived_Params,
      },
      onIssue: {
        params: MediaRouter_OnIssue_Params,
      },
      onRoutesUpdated: {
        params: MediaRouter_OnRoutesUpdated_Params,
      },
      onSinkAvailabilityUpdated: {
        params: MediaRouter_OnSinkAvailabilityUpdated_Params,
      },
      onPresentationConnectionStateChanged: {
        params: MediaRouter_OnPresentationConnectionStateChanged_Params,
      },
      onPresentationConnectionClosed: {
        params: MediaRouter_OnPresentationConnectionClosed_Params,
      },
      onRouteMessagesReceived: {
        params: MediaRouter_OnRouteMessagesReceived_Params,
      },
      onMediaRemoterCreated: {
        params: MediaRouter_OnMediaRemoterCreated_Params,
      },
      getMediaSinkServiceStatus: {
        params: MediaRouter_GetMediaSinkServiceStatus_Params,
      },
    },
  };
  MediaRouter.SinkAvailability = {};
  MediaRouter.SinkAvailability.UNAVAILABLE = 0;
  MediaRouter.SinkAvailability.PER_SOURCE = MediaRouter.SinkAvailability.UNAVAILABLE + 1;
  MediaRouter.SinkAvailability.AVAILABLE = MediaRouter.SinkAvailability.PER_SOURCE + 1;

  MediaRouter.SinkAvailability.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MediaRouter.SinkAvailability.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  MediaRouter.PresentationConnectionState = {};
  MediaRouter.PresentationConnectionState.CONNECTING = 0;
  MediaRouter.PresentationConnectionState.CONNECTED = MediaRouter.PresentationConnectionState.CONNECTING + 1;
  MediaRouter.PresentationConnectionState.CLOSED = MediaRouter.PresentationConnectionState.CONNECTED + 1;
  MediaRouter.PresentationConnectionState.TERMINATED = MediaRouter.PresentationConnectionState.CLOSED + 1;

  MediaRouter.PresentationConnectionState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  MediaRouter.PresentationConnectionState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  MediaRouter.PresentationConnectionCloseReason = {};
  MediaRouter.PresentationConnectionCloseReason.CONNECTION_ERROR = 0;
  MediaRouter.PresentationConnectionCloseReason.CLOSED = MediaRouter.PresentationConnectionCloseReason.CONNECTION_ERROR + 1;
  MediaRouter.PresentationConnectionCloseReason.WENT_AWAY = MediaRouter.PresentationConnectionCloseReason.CLOSED + 1;

  MediaRouter.PresentationConnectionCloseReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  MediaRouter.PresentationConnectionCloseReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  MediaRouterStub.prototype.validator = validateMediaRouterRequest;
  MediaRouterProxy.prototype.validator = validateMediaRouterResponse;
  exports.SinkIconType = SinkIconType;
  exports.RouteControllerType = RouteControllerType;
  exports.RouteRequestResultCode = RouteRequestResultCode;
  exports.MediaSink = MediaSink;
  exports.DialMediaSink = DialMediaSink;
  exports.CastMediaSink = CastMediaSink;
  exports.MediaRoute = MediaRoute;
  exports.Issue = Issue;
  exports.RouteMessage = RouteMessage;
  exports.SinkSearchCriteria = SinkSearchCriteria;
  exports.MediaRouteProviderConfig = MediaRouteProviderConfig;
  exports.MediaSinkExtraData = MediaSinkExtraData;
  exports.MediaRouteProvider = MediaRouteProvider;
  exports.MediaRouteProviderPtr = MediaRouteProviderPtr;
  exports.MediaRouteProviderAssociatedPtr = MediaRouteProviderAssociatedPtr;
  exports.MediaRouter = MediaRouter;
  exports.MediaRouterPtr = MediaRouterPtr;
  exports.MediaRouterAssociatedPtr = MediaRouterAssociatedPtr;
})();