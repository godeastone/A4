// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/render_frame_metadata.mojom';
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
  var local_surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/local_surface_id.mojom', '../../services/viz/public/interfaces/compositing/local_surface_id.mojom.js');
  }
  var selection$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/selection.mojom', '../../services/viz/public/interfaces/compositing/selection.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function RenderFrameMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMetadata.prototype.initDefaults_ = function() {
    this.rootBackgroundColor = 0;
    this.isScrollOffsetAtTop = false;
    this.isMobileOptimized = false;
    this.rootScrollOffset = null;
    this.selection = null;
    this.deviceScaleFactor = 0;
    this.topControlsHeight = 0;
    this.viewportSizeInPixels = null;
    this.localSurfaceId = null;
    this.topControlsShownRatio = 0;
    this.bottomControlsHeight = 0;
    this.bottomControlsShownRatio = 0;
  };
  RenderFrameMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMetadata.generate = function(generator_) {
    var generated = new RenderFrameMetadata;
    generated.rootBackgroundColor = generator_.generateUint32();
    generated.rootScrollOffset = generator_.generateStruct(gfx.mojom.Vector2dF, true);
    generated.isScrollOffsetAtTop = generator_.generateBool();
    generated.selection = generator_.generateStruct(viz.mojom.Selection, false);
    generated.isMobileOptimized = generator_.generateBool();
    generated.deviceScaleFactor = generator_.generateFloat();
    generated.viewportSizeInPixels = generator_.generateStruct(gfx.mojom.Size, false);
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    generated.topControlsHeight = generator_.generateFloat();
    generated.topControlsShownRatio = generator_.generateFloat();
    generated.bottomControlsHeight = generator_.generateFloat();
    generated.bottomControlsShownRatio = generator_.generateFloat();
    return generated;
  };

  RenderFrameMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rootBackgroundColor = mutator_.mutateUint32(this.rootBackgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.rootScrollOffset = mutator_.mutateStruct(gfx.mojom.Vector2dF, true);
    }
    if (mutator_.chooseMutateField()) {
      this.isScrollOffsetAtTop = mutator_.mutateBool(this.isScrollOffsetAtTop);
    }
    if (mutator_.chooseMutateField()) {
      this.selection = mutator_.mutateStruct(viz.mojom.Selection, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isMobileOptimized = mutator_.mutateBool(this.isMobileOptimized);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceScaleFactor = mutator_.mutateFloat(this.deviceScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.viewportSizeInPixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    if (mutator_.chooseMutateField()) {
      this.topControlsHeight = mutator_.mutateFloat(this.topControlsHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.topControlsShownRatio = mutator_.mutateFloat(this.topControlsShownRatio);
    }
    if (mutator_.chooseMutateField()) {
      this.bottomControlsHeight = mutator_.mutateFloat(this.bottomControlsHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.bottomControlsShownRatio = mutator_.mutateFloat(this.bottomControlsShownRatio);
    }
    return this;
  };
  RenderFrameMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMetadata.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RenderFrameMetadata.rootScrollOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Vector2dF, true);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RenderFrameMetadata.selection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, selection$.Selection, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate RenderFrameMetadata.viewportSizeInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderFrameMetadata.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  RenderFrameMetadata.encodedSize = codec.kStructHeaderSize + 64;

  RenderFrameMetadata.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rootBackgroundColor = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.isScrollOffsetAtTop = (packed >> 0) & 1 ? true : false;
    val.isMobileOptimized = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.rootScrollOffset = decoder.decodeStructPointer(geometry$.Vector2dF);
    val.selection = decoder.decodeStructPointer(selection$.Selection);
    val.deviceScaleFactor = decoder.decodeStruct(codec.Float);
    val.topControlsHeight = decoder.decodeStruct(codec.Float);
    val.viewportSizeInPixels = decoder.decodeStructPointer(geometry$.Size);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    val.topControlsShownRatio = decoder.decodeStruct(codec.Float);
    val.bottomControlsHeight = decoder.decodeStruct(codec.Float);
    val.bottomControlsShownRatio = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderFrameMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.rootBackgroundColor);
    packed = 0;
    packed |= (val.isScrollOffsetAtTop & 1) << 0
    packed |= (val.isMobileOptimized & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Vector2dF, val.rootScrollOffset);
    encoder.encodeStructPointer(selection$.Selection, val.selection);
    encoder.encodeStruct(codec.Float, val.deviceScaleFactor);
    encoder.encodeStruct(codec.Float, val.topControlsHeight);
    encoder.encodeStructPointer(geometry$.Size, val.viewportSizeInPixels);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
    encoder.encodeStruct(codec.Float, val.topControlsShownRatio);
    encoder.encodeStruct(codec.Float, val.bottomControlsHeight);
    encoder.encodeStruct(codec.Float, val.bottomControlsShownRatio);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.generate = function(generator_) {
    var generated = new RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.validate = function(messageValidator, offset) {
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

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.encodedSize = codec.kStructHeaderSize + 8;

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.prototype.initDefaults_ = function() {
    this.frameToken = 0;
    this.metadata = null;
  };
  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.generate = function(generator_) {
    var generated = new RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params;
    generated.frameToken = generator_.generateUint32();
    generated.metadata = generator_.generateStruct(content.mojom.RenderFrameMetadata, false);
    return generated;
  };

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameToken = mutator_.mutateUint32(this.frameToken);
    }
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(content.mojom.RenderFrameMetadata, false);
    }
    return this;
  };
  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.validate = function(messageValidator, offset) {
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



    // validate RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, RenderFrameMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameToken = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.metadata = decoder.decodeStructPointer(RenderFrameMetadata);
    return val;
  };

  RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.frameToken);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(RenderFrameMetadata, val.metadata);
  };
  function RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.prototype.initDefaults_ = function() {
    this.frameToken = 0;
  };
  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.generate = function(generator_) {
    var generated = new RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params;
    generated.frameToken = generator_.generateUint32();
    return generated;
  };

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameToken = mutator_.mutateUint32(this.frameToken);
    }
    return this;
  };
  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.validate = function(messageValidator, offset) {
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

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.encodedSize = codec.kStructHeaderSize + 8;

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameToken = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.frameToken);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name = 14184734;

  function RenderFrameMetadataObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RenderFrameMetadataObserver,
                                                   handleOrPtrInfo);
  }

  function RenderFrameMetadataObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RenderFrameMetadataObserver, associatedInterfacePtrInfo);
  }

  RenderFrameMetadataObserverAssociatedPtr.prototype =
      Object.create(RenderFrameMetadataObserverPtr.prototype);
  RenderFrameMetadataObserverAssociatedPtr.prototype.constructor =
      RenderFrameMetadataObserverAssociatedPtr;

  function RenderFrameMetadataObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  RenderFrameMetadataObserverPtr.prototype.reportAllFrameSubmissionsForTesting = function() {
    return RenderFrameMetadataObserverProxy.prototype.reportAllFrameSubmissionsForTesting
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderFrameMetadataObserverProxy.prototype.reportAllFrameSubmissionsForTesting = function(enabled) {
    var params_ = new RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params();
    params_.enabled = enabled;
    var builder = new codec.MessageV0Builder(
        kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name,
        codec.align(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params.encodedSize));
    builder.encodeStruct(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderFrameMetadataObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  RenderFrameMetadataObserverStub.prototype.reportAllFrameSubmissionsForTesting = function(enabled) {
    return this.delegate_ && this.delegate_.reportAllFrameSubmissionsForTesting && this.delegate_.reportAllFrameSubmissionsForTesting(enabled);
  }

  RenderFrameMetadataObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name:
      var params = reader.decodeStruct(RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params);
      this.reportAllFrameSubmissionsForTesting(params.enabled);
      return true;
    default:
      return false;
    }
  };

  RenderFrameMetadataObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRenderFrameMetadataObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderFrameMetadataObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RenderFrameMetadataObserver = {
    name: 'content.mojom.RenderFrameMetadataObserver',
    kVersion: 0,
    ptrClass: RenderFrameMetadataObserverPtr,
    proxyClass: RenderFrameMetadataObserverProxy,
    stubClass: RenderFrameMetadataObserverStub,
    validateRequest: validateRenderFrameMetadataObserverRequest,
    validateResponse: null,
    mojomId: 'content/common/render_frame_metadata.mojom',
    fuzzMethods: {
      reportAllFrameSubmissionsForTesting: {
        params: RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params,
      },
    },
  };
  RenderFrameMetadataObserverStub.prototype.validator = validateRenderFrameMetadataObserverRequest;
  RenderFrameMetadataObserverProxy.prototype.validator = null;
  var kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name = 1549248053;
  var kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name = 1084409284;

  function RenderFrameMetadataObserverClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RenderFrameMetadataObserverClient,
                                                   handleOrPtrInfo);
  }

  function RenderFrameMetadataObserverClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RenderFrameMetadataObserverClient, associatedInterfacePtrInfo);
  }

  RenderFrameMetadataObserverClientAssociatedPtr.prototype =
      Object.create(RenderFrameMetadataObserverClientPtr.prototype);
  RenderFrameMetadataObserverClientAssociatedPtr.prototype.constructor =
      RenderFrameMetadataObserverClientAssociatedPtr;

  function RenderFrameMetadataObserverClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  RenderFrameMetadataObserverClientPtr.prototype.onRenderFrameMetadataChanged = function() {
    return RenderFrameMetadataObserverClientProxy.prototype.onRenderFrameMetadataChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderFrameMetadataObserverClientProxy.prototype.onRenderFrameMetadataChanged = function(frameToken, metadata) {
    var params_ = new RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params();
    params_.frameToken = frameToken;
    params_.metadata = metadata;
    var builder = new codec.MessageV0Builder(
        kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name,
        codec.align(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params.encodedSize));
    builder.encodeStruct(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RenderFrameMetadataObserverClientPtr.prototype.onFrameSubmissionForTesting = function() {
    return RenderFrameMetadataObserverClientProxy.prototype.onFrameSubmissionForTesting
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderFrameMetadataObserverClientProxy.prototype.onFrameSubmissionForTesting = function(frameToken) {
    var params_ = new RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params();
    params_.frameToken = frameToken;
    var builder = new codec.MessageV0Builder(
        kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name,
        codec.align(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params.encodedSize));
    builder.encodeStruct(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderFrameMetadataObserverClientStub(delegate) {
    this.delegate_ = delegate;
  }
  RenderFrameMetadataObserverClientStub.prototype.onRenderFrameMetadataChanged = function(frameToken, metadata) {
    return this.delegate_ && this.delegate_.onRenderFrameMetadataChanged && this.delegate_.onRenderFrameMetadataChanged(frameToken, metadata);
  }
  RenderFrameMetadataObserverClientStub.prototype.onFrameSubmissionForTesting = function(frameToken) {
    return this.delegate_ && this.delegate_.onFrameSubmissionForTesting && this.delegate_.onFrameSubmissionForTesting(frameToken);
  }

  RenderFrameMetadataObserverClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name:
      var params = reader.decodeStruct(RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params);
      this.onRenderFrameMetadataChanged(params.frameToken, params.metadata);
      return true;
    case kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name:
      var params = reader.decodeStruct(RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params);
      this.onFrameSubmissionForTesting(params.frameToken);
      return true;
    default:
      return false;
    }
  };

  RenderFrameMetadataObserverClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRenderFrameMetadataObserverClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params;
      break;
      case kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderFrameMetadataObserverClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RenderFrameMetadataObserverClient = {
    name: 'content.mojom.RenderFrameMetadataObserverClient',
    kVersion: 0,
    ptrClass: RenderFrameMetadataObserverClientPtr,
    proxyClass: RenderFrameMetadataObserverClientProxy,
    stubClass: RenderFrameMetadataObserverClientStub,
    validateRequest: validateRenderFrameMetadataObserverClientRequest,
    validateResponse: null,
    mojomId: 'content/common/render_frame_metadata.mojom',
    fuzzMethods: {
      onRenderFrameMetadataChanged: {
        params: RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params,
      },
      onFrameSubmissionForTesting: {
        params: RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params,
      },
    },
  };
  RenderFrameMetadataObserverClientStub.prototype.validator = validateRenderFrameMetadataObserverClientRequest;
  RenderFrameMetadataObserverClientProxy.prototype.validator = null;
  exports.RenderFrameMetadata = RenderFrameMetadata;
  exports.RenderFrameMetadataObserver = RenderFrameMetadataObserver;
  exports.RenderFrameMetadataObserverPtr = RenderFrameMetadataObserverPtr;
  exports.RenderFrameMetadataObserverAssociatedPtr = RenderFrameMetadataObserverAssociatedPtr;
  exports.RenderFrameMetadataObserverClient = RenderFrameMetadataObserverClient;
  exports.RenderFrameMetadataObserverClientPtr = RenderFrameMetadataObserverClientPtr;
  exports.RenderFrameMetadataObserverClientAssociatedPtr = RenderFrameMetadataObserverClientAssociatedPtr;
})();