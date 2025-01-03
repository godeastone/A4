// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/media/renderer_audio_output_stream_factory.mojom';
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
  var audio_output_stream$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_output_stream.mojom', '../../../media/mojo/interfaces/audio_output_stream.mojom.js');
  }
  var audio_parameters$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/audio_parameters.mojom', '../../../media/mojo/interfaces/audio_parameters.mojom.js');
  }
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', '../../../media/mojo/interfaces/media_types.mojom.js');
  }



  function RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.prototype.initDefaults_ = function() {
    this.streamProviderRequest = new bindings.InterfaceRequest();
    this.sessionId = 0;
    this.deviceId = null;
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.generate = function(generator_) {
    var generated = new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params;
    generated.streamProviderRequest = generator_.generateInterfaceRequest("media.mojom.AudioOutputStreamProvider", false);
    generated.sessionId = generator_.generateInt32();
    generated.deviceId = generator_.generateString(false);
    return generated;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.streamProviderRequest = mutator_.mutateInterfaceRequest(this.streamProviderRequest, "media.mojom.AudioOutputStreamProvider", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateInt32(this.sessionId);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceId = mutator_.mutateString(this.deviceId, false);
    }
    return this;
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.streamProviderRequest !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.AudioOutputStreamProviderRequest"]);
    }
    return handles;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.streamProviderRequest = handles[idx++];;
    return idx;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.validate = function(messageValidator, offset) {
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


    // validate RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.streamProviderRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.deviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.encodedSize = codec.kStructHeaderSize + 16;

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.decode = function(decoder) {
    var packed;
    var val = new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.streamProviderRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.sessionId = decoder.decodeStruct(codec.Int32);
    val.deviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.streamProviderRequest);
    encoder.encodeStruct(codec.Int32, val.sessionId);
    encoder.encodeStruct(codec.String, val.deviceId);
  };
  function RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.prototype.initDefaults_ = function() {
    this.state = 0;
    this.outputParams = null;
    this.matchedDeviceId = null;
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.generate = function(generator_) {
    var generated = new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams;
    generated.state = generator_.generateEnum();
    generated.outputParams = generator_.generateStruct(media.mojom.AudioParameters, false);
    generated.matchedDeviceId = generator_.generateString(false);
    return generated;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state);
    }
    if (mutator_.chooseMutateField()) {
      this.outputParams = mutator_.mutateStruct(media.mojom.AudioParameters, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matchedDeviceId = mutator_.mutateString(this.matchedDeviceId, false);
    }
    return this;
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, media_types$.OutputDeviceStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.outputParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, audio_parameters$.AudioParameters, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.matchedDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.outputParams = decoder.decodeStructPointer(audio_parameters$.AudioParameters);
    val.matchedDeviceId = decoder.decodeStruct(codec.String);
    return val;
  };

  RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(audio_parameters$.AudioParameters, val.outputParams);
    encoder.encodeStruct(codec.String, val.matchedDeviceId);
  };
  var kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name = 628615625;

  function RendererAudioOutputStreamFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RendererAudioOutputStreamFactory,
                                                   handleOrPtrInfo);
  }

  function RendererAudioOutputStreamFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RendererAudioOutputStreamFactory, associatedInterfacePtrInfo);
  }

  RendererAudioOutputStreamFactoryAssociatedPtr.prototype =
      Object.create(RendererAudioOutputStreamFactoryPtr.prototype);
  RendererAudioOutputStreamFactoryAssociatedPtr.prototype.constructor =
      RendererAudioOutputStreamFactoryAssociatedPtr;

  function RendererAudioOutputStreamFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererAudioOutputStreamFactoryPtr.prototype.requestDeviceAuthorization = function() {
    return RendererAudioOutputStreamFactoryProxy.prototype.requestDeviceAuthorization
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererAudioOutputStreamFactoryProxy.prototype.requestDeviceAuthorization = function(streamProviderRequest, sessionId, deviceId) {
    var params_ = new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params();
    params_.streamProviderRequest = streamProviderRequest;
    params_.sessionId = sessionId;
    params_.deviceId = deviceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name,
          codec.align(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function RendererAudioOutputStreamFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererAudioOutputStreamFactoryStub.prototype.requestDeviceAuthorization = function(streamProviderRequest, sessionId, deviceId) {
    return this.delegate_ && this.delegate_.requestDeviceAuthorization && this.delegate_.requestDeviceAuthorization(streamProviderRequest, sessionId, deviceId);
  }

  RendererAudioOutputStreamFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  RendererAudioOutputStreamFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name:
      var params = reader.decodeStruct(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params);
      this.requestDeviceAuthorization(params.streamProviderRequest, params.sessionId, params.deviceId).then(function(response) {
        var responseParams =
            new RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams();
        responseParams.state = response.state;
        responseParams.outputParams = response.outputParams;
        responseParams.matchedDeviceId = response.matchedDeviceId;
        var builder = new codec.MessageV1Builder(
            kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name,
            codec.align(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRendererAudioOutputStreamFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name:
        if (message.expectsResponse())
          paramsClass = RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererAudioOutputStreamFactoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRendererAudioOutputStreamFactory_RequestDeviceAuthorization_Name:
        if (message.isResponse())
          paramsClass = RendererAudioOutputStreamFactory_RequestDeviceAuthorization_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var RendererAudioOutputStreamFactory = {
    name: 'content.mojom.RendererAudioOutputStreamFactory',
    kVersion: 0,
    ptrClass: RendererAudioOutputStreamFactoryPtr,
    proxyClass: RendererAudioOutputStreamFactoryProxy,
    stubClass: RendererAudioOutputStreamFactoryStub,
    validateRequest: validateRendererAudioOutputStreamFactoryRequest,
    validateResponse: validateRendererAudioOutputStreamFactoryResponse,
    mojomId: 'content/common/media/renderer_audio_output_stream_factory.mojom',
    fuzzMethods: {
      requestDeviceAuthorization: {
        params: RendererAudioOutputStreamFactory_RequestDeviceAuthorization_Params,
      },
    },
  };
  RendererAudioOutputStreamFactoryStub.prototype.validator = validateRendererAudioOutputStreamFactoryRequest;
  RendererAudioOutputStreamFactoryProxy.prototype.validator = validateRendererAudioOutputStreamFactoryResponse;
  exports.RendererAudioOutputStreamFactory = RendererAudioOutputStreamFactory;
  exports.RendererAudioOutputStreamFactoryPtr = RendererAudioOutputStreamFactoryPtr;
  exports.RendererAudioOutputStreamFactoryAssociatedPtr = RendererAudioOutputStreamFactoryAssociatedPtr;
})();