// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'extensions/common/api/mime_handler.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('extensions.mimeHandler');



  function StreamInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StreamInfo.prototype.initDefaults_ = function() {
    this.mimeType = null;
    this.originalUrl = null;
    this.streamUrl = null;
    this.tabId = 0;
    this.embedded = false;
    this.responseHeaders = null;
  };
  StreamInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StreamInfo.generate = function(generator_) {
    var generated = new StreamInfo;
    generated.mimeType = generator_.generateString(false);
    generated.originalUrl = generator_.generateString(false);
    generated.streamUrl = generator_.generateString(false);
    generated.tabId = generator_.generateInt32();
    generated.responseHeaders = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateString(false);
      });
    generated.embedded = generator_.generateBool();
    return generated;
  };

  StreamInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateString(this.mimeType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.originalUrl = mutator_.mutateString(this.originalUrl, false);
    }
    if (mutator_.chooseMutateField()) {
      this.streamUrl = mutator_.mutateString(this.streamUrl, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.responseHeaders = mutator_.mutateMap(this.responseHeaders,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateString(val, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.embedded = mutator_.mutateBool(this.embedded);
    }
    return this;
  };
  StreamInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  StreamInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StreamInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  StreamInfo.validate = function(messageValidator, offset) {
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


    // validate StreamInfo.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamInfo.originalUrl
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StreamInfo.streamUrl
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate StreamInfo.responseHeaders
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 32, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  StreamInfo.encodedSize = codec.kStructHeaderSize + 40;

  StreamInfo.decode = function(decoder) {
    var packed;
    var val = new StreamInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mimeType = decoder.decodeStruct(codec.String);
    val.originalUrl = decoder.decodeStruct(codec.String);
    val.streamUrl = decoder.decodeStruct(codec.String);
    val.tabId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.embedded = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.responseHeaders = decoder.decodeMapPointer(codec.String, codec.String);
    return val;
  };

  StreamInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StreamInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mimeType);
    encoder.encodeStruct(codec.String, val.originalUrl);
    encoder.encodeStruct(codec.String, val.streamUrl);
    encoder.encodeStruct(codec.Int32, val.tabId);
    packed = 0;
    packed |= (val.embedded & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, codec.String, val.responseHeaders);
  };
  function MimeHandlerService_GetStreamInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_GetStreamInfo_Params.prototype.initDefaults_ = function() {
  };
  MimeHandlerService_GetStreamInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MimeHandlerService_GetStreamInfo_Params.generate = function(generator_) {
    var generated = new MimeHandlerService_GetStreamInfo_Params;
    return generated;
  };

  MimeHandlerService_GetStreamInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MimeHandlerService_GetStreamInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MimeHandlerService_GetStreamInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MimeHandlerService_GetStreamInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MimeHandlerService_GetStreamInfo_Params.validate = function(messageValidator, offset) {
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

  MimeHandlerService_GetStreamInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  MimeHandlerService_GetStreamInfo_Params.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_GetStreamInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MimeHandlerService_GetStreamInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_GetStreamInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MimeHandlerService_GetStreamInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.streamInfo = null;
  };
  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MimeHandlerService_GetStreamInfo_ResponseParams.generate = function(generator_) {
    var generated = new MimeHandlerService_GetStreamInfo_ResponseParams;
    generated.streamInfo = generator_.generateStruct(extensions.mimeHandler.StreamInfo, true);
    return generated;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.streamInfo = mutator_.mutateStruct(extensions.mimeHandler.StreamInfo, true);
    }
    return this;
  };
  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MimeHandlerService_GetStreamInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MimeHandlerService_GetStreamInfo_ResponseParams.streamInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, StreamInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MimeHandlerService_GetStreamInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_GetStreamInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.streamInfo = decoder.decodeStructPointer(StreamInfo);
    return val;
  };

  MimeHandlerService_GetStreamInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(StreamInfo, val.streamInfo);
  };
  function MimeHandlerService_AbortStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_AbortStream_Params.prototype.initDefaults_ = function() {
  };
  MimeHandlerService_AbortStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MimeHandlerService_AbortStream_Params.generate = function(generator_) {
    var generated = new MimeHandlerService_AbortStream_Params;
    return generated;
  };

  MimeHandlerService_AbortStream_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MimeHandlerService_AbortStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MimeHandlerService_AbortStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MimeHandlerService_AbortStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MimeHandlerService_AbortStream_Params.validate = function(messageValidator, offset) {
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

  MimeHandlerService_AbortStream_Params.encodedSize = codec.kStructHeaderSize + 0;

  MimeHandlerService_AbortStream_Params.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_AbortStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MimeHandlerService_AbortStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_AbortStream_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MimeHandlerService_AbortStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MimeHandlerService_AbortStream_ResponseParams.prototype.initDefaults_ = function() {
  };
  MimeHandlerService_AbortStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MimeHandlerService_AbortStream_ResponseParams.generate = function(generator_) {
    var generated = new MimeHandlerService_AbortStream_ResponseParams;
    return generated;
  };

  MimeHandlerService_AbortStream_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  MimeHandlerService_AbortStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MimeHandlerService_AbortStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MimeHandlerService_AbortStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MimeHandlerService_AbortStream_ResponseParams.validate = function(messageValidator, offset) {
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

  MimeHandlerService_AbortStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  MimeHandlerService_AbortStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MimeHandlerService_AbortStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MimeHandlerService_AbortStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MimeHandlerService_AbortStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kMimeHandlerService_GetStreamInfo_Name = 84708826;
  var kMimeHandlerService_AbortStream_Name = 346161876;

  function MimeHandlerServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MimeHandlerService,
                                                   handleOrPtrInfo);
  }

  function MimeHandlerServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MimeHandlerService, associatedInterfacePtrInfo);
  }

  MimeHandlerServiceAssociatedPtr.prototype =
      Object.create(MimeHandlerServicePtr.prototype);
  MimeHandlerServiceAssociatedPtr.prototype.constructor =
      MimeHandlerServiceAssociatedPtr;

  function MimeHandlerServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  MimeHandlerServicePtr.prototype.getStreamInfo = function() {
    return MimeHandlerServiceProxy.prototype.getStreamInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  MimeHandlerServiceProxy.prototype.getStreamInfo = function() {
    var params_ = new MimeHandlerService_GetStreamInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMimeHandlerService_GetStreamInfo_Name,
          codec.align(MimeHandlerService_GetStreamInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MimeHandlerService_GetStreamInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MimeHandlerService_GetStreamInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MimeHandlerServicePtr.prototype.abortStream = function() {
    return MimeHandlerServiceProxy.prototype.abortStream
        .apply(this.ptr.getProxy(), arguments);
  };

  MimeHandlerServiceProxy.prototype.abortStream = function() {
    var params_ = new MimeHandlerService_AbortStream_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMimeHandlerService_AbortStream_Name,
          codec.align(MimeHandlerService_AbortStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MimeHandlerService_AbortStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MimeHandlerService_AbortStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MimeHandlerServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  MimeHandlerServiceStub.prototype.getStreamInfo = function() {
    return this.delegate_ && this.delegate_.getStreamInfo && this.delegate_.getStreamInfo();
  }
  MimeHandlerServiceStub.prototype.abortStream = function() {
    return this.delegate_ && this.delegate_.abortStream && this.delegate_.abortStream();
  }

  MimeHandlerServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MimeHandlerServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMimeHandlerService_GetStreamInfo_Name:
      var params = reader.decodeStruct(MimeHandlerService_GetStreamInfo_Params);
      this.getStreamInfo().then(function(response) {
        var responseParams =
            new MimeHandlerService_GetStreamInfo_ResponseParams();
        responseParams.streamInfo = response.streamInfo;
        var builder = new codec.MessageV1Builder(
            kMimeHandlerService_GetStreamInfo_Name,
            codec.align(MimeHandlerService_GetStreamInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MimeHandlerService_GetStreamInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMimeHandlerService_AbortStream_Name:
      var params = reader.decodeStruct(MimeHandlerService_AbortStream_Params);
      this.abortStream().then(function(response) {
        var responseParams =
            new MimeHandlerService_AbortStream_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kMimeHandlerService_AbortStream_Name,
            codec.align(MimeHandlerService_AbortStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MimeHandlerService_AbortStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMimeHandlerServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMimeHandlerService_GetStreamInfo_Name:
        if (message.expectsResponse())
          paramsClass = MimeHandlerService_GetStreamInfo_Params;
      break;
      case kMimeHandlerService_AbortStream_Name:
        if (message.expectsResponse())
          paramsClass = MimeHandlerService_AbortStream_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMimeHandlerServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMimeHandlerService_GetStreamInfo_Name:
        if (message.isResponse())
          paramsClass = MimeHandlerService_GetStreamInfo_ResponseParams;
        break;
      case kMimeHandlerService_AbortStream_Name:
        if (message.isResponse())
          paramsClass = MimeHandlerService_AbortStream_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MimeHandlerService = {
    name: 'extensions.mime_handler.MimeHandlerService',
    kVersion: 0,
    ptrClass: MimeHandlerServicePtr,
    proxyClass: MimeHandlerServiceProxy,
    stubClass: MimeHandlerServiceStub,
    validateRequest: validateMimeHandlerServiceRequest,
    validateResponse: validateMimeHandlerServiceResponse,
    mojomId: 'extensions/common/api/mime_handler.mojom',
    fuzzMethods: {
      getStreamInfo: {
        params: MimeHandlerService_GetStreamInfo_Params,
      },
      abortStream: {
        params: MimeHandlerService_AbortStream_Params,
      },
    },
  };
  MimeHandlerServiceStub.prototype.validator = validateMimeHandlerServiceRequest;
  MimeHandlerServiceProxy.prototype.validator = validateMimeHandlerServiceResponse;
  exports.StreamInfo = StreamInfo;
  exports.MimeHandlerService = MimeHandlerService;
  exports.MimeHandlerServicePtr = MimeHandlerServicePtr;
  exports.MimeHandlerServiceAssociatedPtr = MimeHandlerServiceAssociatedPtr;
})();