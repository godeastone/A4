// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/preferences/public/mojom/tracked_preference_validation_delegate.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('prefs.mojom');
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../mojo/public/mojom/base/values.mojom.js');
  }



  function TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prototype.initDefaults_ = function() {
    this.prefPath = null;
    this.value = null;
    this.valueState = 0;
    this.externalValidationValueState = 0;
    this.isPersonal = false;
  };
  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.generate = function(generator_) {
    var generated = new TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params;
    generated.prefPath = generator_.generateString(false);
    generated.value = generator_.generateUnion(mojoBase.mojom.Value, true);
    generated.valueState = generator_.generateEnum(0, 7);
    generated.externalValidationValueState = generator_.generateEnum(0, 7);
    generated.isPersonal = generator_.generateBool();
    return generated;
  };

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prefPath = mutator_.mutateString(this.prefPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUnion(mojoBase.mojom.Value, true);
    }
    if (mutator_.chooseMutateField()) {
      this.valueState = mutator_.mutateEnum(this.valueState, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.externalValidationValueState = mutator_.mutateEnum(this.externalValidationValueState, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.isPersonal = mutator_.mutateBool(this.isPersonal);
    }
    return this;
  };
  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.validate = function(messageValidator, offset) {
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


    // validate TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.prefPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.value
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, values$.Value, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.valueState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, TrackedPreferenceValidationDelegate.ValueState);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.externalValidationValueState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, TrackedPreferenceValidationDelegate.ValueState);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.encodedSize = codec.kStructHeaderSize + 40;

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.decode = function(decoder) {
    var packed;
    var val = new TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prefPath = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(values$.Value);
    val.valueState = decoder.decodeStruct(codec.Int32);
    val.externalValidationValueState = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isPersonal = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.prefPath);
    encoder.encodeStruct(values$.Value, val.value);
    encoder.encodeStruct(codec.Int32, val.valueState);
    encoder.encodeStruct(codec.Int32, val.externalValidationValueState);
    packed = 0;
    packed |= (val.isPersonal & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prototype.initDefaults_ = function() {
    this.prefPath = null;
    this.invalidKeys = null;
    this.externalValidationInvalidKeys = null;
    this.valueState = 0;
    this.externalValidationValueState = 0;
    this.isPersonal = false;
  };
  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.generate = function(generator_) {
    var generated = new TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params;
    generated.prefPath = generator_.generateString(false);
    generated.invalidKeys = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.externalValidationInvalidKeys = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.valueState = generator_.generateEnum(0, 7);
    generated.externalValidationValueState = generator_.generateEnum(0, 7);
    generated.isPersonal = generator_.generateBool();
    return generated;
  };

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prefPath = mutator_.mutateString(this.prefPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.invalidKeys = mutator_.mutateArray(this.invalidKeys, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.externalValidationInvalidKeys = mutator_.mutateArray(this.externalValidationInvalidKeys, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.valueState = mutator_.mutateEnum(this.valueState, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.externalValidationValueState = mutator_.mutateEnum(this.externalValidationValueState, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.isPersonal = mutator_.mutateBool(this.isPersonal);
    }
    return this;
  };
  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.validate = function(messageValidator, offset) {
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


    // validate TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.prefPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.invalidKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.externalValidationInvalidKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.valueState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, TrackedPreferenceValidationDelegate.ValueState);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.externalValidationValueState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, TrackedPreferenceValidationDelegate.ValueState);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.encodedSize = codec.kStructHeaderSize + 40;

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.decode = function(decoder) {
    var packed;
    var val = new TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prefPath = decoder.decodeStruct(codec.String);
    val.invalidKeys = decoder.decodeArrayPointer(codec.String);
    val.externalValidationInvalidKeys = decoder.decodeArrayPointer(codec.String);
    val.valueState = decoder.decodeStruct(codec.Int32);
    val.externalValidationValueState = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isPersonal = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.prefPath);
    encoder.encodeArrayPointer(codec.String, val.invalidKeys);
    encoder.encodeArrayPointer(codec.String, val.externalValidationInvalidKeys);
    encoder.encodeStruct(codec.Int32, val.valueState);
    encoder.encodeStruct(codec.Int32, val.externalValidationValueState);
    packed = 0;
    packed |= (val.isPersonal & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name = 1019688102;
  var kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name = 1418367815;

  function TrackedPreferenceValidationDelegatePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TrackedPreferenceValidationDelegate,
                                                   handleOrPtrInfo);
  }

  function TrackedPreferenceValidationDelegateAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TrackedPreferenceValidationDelegate, associatedInterfacePtrInfo);
  }

  TrackedPreferenceValidationDelegateAssociatedPtr.prototype =
      Object.create(TrackedPreferenceValidationDelegatePtr.prototype);
  TrackedPreferenceValidationDelegateAssociatedPtr.prototype.constructor =
      TrackedPreferenceValidationDelegateAssociatedPtr;

  function TrackedPreferenceValidationDelegateProxy(receiver) {
    this.receiver_ = receiver;
  }
  TrackedPreferenceValidationDelegatePtr.prototype.onAtomicPreferenceValidation = function() {
    return TrackedPreferenceValidationDelegateProxy.prototype.onAtomicPreferenceValidation
        .apply(this.ptr.getProxy(), arguments);
  };

  TrackedPreferenceValidationDelegateProxy.prototype.onAtomicPreferenceValidation = function(prefPath, value, valueState, externalValidationValueState, isPersonal) {
    var params_ = new TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params();
    params_.prefPath = prefPath;
    params_.value = value;
    params_.valueState = valueState;
    params_.externalValidationValueState = externalValidationValueState;
    params_.isPersonal = isPersonal;
    var builder = new codec.MessageV0Builder(
        kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name,
        codec.align(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params.encodedSize));
    builder.encodeStruct(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  TrackedPreferenceValidationDelegatePtr.prototype.onSplitPreferenceValidation = function() {
    return TrackedPreferenceValidationDelegateProxy.prototype.onSplitPreferenceValidation
        .apply(this.ptr.getProxy(), arguments);
  };

  TrackedPreferenceValidationDelegateProxy.prototype.onSplitPreferenceValidation = function(prefPath, invalidKeys, externalValidationInvalidKeys, valueState, externalValidationValueState, isPersonal) {
    var params_ = new TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params();
    params_.prefPath = prefPath;
    params_.invalidKeys = invalidKeys;
    params_.externalValidationInvalidKeys = externalValidationInvalidKeys;
    params_.valueState = valueState;
    params_.externalValidationValueState = externalValidationValueState;
    params_.isPersonal = isPersonal;
    var builder = new codec.MessageV0Builder(
        kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name,
        codec.align(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params.encodedSize));
    builder.encodeStruct(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TrackedPreferenceValidationDelegateStub(delegate) {
    this.delegate_ = delegate;
  }
  TrackedPreferenceValidationDelegateStub.prototype.onAtomicPreferenceValidation = function(prefPath, value, valueState, externalValidationValueState, isPersonal) {
    return this.delegate_ && this.delegate_.onAtomicPreferenceValidation && this.delegate_.onAtomicPreferenceValidation(prefPath, value, valueState, externalValidationValueState, isPersonal);
  }
  TrackedPreferenceValidationDelegateStub.prototype.onSplitPreferenceValidation = function(prefPath, invalidKeys, externalValidationInvalidKeys, valueState, externalValidationValueState, isPersonal) {
    return this.delegate_ && this.delegate_.onSplitPreferenceValidation && this.delegate_.onSplitPreferenceValidation(prefPath, invalidKeys, externalValidationInvalidKeys, valueState, externalValidationValueState, isPersonal);
  }

  TrackedPreferenceValidationDelegateStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name:
      var params = reader.decodeStruct(TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params);
      this.onAtomicPreferenceValidation(params.prefPath, params.value, params.valueState, params.externalValidationValueState, params.isPersonal);
      return true;
    case kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name:
      var params = reader.decodeStruct(TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params);
      this.onSplitPreferenceValidation(params.prefPath, params.invalidKeys, params.externalValidationInvalidKeys, params.valueState, params.externalValidationValueState, params.isPersonal);
      return true;
    default:
      return false;
    }
  };

  TrackedPreferenceValidationDelegateStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTrackedPreferenceValidationDelegateRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params;
      break;
      case kTrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTrackedPreferenceValidationDelegateResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TrackedPreferenceValidationDelegate = {
    name: 'prefs.mojom.TrackedPreferenceValidationDelegate',
    kVersion: 0,
    ptrClass: TrackedPreferenceValidationDelegatePtr,
    proxyClass: TrackedPreferenceValidationDelegateProxy,
    stubClass: TrackedPreferenceValidationDelegateStub,
    validateRequest: validateTrackedPreferenceValidationDelegateRequest,
    validateResponse: null,
    mojomId: 'services/preferences/public/mojom/tracked_preference_validation_delegate.mojom',
    fuzzMethods: {
      onAtomicPreferenceValidation: {
        params: TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params,
      },
      onSplitPreferenceValidation: {
        params: TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params,
      },
    },
  };
  TrackedPreferenceValidationDelegate.ValueState = {};
  TrackedPreferenceValidationDelegate.ValueState.UNCHANGED = 0;
  TrackedPreferenceValidationDelegate.ValueState.CLEARED = TrackedPreferenceValidationDelegate.ValueState.UNCHANGED + 1;
  TrackedPreferenceValidationDelegate.ValueState.SECURE_LEGACY = TrackedPreferenceValidationDelegate.ValueState.CLEARED + 1;
  TrackedPreferenceValidationDelegate.ValueState.CHANGED = TrackedPreferenceValidationDelegate.ValueState.SECURE_LEGACY + 1;
  TrackedPreferenceValidationDelegate.ValueState.UNTRUSTED_UNKNOWN_VALUE = TrackedPreferenceValidationDelegate.ValueState.CHANGED + 1;
  TrackedPreferenceValidationDelegate.ValueState.TRUSTED_UNKNOWN_VALUE = TrackedPreferenceValidationDelegate.ValueState.UNTRUSTED_UNKNOWN_VALUE + 1;
  TrackedPreferenceValidationDelegate.ValueState.TRUSTED_NULL_VALUE = TrackedPreferenceValidationDelegate.ValueState.TRUSTED_UNKNOWN_VALUE + 1;
  TrackedPreferenceValidationDelegate.ValueState.UNSUPPORTED = TrackedPreferenceValidationDelegate.ValueState.TRUSTED_NULL_VALUE + 1;

  TrackedPreferenceValidationDelegate.ValueState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  TrackedPreferenceValidationDelegate.ValueState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  TrackedPreferenceValidationDelegateStub.prototype.validator = validateTrackedPreferenceValidationDelegateRequest;
  TrackedPreferenceValidationDelegateProxy.prototype.validator = null;
  exports.TrackedPreferenceValidationDelegate = TrackedPreferenceValidationDelegate;
  exports.TrackedPreferenceValidationDelegatePtr = TrackedPreferenceValidationDelegatePtr;
  exports.TrackedPreferenceValidationDelegateAssociatedPtr = TrackedPreferenceValidationDelegateAssociatedPtr;
})();