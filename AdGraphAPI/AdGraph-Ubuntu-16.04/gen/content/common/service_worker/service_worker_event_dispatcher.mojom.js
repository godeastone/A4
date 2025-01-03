// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/service_worker_event_dispatcher.mojom';
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
  var dispatch_fetch_event_params$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/dispatch_fetch_event_params.mojom', 'dispatch_fetch_event_params.mojom.js');
  }
  var service_worker_fetch_response_callback$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_fetch_response_callback.mojom', 'service_worker_fetch_response_callback.mojom.js');
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
  var cookie_manager$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/cookie_manager.mojom', '../../../services/network/public/mojom/cookie_manager.mojom.js');
  }
  var fetch_api_request$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom', '../../../third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.js');
  }
  var payment_app$ =
      mojo.internal.exposeNamespace('payments.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/payments/payment_app.mojom', '../../../third_party/blink/public/platform/modules/payments/payment_app.mojom.js');
  }
  var message_port$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/message_port/message_port.mojom', '../../../third_party/blink/public/mojom/message_port/message_port.mojom.js');
  }
  var service_worker$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker.mojom.js');
  }
  var service_worker_client$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_client.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_client.mojom.js');
  }
  var service_worker_event_status$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.js');
  }
  var service_worker_object$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_object.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_object.mojom.js');
  }
  var service_worker_registration$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_registration.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }


  var kPushEventTimeoutSeconds = 90;
  var BackgroundFetchState = {};
  BackgroundFetchState.PENDING = 0;
  BackgroundFetchState.SUCCEEDED = BackgroundFetchState.PENDING + 1;
  BackgroundFetchState.FAILED = BackgroundFetchState.SUCCEEDED + 1;

  BackgroundFetchState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  BackgroundFetchState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function PlatformNotificationData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PlatformNotificationData.prototype.initDefaults_ = function() {
  };
  PlatformNotificationData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PlatformNotificationData.generate = function(generator_) {
    var generated = new PlatformNotificationData;
    return generated;
  };

  PlatformNotificationData.prototype.mutate = function(mutator_) {
    return this;
  };
  PlatformNotificationData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PlatformNotificationData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PlatformNotificationData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PlatformNotificationData.validate = function(messageValidator, offset) {
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

  PlatformNotificationData.encodedSize = codec.kStructHeaderSize + 0;

  PlatformNotificationData.decode = function(decoder) {
    var packed;
    var val = new PlatformNotificationData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PlatformNotificationData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PlatformNotificationData.encodedSize);
    encoder.writeUint32(0);
  };
  function PushEventPayload(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PushEventPayload.prototype.initDefaults_ = function() {
  };
  PushEventPayload.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PushEventPayload.generate = function(generator_) {
    var generated = new PushEventPayload;
    return generated;
  };

  PushEventPayload.prototype.mutate = function(mutator_) {
    return this;
  };
  PushEventPayload.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PushEventPayload.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PushEventPayload.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PushEventPayload.validate = function(messageValidator, offset) {
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

  PushEventPayload.encodedSize = codec.kStructHeaderSize + 0;

  PushEventPayload.decode = function(decoder) {
    var packed;
    var val = new PushEventPayload();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PushEventPayload.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PushEventPayload.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerResponse.prototype.initDefaults_ = function() {
  };
  ServiceWorkerResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerResponse.generate = function(generator_) {
    var generated = new ServiceWorkerResponse;
    return generated;
  };

  ServiceWorkerResponse.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerResponse.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerResponse.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerResponse.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerResponse.validate = function(messageValidator, offset) {
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

  ServiceWorkerResponse.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerResponse.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerResponse.encodedSize);
    encoder.writeUint32(0);
  };
  function BackgroundFetchSettledFetch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchSettledFetch.prototype.initDefaults_ = function() {
    this.request = null;
    this.response = null;
  };
  BackgroundFetchSettledFetch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchSettledFetch.generate = function(generator_) {
    var generated = new BackgroundFetchSettledFetch;
    generated.request = generator_.generateStruct(blink.mojom.FetchAPIRequest, false);
    generated.response = generator_.generateStruct(content.mojom.ServiceWorkerResponse, false);
    return generated;
  };

  BackgroundFetchSettledFetch.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateStruct(blink.mojom.FetchAPIRequest, false);
    }
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(content.mojom.ServiceWorkerResponse, false);
    }
    return this;
  };
  BackgroundFetchSettledFetch.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, this.request.getHandleDeps());
    }
    return handles;
  };

  BackgroundFetchSettledFetch.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchSettledFetch.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.request.setHandlesInternal_(handles, idx);
    return idx;
  };

  BackgroundFetchSettledFetch.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchSettledFetch.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_request$.FetchAPIRequest, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchSettledFetch.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ServiceWorkerResponse, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchSettledFetch.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundFetchSettledFetch.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchSettledFetch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(fetch_api_request$.FetchAPIRequest);
    val.response = decoder.decodeStructPointer(ServiceWorkerResponse);
    return val;
  };

  BackgroundFetchSettledFetch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchSettledFetch.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_request$.FetchAPIRequest, val.request);
    encoder.encodeStructPointer(ServiceWorkerResponse, val.response);
  };
  function ExtendableMessageEvent(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ExtendableMessageEvent.prototype.initDefaults_ = function() {
    this.message = null;
    this.sourceOrigin = null;
    this.sourceInfoForClient = null;
    this.sourceInfoForServiceWorker = null;
  };
  ExtendableMessageEvent.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ExtendableMessageEvent.generate = function(generator_) {
    var generated = new ExtendableMessageEvent;
    generated.message = generator_.generateStruct(blink.mojom.TransferableMessage, false);
    generated.sourceOrigin = generator_.generateStruct(url.mojom.Origin, false);
    generated.sourceInfoForClient = generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    generated.sourceInfoForServiceWorker = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    return generated;
  };

  ExtendableMessageEvent.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(blink.mojom.TransferableMessage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceInfoForClient = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceInfoForServiceWorker = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    return this;
  };
  ExtendableMessageEvent.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    if (this.sourceInfoForServiceWorker !== null) {
      Array.prototype.push.apply(handles, this.sourceInfoForServiceWorker.getHandleDeps());
    }
    return handles;
  };

  ExtendableMessageEvent.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ExtendableMessageEvent.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.message.setHandlesInternal_(handles, idx);
    idx = this.sourceInfoForServiceWorker.setHandlesInternal_(handles, idx);
    return idx;
  };

  ExtendableMessageEvent.validate = function(messageValidator, offset) {
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


    // validate ExtendableMessageEvent.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, message_port$.TransferableMessage, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ExtendableMessageEvent.sourceOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ExtendableMessageEvent.sourceInfoForClient
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, service_worker_client$.ServiceWorkerClientInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ExtendableMessageEvent.sourceInfoForServiceWorker
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ExtendableMessageEvent.encodedSize = codec.kStructHeaderSize + 32;

  ExtendableMessageEvent.decode = function(decoder) {
    var packed;
    var val = new ExtendableMessageEvent();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStructPointer(message_port$.TransferableMessage);
    val.sourceOrigin = decoder.decodeStructPointer(origin$.Origin);
    val.sourceInfoForClient = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientInfo);
    val.sourceInfoForServiceWorker = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    return val;
  };

  ExtendableMessageEvent.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ExtendableMessageEvent.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(message_port$.TransferableMessage, val.message);
    encoder.encodeStructPointer(origin$.Origin, val.sourceOrigin);
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientInfo, val.sourceInfoForClient);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.sourceInfoForServiceWorker);
  };
  function ServiceWorkerEventDispatcher_InitializeGlobalScope_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerHost = new associatedBindings.AssociatedInterfacePtrInfo();
    this.registrationInfo = null;
  };
  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_InitializeGlobalScope_Params;
    generated.serviceWorkerHost = generator_.generateAssociatedInterface("blink.mojom.ServiceWorkerHost", false);
    generated.registrationInfo = generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerHost = mutator_.mutateAssociatedInterface(this.serviceWorkerHost, "blink.mojom.ServiceWorkerHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.registrationInfo = mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.serviceWorkerHost !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ServiceWorkerHostAssociatedPtr"]);
    }
    if (this.registrationInfo !== null) {
      Array.prototype.push.apply(handles, this.registrationInfo.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.serviceWorkerHost = handles[idx++];;
    idx = this.registrationInfo.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.serviceWorkerHost
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.registrationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_registration$.ServiceWorkerRegistrationObjectInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_InitializeGlobalScope_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerHost = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.registrationInfo = decoder.decodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo);
    return val;
  };

  ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.serviceWorkerHost);
    encoder.encodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo, val.registrationInfo);
  };
  function ServiceWorkerEventDispatcher_DispatchInstallEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchInstallEvent_Params;
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchInstallEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.hasFetchHandler = false;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.hasFetchHandler = generator_.generateBool();
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.hasFetchHandler = mutator_.mutateBool(this.hasFetchHandler);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.hasFetchHandler = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    packed = 0;
    packed |= (val.hasFetchHandler & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchActivateEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchActivateEvent_Params;
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchActivateEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.prototype.initDefaults_ = function() {
    this.developerId = null;
    this.uniqueId = null;
    this.fetches = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params;
    generated.developerId = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    generated.fetches = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.BackgroundFetchSettledFetch, false);
    });
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fetches = mutator_.mutateArray(this.fetches, function(val) {
        return mutator_.mutateStruct(content.mojom.BackgroundFetchSettledFetch, false);
      });
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fetches !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.fetches.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.fetches.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.fetches
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(BackgroundFetchSettledFetch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.developerId = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.fetches = decoder.decodeArrayPointer(new codec.PointerTo(BackgroundFetchSettledFetch));
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeArrayPointer(new codec.PointerTo(BackgroundFetchSettledFetch), val.fetches);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.prototype.initDefaults_ = function() {
    this.developerId = null;
    this.state = 0;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params;
    generated.developerId = generator_.generateString(false);
    generated.state = generator_.generateEnum(0, 2);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 2);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, BackgroundFetchState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.developerId = decoder.decodeStruct(codec.String);
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.prototype.initDefaults_ = function() {
    this.developerId = null;
    this.uniqueId = null;
    this.fetches = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params;
    generated.developerId = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    generated.fetches = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.BackgroundFetchSettledFetch, false);
    });
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fetches = mutator_.mutateArray(this.fetches, function(val) {
        return mutator_.mutateStruct(content.mojom.BackgroundFetchSettledFetch, false);
      });
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fetches !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.fetches.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.fetches.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.fetches
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(BackgroundFetchSettledFetch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.developerId = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.fetches = decoder.decodeArrayPointer(new codec.PointerTo(BackgroundFetchSettledFetch));
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeArrayPointer(new codec.PointerTo(BackgroundFetchSettledFetch), val.fetches);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.prototype.initDefaults_ = function() {
    this.developerId = null;
    this.uniqueId = null;
    this.fetches = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params;
    generated.developerId = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    generated.fetches = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.BackgroundFetchSettledFetch, false);
    });
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fetches = mutator_.mutateArray(this.fetches, function(val) {
        return mutator_.mutateStruct(content.mojom.BackgroundFetchSettledFetch, false);
      });
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fetches !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.fetches.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.fetches.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.fetches
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(BackgroundFetchSettledFetch), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.developerId = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.fetches = decoder.decodeArrayPointer(new codec.PointerTo(BackgroundFetchSettledFetch));
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeArrayPointer(new codec.PointerTo(BackgroundFetchSettledFetch), val.fetches);
  };
  function ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.prototype.initDefaults_ = function() {
    this.cookie = null;
    this.cause = 0;
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params;
    generated.cookie = generator_.generateStruct(network.mojom.CanonicalCookie, false);
    generated.cause = generator_.generateEnum(0, 6);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookie = mutator_.mutateStruct(network.mojom.CanonicalCookie, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cause = mutator_.mutateEnum(this.cause, 0, 6);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.cookie
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, cookie_manager$.CanonicalCookie, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.cause
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, cookie_manager$.CookieChangeCause);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookie = decoder.decodeStructPointer(cookie_manager$.CanonicalCookie);
    val.cause = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(cookie_manager$.CanonicalCookie, val.cookie);
    encoder.encodeStruct(codec.Int32, val.cause);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchFetchEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.responseCallback = new service_worker_fetch_response_callback$.ServiceWorkerFetchResponseCallbackPtr();
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchFetchEvent_Params;
    generated.params = generator_.generateStruct(content.mojom.DispatchFetchEventParams, false);
    generated.responseCallback = generator_.generateInterface("content.mojom.ServiceWorkerFetchResponseCallback", false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.DispatchFetchEventParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.responseCallback = mutator_.mutateInterface(this.responseCallback, "content.mojom.ServiceWorkerFetchResponseCallback", false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    if (this.responseCallback !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerFetchResponseCallbackPtr"]);
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    this.responseCallback = handles[idx++];;
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, dispatch_fetch_event_params$.DispatchFetchEventParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.responseCallback
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchFetchEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(dispatch_fetch_event_params$.DispatchFetchEventParams);
    val.responseCallback = decoder.decodeStruct(new codec.Interface(service_worker_fetch_response_callback$.ServiceWorkerFetchResponseCallbackPtr));
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(dispatch_fetch_event_params$.DispatchFetchEventParams, val.params);
    encoder.encodeStruct(new codec.Interface(service_worker_fetch_response_callback$.ServiceWorkerFetchResponseCallbackPtr), val.responseCallback);
  };
  function ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.prototype.initDefaults_ = function() {
    this.notificationId = null;
    this.notificationData = null;
    this.actionIndex = 0;
    this.reply = null;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params;
    generated.notificationId = generator_.generateString(false);
    generated.notificationData = generator_.generateStruct(content.mojom.PlatformNotificationData, false);
    generated.actionIndex = generator_.generateInt32();
    generated.reply = generator_.generateStruct(mojoBase.mojom.String16, true);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.notificationId = mutator_.mutateString(this.notificationId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.notificationData = mutator_.mutateStruct(content.mojom.PlatformNotificationData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.actionIndex = mutator_.mutateInt32(this.actionIndex);
    }
    if (mutator_.chooseMutateField()) {
      this.reply = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.notificationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.notificationData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PlatformNotificationData, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.reply
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.encodedSize = codec.kStructHeaderSize + 32;

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.notificationId = decoder.decodeStruct(codec.String);
    val.notificationData = decoder.decodeStructPointer(PlatformNotificationData);
    val.actionIndex = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reply = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.notificationId);
    encoder.encodeStructPointer(PlatformNotificationData, val.notificationData);
    encoder.encodeStruct(codec.Int32, val.actionIndex);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.reply);
  };
  function ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.prototype.initDefaults_ = function() {
    this.notificationId = null;
    this.notificationData = null;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params;
    generated.notificationId = generator_.generateString(false);
    generated.notificationData = generator_.generateStruct(content.mojom.PlatformNotificationData, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.notificationId = mutator_.mutateString(this.notificationId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.notificationData = mutator_.mutateStruct(content.mojom.PlatformNotificationData, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.notificationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.notificationData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PlatformNotificationData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.notificationId = decoder.decodeStruct(codec.String);
    val.notificationData = decoder.decodeStructPointer(PlatformNotificationData);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.notificationId);
    encoder.encodeStructPointer(PlatformNotificationData, val.notificationData);
  };
  function ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchPushEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.prototype.initDefaults_ = function() {
    this.payload = null;
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchPushEvent_Params;
    generated.payload = generator_.generateStruct(content.mojom.PushEventPayload, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.payload = mutator_.mutateStruct(content.mojom.PushEventPayload, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchPushEvent_Params.payload
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PushEventPayload, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchPushEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.payload = decoder.decodeStructPointer(PushEventPayload);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchPushEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PushEventPayload, val.payload);
  };
  function ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchSyncEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.prototype.initDefaults_ = function() {
    this.id = null;
    this.lastChance = false;
    this.timeout = null;
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchSyncEvent_Params;
    generated.id = generator_.generateString(false);
    generated.lastChance = generator_.generateBool();
    generated.timeout = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastChance = mutator_.mutateBool(this.lastChance);
    }
    if (mutator_.chooseMutateField()) {
      this.timeout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.timeout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchSyncEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.lastChance = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timeout = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    packed = 0;
    packed |= (val.lastChance & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeout);
  };
  function ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.prototype.initDefaults_ = function() {
    this.eventId = 0;
    this.resultOfAbortPayment = new payment_app$.PaymentHandlerResponseCallbackPtr();
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params;
    generated.eventId = generator_.generateInt32();
    generated.resultOfAbortPayment = generator_.generateInterface("payments.mojom.PaymentHandlerResponseCallback", false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.eventId = mutator_.mutateInt32(this.eventId);
    }
    if (mutator_.chooseMutateField()) {
      this.resultOfAbortPayment = mutator_.mutateInterface(this.resultOfAbortPayment, "payments.mojom.PaymentHandlerResponseCallback", false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.resultOfAbortPayment !== null) {
      Array.prototype.push.apply(handles, ["payments.mojom.PaymentHandlerResponseCallbackPtr"]);
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.resultOfAbortPayment = handles[idx++];;
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.resultOfAbortPayment
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.eventId = decoder.decodeStruct(codec.Int32);
    val.resultOfAbortPayment = decoder.decodeStruct(new codec.Interface(payment_app$.PaymentHandlerResponseCallbackPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.eventId);
    encoder.encodeStruct(new codec.Interface(payment_app$.PaymentHandlerResponseCallbackPtr), val.resultOfAbortPayment);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.prototype.initDefaults_ = function() {
    this.eventId = 0;
    this.eventData = null;
    this.resultOfCanMakePayment = new payment_app$.PaymentHandlerResponseCallbackPtr();
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params;
    generated.eventId = generator_.generateInt32();
    generated.eventData = generator_.generateStruct(payments.mojom.CanMakePaymentEventData, false);
    generated.resultOfCanMakePayment = generator_.generateInterface("payments.mojom.PaymentHandlerResponseCallback", false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.eventId = mutator_.mutateInt32(this.eventId);
    }
    if (mutator_.chooseMutateField()) {
      this.eventData = mutator_.mutateStruct(payments.mojom.CanMakePaymentEventData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.resultOfCanMakePayment = mutator_.mutateInterface(this.resultOfCanMakePayment, "payments.mojom.PaymentHandlerResponseCallback", false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.resultOfCanMakePayment !== null) {
      Array.prototype.push.apply(handles, ["payments.mojom.PaymentHandlerResponseCallbackPtr"]);
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.resultOfCanMakePayment = handles[idx++];;
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.eventData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, payment_app$.CanMakePaymentEventData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.resultOfCanMakePayment
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.eventId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.eventData = decoder.decodeStructPointer(payment_app$.CanMakePaymentEventData);
    val.resultOfCanMakePayment = decoder.decodeStruct(new codec.Interface(payment_app$.PaymentHandlerResponseCallbackPtr));
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.eventId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(payment_app$.CanMakePaymentEventData, val.eventData);
    encoder.encodeStruct(new codec.Interface(payment_app$.PaymentHandlerResponseCallbackPtr), val.resultOfCanMakePayment);
  };
  function ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.prototype.initDefaults_ = function() {
    this.paymentRequestId = 0;
    this.requestData = null;
    this.responseCallback = new payment_app$.PaymentHandlerResponseCallbackPtr();
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params;
    generated.paymentRequestId = generator_.generateInt32();
    generated.requestData = generator_.generateStruct(payments.mojom.PaymentRequestEventData, false);
    generated.responseCallback = generator_.generateInterface("payments.mojom.PaymentHandlerResponseCallback", false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.paymentRequestId = mutator_.mutateInt32(this.paymentRequestId);
    }
    if (mutator_.chooseMutateField()) {
      this.requestData = mutator_.mutateStruct(payments.mojom.PaymentRequestEventData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.responseCallback = mutator_.mutateInterface(this.responseCallback, "payments.mojom.PaymentHandlerResponseCallback", false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.responseCallback !== null) {
      Array.prototype.push.apply(handles, ["payments.mojom.PaymentHandlerResponseCallbackPtr"]);
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.responseCallback = handles[idx++];;
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.requestData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, payment_app$.PaymentRequestEventData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.responseCallback
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.paymentRequestId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.requestData = decoder.decodeStructPointer(payment_app$.PaymentRequestEventData);
    val.responseCallback = decoder.decodeStruct(new codec.Interface(payment_app$.PaymentHandlerResponseCallbackPtr));
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.paymentRequestId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(payment_app$.PaymentRequestEventData, val.requestData);
    encoder.encodeStruct(new codec.Interface(payment_app$.PaymentHandlerResponseCallbackPtr), val.responseCallback);
  };
  function ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params;
    generated.event = generator_.generateStruct(content.mojom.ExtendableMessageEvent, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(content.mojom.ExtendableMessageEvent, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.event !== null) {
      Array.prototype.push.apply(handles, this.event.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.event.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ExtendableMessageEvent, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(ExtendableMessageEvent);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ExtendableMessageEvent, val.event);
  };
  function ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerEventDispatcher_Ping_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_Ping_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerEventDispatcher_Ping_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_Ping_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_Ping_Params;
    return generated;
  };

  ServiceWorkerEventDispatcher_Ping_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerEventDispatcher_Ping_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_Ping_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_Ping_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_Ping_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerEventDispatcher_Ping_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerEventDispatcher_Ping_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_Ping_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerEventDispatcher_Ping_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_Ping_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerEventDispatcher_Ping_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_Ping_ResponseParams.prototype.initDefaults_ = function() {
  };
  ServiceWorkerEventDispatcher_Ping_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_Ping_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_Ping_ResponseParams;
    return generated;
  };

  ServiceWorkerEventDispatcher_Ping_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerEventDispatcher_Ping_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_Ping_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_Ping_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_Ping_ResponseParams.validate = function(messageValidator, offset) {
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

  ServiceWorkerEventDispatcher_Ping_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerEventDispatcher_Ping_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_Ping_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerEventDispatcher_Ping_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_Ping_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.generate = function(generator_) {
    var generated = new ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params;
    return generated;
  };

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kServiceWorkerEventDispatcher_InitializeGlobalScope_Name = 884649392;
  var kServiceWorkerEventDispatcher_DispatchInstallEvent_Name = 2031777592;
  var kServiceWorkerEventDispatcher_DispatchActivateEvent_Name = 1874409532;
  var kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name = 1930006967;
  var kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name = 965504636;
  var kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name = 2113095411;
  var kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name = 1411114485;
  var kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name = 743409748;
  var kServiceWorkerEventDispatcher_DispatchFetchEvent_Name = 1658145333;
  var kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name = 2056991824;
  var kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name = 923991331;
  var kServiceWorkerEventDispatcher_DispatchPushEvent_Name = 442879750;
  var kServiceWorkerEventDispatcher_DispatchSyncEvent_Name = 1456564181;
  var kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name = 1393147543;
  var kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name = 1978922521;
  var kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name = 2080659891;
  var kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name = 726374231;
  var kServiceWorkerEventDispatcher_Ping_Name = 1254589108;
  var kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name = 1254176940;

  function ServiceWorkerEventDispatcherPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerEventDispatcher,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerEventDispatcherAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerEventDispatcher, associatedInterfacePtrInfo);
  }

  ServiceWorkerEventDispatcherAssociatedPtr.prototype =
      Object.create(ServiceWorkerEventDispatcherPtr.prototype);
  ServiceWorkerEventDispatcherAssociatedPtr.prototype.constructor =
      ServiceWorkerEventDispatcherAssociatedPtr;

  function ServiceWorkerEventDispatcherProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerEventDispatcherPtr.prototype.initializeGlobalScope = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.initializeGlobalScope
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.initializeGlobalScope = function(serviceWorkerHost, registrationInfo) {
    var params_ = new ServiceWorkerEventDispatcher_InitializeGlobalScope_Params();
    params_.serviceWorkerHost = serviceWorkerHost;
    params_.registrationInfo = registrationInfo;
    var builder = new codec.MessageV2Builder(
        kServiceWorkerEventDispatcher_InitializeGlobalScope_Name,
        codec.align(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params.encodedSize));
    builder.setPayload(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchInstallEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchInstallEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchInstallEvent = function() {
    var params_ = new ServiceWorkerEventDispatcher_DispatchInstallEvent_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchInstallEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchActivateEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchActivateEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchActivateEvent = function() {
    var params_ = new ServiceWorkerEventDispatcher_DispatchActivateEvent_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchActivateEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchBackgroundFetchAbortEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchAbortEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchAbortEvent = function(developerId, uniqueId, fetches) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params();
    params_.developerId = developerId;
    params_.uniqueId = uniqueId;
    params_.fetches = fetches;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchBackgroundFetchClickEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchClickEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchClickEvent = function(developerId, state) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params();
    params_.developerId = developerId;
    params_.state = state;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchBackgroundFetchFailEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchFailEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchFailEvent = function(developerId, uniqueId, fetches) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params();
    params_.developerId = developerId;
    params_.uniqueId = uniqueId;
    params_.fetches = fetches;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchBackgroundFetchedEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchedEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchBackgroundFetchedEvent = function(developerId, uniqueId, fetches) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params();
    params_.developerId = developerId;
    params_.uniqueId = uniqueId;
    params_.fetches = fetches;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchCookieChangeEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchCookieChangeEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchCookieChangeEvent = function(cookie, cause) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params();
    params_.cookie = cookie;
    params_.cause = cause;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchFetchEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchFetchEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchFetchEvent = function(params, responseCallback) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchFetchEvent_Params();
    params_.params = params;
    params_.responseCallback = responseCallback;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchFetchEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchNotificationClickEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchNotificationClickEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchNotificationClickEvent = function(notificationId, notificationData, actionIndex, reply) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params();
    params_.notificationId = notificationId;
    params_.notificationData = notificationData;
    params_.actionIndex = actionIndex;
    params_.reply = reply;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchNotificationCloseEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchNotificationCloseEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchNotificationCloseEvent = function(notificationId, notificationData) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params();
    params_.notificationId = notificationId;
    params_.notificationData = notificationData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchPushEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchPushEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchPushEvent = function(payload) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchPushEvent_Params();
    params_.payload = payload;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchPushEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchPushEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchPushEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchSyncEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchSyncEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchSyncEvent = function(id, lastChance, timeout) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchSyncEvent_Params();
    params_.id = id;
    params_.lastChance = lastChance;
    params_.timeout = timeout;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchSyncEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchAbortPaymentEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchAbortPaymentEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchAbortPaymentEvent = function(eventId, resultOfAbortPayment) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params();
    params_.eventId = eventId;
    params_.resultOfAbortPayment = resultOfAbortPayment;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchCanMakePaymentEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchCanMakePaymentEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchCanMakePaymentEvent = function(eventId, eventData, resultOfCanMakePayment) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params();
    params_.eventId = eventId;
    params_.eventData = eventData;
    params_.resultOfCanMakePayment = resultOfCanMakePayment;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchPaymentRequestEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchPaymentRequestEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchPaymentRequestEvent = function(paymentRequestId, requestData, responseCallback) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params();
    params_.paymentRequestId = paymentRequestId;
    params_.requestData = requestData;
    params_.responseCallback = responseCallback;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.dispatchExtendableMessageEvent = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.dispatchExtendableMessageEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.dispatchExtendableMessageEvent = function(event) {
    var params_ = new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params();
    params_.event = event;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name,
          codec.align(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.ping = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.ping
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.ping = function() {
    var params_ = new ServiceWorkerEventDispatcher_Ping_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerEventDispatcher_Ping_Name,
          codec.align(ServiceWorkerEventDispatcher_Ping_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerEventDispatcher_Ping_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerEventDispatcher_Ping_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerEventDispatcherPtr.prototype.setIdleTimerDelayToZero = function() {
    return ServiceWorkerEventDispatcherProxy.prototype.setIdleTimerDelayToZero
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerEventDispatcherProxy.prototype.setIdleTimerDelayToZero = function() {
    var params_ = new ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params();
    var builder = new codec.MessageV0Builder(
        kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name,
        codec.align(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerEventDispatcherStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerEventDispatcherStub.prototype.initializeGlobalScope = function(serviceWorkerHost, registrationInfo) {
    return this.delegate_ && this.delegate_.initializeGlobalScope && this.delegate_.initializeGlobalScope(serviceWorkerHost, registrationInfo);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchInstallEvent = function() {
    return this.delegate_ && this.delegate_.dispatchInstallEvent && this.delegate_.dispatchInstallEvent();
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchActivateEvent = function() {
    return this.delegate_ && this.delegate_.dispatchActivateEvent && this.delegate_.dispatchActivateEvent();
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchBackgroundFetchAbortEvent = function(developerId, uniqueId, fetches) {
    return this.delegate_ && this.delegate_.dispatchBackgroundFetchAbortEvent && this.delegate_.dispatchBackgroundFetchAbortEvent(developerId, uniqueId, fetches);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchBackgroundFetchClickEvent = function(developerId, state) {
    return this.delegate_ && this.delegate_.dispatchBackgroundFetchClickEvent && this.delegate_.dispatchBackgroundFetchClickEvent(developerId, state);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchBackgroundFetchFailEvent = function(developerId, uniqueId, fetches) {
    return this.delegate_ && this.delegate_.dispatchBackgroundFetchFailEvent && this.delegate_.dispatchBackgroundFetchFailEvent(developerId, uniqueId, fetches);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchBackgroundFetchedEvent = function(developerId, uniqueId, fetches) {
    return this.delegate_ && this.delegate_.dispatchBackgroundFetchedEvent && this.delegate_.dispatchBackgroundFetchedEvent(developerId, uniqueId, fetches);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchCookieChangeEvent = function(cookie, cause) {
    return this.delegate_ && this.delegate_.dispatchCookieChangeEvent && this.delegate_.dispatchCookieChangeEvent(cookie, cause);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchFetchEvent = function(params, responseCallback) {
    return this.delegate_ && this.delegate_.dispatchFetchEvent && this.delegate_.dispatchFetchEvent(params, responseCallback);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchNotificationClickEvent = function(notificationId, notificationData, actionIndex, reply) {
    return this.delegate_ && this.delegate_.dispatchNotificationClickEvent && this.delegate_.dispatchNotificationClickEvent(notificationId, notificationData, actionIndex, reply);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchNotificationCloseEvent = function(notificationId, notificationData) {
    return this.delegate_ && this.delegate_.dispatchNotificationCloseEvent && this.delegate_.dispatchNotificationCloseEvent(notificationId, notificationData);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchPushEvent = function(payload) {
    return this.delegate_ && this.delegate_.dispatchPushEvent && this.delegate_.dispatchPushEvent(payload);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchSyncEvent = function(id, lastChance, timeout) {
    return this.delegate_ && this.delegate_.dispatchSyncEvent && this.delegate_.dispatchSyncEvent(id, lastChance, timeout);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchAbortPaymentEvent = function(eventId, resultOfAbortPayment) {
    return this.delegate_ && this.delegate_.dispatchAbortPaymentEvent && this.delegate_.dispatchAbortPaymentEvent(eventId, resultOfAbortPayment);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchCanMakePaymentEvent = function(eventId, eventData, resultOfCanMakePayment) {
    return this.delegate_ && this.delegate_.dispatchCanMakePaymentEvent && this.delegate_.dispatchCanMakePaymentEvent(eventId, eventData, resultOfCanMakePayment);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchPaymentRequestEvent = function(paymentRequestId, requestData, responseCallback) {
    return this.delegate_ && this.delegate_.dispatchPaymentRequestEvent && this.delegate_.dispatchPaymentRequestEvent(paymentRequestId, requestData, responseCallback);
  }
  ServiceWorkerEventDispatcherStub.prototype.dispatchExtendableMessageEvent = function(event) {
    return this.delegate_ && this.delegate_.dispatchExtendableMessageEvent && this.delegate_.dispatchExtendableMessageEvent(event);
  }
  ServiceWorkerEventDispatcherStub.prototype.ping = function() {
    return this.delegate_ && this.delegate_.ping && this.delegate_.ping();
  }
  ServiceWorkerEventDispatcherStub.prototype.setIdleTimerDelayToZero = function() {
    return this.delegate_ && this.delegate_.setIdleTimerDelayToZero && this.delegate_.setIdleTimerDelayToZero();
  }

  ServiceWorkerEventDispatcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerEventDispatcher_InitializeGlobalScope_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_InitializeGlobalScope_Params);
      this.initializeGlobalScope(params.serviceWorkerHost, params.registrationInfo);
      return true;
    case kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params);
      this.setIdleTimerDelayToZero();
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerEventDispatcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerEventDispatcher_DispatchInstallEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchInstallEvent_Params);
      this.dispatchInstallEvent().then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.hasFetchHandler = response.hasFetchHandler;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchInstallEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchActivateEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchActivateEvent_Params);
      this.dispatchActivateEvent().then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchActivateEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params);
      this.dispatchBackgroundFetchAbortEvent(params.developerId, params.uniqueId, params.fetches).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params);
      this.dispatchBackgroundFetchClickEvent(params.developerId, params.state).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params);
      this.dispatchBackgroundFetchFailEvent(params.developerId, params.uniqueId, params.fetches).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params);
      this.dispatchBackgroundFetchedEvent(params.developerId, params.uniqueId, params.fetches).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params);
      this.dispatchCookieChangeEvent(params.cookie, params.cause).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchFetchEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchFetchEvent_Params);
      this.dispatchFetchEvent(params.params, params.responseCallback).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchFetchEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params);
      this.dispatchNotificationClickEvent(params.notificationId, params.notificationData, params.actionIndex, params.reply).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params);
      this.dispatchNotificationCloseEvent(params.notificationId, params.notificationData).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchPushEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchPushEvent_Params);
      this.dispatchPushEvent(params.payload).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchPushEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchSyncEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchSyncEvent_Params);
      this.dispatchSyncEvent(params.id, params.lastChance, params.timeout).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchSyncEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params);
      this.dispatchAbortPaymentEvent(params.eventId, params.resultOfAbortPayment).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params);
      this.dispatchCanMakePaymentEvent(params.eventId, params.eventData, params.resultOfCanMakePayment).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params);
      this.dispatchPaymentRequestEvent(params.paymentRequestId, params.requestData, params.responseCallback).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params);
      this.dispatchExtendableMessageEvent(params.event).then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV2Builder(
            kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name,
            codec.align(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerEventDispatcher_Ping_Name:
      var params = reader.decodeStruct(ServiceWorkerEventDispatcher_Ping_Params);
      this.ping().then(function(response) {
        var responseParams =
            new ServiceWorkerEventDispatcher_Ping_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kServiceWorkerEventDispatcher_Ping_Name,
            codec.align(ServiceWorkerEventDispatcher_Ping_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerEventDispatcher_Ping_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceWorkerEventDispatcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerEventDispatcher_InitializeGlobalScope_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_InitializeGlobalScope_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchInstallEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchInstallEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchActivateEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchActivateEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchFetchEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchFetchEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchPushEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchPushEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchSyncEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchSyncEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params;
      break;
      case kServiceWorkerEventDispatcher_Ping_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerEventDispatcher_Ping_Params;
      break;
      case kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerEventDispatcherResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServiceWorkerEventDispatcher_DispatchInstallEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchActivateEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchFetchEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchPushEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchSyncEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams;
        break;
      case kServiceWorkerEventDispatcher_Ping_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerEventDispatcher_Ping_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServiceWorkerEventDispatcher = {
    name: 'content.mojom.ServiceWorkerEventDispatcher',
    kVersion: 0,
    ptrClass: ServiceWorkerEventDispatcherPtr,
    proxyClass: ServiceWorkerEventDispatcherProxy,
    stubClass: ServiceWorkerEventDispatcherStub,
    validateRequest: validateServiceWorkerEventDispatcherRequest,
    validateResponse: validateServiceWorkerEventDispatcherResponse,
    mojomId: 'content/common/service_worker/service_worker_event_dispatcher.mojom',
    fuzzMethods: {
      initializeGlobalScope: {
        params: ServiceWorkerEventDispatcher_InitializeGlobalScope_Params,
      },
      dispatchInstallEvent: {
        params: ServiceWorkerEventDispatcher_DispatchInstallEvent_Params,
      },
      dispatchActivateEvent: {
        params: ServiceWorkerEventDispatcher_DispatchActivateEvent_Params,
      },
      dispatchBackgroundFetchAbortEvent: {
        params: ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params,
      },
      dispatchBackgroundFetchClickEvent: {
        params: ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params,
      },
      dispatchBackgroundFetchFailEvent: {
        params: ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params,
      },
      dispatchBackgroundFetchedEvent: {
        params: ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params,
      },
      dispatchCookieChangeEvent: {
        params: ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params,
      },
      dispatchFetchEvent: {
        params: ServiceWorkerEventDispatcher_DispatchFetchEvent_Params,
      },
      dispatchNotificationClickEvent: {
        params: ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params,
      },
      dispatchNotificationCloseEvent: {
        params: ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params,
      },
      dispatchPushEvent: {
        params: ServiceWorkerEventDispatcher_DispatchPushEvent_Params,
      },
      dispatchSyncEvent: {
        params: ServiceWorkerEventDispatcher_DispatchSyncEvent_Params,
      },
      dispatchAbortPaymentEvent: {
        params: ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params,
      },
      dispatchCanMakePaymentEvent: {
        params: ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params,
      },
      dispatchPaymentRequestEvent: {
        params: ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params,
      },
      dispatchExtendableMessageEvent: {
        params: ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params,
      },
      ping: {
        params: ServiceWorkerEventDispatcher_Ping_Params,
      },
      setIdleTimerDelayToZero: {
        params: ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params,
      },
    },
  };
  ServiceWorkerEventDispatcherStub.prototype.validator = validateServiceWorkerEventDispatcherRequest;
  ServiceWorkerEventDispatcherProxy.prototype.validator = validateServiceWorkerEventDispatcherResponse;
  exports.kPushEventTimeoutSeconds = kPushEventTimeoutSeconds;
  exports.BackgroundFetchState = BackgroundFetchState;
  exports.PlatformNotificationData = PlatformNotificationData;
  exports.PushEventPayload = PushEventPayload;
  exports.ServiceWorkerResponse = ServiceWorkerResponse;
  exports.BackgroundFetchSettledFetch = BackgroundFetchSettledFetch;
  exports.ExtendableMessageEvent = ExtendableMessageEvent;
  exports.ServiceWorkerEventDispatcher = ServiceWorkerEventDispatcher;
  exports.ServiceWorkerEventDispatcherPtr = ServiceWorkerEventDispatcherPtr;
  exports.ServiceWorkerEventDispatcherAssociatedPtr = ServiceWorkerEventDispatcherAssociatedPtr;
})();