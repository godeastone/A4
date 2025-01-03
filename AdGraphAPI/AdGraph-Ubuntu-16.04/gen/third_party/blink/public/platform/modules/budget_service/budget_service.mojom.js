// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/budget_service/budget_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');


  var BudgetOperationType = {};
  BudgetOperationType.SILENT_PUSH = 0;
  BudgetOperationType.INVALID_OPERATION = BudgetOperationType.SILENT_PUSH + 1;

  BudgetOperationType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  BudgetOperationType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BudgetServiceErrorType = {};
  BudgetServiceErrorType.NONE = 0;
  BudgetServiceErrorType.DATABASE_ERROR = BudgetServiceErrorType.NONE + 1;
  BudgetServiceErrorType.NOT_SUPPORTED = BudgetServiceErrorType.DATABASE_ERROR + 1;

  BudgetServiceErrorType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  BudgetServiceErrorType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function BudgetState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetState.prototype.initDefaults_ = function() {
    this.budgetAt = 0;
    this.time = 0;
  };
  BudgetState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetState.generate = function(generator_) {
    var generated = new BudgetState;
    generated.budgetAt = generator_.generateDouble();
    generated.time = generator_.generateDouble();
    return generated;
  };

  BudgetState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.budgetAt = mutator_.mutateDouble(this.budgetAt);
    }
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateDouble(this.time);
    }
    return this;
  };
  BudgetState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetState.validate = function(messageValidator, offset) {
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



    return validator.validationError.NONE;
  };

  BudgetState.encodedSize = codec.kStructHeaderSize + 16;

  BudgetState.decode = function(decoder) {
    var packed;
    var val = new BudgetState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.budgetAt = decoder.decodeStruct(codec.Double);
    val.time = decoder.decodeStruct(codec.Double);
    return val;
  };

  BudgetState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.budgetAt);
    encoder.encodeStruct(codec.Double, val.time);
  };
  function BudgetService_GetCost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetService_GetCost_Params.prototype.initDefaults_ = function() {
    this.operation = 0;
  };
  BudgetService_GetCost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetService_GetCost_Params.generate = function(generator_) {
    var generated = new BudgetService_GetCost_Params;
    generated.operation = generator_.generateEnum(0, 1);
    return generated;
  };

  BudgetService_GetCost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.operation = mutator_.mutateEnum(this.operation, 0, 1);
    }
    return this;
  };
  BudgetService_GetCost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetService_GetCost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetService_GetCost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetService_GetCost_Params.validate = function(messageValidator, offset) {
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


    // validate BudgetService_GetCost_Params.operation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BudgetOperationType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BudgetService_GetCost_Params.encodedSize = codec.kStructHeaderSize + 8;

  BudgetService_GetCost_Params.decode = function(decoder) {
    var packed;
    var val = new BudgetService_GetCost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.operation = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BudgetService_GetCost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetService_GetCost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.operation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BudgetService_GetCost_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetService_GetCost_ResponseParams.prototype.initDefaults_ = function() {
    this.cost = 0;
  };
  BudgetService_GetCost_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetService_GetCost_ResponseParams.generate = function(generator_) {
    var generated = new BudgetService_GetCost_ResponseParams;
    generated.cost = generator_.generateDouble();
    return generated;
  };

  BudgetService_GetCost_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cost = mutator_.mutateDouble(this.cost);
    }
    return this;
  };
  BudgetService_GetCost_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetService_GetCost_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetService_GetCost_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetService_GetCost_ResponseParams.validate = function(messageValidator, offset) {
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

  BudgetService_GetCost_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BudgetService_GetCost_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BudgetService_GetCost_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cost = decoder.decodeStruct(codec.Double);
    return val;
  };

  BudgetService_GetCost_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetService_GetCost_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.cost);
  };
  function BudgetService_GetBudget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetService_GetBudget_Params.prototype.initDefaults_ = function() {
  };
  BudgetService_GetBudget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetService_GetBudget_Params.generate = function(generator_) {
    var generated = new BudgetService_GetBudget_Params;
    return generated;
  };

  BudgetService_GetBudget_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  BudgetService_GetBudget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetService_GetBudget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetService_GetBudget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetService_GetBudget_Params.validate = function(messageValidator, offset) {
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

  BudgetService_GetBudget_Params.encodedSize = codec.kStructHeaderSize + 0;

  BudgetService_GetBudget_Params.decode = function(decoder) {
    var packed;
    var val = new BudgetService_GetBudget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BudgetService_GetBudget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetService_GetBudget_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function BudgetService_GetBudget_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetService_GetBudget_ResponseParams.prototype.initDefaults_ = function() {
    this.errorType = 0;
    this.budget = null;
  };
  BudgetService_GetBudget_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetService_GetBudget_ResponseParams.generate = function(generator_) {
    var generated = new BudgetService_GetBudget_ResponseParams;
    generated.errorType = generator_.generateEnum(0, 2);
    generated.budget = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.BudgetState, false);
    });
    return generated;
  };

  BudgetService_GetBudget_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.errorType = mutator_.mutateEnum(this.errorType, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.budget = mutator_.mutateArray(this.budget, function(val) {
        return mutator_.mutateStruct(blink.mojom.BudgetState, false);
      });
    }
    return this;
  };
  BudgetService_GetBudget_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetService_GetBudget_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetService_GetBudget_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetService_GetBudget_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BudgetService_GetBudget_ResponseParams.errorType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BudgetServiceErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BudgetService_GetBudget_ResponseParams.budget
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(BudgetState), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BudgetService_GetBudget_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BudgetService_GetBudget_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BudgetService_GetBudget_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.errorType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.budget = decoder.decodeArrayPointer(new codec.PointerTo(BudgetState));
    return val;
  };

  BudgetService_GetBudget_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetService_GetBudget_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.errorType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(BudgetState), val.budget);
  };
  function BudgetService_Reserve_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetService_Reserve_Params.prototype.initDefaults_ = function() {
    this.operation = 0;
  };
  BudgetService_Reserve_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetService_Reserve_Params.generate = function(generator_) {
    var generated = new BudgetService_Reserve_Params;
    generated.operation = generator_.generateEnum(0, 1);
    return generated;
  };

  BudgetService_Reserve_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.operation = mutator_.mutateEnum(this.operation, 0, 1);
    }
    return this;
  };
  BudgetService_Reserve_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetService_Reserve_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetService_Reserve_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetService_Reserve_Params.validate = function(messageValidator, offset) {
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


    // validate BudgetService_Reserve_Params.operation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BudgetOperationType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BudgetService_Reserve_Params.encodedSize = codec.kStructHeaderSize + 8;

  BudgetService_Reserve_Params.decode = function(decoder) {
    var packed;
    var val = new BudgetService_Reserve_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.operation = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BudgetService_Reserve_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetService_Reserve_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.operation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BudgetService_Reserve_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BudgetService_Reserve_ResponseParams.prototype.initDefaults_ = function() {
    this.errorType = 0;
    this.success = false;
  };
  BudgetService_Reserve_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BudgetService_Reserve_ResponseParams.generate = function(generator_) {
    var generated = new BudgetService_Reserve_ResponseParams;
    generated.errorType = generator_.generateEnum(0, 2);
    generated.success = generator_.generateBool();
    return generated;
  };

  BudgetService_Reserve_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.errorType = mutator_.mutateEnum(this.errorType, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  BudgetService_Reserve_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BudgetService_Reserve_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BudgetService_Reserve_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BudgetService_Reserve_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BudgetService_Reserve_ResponseParams.errorType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BudgetServiceErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BudgetService_Reserve_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BudgetService_Reserve_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BudgetService_Reserve_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.errorType = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BudgetService_Reserve_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BudgetService_Reserve_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.errorType);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kBudgetService_GetCost_Name = 534283272;
  var kBudgetService_GetBudget_Name = 1977295478;
  var kBudgetService_Reserve_Name = 1838908234;

  function BudgetServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BudgetService,
                                                   handleOrPtrInfo);
  }

  function BudgetServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BudgetService, associatedInterfacePtrInfo);
  }

  BudgetServiceAssociatedPtr.prototype =
      Object.create(BudgetServicePtr.prototype);
  BudgetServiceAssociatedPtr.prototype.constructor =
      BudgetServiceAssociatedPtr;

  function BudgetServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  BudgetServicePtr.prototype.getCost = function() {
    return BudgetServiceProxy.prototype.getCost
        .apply(this.ptr.getProxy(), arguments);
  };

  BudgetServiceProxy.prototype.getCost = function(operation) {
    var params_ = new BudgetService_GetCost_Params();
    params_.operation = operation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBudgetService_GetCost_Name,
          codec.align(BudgetService_GetCost_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BudgetService_GetCost_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BudgetService_GetCost_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BudgetServicePtr.prototype.getBudget = function() {
    return BudgetServiceProxy.prototype.getBudget
        .apply(this.ptr.getProxy(), arguments);
  };

  BudgetServiceProxy.prototype.getBudget = function() {
    var params_ = new BudgetService_GetBudget_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBudgetService_GetBudget_Name,
          codec.align(BudgetService_GetBudget_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BudgetService_GetBudget_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BudgetService_GetBudget_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BudgetServicePtr.prototype.reserve = function() {
    return BudgetServiceProxy.prototype.reserve
        .apply(this.ptr.getProxy(), arguments);
  };

  BudgetServiceProxy.prototype.reserve = function(operation) {
    var params_ = new BudgetService_Reserve_Params();
    params_.operation = operation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBudgetService_Reserve_Name,
          codec.align(BudgetService_Reserve_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BudgetService_Reserve_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BudgetService_Reserve_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BudgetServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  BudgetServiceStub.prototype.getCost = function(operation) {
    return this.delegate_ && this.delegate_.getCost && this.delegate_.getCost(operation);
  }
  BudgetServiceStub.prototype.getBudget = function() {
    return this.delegate_ && this.delegate_.getBudget && this.delegate_.getBudget();
  }
  BudgetServiceStub.prototype.reserve = function(operation) {
    return this.delegate_ && this.delegate_.reserve && this.delegate_.reserve(operation);
  }

  BudgetServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BudgetServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBudgetService_GetCost_Name:
      var params = reader.decodeStruct(BudgetService_GetCost_Params);
      this.getCost(params.operation).then(function(response) {
        var responseParams =
            new BudgetService_GetCost_ResponseParams();
        responseParams.cost = response.cost;
        var builder = new codec.MessageV1Builder(
            kBudgetService_GetCost_Name,
            codec.align(BudgetService_GetCost_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BudgetService_GetCost_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBudgetService_GetBudget_Name:
      var params = reader.decodeStruct(BudgetService_GetBudget_Params);
      this.getBudget().then(function(response) {
        var responseParams =
            new BudgetService_GetBudget_ResponseParams();
        responseParams.errorType = response.errorType;
        responseParams.budget = response.budget;
        var builder = new codec.MessageV1Builder(
            kBudgetService_GetBudget_Name,
            codec.align(BudgetService_GetBudget_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BudgetService_GetBudget_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBudgetService_Reserve_Name:
      var params = reader.decodeStruct(BudgetService_Reserve_Params);
      this.reserve(params.operation).then(function(response) {
        var responseParams =
            new BudgetService_Reserve_ResponseParams();
        responseParams.errorType = response.errorType;
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kBudgetService_Reserve_Name,
            codec.align(BudgetService_Reserve_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BudgetService_Reserve_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBudgetServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBudgetService_GetCost_Name:
        if (message.expectsResponse())
          paramsClass = BudgetService_GetCost_Params;
      break;
      case kBudgetService_GetBudget_Name:
        if (message.expectsResponse())
          paramsClass = BudgetService_GetBudget_Params;
      break;
      case kBudgetService_Reserve_Name:
        if (message.expectsResponse())
          paramsClass = BudgetService_Reserve_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBudgetServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBudgetService_GetCost_Name:
        if (message.isResponse())
          paramsClass = BudgetService_GetCost_ResponseParams;
        break;
      case kBudgetService_GetBudget_Name:
        if (message.isResponse())
          paramsClass = BudgetService_GetBudget_ResponseParams;
        break;
      case kBudgetService_Reserve_Name:
        if (message.isResponse())
          paramsClass = BudgetService_Reserve_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BudgetService = {
    name: 'blink.mojom.BudgetService',
    kVersion: 0,
    ptrClass: BudgetServicePtr,
    proxyClass: BudgetServiceProxy,
    stubClass: BudgetServiceStub,
    validateRequest: validateBudgetServiceRequest,
    validateResponse: validateBudgetServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/budget_service/budget_service.mojom',
    fuzzMethods: {
      getCost: {
        params: BudgetService_GetCost_Params,
      },
      getBudget: {
        params: BudgetService_GetBudget_Params,
      },
      reserve: {
        params: BudgetService_Reserve_Params,
      },
    },
  };
  BudgetServiceStub.prototype.validator = validateBudgetServiceRequest;
  BudgetServiceProxy.prototype.validator = validateBudgetServiceResponse;
  exports.BudgetOperationType = BudgetOperationType;
  exports.BudgetServiceErrorType = BudgetServiceErrorType;
  exports.BudgetState = BudgetState;
  exports.BudgetService = BudgetService;
  exports.BudgetServicePtr = BudgetServicePtr;
  exports.BudgetServiceAssociatedPtr = BudgetServiceAssociatedPtr;
})();