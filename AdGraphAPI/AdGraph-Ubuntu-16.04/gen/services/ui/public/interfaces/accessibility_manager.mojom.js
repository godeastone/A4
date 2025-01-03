// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/accessibility_manager.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');



  function AccessibilityManager_SetHighContrastMode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AccessibilityManager_SetHighContrastMode_Params.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  AccessibilityManager_SetHighContrastMode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AccessibilityManager_SetHighContrastMode_Params.generate = function(generator_) {
    var generated = new AccessibilityManager_SetHighContrastMode_Params;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  AccessibilityManager_SetHighContrastMode_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  AccessibilityManager_SetHighContrastMode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AccessibilityManager_SetHighContrastMode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AccessibilityManager_SetHighContrastMode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AccessibilityManager_SetHighContrastMode_Params.validate = function(messageValidator, offset) {
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

  AccessibilityManager_SetHighContrastMode_Params.encodedSize = codec.kStructHeaderSize + 8;

  AccessibilityManager_SetHighContrastMode_Params.decode = function(decoder) {
    var packed;
    var val = new AccessibilityManager_SetHighContrastMode_Params();
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
    return val;
  };

  AccessibilityManager_SetHighContrastMode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AccessibilityManager_SetHighContrastMode_Params.encodedSize);
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
  };
  var kAccessibilityManager_SetHighContrastMode_Name = 356843258;

  function AccessibilityManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AccessibilityManager,
                                                   handleOrPtrInfo);
  }

  function AccessibilityManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AccessibilityManager, associatedInterfacePtrInfo);
  }

  AccessibilityManagerAssociatedPtr.prototype =
      Object.create(AccessibilityManagerPtr.prototype);
  AccessibilityManagerAssociatedPtr.prototype.constructor =
      AccessibilityManagerAssociatedPtr;

  function AccessibilityManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  AccessibilityManagerPtr.prototype.setHighContrastMode = function() {
    return AccessibilityManagerProxy.prototype.setHighContrastMode
        .apply(this.ptr.getProxy(), arguments);
  };

  AccessibilityManagerProxy.prototype.setHighContrastMode = function(enabled) {
    var params_ = new AccessibilityManager_SetHighContrastMode_Params();
    params_.enabled = enabled;
    var builder = new codec.MessageV0Builder(
        kAccessibilityManager_SetHighContrastMode_Name,
        codec.align(AccessibilityManager_SetHighContrastMode_Params.encodedSize));
    builder.encodeStruct(AccessibilityManager_SetHighContrastMode_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AccessibilityManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  AccessibilityManagerStub.prototype.setHighContrastMode = function(enabled) {
    return this.delegate_ && this.delegate_.setHighContrastMode && this.delegate_.setHighContrastMode(enabled);
  }

  AccessibilityManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAccessibilityManager_SetHighContrastMode_Name:
      var params = reader.decodeStruct(AccessibilityManager_SetHighContrastMode_Params);
      this.setHighContrastMode(params.enabled);
      return true;
    default:
      return false;
    }
  };

  AccessibilityManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAccessibilityManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAccessibilityManager_SetHighContrastMode_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AccessibilityManager_SetHighContrastMode_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAccessibilityManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AccessibilityManager = {
    name: 'ui.mojom.AccessibilityManager',
    kVersion: 0,
    ptrClass: AccessibilityManagerPtr,
    proxyClass: AccessibilityManagerProxy,
    stubClass: AccessibilityManagerStub,
    validateRequest: validateAccessibilityManagerRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/accessibility_manager.mojom',
    fuzzMethods: {
      setHighContrastMode: {
        params: AccessibilityManager_SetHighContrastMode_Params,
      },
    },
  };
  AccessibilityManagerStub.prototype.validator = validateAccessibilityManagerRequest;
  AccessibilityManagerProxy.prototype.validator = null;
  exports.AccessibilityManager = AccessibilityManager;
  exports.AccessibilityManagerPtr = AccessibilityManagerPtr;
  exports.AccessibilityManagerAssociatedPtr = AccessibilityManagerAssociatedPtr;
})();