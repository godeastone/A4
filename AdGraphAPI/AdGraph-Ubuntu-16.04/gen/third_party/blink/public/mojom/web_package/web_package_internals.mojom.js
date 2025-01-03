// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/web_package/web_package_internals.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.test.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }



  function WebPackageInternals_SetSignedExchangeVerificationTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebPackageInternals_SetSignedExchangeVerificationTime_Params.prototype.initDefaults_ = function() {
    this.time = null;
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_Params.generate = function(generator_) {
    var generated = new WebPackageInternals_SetSignedExchangeVerificationTime_Params;
    generated.time = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_Params.validate = function(messageValidator, offset) {
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


    // validate WebPackageInternals_SetSignedExchangeVerificationTime_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebPackageInternals_SetSignedExchangeVerificationTime_Params.decode = function(decoder) {
    var packed;
    var val = new WebPackageInternals_SetSignedExchangeVerificationTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebPackageInternals_SetSignedExchangeVerificationTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.time);
  };
  function WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.prototype.initDefaults_ = function() {
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.generate = function(generator_) {
    var generated = new WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams;
    return generated;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.validate = function(messageValidator, offset) {
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

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kWebPackageInternals_SetSignedExchangeVerificationTime_Name = 3007492;

  function WebPackageInternalsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebPackageInternals,
                                                   handleOrPtrInfo);
  }

  function WebPackageInternalsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebPackageInternals, associatedInterfacePtrInfo);
  }

  WebPackageInternalsAssociatedPtr.prototype =
      Object.create(WebPackageInternalsPtr.prototype);
  WebPackageInternalsAssociatedPtr.prototype.constructor =
      WebPackageInternalsAssociatedPtr;

  function WebPackageInternalsProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebPackageInternalsPtr.prototype.setSignedExchangeVerificationTime = function() {
    return WebPackageInternalsProxy.prototype.setSignedExchangeVerificationTime
        .apply(this.ptr.getProxy(), arguments);
  };

  WebPackageInternalsProxy.prototype.setSignedExchangeVerificationTime = function(time) {
    var params_ = new WebPackageInternals_SetSignedExchangeVerificationTime_Params();
    params_.time = time;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebPackageInternals_SetSignedExchangeVerificationTime_Name,
          codec.align(WebPackageInternals_SetSignedExchangeVerificationTime_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebPackageInternals_SetSignedExchangeVerificationTime_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function WebPackageInternalsStub(delegate) {
    this.delegate_ = delegate;
  }
  WebPackageInternalsStub.prototype.setSignedExchangeVerificationTime = function(time) {
    return this.delegate_ && this.delegate_.setSignedExchangeVerificationTime && this.delegate_.setSignedExchangeVerificationTime(time);
  }

  WebPackageInternalsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  WebPackageInternalsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebPackageInternals_SetSignedExchangeVerificationTime_Name:
      var params = reader.decodeStruct(WebPackageInternals_SetSignedExchangeVerificationTime_Params);
      this.setSignedExchangeVerificationTime(params.time).then(function(response) {
        var responseParams =
            new WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kWebPackageInternals_SetSignedExchangeVerificationTime_Name,
            codec.align(WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWebPackageInternalsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebPackageInternals_SetSignedExchangeVerificationTime_Name:
        if (message.expectsResponse())
          paramsClass = WebPackageInternals_SetSignedExchangeVerificationTime_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebPackageInternalsResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWebPackageInternals_SetSignedExchangeVerificationTime_Name:
        if (message.isResponse())
          paramsClass = WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WebPackageInternals = {
    name: 'blink.test.mojom.WebPackageInternals',
    kVersion: 0,
    ptrClass: WebPackageInternalsPtr,
    proxyClass: WebPackageInternalsProxy,
    stubClass: WebPackageInternalsStub,
    validateRequest: validateWebPackageInternalsRequest,
    validateResponse: validateWebPackageInternalsResponse,
    mojomId: 'third_party/blink/public/mojom/web_package/web_package_internals.mojom',
    fuzzMethods: {
      setSignedExchangeVerificationTime: {
        params: WebPackageInternals_SetSignedExchangeVerificationTime_Params,
      },
    },
  };
  WebPackageInternalsStub.prototype.validator = validateWebPackageInternalsRequest;
  WebPackageInternalsProxy.prototype.validator = validateWebPackageInternalsResponse;
  exports.WebPackageInternals = WebPackageInternals;
  exports.WebPackageInternalsPtr = WebPackageInternalsPtr;
  exports.WebPackageInternalsAssociatedPtr = WebPackageInternalsAssociatedPtr;
})();