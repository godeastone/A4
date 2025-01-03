// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/storage_partition_service.mojom';
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
  var leveldb_wrapper$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/leveldb_wrapper.mojom', 'leveldb_wrapper.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../url/mojom/origin.mojom.js');
  }



  function SessionStorageNamespace_OpenArea_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SessionStorageNamespace_OpenArea_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.database = new associatedBindings.AssociatedInterfaceRequest();
  };
  SessionStorageNamespace_OpenArea_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SessionStorageNamespace_OpenArea_Params.generate = function(generator_) {
    var generated = new SessionStorageNamespace_OpenArea_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.database = generator_.generateAssociatedInterfaceRequest("content.mojom.LevelDBWrapper", false);
    return generated;
  };

  SessionStorageNamespace_OpenArea_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateAssociatedInterfaceRequest(this.database, "content.mojom.LevelDBWrapper", false);
    }
    return this;
  };
  SessionStorageNamespace_OpenArea_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.LevelDBWrapperAssociatedRequest"]);
    }
    return handles;
  };

  SessionStorageNamespace_OpenArea_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SessionStorageNamespace_OpenArea_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.database = handles[idx++];;
    return idx;
  };

  SessionStorageNamespace_OpenArea_Params.validate = function(messageValidator, offset) {
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


    // validate SessionStorageNamespace_OpenArea_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SessionStorageNamespace_OpenArea_Params.database
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SessionStorageNamespace_OpenArea_Params.encodedSize = codec.kStructHeaderSize + 16;

  SessionStorageNamespace_OpenArea_Params.decode = function(decoder) {
    var packed;
    var val = new SessionStorageNamespace_OpenArea_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.database = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SessionStorageNamespace_OpenArea_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SessionStorageNamespace_OpenArea_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.database);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SessionStorageNamespace_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SessionStorageNamespace_Clone_Params.prototype.initDefaults_ = function() {
    this.cloneToNamespace = null;
  };
  SessionStorageNamespace_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SessionStorageNamespace_Clone_Params.generate = function(generator_) {
    var generated = new SessionStorageNamespace_Clone_Params;
    generated.cloneToNamespace = generator_.generateString(false);
    return generated;
  };

  SessionStorageNamespace_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cloneToNamespace = mutator_.mutateString(this.cloneToNamespace, false);
    }
    return this;
  };
  SessionStorageNamespace_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SessionStorageNamespace_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SessionStorageNamespace_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SessionStorageNamespace_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate SessionStorageNamespace_Clone_Params.cloneToNamespace
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SessionStorageNamespace_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  SessionStorageNamespace_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new SessionStorageNamespace_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cloneToNamespace = decoder.decodeStruct(codec.String);
    return val;
  };

  SessionStorageNamespace_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SessionStorageNamespace_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.cloneToNamespace);
  };
  function StoragePartitionService_OpenLocalStorage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StoragePartitionService_OpenLocalStorage_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.database = new bindings.InterfaceRequest();
  };
  StoragePartitionService_OpenLocalStorage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StoragePartitionService_OpenLocalStorage_Params.generate = function(generator_) {
    var generated = new StoragePartitionService_OpenLocalStorage_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.database = generator_.generateInterfaceRequest("content.mojom.LevelDBWrapper", false);
    return generated;
  };

  StoragePartitionService_OpenLocalStorage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.database = mutator_.mutateInterfaceRequest(this.database, "content.mojom.LevelDBWrapper", false);
    }
    return this;
  };
  StoragePartitionService_OpenLocalStorage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.database !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.LevelDBWrapperRequest"]);
    }
    return handles;
  };

  StoragePartitionService_OpenLocalStorage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StoragePartitionService_OpenLocalStorage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.database = handles[idx++];;
    return idx;
  };

  StoragePartitionService_OpenLocalStorage_Params.validate = function(messageValidator, offset) {
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


    // validate StoragePartitionService_OpenLocalStorage_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StoragePartitionService_OpenLocalStorage_Params.database
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StoragePartitionService_OpenLocalStorage_Params.encodedSize = codec.kStructHeaderSize + 16;

  StoragePartitionService_OpenLocalStorage_Params.decode = function(decoder) {
    var packed;
    var val = new StoragePartitionService_OpenLocalStorage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.database = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  StoragePartitionService_OpenLocalStorage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StoragePartitionService_OpenLocalStorage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.InterfaceRequest, val.database);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function StoragePartitionService_OpenSessionStorage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StoragePartitionService_OpenSessionStorage_Params.prototype.initDefaults_ = function() {
    this.namespaceId = null;
    this.sessionNamespace = new bindings.InterfaceRequest();
  };
  StoragePartitionService_OpenSessionStorage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StoragePartitionService_OpenSessionStorage_Params.generate = function(generator_) {
    var generated = new StoragePartitionService_OpenSessionStorage_Params;
    generated.namespaceId = generator_.generateString(false);
    generated.sessionNamespace = generator_.generateInterfaceRequest("content.mojom.SessionStorageNamespace", false);
    return generated;
  };

  StoragePartitionService_OpenSessionStorage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.namespaceId = mutator_.mutateString(this.namespaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionNamespace = mutator_.mutateInterfaceRequest(this.sessionNamespace, "content.mojom.SessionStorageNamespace", false);
    }
    return this;
  };
  StoragePartitionService_OpenSessionStorage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sessionNamespace !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SessionStorageNamespaceRequest"]);
    }
    return handles;
  };

  StoragePartitionService_OpenSessionStorage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StoragePartitionService_OpenSessionStorage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sessionNamespace = handles[idx++];;
    return idx;
  };

  StoragePartitionService_OpenSessionStorage_Params.validate = function(messageValidator, offset) {
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


    // validate StoragePartitionService_OpenSessionStorage_Params.namespaceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate StoragePartitionService_OpenSessionStorage_Params.sessionNamespace
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StoragePartitionService_OpenSessionStorage_Params.encodedSize = codec.kStructHeaderSize + 16;

  StoragePartitionService_OpenSessionStorage_Params.decode = function(decoder) {
    var packed;
    var val = new StoragePartitionService_OpenSessionStorage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.namespaceId = decoder.decodeStruct(codec.String);
    val.sessionNamespace = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  StoragePartitionService_OpenSessionStorage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StoragePartitionService_OpenSessionStorage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.namespaceId);
    encoder.encodeStruct(codec.InterfaceRequest, val.sessionNamespace);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kSessionStorageNamespace_OpenArea_Name = 797546590;
  var kSessionStorageNamespace_Clone_Name = 1086706622;

  function SessionStorageNamespacePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SessionStorageNamespace,
                                                   handleOrPtrInfo);
  }

  function SessionStorageNamespaceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SessionStorageNamespace, associatedInterfacePtrInfo);
  }

  SessionStorageNamespaceAssociatedPtr.prototype =
      Object.create(SessionStorageNamespacePtr.prototype);
  SessionStorageNamespaceAssociatedPtr.prototype.constructor =
      SessionStorageNamespaceAssociatedPtr;

  function SessionStorageNamespaceProxy(receiver) {
    this.receiver_ = receiver;
  }
  SessionStorageNamespacePtr.prototype.openArea = function() {
    return SessionStorageNamespaceProxy.prototype.openArea
        .apply(this.ptr.getProxy(), arguments);
  };

  SessionStorageNamespaceProxy.prototype.openArea = function(origin, database) {
    var params_ = new SessionStorageNamespace_OpenArea_Params();
    params_.origin = origin;
    params_.database = database;
    var builder = new codec.MessageV2Builder(
        kSessionStorageNamespace_OpenArea_Name,
        codec.align(SessionStorageNamespace_OpenArea_Params.encodedSize));
    builder.setPayload(SessionStorageNamespace_OpenArea_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SessionStorageNamespacePtr.prototype.clone = function() {
    return SessionStorageNamespaceProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  SessionStorageNamespaceProxy.prototype.clone = function(cloneToNamespace) {
    var params_ = new SessionStorageNamespace_Clone_Params();
    params_.cloneToNamespace = cloneToNamespace;
    var builder = new codec.MessageV0Builder(
        kSessionStorageNamespace_Clone_Name,
        codec.align(SessionStorageNamespace_Clone_Params.encodedSize));
    builder.encodeStruct(SessionStorageNamespace_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SessionStorageNamespaceStub(delegate) {
    this.delegate_ = delegate;
  }
  SessionStorageNamespaceStub.prototype.openArea = function(origin, database) {
    return this.delegate_ && this.delegate_.openArea && this.delegate_.openArea(origin, database);
  }
  SessionStorageNamespaceStub.prototype.clone = function(cloneToNamespace) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(cloneToNamespace);
  }

  SessionStorageNamespaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSessionStorageNamespace_OpenArea_Name:
      var params = reader.decodeStruct(SessionStorageNamespace_OpenArea_Params);
      this.openArea(params.origin, params.database);
      return true;
    case kSessionStorageNamespace_Clone_Name:
      var params = reader.decodeStruct(SessionStorageNamespace_Clone_Params);
      this.clone(params.cloneToNamespace);
      return true;
    default:
      return false;
    }
  };

  SessionStorageNamespaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSessionStorageNamespaceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSessionStorageNamespace_OpenArea_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SessionStorageNamespace_OpenArea_Params;
      break;
      case kSessionStorageNamespace_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SessionStorageNamespace_Clone_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSessionStorageNamespaceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SessionStorageNamespace = {
    name: 'content.mojom.SessionStorageNamespace',
    kVersion: 0,
    ptrClass: SessionStorageNamespacePtr,
    proxyClass: SessionStorageNamespaceProxy,
    stubClass: SessionStorageNamespaceStub,
    validateRequest: validateSessionStorageNamespaceRequest,
    validateResponse: null,
    mojomId: 'content/common/storage_partition_service.mojom',
    fuzzMethods: {
      openArea: {
        params: SessionStorageNamespace_OpenArea_Params,
      },
      clone: {
        params: SessionStorageNamespace_Clone_Params,
      },
    },
  };
  SessionStorageNamespaceStub.prototype.validator = validateSessionStorageNamespaceRequest;
  SessionStorageNamespaceProxy.prototype.validator = null;
  var kStoragePartitionService_OpenLocalStorage_Name = 1839939109;
  var kStoragePartitionService_OpenSessionStorage_Name = 1202541363;

  function StoragePartitionServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(StoragePartitionService,
                                                   handleOrPtrInfo);
  }

  function StoragePartitionServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        StoragePartitionService, associatedInterfacePtrInfo);
  }

  StoragePartitionServiceAssociatedPtr.prototype =
      Object.create(StoragePartitionServicePtr.prototype);
  StoragePartitionServiceAssociatedPtr.prototype.constructor =
      StoragePartitionServiceAssociatedPtr;

  function StoragePartitionServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  StoragePartitionServicePtr.prototype.openLocalStorage = function() {
    return StoragePartitionServiceProxy.prototype.openLocalStorage
        .apply(this.ptr.getProxy(), arguments);
  };

  StoragePartitionServiceProxy.prototype.openLocalStorage = function(origin, database) {
    var params_ = new StoragePartitionService_OpenLocalStorage_Params();
    params_.origin = origin;
    params_.database = database;
    var builder = new codec.MessageV0Builder(
        kStoragePartitionService_OpenLocalStorage_Name,
        codec.align(StoragePartitionService_OpenLocalStorage_Params.encodedSize));
    builder.encodeStruct(StoragePartitionService_OpenLocalStorage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  StoragePartitionServicePtr.prototype.openSessionStorage = function() {
    return StoragePartitionServiceProxy.prototype.openSessionStorage
        .apply(this.ptr.getProxy(), arguments);
  };

  StoragePartitionServiceProxy.prototype.openSessionStorage = function(namespaceId, sessionNamespace) {
    var params_ = new StoragePartitionService_OpenSessionStorage_Params();
    params_.namespaceId = namespaceId;
    params_.sessionNamespace = sessionNamespace;
    var builder = new codec.MessageV0Builder(
        kStoragePartitionService_OpenSessionStorage_Name,
        codec.align(StoragePartitionService_OpenSessionStorage_Params.encodedSize));
    builder.encodeStruct(StoragePartitionService_OpenSessionStorage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function StoragePartitionServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  StoragePartitionServiceStub.prototype.openLocalStorage = function(origin, database) {
    return this.delegate_ && this.delegate_.openLocalStorage && this.delegate_.openLocalStorage(origin, database);
  }
  StoragePartitionServiceStub.prototype.openSessionStorage = function(namespaceId, sessionNamespace) {
    return this.delegate_ && this.delegate_.openSessionStorage && this.delegate_.openSessionStorage(namespaceId, sessionNamespace);
  }

  StoragePartitionServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStoragePartitionService_OpenLocalStorage_Name:
      var params = reader.decodeStruct(StoragePartitionService_OpenLocalStorage_Params);
      this.openLocalStorage(params.origin, params.database);
      return true;
    case kStoragePartitionService_OpenSessionStorage_Name:
      var params = reader.decodeStruct(StoragePartitionService_OpenSessionStorage_Params);
      this.openSessionStorage(params.namespaceId, params.sessionNamespace);
      return true;
    default:
      return false;
    }
  };

  StoragePartitionServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateStoragePartitionServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStoragePartitionService_OpenLocalStorage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StoragePartitionService_OpenLocalStorage_Params;
      break;
      case kStoragePartitionService_OpenSessionStorage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StoragePartitionService_OpenSessionStorage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStoragePartitionServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var StoragePartitionService = {
    name: 'content.mojom.StoragePartitionService',
    kVersion: 0,
    ptrClass: StoragePartitionServicePtr,
    proxyClass: StoragePartitionServiceProxy,
    stubClass: StoragePartitionServiceStub,
    validateRequest: validateStoragePartitionServiceRequest,
    validateResponse: null,
    mojomId: 'content/common/storage_partition_service.mojom',
    fuzzMethods: {
      openLocalStorage: {
        params: StoragePartitionService_OpenLocalStorage_Params,
      },
      openSessionStorage: {
        params: StoragePartitionService_OpenSessionStorage_Params,
      },
    },
  };
  StoragePartitionServiceStub.prototype.validator = validateStoragePartitionServiceRequest;
  StoragePartitionServiceProxy.prototype.validator = null;
  exports.SessionStorageNamespace = SessionStorageNamespace;
  exports.SessionStorageNamespacePtr = SessionStorageNamespacePtr;
  exports.SessionStorageNamespaceAssociatedPtr = SessionStorageNamespaceAssociatedPtr;
  exports.StoragePartitionService = StoragePartitionService;
  exports.StoragePartitionServicePtr = StoragePartitionServicePtr;
  exports.StoragePartitionServiceAssociatedPtr = StoragePartitionServiceAssociatedPtr;
})();