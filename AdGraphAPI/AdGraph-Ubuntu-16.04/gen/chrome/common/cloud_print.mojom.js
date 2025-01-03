// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/cloud_print.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('cloudPrint.mojom');
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../mojo/public/mojom/base/values.mojom.js');
  }



  function CloudPrint_EnableCloudPrintProxyWithRobot_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloudPrint_EnableCloudPrintProxyWithRobot_Params.prototype.initDefaults_ = function() {
    this.robotAuthCode = null;
    this.robotEmail = null;
    this.userEmail = null;
    this.userSettings = null;
  };
  CloudPrint_EnableCloudPrintProxyWithRobot_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloudPrint_EnableCloudPrintProxyWithRobot_Params.generate = function(generator_) {
    var generated = new CloudPrint_EnableCloudPrintProxyWithRobot_Params;
    generated.robotAuthCode = generator_.generateString(false);
    generated.robotEmail = generator_.generateString(false);
    generated.userEmail = generator_.generateString(false);
    generated.userSettings = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    return generated;
  };

  CloudPrint_EnableCloudPrintProxyWithRobot_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.robotAuthCode = mutator_.mutateString(this.robotAuthCode, false);
    }
    if (mutator_.chooseMutateField()) {
      this.robotEmail = mutator_.mutateString(this.robotEmail, false);
    }
    if (mutator_.chooseMutateField()) {
      this.userEmail = mutator_.mutateString(this.userEmail, false);
    }
    if (mutator_.chooseMutateField()) {
      this.userSettings = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    return this;
  };
  CloudPrint_EnableCloudPrintProxyWithRobot_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CloudPrint_EnableCloudPrintProxyWithRobot_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloudPrint_EnableCloudPrintProxyWithRobot_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CloudPrint_EnableCloudPrintProxyWithRobot_Params.validate = function(messageValidator, offset) {
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


    // validate CloudPrint_EnableCloudPrintProxyWithRobot_Params.robotAuthCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CloudPrint_EnableCloudPrintProxyWithRobot_Params.robotEmail
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CloudPrint_EnableCloudPrintProxyWithRobot_Params.userEmail
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CloudPrint_EnableCloudPrintProxyWithRobot_Params.userSettings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CloudPrint_EnableCloudPrintProxyWithRobot_Params.encodedSize = codec.kStructHeaderSize + 32;

  CloudPrint_EnableCloudPrintProxyWithRobot_Params.decode = function(decoder) {
    var packed;
    var val = new CloudPrint_EnableCloudPrintProxyWithRobot_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.robotAuthCode = decoder.decodeStruct(codec.String);
    val.robotEmail = decoder.decodeStruct(codec.String);
    val.userEmail = decoder.decodeStruct(codec.String);
    val.userSettings = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  CloudPrint_EnableCloudPrintProxyWithRobot_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloudPrint_EnableCloudPrintProxyWithRobot_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.robotAuthCode);
    encoder.encodeStruct(codec.String, val.robotEmail);
    encoder.encodeStruct(codec.String, val.userEmail);
    encoder.encodeStructPointer(values$.DictionaryValue, val.userSettings);
  };
  function CloudPrint_DisableCloudPrintProxy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloudPrint_DisableCloudPrintProxy_Params.prototype.initDefaults_ = function() {
  };
  CloudPrint_DisableCloudPrintProxy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloudPrint_DisableCloudPrintProxy_Params.generate = function(generator_) {
    var generated = new CloudPrint_DisableCloudPrintProxy_Params;
    return generated;
  };

  CloudPrint_DisableCloudPrintProxy_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CloudPrint_DisableCloudPrintProxy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CloudPrint_DisableCloudPrintProxy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloudPrint_DisableCloudPrintProxy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CloudPrint_DisableCloudPrintProxy_Params.validate = function(messageValidator, offset) {
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

  CloudPrint_DisableCloudPrintProxy_Params.encodedSize = codec.kStructHeaderSize + 0;

  CloudPrint_DisableCloudPrintProxy_Params.decode = function(decoder) {
    var packed;
    var val = new CloudPrint_DisableCloudPrintProxy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CloudPrint_DisableCloudPrintProxy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloudPrint_DisableCloudPrintProxy_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CloudPrint_GetCloudPrintProxyInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloudPrint_GetCloudPrintProxyInfo_Params.prototype.initDefaults_ = function() {
  };
  CloudPrint_GetCloudPrintProxyInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloudPrint_GetCloudPrintProxyInfo_Params.generate = function(generator_) {
    var generated = new CloudPrint_GetCloudPrintProxyInfo_Params;
    return generated;
  };

  CloudPrint_GetCloudPrintProxyInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CloudPrint_GetCloudPrintProxyInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CloudPrint_GetCloudPrintProxyInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloudPrint_GetCloudPrintProxyInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CloudPrint_GetCloudPrintProxyInfo_Params.validate = function(messageValidator, offset) {
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

  CloudPrint_GetCloudPrintProxyInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  CloudPrint_GetCloudPrintProxyInfo_Params.decode = function(decoder) {
    var packed;
    var val = new CloudPrint_GetCloudPrintProxyInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CloudPrint_GetCloudPrintProxyInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloudPrint_GetCloudPrintProxyInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CloudPrint_GetCloudPrintProxyInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.enabled = false;
    this.email = null;
    this.proxyId = null;
  };
  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.generate = function(generator_) {
    var generated = new CloudPrint_GetCloudPrintProxyInfo_ResponseParams;
    generated.enabled = generator_.generateBool();
    generated.email = generator_.generateString(false);
    generated.proxyId = generator_.generateString(false);
    return generated;
  };

  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    if (mutator_.chooseMutateField()) {
      this.email = mutator_.mutateString(this.email, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyId = mutator_.mutateString(this.proxyId, false);
    }
    return this;
  };
  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate CloudPrint_GetCloudPrintProxyInfo_ResponseParams.email
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CloudPrint_GetCloudPrintProxyInfo_ResponseParams.proxyId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CloudPrint_GetCloudPrintProxyInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.email = decoder.decodeStruct(codec.String);
    val.proxyId = decoder.decodeStruct(codec.String);
    return val;
  };

  CloudPrint_GetCloudPrintProxyInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloudPrint_GetCloudPrintProxyInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.email);
    encoder.encodeStruct(codec.String, val.proxyId);
  };
  function CloudPrint_GetPrinters_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloudPrint_GetPrinters_Params.prototype.initDefaults_ = function() {
  };
  CloudPrint_GetPrinters_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloudPrint_GetPrinters_Params.generate = function(generator_) {
    var generated = new CloudPrint_GetPrinters_Params;
    return generated;
  };

  CloudPrint_GetPrinters_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CloudPrint_GetPrinters_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CloudPrint_GetPrinters_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloudPrint_GetPrinters_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CloudPrint_GetPrinters_Params.validate = function(messageValidator, offset) {
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

  CloudPrint_GetPrinters_Params.encodedSize = codec.kStructHeaderSize + 0;

  CloudPrint_GetPrinters_Params.decode = function(decoder) {
    var packed;
    var val = new CloudPrint_GetPrinters_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CloudPrint_GetPrinters_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloudPrint_GetPrinters_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CloudPrint_GetPrinters_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloudPrint_GetPrinters_ResponseParams.prototype.initDefaults_ = function() {
    this.printers = null;
  };
  CloudPrint_GetPrinters_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloudPrint_GetPrinters_ResponseParams.generate = function(generator_) {
    var generated = new CloudPrint_GetPrinters_ResponseParams;
    generated.printers = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  CloudPrint_GetPrinters_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.printers = mutator_.mutateArray(this.printers, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  CloudPrint_GetPrinters_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CloudPrint_GetPrinters_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloudPrint_GetPrinters_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CloudPrint_GetPrinters_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CloudPrint_GetPrinters_ResponseParams.printers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CloudPrint_GetPrinters_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  CloudPrint_GetPrinters_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CloudPrint_GetPrinters_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.printers = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  CloudPrint_GetPrinters_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloudPrint_GetPrinters_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.printers);
  };
  var kCloudPrint_EnableCloudPrintProxyWithRobot_Name = 1170812758;
  var kCloudPrint_DisableCloudPrintProxy_Name = 731006042;
  var kCloudPrint_GetCloudPrintProxyInfo_Name = 1838004755;
  var kCloudPrint_GetPrinters_Name = 1333553502;

  function CloudPrintPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CloudPrint,
                                                   handleOrPtrInfo);
  }

  function CloudPrintAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CloudPrint, associatedInterfacePtrInfo);
  }

  CloudPrintAssociatedPtr.prototype =
      Object.create(CloudPrintPtr.prototype);
  CloudPrintAssociatedPtr.prototype.constructor =
      CloudPrintAssociatedPtr;

  function CloudPrintProxy(receiver) {
    this.receiver_ = receiver;
  }
  CloudPrintPtr.prototype.enableCloudPrintProxyWithRobot = function() {
    return CloudPrintProxy.prototype.enableCloudPrintProxyWithRobot
        .apply(this.ptr.getProxy(), arguments);
  };

  CloudPrintProxy.prototype.enableCloudPrintProxyWithRobot = function(robotAuthCode, robotEmail, userEmail, userSettings) {
    var params_ = new CloudPrint_EnableCloudPrintProxyWithRobot_Params();
    params_.robotAuthCode = robotAuthCode;
    params_.robotEmail = robotEmail;
    params_.userEmail = userEmail;
    params_.userSettings = userSettings;
    var builder = new codec.MessageV0Builder(
        kCloudPrint_EnableCloudPrintProxyWithRobot_Name,
        codec.align(CloudPrint_EnableCloudPrintProxyWithRobot_Params.encodedSize));
    builder.encodeStruct(CloudPrint_EnableCloudPrintProxyWithRobot_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CloudPrintPtr.prototype.disableCloudPrintProxy = function() {
    return CloudPrintProxy.prototype.disableCloudPrintProxy
        .apply(this.ptr.getProxy(), arguments);
  };

  CloudPrintProxy.prototype.disableCloudPrintProxy = function() {
    var params_ = new CloudPrint_DisableCloudPrintProxy_Params();
    var builder = new codec.MessageV0Builder(
        kCloudPrint_DisableCloudPrintProxy_Name,
        codec.align(CloudPrint_DisableCloudPrintProxy_Params.encodedSize));
    builder.encodeStruct(CloudPrint_DisableCloudPrintProxy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CloudPrintPtr.prototype.getCloudPrintProxyInfo = function() {
    return CloudPrintProxy.prototype.getCloudPrintProxyInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  CloudPrintProxy.prototype.getCloudPrintProxyInfo = function() {
    var params_ = new CloudPrint_GetCloudPrintProxyInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCloudPrint_GetCloudPrintProxyInfo_Name,
          codec.align(CloudPrint_GetCloudPrintProxyInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CloudPrint_GetCloudPrintProxyInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CloudPrint_GetCloudPrintProxyInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CloudPrintPtr.prototype.getPrinters = function() {
    return CloudPrintProxy.prototype.getPrinters
        .apply(this.ptr.getProxy(), arguments);
  };

  CloudPrintProxy.prototype.getPrinters = function() {
    var params_ = new CloudPrint_GetPrinters_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCloudPrint_GetPrinters_Name,
          codec.align(CloudPrint_GetPrinters_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CloudPrint_GetPrinters_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CloudPrint_GetPrinters_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CloudPrintStub(delegate) {
    this.delegate_ = delegate;
  }
  CloudPrintStub.prototype.enableCloudPrintProxyWithRobot = function(robotAuthCode, robotEmail, userEmail, userSettings) {
    return this.delegate_ && this.delegate_.enableCloudPrintProxyWithRobot && this.delegate_.enableCloudPrintProxyWithRobot(robotAuthCode, robotEmail, userEmail, userSettings);
  }
  CloudPrintStub.prototype.disableCloudPrintProxy = function() {
    return this.delegate_ && this.delegate_.disableCloudPrintProxy && this.delegate_.disableCloudPrintProxy();
  }
  CloudPrintStub.prototype.getCloudPrintProxyInfo = function() {
    return this.delegate_ && this.delegate_.getCloudPrintProxyInfo && this.delegate_.getCloudPrintProxyInfo();
  }
  CloudPrintStub.prototype.getPrinters = function() {
    return this.delegate_ && this.delegate_.getPrinters && this.delegate_.getPrinters();
  }

  CloudPrintStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCloudPrint_EnableCloudPrintProxyWithRobot_Name:
      var params = reader.decodeStruct(CloudPrint_EnableCloudPrintProxyWithRobot_Params);
      this.enableCloudPrintProxyWithRobot(params.robotAuthCode, params.robotEmail, params.userEmail, params.userSettings);
      return true;
    case kCloudPrint_DisableCloudPrintProxy_Name:
      var params = reader.decodeStruct(CloudPrint_DisableCloudPrintProxy_Params);
      this.disableCloudPrintProxy();
      return true;
    default:
      return false;
    }
  };

  CloudPrintStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCloudPrint_GetCloudPrintProxyInfo_Name:
      var params = reader.decodeStruct(CloudPrint_GetCloudPrintProxyInfo_Params);
      this.getCloudPrintProxyInfo().then(function(response) {
        var responseParams =
            new CloudPrint_GetCloudPrintProxyInfo_ResponseParams();
        responseParams.enabled = response.enabled;
        responseParams.email = response.email;
        responseParams.proxyId = response.proxyId;
        var builder = new codec.MessageV1Builder(
            kCloudPrint_GetCloudPrintProxyInfo_Name,
            codec.align(CloudPrint_GetCloudPrintProxyInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CloudPrint_GetCloudPrintProxyInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCloudPrint_GetPrinters_Name:
      var params = reader.decodeStruct(CloudPrint_GetPrinters_Params);
      this.getPrinters().then(function(response) {
        var responseParams =
            new CloudPrint_GetPrinters_ResponseParams();
        responseParams.printers = response.printers;
        var builder = new codec.MessageV1Builder(
            kCloudPrint_GetPrinters_Name,
            codec.align(CloudPrint_GetPrinters_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CloudPrint_GetPrinters_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCloudPrintRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCloudPrint_EnableCloudPrintProxyWithRobot_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CloudPrint_EnableCloudPrintProxyWithRobot_Params;
      break;
      case kCloudPrint_DisableCloudPrintProxy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CloudPrint_DisableCloudPrintProxy_Params;
      break;
      case kCloudPrint_GetCloudPrintProxyInfo_Name:
        if (message.expectsResponse())
          paramsClass = CloudPrint_GetCloudPrintProxyInfo_Params;
      break;
      case kCloudPrint_GetPrinters_Name:
        if (message.expectsResponse())
          paramsClass = CloudPrint_GetPrinters_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCloudPrintResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCloudPrint_GetCloudPrintProxyInfo_Name:
        if (message.isResponse())
          paramsClass = CloudPrint_GetCloudPrintProxyInfo_ResponseParams;
        break;
      case kCloudPrint_GetPrinters_Name:
        if (message.isResponse())
          paramsClass = CloudPrint_GetPrinters_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CloudPrint = {
    name: 'cloud_print.mojom.CloudPrint',
    kVersion: 0,
    ptrClass: CloudPrintPtr,
    proxyClass: CloudPrintProxy,
    stubClass: CloudPrintStub,
    validateRequest: validateCloudPrintRequest,
    validateResponse: validateCloudPrintResponse,
    mojomId: 'chrome/common/cloud_print.mojom',
    fuzzMethods: {
      enableCloudPrintProxyWithRobot: {
        params: CloudPrint_EnableCloudPrintProxyWithRobot_Params,
      },
      disableCloudPrintProxy: {
        params: CloudPrint_DisableCloudPrintProxy_Params,
      },
      getCloudPrintProxyInfo: {
        params: CloudPrint_GetCloudPrintProxyInfo_Params,
      },
      getPrinters: {
        params: CloudPrint_GetPrinters_Params,
      },
    },
  };
  CloudPrintStub.prototype.validator = validateCloudPrintRequest;
  CloudPrintProxy.prototype.validator = validateCloudPrintResponse;
  exports.CloudPrint = CloudPrint;
  exports.CloudPrintPtr = CloudPrintPtr;
  exports.CloudPrintAssociatedPtr = CloudPrintAssociatedPtr;
})();