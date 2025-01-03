// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mash/public/mojom/launchable.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mash.mojom');


  var kWindow = 1;
  var kIncognitoWindow = 2;
  var LaunchMode = {};
  LaunchMode.DEFAULT = 0;
  LaunchMode.REUSE = LaunchMode.DEFAULT + 1;
  LaunchMode.MAKE_NEW = LaunchMode.REUSE + 1;

  LaunchMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  LaunchMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function Launchable_Launch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Launchable_Launch_Params.prototype.initDefaults_ = function() {
    this.what = 0;
    this.how = 0;
  };
  Launchable_Launch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Launchable_Launch_Params.generate = function(generator_) {
    var generated = new Launchable_Launch_Params;
    generated.what = generator_.generateUint32();
    generated.how = generator_.generateEnum(0, 2);
    return generated;
  };

  Launchable_Launch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.what = mutator_.mutateUint32(this.what);
    }
    if (mutator_.chooseMutateField()) {
      this.how = mutator_.mutateEnum(this.how, 0, 2);
    }
    return this;
  };
  Launchable_Launch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Launchable_Launch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Launchable_Launch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Launchable_Launch_Params.validate = function(messageValidator, offset) {
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



    // validate Launchable_Launch_Params.how
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, LaunchMode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Launchable_Launch_Params.encodedSize = codec.kStructHeaderSize + 8;

  Launchable_Launch_Params.decode = function(decoder) {
    var packed;
    var val = new Launchable_Launch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.what = decoder.decodeStruct(codec.Uint32);
    val.how = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Launchable_Launch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Launchable_Launch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.what);
    encoder.encodeStruct(codec.Int32, val.how);
  };
  var kLaunchable_Launch_Name = 2048651060;

  function LaunchablePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Launchable,
                                                   handleOrPtrInfo);
  }

  function LaunchableAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Launchable, associatedInterfacePtrInfo);
  }

  LaunchableAssociatedPtr.prototype =
      Object.create(LaunchablePtr.prototype);
  LaunchableAssociatedPtr.prototype.constructor =
      LaunchableAssociatedPtr;

  function LaunchableProxy(receiver) {
    this.receiver_ = receiver;
  }
  LaunchablePtr.prototype.launch = function() {
    return LaunchableProxy.prototype.launch
        .apply(this.ptr.getProxy(), arguments);
  };

  LaunchableProxy.prototype.launch = function(what, how) {
    var params_ = new Launchable_Launch_Params();
    params_.what = what;
    params_.how = how;
    var builder = new codec.MessageV0Builder(
        kLaunchable_Launch_Name,
        codec.align(Launchable_Launch_Params.encodedSize));
    builder.encodeStruct(Launchable_Launch_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function LaunchableStub(delegate) {
    this.delegate_ = delegate;
  }
  LaunchableStub.prototype.launch = function(what, how) {
    return this.delegate_ && this.delegate_.launch && this.delegate_.launch(what, how);
  }

  LaunchableStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kLaunchable_Launch_Name:
      var params = reader.decodeStruct(Launchable_Launch_Params);
      this.launch(params.what, params.how);
      return true;
    default:
      return false;
    }
  };

  LaunchableStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateLaunchableRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kLaunchable_Launch_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Launchable_Launch_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateLaunchableResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Launchable = {
    name: 'mash.mojom.Launchable',
    kVersion: 0,
    ptrClass: LaunchablePtr,
    proxyClass: LaunchableProxy,
    stubClass: LaunchableStub,
    validateRequest: validateLaunchableRequest,
    validateResponse: null,
    mojomId: 'mash/public/mojom/launchable.mojom',
    fuzzMethods: {
      launch: {
        params: Launchable_Launch_Params,
      },
    },
  };
  LaunchableStub.prototype.validator = validateLaunchableRequest;
  LaunchableProxy.prototype.validator = null;
  exports.kWindow = kWindow;
  exports.kIncognitoWindow = kIncognitoWindow;
  exports.LaunchMode = LaunchMode;
  exports.Launchable = Launchable;
  exports.LaunchablePtr = LaunchablePtr;
  exports.LaunchableAssociatedPtr = LaunchableAssociatedPtr;
})();