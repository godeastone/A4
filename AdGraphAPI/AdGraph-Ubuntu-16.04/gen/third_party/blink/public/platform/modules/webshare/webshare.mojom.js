// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/webshare/webshare.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var ShareError = {};
  ShareError.OK = 0;
  ShareError.INTERNAL_ERROR = ShareError.OK + 1;
  ShareError.CANCELED = ShareError.INTERNAL_ERROR + 1;

  ShareError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ShareError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ShareService_Share_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ShareService_Share_Params.prototype.initDefaults_ = function() {
    this.title = null;
    this.text = null;
    this.url = null;
  };
  ShareService_Share_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ShareService_Share_Params.generate = function(generator_) {
    var generated = new ShareService_Share_Params;
    generated.title = generator_.generateString(false);
    generated.text = generator_.generateString(false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ShareService_Share_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateString(this.text, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ShareService_Share_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ShareService_Share_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ShareService_Share_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ShareService_Share_Params.validate = function(messageValidator, offset) {
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


    // validate ShareService_Share_Params.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ShareService_Share_Params.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ShareService_Share_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ShareService_Share_Params.encodedSize = codec.kStructHeaderSize + 24;

  ShareService_Share_Params.decode = function(decoder) {
    var packed;
    var val = new ShareService_Share_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.title = decoder.decodeStruct(codec.String);
    val.text = decoder.decodeStruct(codec.String);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ShareService_Share_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ShareService_Share_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.title);
    encoder.encodeStruct(codec.String, val.text);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ShareService_Share_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ShareService_Share_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  ShareService_Share_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ShareService_Share_ResponseParams.generate = function(generator_) {
    var generated = new ShareService_Share_ResponseParams;
    generated.error = generator_.generateEnum(0, 2);
    return generated;
  };

  ShareService_Share_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 2);
    }
    return this;
  };
  ShareService_Share_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ShareService_Share_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ShareService_Share_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ShareService_Share_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ShareService_Share_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ShareError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ShareService_Share_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ShareService_Share_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ShareService_Share_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ShareService_Share_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ShareService_Share_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kShareService_Share_Name = 522236879;

  function ShareServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ShareService,
                                                   handleOrPtrInfo);
  }

  function ShareServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ShareService, associatedInterfacePtrInfo);
  }

  ShareServiceAssociatedPtr.prototype =
      Object.create(ShareServicePtr.prototype);
  ShareServiceAssociatedPtr.prototype.constructor =
      ShareServiceAssociatedPtr;

  function ShareServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  ShareServicePtr.prototype.share = function() {
    return ShareServiceProxy.prototype.share
        .apply(this.ptr.getProxy(), arguments);
  };

  ShareServiceProxy.prototype.share = function(title, text, url) {
    var params_ = new ShareService_Share_Params();
    params_.title = title;
    params_.text = text;
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kShareService_Share_Name,
          codec.align(ShareService_Share_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ShareService_Share_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ShareService_Share_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ShareServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  ShareServiceStub.prototype.share = function(title, text, url) {
    return this.delegate_ && this.delegate_.share && this.delegate_.share(title, text, url);
  }

  ShareServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ShareServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kShareService_Share_Name:
      var params = reader.decodeStruct(ShareService_Share_Params);
      this.share(params.title, params.text, params.url).then(function(response) {
        var responseParams =
            new ShareService_Share_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kShareService_Share_Name,
            codec.align(ShareService_Share_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ShareService_Share_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateShareServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kShareService_Share_Name:
        if (message.expectsResponse())
          paramsClass = ShareService_Share_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateShareServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kShareService_Share_Name:
        if (message.isResponse())
          paramsClass = ShareService_Share_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ShareService = {
    name: 'blink.mojom.ShareService',
    kVersion: 0,
    ptrClass: ShareServicePtr,
    proxyClass: ShareServiceProxy,
    stubClass: ShareServiceStub,
    validateRequest: validateShareServiceRequest,
    validateResponse: validateShareServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/webshare/webshare.mojom',
    fuzzMethods: {
      share: {
        params: ShareService_Share_Params,
      },
    },
  };
  ShareServiceStub.prototype.validator = validateShareServiceRequest;
  ShareServiceProxy.prototype.validator = validateShareServiceResponse;
  exports.ShareError = ShareError;
  exports.ShareService = ShareService;
  exports.ShareServicePtr = ShareServicePtr;
  exports.ShareServiceAssociatedPtr = ShareServiceAssociatedPtr;
})();