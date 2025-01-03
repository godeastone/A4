// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'net/interfaces/host_resolver_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('net.interfaces');
  var address_family$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/address_family.mojom', 'address_family.mojom.js');
  }
  var address_list$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/address_list.mojom', 'address_list.mojom.js');
  }



  function HostResolverRequestInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostResolverRequestInfo.prototype.initDefaults_ = function() {
    this.host = null;
    this.port = 0;
    this.isMyIpAddress = false;
    this.addressFamily = 0;
  };
  HostResolverRequestInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HostResolverRequestInfo.generate = function(generator_) {
    var generated = new HostResolverRequestInfo;
    generated.host = generator_.generateString(false);
    generated.port = generator_.generateUint16();
    generated.addressFamily = generator_.generateEnum(0, 2);
    generated.isMyIpAddress = generator_.generateBool();
    return generated;
  };

  HostResolverRequestInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateString(this.host, false);
    }
    if (mutator_.chooseMutateField()) {
      this.port = mutator_.mutateUint16(this.port);
    }
    if (mutator_.chooseMutateField()) {
      this.addressFamily = mutator_.mutateEnum(this.addressFamily, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.isMyIpAddress = mutator_.mutateBool(this.isMyIpAddress);
    }
    return this;
  };
  HostResolverRequestInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HostResolverRequestInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HostResolverRequestInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HostResolverRequestInfo.validate = function(messageValidator, offset) {
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


    // validate HostResolverRequestInfo.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate HostResolverRequestInfo.addressFamily
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, address_family$.AddressFamily);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  HostResolverRequestInfo.encodedSize = codec.kStructHeaderSize + 16;

  HostResolverRequestInfo.decode = function(decoder) {
    var packed;
    var val = new HostResolverRequestInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.host = decoder.decodeStruct(codec.String);
    val.port = decoder.decodeStruct(codec.Uint16);
    packed = decoder.readUint8();
    val.isMyIpAddress = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    val.addressFamily = decoder.decodeStruct(codec.Int32);
    return val;
  };

  HostResolverRequestInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostResolverRequestInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeStruct(codec.Uint16, val.port);
    packed = 0;
    packed |= (val.isMyIpAddress & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.addressFamily);
  };
  function HostResolverRequestClient_ReportResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostResolverRequestClient_ReportResult_Params.prototype.initDefaults_ = function() {
    this.error = 0;
    this.result = null;
  };
  HostResolverRequestClient_ReportResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HostResolverRequestClient_ReportResult_Params.generate = function(generator_) {
    var generated = new HostResolverRequestClient_ReportResult_Params;
    generated.error = generator_.generateInt32();
    generated.result = generator_.generateStruct(net.interfaces.AddressList, false);
    return generated;
  };

  HostResolverRequestClient_ReportResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateInt32(this.error);
    }
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(net.interfaces.AddressList, false);
    }
    return this;
  };
  HostResolverRequestClient_ReportResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HostResolverRequestClient_ReportResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HostResolverRequestClient_ReportResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HostResolverRequestClient_ReportResult_Params.validate = function(messageValidator, offset) {
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



    // validate HostResolverRequestClient_ReportResult_Params.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, address_list$.AddressList, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HostResolverRequestClient_ReportResult_Params.encodedSize = codec.kStructHeaderSize + 16;

  HostResolverRequestClient_ReportResult_Params.decode = function(decoder) {
    var packed;
    var val = new HostResolverRequestClient_ReportResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.result = decoder.decodeStructPointer(address_list$.AddressList);
    return val;
  };

  HostResolverRequestClient_ReportResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostResolverRequestClient_ReportResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(address_list$.AddressList, val.result);
  };
  var kHostResolverRequestClient_ReportResult_Name = 1214059367;

  function HostResolverRequestClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HostResolverRequestClient,
                                                   handleOrPtrInfo);
  }

  function HostResolverRequestClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HostResolverRequestClient, associatedInterfacePtrInfo);
  }

  HostResolverRequestClientAssociatedPtr.prototype =
      Object.create(HostResolverRequestClientPtr.prototype);
  HostResolverRequestClientAssociatedPtr.prototype.constructor =
      HostResolverRequestClientAssociatedPtr;

  function HostResolverRequestClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  HostResolverRequestClientPtr.prototype.reportResult = function() {
    return HostResolverRequestClientProxy.prototype.reportResult
        .apply(this.ptr.getProxy(), arguments);
  };

  HostResolverRequestClientProxy.prototype.reportResult = function(error, result) {
    var params_ = new HostResolverRequestClient_ReportResult_Params();
    params_.error = error;
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kHostResolverRequestClient_ReportResult_Name,
        codec.align(HostResolverRequestClient_ReportResult_Params.encodedSize));
    builder.encodeStruct(HostResolverRequestClient_ReportResult_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function HostResolverRequestClientStub(delegate) {
    this.delegate_ = delegate;
  }
  HostResolverRequestClientStub.prototype.reportResult = function(error, result) {
    return this.delegate_ && this.delegate_.reportResult && this.delegate_.reportResult(error, result);
  }

  HostResolverRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHostResolverRequestClient_ReportResult_Name:
      var params = reader.decodeStruct(HostResolverRequestClient_ReportResult_Params);
      this.reportResult(params.error, params.result);
      return true;
    default:
      return false;
    }
  };

  HostResolverRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateHostResolverRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHostResolverRequestClient_ReportResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = HostResolverRequestClient_ReportResult_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHostResolverRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var HostResolverRequestClient = {
    name: 'net.interfaces.HostResolverRequestClient',
    kVersion: 0,
    ptrClass: HostResolverRequestClientPtr,
    proxyClass: HostResolverRequestClientProxy,
    stubClass: HostResolverRequestClientStub,
    validateRequest: validateHostResolverRequestClientRequest,
    validateResponse: null,
    mojomId: 'net/interfaces/host_resolver_service.mojom',
    fuzzMethods: {
      reportResult: {
        params: HostResolverRequestClient_ReportResult_Params,
      },
    },
  };
  HostResolverRequestClientStub.prototype.validator = validateHostResolverRequestClientRequest;
  HostResolverRequestClientProxy.prototype.validator = null;
  exports.HostResolverRequestInfo = HostResolverRequestInfo;
  exports.HostResolverRequestClient = HostResolverRequestClient;
  exports.HostResolverRequestClientPtr = HostResolverRequestClientPtr;
  exports.HostResolverRequestClientAssociatedPtr = HostResolverRequestClientAssociatedPtr;
})();