// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/nacl/common/nacl.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('nacl.mojom');


  var NaClErrorCode = {};

  NaClErrorCode.isKnownEnumValue = function(value) {
    return false;
  };

  NaClErrorCode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function NaClRendererHost_ReportExitStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NaClRendererHost_ReportExitStatus_Params.prototype.initDefaults_ = function() {
    this.exitStatus = 0;
  };
  NaClRendererHost_ReportExitStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NaClRendererHost_ReportExitStatus_Params.generate = function(generator_) {
    var generated = new NaClRendererHost_ReportExitStatus_Params;
    generated.exitStatus = generator_.generateInt32();
    return generated;
  };

  NaClRendererHost_ReportExitStatus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.exitStatus = mutator_.mutateInt32(this.exitStatus);
    }
    return this;
  };
  NaClRendererHost_ReportExitStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NaClRendererHost_ReportExitStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NaClRendererHost_ReportExitStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NaClRendererHost_ReportExitStatus_Params.validate = function(messageValidator, offset) {
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

  NaClRendererHost_ReportExitStatus_Params.encodedSize = codec.kStructHeaderSize + 8;

  NaClRendererHost_ReportExitStatus_Params.decode = function(decoder) {
    var packed;
    var val = new NaClRendererHost_ReportExitStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.exitStatus = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NaClRendererHost_ReportExitStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NaClRendererHost_ReportExitStatus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.exitStatus);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NaClRendererHost_ReportExitStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NaClRendererHost_ReportExitStatus_ResponseParams.prototype.initDefaults_ = function() {
  };
  NaClRendererHost_ReportExitStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NaClRendererHost_ReportExitStatus_ResponseParams.generate = function(generator_) {
    var generated = new NaClRendererHost_ReportExitStatus_ResponseParams;
    return generated;
  };

  NaClRendererHost_ReportExitStatus_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NaClRendererHost_ReportExitStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NaClRendererHost_ReportExitStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NaClRendererHost_ReportExitStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NaClRendererHost_ReportExitStatus_ResponseParams.validate = function(messageValidator, offset) {
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

  NaClRendererHost_ReportExitStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NaClRendererHost_ReportExitStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NaClRendererHost_ReportExitStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NaClRendererHost_ReportExitStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NaClRendererHost_ReportExitStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NaClRendererHost_ReportLoadStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NaClRendererHost_ReportLoadStatus_Params.prototype.initDefaults_ = function() {
    this.loadStatus = 0;
  };
  NaClRendererHost_ReportLoadStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NaClRendererHost_ReportLoadStatus_Params.generate = function(generator_) {
    var generated = new NaClRendererHost_ReportLoadStatus_Params;
    generated.loadStatus = generator_.generateEnum();
    return generated;
  };

  NaClRendererHost_ReportLoadStatus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.loadStatus = mutator_.mutateEnum(this.loadStatus);
    }
    return this;
  };
  NaClRendererHost_ReportLoadStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NaClRendererHost_ReportLoadStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NaClRendererHost_ReportLoadStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NaClRendererHost_ReportLoadStatus_Params.validate = function(messageValidator, offset) {
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


    // validate NaClRendererHost_ReportLoadStatus_Params.loadStatus
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, NaClErrorCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NaClRendererHost_ReportLoadStatus_Params.encodedSize = codec.kStructHeaderSize + 8;

  NaClRendererHost_ReportLoadStatus_Params.decode = function(decoder) {
    var packed;
    var val = new NaClRendererHost_ReportLoadStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.loadStatus = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NaClRendererHost_ReportLoadStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NaClRendererHost_ReportLoadStatus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.loadStatus);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NaClRendererHost_ReportLoadStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NaClRendererHost_ReportLoadStatus_ResponseParams.prototype.initDefaults_ = function() {
  };
  NaClRendererHost_ReportLoadStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NaClRendererHost_ReportLoadStatus_ResponseParams.generate = function(generator_) {
    var generated = new NaClRendererHost_ReportLoadStatus_ResponseParams;
    return generated;
  };

  NaClRendererHost_ReportLoadStatus_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NaClRendererHost_ReportLoadStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NaClRendererHost_ReportLoadStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NaClRendererHost_ReportLoadStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NaClRendererHost_ReportLoadStatus_ResponseParams.validate = function(messageValidator, offset) {
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

  NaClRendererHost_ReportLoadStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NaClRendererHost_ReportLoadStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NaClRendererHost_ReportLoadStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NaClRendererHost_ReportLoadStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NaClRendererHost_ReportLoadStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NaClRendererHost_ProvideExitControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NaClRendererHost_ProvideExitControl_Params.prototype.initDefaults_ = function() {
    this.exitControl = new NaClExitControlPtr();
  };
  NaClRendererHost_ProvideExitControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NaClRendererHost_ProvideExitControl_Params.generate = function(generator_) {
    var generated = new NaClRendererHost_ProvideExitControl_Params;
    generated.exitControl = generator_.generateInterface("nacl.mojom.NaClExitControl", false);
    return generated;
  };

  NaClRendererHost_ProvideExitControl_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.exitControl = mutator_.mutateInterface(this.exitControl, "nacl.mojom.NaClExitControl", false);
    }
    return this;
  };
  NaClRendererHost_ProvideExitControl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.exitControl !== null) {
      Array.prototype.push.apply(handles, ["nacl.mojom.NaClExitControlPtr"]);
    }
    return handles;
  };

  NaClRendererHost_ProvideExitControl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NaClRendererHost_ProvideExitControl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.exitControl = handles[idx++];;
    return idx;
  };

  NaClRendererHost_ProvideExitControl_Params.validate = function(messageValidator, offset) {
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


    // validate NaClRendererHost_ProvideExitControl_Params.exitControl
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NaClRendererHost_ProvideExitControl_Params.encodedSize = codec.kStructHeaderSize + 8;

  NaClRendererHost_ProvideExitControl_Params.decode = function(decoder) {
    var packed;
    var val = new NaClRendererHost_ProvideExitControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.exitControl = decoder.decodeStruct(new codec.Interface(NaClExitControlPtr));
    return val;
  };

  NaClRendererHost_ProvideExitControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NaClRendererHost_ProvideExitControl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(NaClExitControlPtr), val.exitControl);
  };
  var kNaClRendererHost_ReportExitStatus_Name = 362933980;
  var kNaClRendererHost_ReportLoadStatus_Name = 1575651096;
  var kNaClRendererHost_ProvideExitControl_Name = 349979203;

  function NaClRendererHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NaClRendererHost,
                                                   handleOrPtrInfo);
  }

  function NaClRendererHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NaClRendererHost, associatedInterfacePtrInfo);
  }

  NaClRendererHostAssociatedPtr.prototype =
      Object.create(NaClRendererHostPtr.prototype);
  NaClRendererHostAssociatedPtr.prototype.constructor =
      NaClRendererHostAssociatedPtr;

  function NaClRendererHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  NaClRendererHostPtr.prototype.reportExitStatus = function() {
    return NaClRendererHostProxy.prototype.reportExitStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  NaClRendererHostProxy.prototype.reportExitStatus = function(exitStatus) {
    var params_ = new NaClRendererHost_ReportExitStatus_Params();
    params_.exitStatus = exitStatus;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNaClRendererHost_ReportExitStatus_Name,
          codec.align(NaClRendererHost_ReportExitStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NaClRendererHost_ReportExitStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NaClRendererHost_ReportExitStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NaClRendererHostPtr.prototype.reportLoadStatus = function() {
    return NaClRendererHostProxy.prototype.reportLoadStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  NaClRendererHostProxy.prototype.reportLoadStatus = function(loadStatus) {
    var params_ = new NaClRendererHost_ReportLoadStatus_Params();
    params_.loadStatus = loadStatus;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNaClRendererHost_ReportLoadStatus_Name,
          codec.align(NaClRendererHost_ReportLoadStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NaClRendererHost_ReportLoadStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NaClRendererHost_ReportLoadStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NaClRendererHostPtr.prototype.provideExitControl = function() {
    return NaClRendererHostProxy.prototype.provideExitControl
        .apply(this.ptr.getProxy(), arguments);
  };

  NaClRendererHostProxy.prototype.provideExitControl = function(exitControl) {
    var params_ = new NaClRendererHost_ProvideExitControl_Params();
    params_.exitControl = exitControl;
    var builder = new codec.MessageV0Builder(
        kNaClRendererHost_ProvideExitControl_Name,
        codec.align(NaClRendererHost_ProvideExitControl_Params.encodedSize));
    builder.encodeStruct(NaClRendererHost_ProvideExitControl_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NaClRendererHostStub(delegate) {
    this.delegate_ = delegate;
  }
  NaClRendererHostStub.prototype.reportExitStatus = function(exitStatus) {
    return this.delegate_ && this.delegate_.reportExitStatus && this.delegate_.reportExitStatus(exitStatus);
  }
  NaClRendererHostStub.prototype.reportLoadStatus = function(loadStatus) {
    return this.delegate_ && this.delegate_.reportLoadStatus && this.delegate_.reportLoadStatus(loadStatus);
  }
  NaClRendererHostStub.prototype.provideExitControl = function(exitControl) {
    return this.delegate_ && this.delegate_.provideExitControl && this.delegate_.provideExitControl(exitControl);
  }

  NaClRendererHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNaClRendererHost_ProvideExitControl_Name:
      var params = reader.decodeStruct(NaClRendererHost_ProvideExitControl_Params);
      this.provideExitControl(params.exitControl);
      return true;
    default:
      return false;
    }
  };

  NaClRendererHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNaClRendererHost_ReportExitStatus_Name:
      var params = reader.decodeStruct(NaClRendererHost_ReportExitStatus_Params);
      this.reportExitStatus(params.exitStatus).then(function(response) {
        var responseParams =
            new NaClRendererHost_ReportExitStatus_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNaClRendererHost_ReportExitStatus_Name,
            codec.align(NaClRendererHost_ReportExitStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NaClRendererHost_ReportExitStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNaClRendererHost_ReportLoadStatus_Name:
      var params = reader.decodeStruct(NaClRendererHost_ReportLoadStatus_Params);
      this.reportLoadStatus(params.loadStatus).then(function(response) {
        var responseParams =
            new NaClRendererHost_ReportLoadStatus_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNaClRendererHost_ReportLoadStatus_Name,
            codec.align(NaClRendererHost_ReportLoadStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NaClRendererHost_ReportLoadStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNaClRendererHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNaClRendererHost_ReportExitStatus_Name:
        if (message.expectsResponse())
          paramsClass = NaClRendererHost_ReportExitStatus_Params;
      break;
      case kNaClRendererHost_ReportLoadStatus_Name:
        if (message.expectsResponse())
          paramsClass = NaClRendererHost_ReportLoadStatus_Params;
      break;
      case kNaClRendererHost_ProvideExitControl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NaClRendererHost_ProvideExitControl_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNaClRendererHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNaClRendererHost_ReportExitStatus_Name:
        if (message.isResponse())
          paramsClass = NaClRendererHost_ReportExitStatus_ResponseParams;
        break;
      case kNaClRendererHost_ReportLoadStatus_Name:
        if (message.isResponse())
          paramsClass = NaClRendererHost_ReportLoadStatus_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NaClRendererHost = {
    name: 'nacl.mojom.NaClRendererHost',
    kVersion: 0,
    ptrClass: NaClRendererHostPtr,
    proxyClass: NaClRendererHostProxy,
    stubClass: NaClRendererHostStub,
    validateRequest: validateNaClRendererHostRequest,
    validateResponse: validateNaClRendererHostResponse,
    mojomId: 'components/nacl/common/nacl.mojom',
    fuzzMethods: {
      reportExitStatus: {
        params: NaClRendererHost_ReportExitStatus_Params,
      },
      reportLoadStatus: {
        params: NaClRendererHost_ReportLoadStatus_Params,
      },
      provideExitControl: {
        params: NaClRendererHost_ProvideExitControl_Params,
      },
    },
  };
  NaClRendererHostStub.prototype.validator = validateNaClRendererHostRequest;
  NaClRendererHostProxy.prototype.validator = validateNaClRendererHostResponse;

  function NaClExitControlPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NaClExitControl,
                                                   handleOrPtrInfo);
  }

  function NaClExitControlAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NaClExitControl, associatedInterfacePtrInfo);
  }

  NaClExitControlAssociatedPtr.prototype =
      Object.create(NaClExitControlPtr.prototype);
  NaClExitControlAssociatedPtr.prototype.constructor =
      NaClExitControlAssociatedPtr;

  function NaClExitControlProxy(receiver) {
    this.receiver_ = receiver;
  }

  function NaClExitControlStub(delegate) {
    this.delegate_ = delegate;
  }

  NaClExitControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  NaClExitControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNaClExitControlRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateNaClExitControlResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NaClExitControl = {
    name: 'nacl.mojom.NaClExitControl',
    kVersion: 0,
    ptrClass: NaClExitControlPtr,
    proxyClass: NaClExitControlProxy,
    stubClass: NaClExitControlStub,
    validateRequest: validateNaClExitControlRequest,
    validateResponse: null,
    mojomId: 'components/nacl/common/nacl.mojom',
    fuzzMethods: {
    },
  };
  NaClExitControlStub.prototype.validator = validateNaClExitControlRequest;
  NaClExitControlProxy.prototype.validator = null;
  exports.NaClErrorCode = NaClErrorCode;
  exports.NaClRendererHost = NaClRendererHost;
  exports.NaClRendererHostPtr = NaClRendererHostPtr;
  exports.NaClRendererHostAssociatedPtr = NaClRendererHostAssociatedPtr;
  exports.NaClExitControl = NaClExitControl;
  exports.NaClExitControlPtr = NaClExitControlPtr;
  exports.NaClExitControlAssociatedPtr = NaClExitControlAssociatedPtr;
})();