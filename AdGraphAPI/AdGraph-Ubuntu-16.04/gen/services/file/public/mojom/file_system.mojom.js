// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/file/public/mojom/file_system.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('file.mojom');
  var directory$ =
      mojo.internal.exposeNamespace('filesystem.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/filesystem/public/interfaces/directory.mojom', '../../../../components/services/filesystem/public/interfaces/directory.mojom.js');
  }
  var file_error$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_error.mojom', '../../../../mojo/public/mojom/base/file_error.mojom.js');
  }



  function FileSystem_GetDirectory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileSystem_GetDirectory_Params.prototype.initDefaults_ = function() {
    this.dir = new bindings.InterfaceRequest();
  };
  FileSystem_GetDirectory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileSystem_GetDirectory_Params.generate = function(generator_) {
    var generated = new FileSystem_GetDirectory_Params;
    generated.dir = generator_.generateInterfaceRequest("filesystem.mojom.Directory", false);
    return generated;
  };

  FileSystem_GetDirectory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dir = mutator_.mutateInterfaceRequest(this.dir, "filesystem.mojom.Directory", false);
    }
    return this;
  };
  FileSystem_GetDirectory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dir !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryRequest"]);
    }
    return handles;
  };

  FileSystem_GetDirectory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileSystem_GetDirectory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.dir = handles[idx++];;
    return idx;
  };

  FileSystem_GetDirectory_Params.validate = function(messageValidator, offset) {
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


    // validate FileSystem_GetDirectory_Params.dir
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileSystem_GetDirectory_Params.encodedSize = codec.kStructHeaderSize + 8;

  FileSystem_GetDirectory_Params.decode = function(decoder) {
    var packed;
    var val = new FileSystem_GetDirectory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dir = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FileSystem_GetDirectory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileSystem_GetDirectory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.dir);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FileSystem_GetDirectory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileSystem_GetDirectory_ResponseParams.prototype.initDefaults_ = function() {
  };
  FileSystem_GetDirectory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileSystem_GetDirectory_ResponseParams.generate = function(generator_) {
    var generated = new FileSystem_GetDirectory_ResponseParams;
    return generated;
  };

  FileSystem_GetDirectory_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  FileSystem_GetDirectory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileSystem_GetDirectory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileSystem_GetDirectory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileSystem_GetDirectory_ResponseParams.validate = function(messageValidator, offset) {
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

  FileSystem_GetDirectory_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  FileSystem_GetDirectory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FileSystem_GetDirectory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FileSystem_GetDirectory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileSystem_GetDirectory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function FileSystem_GetSubDirectory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileSystem_GetSubDirectory_Params.prototype.initDefaults_ = function() {
    this.dirPath = null;
    this.dir = new bindings.InterfaceRequest();
  };
  FileSystem_GetSubDirectory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileSystem_GetSubDirectory_Params.generate = function(generator_) {
    var generated = new FileSystem_GetSubDirectory_Params;
    generated.dirPath = generator_.generateString(false);
    generated.dir = generator_.generateInterfaceRequest("filesystem.mojom.Directory", false);
    return generated;
  };

  FileSystem_GetSubDirectory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dirPath = mutator_.mutateString(this.dirPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dir = mutator_.mutateInterfaceRequest(this.dir, "filesystem.mojom.Directory", false);
    }
    return this;
  };
  FileSystem_GetSubDirectory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dir !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryRequest"]);
    }
    return handles;
  };

  FileSystem_GetSubDirectory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileSystem_GetSubDirectory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.dir = handles[idx++];;
    return idx;
  };

  FileSystem_GetSubDirectory_Params.validate = function(messageValidator, offset) {
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


    // validate FileSystem_GetSubDirectory_Params.dirPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileSystem_GetSubDirectory_Params.dir
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileSystem_GetSubDirectory_Params.encodedSize = codec.kStructHeaderSize + 16;

  FileSystem_GetSubDirectory_Params.decode = function(decoder) {
    var packed;
    var val = new FileSystem_GetSubDirectory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dirPath = decoder.decodeStruct(codec.String);
    val.dir = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FileSystem_GetSubDirectory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileSystem_GetSubDirectory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.dirPath);
    encoder.encodeStruct(codec.InterfaceRequest, val.dir);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FileSystem_GetSubDirectory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileSystem_GetSubDirectory_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
  };
  FileSystem_GetSubDirectory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileSystem_GetSubDirectory_ResponseParams.generate = function(generator_) {
    var generated = new FileSystem_GetSubDirectory_ResponseParams;
    generated.err = generator_.generateEnum(0, 0);
    return generated;
  };

  FileSystem_GetSubDirectory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.err = mutator_.mutateEnum(this.err, 0, 0);
    }
    return this;
  };
  FileSystem_GetSubDirectory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileSystem_GetSubDirectory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileSystem_GetSubDirectory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileSystem_GetSubDirectory_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FileSystem_GetSubDirectory_ResponseParams.err
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileSystem_GetSubDirectory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FileSystem_GetSubDirectory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FileSystem_GetSubDirectory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FileSystem_GetSubDirectory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileSystem_GetSubDirectory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kFileSystem_GetDirectory_Name = 1260550802;
  var kFileSystem_GetSubDirectory_Name = 378302921;

  function FileSystemPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FileSystem,
                                                   handleOrPtrInfo);
  }

  function FileSystemAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FileSystem, associatedInterfacePtrInfo);
  }

  FileSystemAssociatedPtr.prototype =
      Object.create(FileSystemPtr.prototype);
  FileSystemAssociatedPtr.prototype.constructor =
      FileSystemAssociatedPtr;

  function FileSystemProxy(receiver) {
    this.receiver_ = receiver;
  }
  FileSystemPtr.prototype.getDirectory = function() {
    return FileSystemProxy.prototype.getDirectory
        .apply(this.ptr.getProxy(), arguments);
  };

  FileSystemProxy.prototype.getDirectory = function(dir) {
    var params_ = new FileSystem_GetDirectory_Params();
    params_.dir = dir;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFileSystem_GetDirectory_Name,
          codec.align(FileSystem_GetDirectory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FileSystem_GetDirectory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FileSystem_GetDirectory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FileSystemPtr.prototype.getSubDirectory = function() {
    return FileSystemProxy.prototype.getSubDirectory
        .apply(this.ptr.getProxy(), arguments);
  };

  FileSystemProxy.prototype.getSubDirectory = function(dirPath, dir) {
    var params_ = new FileSystem_GetSubDirectory_Params();
    params_.dirPath = dirPath;
    params_.dir = dir;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFileSystem_GetSubDirectory_Name,
          codec.align(FileSystem_GetSubDirectory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FileSystem_GetSubDirectory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FileSystem_GetSubDirectory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FileSystemStub(delegate) {
    this.delegate_ = delegate;
  }
  FileSystemStub.prototype.getDirectory = function(dir) {
    return this.delegate_ && this.delegate_.getDirectory && this.delegate_.getDirectory(dir);
  }
  FileSystemStub.prototype.getSubDirectory = function(dirPath, dir) {
    return this.delegate_ && this.delegate_.getSubDirectory && this.delegate_.getSubDirectory(dirPath, dir);
  }

  FileSystemStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FileSystemStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFileSystem_GetDirectory_Name:
      var params = reader.decodeStruct(FileSystem_GetDirectory_Params);
      this.getDirectory(params.dir).then(function(response) {
        var responseParams =
            new FileSystem_GetDirectory_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kFileSystem_GetDirectory_Name,
            codec.align(FileSystem_GetDirectory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FileSystem_GetDirectory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFileSystem_GetSubDirectory_Name:
      var params = reader.decodeStruct(FileSystem_GetSubDirectory_Params);
      this.getSubDirectory(params.dirPath, params.dir).then(function(response) {
        var responseParams =
            new FileSystem_GetSubDirectory_ResponseParams();
        responseParams.err = response.err;
        var builder = new codec.MessageV1Builder(
            kFileSystem_GetSubDirectory_Name,
            codec.align(FileSystem_GetSubDirectory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FileSystem_GetSubDirectory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFileSystemRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFileSystem_GetDirectory_Name:
        if (message.expectsResponse())
          paramsClass = FileSystem_GetDirectory_Params;
      break;
      case kFileSystem_GetSubDirectory_Name:
        if (message.expectsResponse())
          paramsClass = FileSystem_GetSubDirectory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFileSystemResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFileSystem_GetDirectory_Name:
        if (message.isResponse())
          paramsClass = FileSystem_GetDirectory_ResponseParams;
        break;
      case kFileSystem_GetSubDirectory_Name:
        if (message.isResponse())
          paramsClass = FileSystem_GetSubDirectory_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FileSystem = {
    name: 'file.mojom.FileSystem',
    kVersion: 0,
    ptrClass: FileSystemPtr,
    proxyClass: FileSystemProxy,
    stubClass: FileSystemStub,
    validateRequest: validateFileSystemRequest,
    validateResponse: validateFileSystemResponse,
    mojomId: 'services/file/public/mojom/file_system.mojom',
    fuzzMethods: {
      getDirectory: {
        params: FileSystem_GetDirectory_Params,
      },
      getSubDirectory: {
        params: FileSystem_GetSubDirectory_Params,
      },
    },
  };
  FileSystemStub.prototype.validator = validateFileSystemRequest;
  FileSystemProxy.prototype.validator = validateFileSystemResponse;
  exports.FileSystem = FileSystem;
  exports.FileSystemPtr = FileSystemPtr;
  exports.FileSystemAssociatedPtr = FileSystemAssociatedPtr;
})();