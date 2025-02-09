// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/patch/public/interfaces/file_patcher.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('patch.mojom');
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../mojo/public/mojom/base/file.mojom.js');
  }



  function FilePatcher_PatchFileBsdiff_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilePatcher_PatchFileBsdiff_Params.prototype.initDefaults_ = function() {
    this.inputFile = null;
    this.patchFile = null;
    this.outputFile = null;
  };
  FilePatcher_PatchFileBsdiff_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilePatcher_PatchFileBsdiff_Params.generate = function(generator_) {
    var generated = new FilePatcher_PatchFileBsdiff_Params;
    generated.inputFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.patchFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.outputFile = generator_.generateStruct(mojoBase.mojom.File, false);
    return generated;
  };

  FilePatcher_PatchFileBsdiff_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.patchFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    return this;
  };
  FilePatcher_PatchFileBsdiff_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.inputFile !== null) {
      Array.prototype.push.apply(handles, this.inputFile.getHandleDeps());
    }
    if (this.patchFile !== null) {
      Array.prototype.push.apply(handles, this.patchFile.getHandleDeps());
    }
    if (this.outputFile !== null) {
      Array.prototype.push.apply(handles, this.outputFile.getHandleDeps());
    }
    return handles;
  };

  FilePatcher_PatchFileBsdiff_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilePatcher_PatchFileBsdiff_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.inputFile.setHandlesInternal_(handles, idx);
    idx = this.patchFile.setHandlesInternal_(handles, idx);
    idx = this.outputFile.setHandlesInternal_(handles, idx);
    return idx;
  };

  FilePatcher_PatchFileBsdiff_Params.validate = function(messageValidator, offset) {
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


    // validate FilePatcher_PatchFileBsdiff_Params.inputFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FilePatcher_PatchFileBsdiff_Params.patchFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FilePatcher_PatchFileBsdiff_Params.outputFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FilePatcher_PatchFileBsdiff_Params.encodedSize = codec.kStructHeaderSize + 24;

  FilePatcher_PatchFileBsdiff_Params.decode = function(decoder) {
    var packed;
    var val = new FilePatcher_PatchFileBsdiff_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputFile = decoder.decodeStructPointer(file$.File);
    val.patchFile = decoder.decodeStructPointer(file$.File);
    val.outputFile = decoder.decodeStructPointer(file$.File);
    return val;
  };

  FilePatcher_PatchFileBsdiff_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilePatcher_PatchFileBsdiff_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.inputFile);
    encoder.encodeStructPointer(file$.File, val.patchFile);
    encoder.encodeStructPointer(file$.File, val.outputFile);
  };
  function FilePatcher_PatchFileBsdiff_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilePatcher_PatchFileBsdiff_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  FilePatcher_PatchFileBsdiff_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilePatcher_PatchFileBsdiff_ResponseParams.generate = function(generator_) {
    var generated = new FilePatcher_PatchFileBsdiff_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  FilePatcher_PatchFileBsdiff_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  FilePatcher_PatchFileBsdiff_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FilePatcher_PatchFileBsdiff_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilePatcher_PatchFileBsdiff_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FilePatcher_PatchFileBsdiff_ResponseParams.validate = function(messageValidator, offset) {
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

  FilePatcher_PatchFileBsdiff_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FilePatcher_PatchFileBsdiff_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FilePatcher_PatchFileBsdiff_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FilePatcher_PatchFileBsdiff_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilePatcher_PatchFileBsdiff_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FilePatcher_PatchFileCourgette_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilePatcher_PatchFileCourgette_Params.prototype.initDefaults_ = function() {
    this.inputFile = null;
    this.patchFile = null;
    this.outputFile = null;
  };
  FilePatcher_PatchFileCourgette_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilePatcher_PatchFileCourgette_Params.generate = function(generator_) {
    var generated = new FilePatcher_PatchFileCourgette_Params;
    generated.inputFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.patchFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.outputFile = generator_.generateStruct(mojoBase.mojom.File, false);
    return generated;
  };

  FilePatcher_PatchFileCourgette_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.patchFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    return this;
  };
  FilePatcher_PatchFileCourgette_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.inputFile !== null) {
      Array.prototype.push.apply(handles, this.inputFile.getHandleDeps());
    }
    if (this.patchFile !== null) {
      Array.prototype.push.apply(handles, this.patchFile.getHandleDeps());
    }
    if (this.outputFile !== null) {
      Array.prototype.push.apply(handles, this.outputFile.getHandleDeps());
    }
    return handles;
  };

  FilePatcher_PatchFileCourgette_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilePatcher_PatchFileCourgette_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.inputFile.setHandlesInternal_(handles, idx);
    idx = this.patchFile.setHandlesInternal_(handles, idx);
    idx = this.outputFile.setHandlesInternal_(handles, idx);
    return idx;
  };

  FilePatcher_PatchFileCourgette_Params.validate = function(messageValidator, offset) {
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


    // validate FilePatcher_PatchFileCourgette_Params.inputFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FilePatcher_PatchFileCourgette_Params.patchFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FilePatcher_PatchFileCourgette_Params.outputFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FilePatcher_PatchFileCourgette_Params.encodedSize = codec.kStructHeaderSize + 24;

  FilePatcher_PatchFileCourgette_Params.decode = function(decoder) {
    var packed;
    var val = new FilePatcher_PatchFileCourgette_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.inputFile = decoder.decodeStructPointer(file$.File);
    val.patchFile = decoder.decodeStructPointer(file$.File);
    val.outputFile = decoder.decodeStructPointer(file$.File);
    return val;
  };

  FilePatcher_PatchFileCourgette_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilePatcher_PatchFileCourgette_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.inputFile);
    encoder.encodeStructPointer(file$.File, val.patchFile);
    encoder.encodeStructPointer(file$.File, val.outputFile);
  };
  function FilePatcher_PatchFileCourgette_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilePatcher_PatchFileCourgette_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  FilePatcher_PatchFileCourgette_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilePatcher_PatchFileCourgette_ResponseParams.generate = function(generator_) {
    var generated = new FilePatcher_PatchFileCourgette_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  FilePatcher_PatchFileCourgette_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  FilePatcher_PatchFileCourgette_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FilePatcher_PatchFileCourgette_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilePatcher_PatchFileCourgette_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FilePatcher_PatchFileCourgette_ResponseParams.validate = function(messageValidator, offset) {
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

  FilePatcher_PatchFileCourgette_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FilePatcher_PatchFileCourgette_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FilePatcher_PatchFileCourgette_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FilePatcher_PatchFileCourgette_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilePatcher_PatchFileCourgette_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kFilePatcher_PatchFileBsdiff_Name = 2109217512;
  var kFilePatcher_PatchFileCourgette_Name = 1984167195;

  function FilePatcherPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FilePatcher,
                                                   handleOrPtrInfo);
  }

  function FilePatcherAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FilePatcher, associatedInterfacePtrInfo);
  }

  FilePatcherAssociatedPtr.prototype =
      Object.create(FilePatcherPtr.prototype);
  FilePatcherAssociatedPtr.prototype.constructor =
      FilePatcherAssociatedPtr;

  function FilePatcherProxy(receiver) {
    this.receiver_ = receiver;
  }
  FilePatcherPtr.prototype.patchFileBsdiff = function() {
    return FilePatcherProxy.prototype.patchFileBsdiff
        .apply(this.ptr.getProxy(), arguments);
  };

  FilePatcherProxy.prototype.patchFileBsdiff = function(inputFile, patchFile, outputFile) {
    var params_ = new FilePatcher_PatchFileBsdiff_Params();
    params_.inputFile = inputFile;
    params_.patchFile = patchFile;
    params_.outputFile = outputFile;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFilePatcher_PatchFileBsdiff_Name,
          codec.align(FilePatcher_PatchFileBsdiff_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FilePatcher_PatchFileBsdiff_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FilePatcher_PatchFileBsdiff_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePatcherPtr.prototype.patchFileCourgette = function() {
    return FilePatcherProxy.prototype.patchFileCourgette
        .apply(this.ptr.getProxy(), arguments);
  };

  FilePatcherProxy.prototype.patchFileCourgette = function(inputFile, patchFile, outputFile) {
    var params_ = new FilePatcher_PatchFileCourgette_Params();
    params_.inputFile = inputFile;
    params_.patchFile = patchFile;
    params_.outputFile = outputFile;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFilePatcher_PatchFileCourgette_Name,
          codec.align(FilePatcher_PatchFileCourgette_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FilePatcher_PatchFileCourgette_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FilePatcher_PatchFileCourgette_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FilePatcherStub(delegate) {
    this.delegate_ = delegate;
  }
  FilePatcherStub.prototype.patchFileBsdiff = function(inputFile, patchFile, outputFile) {
    return this.delegate_ && this.delegate_.patchFileBsdiff && this.delegate_.patchFileBsdiff(inputFile, patchFile, outputFile);
  }
  FilePatcherStub.prototype.patchFileCourgette = function(inputFile, patchFile, outputFile) {
    return this.delegate_ && this.delegate_.patchFileCourgette && this.delegate_.patchFileCourgette(inputFile, patchFile, outputFile);
  }

  FilePatcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FilePatcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFilePatcher_PatchFileBsdiff_Name:
      var params = reader.decodeStruct(FilePatcher_PatchFileBsdiff_Params);
      this.patchFileBsdiff(params.inputFile, params.patchFile, params.outputFile).then(function(response) {
        var responseParams =
            new FilePatcher_PatchFileBsdiff_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kFilePatcher_PatchFileBsdiff_Name,
            codec.align(FilePatcher_PatchFileBsdiff_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FilePatcher_PatchFileBsdiff_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFilePatcher_PatchFileCourgette_Name:
      var params = reader.decodeStruct(FilePatcher_PatchFileCourgette_Params);
      this.patchFileCourgette(params.inputFile, params.patchFile, params.outputFile).then(function(response) {
        var responseParams =
            new FilePatcher_PatchFileCourgette_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kFilePatcher_PatchFileCourgette_Name,
            codec.align(FilePatcher_PatchFileCourgette_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FilePatcher_PatchFileCourgette_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFilePatcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFilePatcher_PatchFileBsdiff_Name:
        if (message.expectsResponse())
          paramsClass = FilePatcher_PatchFileBsdiff_Params;
      break;
      case kFilePatcher_PatchFileCourgette_Name:
        if (message.expectsResponse())
          paramsClass = FilePatcher_PatchFileCourgette_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFilePatcherResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFilePatcher_PatchFileBsdiff_Name:
        if (message.isResponse())
          paramsClass = FilePatcher_PatchFileBsdiff_ResponseParams;
        break;
      case kFilePatcher_PatchFileCourgette_Name:
        if (message.isResponse())
          paramsClass = FilePatcher_PatchFileCourgette_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FilePatcher = {
    name: 'patch.mojom.FilePatcher',
    kVersion: 0,
    ptrClass: FilePatcherPtr,
    proxyClass: FilePatcherProxy,
    stubClass: FilePatcherStub,
    validateRequest: validateFilePatcherRequest,
    validateResponse: validateFilePatcherResponse,
    mojomId: 'components/services/patch/public/interfaces/file_patcher.mojom',
    fuzzMethods: {
      patchFileBsdiff: {
        params: FilePatcher_PatchFileBsdiff_Params,
      },
      patchFileCourgette: {
        params: FilePatcher_PatchFileCourgette_Params,
      },
    },
  };
  FilePatcherStub.prototype.validator = validateFilePatcherRequest;
  FilePatcherProxy.prototype.validator = validateFilePatcherResponse;
  exports.FilePatcher = FilePatcher;
  exports.FilePatcherPtr = FilePatcherPtr;
  exports.FilePatcherAssociatedPtr = FilePatcherAssociatedPtr;
})();