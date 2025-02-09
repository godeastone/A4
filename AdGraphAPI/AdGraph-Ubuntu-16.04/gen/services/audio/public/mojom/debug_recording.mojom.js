// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/audio/public/mojom/debug_recording.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('audio.mojom');
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../mojo/public/mojom/base/file_path.mojom.js');
  }


  var DebugRecordingStreamType = {};
  DebugRecordingStreamType.kInput = 0;
  DebugRecordingStreamType.kOutput = 1;

  DebugRecordingStreamType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  DebugRecordingStreamType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function DebugRecordingFileProvider_CreateWavFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DebugRecordingFileProvider_CreateWavFile_Params.prototype.initDefaults_ = function() {
    this.streamType = 0;
    this.id = 0;
  };
  DebugRecordingFileProvider_CreateWavFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DebugRecordingFileProvider_CreateWavFile_Params.generate = function(generator_) {
    var generated = new DebugRecordingFileProvider_CreateWavFile_Params;
    generated.streamType = generator_.generateEnum(0, 1);
    generated.id = generator_.generateUint32();
    return generated;
  };

  DebugRecordingFileProvider_CreateWavFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.streamType = mutator_.mutateEnum(this.streamType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    return this;
  };
  DebugRecordingFileProvider_CreateWavFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DebugRecordingFileProvider_CreateWavFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DebugRecordingFileProvider_CreateWavFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DebugRecordingFileProvider_CreateWavFile_Params.validate = function(messageValidator, offset) {
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


    // validate DebugRecordingFileProvider_CreateWavFile_Params.streamType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, DebugRecordingStreamType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DebugRecordingFileProvider_CreateWavFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  DebugRecordingFileProvider_CreateWavFile_Params.decode = function(decoder) {
    var packed;
    var val = new DebugRecordingFileProvider_CreateWavFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.streamType = decoder.decodeStruct(codec.Int32);
    val.id = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  DebugRecordingFileProvider_CreateWavFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DebugRecordingFileProvider_CreateWavFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.streamType);
    encoder.encodeStruct(codec.Uint32, val.id);
  };
  function DebugRecordingFileProvider_CreateWavFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DebugRecordingFileProvider_CreateWavFile_ResponseParams.prototype.initDefaults_ = function() {
    this.file = null;
  };
  DebugRecordingFileProvider_CreateWavFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DebugRecordingFileProvider_CreateWavFile_ResponseParams.generate = function(generator_) {
    var generated = new DebugRecordingFileProvider_CreateWavFile_ResponseParams;
    generated.file = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  DebugRecordingFileProvider_CreateWavFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  DebugRecordingFileProvider_CreateWavFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, this.file.getHandleDeps());
    }
    return handles;
  };

  DebugRecordingFileProvider_CreateWavFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DebugRecordingFileProvider_CreateWavFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.file.setHandlesInternal_(handles, idx);
    return idx;
  };

  DebugRecordingFileProvider_CreateWavFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate DebugRecordingFileProvider_CreateWavFile_ResponseParams.file
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DebugRecordingFileProvider_CreateWavFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DebugRecordingFileProvider_CreateWavFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DebugRecordingFileProvider_CreateWavFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file = decoder.decodeStructPointer(file$.File);
    return val;
  };

  DebugRecordingFileProvider_CreateWavFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DebugRecordingFileProvider_CreateWavFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.file);
  };
  function DebugRecording_Enable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DebugRecording_Enable_Params.prototype.initDefaults_ = function() {
    this.fileProvider = new DebugRecordingFileProviderPtr();
  };
  DebugRecording_Enable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DebugRecording_Enable_Params.generate = function(generator_) {
    var generated = new DebugRecording_Enable_Params;
    generated.fileProvider = generator_.generateInterface("audio.mojom.DebugRecordingFileProvider", false);
    return generated;
  };

  DebugRecording_Enable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.fileProvider = mutator_.mutateInterface(this.fileProvider, "audio.mojom.DebugRecordingFileProvider", false);
    }
    return this;
  };
  DebugRecording_Enable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fileProvider !== null) {
      Array.prototype.push.apply(handles, ["audio.mojom.DebugRecordingFileProviderPtr"]);
    }
    return handles;
  };

  DebugRecording_Enable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DebugRecording_Enable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.fileProvider = handles[idx++];;
    return idx;
  };

  DebugRecording_Enable_Params.validate = function(messageValidator, offset) {
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


    // validate DebugRecording_Enable_Params.fileProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DebugRecording_Enable_Params.encodedSize = codec.kStructHeaderSize + 8;

  DebugRecording_Enable_Params.decode = function(decoder) {
    var packed;
    var val = new DebugRecording_Enable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fileProvider = decoder.decodeStruct(new codec.Interface(DebugRecordingFileProviderPtr));
    return val;
  };

  DebugRecording_Enable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DebugRecording_Enable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(DebugRecordingFileProviderPtr), val.fileProvider);
  };
  var kDebugRecordingFileProvider_CreateWavFile_Name = 1200255033;

  function DebugRecordingFileProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DebugRecordingFileProvider,
                                                   handleOrPtrInfo);
  }

  function DebugRecordingFileProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DebugRecordingFileProvider, associatedInterfacePtrInfo);
  }

  DebugRecordingFileProviderAssociatedPtr.prototype =
      Object.create(DebugRecordingFileProviderPtr.prototype);
  DebugRecordingFileProviderAssociatedPtr.prototype.constructor =
      DebugRecordingFileProviderAssociatedPtr;

  function DebugRecordingFileProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  DebugRecordingFileProviderPtr.prototype.createWavFile = function() {
    return DebugRecordingFileProviderProxy.prototype.createWavFile
        .apply(this.ptr.getProxy(), arguments);
  };

  DebugRecordingFileProviderProxy.prototype.createWavFile = function(streamType, id) {
    var params_ = new DebugRecordingFileProvider_CreateWavFile_Params();
    params_.streamType = streamType;
    params_.id = id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDebugRecordingFileProvider_CreateWavFile_Name,
          codec.align(DebugRecordingFileProvider_CreateWavFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DebugRecordingFileProvider_CreateWavFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DebugRecordingFileProvider_CreateWavFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DebugRecordingFileProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  DebugRecordingFileProviderStub.prototype.createWavFile = function(streamType, id) {
    return this.delegate_ && this.delegate_.createWavFile && this.delegate_.createWavFile(streamType, id);
  }

  DebugRecordingFileProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  DebugRecordingFileProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDebugRecordingFileProvider_CreateWavFile_Name:
      var params = reader.decodeStruct(DebugRecordingFileProvider_CreateWavFile_Params);
      this.createWavFile(params.streamType, params.id).then(function(response) {
        var responseParams =
            new DebugRecordingFileProvider_CreateWavFile_ResponseParams();
        responseParams.file = response.file;
        var builder = new codec.MessageV1Builder(
            kDebugRecordingFileProvider_CreateWavFile_Name,
            codec.align(DebugRecordingFileProvider_CreateWavFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DebugRecordingFileProvider_CreateWavFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDebugRecordingFileProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDebugRecordingFileProvider_CreateWavFile_Name:
        if (message.expectsResponse())
          paramsClass = DebugRecordingFileProvider_CreateWavFile_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDebugRecordingFileProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDebugRecordingFileProvider_CreateWavFile_Name:
        if (message.isResponse())
          paramsClass = DebugRecordingFileProvider_CreateWavFile_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DebugRecordingFileProvider = {
    name: 'audio.mojom.DebugRecordingFileProvider',
    kVersion: 0,
    ptrClass: DebugRecordingFileProviderPtr,
    proxyClass: DebugRecordingFileProviderProxy,
    stubClass: DebugRecordingFileProviderStub,
    validateRequest: validateDebugRecordingFileProviderRequest,
    validateResponse: validateDebugRecordingFileProviderResponse,
    mojomId: 'services/audio/public/mojom/debug_recording.mojom',
    fuzzMethods: {
      createWavFile: {
        params: DebugRecordingFileProvider_CreateWavFile_Params,
      },
    },
  };
  DebugRecordingFileProviderStub.prototype.validator = validateDebugRecordingFileProviderRequest;
  DebugRecordingFileProviderProxy.prototype.validator = validateDebugRecordingFileProviderResponse;
  var kDebugRecording_Enable_Name = 1620926225;

  function DebugRecordingPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DebugRecording,
                                                   handleOrPtrInfo);
  }

  function DebugRecordingAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DebugRecording, associatedInterfacePtrInfo);
  }

  DebugRecordingAssociatedPtr.prototype =
      Object.create(DebugRecordingPtr.prototype);
  DebugRecordingAssociatedPtr.prototype.constructor =
      DebugRecordingAssociatedPtr;

  function DebugRecordingProxy(receiver) {
    this.receiver_ = receiver;
  }
  DebugRecordingPtr.prototype.enable = function() {
    return DebugRecordingProxy.prototype.enable
        .apply(this.ptr.getProxy(), arguments);
  };

  DebugRecordingProxy.prototype.enable = function(fileProvider) {
    var params_ = new DebugRecording_Enable_Params();
    params_.fileProvider = fileProvider;
    var builder = new codec.MessageV0Builder(
        kDebugRecording_Enable_Name,
        codec.align(DebugRecording_Enable_Params.encodedSize));
    builder.encodeStruct(DebugRecording_Enable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DebugRecordingStub(delegate) {
    this.delegate_ = delegate;
  }
  DebugRecordingStub.prototype.enable = function(fileProvider) {
    return this.delegate_ && this.delegate_.enable && this.delegate_.enable(fileProvider);
  }

  DebugRecordingStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDebugRecording_Enable_Name:
      var params = reader.decodeStruct(DebugRecording_Enable_Params);
      this.enable(params.fileProvider);
      return true;
    default:
      return false;
    }
  };

  DebugRecordingStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDebugRecordingRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDebugRecording_Enable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DebugRecording_Enable_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDebugRecordingResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DebugRecording = {
    name: 'audio.mojom.DebugRecording',
    kVersion: 0,
    ptrClass: DebugRecordingPtr,
    proxyClass: DebugRecordingProxy,
    stubClass: DebugRecordingStub,
    validateRequest: validateDebugRecordingRequest,
    validateResponse: null,
    mojomId: 'services/audio/public/mojom/debug_recording.mojom',
    fuzzMethods: {
      enable: {
        params: DebugRecording_Enable_Params,
      },
    },
  };
  DebugRecordingStub.prototype.validator = validateDebugRecordingRequest;
  DebugRecordingProxy.prototype.validator = null;
  exports.DebugRecordingStreamType = DebugRecordingStreamType;
  exports.DebugRecordingFileProvider = DebugRecordingFileProvider;
  exports.DebugRecordingFileProviderPtr = DebugRecordingFileProviderPtr;
  exports.DebugRecordingFileProviderAssociatedPtr = DebugRecordingFileProviderAssociatedPtr;
  exports.DebugRecording = DebugRecording;
  exports.DebugRecordingPtr = DebugRecordingPtr;
  exports.DebugRecordingAssociatedPtr = DebugRecordingAssociatedPtr;
})();