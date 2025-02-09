// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/download/public/common/download_stream.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('download.mojom');


  var NetworkRequestStatus = {};
  NetworkRequestStatus.OK = 0;
  NetworkRequestStatus.NETWORK_TIMEOUT = NetworkRequestStatus.OK + 1;
  NetworkRequestStatus.NETWORK_DISCONNECTED = NetworkRequestStatus.NETWORK_TIMEOUT + 1;
  NetworkRequestStatus.NETWORK_SERVER_DOWN = NetworkRequestStatus.NETWORK_DISCONNECTED + 1;
  NetworkRequestStatus.SERVER_NO_RANGE = NetworkRequestStatus.NETWORK_SERVER_DOWN + 1;
  NetworkRequestStatus.SERVER_CONTENT_LENGTH_MISMATCH = NetworkRequestStatus.SERVER_NO_RANGE + 1;
  NetworkRequestStatus.SERVER_UNREACHABLE = NetworkRequestStatus.SERVER_CONTENT_LENGTH_MISMATCH + 1;
  NetworkRequestStatus.SERVER_CERT_PROBLEM = NetworkRequestStatus.SERVER_UNREACHABLE + 1;
  NetworkRequestStatus.USER_CANCELED = NetworkRequestStatus.SERVER_CERT_PROBLEM + 1;
  NetworkRequestStatus.NETWORK_FAILED = NetworkRequestStatus.USER_CANCELED + 1;

  NetworkRequestStatus.isKnownEnumValue = function(value) {
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

  NetworkRequestStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function DownloadStreamHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DownloadStreamHandle.prototype.initDefaults_ = function() {
    this.stream = null;
    this.clientRequest = new bindings.InterfaceRequest();
  };
  DownloadStreamHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DownloadStreamHandle.generate = function(generator_) {
    var generated = new DownloadStreamHandle;
    generated.stream = generator_.generateDataPipeConsumer(false);
    generated.clientRequest = generator_.generateInterfaceRequest("download.mojom.DownloadStreamClient", false);
    return generated;
  };

  DownloadStreamHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stream = mutator_.mutateDataPipeConsumer(this.stream, false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientRequest = mutator_.mutateInterfaceRequest(this.clientRequest, "download.mojom.DownloadStreamClient", false);
    }
    return this;
  };
  DownloadStreamHandle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.stream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.clientRequest !== null) {
      Array.prototype.push.apply(handles, ["download.mojom.DownloadStreamClientRequest"]);
    }
    return handles;
  };

  DownloadStreamHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DownloadStreamHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.stream = handles[idx++];;
    this.clientRequest = handles[idx++];;
    return idx;
  };

  DownloadStreamHandle.validate = function(messageValidator, offset) {
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


    // validate DownloadStreamHandle.stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DownloadStreamHandle.clientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DownloadStreamHandle.encodedSize = codec.kStructHeaderSize + 8;

  DownloadStreamHandle.decode = function(decoder) {
    var packed;
    var val = new DownloadStreamHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stream = decoder.decodeStruct(codec.Handle);
    val.clientRequest = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  DownloadStreamHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DownloadStreamHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.stream);
    encoder.encodeStruct(codec.InterfaceRequest, val.clientRequest);
  };
  function DownloadStreamClient_OnStreamCompleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DownloadStreamClient_OnStreamCompleted_Params.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  DownloadStreamClient_OnStreamCompleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DownloadStreamClient_OnStreamCompleted_Params.generate = function(generator_) {
    var generated = new DownloadStreamClient_OnStreamCompleted_Params;
    generated.status = generator_.generateEnum(0, 9);
    return generated;
  };

  DownloadStreamClient_OnStreamCompleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 9);
    }
    return this;
  };
  DownloadStreamClient_OnStreamCompleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DownloadStreamClient_OnStreamCompleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DownloadStreamClient_OnStreamCompleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DownloadStreamClient_OnStreamCompleted_Params.validate = function(messageValidator, offset) {
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


    // validate DownloadStreamClient_OnStreamCompleted_Params.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, NetworkRequestStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DownloadStreamClient_OnStreamCompleted_Params.encodedSize = codec.kStructHeaderSize + 8;

  DownloadStreamClient_OnStreamCompleted_Params.decode = function(decoder) {
    var packed;
    var val = new DownloadStreamClient_OnStreamCompleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DownloadStreamClient_OnStreamCompleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DownloadStreamClient_OnStreamCompleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDownloadStreamClient_OnStreamCompleted_Name = 1660899108;

  function DownloadStreamClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DownloadStreamClient,
                                                   handleOrPtrInfo);
  }

  function DownloadStreamClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DownloadStreamClient, associatedInterfacePtrInfo);
  }

  DownloadStreamClientAssociatedPtr.prototype =
      Object.create(DownloadStreamClientPtr.prototype);
  DownloadStreamClientAssociatedPtr.prototype.constructor =
      DownloadStreamClientAssociatedPtr;

  function DownloadStreamClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  DownloadStreamClientPtr.prototype.onStreamCompleted = function() {
    return DownloadStreamClientProxy.prototype.onStreamCompleted
        .apply(this.ptr.getProxy(), arguments);
  };

  DownloadStreamClientProxy.prototype.onStreamCompleted = function(status) {
    var params_ = new DownloadStreamClient_OnStreamCompleted_Params();
    params_.status = status;
    var builder = new codec.MessageV0Builder(
        kDownloadStreamClient_OnStreamCompleted_Name,
        codec.align(DownloadStreamClient_OnStreamCompleted_Params.encodedSize));
    builder.encodeStruct(DownloadStreamClient_OnStreamCompleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DownloadStreamClientStub(delegate) {
    this.delegate_ = delegate;
  }
  DownloadStreamClientStub.prototype.onStreamCompleted = function(status) {
    return this.delegate_ && this.delegate_.onStreamCompleted && this.delegate_.onStreamCompleted(status);
  }

  DownloadStreamClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDownloadStreamClient_OnStreamCompleted_Name:
      var params = reader.decodeStruct(DownloadStreamClient_OnStreamCompleted_Params);
      this.onStreamCompleted(params.status);
      return true;
    default:
      return false;
    }
  };

  DownloadStreamClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDownloadStreamClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDownloadStreamClient_OnStreamCompleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DownloadStreamClient_OnStreamCompleted_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDownloadStreamClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DownloadStreamClient = {
    name: 'download.mojom.DownloadStreamClient',
    kVersion: 0,
    ptrClass: DownloadStreamClientPtr,
    proxyClass: DownloadStreamClientProxy,
    stubClass: DownloadStreamClientStub,
    validateRequest: validateDownloadStreamClientRequest,
    validateResponse: null,
    mojomId: 'components/download/public/common/download_stream.mojom',
    fuzzMethods: {
      onStreamCompleted: {
        params: DownloadStreamClient_OnStreamCompleted_Params,
      },
    },
  };
  DownloadStreamClientStub.prototype.validator = validateDownloadStreamClientRequest;
  DownloadStreamClientProxy.prototype.validator = null;
  exports.NetworkRequestStatus = NetworkRequestStatus;
  exports.DownloadStreamHandle = DownloadStreamHandle;
  exports.DownloadStreamClient = DownloadStreamClient;
  exports.DownloadStreamClientPtr = DownloadStreamClientPtr;
  exports.DownloadStreamClientAssociatedPtr = DownloadStreamClientAssociatedPtr;
})();