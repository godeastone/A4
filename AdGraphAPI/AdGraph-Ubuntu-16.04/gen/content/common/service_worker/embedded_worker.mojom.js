// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/embedded_worker.mojom';
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
  var native_types$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/native_types.mojom', '../native_types.mojom.js');
  }
  var controller_service_worker$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/controller_service_worker.mojom', 'controller_service_worker.mojom.js');
  }
  var service_worker_event_dispatcher$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_event_dispatcher.mojom', 'service_worker_event_dispatcher.mojom.js');
  }
  var service_worker_provider$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_provider.mojom', 'service_worker_provider.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }
  var service_worker_installed_scripts_manager$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom.js');
  }
  var web_feature$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/web_feature.mojom', '../../../third_party/blink/public/platform/web_feature.mojom.js');
  }
  var console_message$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/console_message.mojom', '../../../third_party/blink/public/web/console_message.mojom.js');
  }
  var devtools_agent$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/devtools_agent.mojom', '../../../third_party/blink/public/web/devtools_agent.mojom.js');
  }
  var worker_content_settings_proxy$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/worker_content_settings_proxy.mojom', '../../../third_party/blink/public/web/worker_content_settings_proxy.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function EmbeddedWorkerStartParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerStartParams.prototype.initDefaults_ = function() {
    this.embeddedWorkerId = 0;
    this.workerDevtoolsAgentRouteId = 0;
    this.serviceWorkerVersionId = 0;
    this.scope = null;
    this.scriptUrl = null;
    this.devtoolsWorkerToken = null;
    this.pauseAfterDownload = false;
    this.waitForDebugger = false;
    this.isInstalled = false;
    this.dataSaverEnabled = false;
    this.v8CacheOptions = 0;
    this.dispatcherRequest = new bindings.InterfaceRequest();
    this.controllerRequest = new bindings.InterfaceRequest();
    this.installedScriptsInfo = null;
    this.instanceHost = new associatedBindings.AssociatedInterfacePtrInfo();
    this.providerInfo = null;
    this.contentSettingsProxy = new worker_content_settings_proxy$.WorkerContentSettingsProxyPtr();
  };
  EmbeddedWorkerStartParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerStartParams.generate = function(generator_) {
    var generated = new EmbeddedWorkerStartParams;
    generated.embeddedWorkerId = generator_.generateInt32();
    generated.serviceWorkerVersionId = generator_.generateInt64();
    generated.scope = generator_.generateStruct(url.mojom.Url, false);
    generated.scriptUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.workerDevtoolsAgentRouteId = generator_.generateInt32();
    generated.devtoolsWorkerToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.pauseAfterDownload = generator_.generateBool();
    generated.waitForDebugger = generator_.generateBool();
    generated.isInstalled = generator_.generateBool();
    generated.v8CacheOptions = generator_.generateEnum();
    generated.dataSaverEnabled = generator_.generateBool();
    generated.dispatcherRequest = generator_.generateInterfaceRequest("content.mojom.ServiceWorkerEventDispatcher", false);
    generated.controllerRequest = generator_.generateInterfaceRequest("content.mojom.ControllerServiceWorker", false);
    generated.installedScriptsInfo = generator_.generateStruct(blink.mojom.ServiceWorkerInstalledScriptsInfo, true);
    generated.instanceHost = generator_.generateAssociatedInterface("content.mojom.EmbeddedWorkerInstanceHost", false);
    generated.providerInfo = generator_.generateStruct(content.mojom.ServiceWorkerProviderInfoForStartWorker, false);
    generated.contentSettingsProxy = generator_.generateInterface("blink.mojom.WorkerContentSettingsProxy", false);
    return generated;
  };

  EmbeddedWorkerStartParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.embeddedWorkerId = mutator_.mutateInt32(this.embeddedWorkerId);
    }
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerVersionId = mutator_.mutateInt64(this.serviceWorkerVersionId);
    }
    if (mutator_.chooseMutateField()) {
      this.scope = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scriptUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.workerDevtoolsAgentRouteId = mutator_.mutateInt32(this.workerDevtoolsAgentRouteId);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsWorkerToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pauseAfterDownload = mutator_.mutateBool(this.pauseAfterDownload);
    }
    if (mutator_.chooseMutateField()) {
      this.waitForDebugger = mutator_.mutateBool(this.waitForDebugger);
    }
    if (mutator_.chooseMutateField()) {
      this.isInstalled = mutator_.mutateBool(this.isInstalled);
    }
    if (mutator_.chooseMutateField()) {
      this.v8CacheOptions = mutator_.mutateEnum(this.v8CacheOptions);
    }
    if (mutator_.chooseMutateField()) {
      this.dataSaverEnabled = mutator_.mutateBool(this.dataSaverEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatcherRequest = mutator_.mutateInterfaceRequest(this.dispatcherRequest, "content.mojom.ServiceWorkerEventDispatcher", false);
    }
    if (mutator_.chooseMutateField()) {
      this.controllerRequest = mutator_.mutateInterfaceRequest(this.controllerRequest, "content.mojom.ControllerServiceWorker", false);
    }
    if (mutator_.chooseMutateField()) {
      this.installedScriptsInfo = mutator_.mutateStruct(blink.mojom.ServiceWorkerInstalledScriptsInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.instanceHost = mutator_.mutateAssociatedInterface(this.instanceHost, "content.mojom.EmbeddedWorkerInstanceHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.providerInfo = mutator_.mutateStruct(content.mojom.ServiceWorkerProviderInfoForStartWorker, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentSettingsProxy = mutator_.mutateInterface(this.contentSettingsProxy, "blink.mojom.WorkerContentSettingsProxy", false);
    }
    return this;
  };
  EmbeddedWorkerStartParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dispatcherRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerEventDispatcherRequest"]);
    }
    if (this.controllerRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ControllerServiceWorkerRequest"]);
    }
    if (this.installedScriptsInfo !== null) {
      Array.prototype.push.apply(handles, this.installedScriptsInfo.getHandleDeps());
    }
    if (this.instanceHost !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.EmbeddedWorkerInstanceHostAssociatedPtr"]);
    }
    if (this.providerInfo !== null) {
      Array.prototype.push.apply(handles, this.providerInfo.getHandleDeps());
    }
    if (this.contentSettingsProxy !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.WorkerContentSettingsProxyPtr"]);
    }
    return handles;
  };

  EmbeddedWorkerStartParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerStartParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.dispatcherRequest = handles[idx++];;
    this.controllerRequest = handles[idx++];;
    idx = this.installedScriptsInfo.setHandlesInternal_(handles, idx);
    this.instanceHost = handles[idx++];;
    idx = this.providerInfo.setHandlesInternal_(handles, idx);
    this.contentSettingsProxy = handles[idx++];;
    return idx;
  };

  EmbeddedWorkerStartParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 96}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate EmbeddedWorkerStartParams.scope
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartParams.scriptUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate EmbeddedWorkerStartParams.devtoolsWorkerToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;





    // validate EmbeddedWorkerStartParams.v8CacheOptions
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 44, native_types$.V8CacheOptions);
    if (err !== validator.validationError.NONE)
        return err;



    // validate EmbeddedWorkerStartParams.dispatcherRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartParams.controllerRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 52, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartParams.installedScriptsInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, service_worker_installed_scripts_manager$.ServiceWorkerInstalledScriptsInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartParams.instanceHost
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 64, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartParams.providerInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, service_worker_provider$.ServiceWorkerProviderInfoForStartWorker, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartParams.contentSettingsProxy
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 80, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerStartParams.encodedSize = codec.kStructHeaderSize + 88;

  EmbeddedWorkerStartParams.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerStartParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.embeddedWorkerId = decoder.decodeStruct(codec.Int32);
    val.workerDevtoolsAgentRouteId = decoder.decodeStruct(codec.Int32);
    val.serviceWorkerVersionId = decoder.decodeStruct(codec.Int64);
    val.scope = decoder.decodeStructPointer(url$.Url);
    val.scriptUrl = decoder.decodeStructPointer(url$.Url);
    val.devtoolsWorkerToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    packed = decoder.readUint8();
    val.pauseAfterDownload = (packed >> 0) & 1 ? true : false;
    val.waitForDebugger = (packed >> 1) & 1 ? true : false;
    val.isInstalled = (packed >> 2) & 1 ? true : false;
    val.dataSaverEnabled = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.v8CacheOptions = decoder.decodeStruct(codec.Int32);
    val.dispatcherRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.controllerRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.installedScriptsInfo = decoder.decodeStructPointer(service_worker_installed_scripts_manager$.ServiceWorkerInstalledScriptsInfo);
    val.instanceHost = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.providerInfo = decoder.decodeStructPointer(service_worker_provider$.ServiceWorkerProviderInfoForStartWorker);
    val.contentSettingsProxy = decoder.decodeStruct(new codec.Interface(worker_content_settings_proxy$.WorkerContentSettingsProxyPtr));
    return val;
  };

  EmbeddedWorkerStartParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerStartParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.embeddedWorkerId);
    encoder.encodeStruct(codec.Int32, val.workerDevtoolsAgentRouteId);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerVersionId);
    encoder.encodeStructPointer(url$.Url, val.scope);
    encoder.encodeStructPointer(url$.Url, val.scriptUrl);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsWorkerToken);
    packed = 0;
    packed |= (val.pauseAfterDownload & 1) << 0
    packed |= (val.waitForDebugger & 1) << 1
    packed |= (val.isInstalled & 1) << 2
    packed |= (val.dataSaverEnabled & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.v8CacheOptions);
    encoder.encodeStruct(codec.InterfaceRequest, val.dispatcherRequest);
    encoder.encodeStruct(codec.InterfaceRequest, val.controllerRequest);
    encoder.encodeStructPointer(service_worker_installed_scripts_manager$.ServiceWorkerInstalledScriptsInfo, val.installedScriptsInfo);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.instanceHost);
    encoder.encodeStructPointer(service_worker_provider$.ServiceWorkerProviderInfoForStartWorker, val.providerInfo);
    encoder.encodeStruct(new codec.Interface(worker_content_settings_proxy$.WorkerContentSettingsProxyPtr), val.contentSettingsProxy);
  };
  function EmbeddedWorkerStartTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerStartTiming.prototype.initDefaults_ = function() {
    this.blinkInitializedTime = null;
    this.startWorkerReceivedTime = null;
  };
  EmbeddedWorkerStartTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerStartTiming.generate = function(generator_) {
    var generated = new EmbeddedWorkerStartTiming;
    generated.blinkInitializedTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.startWorkerReceivedTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  EmbeddedWorkerStartTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blinkInitializedTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.startWorkerReceivedTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  EmbeddedWorkerStartTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerStartTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerStartTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerStartTiming.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerStartTiming.blinkInitializedTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerStartTiming.startWorkerReceivedTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerStartTiming.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedWorkerStartTiming.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerStartTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blinkInitializedTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.startWorkerReceivedTime = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  EmbeddedWorkerStartTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerStartTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.blinkInitializedTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.startWorkerReceivedTime);
  };
  function EmbeddedWorkerInstanceClient_StartWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceClient_StartWorker_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  EmbeddedWorkerInstanceClient_StartWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceClient_StartWorker_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceClient_StartWorker_Params;
    generated.params = generator_.generateStruct(content.mojom.EmbeddedWorkerStartParams, false);
    return generated;
  };

  EmbeddedWorkerInstanceClient_StartWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.EmbeddedWorkerStartParams, false);
    }
    return this;
  };
  EmbeddedWorkerInstanceClient_StartWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  EmbeddedWorkerInstanceClient_StartWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceClient_StartWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  EmbeddedWorkerInstanceClient_StartWorker_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerInstanceClient_StartWorker_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EmbeddedWorkerStartParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceClient_StartWorker_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedWorkerInstanceClient_StartWorker_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceClient_StartWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(EmbeddedWorkerStartParams);
    return val;
  };

  EmbeddedWorkerInstanceClient_StartWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceClient_StartWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EmbeddedWorkerStartParams, val.params);
  };
  function EmbeddedWorkerInstanceClient_StopWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceClient_StopWorker_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceClient_StopWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceClient_StopWorker_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceClient_StopWorker_Params;
    return generated;
  };

  EmbeddedWorkerInstanceClient_StopWorker_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceClient_StopWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceClient_StopWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceClient_StopWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceClient_StopWorker_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceClient_StopWorker_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceClient_StopWorker_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceClient_StopWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceClient_StopWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceClient_StopWorker_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params;
    return generated;
  };

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedWorkerInstanceClient_AddMessageToConsole_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.prototype.initDefaults_ = function() {
    this.level = 0;
    this.message = null;
  };
  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceClient_AddMessageToConsole_Params;
    generated.level = generator_.generateEnum(0, 3);
    generated.message = generator_.generateString(false);
    return generated;
  };

  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.level = mutator_.mutateEnum(this.level, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.level
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, console_message$.ConsoleMessageLevel);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceClient_AddMessageToConsole_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.level = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.level);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.prototype.initDefaults_ = function() {
    this.devtoolsAgent = new associatedBindings.AssociatedInterfaceRequest();
  };
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params;
    generated.devtoolsAgent = generator_.generateAssociatedInterfaceRequest("blink.mojom.DevToolsAgent", false);
    return generated;
  };

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.devtoolsAgent = mutator_.mutateAssociatedInterfaceRequest(this.devtoolsAgent, "blink.mojom.DevToolsAgent", false);
    }
    return this;
  };
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.devtoolsAgent !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.DevToolsAgentAssociatedRequest"]);
    }
    return handles;
  };

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.devtoolsAgent = handles[idx++];;
    return idx;
  };

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.devtoolsAgent
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.devtoolsAgent = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.devtoolsAgent);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedWorkerInstanceHost_RequestTermination_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_RequestTermination_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceHost_RequestTermination_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_RequestTermination_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_RequestTermination_Params;
    return generated;
  };

  EmbeddedWorkerInstanceHost_RequestTermination_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceHost_RequestTermination_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_RequestTermination_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_RequestTermination_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_RequestTermination_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_RequestTermination_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceHost_RequestTermination_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_RequestTermination_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceHost_RequestTermination_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_RequestTermination_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedWorkerInstanceHost_CountFeature_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_CountFeature_Params.prototype.initDefaults_ = function() {
    this.feature = 0;
  };
  EmbeddedWorkerInstanceHost_CountFeature_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_CountFeature_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_CountFeature_Params;
    generated.feature = generator_.generateEnum(0, 2465);
    return generated;
  };

  EmbeddedWorkerInstanceHost_CountFeature_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.feature = mutator_.mutateEnum(this.feature, 0, 2465);
    }
    return this;
  };
  EmbeddedWorkerInstanceHost_CountFeature_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_CountFeature_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_CountFeature_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_CountFeature_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerInstanceHost_CountFeature_Params.feature
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, web_feature$.WebFeature);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceHost_CountFeature_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedWorkerInstanceHost_CountFeature_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_CountFeature_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.feature = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedWorkerInstanceHost_CountFeature_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_CountFeature_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.feature);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedWorkerInstanceHost_OnReadyForInspection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnReadyForInspection_Params;
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnReadyForInspection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedWorkerInstanceHost_OnScriptLoaded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnScriptLoaded_Params;
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnScriptLoaded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params;
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedWorkerInstanceHost_OnThreadStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.prototype.initDefaults_ = function() {
    this.threadId = 0;
  };
  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnThreadStarted_Params;
    generated.threadId = generator_.generateInt32();
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.threadId = mutator_.mutateInt32(this.threadId);
    }
    return this;
  };
  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnThreadStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.threadId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedWorkerInstanceHost_OnThreadStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnThreadStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.threadId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.prototype.initDefaults_ = function() {
    this.success = false;
  };
  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params;
    generated.success = generator_.generateBool();
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedWorkerInstanceHost_OnStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnStarted_Params.prototype.initDefaults_ = function() {
    this.startTiming = null;
  };
  EmbeddedWorkerInstanceHost_OnStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnStarted_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnStarted_Params;
    generated.startTiming = generator_.generateStruct(content.mojom.EmbeddedWorkerStartTiming, false);
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnStarted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.startTiming = mutator_.mutateStruct(content.mojom.EmbeddedWorkerStartTiming, false);
    }
    return this;
  };
  EmbeddedWorkerInstanceHost_OnStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnStarted_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerInstanceHost_OnStarted_Params.startTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, EmbeddedWorkerStartTiming, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceHost_OnStarted_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedWorkerInstanceHost_OnStarted_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startTiming = decoder.decodeStructPointer(EmbeddedWorkerStartTiming);
    return val;
  };

  EmbeddedWorkerInstanceHost_OnStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(EmbeddedWorkerStartTiming, val.startTiming);
  };
  function EmbeddedWorkerInstanceHost_OnReportException_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnReportException_Params.prototype.initDefaults_ = function() {
    this.errorMessage = null;
    this.lineNumber = 0;
    this.columnNumber = 0;
    this.sourceUrl = null;
  };
  EmbeddedWorkerInstanceHost_OnReportException_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnReportException_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnReportException_Params;
    generated.errorMessage = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.lineNumber = generator_.generateInt32();
    generated.columnNumber = generator_.generateInt32();
    generated.sourceUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnReportException_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.errorMessage = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.columnNumber = mutator_.mutateInt32(this.columnNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  EmbeddedWorkerInstanceHost_OnReportException_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnReportException_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnReportException_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnReportException_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedWorkerInstanceHost_OnReportException_Params.errorMessage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate EmbeddedWorkerInstanceHost_OnReportException_Params.sourceUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceHost_OnReportException_Params.encodedSize = codec.kStructHeaderSize + 24;

  EmbeddedWorkerInstanceHost_OnReportException_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnReportException_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.errorMessage = decoder.decodeStructPointer(string16$.String16);
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    val.columnNumber = decoder.decodeStruct(codec.Int32);
    val.sourceUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  EmbeddedWorkerInstanceHost_OnReportException_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnReportException_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.errorMessage);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.encodeStruct(codec.Int32, val.columnNumber);
    encoder.encodeStructPointer(url$.Url, val.sourceUrl);
  };
  function EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.prototype.initDefaults_ = function() {
    this.sourceIdentifier = 0;
    this.messageLevel = 0;
    this.message = null;
    this.lineNumber = 0;
    this.sourceUrl = null;
  };
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params;
    generated.sourceIdentifier = generator_.generateInt32();
    generated.messageLevel = generator_.generateInt32();
    generated.message = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.lineNumber = generator_.generateInt32();
    generated.sourceUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceIdentifier = mutator_.mutateInt32(this.sourceIdentifier);
    }
    if (mutator_.chooseMutateField()) {
      this.messageLevel = mutator_.mutateInt32(this.messageLevel);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.validate = function(messageValidator, offset) {
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




    // validate EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.sourceUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.encodedSize = codec.kStructHeaderSize + 32;

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceIdentifier = decoder.decodeStruct(codec.Int32);
    val.messageLevel = decoder.decodeStruct(codec.Int32);
    val.message = decoder.decodeStructPointer(string16$.String16);
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sourceUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sourceIdentifier);
    encoder.encodeStruct(codec.Int32, val.messageLevel);
    encoder.encodeStructPointer(string16$.String16, val.message);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.sourceUrl);
  };
  function EmbeddedWorkerInstanceHost_OnStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedWorkerInstanceHost_OnStopped_Params.prototype.initDefaults_ = function() {
  };
  EmbeddedWorkerInstanceHost_OnStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedWorkerInstanceHost_OnStopped_Params.generate = function(generator_) {
    var generated = new EmbeddedWorkerInstanceHost_OnStopped_Params;
    return generated;
  };

  EmbeddedWorkerInstanceHost_OnStopped_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  EmbeddedWorkerInstanceHost_OnStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedWorkerInstanceHost_OnStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedWorkerInstanceHost_OnStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedWorkerInstanceHost_OnStopped_Params.validate = function(messageValidator, offset) {
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

  EmbeddedWorkerInstanceHost_OnStopped_Params.encodedSize = codec.kStructHeaderSize + 0;

  EmbeddedWorkerInstanceHost_OnStopped_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedWorkerInstanceHost_OnStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EmbeddedWorkerInstanceHost_OnStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedWorkerInstanceHost_OnStopped_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kEmbeddedWorkerInstanceClient_StartWorker_Name = 1944899464;
  var kEmbeddedWorkerInstanceClient_StopWorker_Name = 97712261;
  var kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name = 998105787;
  var kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name = 1818336507;
  var kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name = 1307798564;

  function EmbeddedWorkerInstanceClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedWorkerInstanceClient,
                                                   handleOrPtrInfo);
  }

  function EmbeddedWorkerInstanceClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedWorkerInstanceClient, associatedInterfacePtrInfo);
  }

  EmbeddedWorkerInstanceClientAssociatedPtr.prototype =
      Object.create(EmbeddedWorkerInstanceClientPtr.prototype);
  EmbeddedWorkerInstanceClientAssociatedPtr.prototype.constructor =
      EmbeddedWorkerInstanceClientAssociatedPtr;

  function EmbeddedWorkerInstanceClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedWorkerInstanceClientPtr.prototype.startWorker = function() {
    return EmbeddedWorkerInstanceClientProxy.prototype.startWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceClientProxy.prototype.startWorker = function(params) {
    var params_ = new EmbeddedWorkerInstanceClient_StartWorker_Params();
    params_.params = params;
    var builder = new codec.MessageV2Builder(
        kEmbeddedWorkerInstanceClient_StartWorker_Name,
        codec.align(EmbeddedWorkerInstanceClient_StartWorker_Params.encodedSize));
    builder.setPayload(EmbeddedWorkerInstanceClient_StartWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceClientPtr.prototype.stopWorker = function() {
    return EmbeddedWorkerInstanceClientProxy.prototype.stopWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceClientProxy.prototype.stopWorker = function() {
    var params_ = new EmbeddedWorkerInstanceClient_StopWorker_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceClient_StopWorker_Name,
        codec.align(EmbeddedWorkerInstanceClient_StopWorker_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceClient_StopWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceClientPtr.prototype.resumeAfterDownload = function() {
    return EmbeddedWorkerInstanceClientProxy.prototype.resumeAfterDownload
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceClientProxy.prototype.resumeAfterDownload = function() {
    var params_ = new EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name,
        codec.align(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceClientPtr.prototype.addMessageToConsole = function() {
    return EmbeddedWorkerInstanceClientProxy.prototype.addMessageToConsole
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceClientProxy.prototype.addMessageToConsole = function(level, message) {
    var params_ = new EmbeddedWorkerInstanceClient_AddMessageToConsole_Params();
    params_.level = level;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name,
        codec.align(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceClientPtr.prototype.bindDevToolsAgent = function() {
    return EmbeddedWorkerInstanceClientProxy.prototype.bindDevToolsAgent
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceClientProxy.prototype.bindDevToolsAgent = function(devtoolsAgent) {
    var params_ = new EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params();
    params_.devtoolsAgent = devtoolsAgent;
    var builder = new codec.MessageV2Builder(
        kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name,
        codec.align(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params.encodedSize));
    builder.setPayload(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedWorkerInstanceClientStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedWorkerInstanceClientStub.prototype.startWorker = function(params) {
    return this.delegate_ && this.delegate_.startWorker && this.delegate_.startWorker(params);
  }
  EmbeddedWorkerInstanceClientStub.prototype.stopWorker = function() {
    return this.delegate_ && this.delegate_.stopWorker && this.delegate_.stopWorker();
  }
  EmbeddedWorkerInstanceClientStub.prototype.resumeAfterDownload = function() {
    return this.delegate_ && this.delegate_.resumeAfterDownload && this.delegate_.resumeAfterDownload();
  }
  EmbeddedWorkerInstanceClientStub.prototype.addMessageToConsole = function(level, message) {
    return this.delegate_ && this.delegate_.addMessageToConsole && this.delegate_.addMessageToConsole(level, message);
  }
  EmbeddedWorkerInstanceClientStub.prototype.bindDevToolsAgent = function(devtoolsAgent) {
    return this.delegate_ && this.delegate_.bindDevToolsAgent && this.delegate_.bindDevToolsAgent(devtoolsAgent);
  }

  EmbeddedWorkerInstanceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedWorkerInstanceClient_StartWorker_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceClient_StartWorker_Params);
      this.startWorker(params.params);
      return true;
    case kEmbeddedWorkerInstanceClient_StopWorker_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceClient_StopWorker_Params);
      this.stopWorker();
      return true;
    case kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params);
      this.resumeAfterDownload();
      return true;
    case kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceClient_AddMessageToConsole_Params);
      this.addMessageToConsole(params.level, params.message);
      return true;
    case kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params);
      this.bindDevToolsAgent(params.devtoolsAgent);
      return true;
    default:
      return false;
    }
  };

  EmbeddedWorkerInstanceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateEmbeddedWorkerInstanceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedWorkerInstanceClient_StartWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceClient_StartWorker_Params;
      break;
      case kEmbeddedWorkerInstanceClient_StopWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceClient_StopWorker_Params;
      break;
      case kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params;
      break;
      case kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceClient_AddMessageToConsole_Params;
      break;
      case kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedWorkerInstanceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedWorkerInstanceClient = {
    name: 'content.mojom.EmbeddedWorkerInstanceClient',
    kVersion: 0,
    ptrClass: EmbeddedWorkerInstanceClientPtr,
    proxyClass: EmbeddedWorkerInstanceClientProxy,
    stubClass: EmbeddedWorkerInstanceClientStub,
    validateRequest: validateEmbeddedWorkerInstanceClientRequest,
    validateResponse: null,
    mojomId: 'content/common/service_worker/embedded_worker.mojom',
    fuzzMethods: {
      startWorker: {
        params: EmbeddedWorkerInstanceClient_StartWorker_Params,
      },
      stopWorker: {
        params: EmbeddedWorkerInstanceClient_StopWorker_Params,
      },
      resumeAfterDownload: {
        params: EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params,
      },
      addMessageToConsole: {
        params: EmbeddedWorkerInstanceClient_AddMessageToConsole_Params,
      },
      bindDevToolsAgent: {
        params: EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params,
      },
    },
  };
  EmbeddedWorkerInstanceClientStub.prototype.validator = validateEmbeddedWorkerInstanceClientRequest;
  EmbeddedWorkerInstanceClientProxy.prototype.validator = null;
  var kEmbeddedWorkerInstanceHost_RequestTermination_Name = 724316488;
  var kEmbeddedWorkerInstanceHost_CountFeature_Name = 369278884;
  var kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name = 159580209;
  var kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name = 1181147903;
  var kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name = 1383074418;
  var kEmbeddedWorkerInstanceHost_OnThreadStarted_Name = 693910533;
  var kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name = 1884346503;
  var kEmbeddedWorkerInstanceHost_OnStarted_Name = 1668211552;
  var kEmbeddedWorkerInstanceHost_OnReportException_Name = 1305866504;
  var kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name = 1787613266;
  var kEmbeddedWorkerInstanceHost_OnStopped_Name = 1806476336;

  function EmbeddedWorkerInstanceHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedWorkerInstanceHost,
                                                   handleOrPtrInfo);
  }

  function EmbeddedWorkerInstanceHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedWorkerInstanceHost, associatedInterfacePtrInfo);
  }

  EmbeddedWorkerInstanceHostAssociatedPtr.prototype =
      Object.create(EmbeddedWorkerInstanceHostPtr.prototype);
  EmbeddedWorkerInstanceHostAssociatedPtr.prototype.constructor =
      EmbeddedWorkerInstanceHostAssociatedPtr;

  function EmbeddedWorkerInstanceHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedWorkerInstanceHostPtr.prototype.requestTermination = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.requestTermination
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.requestTermination = function() {
    var params_ = new EmbeddedWorkerInstanceHost_RequestTermination_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_RequestTermination_Name,
        codec.align(EmbeddedWorkerInstanceHost_RequestTermination_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_RequestTermination_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.countFeature = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.countFeature
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.countFeature = function(feature) {
    var params_ = new EmbeddedWorkerInstanceHost_CountFeature_Params();
    params_.feature = feature;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_CountFeature_Name,
        codec.align(EmbeddedWorkerInstanceHost_CountFeature_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_CountFeature_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onReadyForInspection = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onReadyForInspection
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onReadyForInspection = function() {
    var params_ = new EmbeddedWorkerInstanceHost_OnReadyForInspection_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onScriptLoaded = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onScriptLoaded
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onScriptLoaded = function() {
    var params_ = new EmbeddedWorkerInstanceHost_OnScriptLoaded_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onScriptLoadFailed = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onScriptLoadFailed
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onScriptLoadFailed = function() {
    var params_ = new EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onThreadStarted = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onThreadStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onThreadStarted = function(threadId) {
    var params_ = new EmbeddedWorkerInstanceHost_OnThreadStarted_Params();
    params_.threadId = threadId;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnThreadStarted_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnThreadStarted_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnThreadStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onScriptEvaluated = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onScriptEvaluated
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onScriptEvaluated = function(success) {
    var params_ = new EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params();
    params_.success = success;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onStarted = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onStarted = function(startTiming) {
    var params_ = new EmbeddedWorkerInstanceHost_OnStarted_Params();
    params_.startTiming = startTiming;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnStarted_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnStarted_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onReportException = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onReportException
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onReportException = function(errorMessage, lineNumber, columnNumber, sourceUrl) {
    var params_ = new EmbeddedWorkerInstanceHost_OnReportException_Params();
    params_.errorMessage = errorMessage;
    params_.lineNumber = lineNumber;
    params_.columnNumber = columnNumber;
    params_.sourceUrl = sourceUrl;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnReportException_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnReportException_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnReportException_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onReportConsoleMessage = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onReportConsoleMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onReportConsoleMessage = function(sourceIdentifier, messageLevel, message, lineNumber, sourceUrl) {
    var params_ = new EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params();
    params_.sourceIdentifier = sourceIdentifier;
    params_.messageLevel = messageLevel;
    params_.message = message;
    params_.lineNumber = lineNumber;
    params_.sourceUrl = sourceUrl;
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedWorkerInstanceHostPtr.prototype.onStopped = function() {
    return EmbeddedWorkerInstanceHostProxy.prototype.onStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedWorkerInstanceHostProxy.prototype.onStopped = function() {
    var params_ = new EmbeddedWorkerInstanceHost_OnStopped_Params();
    var builder = new codec.MessageV0Builder(
        kEmbeddedWorkerInstanceHost_OnStopped_Name,
        codec.align(EmbeddedWorkerInstanceHost_OnStopped_Params.encodedSize));
    builder.encodeStruct(EmbeddedWorkerInstanceHost_OnStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedWorkerInstanceHostStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedWorkerInstanceHostStub.prototype.requestTermination = function() {
    return this.delegate_ && this.delegate_.requestTermination && this.delegate_.requestTermination();
  }
  EmbeddedWorkerInstanceHostStub.prototype.countFeature = function(feature) {
    return this.delegate_ && this.delegate_.countFeature && this.delegate_.countFeature(feature);
  }
  EmbeddedWorkerInstanceHostStub.prototype.onReadyForInspection = function() {
    return this.delegate_ && this.delegate_.onReadyForInspection && this.delegate_.onReadyForInspection();
  }
  EmbeddedWorkerInstanceHostStub.prototype.onScriptLoaded = function() {
    return this.delegate_ && this.delegate_.onScriptLoaded && this.delegate_.onScriptLoaded();
  }
  EmbeddedWorkerInstanceHostStub.prototype.onScriptLoadFailed = function() {
    return this.delegate_ && this.delegate_.onScriptLoadFailed && this.delegate_.onScriptLoadFailed();
  }
  EmbeddedWorkerInstanceHostStub.prototype.onThreadStarted = function(threadId) {
    return this.delegate_ && this.delegate_.onThreadStarted && this.delegate_.onThreadStarted(threadId);
  }
  EmbeddedWorkerInstanceHostStub.prototype.onScriptEvaluated = function(success) {
    return this.delegate_ && this.delegate_.onScriptEvaluated && this.delegate_.onScriptEvaluated(success);
  }
  EmbeddedWorkerInstanceHostStub.prototype.onStarted = function(startTiming) {
    return this.delegate_ && this.delegate_.onStarted && this.delegate_.onStarted(startTiming);
  }
  EmbeddedWorkerInstanceHostStub.prototype.onReportException = function(errorMessage, lineNumber, columnNumber, sourceUrl) {
    return this.delegate_ && this.delegate_.onReportException && this.delegate_.onReportException(errorMessage, lineNumber, columnNumber, sourceUrl);
  }
  EmbeddedWorkerInstanceHostStub.prototype.onReportConsoleMessage = function(sourceIdentifier, messageLevel, message, lineNumber, sourceUrl) {
    return this.delegate_ && this.delegate_.onReportConsoleMessage && this.delegate_.onReportConsoleMessage(sourceIdentifier, messageLevel, message, lineNumber, sourceUrl);
  }
  EmbeddedWorkerInstanceHostStub.prototype.onStopped = function() {
    return this.delegate_ && this.delegate_.onStopped && this.delegate_.onStopped();
  }

  EmbeddedWorkerInstanceHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedWorkerInstanceHost_RequestTermination_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_RequestTermination_Params);
      this.requestTermination();
      return true;
    case kEmbeddedWorkerInstanceHost_CountFeature_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_CountFeature_Params);
      this.countFeature(params.feature);
      return true;
    case kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnReadyForInspection_Params);
      this.onReadyForInspection();
      return true;
    case kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnScriptLoaded_Params);
      this.onScriptLoaded();
      return true;
    case kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params);
      this.onScriptLoadFailed();
      return true;
    case kEmbeddedWorkerInstanceHost_OnThreadStarted_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnThreadStarted_Params);
      this.onThreadStarted(params.threadId);
      return true;
    case kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params);
      this.onScriptEvaluated(params.success);
      return true;
    case kEmbeddedWorkerInstanceHost_OnStarted_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnStarted_Params);
      this.onStarted(params.startTiming);
      return true;
    case kEmbeddedWorkerInstanceHost_OnReportException_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnReportException_Params);
      this.onReportException(params.errorMessage, params.lineNumber, params.columnNumber, params.sourceUrl);
      return true;
    case kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params);
      this.onReportConsoleMessage(params.sourceIdentifier, params.messageLevel, params.message, params.lineNumber, params.sourceUrl);
      return true;
    case kEmbeddedWorkerInstanceHost_OnStopped_Name:
      var params = reader.decodeStruct(EmbeddedWorkerInstanceHost_OnStopped_Params);
      this.onStopped();
      return true;
    default:
      return false;
    }
  };

  EmbeddedWorkerInstanceHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateEmbeddedWorkerInstanceHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedWorkerInstanceHost_RequestTermination_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_RequestTermination_Params;
      break;
      case kEmbeddedWorkerInstanceHost_CountFeature_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_CountFeature_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnReadyForInspection_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnScriptLoaded_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnThreadStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnThreadStarted_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnStarted_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnReportException_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnReportException_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params;
      break;
      case kEmbeddedWorkerInstanceHost_OnStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedWorkerInstanceHost_OnStopped_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedWorkerInstanceHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedWorkerInstanceHost = {
    name: 'content.mojom.EmbeddedWorkerInstanceHost',
    kVersion: 0,
    ptrClass: EmbeddedWorkerInstanceHostPtr,
    proxyClass: EmbeddedWorkerInstanceHostProxy,
    stubClass: EmbeddedWorkerInstanceHostStub,
    validateRequest: validateEmbeddedWorkerInstanceHostRequest,
    validateResponse: null,
    mojomId: 'content/common/service_worker/embedded_worker.mojom',
    fuzzMethods: {
      requestTermination: {
        params: EmbeddedWorkerInstanceHost_RequestTermination_Params,
      },
      countFeature: {
        params: EmbeddedWorkerInstanceHost_CountFeature_Params,
      },
      onReadyForInspection: {
        params: EmbeddedWorkerInstanceHost_OnReadyForInspection_Params,
      },
      onScriptLoaded: {
        params: EmbeddedWorkerInstanceHost_OnScriptLoaded_Params,
      },
      onScriptLoadFailed: {
        params: EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params,
      },
      onThreadStarted: {
        params: EmbeddedWorkerInstanceHost_OnThreadStarted_Params,
      },
      onScriptEvaluated: {
        params: EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params,
      },
      onStarted: {
        params: EmbeddedWorkerInstanceHost_OnStarted_Params,
      },
      onReportException: {
        params: EmbeddedWorkerInstanceHost_OnReportException_Params,
      },
      onReportConsoleMessage: {
        params: EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params,
      },
      onStopped: {
        params: EmbeddedWorkerInstanceHost_OnStopped_Params,
      },
    },
  };
  EmbeddedWorkerInstanceHostStub.prototype.validator = validateEmbeddedWorkerInstanceHostRequest;
  EmbeddedWorkerInstanceHostProxy.prototype.validator = null;
  exports.EmbeddedWorkerStartParams = EmbeddedWorkerStartParams;
  exports.EmbeddedWorkerStartTiming = EmbeddedWorkerStartTiming;
  exports.EmbeddedWorkerInstanceClient = EmbeddedWorkerInstanceClient;
  exports.EmbeddedWorkerInstanceClientPtr = EmbeddedWorkerInstanceClientPtr;
  exports.EmbeddedWorkerInstanceClientAssociatedPtr = EmbeddedWorkerInstanceClientAssociatedPtr;
  exports.EmbeddedWorkerInstanceHost = EmbeddedWorkerInstanceHost;
  exports.EmbeddedWorkerInstanceHostPtr = EmbeddedWorkerInstanceHostPtr;
  exports.EmbeddedWorkerInstanceHostAssociatedPtr = EmbeddedWorkerInstanceHostAssociatedPtr;
})();