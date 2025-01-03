// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/media/peer_connection_tracker.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');



  function PeerConnectionTrackerHost_RemovePeerConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PeerConnectionTrackerHost_RemovePeerConnection_Params.prototype.initDefaults_ = function() {
    this.lid = 0;
  };
  PeerConnectionTrackerHost_RemovePeerConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PeerConnectionTrackerHost_RemovePeerConnection_Params.generate = function(generator_) {
    var generated = new PeerConnectionTrackerHost_RemovePeerConnection_Params;
    generated.lid = generator_.generateInt32();
    return generated;
  };

  PeerConnectionTrackerHost_RemovePeerConnection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.lid = mutator_.mutateInt32(this.lid);
    }
    return this;
  };
  PeerConnectionTrackerHost_RemovePeerConnection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PeerConnectionTrackerHost_RemovePeerConnection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PeerConnectionTrackerHost_RemovePeerConnection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PeerConnectionTrackerHost_RemovePeerConnection_Params.validate = function(messageValidator, offset) {
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

  PeerConnectionTrackerHost_RemovePeerConnection_Params.encodedSize = codec.kStructHeaderSize + 8;

  PeerConnectionTrackerHost_RemovePeerConnection_Params.decode = function(decoder) {
    var packed;
    var val = new PeerConnectionTrackerHost_RemovePeerConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.lid = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PeerConnectionTrackerHost_RemovePeerConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PeerConnectionTrackerHost_RemovePeerConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.lid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PeerConnectionTrackerHost_UpdatePeerConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PeerConnectionTrackerHost_UpdatePeerConnection_Params.prototype.initDefaults_ = function() {
    this.lid = 0;
    this.type = null;
    this.value = null;
  };
  PeerConnectionTrackerHost_UpdatePeerConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PeerConnectionTrackerHost_UpdatePeerConnection_Params.generate = function(generator_) {
    var generated = new PeerConnectionTrackerHost_UpdatePeerConnection_Params;
    generated.lid = generator_.generateInt32();
    generated.type = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    return generated;
  };

  PeerConnectionTrackerHost_UpdatePeerConnection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.lid = mutator_.mutateInt32(this.lid);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    return this;
  };
  PeerConnectionTrackerHost_UpdatePeerConnection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PeerConnectionTrackerHost_UpdatePeerConnection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PeerConnectionTrackerHost_UpdatePeerConnection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PeerConnectionTrackerHost_UpdatePeerConnection_Params.validate = function(messageValidator, offset) {
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



    // validate PeerConnectionTrackerHost_UpdatePeerConnection_Params.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PeerConnectionTrackerHost_UpdatePeerConnection_Params.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PeerConnectionTrackerHost_UpdatePeerConnection_Params.encodedSize = codec.kStructHeaderSize + 24;

  PeerConnectionTrackerHost_UpdatePeerConnection_Params.decode = function(decoder) {
    var packed;
    var val = new PeerConnectionTrackerHost_UpdatePeerConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.lid = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  PeerConnectionTrackerHost_UpdatePeerConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PeerConnectionTrackerHost_UpdatePeerConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.lid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeStruct(codec.String, val.value);
  };
  function PeerConnectionTrackerHost_GetUserMedia_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PeerConnectionTrackerHost_GetUserMedia_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.audio = false;
    this.video = false;
    this.audioConstraints = null;
    this.videoConstraints = null;
  };
  PeerConnectionTrackerHost_GetUserMedia_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PeerConnectionTrackerHost_GetUserMedia_Params.generate = function(generator_) {
    var generated = new PeerConnectionTrackerHost_GetUserMedia_Params;
    generated.origin = generator_.generateString(false);
    generated.audio = generator_.generateBool();
    generated.video = generator_.generateBool();
    generated.audioConstraints = generator_.generateString(false);
    generated.videoConstraints = generator_.generateString(false);
    return generated;
  };

  PeerConnectionTrackerHost_GetUserMedia_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateString(this.origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.audio = mutator_.mutateBool(this.audio);
    }
    if (mutator_.chooseMutateField()) {
      this.video = mutator_.mutateBool(this.video);
    }
    if (mutator_.chooseMutateField()) {
      this.audioConstraints = mutator_.mutateString(this.audioConstraints, false);
    }
    if (mutator_.chooseMutateField()) {
      this.videoConstraints = mutator_.mutateString(this.videoConstraints, false);
    }
    return this;
  };
  PeerConnectionTrackerHost_GetUserMedia_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PeerConnectionTrackerHost_GetUserMedia_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PeerConnectionTrackerHost_GetUserMedia_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PeerConnectionTrackerHost_GetUserMedia_Params.validate = function(messageValidator, offset) {
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


    // validate PeerConnectionTrackerHost_GetUserMedia_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate PeerConnectionTrackerHost_GetUserMedia_Params.audioConstraints
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PeerConnectionTrackerHost_GetUserMedia_Params.videoConstraints
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PeerConnectionTrackerHost_GetUserMedia_Params.encodedSize = codec.kStructHeaderSize + 32;

  PeerConnectionTrackerHost_GetUserMedia_Params.decode = function(decoder) {
    var packed;
    var val = new PeerConnectionTrackerHost_GetUserMedia_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.audio = (packed >> 0) & 1 ? true : false;
    val.video = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.audioConstraints = decoder.decodeStruct(codec.String);
    val.videoConstraints = decoder.decodeStruct(codec.String);
    return val;
  };

  PeerConnectionTrackerHost_GetUserMedia_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PeerConnectionTrackerHost_GetUserMedia_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.origin);
    packed = 0;
    packed |= (val.audio & 1) << 0
    packed |= (val.video & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.audioConstraints);
    encoder.encodeStruct(codec.String, val.videoConstraints);
  };
  function PeerConnectionTrackerHost_WebRtcEventLogWrite_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.prototype.initDefaults_ = function() {
    this.lid = 0;
    this.output = null;
  };
  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.generate = function(generator_) {
    var generated = new PeerConnectionTrackerHost_WebRtcEventLogWrite_Params;
    generated.lid = generator_.generateInt32();
    generated.output = generator_.generateString(false);
    return generated;
  };

  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.lid = mutator_.mutateInt32(this.lid);
    }
    if (mutator_.chooseMutateField()) {
      this.output = mutator_.mutateString(this.output, false);
    }
    return this;
  };
  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.validate = function(messageValidator, offset) {
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



    // validate PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.output
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.encodedSize = codec.kStructHeaderSize + 16;

  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.decode = function(decoder) {
    var packed;
    var val = new PeerConnectionTrackerHost_WebRtcEventLogWrite_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.lid = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.output = decoder.decodeStruct(codec.String);
    return val;
  };

  PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.lid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.output);
  };
  var kPeerConnectionTrackerHost_RemovePeerConnection_Name = 1050640245;
  var kPeerConnectionTrackerHost_UpdatePeerConnection_Name = 1636161584;
  var kPeerConnectionTrackerHost_GetUserMedia_Name = 835697576;
  var kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name = 889273828;

  function PeerConnectionTrackerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PeerConnectionTrackerHost,
                                                   handleOrPtrInfo);
  }

  function PeerConnectionTrackerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PeerConnectionTrackerHost, associatedInterfacePtrInfo);
  }

  PeerConnectionTrackerHostAssociatedPtr.prototype =
      Object.create(PeerConnectionTrackerHostPtr.prototype);
  PeerConnectionTrackerHostAssociatedPtr.prototype.constructor =
      PeerConnectionTrackerHostAssociatedPtr;

  function PeerConnectionTrackerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  PeerConnectionTrackerHostPtr.prototype.removePeerConnection = function() {
    return PeerConnectionTrackerHostProxy.prototype.removePeerConnection
        .apply(this.ptr.getProxy(), arguments);
  };

  PeerConnectionTrackerHostProxy.prototype.removePeerConnection = function(lid) {
    var params_ = new PeerConnectionTrackerHost_RemovePeerConnection_Params();
    params_.lid = lid;
    var builder = new codec.MessageV0Builder(
        kPeerConnectionTrackerHost_RemovePeerConnection_Name,
        codec.align(PeerConnectionTrackerHost_RemovePeerConnection_Params.encodedSize));
    builder.encodeStruct(PeerConnectionTrackerHost_RemovePeerConnection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PeerConnectionTrackerHostPtr.prototype.updatePeerConnection = function() {
    return PeerConnectionTrackerHostProxy.prototype.updatePeerConnection
        .apply(this.ptr.getProxy(), arguments);
  };

  PeerConnectionTrackerHostProxy.prototype.updatePeerConnection = function(lid, type, value) {
    var params_ = new PeerConnectionTrackerHost_UpdatePeerConnection_Params();
    params_.lid = lid;
    params_.type = type;
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kPeerConnectionTrackerHost_UpdatePeerConnection_Name,
        codec.align(PeerConnectionTrackerHost_UpdatePeerConnection_Params.encodedSize));
    builder.encodeStruct(PeerConnectionTrackerHost_UpdatePeerConnection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PeerConnectionTrackerHostPtr.prototype.getUserMedia = function() {
    return PeerConnectionTrackerHostProxy.prototype.getUserMedia
        .apply(this.ptr.getProxy(), arguments);
  };

  PeerConnectionTrackerHostProxy.prototype.getUserMedia = function(origin, audio, video, audioConstraints, videoConstraints) {
    var params_ = new PeerConnectionTrackerHost_GetUserMedia_Params();
    params_.origin = origin;
    params_.audio = audio;
    params_.video = video;
    params_.audioConstraints = audioConstraints;
    params_.videoConstraints = videoConstraints;
    var builder = new codec.MessageV0Builder(
        kPeerConnectionTrackerHost_GetUserMedia_Name,
        codec.align(PeerConnectionTrackerHost_GetUserMedia_Params.encodedSize));
    builder.encodeStruct(PeerConnectionTrackerHost_GetUserMedia_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PeerConnectionTrackerHostPtr.prototype.webRtcEventLogWrite = function() {
    return PeerConnectionTrackerHostProxy.prototype.webRtcEventLogWrite
        .apply(this.ptr.getProxy(), arguments);
  };

  PeerConnectionTrackerHostProxy.prototype.webRtcEventLogWrite = function(lid, output) {
    var params_ = new PeerConnectionTrackerHost_WebRtcEventLogWrite_Params();
    params_.lid = lid;
    params_.output = output;
    var builder = new codec.MessageV0Builder(
        kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name,
        codec.align(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params.encodedSize));
    builder.encodeStruct(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PeerConnectionTrackerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  PeerConnectionTrackerHostStub.prototype.removePeerConnection = function(lid) {
    return this.delegate_ && this.delegate_.removePeerConnection && this.delegate_.removePeerConnection(lid);
  }
  PeerConnectionTrackerHostStub.prototype.updatePeerConnection = function(lid, type, value) {
    return this.delegate_ && this.delegate_.updatePeerConnection && this.delegate_.updatePeerConnection(lid, type, value);
  }
  PeerConnectionTrackerHostStub.prototype.getUserMedia = function(origin, audio, video, audioConstraints, videoConstraints) {
    return this.delegate_ && this.delegate_.getUserMedia && this.delegate_.getUserMedia(origin, audio, video, audioConstraints, videoConstraints);
  }
  PeerConnectionTrackerHostStub.prototype.webRtcEventLogWrite = function(lid, output) {
    return this.delegate_ && this.delegate_.webRtcEventLogWrite && this.delegate_.webRtcEventLogWrite(lid, output);
  }

  PeerConnectionTrackerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPeerConnectionTrackerHost_RemovePeerConnection_Name:
      var params = reader.decodeStruct(PeerConnectionTrackerHost_RemovePeerConnection_Params);
      this.removePeerConnection(params.lid);
      return true;
    case kPeerConnectionTrackerHost_UpdatePeerConnection_Name:
      var params = reader.decodeStruct(PeerConnectionTrackerHost_UpdatePeerConnection_Params);
      this.updatePeerConnection(params.lid, params.type, params.value);
      return true;
    case kPeerConnectionTrackerHost_GetUserMedia_Name:
      var params = reader.decodeStruct(PeerConnectionTrackerHost_GetUserMedia_Params);
      this.getUserMedia(params.origin, params.audio, params.video, params.audioConstraints, params.videoConstraints);
      return true;
    case kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name:
      var params = reader.decodeStruct(PeerConnectionTrackerHost_WebRtcEventLogWrite_Params);
      this.webRtcEventLogWrite(params.lid, params.output);
      return true;
    default:
      return false;
    }
  };

  PeerConnectionTrackerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePeerConnectionTrackerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPeerConnectionTrackerHost_RemovePeerConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PeerConnectionTrackerHost_RemovePeerConnection_Params;
      break;
      case kPeerConnectionTrackerHost_UpdatePeerConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PeerConnectionTrackerHost_UpdatePeerConnection_Params;
      break;
      case kPeerConnectionTrackerHost_GetUserMedia_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PeerConnectionTrackerHost_GetUserMedia_Params;
      break;
      case kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PeerConnectionTrackerHost_WebRtcEventLogWrite_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePeerConnectionTrackerHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PeerConnectionTrackerHost = {
    name: 'content.mojom.PeerConnectionTrackerHost',
    kVersion: 0,
    ptrClass: PeerConnectionTrackerHostPtr,
    proxyClass: PeerConnectionTrackerHostProxy,
    stubClass: PeerConnectionTrackerHostStub,
    validateRequest: validatePeerConnectionTrackerHostRequest,
    validateResponse: null,
    mojomId: 'content/common/media/peer_connection_tracker.mojom',
    fuzzMethods: {
      removePeerConnection: {
        params: PeerConnectionTrackerHost_RemovePeerConnection_Params,
      },
      updatePeerConnection: {
        params: PeerConnectionTrackerHost_UpdatePeerConnection_Params,
      },
      getUserMedia: {
        params: PeerConnectionTrackerHost_GetUserMedia_Params,
      },
      webRtcEventLogWrite: {
        params: PeerConnectionTrackerHost_WebRtcEventLogWrite_Params,
      },
    },
  };
  PeerConnectionTrackerHostStub.prototype.validator = validatePeerConnectionTrackerHostRequest;
  PeerConnectionTrackerHostProxy.prototype.validator = null;
  exports.PeerConnectionTrackerHost = PeerConnectionTrackerHost;
  exports.PeerConnectionTrackerHostPtr = PeerConnectionTrackerHostPtr;
  exports.PeerConnectionTrackerHostAssociatedPtr = PeerConnectionTrackerHostAssociatedPtr;
})();