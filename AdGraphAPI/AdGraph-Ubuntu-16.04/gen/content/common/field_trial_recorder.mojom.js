// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/field_trial_recorder.mojom';
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



  function FieldTrialRecorder_FieldTrialActivated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FieldTrialRecorder_FieldTrialActivated_Params.prototype.initDefaults_ = function() {
    this.trialName = null;
  };
  FieldTrialRecorder_FieldTrialActivated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FieldTrialRecorder_FieldTrialActivated_Params.generate = function(generator_) {
    var generated = new FieldTrialRecorder_FieldTrialActivated_Params;
    generated.trialName = generator_.generateString(false);
    return generated;
  };

  FieldTrialRecorder_FieldTrialActivated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.trialName = mutator_.mutateString(this.trialName, false);
    }
    return this;
  };
  FieldTrialRecorder_FieldTrialActivated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FieldTrialRecorder_FieldTrialActivated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FieldTrialRecorder_FieldTrialActivated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FieldTrialRecorder_FieldTrialActivated_Params.validate = function(messageValidator, offset) {
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


    // validate FieldTrialRecorder_FieldTrialActivated_Params.trialName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FieldTrialRecorder_FieldTrialActivated_Params.encodedSize = codec.kStructHeaderSize + 8;

  FieldTrialRecorder_FieldTrialActivated_Params.decode = function(decoder) {
    var packed;
    var val = new FieldTrialRecorder_FieldTrialActivated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.trialName = decoder.decodeStruct(codec.String);
    return val;
  };

  FieldTrialRecorder_FieldTrialActivated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FieldTrialRecorder_FieldTrialActivated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.trialName);
  };
  var kFieldTrialRecorder_FieldTrialActivated_Name = 592528549;

  function FieldTrialRecorderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FieldTrialRecorder,
                                                   handleOrPtrInfo);
  }

  function FieldTrialRecorderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FieldTrialRecorder, associatedInterfacePtrInfo);
  }

  FieldTrialRecorderAssociatedPtr.prototype =
      Object.create(FieldTrialRecorderPtr.prototype);
  FieldTrialRecorderAssociatedPtr.prototype.constructor =
      FieldTrialRecorderAssociatedPtr;

  function FieldTrialRecorderProxy(receiver) {
    this.receiver_ = receiver;
  }
  FieldTrialRecorderPtr.prototype.fieldTrialActivated = function() {
    return FieldTrialRecorderProxy.prototype.fieldTrialActivated
        .apply(this.ptr.getProxy(), arguments);
  };

  FieldTrialRecorderProxy.prototype.fieldTrialActivated = function(trialName) {
    var params_ = new FieldTrialRecorder_FieldTrialActivated_Params();
    params_.trialName = trialName;
    var builder = new codec.MessageV0Builder(
        kFieldTrialRecorder_FieldTrialActivated_Name,
        codec.align(FieldTrialRecorder_FieldTrialActivated_Params.encodedSize));
    builder.encodeStruct(FieldTrialRecorder_FieldTrialActivated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FieldTrialRecorderStub(delegate) {
    this.delegate_ = delegate;
  }
  FieldTrialRecorderStub.prototype.fieldTrialActivated = function(trialName) {
    return this.delegate_ && this.delegate_.fieldTrialActivated && this.delegate_.fieldTrialActivated(trialName);
  }

  FieldTrialRecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFieldTrialRecorder_FieldTrialActivated_Name:
      var params = reader.decodeStruct(FieldTrialRecorder_FieldTrialActivated_Params);
      this.fieldTrialActivated(params.trialName);
      return true;
    default:
      return false;
    }
  };

  FieldTrialRecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFieldTrialRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFieldTrialRecorder_FieldTrialActivated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FieldTrialRecorder_FieldTrialActivated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFieldTrialRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FieldTrialRecorder = {
    name: 'content.mojom.FieldTrialRecorder',
    kVersion: 0,
    ptrClass: FieldTrialRecorderPtr,
    proxyClass: FieldTrialRecorderProxy,
    stubClass: FieldTrialRecorderStub,
    validateRequest: validateFieldTrialRecorderRequest,
    validateResponse: null,
    mojomId: 'content/common/field_trial_recorder.mojom',
    fuzzMethods: {
      fieldTrialActivated: {
        params: FieldTrialRecorder_FieldTrialActivated_Params,
      },
    },
  };
  FieldTrialRecorderStub.prototype.validator = validateFieldTrialRecorderRequest;
  FieldTrialRecorderProxy.prototype.validator = null;
  exports.FieldTrialRecorder = FieldTrialRecorder;
  exports.FieldTrialRecorderPtr = FieldTrialRecorderPtr;
  exports.FieldTrialRecorderAssociatedPtr = FieldTrialRecorderAssociatedPtr;
})();