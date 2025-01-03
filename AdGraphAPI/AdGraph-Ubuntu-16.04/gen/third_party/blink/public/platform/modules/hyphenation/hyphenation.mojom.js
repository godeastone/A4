// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/hyphenation/hyphenation.mojom';
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
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../../mojo/public/mojom/base/file.mojom.js');
  }



  function Hyphenation_OpenDictionary_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Hyphenation_OpenDictionary_Params.prototype.initDefaults_ = function() {
    this.locale = null;
  };
  Hyphenation_OpenDictionary_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Hyphenation_OpenDictionary_Params.generate = function(generator_) {
    var generated = new Hyphenation_OpenDictionary_Params;
    generated.locale = generator_.generateString(false);
    return generated;
  };

  Hyphenation_OpenDictionary_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.locale = mutator_.mutateString(this.locale, false);
    }
    return this;
  };
  Hyphenation_OpenDictionary_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Hyphenation_OpenDictionary_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Hyphenation_OpenDictionary_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Hyphenation_OpenDictionary_Params.validate = function(messageValidator, offset) {
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


    // validate Hyphenation_OpenDictionary_Params.locale
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Hyphenation_OpenDictionary_Params.encodedSize = codec.kStructHeaderSize + 8;

  Hyphenation_OpenDictionary_Params.decode = function(decoder) {
    var packed;
    var val = new Hyphenation_OpenDictionary_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.locale = decoder.decodeStruct(codec.String);
    return val;
  };

  Hyphenation_OpenDictionary_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Hyphenation_OpenDictionary_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.locale);
  };
  function Hyphenation_OpenDictionary_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Hyphenation_OpenDictionary_ResponseParams.prototype.initDefaults_ = function() {
    this.hyphenationDictionaryHandle = null;
  };
  Hyphenation_OpenDictionary_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Hyphenation_OpenDictionary_ResponseParams.generate = function(generator_) {
    var generated = new Hyphenation_OpenDictionary_ResponseParams;
    generated.hyphenationDictionaryHandle = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  Hyphenation_OpenDictionary_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hyphenationDictionaryHandle = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  Hyphenation_OpenDictionary_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hyphenationDictionaryHandle !== null) {
      Array.prototype.push.apply(handles, this.hyphenationDictionaryHandle.getHandleDeps());
    }
    return handles;
  };

  Hyphenation_OpenDictionary_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Hyphenation_OpenDictionary_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.hyphenationDictionaryHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  Hyphenation_OpenDictionary_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Hyphenation_OpenDictionary_ResponseParams.hyphenationDictionaryHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Hyphenation_OpenDictionary_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Hyphenation_OpenDictionary_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Hyphenation_OpenDictionary_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hyphenationDictionaryHandle = decoder.decodeStructPointer(file$.File);
    return val;
  };

  Hyphenation_OpenDictionary_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Hyphenation_OpenDictionary_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.hyphenationDictionaryHandle);
  };
  var kHyphenation_OpenDictionary_Name = 796188822;

  function HyphenationPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Hyphenation,
                                                   handleOrPtrInfo);
  }

  function HyphenationAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Hyphenation, associatedInterfacePtrInfo);
  }

  HyphenationAssociatedPtr.prototype =
      Object.create(HyphenationPtr.prototype);
  HyphenationAssociatedPtr.prototype.constructor =
      HyphenationAssociatedPtr;

  function HyphenationProxy(receiver) {
    this.receiver_ = receiver;
  }
  HyphenationPtr.prototype.openDictionary = function() {
    return HyphenationProxy.prototype.openDictionary
        .apply(this.ptr.getProxy(), arguments);
  };

  HyphenationProxy.prototype.openDictionary = function(locale) {
    var params_ = new Hyphenation_OpenDictionary_Params();
    params_.locale = locale;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kHyphenation_OpenDictionary_Name,
          codec.align(Hyphenation_OpenDictionary_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Hyphenation_OpenDictionary_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Hyphenation_OpenDictionary_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function HyphenationStub(delegate) {
    this.delegate_ = delegate;
  }
  HyphenationStub.prototype.openDictionary = function(locale) {
    return this.delegate_ && this.delegate_.openDictionary && this.delegate_.openDictionary(locale);
  }

  HyphenationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  HyphenationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHyphenation_OpenDictionary_Name:
      var params = reader.decodeStruct(Hyphenation_OpenDictionary_Params);
      this.openDictionary(params.locale).then(function(response) {
        var responseParams =
            new Hyphenation_OpenDictionary_ResponseParams();
        responseParams.hyphenationDictionaryHandle = response.hyphenationDictionaryHandle;
        var builder = new codec.MessageV1Builder(
            kHyphenation_OpenDictionary_Name,
            codec.align(Hyphenation_OpenDictionary_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Hyphenation_OpenDictionary_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateHyphenationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHyphenation_OpenDictionary_Name:
        if (message.expectsResponse())
          paramsClass = Hyphenation_OpenDictionary_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHyphenationResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kHyphenation_OpenDictionary_Name:
        if (message.isResponse())
          paramsClass = Hyphenation_OpenDictionary_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Hyphenation = {
    name: 'blink.mojom.Hyphenation',
    kVersion: 0,
    ptrClass: HyphenationPtr,
    proxyClass: HyphenationProxy,
    stubClass: HyphenationStub,
    validateRequest: validateHyphenationRequest,
    validateResponse: validateHyphenationResponse,
    mojomId: 'third_party/blink/public/platform/modules/hyphenation/hyphenation.mojom',
    fuzzMethods: {
      openDictionary: {
        params: Hyphenation_OpenDictionary_Params,
      },
    },
  };
  HyphenationStub.prototype.validator = validateHyphenationRequest;
  HyphenationProxy.prototype.validator = validateHyphenationResponse;
  exports.Hyphenation = Hyphenation;
  exports.HyphenationPtr = HyphenationPtr;
  exports.HyphenationAssociatedPtr = HyphenationAssociatedPtr;
})();