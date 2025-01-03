// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/render_frame_message_filter.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function RenderFrameMessageFilter_SetCookie_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_SetCookie_Params.prototype.initDefaults_ = function() {
    this.renderFrameId = 0;
    this.url = null;
    this.firstPartyForCookies = null;
    this.cookie = null;
  };
  RenderFrameMessageFilter_SetCookie_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMessageFilter_SetCookie_Params.generate = function(generator_) {
    var generated = new RenderFrameMessageFilter_SetCookie_Params;
    generated.renderFrameId = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.firstPartyForCookies = generator_.generateStruct(url.mojom.Url, false);
    generated.cookie = generator_.generateString(false);
    return generated;
  };

  RenderFrameMessageFilter_SetCookie_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.firstPartyForCookies = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cookie = mutator_.mutateString(this.cookie, false);
    }
    return this;
  };
  RenderFrameMessageFilter_SetCookie_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMessageFilter_SetCookie_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMessageFilter_SetCookie_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMessageFilter_SetCookie_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RenderFrameMessageFilter_SetCookie_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderFrameMessageFilter_SetCookie_Params.firstPartyForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderFrameMessageFilter_SetCookie_Params.cookie
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMessageFilter_SetCookie_Params.encodedSize = codec.kStructHeaderSize + 32;

  RenderFrameMessageFilter_SetCookie_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_SetCookie_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.firstPartyForCookies = decoder.decodeStructPointer(url$.Url);
    val.cookie = decoder.decodeStruct(codec.String);
    return val;
  };

  RenderFrameMessageFilter_SetCookie_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_SetCookie_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.firstPartyForCookies);
    encoder.encodeStruct(codec.String, val.cookie);
  };
  function RenderFrameMessageFilter_SetCookie_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_SetCookie_ResponseParams.prototype.initDefaults_ = function() {
  };
  RenderFrameMessageFilter_SetCookie_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMessageFilter_SetCookie_ResponseParams.generate = function(generator_) {
    var generated = new RenderFrameMessageFilter_SetCookie_ResponseParams;
    return generated;
  };

  RenderFrameMessageFilter_SetCookie_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  RenderFrameMessageFilter_SetCookie_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMessageFilter_SetCookie_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMessageFilter_SetCookie_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMessageFilter_SetCookie_ResponseParams.validate = function(messageValidator, offset) {
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

  RenderFrameMessageFilter_SetCookie_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  RenderFrameMessageFilter_SetCookie_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_SetCookie_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RenderFrameMessageFilter_SetCookie_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_SetCookie_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function RenderFrameMessageFilter_GetCookies_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_GetCookies_Params.prototype.initDefaults_ = function() {
    this.renderFrameId = 0;
    this.url = null;
    this.firstPartyForCookies = null;
  };
  RenderFrameMessageFilter_GetCookies_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMessageFilter_GetCookies_Params.generate = function(generator_) {
    var generated = new RenderFrameMessageFilter_GetCookies_Params;
    generated.renderFrameId = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.firstPartyForCookies = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  RenderFrameMessageFilter_GetCookies_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.firstPartyForCookies = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  RenderFrameMessageFilter_GetCookies_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMessageFilter_GetCookies_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMessageFilter_GetCookies_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMessageFilter_GetCookies_Params.validate = function(messageValidator, offset) {
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



    // validate RenderFrameMessageFilter_GetCookies_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderFrameMessageFilter_GetCookies_Params.firstPartyForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMessageFilter_GetCookies_Params.encodedSize = codec.kStructHeaderSize + 24;

  RenderFrameMessageFilter_GetCookies_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_GetCookies_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.firstPartyForCookies = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  RenderFrameMessageFilter_GetCookies_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_GetCookies_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.firstPartyForCookies);
  };
  function RenderFrameMessageFilter_GetCookies_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.initDefaults_ = function() {
    this.cookies = null;
  };
  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMessageFilter_GetCookies_ResponseParams.generate = function(generator_) {
    var generated = new RenderFrameMessageFilter_GetCookies_ResponseParams;
    generated.cookies = generator_.generateString(false);
    return generated;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookies = mutator_.mutateString(this.cookies, false);
    }
    return this;
  };
  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMessageFilter_GetCookies_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate RenderFrameMessageFilter_GetCookies_ResponseParams.cookies
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RenderFrameMessageFilter_GetCookies_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMessageFilter_GetCookies_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookies = decoder.decodeStruct(codec.String);
    return val;
  };

  RenderFrameMessageFilter_GetCookies_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.cookies);
  };
  var kRenderFrameMessageFilter_SetCookie_Name = 215141974;
  var kRenderFrameMessageFilter_GetCookies_Name = 982870084;

  function RenderFrameMessageFilterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RenderFrameMessageFilter,
                                                   handleOrPtrInfo);
  }

  function RenderFrameMessageFilterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RenderFrameMessageFilter, associatedInterfacePtrInfo);
  }

  RenderFrameMessageFilterAssociatedPtr.prototype =
      Object.create(RenderFrameMessageFilterPtr.prototype);
  RenderFrameMessageFilterAssociatedPtr.prototype.constructor =
      RenderFrameMessageFilterAssociatedPtr;

  function RenderFrameMessageFilterProxy(receiver) {
    this.receiver_ = receiver;
  }
  RenderFrameMessageFilterPtr.prototype.setCookie = function() {
    return RenderFrameMessageFilterProxy.prototype.setCookie
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderFrameMessageFilterProxy.prototype.setCookie = function(renderFrameId, url, firstPartyForCookies, cookie) {
    var params_ = new RenderFrameMessageFilter_SetCookie_Params();
    params_.renderFrameId = renderFrameId;
    params_.url = url;
    params_.firstPartyForCookies = firstPartyForCookies;
    params_.cookie = cookie;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderFrameMessageFilter_SetCookie_Name,
          codec.align(RenderFrameMessageFilter_SetCookie_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderFrameMessageFilter_SetCookie_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderFrameMessageFilter_SetCookie_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RenderFrameMessageFilterPtr.prototype.getCookies = function() {
    return RenderFrameMessageFilterProxy.prototype.getCookies
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderFrameMessageFilterProxy.prototype.getCookies = function(renderFrameId, url, firstPartyForCookies) {
    var params_ = new RenderFrameMessageFilter_GetCookies_Params();
    params_.renderFrameId = renderFrameId;
    params_.url = url;
    params_.firstPartyForCookies = firstPartyForCookies;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderFrameMessageFilter_GetCookies_Name,
          codec.align(RenderFrameMessageFilter_GetCookies_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderFrameMessageFilter_GetCookies_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderFrameMessageFilter_GetCookies_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function RenderFrameMessageFilterStub(delegate) {
    this.delegate_ = delegate;
  }
  RenderFrameMessageFilterStub.prototype.setCookie = function(renderFrameId, url, firstPartyForCookies, cookie) {
    return this.delegate_ && this.delegate_.setCookie && this.delegate_.setCookie(renderFrameId, url, firstPartyForCookies, cookie);
  }
  RenderFrameMessageFilterStub.prototype.getCookies = function(renderFrameId, url, firstPartyForCookies) {
    return this.delegate_ && this.delegate_.getCookies && this.delegate_.getCookies(renderFrameId, url, firstPartyForCookies);
  }

  RenderFrameMessageFilterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  RenderFrameMessageFilterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderFrameMessageFilter_SetCookie_Name:
      var params = reader.decodeStruct(RenderFrameMessageFilter_SetCookie_Params);
      this.setCookie(params.renderFrameId, params.url, params.firstPartyForCookies, params.cookie).then(function(response) {
        var responseParams =
            new RenderFrameMessageFilter_SetCookie_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kRenderFrameMessageFilter_SetCookie_Name,
            codec.align(RenderFrameMessageFilter_SetCookie_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderFrameMessageFilter_SetCookie_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderFrameMessageFilter_GetCookies_Name:
      var params = reader.decodeStruct(RenderFrameMessageFilter_GetCookies_Params);
      this.getCookies(params.renderFrameId, params.url, params.firstPartyForCookies).then(function(response) {
        var responseParams =
            new RenderFrameMessageFilter_GetCookies_ResponseParams();
        responseParams.cookies = response.cookies;
        var builder = new codec.MessageV1Builder(
            kRenderFrameMessageFilter_GetCookies_Name,
            codec.align(RenderFrameMessageFilter_GetCookies_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderFrameMessageFilter_GetCookies_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRenderFrameMessageFilterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderFrameMessageFilter_SetCookie_Name:
        if (message.expectsResponse())
          paramsClass = RenderFrameMessageFilter_SetCookie_Params;
      break;
      case kRenderFrameMessageFilter_GetCookies_Name:
        if (message.expectsResponse())
          paramsClass = RenderFrameMessageFilter_GetCookies_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderFrameMessageFilterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRenderFrameMessageFilter_SetCookie_Name:
        if (message.isResponse())
          paramsClass = RenderFrameMessageFilter_SetCookie_ResponseParams;
        break;
      case kRenderFrameMessageFilter_GetCookies_Name:
        if (message.isResponse())
          paramsClass = RenderFrameMessageFilter_GetCookies_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var RenderFrameMessageFilter = {
    name: 'content.mojom.RenderFrameMessageFilter',
    kVersion: 0,
    ptrClass: RenderFrameMessageFilterPtr,
    proxyClass: RenderFrameMessageFilterProxy,
    stubClass: RenderFrameMessageFilterStub,
    validateRequest: validateRenderFrameMessageFilterRequest,
    validateResponse: validateRenderFrameMessageFilterResponse,
    mojomId: 'content/common/render_frame_message_filter.mojom',
    fuzzMethods: {
      setCookie: {
        params: RenderFrameMessageFilter_SetCookie_Params,
      },
      getCookies: {
        params: RenderFrameMessageFilter_GetCookies_Params,
      },
    },
  };
  RenderFrameMessageFilterStub.prototype.validator = validateRenderFrameMessageFilterRequest;
  RenderFrameMessageFilterProxy.prototype.validator = validateRenderFrameMessageFilterResponse;
  exports.RenderFrameMessageFilter = RenderFrameMessageFilter;
  exports.RenderFrameMessageFilterPtr = RenderFrameMessageFilterPtr;
  exports.RenderFrameMessageFilterAssociatedPtr = RenderFrameMessageFilterAssociatedPtr;
})();