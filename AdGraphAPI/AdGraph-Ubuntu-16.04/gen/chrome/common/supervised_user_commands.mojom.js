// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/supervised_user_commands.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('supervisedUser.mojom');



  function SupervisedUserCommands_GoBack_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SupervisedUserCommands_GoBack_Params.prototype.initDefaults_ = function() {
  };
  SupervisedUserCommands_GoBack_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SupervisedUserCommands_GoBack_Params.generate = function(generator_) {
    var generated = new SupervisedUserCommands_GoBack_Params;
    return generated;
  };

  SupervisedUserCommands_GoBack_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SupervisedUserCommands_GoBack_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SupervisedUserCommands_GoBack_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SupervisedUserCommands_GoBack_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SupervisedUserCommands_GoBack_Params.validate = function(messageValidator, offset) {
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

  SupervisedUserCommands_GoBack_Params.encodedSize = codec.kStructHeaderSize + 0;

  SupervisedUserCommands_GoBack_Params.decode = function(decoder) {
    var packed;
    var val = new SupervisedUserCommands_GoBack_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SupervisedUserCommands_GoBack_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SupervisedUserCommands_GoBack_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SupervisedUserCommands_RequestPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SupervisedUserCommands_RequestPermission_Params.prototype.initDefaults_ = function() {
  };
  SupervisedUserCommands_RequestPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SupervisedUserCommands_RequestPermission_Params.generate = function(generator_) {
    var generated = new SupervisedUserCommands_RequestPermission_Params;
    return generated;
  };

  SupervisedUserCommands_RequestPermission_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SupervisedUserCommands_RequestPermission_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SupervisedUserCommands_RequestPermission_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SupervisedUserCommands_RequestPermission_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SupervisedUserCommands_RequestPermission_Params.validate = function(messageValidator, offset) {
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

  SupervisedUserCommands_RequestPermission_Params.encodedSize = codec.kStructHeaderSize + 0;

  SupervisedUserCommands_RequestPermission_Params.decode = function(decoder) {
    var packed;
    var val = new SupervisedUserCommands_RequestPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SupervisedUserCommands_RequestPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SupervisedUserCommands_RequestPermission_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function SupervisedUserCommands_RequestPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SupervisedUserCommands_RequestPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  SupervisedUserCommands_RequestPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SupervisedUserCommands_RequestPermission_ResponseParams.generate = function(generator_) {
    var generated = new SupervisedUserCommands_RequestPermission_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  SupervisedUserCommands_RequestPermission_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  SupervisedUserCommands_RequestPermission_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SupervisedUserCommands_RequestPermission_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SupervisedUserCommands_RequestPermission_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SupervisedUserCommands_RequestPermission_ResponseParams.validate = function(messageValidator, offset) {
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

  SupervisedUserCommands_RequestPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SupervisedUserCommands_RequestPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SupervisedUserCommands_RequestPermission_ResponseParams();
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

  SupervisedUserCommands_RequestPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SupervisedUserCommands_RequestPermission_ResponseParams.encodedSize);
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
  function SupervisedUserCommands_Feedback_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SupervisedUserCommands_Feedback_Params.prototype.initDefaults_ = function() {
  };
  SupervisedUserCommands_Feedback_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SupervisedUserCommands_Feedback_Params.generate = function(generator_) {
    var generated = new SupervisedUserCommands_Feedback_Params;
    return generated;
  };

  SupervisedUserCommands_Feedback_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  SupervisedUserCommands_Feedback_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SupervisedUserCommands_Feedback_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SupervisedUserCommands_Feedback_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SupervisedUserCommands_Feedback_Params.validate = function(messageValidator, offset) {
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

  SupervisedUserCommands_Feedback_Params.encodedSize = codec.kStructHeaderSize + 0;

  SupervisedUserCommands_Feedback_Params.decode = function(decoder) {
    var packed;
    var val = new SupervisedUserCommands_Feedback_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SupervisedUserCommands_Feedback_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SupervisedUserCommands_Feedback_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kSupervisedUserCommands_GoBack_Name = 2021424456;
  var kSupervisedUserCommands_RequestPermission_Name = 953606165;
  var kSupervisedUserCommands_Feedback_Name = 1115727065;

  function SupervisedUserCommandsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SupervisedUserCommands,
                                                   handleOrPtrInfo);
  }

  function SupervisedUserCommandsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SupervisedUserCommands, associatedInterfacePtrInfo);
  }

  SupervisedUserCommandsAssociatedPtr.prototype =
      Object.create(SupervisedUserCommandsPtr.prototype);
  SupervisedUserCommandsAssociatedPtr.prototype.constructor =
      SupervisedUserCommandsAssociatedPtr;

  function SupervisedUserCommandsProxy(receiver) {
    this.receiver_ = receiver;
  }
  SupervisedUserCommandsPtr.prototype.goBack = function() {
    return SupervisedUserCommandsProxy.prototype.goBack
        .apply(this.ptr.getProxy(), arguments);
  };

  SupervisedUserCommandsProxy.prototype.goBack = function() {
    var params_ = new SupervisedUserCommands_GoBack_Params();
    var builder = new codec.MessageV0Builder(
        kSupervisedUserCommands_GoBack_Name,
        codec.align(SupervisedUserCommands_GoBack_Params.encodedSize));
    builder.encodeStruct(SupervisedUserCommands_GoBack_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SupervisedUserCommandsPtr.prototype.requestPermission = function() {
    return SupervisedUserCommandsProxy.prototype.requestPermission
        .apply(this.ptr.getProxy(), arguments);
  };

  SupervisedUserCommandsProxy.prototype.requestPermission = function() {
    var params_ = new SupervisedUserCommands_RequestPermission_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSupervisedUserCommands_RequestPermission_Name,
          codec.align(SupervisedUserCommands_RequestPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SupervisedUserCommands_RequestPermission_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SupervisedUserCommands_RequestPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SupervisedUserCommandsPtr.prototype.feedback = function() {
    return SupervisedUserCommandsProxy.prototype.feedback
        .apply(this.ptr.getProxy(), arguments);
  };

  SupervisedUserCommandsProxy.prototype.feedback = function() {
    var params_ = new SupervisedUserCommands_Feedback_Params();
    var builder = new codec.MessageV0Builder(
        kSupervisedUserCommands_Feedback_Name,
        codec.align(SupervisedUserCommands_Feedback_Params.encodedSize));
    builder.encodeStruct(SupervisedUserCommands_Feedback_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SupervisedUserCommandsStub(delegate) {
    this.delegate_ = delegate;
  }
  SupervisedUserCommandsStub.prototype.goBack = function() {
    return this.delegate_ && this.delegate_.goBack && this.delegate_.goBack();
  }
  SupervisedUserCommandsStub.prototype.requestPermission = function() {
    return this.delegate_ && this.delegate_.requestPermission && this.delegate_.requestPermission();
  }
  SupervisedUserCommandsStub.prototype.feedback = function() {
    return this.delegate_ && this.delegate_.feedback && this.delegate_.feedback();
  }

  SupervisedUserCommandsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSupervisedUserCommands_GoBack_Name:
      var params = reader.decodeStruct(SupervisedUserCommands_GoBack_Params);
      this.goBack();
      return true;
    case kSupervisedUserCommands_Feedback_Name:
      var params = reader.decodeStruct(SupervisedUserCommands_Feedback_Params);
      this.feedback();
      return true;
    default:
      return false;
    }
  };

  SupervisedUserCommandsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSupervisedUserCommands_RequestPermission_Name:
      var params = reader.decodeStruct(SupervisedUserCommands_RequestPermission_Params);
      this.requestPermission().then(function(response) {
        var responseParams =
            new SupervisedUserCommands_RequestPermission_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kSupervisedUserCommands_RequestPermission_Name,
            codec.align(SupervisedUserCommands_RequestPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SupervisedUserCommands_RequestPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSupervisedUserCommandsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSupervisedUserCommands_GoBack_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SupervisedUserCommands_GoBack_Params;
      break;
      case kSupervisedUserCommands_RequestPermission_Name:
        if (message.expectsResponse())
          paramsClass = SupervisedUserCommands_RequestPermission_Params;
      break;
      case kSupervisedUserCommands_Feedback_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SupervisedUserCommands_Feedback_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSupervisedUserCommandsResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSupervisedUserCommands_RequestPermission_Name:
        if (message.isResponse())
          paramsClass = SupervisedUserCommands_RequestPermission_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SupervisedUserCommands = {
    name: 'supervised_user.mojom.SupervisedUserCommands',
    kVersion: 0,
    ptrClass: SupervisedUserCommandsPtr,
    proxyClass: SupervisedUserCommandsProxy,
    stubClass: SupervisedUserCommandsStub,
    validateRequest: validateSupervisedUserCommandsRequest,
    validateResponse: validateSupervisedUserCommandsResponse,
    mojomId: 'chrome/common/supervised_user_commands.mojom',
    fuzzMethods: {
      goBack: {
        params: SupervisedUserCommands_GoBack_Params,
      },
      requestPermission: {
        params: SupervisedUserCommands_RequestPermission_Params,
      },
      feedback: {
        params: SupervisedUserCommands_Feedback_Params,
      },
    },
  };
  SupervisedUserCommandsStub.prototype.validator = validateSupervisedUserCommandsRequest;
  SupervisedUserCommandsProxy.prototype.validator = validateSupervisedUserCommandsResponse;
  exports.SupervisedUserCommands = SupervisedUserCommands;
  exports.SupervisedUserCommandsPtr = SupervisedUserCommandsPtr;
  exports.SupervisedUserCommandsAssociatedPtr = SupervisedUserCommandsAssociatedPtr;
})();