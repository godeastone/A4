// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/unzip/public/interfaces/unzipper.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('unzip.mojom');
  var directory$ =
      mojo.internal.exposeNamespace('filesystem.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/filesystem/public/interfaces/directory.mojom', '../../../filesystem/public/interfaces/directory.mojom.js');
  }
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../../mojo/public/mojom/base/file_path.mojom.js');
  }



  function UnzipFilter_ShouldUnzipFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UnzipFilter_ShouldUnzipFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  UnzipFilter_ShouldUnzipFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UnzipFilter_ShouldUnzipFile_Params.generate = function(generator_) {
    var generated = new UnzipFilter_ShouldUnzipFile_Params;
    generated.path = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    return generated;
  };

  UnzipFilter_ShouldUnzipFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    return this;
  };
  UnzipFilter_ShouldUnzipFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UnzipFilter_ShouldUnzipFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UnzipFilter_ShouldUnzipFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UnzipFilter_ShouldUnzipFile_Params.validate = function(messageValidator, offset) {
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


    // validate UnzipFilter_ShouldUnzipFile_Params.path
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UnzipFilter_ShouldUnzipFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  UnzipFilter_ShouldUnzipFile_Params.decode = function(decoder) {
    var packed;
    var val = new UnzipFilter_ShouldUnzipFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStructPointer(file_path$.FilePath);
    return val;
  };

  UnzipFilter_ShouldUnzipFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UnzipFilter_ShouldUnzipFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.path);
  };
  function UnzipFilter_ShouldUnzipFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UnzipFilter_ShouldUnzipFile_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  UnzipFilter_ShouldUnzipFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UnzipFilter_ShouldUnzipFile_ResponseParams.generate = function(generator_) {
    var generated = new UnzipFilter_ShouldUnzipFile_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  UnzipFilter_ShouldUnzipFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  UnzipFilter_ShouldUnzipFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UnzipFilter_ShouldUnzipFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UnzipFilter_ShouldUnzipFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UnzipFilter_ShouldUnzipFile_ResponseParams.validate = function(messageValidator, offset) {
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

  UnzipFilter_ShouldUnzipFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UnzipFilter_ShouldUnzipFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UnzipFilter_ShouldUnzipFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UnzipFilter_ShouldUnzipFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UnzipFilter_ShouldUnzipFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Unzipper_Unzip_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Unzipper_Unzip_Params.prototype.initDefaults_ = function() {
    this.zipFile = null;
    this.outputDir = new directory$.DirectoryPtr();
  };
  Unzipper_Unzip_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Unzipper_Unzip_Params.generate = function(generator_) {
    var generated = new Unzipper_Unzip_Params;
    generated.zipFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.outputDir = generator_.generateInterface("filesystem.mojom.Directory", false);
    return generated;
  };

  Unzipper_Unzip_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.zipFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputDir = mutator_.mutateInterface(this.outputDir, "filesystem.mojom.Directory", false);
    }
    return this;
  };
  Unzipper_Unzip_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.zipFile !== null) {
      Array.prototype.push.apply(handles, this.zipFile.getHandleDeps());
    }
    if (this.outputDir !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryPtr"]);
    }
    return handles;
  };

  Unzipper_Unzip_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Unzipper_Unzip_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.zipFile.setHandlesInternal_(handles, idx);
    this.outputDir = handles[idx++];;
    return idx;
  };

  Unzipper_Unzip_Params.validate = function(messageValidator, offset) {
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


    // validate Unzipper_Unzip_Params.zipFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Unzipper_Unzip_Params.outputDir
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Unzipper_Unzip_Params.encodedSize = codec.kStructHeaderSize + 16;

  Unzipper_Unzip_Params.decode = function(decoder) {
    var packed;
    var val = new Unzipper_Unzip_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.zipFile = decoder.decodeStructPointer(file$.File);
    val.outputDir = decoder.decodeStruct(new codec.Interface(directory$.DirectoryPtr));
    return val;
  };

  Unzipper_Unzip_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Unzipper_Unzip_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.zipFile);
    encoder.encodeStruct(new codec.Interface(directory$.DirectoryPtr), val.outputDir);
  };
  function Unzipper_Unzip_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Unzipper_Unzip_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  Unzipper_Unzip_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Unzipper_Unzip_ResponseParams.generate = function(generator_) {
    var generated = new Unzipper_Unzip_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  Unzipper_Unzip_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  Unzipper_Unzip_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Unzipper_Unzip_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Unzipper_Unzip_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Unzipper_Unzip_ResponseParams.validate = function(messageValidator, offset) {
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

  Unzipper_Unzip_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Unzipper_Unzip_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Unzipper_Unzip_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Unzipper_Unzip_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Unzipper_Unzip_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Unzipper_UnzipWithFilter_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Unzipper_UnzipWithFilter_Params.prototype.initDefaults_ = function() {
    this.zipFile = null;
    this.outputDir = new directory$.DirectoryPtr();
    this.filter = new UnzipFilterPtr();
  };
  Unzipper_UnzipWithFilter_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Unzipper_UnzipWithFilter_Params.generate = function(generator_) {
    var generated = new Unzipper_UnzipWithFilter_Params;
    generated.zipFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.outputDir = generator_.generateInterface("filesystem.mojom.Directory", false);
    generated.filter = generator_.generateInterface("unzip.mojom.UnzipFilter", false);
    return generated;
  };

  Unzipper_UnzipWithFilter_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.zipFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputDir = mutator_.mutateInterface(this.outputDir, "filesystem.mojom.Directory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateInterface(this.filter, "unzip.mojom.UnzipFilter", false);
    }
    return this;
  };
  Unzipper_UnzipWithFilter_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.zipFile !== null) {
      Array.prototype.push.apply(handles, this.zipFile.getHandleDeps());
    }
    if (this.outputDir !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryPtr"]);
    }
    if (this.filter !== null) {
      Array.prototype.push.apply(handles, ["unzip.mojom.UnzipFilterPtr"]);
    }
    return handles;
  };

  Unzipper_UnzipWithFilter_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Unzipper_UnzipWithFilter_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.zipFile.setHandlesInternal_(handles, idx);
    this.outputDir = handles[idx++];;
    this.filter = handles[idx++];;
    return idx;
  };

  Unzipper_UnzipWithFilter_Params.validate = function(messageValidator, offset) {
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


    // validate Unzipper_UnzipWithFilter_Params.zipFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Unzipper_UnzipWithFilter_Params.outputDir
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Unzipper_UnzipWithFilter_Params.filter
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Unzipper_UnzipWithFilter_Params.encodedSize = codec.kStructHeaderSize + 24;

  Unzipper_UnzipWithFilter_Params.decode = function(decoder) {
    var packed;
    var val = new Unzipper_UnzipWithFilter_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.zipFile = decoder.decodeStructPointer(file$.File);
    val.outputDir = decoder.decodeStruct(new codec.Interface(directory$.DirectoryPtr));
    val.filter = decoder.decodeStruct(new codec.Interface(UnzipFilterPtr));
    return val;
  };

  Unzipper_UnzipWithFilter_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Unzipper_UnzipWithFilter_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.zipFile);
    encoder.encodeStruct(new codec.Interface(directory$.DirectoryPtr), val.outputDir);
    encoder.encodeStruct(new codec.Interface(UnzipFilterPtr), val.filter);
  };
  function Unzipper_UnzipWithFilter_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Unzipper_UnzipWithFilter_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  Unzipper_UnzipWithFilter_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Unzipper_UnzipWithFilter_ResponseParams.generate = function(generator_) {
    var generated = new Unzipper_UnzipWithFilter_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  Unzipper_UnzipWithFilter_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  Unzipper_UnzipWithFilter_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Unzipper_UnzipWithFilter_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Unzipper_UnzipWithFilter_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Unzipper_UnzipWithFilter_ResponseParams.validate = function(messageValidator, offset) {
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

  Unzipper_UnzipWithFilter_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Unzipper_UnzipWithFilter_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Unzipper_UnzipWithFilter_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Unzipper_UnzipWithFilter_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Unzipper_UnzipWithFilter_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kUnzipFilter_ShouldUnzipFile_Name = 78654926;

  function UnzipFilterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UnzipFilter,
                                                   handleOrPtrInfo);
  }

  function UnzipFilterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UnzipFilter, associatedInterfacePtrInfo);
  }

  UnzipFilterAssociatedPtr.prototype =
      Object.create(UnzipFilterPtr.prototype);
  UnzipFilterAssociatedPtr.prototype.constructor =
      UnzipFilterAssociatedPtr;

  function UnzipFilterProxy(receiver) {
    this.receiver_ = receiver;
  }
  UnzipFilterPtr.prototype.shouldUnzipFile = function() {
    return UnzipFilterProxy.prototype.shouldUnzipFile
        .apply(this.ptr.getProxy(), arguments);
  };

  UnzipFilterProxy.prototype.shouldUnzipFile = function(path) {
    var params_ = new UnzipFilter_ShouldUnzipFile_Params();
    params_.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUnzipFilter_ShouldUnzipFile_Name,
          codec.align(UnzipFilter_ShouldUnzipFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UnzipFilter_ShouldUnzipFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UnzipFilter_ShouldUnzipFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UnzipFilterStub(delegate) {
    this.delegate_ = delegate;
  }
  UnzipFilterStub.prototype.shouldUnzipFile = function(path) {
    return this.delegate_ && this.delegate_.shouldUnzipFile && this.delegate_.shouldUnzipFile(path);
  }

  UnzipFilterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  UnzipFilterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUnzipFilter_ShouldUnzipFile_Name:
      var params = reader.decodeStruct(UnzipFilter_ShouldUnzipFile_Params);
      this.shouldUnzipFile(params.path).then(function(response) {
        var responseParams =
            new UnzipFilter_ShouldUnzipFile_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUnzipFilter_ShouldUnzipFile_Name,
            codec.align(UnzipFilter_ShouldUnzipFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UnzipFilter_ShouldUnzipFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateUnzipFilterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUnzipFilter_ShouldUnzipFile_Name:
        if (message.expectsResponse())
          paramsClass = UnzipFilter_ShouldUnzipFile_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUnzipFilterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUnzipFilter_ShouldUnzipFile_Name:
        if (message.isResponse())
          paramsClass = UnzipFilter_ShouldUnzipFile_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var UnzipFilter = {
    name: 'unzip.mojom.UnzipFilter',
    kVersion: 0,
    ptrClass: UnzipFilterPtr,
    proxyClass: UnzipFilterProxy,
    stubClass: UnzipFilterStub,
    validateRequest: validateUnzipFilterRequest,
    validateResponse: validateUnzipFilterResponse,
    mojomId: 'components/services/unzip/public/interfaces/unzipper.mojom',
    fuzzMethods: {
      shouldUnzipFile: {
        params: UnzipFilter_ShouldUnzipFile_Params,
      },
    },
  };
  UnzipFilterStub.prototype.validator = validateUnzipFilterRequest;
  UnzipFilterProxy.prototype.validator = validateUnzipFilterResponse;
  var kUnzipper_Unzip_Name = 271520874;
  var kUnzipper_UnzipWithFilter_Name = 1106889541;

  function UnzipperPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Unzipper,
                                                   handleOrPtrInfo);
  }

  function UnzipperAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Unzipper, associatedInterfacePtrInfo);
  }

  UnzipperAssociatedPtr.prototype =
      Object.create(UnzipperPtr.prototype);
  UnzipperAssociatedPtr.prototype.constructor =
      UnzipperAssociatedPtr;

  function UnzipperProxy(receiver) {
    this.receiver_ = receiver;
  }
  UnzipperPtr.prototype.unzip = function() {
    return UnzipperProxy.prototype.unzip
        .apply(this.ptr.getProxy(), arguments);
  };

  UnzipperProxy.prototype.unzip = function(zipFile, outputDir) {
    var params_ = new Unzipper_Unzip_Params();
    params_.zipFile = zipFile;
    params_.outputDir = outputDir;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUnzipper_Unzip_Name,
          codec.align(Unzipper_Unzip_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Unzipper_Unzip_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Unzipper_Unzip_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UnzipperPtr.prototype.unzipWithFilter = function() {
    return UnzipperProxy.prototype.unzipWithFilter
        .apply(this.ptr.getProxy(), arguments);
  };

  UnzipperProxy.prototype.unzipWithFilter = function(zipFile, outputDir, filter) {
    var params_ = new Unzipper_UnzipWithFilter_Params();
    params_.zipFile = zipFile;
    params_.outputDir = outputDir;
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUnzipper_UnzipWithFilter_Name,
          codec.align(Unzipper_UnzipWithFilter_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Unzipper_UnzipWithFilter_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Unzipper_UnzipWithFilter_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UnzipperStub(delegate) {
    this.delegate_ = delegate;
  }
  UnzipperStub.prototype.unzip = function(zipFile, outputDir) {
    return this.delegate_ && this.delegate_.unzip && this.delegate_.unzip(zipFile, outputDir);
  }
  UnzipperStub.prototype.unzipWithFilter = function(zipFile, outputDir, filter) {
    return this.delegate_ && this.delegate_.unzipWithFilter && this.delegate_.unzipWithFilter(zipFile, outputDir, filter);
  }

  UnzipperStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  UnzipperStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUnzipper_Unzip_Name:
      var params = reader.decodeStruct(Unzipper_Unzip_Params);
      this.unzip(params.zipFile, params.outputDir).then(function(response) {
        var responseParams =
            new Unzipper_Unzip_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUnzipper_Unzip_Name,
            codec.align(Unzipper_Unzip_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Unzipper_Unzip_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUnzipper_UnzipWithFilter_Name:
      var params = reader.decodeStruct(Unzipper_UnzipWithFilter_Params);
      this.unzipWithFilter(params.zipFile, params.outputDir, params.filter).then(function(response) {
        var responseParams =
            new Unzipper_UnzipWithFilter_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUnzipper_UnzipWithFilter_Name,
            codec.align(Unzipper_UnzipWithFilter_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Unzipper_UnzipWithFilter_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateUnzipperRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUnzipper_Unzip_Name:
        if (message.expectsResponse())
          paramsClass = Unzipper_Unzip_Params;
      break;
      case kUnzipper_UnzipWithFilter_Name:
        if (message.expectsResponse())
          paramsClass = Unzipper_UnzipWithFilter_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUnzipperResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUnzipper_Unzip_Name:
        if (message.isResponse())
          paramsClass = Unzipper_Unzip_ResponseParams;
        break;
      case kUnzipper_UnzipWithFilter_Name:
        if (message.isResponse())
          paramsClass = Unzipper_UnzipWithFilter_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Unzipper = {
    name: 'unzip.mojom.Unzipper',
    kVersion: 0,
    ptrClass: UnzipperPtr,
    proxyClass: UnzipperProxy,
    stubClass: UnzipperStub,
    validateRequest: validateUnzipperRequest,
    validateResponse: validateUnzipperResponse,
    mojomId: 'components/services/unzip/public/interfaces/unzipper.mojom',
    fuzzMethods: {
      unzip: {
        params: Unzipper_Unzip_Params,
      },
      unzipWithFilter: {
        params: Unzipper_UnzipWithFilter_Params,
      },
    },
  };
  UnzipperStub.prototype.validator = validateUnzipperRequest;
  UnzipperProxy.prototype.validator = validateUnzipperResponse;
  exports.UnzipFilter = UnzipFilter;
  exports.UnzipFilterPtr = UnzipFilterPtr;
  exports.UnzipFilterAssociatedPtr = UnzipFilterAssociatedPtr;
  exports.Unzipper = Unzipper;
  exports.UnzipperPtr = UnzipperPtr;
  exports.UnzipperAssociatedPtr = UnzipperAssociatedPtr;
})();