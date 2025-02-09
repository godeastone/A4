// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../../mojo/public/mojom/base/file_path.mojom.js');
  }



  function RemovableStorageWriter_Write_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemovableStorageWriter_Write_Params.prototype.initDefaults_ = function() {
    this.source = null;
    this.target = null;
    this.client = new RemovableStorageWriterClientPtr();
  };
  RemovableStorageWriter_Write_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemovableStorageWriter_Write_Params.generate = function(generator_) {
    var generated = new RemovableStorageWriter_Write_Params;
    generated.source = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.target = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.client = generator_.generateInterface("chrome.mojom.RemovableStorageWriterClient", false);
    return generated;
  };

  RemovableStorageWriter_Write_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "chrome.mojom.RemovableStorageWriterClient", false);
    }
    return this;
  };
  RemovableStorageWriter_Write_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.RemovableStorageWriterClientPtr"]);
    }
    return handles;
  };

  RemovableStorageWriter_Write_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemovableStorageWriter_Write_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  RemovableStorageWriter_Write_Params.validate = function(messageValidator, offset) {
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


    // validate RemovableStorageWriter_Write_Params.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RemovableStorageWriter_Write_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RemovableStorageWriter_Write_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemovableStorageWriter_Write_Params.encodedSize = codec.kStructHeaderSize + 24;

  RemovableStorageWriter_Write_Params.decode = function(decoder) {
    var packed;
    var val = new RemovableStorageWriter_Write_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStructPointer(file_path$.FilePath);
    val.target = decoder.decodeStructPointer(file_path$.FilePath);
    val.client = decoder.decodeStruct(new codec.Interface(RemovableStorageWriterClientPtr));
    return val;
  };

  RemovableStorageWriter_Write_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemovableStorageWriter_Write_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.source);
    encoder.encodeStructPointer(file_path$.FilePath, val.target);
    encoder.encodeStruct(new codec.Interface(RemovableStorageWriterClientPtr), val.client);
  };
  function RemovableStorageWriter_Verify_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemovableStorageWriter_Verify_Params.prototype.initDefaults_ = function() {
    this.source = null;
    this.target = null;
    this.client = new RemovableStorageWriterClientPtr();
  };
  RemovableStorageWriter_Verify_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemovableStorageWriter_Verify_Params.generate = function(generator_) {
    var generated = new RemovableStorageWriter_Verify_Params;
    generated.source = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.target = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.client = generator_.generateInterface("chrome.mojom.RemovableStorageWriterClient", false);
    return generated;
  };

  RemovableStorageWriter_Verify_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "chrome.mojom.RemovableStorageWriterClient", false);
    }
    return this;
  };
  RemovableStorageWriter_Verify_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.RemovableStorageWriterClientPtr"]);
    }
    return handles;
  };

  RemovableStorageWriter_Verify_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemovableStorageWriter_Verify_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  RemovableStorageWriter_Verify_Params.validate = function(messageValidator, offset) {
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


    // validate RemovableStorageWriter_Verify_Params.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RemovableStorageWriter_Verify_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RemovableStorageWriter_Verify_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemovableStorageWriter_Verify_Params.encodedSize = codec.kStructHeaderSize + 24;

  RemovableStorageWriter_Verify_Params.decode = function(decoder) {
    var packed;
    var val = new RemovableStorageWriter_Verify_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStructPointer(file_path$.FilePath);
    val.target = decoder.decodeStructPointer(file_path$.FilePath);
    val.client = decoder.decodeStruct(new codec.Interface(RemovableStorageWriterClientPtr));
    return val;
  };

  RemovableStorageWriter_Verify_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemovableStorageWriter_Verify_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.source);
    encoder.encodeStructPointer(file_path$.FilePath, val.target);
    encoder.encodeStruct(new codec.Interface(RemovableStorageWriterClientPtr), val.client);
  };
  function RemovableStorageWriterClient_Progress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemovableStorageWriterClient_Progress_Params.prototype.initDefaults_ = function() {
    this.progress = 0;
  };
  RemovableStorageWriterClient_Progress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemovableStorageWriterClient_Progress_Params.generate = function(generator_) {
    var generated = new RemovableStorageWriterClient_Progress_Params;
    generated.progress = generator_.generateInt64();
    return generated;
  };

  RemovableStorageWriterClient_Progress_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.progress = mutator_.mutateInt64(this.progress);
    }
    return this;
  };
  RemovableStorageWriterClient_Progress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemovableStorageWriterClient_Progress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemovableStorageWriterClient_Progress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemovableStorageWriterClient_Progress_Params.validate = function(messageValidator, offset) {
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

  RemovableStorageWriterClient_Progress_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemovableStorageWriterClient_Progress_Params.decode = function(decoder) {
    var packed;
    var val = new RemovableStorageWriterClient_Progress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.progress = decoder.decodeStruct(codec.Int64);
    return val;
  };

  RemovableStorageWriterClient_Progress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemovableStorageWriterClient_Progress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.progress);
  };
  function RemovableStorageWriterClient_Complete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RemovableStorageWriterClient_Complete_Params.prototype.initDefaults_ = function() {
    this.error = null;
  };
  RemovableStorageWriterClient_Complete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RemovableStorageWriterClient_Complete_Params.generate = function(generator_) {
    var generated = new RemovableStorageWriterClient_Complete_Params;
    generated.error = generator_.generateString(true);
    return generated;
  };

  RemovableStorageWriterClient_Complete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, true);
    }
    return this;
  };
  RemovableStorageWriterClient_Complete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RemovableStorageWriterClient_Complete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RemovableStorageWriterClient_Complete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RemovableStorageWriterClient_Complete_Params.validate = function(messageValidator, offset) {
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


    // validate RemovableStorageWriterClient_Complete_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RemovableStorageWriterClient_Complete_Params.encodedSize = codec.kStructHeaderSize + 8;

  RemovableStorageWriterClient_Complete_Params.decode = function(decoder) {
    var packed;
    var val = new RemovableStorageWriterClient_Complete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  RemovableStorageWriterClient_Complete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RemovableStorageWriterClient_Complete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.error);
  };
  var kRemovableStorageWriter_Write_Name = 1295217357;
  var kRemovableStorageWriter_Verify_Name = 1098032172;

  function RemovableStorageWriterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RemovableStorageWriter,
                                                   handleOrPtrInfo);
  }

  function RemovableStorageWriterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RemovableStorageWriter, associatedInterfacePtrInfo);
  }

  RemovableStorageWriterAssociatedPtr.prototype =
      Object.create(RemovableStorageWriterPtr.prototype);
  RemovableStorageWriterAssociatedPtr.prototype.constructor =
      RemovableStorageWriterAssociatedPtr;

  function RemovableStorageWriterProxy(receiver) {
    this.receiver_ = receiver;
  }
  RemovableStorageWriterPtr.prototype.write = function() {
    return RemovableStorageWriterProxy.prototype.write
        .apply(this.ptr.getProxy(), arguments);
  };

  RemovableStorageWriterProxy.prototype.write = function(source, target, client) {
    var params_ = new RemovableStorageWriter_Write_Params();
    params_.source = source;
    params_.target = target;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kRemovableStorageWriter_Write_Name,
        codec.align(RemovableStorageWriter_Write_Params.encodedSize));
    builder.encodeStruct(RemovableStorageWriter_Write_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemovableStorageWriterPtr.prototype.verify = function() {
    return RemovableStorageWriterProxy.prototype.verify
        .apply(this.ptr.getProxy(), arguments);
  };

  RemovableStorageWriterProxy.prototype.verify = function(source, target, client) {
    var params_ = new RemovableStorageWriter_Verify_Params();
    params_.source = source;
    params_.target = target;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kRemovableStorageWriter_Verify_Name,
        codec.align(RemovableStorageWriter_Verify_Params.encodedSize));
    builder.encodeStruct(RemovableStorageWriter_Verify_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RemovableStorageWriterStub(delegate) {
    this.delegate_ = delegate;
  }
  RemovableStorageWriterStub.prototype.write = function(source, target, client) {
    return this.delegate_ && this.delegate_.write && this.delegate_.write(source, target, client);
  }
  RemovableStorageWriterStub.prototype.verify = function(source, target, client) {
    return this.delegate_ && this.delegate_.verify && this.delegate_.verify(source, target, client);
  }

  RemovableStorageWriterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemovableStorageWriter_Write_Name:
      var params = reader.decodeStruct(RemovableStorageWriter_Write_Params);
      this.write(params.source, params.target, params.client);
      return true;
    case kRemovableStorageWriter_Verify_Name:
      var params = reader.decodeStruct(RemovableStorageWriter_Verify_Params);
      this.verify(params.source, params.target, params.client);
      return true;
    default:
      return false;
    }
  };

  RemovableStorageWriterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRemovableStorageWriterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRemovableStorageWriter_Write_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemovableStorageWriter_Write_Params;
      break;
      case kRemovableStorageWriter_Verify_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemovableStorageWriter_Verify_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRemovableStorageWriterResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RemovableStorageWriter = {
    name: 'chrome.mojom.RemovableStorageWriter',
    kVersion: 0,
    ptrClass: RemovableStorageWriterPtr,
    proxyClass: RemovableStorageWriterProxy,
    stubClass: RemovableStorageWriterStub,
    validateRequest: validateRemovableStorageWriterRequest,
    validateResponse: null,
    mojomId: 'chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom',
    fuzzMethods: {
      write: {
        params: RemovableStorageWriter_Write_Params,
      },
      verify: {
        params: RemovableStorageWriter_Verify_Params,
      },
    },
  };
  RemovableStorageWriter.kTestDevice = "chrome://test-removable-storage-writer",
  RemovableStorageWriterStub.prototype.validator = validateRemovableStorageWriterRequest;
  RemovableStorageWriterProxy.prototype.validator = null;
  var kRemovableStorageWriterClient_Progress_Name = 1287574613;
  var kRemovableStorageWriterClient_Complete_Name = 307416964;

  function RemovableStorageWriterClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RemovableStorageWriterClient,
                                                   handleOrPtrInfo);
  }

  function RemovableStorageWriterClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RemovableStorageWriterClient, associatedInterfacePtrInfo);
  }

  RemovableStorageWriterClientAssociatedPtr.prototype =
      Object.create(RemovableStorageWriterClientPtr.prototype);
  RemovableStorageWriterClientAssociatedPtr.prototype.constructor =
      RemovableStorageWriterClientAssociatedPtr;

  function RemovableStorageWriterClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  RemovableStorageWriterClientPtr.prototype.progress = function() {
    return RemovableStorageWriterClientProxy.prototype.progress
        .apply(this.ptr.getProxy(), arguments);
  };

  RemovableStorageWriterClientProxy.prototype.progress = function(progress) {
    var params_ = new RemovableStorageWriterClient_Progress_Params();
    params_.progress = progress;
    var builder = new codec.MessageV0Builder(
        kRemovableStorageWriterClient_Progress_Name,
        codec.align(RemovableStorageWriterClient_Progress_Params.encodedSize));
    builder.encodeStruct(RemovableStorageWriterClient_Progress_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RemovableStorageWriterClientPtr.prototype.complete = function() {
    return RemovableStorageWriterClientProxy.prototype.complete
        .apply(this.ptr.getProxy(), arguments);
  };

  RemovableStorageWriterClientProxy.prototype.complete = function(error) {
    var params_ = new RemovableStorageWriterClient_Complete_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kRemovableStorageWriterClient_Complete_Name,
        codec.align(RemovableStorageWriterClient_Complete_Params.encodedSize));
    builder.encodeStruct(RemovableStorageWriterClient_Complete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RemovableStorageWriterClientStub(delegate) {
    this.delegate_ = delegate;
  }
  RemovableStorageWriterClientStub.prototype.progress = function(progress) {
    return this.delegate_ && this.delegate_.progress && this.delegate_.progress(progress);
  }
  RemovableStorageWriterClientStub.prototype.complete = function(error) {
    return this.delegate_ && this.delegate_.complete && this.delegate_.complete(error);
  }

  RemovableStorageWriterClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRemovableStorageWriterClient_Progress_Name:
      var params = reader.decodeStruct(RemovableStorageWriterClient_Progress_Params);
      this.progress(params.progress);
      return true;
    case kRemovableStorageWriterClient_Complete_Name:
      var params = reader.decodeStruct(RemovableStorageWriterClient_Complete_Params);
      this.complete(params.error);
      return true;
    default:
      return false;
    }
  };

  RemovableStorageWriterClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRemovableStorageWriterClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRemovableStorageWriterClient_Progress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemovableStorageWriterClient_Progress_Params;
      break;
      case kRemovableStorageWriterClient_Complete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RemovableStorageWriterClient_Complete_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRemovableStorageWriterClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RemovableStorageWriterClient = {
    name: 'chrome.mojom.RemovableStorageWriterClient',
    kVersion: 0,
    ptrClass: RemovableStorageWriterClientPtr,
    proxyClass: RemovableStorageWriterClientProxy,
    stubClass: RemovableStorageWriterClientStub,
    validateRequest: validateRemovableStorageWriterClientRequest,
    validateResponse: null,
    mojomId: 'chrome/services/removable_storage_writer/public/mojom/removable_storage_writer.mojom',
    fuzzMethods: {
      progress: {
        params: RemovableStorageWriterClient_Progress_Params,
      },
      complete: {
        params: RemovableStorageWriterClient_Complete_Params,
      },
    },
  };
  RemovableStorageWriterClientStub.prototype.validator = validateRemovableStorageWriterClientRequest;
  RemovableStorageWriterClientProxy.prototype.validator = null;
  exports.RemovableStorageWriter = RemovableStorageWriter;
  exports.RemovableStorageWriterPtr = RemovableStorageWriterPtr;
  exports.RemovableStorageWriterAssociatedPtr = RemovableStorageWriterAssociatedPtr;
  exports.RemovableStorageWriterClient = RemovableStorageWriterClient;
  exports.RemovableStorageWriterClientPtr = RemovableStorageWriterClientPtr;
  exports.RemovableStorageWriterClientAssociatedPtr = RemovableStorageWriterClientAssociatedPtr;
})();