// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/service_worker.mojom';
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
  var message_port$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/message_port/message_port.mojom', '../message_port/message_port.mojom.js');
  }
  var service_worker_error_type$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom', 'service_worker_error_type.mojom.js');
  }
  var service_worker_client$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_client.mojom', 'service_worker_client.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function ServiceWorkerHost_SetCachedMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_SetCachedMetadata_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.data = null;
  };
  ServiceWorkerHost_SetCachedMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_SetCachedMetadata_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_SetCachedMetadata_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  ServiceWorkerHost_SetCachedMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  ServiceWorkerHost_SetCachedMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_SetCachedMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_SetCachedMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_SetCachedMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_SetCachedMetadata_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_SetCachedMetadata_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_SetCachedMetadata_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerHost_SetCachedMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_SetCachedMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ServiceWorkerHost_SetCachedMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_SetCachedMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function ServiceWorkerHost_ClearCachedMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_ClearCachedMetadata_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  ServiceWorkerHost_ClearCachedMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_ClearCachedMetadata_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_ClearCachedMetadata_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ServiceWorkerHost_ClearCachedMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ServiceWorkerHost_ClearCachedMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_ClearCachedMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_ClearCachedMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_ClearCachedMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_ClearCachedMetadata_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_ClearCachedMetadata_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_ClearCachedMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_ClearCachedMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ServiceWorkerHost_ClearCachedMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_ClearCachedMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ServiceWorkerHost_GetClients_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_GetClients_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  ServiceWorkerHost_GetClients_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_GetClients_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_GetClients_Params;
    generated.options = generator_.generateStruct(blink.mojom.ServiceWorkerClientQueryOptions, false);
    return generated;
  };

  ServiceWorkerHost_GetClients_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientQueryOptions, false);
    }
    return this;
  };
  ServiceWorkerHost_GetClients_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_GetClients_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_GetClients_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_GetClients_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_GetClients_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, service_worker_client$.ServiceWorkerClientQueryOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_GetClients_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_GetClients_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_GetClients_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientQueryOptions);
    return val;
  };

  ServiceWorkerHost_GetClients_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_GetClients_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientQueryOptions, val.options);
  };
  function ServiceWorkerHost_GetClients_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_GetClients_ResponseParams.prototype.initDefaults_ = function() {
    this.clients = null;
  };
  ServiceWorkerHost_GetClients_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_GetClients_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_GetClients_ResponseParams;
    generated.clients = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, false);
    });
    return generated;
  };

  ServiceWorkerHost_GetClients_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clients = mutator_.mutateArray(this.clients, function(val) {
        return mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, false);
      });
    }
    return this;
  };
  ServiceWorkerHost_GetClients_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_GetClients_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_GetClients_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_GetClients_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_GetClients_ResponseParams.clients
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(service_worker_client$.ServiceWorkerClientInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_GetClients_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_GetClients_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_GetClients_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clients = decoder.decodeArrayPointer(new codec.PointerTo(service_worker_client$.ServiceWorkerClientInfo));
    return val;
  };

  ServiceWorkerHost_GetClients_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_GetClients_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(service_worker_client$.ServiceWorkerClientInfo), val.clients);
  };
  function ServiceWorkerHost_GetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_GetClient_Params.prototype.initDefaults_ = function() {
    this.clientUuid = null;
  };
  ServiceWorkerHost_GetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_GetClient_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_GetClient_Params;
    generated.clientUuid = generator_.generateString(false);
    return generated;
  };

  ServiceWorkerHost_GetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientUuid = mutator_.mutateString(this.clientUuid, false);
    }
    return this;
  };
  ServiceWorkerHost_GetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_GetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_GetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_GetClient_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_GetClient_Params.clientUuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_GetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_GetClient_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_GetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientUuid = decoder.decodeStruct(codec.String);
    return val;
  };

  ServiceWorkerHost_GetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_GetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.clientUuid);
  };
  function ServiceWorkerHost_GetClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_GetClient_ResponseParams.prototype.initDefaults_ = function() {
    this.client = null;
  };
  ServiceWorkerHost_GetClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_GetClient_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_GetClient_ResponseParams;
    generated.client = generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    return generated;
  };

  ServiceWorkerHost_GetClient_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    }
    return this;
  };
  ServiceWorkerHost_GetClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_GetClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_GetClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_GetClient_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_GetClient_ResponseParams.client
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, service_worker_client$.ServiceWorkerClientInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_GetClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_GetClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_GetClient_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientInfo);
    return val;
  };

  ServiceWorkerHost_GetClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_GetClient_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientInfo, val.client);
  };
  function ServiceWorkerHost_OpenNewTab_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_OpenNewTab_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  ServiceWorkerHost_OpenNewTab_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_OpenNewTab_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_OpenNewTab_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ServiceWorkerHost_OpenNewTab_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ServiceWorkerHost_OpenNewTab_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_OpenNewTab_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_OpenNewTab_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_OpenNewTab_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_OpenNewTab_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_OpenNewTab_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_OpenNewTab_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_OpenNewTab_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ServiceWorkerHost_OpenNewTab_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_OpenNewTab_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ServiceWorkerHost_OpenNewTab_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_OpenNewTab_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.client = null;
    this.errorMsg = null;
  };
  ServiceWorkerHost_OpenNewTab_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_OpenNewTab_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_OpenNewTab_ResponseParams;
    generated.success = generator_.generateBool();
    generated.client = generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerHost_OpenNewTab_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerHost_OpenNewTab_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_OpenNewTab_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_OpenNewTab_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_OpenNewTab_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerHost_OpenNewTab_ResponseParams.client
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_client$.ServiceWorkerClientInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_OpenNewTab_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_OpenNewTab_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerHost_OpenNewTab_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_OpenNewTab_ResponseParams();
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
    val.client = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientInfo);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerHost_OpenNewTab_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_OpenNewTab_ResponseParams.encodedSize);
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
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientInfo, val.client);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerHost_OpenPaymentHandlerWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_OpenPaymentHandlerWindow_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_OpenPaymentHandlerWindow_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_OpenPaymentHandlerWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_OpenPaymentHandlerWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.client = null;
    this.errorMsg = null;
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams;
    generated.success = generator_.generateBool();
    generated.client = generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.client
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_client$.ServiceWorkerClientInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams();
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
    val.client = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientInfo);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.encodedSize);
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
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientInfo, val.client);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerHost_PostMessageToClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_PostMessageToClient_Params.prototype.initDefaults_ = function() {
    this.clientUuid = null;
    this.message = null;
  };
  ServiceWorkerHost_PostMessageToClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_PostMessageToClient_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_PostMessageToClient_Params;
    generated.clientUuid = generator_.generateString(false);
    generated.message = generator_.generateStruct(blink.mojom.TransferableMessage, false);
    return generated;
  };

  ServiceWorkerHost_PostMessageToClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientUuid = mutator_.mutateString(this.clientUuid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(blink.mojom.TransferableMessage, false);
    }
    return this;
  };
  ServiceWorkerHost_PostMessageToClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerHost_PostMessageToClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_PostMessageToClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.message.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerHost_PostMessageToClient_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_PostMessageToClient_Params.clientUuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_PostMessageToClient_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, message_port$.TransferableMessage, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_PostMessageToClient_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerHost_PostMessageToClient_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_PostMessageToClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientUuid = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStructPointer(message_port$.TransferableMessage);
    return val;
  };

  ServiceWorkerHost_PostMessageToClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_PostMessageToClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.clientUuid);
    encoder.encodeStructPointer(message_port$.TransferableMessage, val.message);
  };
  function ServiceWorkerHost_FocusClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_FocusClient_Params.prototype.initDefaults_ = function() {
    this.clientUuid = null;
  };
  ServiceWorkerHost_FocusClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_FocusClient_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_FocusClient_Params;
    generated.clientUuid = generator_.generateString(false);
    return generated;
  };

  ServiceWorkerHost_FocusClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientUuid = mutator_.mutateString(this.clientUuid, false);
    }
    return this;
  };
  ServiceWorkerHost_FocusClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_FocusClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_FocusClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_FocusClient_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_FocusClient_Params.clientUuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_FocusClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_FocusClient_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_FocusClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientUuid = decoder.decodeStruct(codec.String);
    return val;
  };

  ServiceWorkerHost_FocusClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_FocusClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.clientUuid);
  };
  function ServiceWorkerHost_FocusClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_FocusClient_ResponseParams.prototype.initDefaults_ = function() {
    this.client = null;
  };
  ServiceWorkerHost_FocusClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_FocusClient_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_FocusClient_ResponseParams;
    generated.client = generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    return generated;
  };

  ServiceWorkerHost_FocusClient_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    }
    return this;
  };
  ServiceWorkerHost_FocusClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_FocusClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_FocusClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_FocusClient_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_FocusClient_ResponseParams.client
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, service_worker_client$.ServiceWorkerClientInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_FocusClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_FocusClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_FocusClient_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientInfo);
    return val;
  };

  ServiceWorkerHost_FocusClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_FocusClient_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientInfo, val.client);
  };
  function ServiceWorkerHost_NavigateClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_NavigateClient_Params.prototype.initDefaults_ = function() {
    this.clientUuid = null;
    this.url = null;
  };
  ServiceWorkerHost_NavigateClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_NavigateClient_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_NavigateClient_Params;
    generated.clientUuid = generator_.generateString(false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ServiceWorkerHost_NavigateClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientUuid = mutator_.mutateString(this.clientUuid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ServiceWorkerHost_NavigateClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_NavigateClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_NavigateClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_NavigateClient_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_NavigateClient_Params.clientUuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_NavigateClient_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_NavigateClient_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerHost_NavigateClient_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_NavigateClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientUuid = decoder.decodeStruct(codec.String);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ServiceWorkerHost_NavigateClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_NavigateClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.clientUuid);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ServiceWorkerHost_NavigateClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_NavigateClient_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.client = null;
    this.errorMsg = null;
  };
  ServiceWorkerHost_NavigateClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_NavigateClient_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_NavigateClient_ResponseParams;
    generated.success = generator_.generateBool();
    generated.client = generator_.generateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerHost_NavigateClient_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateStruct(blink.mojom.ServiceWorkerClientInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerHost_NavigateClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_NavigateClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_NavigateClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_NavigateClient_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerHost_NavigateClient_ResponseParams.client
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_client$.ServiceWorkerClientInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_NavigateClient_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_NavigateClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerHost_NavigateClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_NavigateClient_ResponseParams();
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
    val.client = decoder.decodeStructPointer(service_worker_client$.ServiceWorkerClientInfo);
    val.errorMsg = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ServiceWorkerHost_NavigateClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_NavigateClient_ResponseParams.encodedSize);
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
    encoder.encodeStructPointer(service_worker_client$.ServiceWorkerClientInfo, val.client);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  function ServiceWorkerHost_SkipWaiting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_SkipWaiting_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerHost_SkipWaiting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_SkipWaiting_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_SkipWaiting_Params;
    return generated;
  };

  ServiceWorkerHost_SkipWaiting_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerHost_SkipWaiting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_SkipWaiting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_SkipWaiting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_SkipWaiting_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerHost_SkipWaiting_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerHost_SkipWaiting_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_SkipWaiting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerHost_SkipWaiting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_SkipWaiting_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerHost_SkipWaiting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_SkipWaiting_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  ServiceWorkerHost_SkipWaiting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_SkipWaiting_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_SkipWaiting_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  ServiceWorkerHost_SkipWaiting_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  ServiceWorkerHost_SkipWaiting_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_SkipWaiting_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_SkipWaiting_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_SkipWaiting_ResponseParams.validate = function(messageValidator, offset) {
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

  ServiceWorkerHost_SkipWaiting_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerHost_SkipWaiting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_SkipWaiting_ResponseParams();
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

  ServiceWorkerHost_SkipWaiting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_SkipWaiting_ResponseParams.encodedSize);
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
  function ServiceWorkerHost_ClaimClients_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_ClaimClients_Params.prototype.initDefaults_ = function() {
  };
  ServiceWorkerHost_ClaimClients_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_ClaimClients_Params.generate = function(generator_) {
    var generated = new ServiceWorkerHost_ClaimClients_Params;
    return generated;
  };

  ServiceWorkerHost_ClaimClients_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerHost_ClaimClients_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_ClaimClients_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_ClaimClients_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_ClaimClients_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerHost_ClaimClients_Params.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerHost_ClaimClients_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_ClaimClients_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerHost_ClaimClients_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_ClaimClients_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerHost_ClaimClients_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerHost_ClaimClients_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.errorMsg = null;
  };
  ServiceWorkerHost_ClaimClients_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerHost_ClaimClients_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerHost_ClaimClients_ResponseParams;
    generated.error = generator_.generateEnum(0, 13);
    generated.errorMsg = generator_.generateString(true);
    return generated;
  };

  ServiceWorkerHost_ClaimClients_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 13);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, true);
    }
    return this;
  };
  ServiceWorkerHost_ClaimClients_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerHost_ClaimClients_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerHost_ClaimClients_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerHost_ClaimClients_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerHost_ClaimClients_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_error_type$.ServiceWorkerErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerHost_ClaimClients_ResponseParams.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerHost_ClaimClients_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerHost_ClaimClients_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerHost_ClaimClients_ResponseParams();
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

  ServiceWorkerHost_ClaimClients_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerHost_ClaimClients_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.errorMsg);
  };
  var kServiceWorkerHost_SetCachedMetadata_Name = 257074495;
  var kServiceWorkerHost_ClearCachedMetadata_Name = 1703860958;
  var kServiceWorkerHost_GetClients_Name = 1020349700;
  var kServiceWorkerHost_GetClient_Name = 1533896119;
  var kServiceWorkerHost_OpenNewTab_Name = 576806566;
  var kServiceWorkerHost_OpenPaymentHandlerWindow_Name = 265749181;
  var kServiceWorkerHost_PostMessageToClient_Name = 1294251600;
  var kServiceWorkerHost_FocusClient_Name = 1506913444;
  var kServiceWorkerHost_NavigateClient_Name = 1227242774;
  var kServiceWorkerHost_SkipWaiting_Name = 832064142;
  var kServiceWorkerHost_ClaimClients_Name = 352945372;

  function ServiceWorkerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerHost,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerHost, associatedInterfacePtrInfo);
  }

  ServiceWorkerHostAssociatedPtr.prototype =
      Object.create(ServiceWorkerHostPtr.prototype);
  ServiceWorkerHostAssociatedPtr.prototype.constructor =
      ServiceWorkerHostAssociatedPtr;

  function ServiceWorkerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerHostPtr.prototype.setCachedMetadata = function() {
    return ServiceWorkerHostProxy.prototype.setCachedMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.setCachedMetadata = function(url, data) {
    var params_ = new ServiceWorkerHost_SetCachedMetadata_Params();
    params_.url = url;
    params_.data = data;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerHost_SetCachedMetadata_Name,
        codec.align(ServiceWorkerHost_SetCachedMetadata_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerHost_SetCachedMetadata_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerHostPtr.prototype.clearCachedMetadata = function() {
    return ServiceWorkerHostProxy.prototype.clearCachedMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.clearCachedMetadata = function(url) {
    var params_ = new ServiceWorkerHost_ClearCachedMetadata_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerHost_ClearCachedMetadata_Name,
        codec.align(ServiceWorkerHost_ClearCachedMetadata_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerHost_ClearCachedMetadata_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerHostPtr.prototype.getClients = function() {
    return ServiceWorkerHostProxy.prototype.getClients
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.getClients = function(options) {
    var params_ = new ServiceWorkerHost_GetClients_Params();
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_GetClients_Name,
          codec.align(ServiceWorkerHost_GetClients_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_GetClients_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_GetClients_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.getClient = function() {
    return ServiceWorkerHostProxy.prototype.getClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.getClient = function(clientUuid) {
    var params_ = new ServiceWorkerHost_GetClient_Params();
    params_.clientUuid = clientUuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_GetClient_Name,
          codec.align(ServiceWorkerHost_GetClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_GetClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_GetClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.openNewTab = function() {
    return ServiceWorkerHostProxy.prototype.openNewTab
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.openNewTab = function(url) {
    var params_ = new ServiceWorkerHost_OpenNewTab_Params();
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_OpenNewTab_Name,
          codec.align(ServiceWorkerHost_OpenNewTab_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_OpenNewTab_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_OpenNewTab_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.openPaymentHandlerWindow = function() {
    return ServiceWorkerHostProxy.prototype.openPaymentHandlerWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.openPaymentHandlerWindow = function(url) {
    var params_ = new ServiceWorkerHost_OpenPaymentHandlerWindow_Params();
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_OpenPaymentHandlerWindow_Name,
          codec.align(ServiceWorkerHost_OpenPaymentHandlerWindow_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_OpenPaymentHandlerWindow_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.postMessageToClient = function() {
    return ServiceWorkerHostProxy.prototype.postMessageToClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.postMessageToClient = function(clientUuid, message) {
    var params_ = new ServiceWorkerHost_PostMessageToClient_Params();
    params_.clientUuid = clientUuid;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerHost_PostMessageToClient_Name,
        codec.align(ServiceWorkerHost_PostMessageToClient_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerHost_PostMessageToClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerHostPtr.prototype.focusClient = function() {
    return ServiceWorkerHostProxy.prototype.focusClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.focusClient = function(clientUuid) {
    var params_ = new ServiceWorkerHost_FocusClient_Params();
    params_.clientUuid = clientUuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_FocusClient_Name,
          codec.align(ServiceWorkerHost_FocusClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_FocusClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_FocusClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.navigateClient = function() {
    return ServiceWorkerHostProxy.prototype.navigateClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.navigateClient = function(clientUuid, url) {
    var params_ = new ServiceWorkerHost_NavigateClient_Params();
    params_.clientUuid = clientUuid;
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_NavigateClient_Name,
          codec.align(ServiceWorkerHost_NavigateClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_NavigateClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_NavigateClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.skipWaiting = function() {
    return ServiceWorkerHostProxy.prototype.skipWaiting
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.skipWaiting = function() {
    var params_ = new ServiceWorkerHost_SkipWaiting_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_SkipWaiting_Name,
          codec.align(ServiceWorkerHost_SkipWaiting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_SkipWaiting_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_SkipWaiting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerHostPtr.prototype.claimClients = function() {
    return ServiceWorkerHostProxy.prototype.claimClients
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerHostProxy.prototype.claimClients = function() {
    var params_ = new ServiceWorkerHost_ClaimClients_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerHost_ClaimClients_Name,
          codec.align(ServiceWorkerHost_ClaimClients_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerHost_ClaimClients_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerHost_ClaimClients_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ServiceWorkerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerHostStub.prototype.setCachedMetadata = function(url, data) {
    return this.delegate_ && this.delegate_.setCachedMetadata && this.delegate_.setCachedMetadata(url, data);
  }
  ServiceWorkerHostStub.prototype.clearCachedMetadata = function(url) {
    return this.delegate_ && this.delegate_.clearCachedMetadata && this.delegate_.clearCachedMetadata(url);
  }
  ServiceWorkerHostStub.prototype.getClients = function(options) {
    return this.delegate_ && this.delegate_.getClients && this.delegate_.getClients(options);
  }
  ServiceWorkerHostStub.prototype.getClient = function(clientUuid) {
    return this.delegate_ && this.delegate_.getClient && this.delegate_.getClient(clientUuid);
  }
  ServiceWorkerHostStub.prototype.openNewTab = function(url) {
    return this.delegate_ && this.delegate_.openNewTab && this.delegate_.openNewTab(url);
  }
  ServiceWorkerHostStub.prototype.openPaymentHandlerWindow = function(url) {
    return this.delegate_ && this.delegate_.openPaymentHandlerWindow && this.delegate_.openPaymentHandlerWindow(url);
  }
  ServiceWorkerHostStub.prototype.postMessageToClient = function(clientUuid, message) {
    return this.delegate_ && this.delegate_.postMessageToClient && this.delegate_.postMessageToClient(clientUuid, message);
  }
  ServiceWorkerHostStub.prototype.focusClient = function(clientUuid) {
    return this.delegate_ && this.delegate_.focusClient && this.delegate_.focusClient(clientUuid);
  }
  ServiceWorkerHostStub.prototype.navigateClient = function(clientUuid, url) {
    return this.delegate_ && this.delegate_.navigateClient && this.delegate_.navigateClient(clientUuid, url);
  }
  ServiceWorkerHostStub.prototype.skipWaiting = function() {
    return this.delegate_ && this.delegate_.skipWaiting && this.delegate_.skipWaiting();
  }
  ServiceWorkerHostStub.prototype.claimClients = function() {
    return this.delegate_ && this.delegate_.claimClients && this.delegate_.claimClients();
  }

  ServiceWorkerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerHost_SetCachedMetadata_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_SetCachedMetadata_Params);
      this.setCachedMetadata(params.url, params.data);
      return true;
    case kServiceWorkerHost_ClearCachedMetadata_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_ClearCachedMetadata_Params);
      this.clearCachedMetadata(params.url);
      return true;
    case kServiceWorkerHost_PostMessageToClient_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_PostMessageToClient_Params);
      this.postMessageToClient(params.clientUuid, params.message);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerHost_GetClients_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_GetClients_Params);
      this.getClients(params.options).then(function(response) {
        var responseParams =
            new ServiceWorkerHost_GetClients_ResponseParams();
        responseParams.clients = response.clients;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_GetClients_Name,
            codec.align(ServiceWorkerHost_GetClients_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_GetClients_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_GetClient_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_GetClient_Params);
      this.getClient(params.clientUuid).then(function(response) {
        var responseParams =
            new ServiceWorkerHost_GetClient_ResponseParams();
        responseParams.client = response.client;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_GetClient_Name,
            codec.align(ServiceWorkerHost_GetClient_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_GetClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_OpenNewTab_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_OpenNewTab_Params);
      this.openNewTab(params.url).then(function(response) {
        var responseParams =
            new ServiceWorkerHost_OpenNewTab_ResponseParams();
        responseParams.success = response.success;
        responseParams.client = response.client;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_OpenNewTab_Name,
            codec.align(ServiceWorkerHost_OpenNewTab_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_OpenNewTab_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_OpenPaymentHandlerWindow_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_OpenPaymentHandlerWindow_Params);
      this.openPaymentHandlerWindow(params.url).then(function(response) {
        var responseParams =
            new ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams();
        responseParams.success = response.success;
        responseParams.client = response.client;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_OpenPaymentHandlerWindow_Name,
            codec.align(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_FocusClient_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_FocusClient_Params);
      this.focusClient(params.clientUuid).then(function(response) {
        var responseParams =
            new ServiceWorkerHost_FocusClient_ResponseParams();
        responseParams.client = response.client;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_FocusClient_Name,
            codec.align(ServiceWorkerHost_FocusClient_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_FocusClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_NavigateClient_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_NavigateClient_Params);
      this.navigateClient(params.clientUuid, params.url).then(function(response) {
        var responseParams =
            new ServiceWorkerHost_NavigateClient_ResponseParams();
        responseParams.success = response.success;
        responseParams.client = response.client;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_NavigateClient_Name,
            codec.align(ServiceWorkerHost_NavigateClient_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_NavigateClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_SkipWaiting_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_SkipWaiting_Params);
      this.skipWaiting().then(function(response) {
        var responseParams =
            new ServiceWorkerHost_SkipWaiting_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_SkipWaiting_Name,
            codec.align(ServiceWorkerHost_SkipWaiting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_SkipWaiting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kServiceWorkerHost_ClaimClients_Name:
      var params = reader.decodeStruct(ServiceWorkerHost_ClaimClients_Params);
      this.claimClients().then(function(response) {
        var responseParams =
            new ServiceWorkerHost_ClaimClients_ResponseParams();
        responseParams.error = response.error;
        responseParams.errorMsg = response.errorMsg;
        var builder = new codec.MessageV1Builder(
            kServiceWorkerHost_ClaimClients_Name,
            codec.align(ServiceWorkerHost_ClaimClients_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerHost_ClaimClients_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceWorkerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerHost_SetCachedMetadata_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerHost_SetCachedMetadata_Params;
      break;
      case kServiceWorkerHost_ClearCachedMetadata_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerHost_ClearCachedMetadata_Params;
      break;
      case kServiceWorkerHost_GetClients_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_GetClients_Params;
      break;
      case kServiceWorkerHost_GetClient_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_GetClient_Params;
      break;
      case kServiceWorkerHost_OpenNewTab_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_OpenNewTab_Params;
      break;
      case kServiceWorkerHost_OpenPaymentHandlerWindow_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_OpenPaymentHandlerWindow_Params;
      break;
      case kServiceWorkerHost_PostMessageToClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerHost_PostMessageToClient_Params;
      break;
      case kServiceWorkerHost_FocusClient_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_FocusClient_Params;
      break;
      case kServiceWorkerHost_NavigateClient_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_NavigateClient_Params;
      break;
      case kServiceWorkerHost_SkipWaiting_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_SkipWaiting_Params;
      break;
      case kServiceWorkerHost_ClaimClients_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerHost_ClaimClients_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServiceWorkerHost_GetClients_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_GetClients_ResponseParams;
        break;
      case kServiceWorkerHost_GetClient_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_GetClient_ResponseParams;
        break;
      case kServiceWorkerHost_OpenNewTab_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_OpenNewTab_ResponseParams;
        break;
      case kServiceWorkerHost_OpenPaymentHandlerWindow_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams;
        break;
      case kServiceWorkerHost_FocusClient_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_FocusClient_ResponseParams;
        break;
      case kServiceWorkerHost_NavigateClient_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_NavigateClient_ResponseParams;
        break;
      case kServiceWorkerHost_SkipWaiting_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_SkipWaiting_ResponseParams;
        break;
      case kServiceWorkerHost_ClaimClients_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerHost_ClaimClients_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServiceWorkerHost = {
    name: 'blink.mojom.ServiceWorkerHost',
    kVersion: 0,
    ptrClass: ServiceWorkerHostPtr,
    proxyClass: ServiceWorkerHostProxy,
    stubClass: ServiceWorkerHostStub,
    validateRequest: validateServiceWorkerHostRequest,
    validateResponse: validateServiceWorkerHostResponse,
    mojomId: 'third_party/blink/public/mojom/service_worker/service_worker.mojom',
    fuzzMethods: {
      setCachedMetadata: {
        params: ServiceWorkerHost_SetCachedMetadata_Params,
      },
      clearCachedMetadata: {
        params: ServiceWorkerHost_ClearCachedMetadata_Params,
      },
      getClients: {
        params: ServiceWorkerHost_GetClients_Params,
      },
      getClient: {
        params: ServiceWorkerHost_GetClient_Params,
      },
      openNewTab: {
        params: ServiceWorkerHost_OpenNewTab_Params,
      },
      openPaymentHandlerWindow: {
        params: ServiceWorkerHost_OpenPaymentHandlerWindow_Params,
      },
      postMessageToClient: {
        params: ServiceWorkerHost_PostMessageToClient_Params,
      },
      focusClient: {
        params: ServiceWorkerHost_FocusClient_Params,
      },
      navigateClient: {
        params: ServiceWorkerHost_NavigateClient_Params,
      },
      skipWaiting: {
        params: ServiceWorkerHost_SkipWaiting_Params,
      },
      claimClients: {
        params: ServiceWorkerHost_ClaimClients_Params,
      },
    },
  };
  ServiceWorkerHostStub.prototype.validator = validateServiceWorkerHostRequest;
  ServiceWorkerHostProxy.prototype.validator = validateServiceWorkerHostResponse;
  exports.ServiceWorkerHost = ServiceWorkerHost;
  exports.ServiceWorkerHostPtr = ServiceWorkerHostPtr;
  exports.ServiceWorkerHostAssociatedPtr = ServiceWorkerHostAssociatedPtr;
})();