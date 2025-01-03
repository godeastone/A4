// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'extensions/common/mojo/guest_view.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('extensions.mojom');
  var transferrable_url_loader$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/transferrable_url_loader.mojom', '../../../content/public/common/transferrable_url_loader.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function GuestView_CreateEmbeddedMimeHandlerViewGuest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.prototype.initDefaults_ = function() {
    this.renderFrameId = 0;
    this.tabId = 0;
    this.originalUrl = null;
    this.elementInstanceId = 0;
    this.elementSize = null;
    this.transferrableUrlLoader = null;
  };
  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.generate = function(generator_) {
    var generated = new GuestView_CreateEmbeddedMimeHandlerViewGuest_Params;
    generated.renderFrameId = generator_.generateInt32();
    generated.tabId = generator_.generateInt32();
    generated.originalUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.elementInstanceId = generator_.generateInt32();
    generated.elementSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.transferrableUrlLoader = generator_.generateStruct(content.mojom.TransferrableURLLoader, false);
    return generated;
  };

  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.originalUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.elementInstanceId = mutator_.mutateInt32(this.elementInstanceId);
    }
    if (mutator_.chooseMutateField()) {
      this.elementSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.transferrableUrlLoader = mutator_.mutateStruct(content.mojom.TransferrableURLLoader, false);
    }
    return this;
  };
  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.transferrableUrlLoader !== null) {
      Array.prototype.push.apply(handles, this.transferrableUrlLoader.getHandleDeps());
    }
    return handles;
  };

  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.transferrableUrlLoader.setHandlesInternal_(handles, idx);
    return idx;
  };

  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.validate = function(messageValidator, offset) {
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




    // validate GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.originalUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.elementSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.transferrableUrlLoader
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, transferrable_url_loader$.TransferrableURLLoader, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.encodedSize = codec.kStructHeaderSize + 40;

  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.decode = function(decoder) {
    var packed;
    var val = new GuestView_CreateEmbeddedMimeHandlerViewGuest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    val.tabId = decoder.decodeStruct(codec.Int32);
    val.originalUrl = decoder.decodeStructPointer(url$.Url);
    val.elementInstanceId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.elementSize = decoder.decodeStructPointer(geometry$.Size);
    val.transferrableUrlLoader = decoder.decodeStructPointer(transferrable_url_loader$.TransferrableURLLoader);
    return val;
  };

  GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.encodeStruct(codec.Int32, val.tabId);
    encoder.encodeStructPointer(url$.Url, val.originalUrl);
    encoder.encodeStruct(codec.Int32, val.elementInstanceId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.elementSize);
    encoder.encodeStructPointer(transferrable_url_loader$.TransferrableURLLoader, val.transferrableUrlLoader);
  };
  var kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name = 1088725486;

  function GuestViewPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GuestView,
                                                   handleOrPtrInfo);
  }

  function GuestViewAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GuestView, associatedInterfacePtrInfo);
  }

  GuestViewAssociatedPtr.prototype =
      Object.create(GuestViewPtr.prototype);
  GuestViewAssociatedPtr.prototype.constructor =
      GuestViewAssociatedPtr;

  function GuestViewProxy(receiver) {
    this.receiver_ = receiver;
  }
  GuestViewPtr.prototype.createEmbeddedMimeHandlerViewGuest = function() {
    return GuestViewProxy.prototype.createEmbeddedMimeHandlerViewGuest
        .apply(this.ptr.getProxy(), arguments);
  };

  GuestViewProxy.prototype.createEmbeddedMimeHandlerViewGuest = function(renderFrameId, tabId, originalUrl, elementInstanceId, elementSize, transferrableUrlLoader) {
    var params_ = new GuestView_CreateEmbeddedMimeHandlerViewGuest_Params();
    params_.renderFrameId = renderFrameId;
    params_.tabId = tabId;
    params_.originalUrl = originalUrl;
    params_.elementInstanceId = elementInstanceId;
    params_.elementSize = elementSize;
    params_.transferrableUrlLoader = transferrableUrlLoader;
    var builder = new codec.MessageV0Builder(
        kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name,
        codec.align(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params.encodedSize));
    builder.encodeStruct(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GuestViewStub(delegate) {
    this.delegate_ = delegate;
  }
  GuestViewStub.prototype.createEmbeddedMimeHandlerViewGuest = function(renderFrameId, tabId, originalUrl, elementInstanceId, elementSize, transferrableUrlLoader) {
    return this.delegate_ && this.delegate_.createEmbeddedMimeHandlerViewGuest && this.delegate_.createEmbeddedMimeHandlerViewGuest(renderFrameId, tabId, originalUrl, elementInstanceId, elementSize, transferrableUrlLoader);
  }

  GuestViewStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name:
      var params = reader.decodeStruct(GuestView_CreateEmbeddedMimeHandlerViewGuest_Params);
      this.createEmbeddedMimeHandlerViewGuest(params.renderFrameId, params.tabId, params.originalUrl, params.elementInstanceId, params.elementSize, params.transferrableUrlLoader);
      return true;
    default:
      return false;
    }
  };

  GuestViewStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGuestViewRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GuestView_CreateEmbeddedMimeHandlerViewGuest_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGuestViewResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GuestView = {
    name: 'extensions.mojom.GuestView',
    kVersion: 0,
    ptrClass: GuestViewPtr,
    proxyClass: GuestViewProxy,
    stubClass: GuestViewStub,
    validateRequest: validateGuestViewRequest,
    validateResponse: null,
    mojomId: 'extensions/common/mojo/guest_view.mojom',
    fuzzMethods: {
      createEmbeddedMimeHandlerViewGuest: {
        params: GuestView_CreateEmbeddedMimeHandlerViewGuest_Params,
      },
    },
  };
  GuestViewStub.prototype.validator = validateGuestViewRequest;
  GuestViewProxy.prototype.validator = null;
  exports.GuestView = GuestView;
  exports.GuestViewPtr = GuestViewPtr;
  exports.GuestViewAssociatedPtr = GuestViewAssociatedPtr;
})();