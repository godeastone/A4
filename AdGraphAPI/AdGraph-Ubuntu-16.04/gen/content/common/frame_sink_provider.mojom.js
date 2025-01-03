// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/frame_sink_provider.mojom';
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
  var render_frame_metadata$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/render_frame_metadata.mojom', 'render_frame_metadata.mojom.js');
  }
  var compositor_frame_sink$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositor_frame_sink.mojom', '../../services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.js');
  }



  function FrameSinkProvider_CreateForWidget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkProvider_CreateForWidget_Params.prototype.initDefaults_ = function() {
    this.widgetId = 0;
    this.compositorFrameSinkRequest = new bindings.InterfaceRequest();
    this.compositorFrameSinkClient = new compositor_frame_sink$.CompositorFrameSinkClientPtr();
  };
  FrameSinkProvider_CreateForWidget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkProvider_CreateForWidget_Params.generate = function(generator_) {
    var generated = new FrameSinkProvider_CreateForWidget_Params;
    generated.widgetId = generator_.generateInt32();
    generated.compositorFrameSinkRequest = generator_.generateInterfaceRequest("viz.mojom.CompositorFrameSink", false);
    generated.compositorFrameSinkClient = generator_.generateInterface("viz.mojom.CompositorFrameSinkClient", false);
    return generated;
  };

  FrameSinkProvider_CreateForWidget_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.widgetId = mutator_.mutateInt32(this.widgetId);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSinkRequest = mutator_.mutateInterfaceRequest(this.compositorFrameSinkRequest, "viz.mojom.CompositorFrameSink", false);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSinkClient = mutator_.mutateInterface(this.compositorFrameSinkClient, "viz.mojom.CompositorFrameSinkClient", false);
    }
    return this;
  };
  FrameSinkProvider_CreateForWidget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.compositorFrameSinkRequest !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkRequest"]);
    }
    if (this.compositorFrameSinkClient !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkClientPtr"]);
    }
    return handles;
  };

  FrameSinkProvider_CreateForWidget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkProvider_CreateForWidget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.compositorFrameSinkRequest = handles[idx++];;
    this.compositorFrameSinkClient = handles[idx++];;
    return idx;
  };

  FrameSinkProvider_CreateForWidget_Params.validate = function(messageValidator, offset) {
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



    // validate FrameSinkProvider_CreateForWidget_Params.compositorFrameSinkRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkProvider_CreateForWidget_Params.compositorFrameSinkClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkProvider_CreateForWidget_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkProvider_CreateForWidget_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkProvider_CreateForWidget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.widgetId = decoder.decodeStruct(codec.Int32);
    val.compositorFrameSinkRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.compositorFrameSinkClient = decoder.decodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr));
    return val;
  };

  FrameSinkProvider_CreateForWidget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkProvider_CreateForWidget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.widgetId);
    encoder.encodeStruct(codec.InterfaceRequest, val.compositorFrameSinkRequest);
    encoder.encodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr), val.compositorFrameSinkClient);
  };
  function FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.prototype.initDefaults_ = function() {
    this.widgetId = 0;
    this.renderFrameMetadataObserverClientRequest = new bindings.InterfaceRequest();
    this.renderFrameMetadataObserver = new render_frame_metadata$.RenderFrameMetadataObserverPtr();
  };
  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.generate = function(generator_) {
    var generated = new FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params;
    generated.widgetId = generator_.generateInt32();
    generated.renderFrameMetadataObserverClientRequest = generator_.generateInterfaceRequest("content.mojom.RenderFrameMetadataObserverClient", false);
    generated.renderFrameMetadataObserver = generator_.generateInterface("content.mojom.RenderFrameMetadataObserver", false);
    return generated;
  };

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.widgetId = mutator_.mutateInt32(this.widgetId);
    }
    if (mutator_.chooseMutateField()) {
      this.renderFrameMetadataObserverClientRequest = mutator_.mutateInterfaceRequest(this.renderFrameMetadataObserverClientRequest, "content.mojom.RenderFrameMetadataObserverClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.renderFrameMetadataObserver = mutator_.mutateInterface(this.renderFrameMetadataObserver, "content.mojom.RenderFrameMetadataObserver", false);
    }
    return this;
  };
  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.renderFrameMetadataObserverClientRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.RenderFrameMetadataObserverClientRequest"]);
    }
    if (this.renderFrameMetadataObserver !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.RenderFrameMetadataObserverPtr"]);
    }
    return handles;
  };

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.renderFrameMetadataObserverClientRequest = handles[idx++];;
    this.renderFrameMetadataObserver = handles[idx++];;
    return idx;
  };

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.validate = function(messageValidator, offset) {
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



    // validate FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.renderFrameMetadataObserverClientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.renderFrameMetadataObserver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.decode = function(decoder) {
    var packed;
    var val = new FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.widgetId = decoder.decodeStruct(codec.Int32);
    val.renderFrameMetadataObserverClientRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.renderFrameMetadataObserver = decoder.decodeStruct(new codec.Interface(render_frame_metadata$.RenderFrameMetadataObserverPtr));
    return val;
  };

  FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.widgetId);
    encoder.encodeStruct(codec.InterfaceRequest, val.renderFrameMetadataObserverClientRequest);
    encoder.encodeStruct(new codec.Interface(render_frame_metadata$.RenderFrameMetadataObserverPtr), val.renderFrameMetadataObserver);
  };
  var kFrameSinkProvider_CreateForWidget_Name = 418802276;
  var kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name = 1691736101;

  function FrameSinkProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameSinkProvider,
                                                   handleOrPtrInfo);
  }

  function FrameSinkProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameSinkProvider, associatedInterfacePtrInfo);
  }

  FrameSinkProviderAssociatedPtr.prototype =
      Object.create(FrameSinkProviderPtr.prototype);
  FrameSinkProviderAssociatedPtr.prototype.constructor =
      FrameSinkProviderAssociatedPtr;

  function FrameSinkProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameSinkProviderPtr.prototype.createForWidget = function() {
    return FrameSinkProviderProxy.prototype.createForWidget
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkProviderProxy.prototype.createForWidget = function(widgetId, compositorFrameSinkRequest, compositorFrameSinkClient) {
    var params_ = new FrameSinkProvider_CreateForWidget_Params();
    params_.widgetId = widgetId;
    params_.compositorFrameSinkRequest = compositorFrameSinkRequest;
    params_.compositorFrameSinkClient = compositorFrameSinkClient;
    var builder = new codec.MessageV0Builder(
        kFrameSinkProvider_CreateForWidget_Name,
        codec.align(FrameSinkProvider_CreateForWidget_Params.encodedSize));
    builder.encodeStruct(FrameSinkProvider_CreateForWidget_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameSinkProviderPtr.prototype.registerRenderFrameMetadataObserver = function() {
    return FrameSinkProviderProxy.prototype.registerRenderFrameMetadataObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameSinkProviderProxy.prototype.registerRenderFrameMetadataObserver = function(widgetId, renderFrameMetadataObserverClientRequest, renderFrameMetadataObserver) {
    var params_ = new FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params();
    params_.widgetId = widgetId;
    params_.renderFrameMetadataObserverClientRequest = renderFrameMetadataObserverClientRequest;
    params_.renderFrameMetadataObserver = renderFrameMetadataObserver;
    var builder = new codec.MessageV0Builder(
        kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name,
        codec.align(FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params.encodedSize));
    builder.encodeStruct(FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameSinkProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameSinkProviderStub.prototype.createForWidget = function(widgetId, compositorFrameSinkRequest, compositorFrameSinkClient) {
    return this.delegate_ && this.delegate_.createForWidget && this.delegate_.createForWidget(widgetId, compositorFrameSinkRequest, compositorFrameSinkClient);
  }
  FrameSinkProviderStub.prototype.registerRenderFrameMetadataObserver = function(widgetId, renderFrameMetadataObserverClientRequest, renderFrameMetadataObserver) {
    return this.delegate_ && this.delegate_.registerRenderFrameMetadataObserver && this.delegate_.registerRenderFrameMetadataObserver(widgetId, renderFrameMetadataObserverClientRequest, renderFrameMetadataObserver);
  }

  FrameSinkProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameSinkProvider_CreateForWidget_Name:
      var params = reader.decodeStruct(FrameSinkProvider_CreateForWidget_Params);
      this.createForWidget(params.widgetId, params.compositorFrameSinkRequest, params.compositorFrameSinkClient);
      return true;
    case kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name:
      var params = reader.decodeStruct(FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params);
      this.registerRenderFrameMetadataObserver(params.widgetId, params.renderFrameMetadataObserverClientRequest, params.renderFrameMetadataObserver);
      return true;
    default:
      return false;
    }
  };

  FrameSinkProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameSinkProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameSinkProvider_CreateForWidget_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkProvider_CreateForWidget_Params;
      break;
      case kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameSinkProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameSinkProvider = {
    name: 'content.mojom.FrameSinkProvider',
    kVersion: 0,
    ptrClass: FrameSinkProviderPtr,
    proxyClass: FrameSinkProviderProxy,
    stubClass: FrameSinkProviderStub,
    validateRequest: validateFrameSinkProviderRequest,
    validateResponse: null,
    mojomId: 'content/common/frame_sink_provider.mojom',
    fuzzMethods: {
      createForWidget: {
        params: FrameSinkProvider_CreateForWidget_Params,
      },
      registerRenderFrameMetadataObserver: {
        params: FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params,
      },
    },
  };
  FrameSinkProviderStub.prototype.validator = validateFrameSinkProviderRequest;
  FrameSinkProviderProxy.prototype.validator = null;
  exports.FrameSinkProvider = FrameSinkProvider;
  exports.FrameSinkProviderPtr = FrameSinkProviderPtr;
  exports.FrameSinkProviderAssociatedPtr = FrameSinkProviderAssociatedPtr;
})();