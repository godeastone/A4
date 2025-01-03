// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/viz_main.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var discardable_shared_memory_manager$ =
      mojo.internal.exposeNamespace('discardableMemory.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom', '../../../../components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom.js');
  }
  var compositing_mode_watcher$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom', '../../public/interfaces/compositing/compositing_mode_watcher.mojom.js');
  }
  var frame_sink_manager$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom', 'compositing/frame_sink_manager.mojom.js');
  }
  var gpu_host$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/gl/gpu_host.mojom', 'gl/gpu_host.mojom.js');
  }
  var gpu_service$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/gl/gpu_service.mojom', 'gl/gpu_service.mojom.js');
  }



  function FrameSinkManagerParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkManagerParams.prototype.initDefaults_ = function() {
    this.restartId = 0;
    this.useActivationDeadline = true;
    this.activationDeadlineInFrames = 4;
    this.frameSinkManager = new bindings.InterfaceRequest();
    this.frameSinkManagerClient = new frame_sink_manager$.FrameSinkManagerClientPtr();
  };
  FrameSinkManagerParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkManagerParams.generate = function(generator_) {
    var generated = new FrameSinkManagerParams;
    generated.restartId = generator_.generateUint32();
    generated.useActivationDeadline = generator_.generateBool();
    generated.activationDeadlineInFrames = generator_.generateUint32();
    generated.frameSinkManager = generator_.generateInterfaceRequest("viz.mojom.FrameSinkManager", false);
    generated.frameSinkManagerClient = generator_.generateInterface("viz.mojom.FrameSinkManagerClient", false);
    return generated;
  };

  FrameSinkManagerParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.restartId = mutator_.mutateUint32(this.restartId);
    }
    if (mutator_.chooseMutateField()) {
      this.useActivationDeadline = mutator_.mutateBool(this.useActivationDeadline);
    }
    if (mutator_.chooseMutateField()) {
      this.activationDeadlineInFrames = mutator_.mutateUint32(this.activationDeadlineInFrames);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkManager = mutator_.mutateInterfaceRequest(this.frameSinkManager, "viz.mojom.FrameSinkManager", false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkManagerClient = mutator_.mutateInterface(this.frameSinkManagerClient, "viz.mojom.FrameSinkManagerClient", false);
    }
    return this;
  };
  FrameSinkManagerParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.frameSinkManager !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.FrameSinkManagerRequest"]);
    }
    if (this.frameSinkManagerClient !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.FrameSinkManagerClientPtr"]);
    }
    return handles;
  };

  FrameSinkManagerParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkManagerParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.frameSinkManager = handles[idx++];;
    this.frameSinkManagerClient = handles[idx++];;
    return idx;
  };

  FrameSinkManagerParams.validate = function(messageValidator, offset) {
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





    // validate FrameSinkManagerParams.frameSinkManager
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameSinkManagerParams.frameSinkManagerClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameSinkManagerParams.encodedSize = codec.kStructHeaderSize + 24;

  FrameSinkManagerParams.decode = function(decoder) {
    var packed;
    var val = new FrameSinkManagerParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.restartId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.useActivationDeadline = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.activationDeadlineInFrames = decoder.decodeStruct(codec.Uint32);
    val.frameSinkManager = decoder.decodeStruct(codec.InterfaceRequest);
    val.frameSinkManagerClient = decoder.decodeStruct(new codec.Interface(frame_sink_manager$.FrameSinkManagerClientPtr));
    return val;
  };

  FrameSinkManagerParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkManagerParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.restartId);
    packed = 0;
    packed |= (val.useActivationDeadline & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.activationDeadlineInFrames);
    encoder.encodeStruct(codec.InterfaceRequest, val.frameSinkManager);
    encoder.encodeStruct(new codec.Interface(frame_sink_manager$.FrameSinkManagerClientPtr), val.frameSinkManagerClient);
  };
  function VizMain_CreateFrameSinkManager_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VizMain_CreateFrameSinkManager_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  VizMain_CreateFrameSinkManager_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VizMain_CreateFrameSinkManager_Params.generate = function(generator_) {
    var generated = new VizMain_CreateFrameSinkManager_Params;
    generated.params = generator_.generateStruct(viz.mojom.FrameSinkManagerParams, false);
    return generated;
  };

  VizMain_CreateFrameSinkManager_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(viz.mojom.FrameSinkManagerParams, false);
    }
    return this;
  };
  VizMain_CreateFrameSinkManager_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  VizMain_CreateFrameSinkManager_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VizMain_CreateFrameSinkManager_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  VizMain_CreateFrameSinkManager_Params.validate = function(messageValidator, offset) {
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


    // validate VizMain_CreateFrameSinkManager_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, FrameSinkManagerParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VizMain_CreateFrameSinkManager_Params.encodedSize = codec.kStructHeaderSize + 8;

  VizMain_CreateFrameSinkManager_Params.decode = function(decoder) {
    var packed;
    var val = new VizMain_CreateFrameSinkManager_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(FrameSinkManagerParams);
    return val;
  };

  VizMain_CreateFrameSinkManager_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VizMain_CreateFrameSinkManager_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(FrameSinkManagerParams, val.params);
  };
  function VizMain_CreateGpuService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VizMain_CreateGpuService_Params.prototype.initDefaults_ = function() {
    this.gpuService = new bindings.InterfaceRequest();
    this.gpuHost = new gpu_host$.GpuHostPtr();
    this.discardableMemoryManager = new discardable_shared_memory_manager$.DiscardableSharedMemoryManagerPtr();
    this.activityFlags = null;
  };
  VizMain_CreateGpuService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VizMain_CreateGpuService_Params.generate = function(generator_) {
    var generated = new VizMain_CreateGpuService_Params;
    generated.gpuService = generator_.generateInterfaceRequest("viz.mojom.GpuService", false);
    generated.gpuHost = generator_.generateInterface("viz.mojom.GpuHost", false);
    generated.discardableMemoryManager = generator_.generateInterface("discardableMemory.mojom.DiscardableSharedMemoryManager", false);
    generated.activityFlags = generator_.generateSharedBuffer(true);
    return generated;
  };

  VizMain_CreateGpuService_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gpuService = mutator_.mutateInterfaceRequest(this.gpuService, "viz.mojom.GpuService", false);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuHost = mutator_.mutateInterface(this.gpuHost, "viz.mojom.GpuHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.discardableMemoryManager = mutator_.mutateInterface(this.discardableMemoryManager, "discardableMemory.mojom.DiscardableSharedMemoryManager", false);
    }
    if (mutator_.chooseMutateField()) {
      this.activityFlags = mutator_.mutateSharedBuffer(this.activityFlags, true);
    }
    return this;
  };
  VizMain_CreateGpuService_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.gpuService !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.GpuServiceRequest"]);
    }
    if (this.gpuHost !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.GpuHostPtr"]);
    }
    if (this.discardableMemoryManager !== null) {
      Array.prototype.push.apply(handles, ["discardableMemory.mojom.DiscardableSharedMemoryManagerPtr"]);
    }
    if (this.activityFlags !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  VizMain_CreateGpuService_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VizMain_CreateGpuService_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.gpuService = handles[idx++];;
    this.gpuHost = handles[idx++];;
    this.discardableMemoryManager = handles[idx++];;
    this.activityFlags = handles[idx++];;
    return idx;
  };

  VizMain_CreateGpuService_Params.validate = function(messageValidator, offset) {
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


    // validate VizMain_CreateGpuService_Params.gpuService
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VizMain_CreateGpuService_Params.gpuHost
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VizMain_CreateGpuService_Params.discardableMemoryManager
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VizMain_CreateGpuService_Params.activityFlags
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 20, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VizMain_CreateGpuService_Params.encodedSize = codec.kStructHeaderSize + 24;

  VizMain_CreateGpuService_Params.decode = function(decoder) {
    var packed;
    var val = new VizMain_CreateGpuService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gpuService = decoder.decodeStruct(codec.InterfaceRequest);
    val.gpuHost = decoder.decodeStruct(new codec.Interface(gpu_host$.GpuHostPtr));
    val.discardableMemoryManager = decoder.decodeStruct(new codec.Interface(discardable_shared_memory_manager$.DiscardableSharedMemoryManagerPtr));
    val.activityFlags = decoder.decodeStruct(codec.NullableHandle);
    return val;
  };

  VizMain_CreateGpuService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VizMain_CreateGpuService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.gpuService);
    encoder.encodeStruct(new codec.Interface(gpu_host$.GpuHostPtr), val.gpuHost);
    encoder.encodeStruct(new codec.Interface(discardable_shared_memory_manager$.DiscardableSharedMemoryManagerPtr), val.discardableMemoryManager);
    encoder.encodeStruct(codec.NullableHandle, val.activityFlags);
  };
  var kVizMain_CreateFrameSinkManager_Name = 635551477;
  var kVizMain_CreateGpuService_Name = 2058263064;

  function VizMainPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VizMain,
                                                   handleOrPtrInfo);
  }

  function VizMainAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VizMain, associatedInterfacePtrInfo);
  }

  VizMainAssociatedPtr.prototype =
      Object.create(VizMainPtr.prototype);
  VizMainAssociatedPtr.prototype.constructor =
      VizMainAssociatedPtr;

  function VizMainProxy(receiver) {
    this.receiver_ = receiver;
  }
  VizMainPtr.prototype.createFrameSinkManager = function() {
    return VizMainProxy.prototype.createFrameSinkManager
        .apply(this.ptr.getProxy(), arguments);
  };

  VizMainProxy.prototype.createFrameSinkManager = function(params) {
    var params_ = new VizMain_CreateFrameSinkManager_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kVizMain_CreateFrameSinkManager_Name,
        codec.align(VizMain_CreateFrameSinkManager_Params.encodedSize));
    builder.encodeStruct(VizMain_CreateFrameSinkManager_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VizMainPtr.prototype.createGpuService = function() {
    return VizMainProxy.prototype.createGpuService
        .apply(this.ptr.getProxy(), arguments);
  };

  VizMainProxy.prototype.createGpuService = function(gpuService, gpuHost, discardableMemoryManager, activityFlags) {
    var params_ = new VizMain_CreateGpuService_Params();
    params_.gpuService = gpuService;
    params_.gpuHost = gpuHost;
    params_.discardableMemoryManager = discardableMemoryManager;
    params_.activityFlags = activityFlags;
    var builder = new codec.MessageV0Builder(
        kVizMain_CreateGpuService_Name,
        codec.align(VizMain_CreateGpuService_Params.encodedSize));
    builder.encodeStruct(VizMain_CreateGpuService_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VizMainStub(delegate) {
    this.delegate_ = delegate;
  }
  VizMainStub.prototype.createFrameSinkManager = function(params) {
    return this.delegate_ && this.delegate_.createFrameSinkManager && this.delegate_.createFrameSinkManager(params);
  }
  VizMainStub.prototype.createGpuService = function(gpuService, gpuHost, discardableMemoryManager, activityFlags) {
    return this.delegate_ && this.delegate_.createGpuService && this.delegate_.createGpuService(gpuService, gpuHost, discardableMemoryManager, activityFlags);
  }

  VizMainStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVizMain_CreateFrameSinkManager_Name:
      var params = reader.decodeStruct(VizMain_CreateFrameSinkManager_Params);
      this.createFrameSinkManager(params.params);
      return true;
    case kVizMain_CreateGpuService_Name:
      var params = reader.decodeStruct(VizMain_CreateGpuService_Params);
      this.createGpuService(params.gpuService, params.gpuHost, params.discardableMemoryManager, params.activityFlags);
      return true;
    default:
      return false;
    }
  };

  VizMainStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVizMainRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVizMain_CreateFrameSinkManager_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VizMain_CreateFrameSinkManager_Params;
      break;
      case kVizMain_CreateGpuService_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VizMain_CreateGpuService_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVizMainResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VizMain = {
    name: 'viz.mojom.VizMain',
    kVersion: 0,
    ptrClass: VizMainPtr,
    proxyClass: VizMainProxy,
    stubClass: VizMainStub,
    validateRequest: validateVizMainRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/viz_main.mojom',
    fuzzMethods: {
      createFrameSinkManager: {
        params: VizMain_CreateFrameSinkManager_Params,
      },
      createGpuService: {
        params: VizMain_CreateGpuService_Params,
      },
    },
  };
  VizMainStub.prototype.validator = validateVizMainRequest;
  VizMainProxy.prototype.validator = null;
  exports.FrameSinkManagerParams = FrameSinkManagerParams;
  exports.VizMain = VizMain;
  exports.VizMainPtr = VizMainPtr;
  exports.VizMainAssociatedPtr = VizMainAssociatedPtr;
})();