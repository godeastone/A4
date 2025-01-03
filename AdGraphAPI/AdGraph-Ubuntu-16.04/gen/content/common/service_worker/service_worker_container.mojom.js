// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/service_worker_container.mojom';
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
  var controller_service_worker$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/controller_service_worker.mojom', 'controller_service_worker.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var message_port$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/message_port/message_port.mojom', '../../../third_party/blink/public/mojom/message_port/message_port.mojom.js');
  }
  var service_worker_error_type$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom.js');
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
  var web_feature$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/web_feature.mojom', '../../../third_party/blink/public/platform/web_feature.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }


  var ControllerServiceWorkerPurpose = {};
  ControllerServiceWorkerPurpose.FETCH_SUB_RESOURCE = 0;

  ControllerServiceWorkerPurpose.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  ControllerServiceWorkerPurpose.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ServiceWorkerContainerHost_Register_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_Register_Params.prototype.initDefaults_ = function() {
    this.scriptUrl = null;
    this.options = null;
  };
  ServiceWorkerContainerHost_Register_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_Register_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_Register_Params;
    generated.scriptUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.options = generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationOptions, false);
    return generated;
  };

  ServiceWorkerContainerHost_Register_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scriptUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationOptions, false);
    }
    return this;
  };
  ServiceWorkerContainerHost_Register_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainerHost_Register_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_Register_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainerHost_Register_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_Register_Params.scriptUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_Register_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_registration$.ServiceWorkerRegistrationOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_Register_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerContainerHost_Register_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_Register_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scriptUrl = decoder.decodeStructPointer(url$.Url);
    val.options = decoder.decodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationOptions);
    return val;
  };

  ServiceWorkerContainerHost_Register_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_Register_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.scriptUrl);
    encoder.encodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationOptions, val.options);
  };
  function ServiceWorkerContainerHost_Register_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_Register_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
    this.registration = null;
  };
  ServiceWorkerContainerHost_Register_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_Register_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_Register_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    generated.registration = generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, true);
    return generated;
  };

  ServiceWorkerContainerHost_Register_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    if (mutator_.chooseMutateField()) {
      this.registration = mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, true);
    }
    return this;
  };
  ServiceWorkerContainerHost_Register_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.registration !== null) {
      Array.prototype.push.apply(handles, this.registration.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerContainerHost_Register_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_Register_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.registration.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerContainerHost_Register_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_Register_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_Register_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_Register_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, service_worker_registration$.ServiceWorkerRegistrationObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_Register_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerContainerHost_Register_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_Register_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    val.registration = decoder.decodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo);
    return val;
  };

  ServiceWorkerContainerHost_Register_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_Register_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
    encoder.encodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo, val.registration);
  };
  function ServiceWorkerContainerHost_GetRegistration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_GetRegistration_Params.prototype.initDefaults_ = function() {
    this.clientUrl = null;
  };
  ServiceWorkerContainerHost_GetRegistration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_GetRegistration_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_GetRegistration_Params;
    generated.clientUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ServiceWorkerContainerHost_GetRegistration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ServiceWorkerContainerHost_GetRegistration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainerHost_GetRegistration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_GetRegistration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainerHost_GetRegistration_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_GetRegistration_Params.clientUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_GetRegistration_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerContainerHost_GetRegistration_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_GetRegistration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ServiceWorkerContainerHost_GetRegistration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_GetRegistration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.clientUrl);
  };
  function ServiceWorkerContainerHost_GetRegistration_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_GetRegistration_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
    this.registration = null;
  };
  ServiceWorkerContainerHost_GetRegistration_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_GetRegistration_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_GetRegistration_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    generated.registration = generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, true);
    return generated;
  };

  ServiceWorkerContainerHost_GetRegistration_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    if (mutator_.chooseMutateField()) {
      this.registration = mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, true);
    }
    return this;
  };
  ServiceWorkerContainerHost_GetRegistration_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.registration !== null) {
      Array.prototype.push.apply(handles, this.registration.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerContainerHost_GetRegistration_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_GetRegistration_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.registration.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerContainerHost_GetRegistration_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_GetRegistration_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_GetRegistration_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_GetRegistration_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, service_worker_registration$.ServiceWorkerRegistrationObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_GetRegistration_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerContainerHost_GetRegistration_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_GetRegistration_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    val.registration = decoder.decodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo);
    return val;
  };

  ServiceWorkerContainerHost_GetRegistration_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_GetRegistration_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
    encoder.encodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo, val.registration);
  };
  function ServiceWorkerContainerHost_GetRegistrations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_GetRegistrations_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerContainerHost_GetRegistrations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_GetRegistrations_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_GetRegistrations_Params;
    return generated;
  };

  ServiceWorkerContainerHost_GetRegistrations_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerContainerHost_GetRegistrations_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainerHost_GetRegistrations_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_GetRegistrations_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainerHost_GetRegistrations_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerContainerHost_GetRegistrations_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerContainerHost_GetRegistrations_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_GetRegistrations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerContainerHost_GetRegistrations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_GetRegistrations_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerContainerHost_GetRegistrations_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
    this.infos = null;
  };
  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_GetRegistrations_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    generated.infos = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, false);
    });
    return generated;
  };

  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    if (mutator_.chooseMutateField()) {
      this.infos = mutator_.mutateArray(this.infos, function(val) {
        return mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, false);
      });
    }
    return this;
  };
  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.infos !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.infos.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.infos.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_GetRegistrations_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_GetRegistrations_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_GetRegistrations_ResponseParams.infos
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(service_worker_registration$.ServiceWorkerRegistrationObjectInfo), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_GetRegistrations_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    val.infos = decoder.decodeArrayPointer(new codec.PointerTo(service_worker_registration$.ServiceWorkerRegistrationObjectInfo));
    return val;
  };

  ServiceWorkerContainerHost_GetRegistrations_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_GetRegistrations_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
    encoder.encodeArrayPointer(new codec.PointerTo(service_worker_registration$.ServiceWorkerRegistrationObjectInfo), val.infos);
  };
  function ServiceWorkerContainerHost_GetRegistrationForReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_GetRegistrationForReady_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_GetRegistrationForReady_Params;
    return generated;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerContainerHost_GetRegistrationForReady_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerContainerHost_GetRegistrationForReady_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_GetRegistrationForReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_GetRegistrationForReady_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.prototype.initDefaults_ = function() {
    this.registration = null;
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams;
    generated.registration = generator_.generateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, true);
    return generated;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.registration = mutator_.mutateStruct(blink.mojom.ServiceWorkerRegistrationObjectInfo, true);
    }
    return this;
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.registration !== null) {
      Array.prototype.push.apply(handles, this.registration.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.registration.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, service_worker_registration$.ServiceWorkerRegistrationObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.registration = decoder.decodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo);
    return val;
  };

  ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(service_worker_registration$.ServiceWorkerRegistrationObjectInfo, val.registration);
  };
  function ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.prototype.initDefaults_ = function() {
    this.controller = new bindings.InterfaceRequest();
    this.purpose = 0;
  };
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params;
    generated.controller = generator_.generateInterfaceRequest("content.mojom.ControllerServiceWorker", false);
    generated.purpose = generator_.generateEnum(0, 0);
    return generated;
  };

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.controller = mutator_.mutateInterfaceRequest(this.controller, "content.mojom.ControllerServiceWorker", false);
    }
    if (mutator_.chooseMutateField()) {
      this.purpose = mutator_.mutateEnum(this.purpose, 0, 0);
    }
    return this;
  };
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controller !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ControllerServiceWorkerRequest"]);
    }
    return handles;
  };

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.controller = handles[idx++];;
    return idx;
  };

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.controller
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.purpose
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, ControllerServiceWorkerPurpose);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.controller = decoder.decodeStruct(codec.InterfaceRequest);
    val.purpose = decoder.decodeStruct(codec.Int32);
    return val;
  };

  ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.controller);
    encoder.encodeStruct(codec.Int32, val.purpose);
  };
  function ServiceWorkerContainerHost_CloneForWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_CloneForWorker_Params.prototype.initDefaults_ = function() {
    this.containerHostForWorker = new bindings.InterfaceRequest();
  };
  ServiceWorkerContainerHost_CloneForWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_CloneForWorker_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_CloneForWorker_Params;
    generated.containerHostForWorker = generator_.generateInterfaceRequest("content.mojom.ServiceWorkerContainerHost", false);
    return generated;
  };

  ServiceWorkerContainerHost_CloneForWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.containerHostForWorker = mutator_.mutateInterfaceRequest(this.containerHostForWorker, "content.mojom.ServiceWorkerContainerHost", false);
    }
    return this;
  };
  ServiceWorkerContainerHost_CloneForWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.containerHostForWorker !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerHostRequest"]);
    }
    return handles;
  };

  ServiceWorkerContainerHost_CloneForWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_CloneForWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.containerHostForWorker = handles[idx++];;
    return idx;
  };

  ServiceWorkerContainerHost_CloneForWorker_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainerHost_CloneForWorker_Params.containerHostForWorker
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainerHost_CloneForWorker_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerContainerHost_CloneForWorker_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_CloneForWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.containerHostForWorker = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerContainerHost_CloneForWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_CloneForWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.containerHostForWorker);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerContainerHost_Ping_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_Ping_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerContainerHost_Ping_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_Ping_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_Ping_Params;
    return generated;
  };

  ServiceWorkerContainerHost_Ping_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerContainerHost_Ping_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainerHost_Ping_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_Ping_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainerHost_Ping_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerContainerHost_Ping_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerContainerHost_Ping_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_Ping_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerContainerHost_Ping_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_Ping_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerContainerHost_Ping_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainerHost_Ping_ResponseParams.prototype.initDefaults_ = function() {
  };
  ServiceWorkerContainerHost_Ping_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainerHost_Ping_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerContainerHost_Ping_ResponseParams;
    return generated;
  };

  ServiceWorkerContainerHost_Ping_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerContainerHost_Ping_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainerHost_Ping_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainerHost_Ping_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainerHost_Ping_ResponseParams.validate = function(messageValidator, offset) {
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

  ServiceWorkerContainerHost_Ping_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerContainerHost_Ping_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainerHost_Ping_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerContainerHost_Ping_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainerHost_Ping_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerContainer_SetController_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainer_SetController_Params.prototype.initDefaults_ = function() {
    this.controllerInfo = null;
    this.usedFeatures = null;
    this.shouldNotifyControllerchange = false;
  };
  ServiceWorkerContainer_SetController_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainer_SetController_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainer_SetController_Params;
    generated.controllerInfo = generator_.generateStruct(content.mojom.ControllerServiceWorkerInfo, false);
    generated.usedFeatures = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2465);
    });
    generated.shouldNotifyControllerchange = generator_.generateBool();
    return generated;
  };

  ServiceWorkerContainer_SetController_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.controllerInfo = mutator_.mutateStruct(content.mojom.ControllerServiceWorkerInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.usedFeatures = mutator_.mutateArray(this.usedFeatures, function(val) {
        return mutator_.mutateEnum(val, 0, 2465);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.shouldNotifyControllerchange = mutator_.mutateBool(this.shouldNotifyControllerchange);
    }
    return this;
  };
  ServiceWorkerContainer_SetController_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controllerInfo !== null) {
      Array.prototype.push.apply(handles, this.controllerInfo.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerContainer_SetController_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainer_SetController_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.controllerInfo.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerContainer_SetController_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainer_SetController_Params.controllerInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, controller_service_worker$.ControllerServiceWorkerInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainer_SetController_Params.usedFeatures
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, new codec.Enum(web_feature$.WebFeature), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServiceWorkerContainer_SetController_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerContainer_SetController_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainer_SetController_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.controllerInfo = decoder.decodeStructPointer(controller_service_worker$.ControllerServiceWorkerInfo);
    val.usedFeatures = decoder.decodeArrayPointer(new codec.Enum(web_feature$.WebFeature));
    packed = decoder.readUint8();
    val.shouldNotifyControllerchange = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerContainer_SetController_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainer_SetController_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(controller_service_worker$.ControllerServiceWorkerInfo, val.controllerInfo);
    encoder.encodeArrayPointer(new codec.Enum(web_feature$.WebFeature), val.usedFeatures);
    packed = 0;
    packed |= (val.shouldNotifyControllerchange & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerContainer_PostMessageToClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainer_PostMessageToClient_Params.prototype.initDefaults_ = function() {
    this.source = null;
    this.message = null;
  };
  ServiceWorkerContainer_PostMessageToClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainer_PostMessageToClient_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainer_PostMessageToClient_Params;
    generated.source = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, false);
    generated.message = generator_.generateStruct(blink.mojom.TransferableMessage, false);
    return generated;
  };

  ServiceWorkerContainer_PostMessageToClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(blink.mojom.TransferableMessage, false);
    }
    return this;
  };
  ServiceWorkerContainer_PostMessageToClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.source !== null) {
      Array.prototype.push.apply(handles, this.source.getHandleDeps());
    }
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerContainer_PostMessageToClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainer_PostMessageToClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.source.setHandlesInternal_(handles, idx);
    idx = this.message.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerContainer_PostMessageToClient_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainer_PostMessageToClient_Params.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, service_worker_object$.ServiceWorkerObjectInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerContainer_PostMessageToClient_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, message_port$.TransferableMessage, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainer_PostMessageToClient_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerContainer_PostMessageToClient_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainer_PostMessageToClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    val.message = decoder.decodeStructPointer(message_port$.TransferableMessage);
    return val;
  };

  ServiceWorkerContainer_PostMessageToClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainer_PostMessageToClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.source);
    encoder.encodeStructPointer(message_port$.TransferableMessage, val.message);
  };
  function ServiceWorkerContainer_CountFeature_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerContainer_CountFeature_Params.prototype.initDefaults_ = function() {
    this.feature = 0;
  };
  ServiceWorkerContainer_CountFeature_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerContainer_CountFeature_Params.generate = function(generator_) {
    var generated = new ServiceWorkerContainer_CountFeature_Params;
    generated.feature = generator_.generateEnum(0, 2465);
    return generated;
  };

  ServiceWorkerContainer_CountFeature_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.feature = mutator_.mutateEnum(this.feature, 0, 2465);
    }
    return this;
  };
  ServiceWorkerContainer_CountFeature_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerContainer_CountFeature_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerContainer_CountFeature_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerContainer_CountFeature_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerContainer_CountFeature_Params.feature
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, web_feature$.WebFeature);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerContainer_CountFeature_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerContainer_CountFeature_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerContainer_CountFeature_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.feature = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerContainer_CountFeature_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerContainer_CountFeature_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.feature);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kServiceWorkerContainerHost_Register_Name = 646319056;
  var kServiceWorkerContainerHost_GetRegistration_Name = 537172226;
  var kServiceWorkerContainerHost_GetRegistrations_Name = 2071118573;
  var kServiceWorkerContainerHost_GetRegistrationForReady_Name = 1617858776;
  var kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name = 2141030188;
  var kServiceWorkerContainerHost_CloneForWorker_Name = 1901208602;
  var kServiceWorkerContainerHost_Ping_Name = 1965277887;

  function ServiceWorkerContainerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerContainerHost,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerContainerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerContainerHost, associatedInterfacePtrInfo);
  }

  ServiceWorkerContainerHostAssociatedPtr.prototype =
      Object.create(ServiceWorkerContainerHostPtr.prototype);
  ServiceWorkerContainerHostAssociatedPtr.prototype.constructor =
      ServiceWorkerContainerHostAssociatedPtr;

  function ServiceWorkerContainerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerContainerHostPtr.prototype.register = function() {
    return ServiceWorkerContainerHostProxy.prototype.register
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.register = function(scriptUrl, options) {
    var params_ = new ServiceWorkerContainerHost_Register_Params();
    params_.scriptUrl = scriptUrl;
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kServiceWorkerContainerHost_Register_Name,
          codec.align(ServiceWorkerContainerHost_Register_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(ServiceWorkerContainerHost_Register_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerContainerHost_Register_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerContainerHostPtr.prototype.getRegistration = function() {
    return ServiceWorkerContainerHostProxy.prototype.getRegistration
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.getRegistration = function(clientUrl) {
    var params_ = new ServiceWorkerContainerHost_GetRegistration_Params();
    params_.clientUrl = clientUrl;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kServiceWorkerContainerHost_GetRegistration_Name,
          codec.align(ServiceWorkerContainerHost_GetRegistration_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(ServiceWorkerContainerHost_GetRegistration_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerContainerHost_GetRegistration_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerContainerHostPtr.prototype.getRegistrations = function() {
    return ServiceWorkerContainerHostProxy.prototype.getRegistrations
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.getRegistrations = function() {
    var params_ = new ServiceWorkerContainerHost_GetRegistrations_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kServiceWorkerContainerHost_GetRegistrations_Name,
          codec.align(ServiceWorkerContainerHost_GetRegistrations_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(ServiceWorkerContainerHost_GetRegistrations_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerContainerHost_GetRegistrations_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerContainerHostPtr.prototype.getRegistrationForReady = function() {
    return ServiceWorkerContainerHostProxy.prototype.getRegistrationForReady
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.getRegistrationForReady = function() {
    var params_ = new ServiceWorkerContainerHost_GetRegistrationForReady_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kServiceWorkerContainerHost_GetRegistrationForReady_Name,
          codec.align(ServiceWorkerContainerHost_GetRegistrationForReady_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(ServiceWorkerContainerHost_GetRegistrationForReady_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerContainerHostPtr.prototype.ensureControllerServiceWorker = function() {
    return ServiceWorkerContainerHostProxy.prototype.ensureControllerServiceWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.ensureControllerServiceWorker = function(controller, purpose) {
    var params_ = new ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params();
    params_.controller = controller;
    params_.purpose = purpose;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name,
        codec.align(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerContainerHostPtr.prototype.cloneForWorker = function() {
    return ServiceWorkerContainerHostProxy.prototype.cloneForWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.cloneForWorker = function(containerHostForWorker) {
    var params_ = new ServiceWorkerContainerHost_CloneForWorker_Params();
    params_.containerHostForWorker = containerHostForWorker;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerContainerHost_CloneForWorker_Name,
        codec.align(ServiceWorkerContainerHost_CloneForWorker_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerContainerHost_CloneForWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerContainerHostPtr.prototype.ping = function() {
    return ServiceWorkerContainerHostProxy.prototype.ping
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerHostProxy.prototype.ping = function() {
    var params_ = new ServiceWorkerContainerHost_Ping_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerContainerHost_Ping_Name,
          codec.align(ServiceWorkerContainerHost_Ping_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerContainerHost_Ping_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerContainerHost_Ping_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ServiceWorkerContainerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerContainerHostStub.prototype.register = function(scriptUrl, options) {
    return this.delegate_ && this.delegate_.register && this.delegate_.register(scriptUrl, options);
  }
  ServiceWorkerContainerHostStub.prototype.getRegistration = function(clientUrl) {
    return this.delegate_ && this.delegate_.getRegistration && this.delegate_.getRegistration(clientUrl);
  }
  ServiceWorkerContainerHostStub.prototype.getRegistrations = function() {
    return this.delegate_ && this.delegate_.getRegistrations && this.delegate_.getRegistrations();
  }
  ServiceWorkerContainerHostStub.prototype.getRegistrationForReady = function() {
    return this.delegate_ && this.delegate_.getRegistrationForReady && this.delegate_.getRegistrationForReady();
  }
  ServiceWorkerContainerHostStub.prototype.ensureControllerServiceWorker = function(controller, purpose) {
    return this.delegate_ && this.delegate_.ensureControllerServiceWorker && this.delegate_.ensureControllerServiceWorker(controller, purpose);
  }
  ServiceWorkerContainerHostStub.prototype.cloneForWorker = function(containerHostForWorker) {
    return this.delegate_ && this.delegate_.cloneForWorker && this.delegate_.cloneForWorker(containerHostForWorker);
  }
  ServiceWorkerContainerHostStub.prototype.ping = function() {
    return this.delegate_ && this.delegate_.ping && this.delegate_.ping();
  }

  ServiceWorkerContainerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params);
      this.ensureControllerServiceWorker(params.controller, params.purpose);
      return true;
    case kServiceWorkerContainerHost_CloneForWorker_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_CloneForWorker_Params);
      this.cloneForWorker(params.containerHostForWorker);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerContainerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerContainerHost_Register_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_Register_Params);
      this.register(params.scriptUrl, params.options).then(function(response) {
        var responseParams =
            new ServiceWorkerContainerHost_Register_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        responseParams.registration = response.registration;
        var builder = new codec.MessageV2Builder(
            kServiceWorkerContainerHost_Register_Name,
            codec.align(ServiceWorkerContainerHost_Register_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(ServiceWorkerContainerHost_Register_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerContainerHost_GetRegistration_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_GetRegistration_Params);
      this.getRegistration(params.clientUrl).then(function(response) {
        var responseParams =
            new ServiceWorkerContainerHost_GetRegistration_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        responseParams.registration = response.registration;
        var builder = new codec.MessageV2Builder(
            kServiceWorkerContainerHost_GetRegistration_Name,
            codec.align(ServiceWorkerContainerHost_GetRegistration_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(ServiceWorkerContainerHost_GetRegistration_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerContainerHost_GetRegistrations_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_GetRegistrations_Params);
      this.getRegistrations().then(function(response) {
        var responseParams =
            new ServiceWorkerContainerHost_GetRegistrations_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        responseParams.infos = response.infos;
        var builder = new codec.MessageV2Builder(
            kServiceWorkerContainerHost_GetRegistrations_Name,
            codec.align(ServiceWorkerContainerHost_GetRegistrations_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(ServiceWorkerContainerHost_GetRegistrations_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerContainerHost_GetRegistrationForReady_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_GetRegistrationForReady_Params);
      this.getRegistrationForReady().then(function(response) {
        var responseParams =
            new ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams();
        responseParams.registration = response.registration;
        var builder = new codec.MessageV2Builder(
            kServiceWorkerContainerHost_GetRegistrationForReady_Name,
            codec.align(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerContainerHost_Ping_Name:
      var params = reader.decodeStruct(ServiceWorkerContainerHost_Ping_Params);
      this.ping().then(function(response) {
        var responseParams =
            new ServiceWorkerContainerHost_Ping_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kServiceWorkerContainerHost_Ping_Name,
            codec.align(ServiceWorkerContainerHost_Ping_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerContainerHost_Ping_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceWorkerContainerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerContainerHost_Register_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerContainerHost_Register_Params;
      break;
      case kServiceWorkerContainerHost_GetRegistration_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerContainerHost_GetRegistration_Params;
      break;
      case kServiceWorkerContainerHost_GetRegistrations_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerContainerHost_GetRegistrations_Params;
      break;
      case kServiceWorkerContainerHost_GetRegistrationForReady_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerContainerHost_GetRegistrationForReady_Params;
      break;
      case kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params;
      break;
      case kServiceWorkerContainerHost_CloneForWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerContainerHost_CloneForWorker_Params;
      break;
      case kServiceWorkerContainerHost_Ping_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerContainerHost_Ping_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerContainerHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServiceWorkerContainerHost_Register_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerContainerHost_Register_ResponseParams;
        break;
      case kServiceWorkerContainerHost_GetRegistration_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerContainerHost_GetRegistration_ResponseParams;
        break;
      case kServiceWorkerContainerHost_GetRegistrations_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerContainerHost_GetRegistrations_ResponseParams;
        break;
      case kServiceWorkerContainerHost_GetRegistrationForReady_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams;
        break;
      case kServiceWorkerContainerHost_Ping_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerContainerHost_Ping_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServiceWorkerContainerHost = {
    name: 'content.mojom.ServiceWorkerContainerHost',
    kVersion: 0,
    ptrClass: ServiceWorkerContainerHostPtr,
    proxyClass: ServiceWorkerContainerHostProxy,
    stubClass: ServiceWorkerContainerHostStub,
    validateRequest: validateServiceWorkerContainerHostRequest,
    validateResponse: validateServiceWorkerContainerHostResponse,
    mojomId: 'content/common/service_worker/service_worker_container.mojom',
    fuzzMethods: {
      register: {
        params: ServiceWorkerContainerHost_Register_Params,
      },
      getRegistration: {
        params: ServiceWorkerContainerHost_GetRegistration_Params,
      },
      getRegistrations: {
        params: ServiceWorkerContainerHost_GetRegistrations_Params,
      },
      getRegistrationForReady: {
        params: ServiceWorkerContainerHost_GetRegistrationForReady_Params,
      },
      ensureControllerServiceWorker: {
        params: ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params,
      },
      cloneForWorker: {
        params: ServiceWorkerContainerHost_CloneForWorker_Params,
      },
      ping: {
        params: ServiceWorkerContainerHost_Ping_Params,
      },
    },
  };
  ServiceWorkerContainerHostStub.prototype.validator = validateServiceWorkerContainerHostRequest;
  ServiceWorkerContainerHostProxy.prototype.validator = validateServiceWorkerContainerHostResponse;
  var kServiceWorkerContainer_SetController_Name = 756623220;
  var kServiceWorkerContainer_PostMessageToClient_Name = 125221263;
  var kServiceWorkerContainer_CountFeature_Name = 169939921;

  function ServiceWorkerContainerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerContainer,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerContainerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerContainer, associatedInterfacePtrInfo);
  }

  ServiceWorkerContainerAssociatedPtr.prototype =
      Object.create(ServiceWorkerContainerPtr.prototype);
  ServiceWorkerContainerAssociatedPtr.prototype.constructor =
      ServiceWorkerContainerAssociatedPtr;

  function ServiceWorkerContainerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerContainerPtr.prototype.setController = function() {
    return ServiceWorkerContainerProxy.prototype.setController
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerProxy.prototype.setController = function(controllerInfo, usedFeatures, shouldNotifyControllerchange) {
    var params_ = new ServiceWorkerContainer_SetController_Params();
    params_.controllerInfo = controllerInfo;
    params_.usedFeatures = usedFeatures;
    params_.shouldNotifyControllerchange = shouldNotifyControllerchange;
    var builder = new codec.MessageV2Builder(
        kServiceWorkerContainer_SetController_Name,
        codec.align(ServiceWorkerContainer_SetController_Params.encodedSize));
    builder.setPayload(ServiceWorkerContainer_SetController_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerContainerPtr.prototype.postMessageToClient = function() {
    return ServiceWorkerContainerProxy.prototype.postMessageToClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerProxy.prototype.postMessageToClient = function(source, message) {
    var params_ = new ServiceWorkerContainer_PostMessageToClient_Params();
    params_.source = source;
    params_.message = message;
    var builder = new codec.MessageV2Builder(
        kServiceWorkerContainer_PostMessageToClient_Name,
        codec.align(ServiceWorkerContainer_PostMessageToClient_Params.encodedSize));
    builder.setPayload(ServiceWorkerContainer_PostMessageToClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerContainerPtr.prototype.countFeature = function() {
    return ServiceWorkerContainerProxy.prototype.countFeature
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerContainerProxy.prototype.countFeature = function(feature) {
    var params_ = new ServiceWorkerContainer_CountFeature_Params();
    params_.feature = feature;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerContainer_CountFeature_Name,
        codec.align(ServiceWorkerContainer_CountFeature_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerContainer_CountFeature_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerContainerStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerContainerStub.prototype.setController = function(controllerInfo, usedFeatures, shouldNotifyControllerchange) {
    return this.delegate_ && this.delegate_.setController && this.delegate_.setController(controllerInfo, usedFeatures, shouldNotifyControllerchange);
  }
  ServiceWorkerContainerStub.prototype.postMessageToClient = function(source, message) {
    return this.delegate_ && this.delegate_.postMessageToClient && this.delegate_.postMessageToClient(source, message);
  }
  ServiceWorkerContainerStub.prototype.countFeature = function(feature) {
    return this.delegate_ && this.delegate_.countFeature && this.delegate_.countFeature(feature);
  }

  ServiceWorkerContainerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerContainer_SetController_Name:
      var params = reader.decodeStruct(ServiceWorkerContainer_SetController_Params);
      this.setController(params.controllerInfo, params.usedFeatures, params.shouldNotifyControllerchange);
      return true;
    case kServiceWorkerContainer_PostMessageToClient_Name:
      var params = reader.decodeStruct(ServiceWorkerContainer_PostMessageToClient_Params);
      this.postMessageToClient(params.source, params.message);
      return true;
    case kServiceWorkerContainer_CountFeature_Name:
      var params = reader.decodeStruct(ServiceWorkerContainer_CountFeature_Params);
      this.countFeature(params.feature);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerContainerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceWorkerContainerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerContainer_SetController_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerContainer_SetController_Params;
      break;
      case kServiceWorkerContainer_PostMessageToClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerContainer_PostMessageToClient_Params;
      break;
      case kServiceWorkerContainer_CountFeature_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerContainer_CountFeature_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerContainerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceWorkerContainer = {
    name: 'content.mojom.ServiceWorkerContainer',
    kVersion: 0,
    ptrClass: ServiceWorkerContainerPtr,
    proxyClass: ServiceWorkerContainerProxy,
    stubClass: ServiceWorkerContainerStub,
    validateRequest: validateServiceWorkerContainerRequest,
    validateResponse: null,
    mojomId: 'content/common/service_worker/service_worker_container.mojom',
    fuzzMethods: {
      setController: {
        params: ServiceWorkerContainer_SetController_Params,
      },
      postMessageToClient: {
        params: ServiceWorkerContainer_PostMessageToClient_Params,
      },
      countFeature: {
        params: ServiceWorkerContainer_CountFeature_Params,
      },
    },
  };
  ServiceWorkerContainerStub.prototype.validator = validateServiceWorkerContainerRequest;
  ServiceWorkerContainerProxy.prototype.validator = null;
  exports.ControllerServiceWorkerPurpose = ControllerServiceWorkerPurpose;
  exports.ServiceWorkerContainerHost = ServiceWorkerContainerHost;
  exports.ServiceWorkerContainerHostPtr = ServiceWorkerContainerHostPtr;
  exports.ServiceWorkerContainerHostAssociatedPtr = ServiceWorkerContainerHostAssociatedPtr;
  exports.ServiceWorkerContainer = ServiceWorkerContainer;
  exports.ServiceWorkerContainerPtr = ServiceWorkerContainerPtr;
  exports.ServiceWorkerContainerAssociatedPtr = ServiceWorkerContainerAssociatedPtr;
})();