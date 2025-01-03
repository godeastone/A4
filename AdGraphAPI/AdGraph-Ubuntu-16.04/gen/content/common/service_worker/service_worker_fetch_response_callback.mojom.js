// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/service_worker_fetch_response_callback.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', '../../../third_party/blink/public/mojom/blob/blob.mojom.js');
  }
  var service_worker_stream_handle$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom.js');
  }



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
  function ServiceWorkerFetchResponseCallback_OnResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.dispatchEventTime = null;
  };
  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerFetchResponseCallback_OnResponse_Params.generate = function(generator_) {
    var generated = new ServiceWorkerFetchResponseCallback_OnResponse_Params;
    generated.response = generator_.generateStruct(content.mojom.ServiceWorkerResponse, false);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(content.mojom.ServiceWorkerResponse, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnResponse_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ServiceWorkerResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponse_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerFetchResponseCallback_OnResponse_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(ServiceWorkerResponse);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ServiceWorkerResponse, val.response);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerFetchResponseCallback_OnResponseBlob_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.bodyAsBlob = new blob$.BlobPtr();
    this.dispatchEventTime = null;
  };
  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.generate = function(generator_) {
    var generated = new ServiceWorkerFetchResponseCallback_OnResponseBlob_Params;
    generated.response = generator_.generateStruct(content.mojom.ServiceWorkerResponse, false);
    generated.bodyAsBlob = generator_.generateInterface("blink.mojom.Blob", false);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(content.mojom.ServiceWorkerResponse, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bodyAsBlob = mutator_.mutateInterface(this.bodyAsBlob, "blink.mojom.Blob", false);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bodyAsBlob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobPtr"]);
    }
    return handles;
  };

  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.bodyAsBlob = handles[idx++];;
    return idx;
  };

  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ServiceWorkerResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.bodyAsBlob
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponseBlob_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(ServiceWorkerResponse);
    val.bodyAsBlob = decoder.decodeStruct(new codec.Interface(blob$.BlobPtr));
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ServiceWorkerResponse, val.response);
    encoder.encodeStruct(new codec.Interface(blob$.BlobPtr), val.bodyAsBlob);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.dispatchEventTime = null;
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.generate = function(generator_) {
    var generated = new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params;
    generated.response = generator_.generateStruct(content.mojom.ServiceWorkerResponse, false);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(content.mojom.ServiceWorkerResponse, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ServiceWorkerResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(ServiceWorkerResponse);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ServiceWorkerResponse, val.response);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.prototype.initDefaults_ = function() {
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.generate = function(generator_) {
    var generated = new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams;
    return generated;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.validate = function(messageValidator, offset) {
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

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function ServiceWorkerFetchResponseCallback_OnResponseStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.bodyAsStream = null;
    this.dispatchEventTime = null;
  };
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.generate = function(generator_) {
    var generated = new ServiceWorkerFetchResponseCallback_OnResponseStream_Params;
    generated.response = generator_.generateStruct(content.mojom.ServiceWorkerResponse, false);
    generated.bodyAsStream = generator_.generateStruct(blink.mojom.ServiceWorkerStreamHandle, false);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(content.mojom.ServiceWorkerResponse, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bodyAsStream = mutator_.mutateStruct(blink.mojom.ServiceWorkerStreamHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bodyAsStream !== null) {
      Array.prototype.push.apply(handles, this.bodyAsStream.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bodyAsStream.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnResponseStream_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ServiceWorkerResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseStream_Params.bodyAsStream
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_stream_handle$.ServiceWorkerStreamHandle, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseStream_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponseStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(ServiceWorkerResponse);
    val.bodyAsStream = decoder.decodeStructPointer(service_worker_stream_handle$.ServiceWorkerStreamHandle);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ServiceWorkerResponse, val.response);
    encoder.encodeStructPointer(service_worker_stream_handle$.ServiceWorkerStreamHandle, val.bodyAsStream);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ServiceWorkerFetchResponseCallback_OnFallback_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.initDefaults_ = function() {
    this.dispatchEventTime = null;
  };
  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerFetchResponseCallback_OnFallback_Params.generate = function(generator_) {
    var generated = new ServiceWorkerFetchResponseCallback_OnFallback_Params;
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnFallback_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerFetchResponseCallback_OnFallback_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnFallback_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnFallback_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  var kServiceWorkerFetchResponseCallback_OnResponse_Name = 453336324;
  var kServiceWorkerFetchResponseCallback_OnResponseBlob_Name = 1433495083;
  var kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name = 1765342305;
  var kServiceWorkerFetchResponseCallback_OnResponseStream_Name = 1777608001;
  var kServiceWorkerFetchResponseCallback_OnFallback_Name = 1865068214;

  function ServiceWorkerFetchResponseCallbackPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerFetchResponseCallback,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerFetchResponseCallbackAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerFetchResponseCallback, associatedInterfacePtrInfo);
  }

  ServiceWorkerFetchResponseCallbackAssociatedPtr.prototype =
      Object.create(ServiceWorkerFetchResponseCallbackPtr.prototype);
  ServiceWorkerFetchResponseCallbackAssociatedPtr.prototype.constructor =
      ServiceWorkerFetchResponseCallbackAssociatedPtr;

  function ServiceWorkerFetchResponseCallbackProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerFetchResponseCallbackPtr.prototype.onResponse = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onResponse = function(response, dispatchEventTime) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnResponse_Params();
    params_.response = response;
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnResponse_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnResponse_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerFetchResponseCallbackPtr.prototype.onResponseBlob = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseBlob
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseBlob = function(response, bodyAsBlob, dispatchEventTime) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnResponseBlob_Params();
    params_.response = response;
    params_.bodyAsBlob = bodyAsBlob;
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnResponseBlob_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerFetchResponseCallbackPtr.prototype.onResponseLegacyBlob = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseLegacyBlob
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseLegacyBlob = function(response, dispatchEventTime) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params();
    params_.response = response;
    params_.dispatchEventTime = dispatchEventTime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name,
          codec.align(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServiceWorkerFetchResponseCallbackPtr.prototype.onResponseStream = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseStream
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseStream = function(response, bodyAsStream, dispatchEventTime) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnResponseStream_Params();
    params_.response = response;
    params_.bodyAsStream = bodyAsStream;
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnResponseStream_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponseStream_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerFetchResponseCallbackPtr.prototype.onFallback = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onFallback
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onFallback = function(dispatchEventTime) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnFallback_Params();
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnFallback_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnFallback_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnFallback_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerFetchResponseCallbackStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onResponse = function(response, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponse && this.delegate_.onResponse(response, dispatchEventTime);
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onResponseBlob = function(response, bodyAsBlob, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponseBlob && this.delegate_.onResponseBlob(response, bodyAsBlob, dispatchEventTime);
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onResponseLegacyBlob = function(response, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponseLegacyBlob && this.delegate_.onResponseLegacyBlob(response, dispatchEventTime);
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onResponseStream = function(response, bodyAsStream, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponseStream && this.delegate_.onResponseStream(response, bodyAsStream, dispatchEventTime);
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onFallback = function(dispatchEventTime) {
    return this.delegate_ && this.delegate_.onFallback && this.delegate_.onFallback(dispatchEventTime);
  }

  ServiceWorkerFetchResponseCallbackStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerFetchResponseCallback_OnResponse_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponse_Params);
      this.onResponse(params.response, params.dispatchEventTime);
      return true;
    case kServiceWorkerFetchResponseCallback_OnResponseBlob_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponseBlob_Params);
      this.onResponseBlob(params.response, params.bodyAsBlob, params.dispatchEventTime);
      return true;
    case kServiceWorkerFetchResponseCallback_OnResponseStream_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponseStream_Params);
      this.onResponseStream(params.response, params.bodyAsStream, params.dispatchEventTime);
      return true;
    case kServiceWorkerFetchResponseCallback_OnFallback_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnFallback_Params);
      this.onFallback(params.dispatchEventTime);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerFetchResponseCallbackStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params);
      this.onResponseLegacyBlob(params.response, params.dispatchEventTime).then(function(response) {
        var responseParams =
            new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name,
            codec.align(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceWorkerFetchResponseCallbackRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerFetchResponseCallback_OnResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponse_Params;
      break;
      case kServiceWorkerFetchResponseCallback_OnResponseBlob_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponseBlob_Params;
      break;
      case kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name:
        if (message.expectsResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params;
      break;
      case kServiceWorkerFetchResponseCallback_OnResponseStream_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponseStream_Params;
      break;
      case kServiceWorkerFetchResponseCallback_OnFallback_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnFallback_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerFetchResponseCallbackResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name:
        if (message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ServiceWorkerFetchResponseCallback = {
    name: 'content.mojom.ServiceWorkerFetchResponseCallback',
    kVersion: 0,
    ptrClass: ServiceWorkerFetchResponseCallbackPtr,
    proxyClass: ServiceWorkerFetchResponseCallbackProxy,
    stubClass: ServiceWorkerFetchResponseCallbackStub,
    validateRequest: validateServiceWorkerFetchResponseCallbackRequest,
    validateResponse: validateServiceWorkerFetchResponseCallbackResponse,
    mojomId: 'content/common/service_worker/service_worker_fetch_response_callback.mojom',
    fuzzMethods: {
      onResponse: {
        params: ServiceWorkerFetchResponseCallback_OnResponse_Params,
      },
      onResponseBlob: {
        params: ServiceWorkerFetchResponseCallback_OnResponseBlob_Params,
      },
      onResponseLegacyBlob: {
        params: ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params,
      },
      onResponseStream: {
        params: ServiceWorkerFetchResponseCallback_OnResponseStream_Params,
      },
      onFallback: {
        params: ServiceWorkerFetchResponseCallback_OnFallback_Params,
      },
    },
  };
  ServiceWorkerFetchResponseCallbackStub.prototype.validator = validateServiceWorkerFetchResponseCallbackRequest;
  ServiceWorkerFetchResponseCallbackProxy.prototype.validator = validateServiceWorkerFetchResponseCallbackResponse;
  exports.ServiceWorkerResponse = ServiceWorkerResponse;
  exports.ServiceWorkerFetchResponseCallback = ServiceWorkerFetchResponseCallback;
  exports.ServiceWorkerFetchResponseCallbackPtr = ServiceWorkerFetchResponseCallbackPtr;
  exports.ServiceWorkerFetchResponseCallbackAssociatedPtr = ServiceWorkerFetchResponseCallbackAssociatedPtr;
})();