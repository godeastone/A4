// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/frame_sinks/embedded_frame_sink.mojom';
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
  var compositor_frame_sink$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositor_frame_sink.mojom', '../../../../../../services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.js');
  }
  var frame_sink_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/frame_sink_id.mojom', '../../../../../../services/viz/public/interfaces/compositing/frame_sink_id.mojom.js');
  }
  var surface_info$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_info.mojom', '../../../../../../services/viz/public/interfaces/compositing/surface_info.mojom.js');
  }



  function EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.prototype.initDefaults_ = function() {
    this.surfaceInfo = null;
  };
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.generate = function(generator_) {
    var generated = new EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params;
    generated.surfaceInfo = generator_.generateStruct(viz.mojom.SurfaceInfo, false);
    return generated;
  };

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceInfo = mutator_.mutateStruct(viz.mojom.SurfaceInfo, false);
    }
    return this;
  };
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.surfaceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_info$.SurfaceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceInfo = decoder.decodeStructPointer(surface_info$.SurfaceInfo);
    return val;
  };

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_info$.SurfaceInfo, val.surfaceInfo);
  };
  function EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.prototype.initDefaults_ = function() {
    this.parentFrameSinkId = null;
    this.frameSinkId = null;
    this.client = new EmbeddedFrameSinkClientPtr();
  };
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.generate = function(generator_) {
    var generated = new EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params;
    generated.parentFrameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.client = generator_.generateInterface("blink.mojom.EmbeddedFrameSinkClient", false);
    return generated;
  };

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parentFrameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "blink.mojom.EmbeddedFrameSinkClient", false);
    }
    return this;
  };
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.EmbeddedFrameSinkClientPtr"]);
    }
    return handles;
  };

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.parentFrameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.encodedSize = codec.kStructHeaderSize + 24;

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parentFrameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.client = decoder.decodeStruct(new codec.Interface(EmbeddedFrameSinkClientPtr));
    return val;
  };

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.parentFrameSinkId);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(new codec.Interface(EmbeddedFrameSinkClientPtr), val.client);
  };
  function EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.client = new compositor_frame_sink$.CompositorFrameSinkClientPtr();
    this.sink = new bindings.InterfaceRequest();
  };
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.generate = function(generator_) {
    var generated = new EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.client = generator_.generateInterface("viz.mojom.CompositorFrameSinkClient", false);
    generated.sink = generator_.generateInterfaceRequest("viz.mojom.CompositorFrameSink", false);
    return generated;
  };

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "viz.mojom.CompositorFrameSinkClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sink = mutator_.mutateInterfaceRequest(this.sink, "viz.mojom.CompositorFrameSink", false);
    }
    return this;
  };
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkClientPtr"]);
    }
    if (this.sink !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkRequest"]);
    }
    return handles;
  };

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    this.sink = handles[idx++];;
    return idx;
  };

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.sink
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.encodedSize = codec.kStructHeaderSize + 24;

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.client = decoder.decodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr));
    val.sink = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr), val.client);
    encoder.encodeStruct(codec.InterfaceRequest, val.sink);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.prototype.initDefaults_ = function() {
    this.parentFrameSinkId = null;
    this.frameSinkId = null;
    this.surfaceClient = new EmbeddedFrameSinkClientPtr();
    this.client = new compositor_frame_sink$.CompositorFrameSinkClientPtr();
    this.sink = new bindings.InterfaceRequest();
  };
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.generate = function(generator_) {
    var generated = new EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params;
    generated.parentFrameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.surfaceClient = generator_.generateInterface("blink.mojom.EmbeddedFrameSinkClient", false);
    generated.client = generator_.generateInterface("viz.mojom.CompositorFrameSinkClient", false);
    generated.sink = generator_.generateInterfaceRequest("viz.mojom.CompositorFrameSink", false);
    return generated;
  };

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parentFrameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.surfaceClient = mutator_.mutateInterface(this.surfaceClient, "blink.mojom.EmbeddedFrameSinkClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "viz.mojom.CompositorFrameSinkClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sink = mutator_.mutateInterfaceRequest(this.sink, "viz.mojom.CompositorFrameSink", false);
    }
    return this;
  };
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.surfaceClient !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.EmbeddedFrameSinkClientPtr"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkClientPtr"]);
    }
    if (this.sink !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkRequest"]);
    }
    return handles;
  };

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.surfaceClient = handles[idx++];;
    this.client = handles[idx++];;
    this.sink = handles[idx++];;
    return idx;
  };

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.parentFrameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.surfaceClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.sink
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.encodedSize = codec.kStructHeaderSize + 40;

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parentFrameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.surfaceClient = decoder.decodeStruct(new codec.Interface(EmbeddedFrameSinkClientPtr));
    val.client = decoder.decodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr));
    val.sink = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.parentFrameSinkId);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(new codec.Interface(EmbeddedFrameSinkClientPtr), val.surfaceClient);
    encoder.encodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr), val.client);
    encoder.encodeStruct(codec.InterfaceRequest, val.sink);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name = 907963136;

  function EmbeddedFrameSinkClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedFrameSinkClient,
                                                   handleOrPtrInfo);
  }

  function EmbeddedFrameSinkClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedFrameSinkClient, associatedInterfacePtrInfo);
  }

  EmbeddedFrameSinkClientAssociatedPtr.prototype =
      Object.create(EmbeddedFrameSinkClientPtr.prototype);
  EmbeddedFrameSinkClientAssociatedPtr.prototype.constructor =
      EmbeddedFrameSinkClientAssociatedPtr;

  function EmbeddedFrameSinkClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedFrameSinkClientPtr.prototype.onFirstSurfaceActivation = function() {
    return EmbeddedFrameSinkClientProxy.prototype.onFirstSurfaceActivation
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedFrameSinkClientProxy.prototype.onFirstSurfaceActivation = function(surfaceInfo) {
    var params_ = new EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params();
    params_.surfaceInfo = surfaceInfo;
    var builder = new codec.MessageV0Builder(
        kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name,
        codec.align(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params.encodedSize));
    builder.encodeStruct(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedFrameSinkClientStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedFrameSinkClientStub.prototype.onFirstSurfaceActivation = function(surfaceInfo) {
    return this.delegate_ && this.delegate_.onFirstSurfaceActivation && this.delegate_.onFirstSurfaceActivation(surfaceInfo);
  }

  EmbeddedFrameSinkClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name:
      var params = reader.decodeStruct(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params);
      this.onFirstSurfaceActivation(params.surfaceInfo);
      return true;
    default:
      return false;
    }
  };

  EmbeddedFrameSinkClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateEmbeddedFrameSinkClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedFrameSinkClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedFrameSinkClient = {
    name: 'blink.mojom.EmbeddedFrameSinkClient',
    kVersion: 0,
    ptrClass: EmbeddedFrameSinkClientPtr,
    proxyClass: EmbeddedFrameSinkClientProxy,
    stubClass: EmbeddedFrameSinkClientStub,
    validateRequest: validateEmbeddedFrameSinkClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/frame_sinks/embedded_frame_sink.mojom',
    fuzzMethods: {
      onFirstSurfaceActivation: {
        params: EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params,
      },
    },
  };
  EmbeddedFrameSinkClientStub.prototype.validator = validateEmbeddedFrameSinkClientRequest;
  EmbeddedFrameSinkClientProxy.prototype.validator = null;
  var kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name = 1401821348;
  var kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name = 1114417450;
  var kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name = 596060983;

  function EmbeddedFrameSinkProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedFrameSinkProvider,
                                                   handleOrPtrInfo);
  }

  function EmbeddedFrameSinkProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedFrameSinkProvider, associatedInterfacePtrInfo);
  }

  EmbeddedFrameSinkProviderAssociatedPtr.prototype =
      Object.create(EmbeddedFrameSinkProviderPtr.prototype);
  EmbeddedFrameSinkProviderAssociatedPtr.prototype.constructor =
      EmbeddedFrameSinkProviderAssociatedPtr;

  function EmbeddedFrameSinkProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedFrameSinkProviderPtr.prototype.registerEmbeddedFrameSink = function() {
    return EmbeddedFrameSinkProviderProxy.prototype.registerEmbeddedFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedFrameSinkProviderProxy.prototype.registerEmbeddedFrameSink = function(parentFrameSinkId, frameSinkId, client) {
    var params_ = new EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params();
    params_.parentFrameSinkId = parentFrameSinkId;
    params_.frameSinkId = frameSinkId;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name,
        codec.align(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params.encodedSize));
    builder.encodeStruct(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedFrameSinkProviderPtr.prototype.createCompositorFrameSink = function() {
    return EmbeddedFrameSinkProviderProxy.prototype.createCompositorFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedFrameSinkProviderProxy.prototype.createCompositorFrameSink = function(frameSinkId, client, sink) {
    var params_ = new EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params();
    params_.frameSinkId = frameSinkId;
    params_.client = client;
    params_.sink = sink;
    var builder = new codec.MessageV0Builder(
        kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name,
        codec.align(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params.encodedSize));
    builder.encodeStruct(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedFrameSinkProviderPtr.prototype.createSimpleCompositorFrameSink = function() {
    return EmbeddedFrameSinkProviderProxy.prototype.createSimpleCompositorFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedFrameSinkProviderProxy.prototype.createSimpleCompositorFrameSink = function(parentFrameSinkId, frameSinkId, surfaceClient, client, sink) {
    var params_ = new EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params();
    params_.parentFrameSinkId = parentFrameSinkId;
    params_.frameSinkId = frameSinkId;
    params_.surfaceClient = surfaceClient;
    params_.client = client;
    params_.sink = sink;
    var builder = new codec.MessageV0Builder(
        kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name,
        codec.align(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params.encodedSize));
    builder.encodeStruct(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedFrameSinkProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedFrameSinkProviderStub.prototype.registerEmbeddedFrameSink = function(parentFrameSinkId, frameSinkId, client) {
    return this.delegate_ && this.delegate_.registerEmbeddedFrameSink && this.delegate_.registerEmbeddedFrameSink(parentFrameSinkId, frameSinkId, client);
  }
  EmbeddedFrameSinkProviderStub.prototype.createCompositorFrameSink = function(frameSinkId, client, sink) {
    return this.delegate_ && this.delegate_.createCompositorFrameSink && this.delegate_.createCompositorFrameSink(frameSinkId, client, sink);
  }
  EmbeddedFrameSinkProviderStub.prototype.createSimpleCompositorFrameSink = function(parentFrameSinkId, frameSinkId, surfaceClient, client, sink) {
    return this.delegate_ && this.delegate_.createSimpleCompositorFrameSink && this.delegate_.createSimpleCompositorFrameSink(parentFrameSinkId, frameSinkId, surfaceClient, client, sink);
  }

  EmbeddedFrameSinkProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name:
      var params = reader.decodeStruct(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params);
      this.registerEmbeddedFrameSink(params.parentFrameSinkId, params.frameSinkId, params.client);
      return true;
    case kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name:
      var params = reader.decodeStruct(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params);
      this.createCompositorFrameSink(params.frameSinkId, params.client, params.sink);
      return true;
    case kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name:
      var params = reader.decodeStruct(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params);
      this.createSimpleCompositorFrameSink(params.parentFrameSinkId, params.frameSinkId, params.surfaceClient, params.client, params.sink);
      return true;
    default:
      return false;
    }
  };

  EmbeddedFrameSinkProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateEmbeddedFrameSinkProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params;
      break;
      case kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params;
      break;
      case kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedFrameSinkProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedFrameSinkProvider = {
    name: 'blink.mojom.EmbeddedFrameSinkProvider',
    kVersion: 0,
    ptrClass: EmbeddedFrameSinkProviderPtr,
    proxyClass: EmbeddedFrameSinkProviderProxy,
    stubClass: EmbeddedFrameSinkProviderStub,
    validateRequest: validateEmbeddedFrameSinkProviderRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/frame_sinks/embedded_frame_sink.mojom',
    fuzzMethods: {
      registerEmbeddedFrameSink: {
        params: EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params,
      },
      createCompositorFrameSink: {
        params: EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params,
      },
      createSimpleCompositorFrameSink: {
        params: EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params,
      },
    },
  };
  EmbeddedFrameSinkProviderStub.prototype.validator = validateEmbeddedFrameSinkProviderRequest;
  EmbeddedFrameSinkProviderProxy.prototype.validator = null;
  exports.EmbeddedFrameSinkClient = EmbeddedFrameSinkClient;
  exports.EmbeddedFrameSinkClientPtr = EmbeddedFrameSinkClientPtr;
  exports.EmbeddedFrameSinkClientAssociatedPtr = EmbeddedFrameSinkClientAssociatedPtr;
  exports.EmbeddedFrameSinkProvider = EmbeddedFrameSinkProvider;
  exports.EmbeddedFrameSinkProviderPtr = EmbeddedFrameSinkProviderPtr;
  exports.EmbeddedFrameSinkProviderAssociatedPtr = EmbeddedFrameSinkProviderAssociatedPtr;
})();