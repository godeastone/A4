// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/service_manager.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('serviceManager.mojom');
  var connector$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/connector.mojom', 'connector.mojom.js');
  }



  function RunningServiceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RunningServiceInfo.prototype.initDefaults_ = function() {
    this.id = 0;
    this.pid = 0;
    this.identity = null;
  };
  RunningServiceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RunningServiceInfo.generate = function(generator_) {
    var generated = new RunningServiceInfo;
    generated.id = generator_.generateUint32();
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.pid = generator_.generateUint32();
    return generated;
  };

  RunningServiceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateUint32(this.pid);
    }
    return this;
  };
  RunningServiceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RunningServiceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RunningServiceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RunningServiceInfo.validate = function(messageValidator, offset) {
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



    // validate RunningServiceInfo.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  RunningServiceInfo.encodedSize = codec.kStructHeaderSize + 16;

  RunningServiceInfo.decode = function(decoder) {
    var packed;
    var val = new RunningServiceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.pid = decoder.decodeStruct(codec.Uint32);
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  RunningServiceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RunningServiceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function ServiceManagerListener_OnInit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnInit_Params.prototype.initDefaults_ = function() {
    this.runningServices = null;
  };
  ServiceManagerListener_OnInit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManagerListener_OnInit_Params.generate = function(generator_) {
    var generated = new ServiceManagerListener_OnInit_Params;
    generated.runningServices = generator_.generateArray(function() {
      return generator_.generateStruct(serviceManager.mojom.RunningServiceInfo, false);
    });
    return generated;
  };

  ServiceManagerListener_OnInit_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.runningServices = mutator_.mutateArray(this.runningServices, function(val) {
        return mutator_.mutateStruct(serviceManager.mojom.RunningServiceInfo, false);
      });
    }
    return this;
  };
  ServiceManagerListener_OnInit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceManagerListener_OnInit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManagerListener_OnInit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceManagerListener_OnInit_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManagerListener_OnInit_Params.runningServices
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(RunningServiceInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnInit_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnInit_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnInit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.runningServices = decoder.decodeArrayPointer(new codec.PointerTo(RunningServiceInfo));
    return val;
  };

  ServiceManagerListener_OnInit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnInit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(RunningServiceInfo), val.runningServices);
  };
  function ServiceManagerListener_OnServiceCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceCreated_Params.prototype.initDefaults_ = function() {
    this.service = null;
  };
  ServiceManagerListener_OnServiceCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManagerListener_OnServiceCreated_Params.generate = function(generator_) {
    var generated = new ServiceManagerListener_OnServiceCreated_Params;
    generated.service = generator_.generateStruct(serviceManager.mojom.RunningServiceInfo, false);
    return generated;
  };

  ServiceManagerListener_OnServiceCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.service = mutator_.mutateStruct(serviceManager.mojom.RunningServiceInfo, false);
    }
    return this;
  };
  ServiceManagerListener_OnServiceCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceManagerListener_OnServiceCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManagerListener_OnServiceCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceManagerListener_OnServiceCreated_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManagerListener_OnServiceCreated_Params.service
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, RunningServiceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceCreated_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnServiceCreated_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStructPointer(RunningServiceInfo);
    return val;
  };

  ServiceManagerListener_OnServiceCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(RunningServiceInfo, val.service);
  };
  function ServiceManagerListener_OnServiceStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceStarted_Params.prototype.initDefaults_ = function() {
    this.identity = null;
    this.pid = 0;
  };
  ServiceManagerListener_OnServiceStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManagerListener_OnServiceStarted_Params.generate = function(generator_) {
    var generated = new ServiceManagerListener_OnServiceStarted_Params;
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.pid = generator_.generateUint32();
    return generated;
  };

  ServiceManagerListener_OnServiceStarted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateUint32(this.pid);
    }
    return this;
  };
  ServiceManagerListener_OnServiceStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceManagerListener_OnServiceStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManagerListener_OnServiceStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceManagerListener_OnServiceStarted_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManagerListener_OnServiceStarted_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceStarted_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceManagerListener_OnServiceStarted_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceManagerListener_OnServiceStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceManagerListener_OnServicePIDReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServicePIDReceived_Params.prototype.initDefaults_ = function() {
    this.identity = null;
    this.pid = 0;
  };
  ServiceManagerListener_OnServicePIDReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManagerListener_OnServicePIDReceived_Params.generate = function(generator_) {
    var generated = new ServiceManagerListener_OnServicePIDReceived_Params;
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.pid = generator_.generateUint32();
    return generated;
  };

  ServiceManagerListener_OnServicePIDReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateUint32(this.pid);
    }
    return this;
  };
  ServiceManagerListener_OnServicePIDReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceManagerListener_OnServicePIDReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManagerListener_OnServicePIDReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceManagerListener_OnServicePIDReceived_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManagerListener_OnServicePIDReceived_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServicePIDReceived_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceManagerListener_OnServicePIDReceived_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServicePIDReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceManagerListener_OnServicePIDReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServicePIDReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceManagerListener_OnServiceFailedToStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceFailedToStart_Params.prototype.initDefaults_ = function() {
    this.identity = null;
  };
  ServiceManagerListener_OnServiceFailedToStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManagerListener_OnServiceFailedToStart_Params.generate = function(generator_) {
    var generated = new ServiceManagerListener_OnServiceFailedToStart_Params;
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  ServiceManagerListener_OnServiceFailedToStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  ServiceManagerListener_OnServiceFailedToStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceManagerListener_OnServiceFailedToStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManagerListener_OnServiceFailedToStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceManagerListener_OnServiceFailedToStart_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManagerListener_OnServiceFailedToStart_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceFailedToStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnServiceFailedToStart_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceFailedToStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  ServiceManagerListener_OnServiceFailedToStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceFailedToStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function ServiceManagerListener_OnServiceStopped_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManagerListener_OnServiceStopped_Params.prototype.initDefaults_ = function() {
    this.identity = null;
  };
  ServiceManagerListener_OnServiceStopped_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManagerListener_OnServiceStopped_Params.generate = function(generator_) {
    var generated = new ServiceManagerListener_OnServiceStopped_Params;
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  ServiceManagerListener_OnServiceStopped_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  ServiceManagerListener_OnServiceStopped_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceManagerListener_OnServiceStopped_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManagerListener_OnServiceStopped_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceManagerListener_OnServiceStopped_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManagerListener_OnServiceStopped_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManagerListener_OnServiceStopped_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManagerListener_OnServiceStopped_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManagerListener_OnServiceStopped_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  ServiceManagerListener_OnServiceStopped_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManagerListener_OnServiceStopped_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function ServiceManager_AddListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceManager_AddListener_Params.prototype.initDefaults_ = function() {
    this.listener = new ServiceManagerListenerPtr();
  };
  ServiceManager_AddListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceManager_AddListener_Params.generate = function(generator_) {
    var generated = new ServiceManager_AddListener_Params;
    generated.listener = generator_.generateInterface("serviceManager.mojom.ServiceManagerListener", false);
    return generated;
  };

  ServiceManager_AddListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.listener = mutator_.mutateInterface(this.listener, "serviceManager.mojom.ServiceManagerListener", false);
    }
    return this;
  };
  ServiceManager_AddListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.listener !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.ServiceManagerListenerPtr"]);
    }
    return handles;
  };

  ServiceManager_AddListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceManager_AddListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.listener = handles[idx++];;
    return idx;
  };

  ServiceManager_AddListener_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceManager_AddListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceManager_AddListener_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceManager_AddListener_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceManager_AddListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.listener = decoder.decodeStruct(new codec.Interface(ServiceManagerListenerPtr));
    return val;
  };

  ServiceManager_AddListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceManager_AddListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(ServiceManagerListenerPtr), val.listener);
  };
  var kServiceManagerListener_OnInit_Name = 1443055873;
  var kServiceManagerListener_OnServiceCreated_Name = 1757796305;
  var kServiceManagerListener_OnServiceStarted_Name = 1440047778;
  var kServiceManagerListener_OnServicePIDReceived_Name = 564436935;
  var kServiceManagerListener_OnServiceFailedToStart_Name = 2034361328;
  var kServiceManagerListener_OnServiceStopped_Name = 766283001;

  function ServiceManagerListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceManagerListener,
                                                   handleOrPtrInfo);
  }

  function ServiceManagerListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceManagerListener, associatedInterfacePtrInfo);
  }

  ServiceManagerListenerAssociatedPtr.prototype =
      Object.create(ServiceManagerListenerPtr.prototype);
  ServiceManagerListenerAssociatedPtr.prototype.constructor =
      ServiceManagerListenerAssociatedPtr;

  function ServiceManagerListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceManagerListenerPtr.prototype.onInit = function() {
    return ServiceManagerListenerProxy.prototype.onInit
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerListenerProxy.prototype.onInit = function(runningServices) {
    var params_ = new ServiceManagerListener_OnInit_Params();
    params_.runningServices = runningServices;
    var builder = new codec.MessageV0Builder(
        kServiceManagerListener_OnInit_Name,
        codec.align(ServiceManagerListener_OnInit_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnInit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerPtr.prototype.onServiceCreated = function() {
    return ServiceManagerListenerProxy.prototype.onServiceCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerListenerProxy.prototype.onServiceCreated = function(service) {
    var params_ = new ServiceManagerListener_OnServiceCreated_Params();
    params_.service = service;
    var builder = new codec.MessageV0Builder(
        kServiceManagerListener_OnServiceCreated_Name,
        codec.align(ServiceManagerListener_OnServiceCreated_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerPtr.prototype.onServiceStarted = function() {
    return ServiceManagerListenerProxy.prototype.onServiceStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerListenerProxy.prototype.onServiceStarted = function(identity, pid) {
    var params_ = new ServiceManagerListener_OnServiceStarted_Params();
    params_.identity = identity;
    params_.pid = pid;
    var builder = new codec.MessageV0Builder(
        kServiceManagerListener_OnServiceStarted_Name,
        codec.align(ServiceManagerListener_OnServiceStarted_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerPtr.prototype.onServicePIDReceived = function() {
    return ServiceManagerListenerProxy.prototype.onServicePIDReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerListenerProxy.prototype.onServicePIDReceived = function(identity, pid) {
    var params_ = new ServiceManagerListener_OnServicePIDReceived_Params();
    params_.identity = identity;
    params_.pid = pid;
    var builder = new codec.MessageV0Builder(
        kServiceManagerListener_OnServicePIDReceived_Name,
        codec.align(ServiceManagerListener_OnServicePIDReceived_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServicePIDReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerPtr.prototype.onServiceFailedToStart = function() {
    return ServiceManagerListenerProxy.prototype.onServiceFailedToStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerListenerProxy.prototype.onServiceFailedToStart = function(identity) {
    var params_ = new ServiceManagerListener_OnServiceFailedToStart_Params();
    params_.identity = identity;
    var builder = new codec.MessageV0Builder(
        kServiceManagerListener_OnServiceFailedToStart_Name,
        codec.align(ServiceManagerListener_OnServiceFailedToStart_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceFailedToStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceManagerListenerPtr.prototype.onServiceStopped = function() {
    return ServiceManagerListenerProxy.prototype.onServiceStopped
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerListenerProxy.prototype.onServiceStopped = function(identity) {
    var params_ = new ServiceManagerListener_OnServiceStopped_Params();
    params_.identity = identity;
    var builder = new codec.MessageV0Builder(
        kServiceManagerListener_OnServiceStopped_Name,
        codec.align(ServiceManagerListener_OnServiceStopped_Params.encodedSize));
    builder.encodeStruct(ServiceManagerListener_OnServiceStopped_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceManagerListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceManagerListenerStub.prototype.onInit = function(runningServices) {
    return this.delegate_ && this.delegate_.onInit && this.delegate_.onInit(runningServices);
  }
  ServiceManagerListenerStub.prototype.onServiceCreated = function(service) {
    return this.delegate_ && this.delegate_.onServiceCreated && this.delegate_.onServiceCreated(service);
  }
  ServiceManagerListenerStub.prototype.onServiceStarted = function(identity, pid) {
    return this.delegate_ && this.delegate_.onServiceStarted && this.delegate_.onServiceStarted(identity, pid);
  }
  ServiceManagerListenerStub.prototype.onServicePIDReceived = function(identity, pid) {
    return this.delegate_ && this.delegate_.onServicePIDReceived && this.delegate_.onServicePIDReceived(identity, pid);
  }
  ServiceManagerListenerStub.prototype.onServiceFailedToStart = function(identity) {
    return this.delegate_ && this.delegate_.onServiceFailedToStart && this.delegate_.onServiceFailedToStart(identity);
  }
  ServiceManagerListenerStub.prototype.onServiceStopped = function(identity) {
    return this.delegate_ && this.delegate_.onServiceStopped && this.delegate_.onServiceStopped(identity);
  }

  ServiceManagerListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceManagerListener_OnInit_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnInit_Params);
      this.onInit(params.runningServices);
      return true;
    case kServiceManagerListener_OnServiceCreated_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceCreated_Params);
      this.onServiceCreated(params.service);
      return true;
    case kServiceManagerListener_OnServiceStarted_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceStarted_Params);
      this.onServiceStarted(params.identity, params.pid);
      return true;
    case kServiceManagerListener_OnServicePIDReceived_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServicePIDReceived_Params);
      this.onServicePIDReceived(params.identity, params.pid);
      return true;
    case kServiceManagerListener_OnServiceFailedToStart_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceFailedToStart_Params);
      this.onServiceFailedToStart(params.identity);
      return true;
    case kServiceManagerListener_OnServiceStopped_Name:
      var params = reader.decodeStruct(ServiceManagerListener_OnServiceStopped_Params);
      this.onServiceStopped(params.identity);
      return true;
    default:
      return false;
    }
  };

  ServiceManagerListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceManagerListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceManagerListener_OnInit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnInit_Params;
      break;
      case kServiceManagerListener_OnServiceCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceCreated_Params;
      break;
      case kServiceManagerListener_OnServiceStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceStarted_Params;
      break;
      case kServiceManagerListener_OnServicePIDReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServicePIDReceived_Params;
      break;
      case kServiceManagerListener_OnServiceFailedToStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceFailedToStart_Params;
      break;
      case kServiceManagerListener_OnServiceStopped_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManagerListener_OnServiceStopped_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceManagerListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceManagerListener = {
    name: 'service_manager.mojom.ServiceManagerListener',
    kVersion: 0,
    ptrClass: ServiceManagerListenerPtr,
    proxyClass: ServiceManagerListenerProxy,
    stubClass: ServiceManagerListenerStub,
    validateRequest: validateServiceManagerListenerRequest,
    validateResponse: null,
    mojomId: 'services/service_manager/public/mojom/service_manager.mojom',
    fuzzMethods: {
      onInit: {
        params: ServiceManagerListener_OnInit_Params,
      },
      onServiceCreated: {
        params: ServiceManagerListener_OnServiceCreated_Params,
      },
      onServiceStarted: {
        params: ServiceManagerListener_OnServiceStarted_Params,
      },
      onServicePIDReceived: {
        params: ServiceManagerListener_OnServicePIDReceived_Params,
      },
      onServiceFailedToStart: {
        params: ServiceManagerListener_OnServiceFailedToStart_Params,
      },
      onServiceStopped: {
        params: ServiceManagerListener_OnServiceStopped_Params,
      },
    },
  };
  ServiceManagerListenerStub.prototype.validator = validateServiceManagerListenerRequest;
  ServiceManagerListenerProxy.prototype.validator = null;
  var kServiceManager_AddListener_Name = 388783384;

  function ServiceManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceManager,
                                                   handleOrPtrInfo);
  }

  function ServiceManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceManager, associatedInterfacePtrInfo);
  }

  ServiceManagerAssociatedPtr.prototype =
      Object.create(ServiceManagerPtr.prototype);
  ServiceManagerAssociatedPtr.prototype.constructor =
      ServiceManagerAssociatedPtr;

  function ServiceManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceManagerPtr.prototype.addListener = function() {
    return ServiceManagerProxy.prototype.addListener
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceManagerProxy.prototype.addListener = function(listener) {
    var params_ = new ServiceManager_AddListener_Params();
    params_.listener = listener;
    var builder = new codec.MessageV0Builder(
        kServiceManager_AddListener_Name,
        codec.align(ServiceManager_AddListener_Params.encodedSize));
    builder.encodeStruct(ServiceManager_AddListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceManagerStub.prototype.addListener = function(listener) {
    return this.delegate_ && this.delegate_.addListener && this.delegate_.addListener(listener);
  }

  ServiceManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceManager_AddListener_Name:
      var params = reader.decodeStruct(ServiceManager_AddListener_Params);
      this.addListener(params.listener);
      return true;
    default:
      return false;
    }
  };

  ServiceManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceManager_AddListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceManager_AddListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceManagerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceManager = {
    name: 'service_manager.mojom.ServiceManager',
    kVersion: 0,
    ptrClass: ServiceManagerPtr,
    proxyClass: ServiceManagerProxy,
    stubClass: ServiceManagerStub,
    validateRequest: validateServiceManagerRequest,
    validateResponse: null,
    mojomId: 'services/service_manager/public/mojom/service_manager.mojom',
    fuzzMethods: {
      addListener: {
        params: ServiceManager_AddListener_Params,
      },
    },
  };
  ServiceManagerStub.prototype.validator = validateServiceManagerRequest;
  ServiceManagerProxy.prototype.validator = null;
  exports.RunningServiceInfo = RunningServiceInfo;
  exports.ServiceManagerListener = ServiceManagerListener;
  exports.ServiceManagerListenerPtr = ServiceManagerListenerPtr;
  exports.ServiceManagerListenerAssociatedPtr = ServiceManagerListenerAssociatedPtr;
  exports.ServiceManager = ServiceManager;
  exports.ServiceManagerPtr = ServiceManagerPtr;
  exports.ServiceManagerAssociatedPtr = ServiceManagerAssociatedPtr;
})();