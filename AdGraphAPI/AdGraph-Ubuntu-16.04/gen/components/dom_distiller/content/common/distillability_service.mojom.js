// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/dom_distiller/content/common/distillability_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('domDistiller.mojom');



  function DistillabilityService_NotifyIsDistillable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DistillabilityService_NotifyIsDistillable_Params.prototype.initDefaults_ = function() {
    this.pageIsDistillable = false;
    this.isLastUpdate = false;
    this.isMobileFriendly = false;
  };
  DistillabilityService_NotifyIsDistillable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DistillabilityService_NotifyIsDistillable_Params.generate = function(generator_) {
    var generated = new DistillabilityService_NotifyIsDistillable_Params;
    generated.pageIsDistillable = generator_.generateBool();
    generated.isLastUpdate = generator_.generateBool();
    generated.isMobileFriendly = generator_.generateBool();
    return generated;
  };

  DistillabilityService_NotifyIsDistillable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageIsDistillable = mutator_.mutateBool(this.pageIsDistillable);
    }
    if (mutator_.chooseMutateField()) {
      this.isLastUpdate = mutator_.mutateBool(this.isLastUpdate);
    }
    if (mutator_.chooseMutateField()) {
      this.isMobileFriendly = mutator_.mutateBool(this.isMobileFriendly);
    }
    return this;
  };
  DistillabilityService_NotifyIsDistillable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DistillabilityService_NotifyIsDistillable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DistillabilityService_NotifyIsDistillable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DistillabilityService_NotifyIsDistillable_Params.validate = function(messageValidator, offset) {
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

  DistillabilityService_NotifyIsDistillable_Params.encodedSize = codec.kStructHeaderSize + 8;

  DistillabilityService_NotifyIsDistillable_Params.decode = function(decoder) {
    var packed;
    var val = new DistillabilityService_NotifyIsDistillable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.pageIsDistillable = (packed >> 0) & 1 ? true : false;
    val.isLastUpdate = (packed >> 1) & 1 ? true : false;
    val.isMobileFriendly = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DistillabilityService_NotifyIsDistillable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DistillabilityService_NotifyIsDistillable_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.pageIsDistillable & 1) << 0
    packed |= (val.isLastUpdate & 1) << 1
    packed |= (val.isMobileFriendly & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDistillabilityService_NotifyIsDistillable_Name = 267242321;

  function DistillabilityServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DistillabilityService,
                                                   handleOrPtrInfo);
  }

  function DistillabilityServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DistillabilityService, associatedInterfacePtrInfo);
  }

  DistillabilityServiceAssociatedPtr.prototype =
      Object.create(DistillabilityServicePtr.prototype);
  DistillabilityServiceAssociatedPtr.prototype.constructor =
      DistillabilityServiceAssociatedPtr;

  function DistillabilityServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  DistillabilityServicePtr.prototype.notifyIsDistillable = function() {
    return DistillabilityServiceProxy.prototype.notifyIsDistillable
        .apply(this.ptr.getProxy(), arguments);
  };

  DistillabilityServiceProxy.prototype.notifyIsDistillable = function(pageIsDistillable, isLastUpdate, isMobileFriendly) {
    var params_ = new DistillabilityService_NotifyIsDistillable_Params();
    params_.pageIsDistillable = pageIsDistillable;
    params_.isLastUpdate = isLastUpdate;
    params_.isMobileFriendly = isMobileFriendly;
    var builder = new codec.MessageV0Builder(
        kDistillabilityService_NotifyIsDistillable_Name,
        codec.align(DistillabilityService_NotifyIsDistillable_Params.encodedSize));
    builder.encodeStruct(DistillabilityService_NotifyIsDistillable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DistillabilityServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  DistillabilityServiceStub.prototype.notifyIsDistillable = function(pageIsDistillable, isLastUpdate, isMobileFriendly) {
    return this.delegate_ && this.delegate_.notifyIsDistillable && this.delegate_.notifyIsDistillable(pageIsDistillable, isLastUpdate, isMobileFriendly);
  }

  DistillabilityServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDistillabilityService_NotifyIsDistillable_Name:
      var params = reader.decodeStruct(DistillabilityService_NotifyIsDistillable_Params);
      this.notifyIsDistillable(params.pageIsDistillable, params.isLastUpdate, params.isMobileFriendly);
      return true;
    default:
      return false;
    }
  };

  DistillabilityServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDistillabilityServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDistillabilityService_NotifyIsDistillable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DistillabilityService_NotifyIsDistillable_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDistillabilityServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DistillabilityService = {
    name: 'dom_distiller.mojom.DistillabilityService',
    kVersion: 0,
    ptrClass: DistillabilityServicePtr,
    proxyClass: DistillabilityServiceProxy,
    stubClass: DistillabilityServiceStub,
    validateRequest: validateDistillabilityServiceRequest,
    validateResponse: null,
    mojomId: 'components/dom_distiller/content/common/distillability_service.mojom',
    fuzzMethods: {
      notifyIsDistillable: {
        params: DistillabilityService_NotifyIsDistillable_Params,
      },
    },
  };
  DistillabilityServiceStub.prototype.validator = validateDistillabilityServiceRequest;
  DistillabilityServiceProxy.prototype.validator = null;
  exports.DistillabilityService = DistillabilityService;
  exports.DistillabilityServicePtr = DistillabilityServicePtr;
  exports.DistillabilityServiceAssociatedPtr = DistillabilityServiceAssociatedPtr;
})();