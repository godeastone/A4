// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/render_widget_window_tree_client_factory.mojom';
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
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var window_tree$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_tree.mojom', '../../services/ui/public/interfaces/window_tree.mojom.js');
  }



  function RenderWidgetWindowTreeClient_Embed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderWidgetWindowTreeClient_Embed_Params.prototype.initDefaults_ = function() {
    this.frameRoutingId = 0;
    this.token = null;
  };
  RenderWidgetWindowTreeClient_Embed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderWidgetWindowTreeClient_Embed_Params.generate = function(generator_) {
    var generated = new RenderWidgetWindowTreeClient_Embed_Params;
    generated.frameRoutingId = generator_.generateUint32();
    generated.token = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  RenderWidgetWindowTreeClient_Embed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameRoutingId = mutator_.mutateUint32(this.frameRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  RenderWidgetWindowTreeClient_Embed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderWidgetWindowTreeClient_Embed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderWidgetWindowTreeClient_Embed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderWidgetWindowTreeClient_Embed_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RenderWidgetWindowTreeClient_Embed_Params.token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderWidgetWindowTreeClient_Embed_Params.encodedSize = codec.kStructHeaderSize + 16;

  RenderWidgetWindowTreeClient_Embed_Params.decode = function(decoder) {
    var packed;
    var val = new RenderWidgetWindowTreeClient_Embed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameRoutingId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.token = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  RenderWidgetWindowTreeClient_Embed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderWidgetWindowTreeClient_Embed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.frameRoutingId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.token);
  };
  function RenderWidgetWindowTreeClient_DestroyFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderWidgetWindowTreeClient_DestroyFrame_Params.prototype.initDefaults_ = function() {
    this.frameRoutingId = 0;
  };
  RenderWidgetWindowTreeClient_DestroyFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderWidgetWindowTreeClient_DestroyFrame_Params.generate = function(generator_) {
    var generated = new RenderWidgetWindowTreeClient_DestroyFrame_Params;
    generated.frameRoutingId = generator_.generateUint32();
    return generated;
  };

  RenderWidgetWindowTreeClient_DestroyFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameRoutingId = mutator_.mutateUint32(this.frameRoutingId);
    }
    return this;
  };
  RenderWidgetWindowTreeClient_DestroyFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderWidgetWindowTreeClient_DestroyFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderWidgetWindowTreeClient_DestroyFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderWidgetWindowTreeClient_DestroyFrame_Params.validate = function(messageValidator, offset) {
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

  RenderWidgetWindowTreeClient_DestroyFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  RenderWidgetWindowTreeClient_DestroyFrame_Params.decode = function(decoder) {
    var packed;
    var val = new RenderWidgetWindowTreeClient_DestroyFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameRoutingId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderWidgetWindowTreeClient_DestroyFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderWidgetWindowTreeClient_DestroyFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.frameRoutingId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.initDefaults_ = function() {
    this.renderWidgetHostRoutingId = 0;
    this.windowTreeClient = new bindings.InterfaceRequest();
    this.renderWidgetWindowTreeClientRequest = new bindings.InterfaceRequest();
  };
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.generate = function(generator_) {
    var generated = new RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params;
    generated.renderWidgetHostRoutingId = generator_.generateUint32();
    generated.windowTreeClient = generator_.generateInterfaceRequest("ui.mojom.WindowTreeClient", false);
    generated.renderWidgetWindowTreeClientRequest = generator_.generateInterfaceRequest("content.mojom.RenderWidgetWindowTreeClient", false);
    return generated;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderWidgetHostRoutingId = mutator_.mutateUint32(this.renderWidgetHostRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowTreeClient = mutator_.mutateInterfaceRequest(this.windowTreeClient, "ui.mojom.WindowTreeClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.renderWidgetWindowTreeClientRequest = mutator_.mutateInterfaceRequest(this.renderWidgetWindowTreeClientRequest, "content.mojom.RenderWidgetWindowTreeClient", false);
    }
    return this;
  };
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.windowTreeClient !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeClientRequest"]);
    }
    if (this.renderWidgetWindowTreeClientRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.RenderWidgetWindowTreeClientRequest"]);
    }
    return handles;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.windowTreeClient = handles[idx++];;
    this.renderWidgetWindowTreeClientRequest = handles[idx++];;
    return idx;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.windowTreeClient
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.renderWidgetWindowTreeClientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize = codec.kStructHeaderSize + 16;

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.decode = function(decoder) {
    var packed;
    var val = new RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderWidgetHostRoutingId = decoder.decodeStruct(codec.Uint32);
    val.windowTreeClient = decoder.decodeStruct(codec.InterfaceRequest);
    val.renderWidgetWindowTreeClientRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.renderWidgetHostRoutingId);
    encoder.encodeStruct(codec.InterfaceRequest, val.windowTreeClient);
    encoder.encodeStruct(codec.InterfaceRequest, val.renderWidgetWindowTreeClientRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kRenderWidgetWindowTreeClient_Embed_Name = 1068512399;
  var kRenderWidgetWindowTreeClient_DestroyFrame_Name = 1900631702;

  function RenderWidgetWindowTreeClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RenderWidgetWindowTreeClient,
                                                   handleOrPtrInfo);
  }

  function RenderWidgetWindowTreeClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RenderWidgetWindowTreeClient, associatedInterfacePtrInfo);
  }

  RenderWidgetWindowTreeClientAssociatedPtr.prototype =
      Object.create(RenderWidgetWindowTreeClientPtr.prototype);
  RenderWidgetWindowTreeClientAssociatedPtr.prototype.constructor =
      RenderWidgetWindowTreeClientAssociatedPtr;

  function RenderWidgetWindowTreeClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  RenderWidgetWindowTreeClientPtr.prototype.embed = function() {
    return RenderWidgetWindowTreeClientProxy.prototype.embed
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderWidgetWindowTreeClientProxy.prototype.embed = function(frameRoutingId, token) {
    var params_ = new RenderWidgetWindowTreeClient_Embed_Params();
    params_.frameRoutingId = frameRoutingId;
    params_.token = token;
    var builder = new codec.MessageV0Builder(
        kRenderWidgetWindowTreeClient_Embed_Name,
        codec.align(RenderWidgetWindowTreeClient_Embed_Params.encodedSize));
    builder.encodeStruct(RenderWidgetWindowTreeClient_Embed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RenderWidgetWindowTreeClientPtr.prototype.destroyFrame = function() {
    return RenderWidgetWindowTreeClientProxy.prototype.destroyFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderWidgetWindowTreeClientProxy.prototype.destroyFrame = function(frameRoutingId) {
    var params_ = new RenderWidgetWindowTreeClient_DestroyFrame_Params();
    params_.frameRoutingId = frameRoutingId;
    var builder = new codec.MessageV0Builder(
        kRenderWidgetWindowTreeClient_DestroyFrame_Name,
        codec.align(RenderWidgetWindowTreeClient_DestroyFrame_Params.encodedSize));
    builder.encodeStruct(RenderWidgetWindowTreeClient_DestroyFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderWidgetWindowTreeClientStub(delegate) {
    this.delegate_ = delegate;
  }
  RenderWidgetWindowTreeClientStub.prototype.embed = function(frameRoutingId, token) {
    return this.delegate_ && this.delegate_.embed && this.delegate_.embed(frameRoutingId, token);
  }
  RenderWidgetWindowTreeClientStub.prototype.destroyFrame = function(frameRoutingId) {
    return this.delegate_ && this.delegate_.destroyFrame && this.delegate_.destroyFrame(frameRoutingId);
  }

  RenderWidgetWindowTreeClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderWidgetWindowTreeClient_Embed_Name:
      var params = reader.decodeStruct(RenderWidgetWindowTreeClient_Embed_Params);
      this.embed(params.frameRoutingId, params.token);
      return true;
    case kRenderWidgetWindowTreeClient_DestroyFrame_Name:
      var params = reader.decodeStruct(RenderWidgetWindowTreeClient_DestroyFrame_Params);
      this.destroyFrame(params.frameRoutingId);
      return true;
    default:
      return false;
    }
  };

  RenderWidgetWindowTreeClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRenderWidgetWindowTreeClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderWidgetWindowTreeClient_Embed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderWidgetWindowTreeClient_Embed_Params;
      break;
      case kRenderWidgetWindowTreeClient_DestroyFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderWidgetWindowTreeClient_DestroyFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderWidgetWindowTreeClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RenderWidgetWindowTreeClient = {
    name: 'content.mojom.RenderWidgetWindowTreeClient',
    kVersion: 0,
    ptrClass: RenderWidgetWindowTreeClientPtr,
    proxyClass: RenderWidgetWindowTreeClientProxy,
    stubClass: RenderWidgetWindowTreeClientStub,
    validateRequest: validateRenderWidgetWindowTreeClientRequest,
    validateResponse: null,
    mojomId: 'content/common/render_widget_window_tree_client_factory.mojom',
    fuzzMethods: {
      embed: {
        params: RenderWidgetWindowTreeClient_Embed_Params,
      },
      destroyFrame: {
        params: RenderWidgetWindowTreeClient_DestroyFrame_Params,
      },
    },
  };
  RenderWidgetWindowTreeClientStub.prototype.validator = validateRenderWidgetWindowTreeClientRequest;
  RenderWidgetWindowTreeClientProxy.prototype.validator = null;
  var kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name = 821943978;

  function RenderWidgetWindowTreeClientFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RenderWidgetWindowTreeClientFactory,
                                                   handleOrPtrInfo);
  }

  function RenderWidgetWindowTreeClientFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RenderWidgetWindowTreeClientFactory, associatedInterfacePtrInfo);
  }

  RenderWidgetWindowTreeClientFactoryAssociatedPtr.prototype =
      Object.create(RenderWidgetWindowTreeClientFactoryPtr.prototype);
  RenderWidgetWindowTreeClientFactoryAssociatedPtr.prototype.constructor =
      RenderWidgetWindowTreeClientFactoryAssociatedPtr;

  function RenderWidgetWindowTreeClientFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  RenderWidgetWindowTreeClientFactoryPtr.prototype.createWindowTreeClientForRenderWidget = function() {
    return RenderWidgetWindowTreeClientFactoryProxy.prototype.createWindowTreeClientForRenderWidget
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderWidgetWindowTreeClientFactoryProxy.prototype.createWindowTreeClientForRenderWidget = function(renderWidgetHostRoutingId, windowTreeClient, renderWidgetWindowTreeClientRequest) {
    var params_ = new RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params();
    params_.renderWidgetHostRoutingId = renderWidgetHostRoutingId;
    params_.windowTreeClient = windowTreeClient;
    params_.renderWidgetWindowTreeClientRequest = renderWidgetWindowTreeClientRequest;
    var builder = new codec.MessageV0Builder(
        kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name,
        codec.align(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params.encodedSize));
    builder.encodeStruct(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderWidgetWindowTreeClientFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  RenderWidgetWindowTreeClientFactoryStub.prototype.createWindowTreeClientForRenderWidget = function(renderWidgetHostRoutingId, windowTreeClient, renderWidgetWindowTreeClientRequest) {
    return this.delegate_ && this.delegate_.createWindowTreeClientForRenderWidget && this.delegate_.createWindowTreeClientForRenderWidget(renderWidgetHostRoutingId, windowTreeClient, renderWidgetWindowTreeClientRequest);
  }

  RenderWidgetWindowTreeClientFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name:
      var params = reader.decodeStruct(RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params);
      this.createWindowTreeClientForRenderWidget(params.renderWidgetHostRoutingId, params.windowTreeClient, params.renderWidgetWindowTreeClientRequest);
      return true;
    default:
      return false;
    }
  };

  RenderWidgetWindowTreeClientFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRenderWidgetWindowTreeClientFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderWidgetWindowTreeClientFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RenderWidgetWindowTreeClientFactory = {
    name: 'content.mojom.RenderWidgetWindowTreeClientFactory',
    kVersion: 0,
    ptrClass: RenderWidgetWindowTreeClientFactoryPtr,
    proxyClass: RenderWidgetWindowTreeClientFactoryProxy,
    stubClass: RenderWidgetWindowTreeClientFactoryStub,
    validateRequest: validateRenderWidgetWindowTreeClientFactoryRequest,
    validateResponse: null,
    mojomId: 'content/common/render_widget_window_tree_client_factory.mojom',
    fuzzMethods: {
      createWindowTreeClientForRenderWidget: {
        params: RenderWidgetWindowTreeClientFactory_CreateWindowTreeClientForRenderWidget_Params,
      },
    },
  };
  RenderWidgetWindowTreeClientFactoryStub.prototype.validator = validateRenderWidgetWindowTreeClientFactoryRequest;
  RenderWidgetWindowTreeClientFactoryProxy.prototype.validator = null;
  exports.RenderWidgetWindowTreeClient = RenderWidgetWindowTreeClient;
  exports.RenderWidgetWindowTreeClientPtr = RenderWidgetWindowTreeClientPtr;
  exports.RenderWidgetWindowTreeClientAssociatedPtr = RenderWidgetWindowTreeClientAssociatedPtr;
  exports.RenderWidgetWindowTreeClientFactory = RenderWidgetWindowTreeClientFactory;
  exports.RenderWidgetWindowTreeClientFactoryPtr = RenderWidgetWindowTreeClientFactoryPtr;
  exports.RenderWidgetWindowTreeClientFactoryAssociatedPtr = RenderWidgetWindowTreeClientFactoryAssociatedPtr;
})();