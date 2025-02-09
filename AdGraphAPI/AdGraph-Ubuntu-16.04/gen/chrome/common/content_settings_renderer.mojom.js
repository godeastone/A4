// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/content_settings_renderer.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');



  function ContentSettingsRenderer_SetAllowRunningInsecureContent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.prototype.initDefaults_ = function() {
  };
  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.generate = function(generator_) {
    var generated = new ContentSettingsRenderer_SetAllowRunningInsecureContent_Params;
    return generated;
  };

  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.validate = function(messageValidator, offset) {
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

  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.encodedSize = codec.kStructHeaderSize + 0;

  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.decode = function(decoder) {
    var packed;
    var val = new ContentSettingsRenderer_SetAllowRunningInsecureContent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ContentSettingsRenderer_SetAsInterstitial_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentSettingsRenderer_SetAsInterstitial_Params.prototype.initDefaults_ = function() {
  };
  ContentSettingsRenderer_SetAsInterstitial_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentSettingsRenderer_SetAsInterstitial_Params.generate = function(generator_) {
    var generated = new ContentSettingsRenderer_SetAsInterstitial_Params;
    return generated;
  };

  ContentSettingsRenderer_SetAsInterstitial_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ContentSettingsRenderer_SetAsInterstitial_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentSettingsRenderer_SetAsInterstitial_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentSettingsRenderer_SetAsInterstitial_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentSettingsRenderer_SetAsInterstitial_Params.validate = function(messageValidator, offset) {
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

  ContentSettingsRenderer_SetAsInterstitial_Params.encodedSize = codec.kStructHeaderSize + 0;

  ContentSettingsRenderer_SetAsInterstitial_Params.decode = function(decoder) {
    var packed;
    var val = new ContentSettingsRenderer_SetAsInterstitial_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ContentSettingsRenderer_SetAsInterstitial_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentSettingsRenderer_SetAsInterstitial_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kContentSettingsRenderer_SetAllowRunningInsecureContent_Name = 972170456;
  var kContentSettingsRenderer_SetAsInterstitial_Name = 600781901;

  function ContentSettingsRendererPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ContentSettingsRenderer,
                                                   handleOrPtrInfo);
  }

  function ContentSettingsRendererAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ContentSettingsRenderer, associatedInterfacePtrInfo);
  }

  ContentSettingsRendererAssociatedPtr.prototype =
      Object.create(ContentSettingsRendererPtr.prototype);
  ContentSettingsRendererAssociatedPtr.prototype.constructor =
      ContentSettingsRendererAssociatedPtr;

  function ContentSettingsRendererProxy(receiver) {
    this.receiver_ = receiver;
  }
  ContentSettingsRendererPtr.prototype.setAllowRunningInsecureContent = function() {
    return ContentSettingsRendererProxy.prototype.setAllowRunningInsecureContent
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentSettingsRendererProxy.prototype.setAllowRunningInsecureContent = function() {
    var params_ = new ContentSettingsRenderer_SetAllowRunningInsecureContent_Params();
    var builder = new codec.MessageV0Builder(
        kContentSettingsRenderer_SetAllowRunningInsecureContent_Name,
        codec.align(ContentSettingsRenderer_SetAllowRunningInsecureContent_Params.encodedSize));
    builder.encodeStruct(ContentSettingsRenderer_SetAllowRunningInsecureContent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentSettingsRendererPtr.prototype.setAsInterstitial = function() {
    return ContentSettingsRendererProxy.prototype.setAsInterstitial
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentSettingsRendererProxy.prototype.setAsInterstitial = function() {
    var params_ = new ContentSettingsRenderer_SetAsInterstitial_Params();
    var builder = new codec.MessageV0Builder(
        kContentSettingsRenderer_SetAsInterstitial_Name,
        codec.align(ContentSettingsRenderer_SetAsInterstitial_Params.encodedSize));
    builder.encodeStruct(ContentSettingsRenderer_SetAsInterstitial_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContentSettingsRendererStub(delegate) {
    this.delegate_ = delegate;
  }
  ContentSettingsRendererStub.prototype.setAllowRunningInsecureContent = function() {
    return this.delegate_ && this.delegate_.setAllowRunningInsecureContent && this.delegate_.setAllowRunningInsecureContent();
  }
  ContentSettingsRendererStub.prototype.setAsInterstitial = function() {
    return this.delegate_ && this.delegate_.setAsInterstitial && this.delegate_.setAsInterstitial();
  }

  ContentSettingsRendererStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentSettingsRenderer_SetAllowRunningInsecureContent_Name:
      var params = reader.decodeStruct(ContentSettingsRenderer_SetAllowRunningInsecureContent_Params);
      this.setAllowRunningInsecureContent();
      return true;
    case kContentSettingsRenderer_SetAsInterstitial_Name:
      var params = reader.decodeStruct(ContentSettingsRenderer_SetAsInterstitial_Params);
      this.setAsInterstitial();
      return true;
    default:
      return false;
    }
  };

  ContentSettingsRendererStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateContentSettingsRendererRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentSettingsRenderer_SetAllowRunningInsecureContent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentSettingsRenderer_SetAllowRunningInsecureContent_Params;
      break;
      case kContentSettingsRenderer_SetAsInterstitial_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentSettingsRenderer_SetAsInterstitial_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentSettingsRendererResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ContentSettingsRenderer = {
    name: 'chrome.mojom.ContentSettingsRenderer',
    kVersion: 0,
    ptrClass: ContentSettingsRendererPtr,
    proxyClass: ContentSettingsRendererProxy,
    stubClass: ContentSettingsRendererStub,
    validateRequest: validateContentSettingsRendererRequest,
    validateResponse: null,
    mojomId: 'chrome/common/content_settings_renderer.mojom',
    fuzzMethods: {
      setAllowRunningInsecureContent: {
        params: ContentSettingsRenderer_SetAllowRunningInsecureContent_Params,
      },
      setAsInterstitial: {
        params: ContentSettingsRenderer_SetAsInterstitial_Params,
      },
    },
  };
  ContentSettingsRendererStub.prototype.validator = validateContentSettingsRendererRequest;
  ContentSettingsRendererProxy.prototype.validator = null;
  exports.ContentSettingsRenderer = ContentSettingsRenderer;
  exports.ContentSettingsRendererPtr = ContentSettingsRendererPtr;
  exports.ContentSettingsRendererAssociatedPtr = ContentSettingsRendererAssociatedPtr;
})();