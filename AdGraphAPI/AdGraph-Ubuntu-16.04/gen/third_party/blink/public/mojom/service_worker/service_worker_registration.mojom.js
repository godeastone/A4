// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/service_worker_registration.mojom';
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
  var navigation_preload_state$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom', 'navigation_preload_state.mojom.js');
  }
  var service_worker_error_type$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom', 'service_worker_error_type.mojom.js');
  }
  var service_worker_object$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_object.mojom', 'service_worker_object.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }


  var kInvalidServiceWorkerRegistrationId = -1;
  var ServiceWorkerUpdateViaCache = {};
  ServiceWorkerUpdateViaCache.kImports = 0;
  ServiceWorkerUpdateViaCache.kAll = ServiceWorkerUpdateViaCache.kImports + 1;
  ServiceWorkerUpdateViaCache.kNone = ServiceWorkerUpdateViaCache.kAll + 1;

  ServiceWorkerUpdateViaCache.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ServiceWorkerUpdateViaCache.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ServiceWorkerRegistrationOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationOptions.prototype.initDefaults_ = function() {
    this.scope = null;
    this.updateViaCache = ServiceWorkerUpdateViaCache.kImports;
  };
  ServiceWorkerRegistrationOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationOptions.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationOptions;
    generated.scope = generator_.generateStruct(url.mojom.Url, false);
    generated.updateViaCache = generator_.generateEnum(0, 2);
    return generated;
  };

  ServiceWorkerRegistrationOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scope = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.updateViaCache = mutator_.mutateEnum(this.updateViaCache, 0, 2);
    }
    return this;
  };
  ServiceWorkerRegistrationOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationOptions.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationOptions.scope
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationOptions.updateViaCache
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ServiceWorkerUpdateViaCache);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationOptions.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerRegistrationOptions.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scope = decoder.decodeStructPointer(url$.Url);
    val.updateViaCache = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerRegistrationOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.scope);
    encoder.encodeStruct(codec.Int32, val.updateViaCache);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerRegistrationObjectInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectInfo.prototype.initDefaults_ = function() {
    this.registrationId = kInvalidServiceWorkerRegistrationId;
    this.options = null;
    this.hostPtrInfo = new associatedBindings.AssociatedInterfacePtrInfo();
    this.request = new associatedBindings.AssociatedInterfaceRequest();
    this.installing = null;
    this.waiting = null;
    this.active = null;
  };
  ServiceWorkerRegistrationObjectInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectInfo.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectInfo;
    generated.registrationId = generator_.generateInt64();
    generated.options = generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationOptions, false);
    generated.hostPtrInfo = generator_.generateAssociatedInterface("blink.mojom.ServiceWorkerRegistrationObjectHost", false);
    generated.request = generator_.generateAssociatedInterfaceRequest("blink.mojom.ServiceWorkerRegistrationObject", false);
    generated.installing = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    generated.waiting = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    generated.active = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    return generated;
  };

  ServiceWorkerRegistrationObjectInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.registrationId = mutator_.mutateInt64(this.registrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationOptions, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hostPtrInfo = mutator_.mutateAssociatedInterface(this.hostPtrInfo, "blink.mojom.ServiceWorkerRegistrationObjectHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateAssociatedInterfaceRequest(this.request, "blink.mojom.ServiceWorkerRegistrationObject", false);
    }
    if (mutator_.chooseMutateField()) {
      this.installing = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.waiting = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.active = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectInfo.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hostPtrInfo !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ServiceWorkerRegistrationObjectHostAssociatedPtr"]);
    }
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ServiceWorkerRegistrationObjectAssociatedRequest"]);
    }
    if (this.installing !== null) {
      Array.prototype.push.apply(handles, this.installing.getHandleDeps());
    }
    if (this.waiting !== null) {
      Array.prototype.push.apply(handles, this.waiting.getHandleDeps());
    }
    if (this.active !== null) {
      Array.prototype.push.apply(handles, this.active.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerRegistrationObjectInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    this.hostPtrInfo = handles[idx++];;
    this.request = handles[idx++];;
    idx = this.installing.setHandlesInternal_(handles, idx);
    idx = this.waiting.setHandlesInternal_(handles, idx);
    idx = this.active.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerRegistrationObjectInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ServiceWorkerRegistrationObjectInfo.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ServiceWorkerRegistrationOptions, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectInfo.hostPtrInfo
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectInfo.request
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectInfo.installing
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectInfo.waiting
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectInfo.active
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectInfo.encodedSize = codec.kStructHeaderSize + 56;

  ServiceWorkerRegistrationObjectInfo.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.registrationId = decoder.decodeStruct(codec.Int64);
    val.options = decoder.decodeStructPointer(ServiceWorkerRegistrationOptions);
    val.hostPtrInfo = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.request = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.installing = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    val.waiting = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    val.active = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    return val;
  };

  ServiceWorkerRegistrationObjectInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.registrationId);
    encoder.encodeStructPointer(ServiceWorkerRegistrationOptions, val.options);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.hostPtrInfo);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.installing);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.waiting);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.active);
  };
  function ServiceWorkerRegistrationObjectHost_Update_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_Update_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerRegistrationObjectHost_Update_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_Update_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_Update_Params;
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_Update_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerRegistrationObjectHost_Update_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_Update_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_Update_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_Update_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerRegistrationObjectHost_Update_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerRegistrationObjectHost_Update_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_Update_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerRegistrationObjectHost_Update_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_Update_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerRegistrationObjectHost_Update_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
  };
  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_Update_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObjectHost_Update_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectHost_Update_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_Update_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_Update_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_Update_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerRegistrationObjectHost_Unregister_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_Unregister_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerRegistrationObjectHost_Unregister_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_Unregister_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_Unregister_Params;
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerRegistrationObjectHost_Unregister_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_Unregister_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerRegistrationObjectHost_Unregister_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerRegistrationObjectHost_Unregister_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_Unregister_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_Unregister_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
  };
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.prototype.initDefaults_ = function() {
    this.enable = false;
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params;
    generated.enable = generator_.generateBool();
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enable = mutator_.mutateBool(this.enable);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params;
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
    this.state = null;
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    generated.state = generator_.generateStruct(blink.mojom.NavigationPreloadState, true);
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateStruct(blink.mojom.NavigationPreloadState, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.state
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, navigation_preload_state$.NavigationPreloadState, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    val.state = decoder.decodeStructPointer(navigation_preload_state$.NavigationPreloadState);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
    encoder.encodeStructPointer(navigation_preload_state$.NavigationPreloadState, val.state);
  };
  function ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params;
    generated.value = generator_.generateString(false);
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.value);
  };
  function ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerRegistrationObject_SetVersionAttributes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.prototype.initDefaults_ = function() {
    this.changedMask = 0;
    this.installing = null;
    this.waiting = null;
    this.active = null;
  };
  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObject_SetVersionAttributes_Params;
    generated.changedMask = generator_.generateInt32();
    generated.installing = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    generated.waiting = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    generated.active = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    return generated;
  };

  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changedMask = mutator_.mutateInt32(this.changedMask);
    }
    if (mutator_.chooseMutateField()) {
      this.installing = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.waiting = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.active = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    return this;
  };
  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.installing !== null) {
      Array.prototype.push.apply(handles, this.installing.getHandleDeps());
    }
    if (this.waiting !== null) {
      Array.prototype.push.apply(handles, this.waiting.getHandleDeps());
    }
    if (this.active !== null) {
      Array.prototype.push.apply(handles, this.active.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.installing.setHandlesInternal_(handles, idx);
    idx = this.waiting.setHandlesInternal_(handles, idx);
    idx = this.active.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerRegistrationObject_SetVersionAttributes_Params.installing
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObject_SetVersionAttributes_Params.waiting
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerRegistrationObject_SetVersionAttributes_Params.active
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.encodedSize = codec.kStructHeaderSize + 32;

  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObject_SetVersionAttributes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changedMask = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.installing = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    val.waiting = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    val.active = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    return val;
  };

  ServiceWorkerRegistrationObject_SetVersionAttributes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObject_SetVersionAttributes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.changedMask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.installing);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.waiting);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.active);
  };
  function ServiceWorkerRegistrationObject_SetUpdateViaCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.prototype.initDefaults_ = function() {
    this.updateViaCache = 0;
  };
  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObject_SetUpdateViaCache_Params;
    generated.updateViaCache = generator_.generateEnum(0, 2);
    return generated;
  };

  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.updateViaCache = mutator_.mutateEnum(this.updateViaCache, 0, 2);
    }
    return this;
  };
  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.updateViaCache
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ServiceWorkerUpdateViaCache);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObject_SetUpdateViaCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.updateViaCache = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.updateViaCache);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerRegistrationObject_UpdateFound_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerRegistrationObject_UpdateFound_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerRegistrationObject_UpdateFound_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerRegistrationObject_UpdateFound_Params.generate = function(generator_) {
    var generated = new ServiceWorkerRegistrationObject_UpdateFound_Params;
    return generated;
  };

  ServiceWorkerRegistrationObject_UpdateFound_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerRegistrationObject_UpdateFound_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerRegistrationObject_UpdateFound_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerRegistrationObject_UpdateFound_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerRegistrationObject_UpdateFound_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerRegistrationObject_UpdateFound_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerRegistrationObject_UpdateFound_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerRegistrationObject_UpdateFound_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerRegistrationObject_UpdateFound_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerRegistrationObject_UpdateFound_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kServiceWorkerRegistrationObjectHost_Update_Name = 728437447;
  var kServiceWorkerRegistrationObjectHost_Unregister_Name = 1153455587;
  var kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name = 1809771769;
  var kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name = 2056948131;
  var kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name = 927482916;

  function ServiceWorkerRegistrationObjectHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerRegistrationObjectHost,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerRegistrationObjectHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerRegistrationObjectHost, associatedInterfacePtrInfo);
  }

  ServiceWorkerRegistrationObjectHostAssociatedPtr.prototype =
      Object.create(ServiceWorkerRegistrationObjectHostPtr.prototype);
  ServiceWorkerRegistrationObjectHostAssociatedPtr.prototype.constructor =
      ServiceWorkerRegistrationObjectHostAssociatedPtr;

  function ServiceWorkerRegistrationObjectHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerRegistrationObjectHostPtr.prototype.update = function() {
    return ServiceWorkerRegistrationObjectHostProxy.prototype.update
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectHostProxy.prototype.update = function() {
    var params_ = new ServiceWorkerRegistrationObjectHost_Update_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerRegistrationObjectHost_Update_Name,
          codec.align(ServiceWorkerRegistrationObjectHost_Update_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerRegistrationObjectHost_Update_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerRegistrationObjectHost_Update_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerRegistrationObjectHostPtr.prototype.unregister = function() {
    return ServiceWorkerRegistrationObjectHostProxy.prototype.unregister
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectHostProxy.prototype.unregister = function() {
    var params_ = new ServiceWorkerRegistrationObjectHost_Unregister_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerRegistrationObjectHost_Unregister_Name,
          codec.align(ServiceWorkerRegistrationObjectHost_Unregister_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerRegistrationObjectHost_Unregister_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerRegistrationObjectHostPtr.prototype.enableNavigationPreload = function() {
    return ServiceWorkerRegistrationObjectHostProxy.prototype.enableNavigationPreload
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectHostProxy.prototype.enableNavigationPreload = function(enable) {
    var params_ = new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params();
    params_.enable = enable;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name,
          codec.align(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerRegistrationObjectHostPtr.prototype.getNavigationPreloadState = function() {
    return ServiceWorkerRegistrationObjectHostProxy.prototype.getNavigationPreloadState
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectHostProxy.prototype.getNavigationPreloadState = function() {
    var params_ = new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name,
          codec.align(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerRegistrationObjectHostPtr.prototype.setNavigationPreloadHeader = function() {
    return ServiceWorkerRegistrationObjectHostProxy.prototype.setNavigationPreloadHeader
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectHostProxy.prototype.setNavigationPreloadHeader = function(value) {
    var params_ = new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params();
    params_.value = value;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name,
          codec.align(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ServiceWorkerRegistrationObjectHostStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerRegistrationObjectHostStub.prototype.update = function() {
    return this.delegate_ && this.delegate_.update && this.delegate_.update();
  }
  ServiceWorkerRegistrationObjectHostStub.prototype.unregister = function() {
    return this.delegate_ && this.delegate_.unregister && this.delegate_.unregister();
  }
  ServiceWorkerRegistrationObjectHostStub.prototype.enableNavigationPreload = function(enable) {
    return this.delegate_ && this.delegate_.enableNavigationPreload && this.delegate_.enableNavigationPreload(enable);
  }
  ServiceWorkerRegistrationObjectHostStub.prototype.getNavigationPreloadState = function() {
    return this.delegate_ && this.delegate_.getNavigationPreloadState && this.delegate_.getNavigationPreloadState();
  }
  ServiceWorkerRegistrationObjectHostStub.prototype.setNavigationPreloadHeader = function(value) {
    return this.delegate_ && this.delegate_.setNavigationPreloadHeader && this.delegate_.setNavigationPreloadHeader(value);
  }

  ServiceWorkerRegistrationObjectHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ServiceWorkerRegistrationObjectHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerRegistrationObjectHost_Update_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObjectHost_Update_Params);
      this.update().then(function(response) {
        var responseParams =
            new ServiceWorkerRegistrationObjectHost_Update_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerRegistrationObjectHost_Update_Name,
            codec.align(ServiceWorkerRegistrationObjectHost_Update_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerRegistrationObjectHost_Update_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerRegistrationObjectHost_Unregister_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObjectHost_Unregister_Params);
      this.unregister().then(function(response) {
        var responseParams =
            new ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerRegistrationObjectHost_Unregister_Name,
            codec.align(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params);
      this.enableNavigationPreload(params.enable).then(function(response) {
        var responseParams =
            new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name,
            codec.align(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params);
      this.getNavigationPreloadState().then(function(response) {
        var responseParams =
            new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        responseParams.state = response.state;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name,
            codec.align(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params);
      this.setNavigationPreloadHeader(params.value).then(function(response) {
        var responseParams =
            new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name,
            codec.align(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceWorkerRegistrationObjectHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerRegistrationObjectHost_Update_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_Update_Params;
      break;
      case kServiceWorkerRegistrationObjectHost_Unregister_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_Unregister_Params;
      break;
      case kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params;
      break;
      case kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params;
      break;
      case kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerRegistrationObjectHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServiceWorkerRegistrationObjectHost_Update_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_Update_ResponseParams;
        break;
      case kServiceWorkerRegistrationObjectHost_Unregister_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams;
        break;
      case kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams;
        break;
      case kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams;
        break;
      case kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServiceWorkerRegistrationObjectHost = {
    name: 'blink.mojom.ServiceWorkerRegistrationObjectHost',
    kVersion: 0,
    ptrClass: ServiceWorkerRegistrationObjectHostPtr,
    proxyClass: ServiceWorkerRegistrationObjectHostProxy,
    stubClass: ServiceWorkerRegistrationObjectHostStub,
    validateRequest: validateServiceWorkerRegistrationObjectHostRequest,
    validateResponse: validateServiceWorkerRegistrationObjectHostResponse,
    mojomId: 'third_party/blink/public/mojom/service_worker/service_worker_registration.mojom',
    fuzzMethods: {
      update: {
        params: ServiceWorkerRegistrationObjectHost_Update_Params,
      },
      unregister: {
        params: ServiceWorkerRegistrationObjectHost_Unregister_Params,
      },
      enableNavigationPreload: {
        params: ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params,
      },
      getNavigationPreloadState: {
        params: ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params,
      },
      setNavigationPreloadHeader: {
        params: ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params,
      },
    },
  };
  ServiceWorkerRegistrationObjectHostStub.prototype.validator = validateServiceWorkerRegistrationObjectHostRequest;
  ServiceWorkerRegistrationObjectHostProxy.prototype.validator = validateServiceWorkerRegistrationObjectHostResponse;
  var kServiceWorkerRegistrationObject_SetVersionAttributes_Name = 1968946741;
  var kServiceWorkerRegistrationObject_SetUpdateViaCache_Name = 945406847;
  var kServiceWorkerRegistrationObject_UpdateFound_Name = 9947814;

  function ServiceWorkerRegistrationObjectPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerRegistrationObject,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerRegistrationObjectAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerRegistrationObject, associatedInterfacePtrInfo);
  }

  ServiceWorkerRegistrationObjectAssociatedPtr.prototype =
      Object.create(ServiceWorkerRegistrationObjectPtr.prototype);
  ServiceWorkerRegistrationObjectAssociatedPtr.prototype.constructor =
      ServiceWorkerRegistrationObjectAssociatedPtr;

  function ServiceWorkerRegistrationObjectProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerRegistrationObjectPtr.prototype.setVersionAttributes = function() {
    return ServiceWorkerRegistrationObjectProxy.prototype.setVersionAttributes
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectProxy.prototype.setVersionAttributes = function(changedMask, installing, waiting, active) {
    var params_ = new ServiceWorkerRegistrationObject_SetVersionAttributes_Params();
    params_.changedMask = changedMask;
    params_.installing = installing;
    params_.waiting = waiting;
    params_.active = active;
    var builder = new codec.MessageV2Builder(
        kServiceWorkerRegistrationObject_SetVersionAttributes_Name,
        codec.align(ServiceWorkerRegistrationObject_SetVersionAttributes_Params.encodedSize));
    builder.setPayload(ServiceWorkerRegistrationObject_SetVersionAttributes_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerRegistrationObjectPtr.prototype.setUpdateViaCache = function() {
    return ServiceWorkerRegistrationObjectProxy.prototype.setUpdateViaCache
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectProxy.prototype.setUpdateViaCache = function(updateViaCache) {
    var params_ = new ServiceWorkerRegistrationObject_SetUpdateViaCache_Params();
    params_.updateViaCache = updateViaCache;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerRegistrationObject_SetUpdateViaCache_Name,
        codec.align(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerRegistrationObjectPtr.prototype.updateFound = function() {
    return ServiceWorkerRegistrationObjectProxy.prototype.updateFound
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerRegistrationObjectProxy.prototype.updateFound = function() {
    var params_ = new ServiceWorkerRegistrationObject_UpdateFound_Params();
    var builder = new codec.MessageV0Builder(
        kServiceWorkerRegistrationObject_UpdateFound_Name,
        codec.align(ServiceWorkerRegistrationObject_UpdateFound_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerRegistrationObject_UpdateFound_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerRegistrationObjectStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerRegistrationObjectStub.prototype.setVersionAttributes = function(changedMask, installing, waiting, active) {
    return this.delegate_ && this.delegate_.setVersionAttributes && this.delegate_.setVersionAttributes(changedMask, installing, waiting, active);
  }
  ServiceWorkerRegistrationObjectStub.prototype.setUpdateViaCache = function(updateViaCache) {
    return this.delegate_ && this.delegate_.setUpdateViaCache && this.delegate_.setUpdateViaCache(updateViaCache);
  }
  ServiceWorkerRegistrationObjectStub.prototype.updateFound = function() {
    return this.delegate_ && this.delegate_.updateFound && this.delegate_.updateFound();
  }

  ServiceWorkerRegistrationObjectStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerRegistrationObject_SetVersionAttributes_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObject_SetVersionAttributes_Params);
      this.setVersionAttributes(params.changedMask, params.installing, params.waiting, params.active);
      return true;
    case kServiceWorkerRegistrationObject_SetUpdateViaCache_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObject_SetUpdateViaCache_Params);
      this.setUpdateViaCache(params.updateViaCache);
      return true;
    case kServiceWorkerRegistrationObject_UpdateFound_Name:
      var params = reader.decodeStruct(ServiceWorkerRegistrationObject_UpdateFound_Params);
      this.updateFound();
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerRegistrationObjectStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceWorkerRegistrationObjectRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerRegistrationObject_SetVersionAttributes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerRegistrationObject_SetVersionAttributes_Params;
      break;
      case kServiceWorkerRegistrationObject_SetUpdateViaCache_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerRegistrationObject_SetUpdateViaCache_Params;
      break;
      case kServiceWorkerRegistrationObject_UpdateFound_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerRegistrationObject_UpdateFound_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerRegistrationObjectResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceWorkerRegistrationObject = {
    name: 'blink.mojom.ServiceWorkerRegistrationObject',
    kVersion: 0,
    ptrClass: ServiceWorkerRegistrationObjectPtr,
    proxyClass: ServiceWorkerRegistrationObjectProxy,
    stubClass: ServiceWorkerRegistrationObjectStub,
    validateRequest: validateServiceWorkerRegistrationObjectRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/service_worker/service_worker_registration.mojom',
    fuzzMethods: {
      setVersionAttributes: {
        params: ServiceWorkerRegistrationObject_SetVersionAttributes_Params,
      },
      setUpdateViaCache: {
        params: ServiceWorkerRegistrationObject_SetUpdateViaCache_Params,
      },
      updateFound: {
        params: ServiceWorkerRegistrationObject_UpdateFound_Params,
      },
    },
  };
  ServiceWorkerRegistrationObjectStub.prototype.validator = validateServiceWorkerRegistrationObjectRequest;
  ServiceWorkerRegistrationObjectProxy.prototype.validator = null;
  exports.kInvalidServiceWorkerRegistrationId = kInvalidServiceWorkerRegistrationId;
  exports.ServiceWorkerUpdateViaCache = ServiceWorkerUpdateViaCache;
  exports.ServiceWorkerRegistrationOptions = ServiceWorkerRegistrationOptions;
  exports.ServiceWorkerRegistrationObjectInfo = ServiceWorkerRegistrationObjectInfo;
  exports.ServiceWorkerRegistrationObjectHost = ServiceWorkerRegistrationObjectHost;
  exports.ServiceWorkerRegistrationObjectHostPtr = ServiceWorkerRegistrationObjectHostPtr;
  exports.ServiceWorkerRegistrationObjectHostAssociatedPtr = ServiceWorkerRegistrationObjectHostAssociatedPtr;
  exports.ServiceWorkerRegistrationObject = ServiceWorkerRegistrationObject;
  exports.ServiceWorkerRegistrationObjectPtr = ServiceWorkerRegistrationObjectPtr;
  exports.ServiceWorkerRegistrationObjectAssociatedPtr = ServiceWorkerRegistrationObjectAssociatedPtr;
})();