// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/filesystem/public/interfaces/directory.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('filesystem.mojom');
  var file$ =
      mojo.internal.exposeNamespace('filesystem.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/filesystem/public/interfaces/file.mojom', 'file.mojom.js');
  }
  var types$ =
      mojo.internal.exposeNamespace('filesystem.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/filesystem/public/interfaces/types.mojom', 'types.mojom.js');
  }
  var file1$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var file_error$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_error.mojom', '../../../../../mojo/public/mojom/base/file_error.mojom.js');
  }



  function FileOpenDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileOpenDetails.prototype.initDefaults_ = function() {
    this.path = null;
    this.openFlags = 0;
  };
  FileOpenDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileOpenDetails.generate = function(generator_) {
    var generated = new FileOpenDetails;
    generated.path = generator_.generateString(false);
    generated.openFlags = generator_.generateUint32();
    return generated;
  };

  FileOpenDetails.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.openFlags = mutator_.mutateUint32(this.openFlags);
    }
    return this;
  };
  FileOpenDetails.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileOpenDetails.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileOpenDetails.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileOpenDetails.validate = function(messageValidator, offset) {
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


    // validate FileOpenDetails.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FileOpenDetails.encodedSize = codec.kStructHeaderSize + 16;

  FileOpenDetails.decode = function(decoder) {
    var packed;
    var val = new FileOpenDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.openFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FileOpenDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileOpenDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.openFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FileOpenResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileOpenResult.prototype.initDefaults_ = function() {
    this.path = null;
    this.error = 0;
    this.fileHandle = null;
  };
  FileOpenResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileOpenResult.generate = function(generator_) {
    var generated = new FileOpenResult;
    generated.path = generator_.generateString(false);
    generated.error = generator_.generateEnum(0, 0);
    generated.fileHandle = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  FileOpenResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.fileHandle = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  FileOpenResult.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fileHandle !== null) {
      Array.prototype.push.apply(handles, this.fileHandle.getHandleDeps());
    }
    return handles;
  };

  FileOpenResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileOpenResult.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.fileHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  FileOpenResult.validate = function(messageValidator, offset) {
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


    // validate FileOpenResult.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileOpenResult.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FileOpenResult.fileHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, file1$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileOpenResult.encodedSize = codec.kStructHeaderSize + 24;

  FileOpenResult.decode = function(decoder) {
    var packed;
    var val = new FileOpenResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.fileHandle = decoder.decodeStructPointer(file1$.File);
    return val;
  };

  FileOpenResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileOpenResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(file1$.File, val.fileHandle);
  };
  function Directory_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Read_Params.prototype.initDefaults_ = function() {
  };
  Directory_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Read_Params.generate = function(generator_) {
    var generated = new Directory_Read_Params;
    return generated;
  };

  Directory_Read_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Directory_Read_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Read_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Read_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Read_Params.validate = function(messageValidator, offset) {
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

  Directory_Read_Params.encodedSize = codec.kStructHeaderSize + 0;

  Directory_Read_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Directory_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Read_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Directory_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.directoryContents = null;
  };
  Directory_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Read_ResponseParams.generate = function(generator_) {
    var generated = new Directory_Read_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.directoryContents = generator_.generateArray(function() {
      return generator_.generateStruct(filesystem.mojom.DirectoryEntry, false);
    });
    return generated;
  };

  Directory_Read_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.directoryContents = mutator_.mutateArray(this.directoryContents, function(val) {
        return mutator_.mutateStruct(filesystem.mojom.DirectoryEntry, false);
      });
    }
    return this;
  };
  Directory_Read_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Read_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Read_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Read_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_Read_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_Read_ResponseParams.directoryContents
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(types$.DirectoryEntry), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.directoryContents = decoder.decodeArrayPointer(new codec.PointerTo(types$.DirectoryEntry));
    return val;
  };

  Directory_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(types$.DirectoryEntry), val.directoryContents);
  };
  function Directory_OpenFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.file = new bindings.InterfaceRequest();
    this.openFlags = 0;
  };
  Directory_OpenFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenFile_Params.generate = function(generator_) {
    var generated = new Directory_OpenFile_Params;
    generated.path = generator_.generateString(false);
    generated.file = generator_.generateInterfaceRequest("filesystem.mojom.File", true);
    generated.openFlags = generator_.generateUint32();
    return generated;
  };

  Directory_OpenFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateInterfaceRequest(this.file, "filesystem.mojom.File", true);
    }
    if (mutator_.chooseMutateField()) {
      this.openFlags = mutator_.mutateUint32(this.openFlags);
    }
    return this;
  };
  Directory_OpenFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.FileRequest"]);
    }
    return handles;
  };

  Directory_OpenFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.file = handles[idx++];;
    return idx;
  };

  Directory_OpenFile_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_OpenFile_Params.file
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.file = decoder.decodeStruct(codec.NullableInterfaceRequest);
    val.openFlags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Directory_OpenFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.file);
    encoder.encodeStruct(codec.Uint32, val.openFlags);
  };
  function Directory_OpenFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_OpenFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenFile_ResponseParams.generate = function(generator_) {
    var generated = new Directory_OpenFile_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_OpenFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_OpenFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_OpenFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_OpenFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenFile_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_OpenFileHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandle_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.openFlags = 0;
  };
  Directory_OpenFileHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenFileHandle_Params.generate = function(generator_) {
    var generated = new Directory_OpenFileHandle_Params;
    generated.path = generator_.generateString(false);
    generated.openFlags = generator_.generateUint32();
    return generated;
  };

  Directory_OpenFileHandle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.openFlags = mutator_.mutateUint32(this.openFlags);
    }
    return this;
  };
  Directory_OpenFileHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_OpenFileHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenFileHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_OpenFileHandle_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenFileHandle_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenFileHandle_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenFileHandle_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.openFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenFileHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.openFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_OpenFileHandle_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandle_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.fileHandle = null;
  };
  Directory_OpenFileHandle_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenFileHandle_ResponseParams.generate = function(generator_) {
    var generated = new Directory_OpenFileHandle_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.fileHandle = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  Directory_OpenFileHandle_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.fileHandle = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  Directory_OpenFileHandle_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fileHandle !== null) {
      Array.prototype.push.apply(handles, this.fileHandle.getHandleDeps());
    }
    return handles;
  };

  Directory_OpenFileHandle_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenFileHandle_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.fileHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  Directory_OpenFileHandle_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenFileHandle_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_OpenFileHandle_ResponseParams.fileHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file1$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFileHandle_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenFileHandle_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandle_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.fileHandle = decoder.decodeStructPointer(file1$.File);
    return val;
  };

  Directory_OpenFileHandle_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandle_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(file1$.File, val.fileHandle);
  };
  function Directory_OpenFileHandles_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandles_Params.prototype.initDefaults_ = function() {
    this.files = null;
  };
  Directory_OpenFileHandles_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenFileHandles_Params.generate = function(generator_) {
    var generated = new Directory_OpenFileHandles_Params;
    generated.files = generator_.generateArray(function() {
      return generator_.generateStruct(filesystem.mojom.FileOpenDetails, false);
    });
    return generated;
  };

  Directory_OpenFileHandles_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.files = mutator_.mutateArray(this.files, function(val) {
        return mutator_.mutateStruct(filesystem.mojom.FileOpenDetails, false);
      });
    }
    return this;
  };
  Directory_OpenFileHandles_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_OpenFileHandles_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenFileHandles_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_OpenFileHandles_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenFileHandles_Params.files
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FileOpenDetails), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFileHandles_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFileHandles_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandles_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.files = decoder.decodeArrayPointer(new codec.PointerTo(FileOpenDetails));
    return val;
  };

  Directory_OpenFileHandles_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandles_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(FileOpenDetails), val.files);
  };
  function Directory_OpenFileHandles_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenFileHandles_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  Directory_OpenFileHandles_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenFileHandles_ResponseParams.generate = function(generator_) {
    var generated = new Directory_OpenFileHandles_ResponseParams;
    generated.results = generator_.generateArray(function() {
      return generator_.generateStruct(filesystem.mojom.FileOpenResult, false);
    });
    return generated;
  };

  Directory_OpenFileHandles_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateArray(this.results, function(val) {
        return mutator_.mutateStruct(filesystem.mojom.FileOpenResult, false);
      });
    }
    return this;
  };
  Directory_OpenFileHandles_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.results !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.results.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  Directory_OpenFileHandles_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenFileHandles_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.results.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  Directory_OpenFileHandles_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenFileHandles_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FileOpenResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenFileHandles_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenFileHandles_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenFileHandles_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(FileOpenResult));
    return val;
  };

  Directory_OpenFileHandles_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenFileHandles_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(FileOpenResult), val.results);
  };
  function Directory_OpenDirectory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenDirectory_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.directory = new bindings.InterfaceRequest();
    this.openFlags = 0;
  };
  Directory_OpenDirectory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenDirectory_Params.generate = function(generator_) {
    var generated = new Directory_OpenDirectory_Params;
    generated.path = generator_.generateString(false);
    generated.directory = generator_.generateInterfaceRequest("filesystem.mojom.Directory", true);
    generated.openFlags = generator_.generateUint32();
    return generated;
  };

  Directory_OpenDirectory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.directory = mutator_.mutateInterfaceRequest(this.directory, "filesystem.mojom.Directory", true);
    }
    if (mutator_.chooseMutateField()) {
      this.openFlags = mutator_.mutateUint32(this.openFlags);
    }
    return this;
  };
  Directory_OpenDirectory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.directory !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryRequest"]);
    }
    return handles;
  };

  Directory_OpenDirectory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenDirectory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.directory = handles[idx++];;
    return idx;
  };

  Directory_OpenDirectory_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenDirectory_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_OpenDirectory_Params.directory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_OpenDirectory_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_OpenDirectory_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenDirectory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.directory = decoder.decodeStruct(codec.NullableInterfaceRequest);
    val.openFlags = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Directory_OpenDirectory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenDirectory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.directory);
    encoder.encodeStruct(codec.Uint32, val.openFlags);
  };
  function Directory_OpenDirectory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_OpenDirectory_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_OpenDirectory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_OpenDirectory_ResponseParams.generate = function(generator_) {
    var generated = new Directory_OpenDirectory_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_OpenDirectory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_OpenDirectory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_OpenDirectory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_OpenDirectory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_OpenDirectory_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_OpenDirectory_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_OpenDirectory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_OpenDirectory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_OpenDirectory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_OpenDirectory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_OpenDirectory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Rename_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Rename_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.newPath = null;
  };
  Directory_Rename_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Rename_Params.generate = function(generator_) {
    var generated = new Directory_Rename_Params;
    generated.path = generator_.generateString(false);
    generated.newPath = generator_.generateString(false);
    return generated;
  };

  Directory_Rename_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newPath = mutator_.mutateString(this.newPath, false);
    }
    return this;
  };
  Directory_Rename_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Rename_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Rename_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Rename_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_Rename_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_Rename_Params.newPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Rename_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Rename_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Rename_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.newPath = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_Rename_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Rename_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.String, val.newPath);
  };
  function Directory_Rename_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Rename_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Rename_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Rename_ResponseParams.generate = function(generator_) {
    var generated = new Directory_Rename_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_Rename_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_Rename_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Rename_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Rename_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Rename_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_Rename_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Rename_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Rename_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Rename_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Rename_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Rename_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Replace_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Replace_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.newPath = null;
  };
  Directory_Replace_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Replace_Params.generate = function(generator_) {
    var generated = new Directory_Replace_Params;
    generated.path = generator_.generateString(false);
    generated.newPath = generator_.generateString(false);
    return generated;
  };

  Directory_Replace_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newPath = mutator_.mutateString(this.newPath, false);
    }
    return this;
  };
  Directory_Replace_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Replace_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Replace_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Replace_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_Replace_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_Replace_Params.newPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Replace_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Replace_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Replace_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.newPath = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_Replace_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Replace_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.String, val.newPath);
  };
  function Directory_Replace_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Replace_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Replace_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Replace_ResponseParams.generate = function(generator_) {
    var generated = new Directory_Replace_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_Replace_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_Replace_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Replace_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Replace_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Replace_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_Replace_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Replace_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Replace_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Replace_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Replace_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Replace_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Delete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Delete_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.deleteFlags = 0;
  };
  Directory_Delete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Delete_Params.generate = function(generator_) {
    var generated = new Directory_Delete_Params;
    generated.path = generator_.generateString(false);
    generated.deleteFlags = generator_.generateUint32();
    return generated;
  };

  Directory_Delete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deleteFlags = mutator_.mutateUint32(this.deleteFlags);
    }
    return this;
  };
  Directory_Delete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Delete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Delete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Delete_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_Delete_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Delete_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_Delete_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Delete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.deleteFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Delete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Delete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeStruct(codec.Uint32, val.deleteFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Delete_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Delete_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Delete_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Delete_ResponseParams.generate = function(generator_) {
    var generated = new Directory_Delete_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_Delete_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_Delete_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Delete_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Delete_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Delete_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_Delete_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Delete_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Delete_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Delete_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Delete_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Delete_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Exists_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Exists_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_Exists_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Exists_Params.generate = function(generator_) {
    var generated = new Directory_Exists_Params;
    generated.path = generator_.generateString(false);
    return generated;
  };

  Directory_Exists_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    return this;
  };
  Directory_Exists_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Exists_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Exists_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Exists_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_Exists_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Exists_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Exists_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Exists_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_Exists_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Exists_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_Exists_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Exists_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.exists = false;
  };
  Directory_Exists_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Exists_ResponseParams.generate = function(generator_) {
    var generated = new Directory_Exists_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.exists = generator_.generateBool();
    return generated;
  };

  Directory_Exists_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.exists = mutator_.mutateBool(this.exists);
    }
    return this;
  };
  Directory_Exists_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Exists_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Exists_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Exists_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_Exists_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_Exists_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Exists_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Exists_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.exists = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Exists_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Exists_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    packed = 0;
    packed |= (val.exists & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_IsWritable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_IsWritable_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_IsWritable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_IsWritable_Params.generate = function(generator_) {
    var generated = new Directory_IsWritable_Params;
    generated.path = generator_.generateString(false);
    return generated;
  };

  Directory_IsWritable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    return this;
  };
  Directory_IsWritable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_IsWritable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_IsWritable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_IsWritable_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_IsWritable_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_IsWritable_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_IsWritable_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_IsWritable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_IsWritable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_IsWritable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_IsWritable_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_IsWritable_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.isWritable = false;
  };
  Directory_IsWritable_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_IsWritable_ResponseParams.generate = function(generator_) {
    var generated = new Directory_IsWritable_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.isWritable = generator_.generateBool();
    return generated;
  };

  Directory_IsWritable_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.isWritable = mutator_.mutateBool(this.isWritable);
    }
    return this;
  };
  Directory_IsWritable_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_IsWritable_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_IsWritable_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_IsWritable_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_IsWritable_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Directory_IsWritable_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_IsWritable_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_IsWritable_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isWritable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_IsWritable_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_IsWritable_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    packed = 0;
    packed |= (val.isWritable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Flush_Params.prototype.initDefaults_ = function() {
  };
  Directory_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Flush_Params.generate = function(generator_) {
    var generated = new Directory_Flush_Params;
    return generated;
  };

  Directory_Flush_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Directory_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Flush_Params.validate = function(messageValidator, offset) {
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

  Directory_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  Directory_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Directory_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Directory_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Flush_ResponseParams.generate = function(generator_) {
    var generated = new Directory_Flush_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_Flush_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_Flush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_Flush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Flush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_Flush_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_Flush_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_StatFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_StatFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_StatFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_StatFile_Params.generate = function(generator_) {
    var generated = new Directory_StatFile_Params;
    generated.path = generator_.generateString(false);
    return generated;
  };

  Directory_StatFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    return this;
  };
  Directory_StatFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_StatFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_StatFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_StatFile_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_StatFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_StatFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_StatFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_StatFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_StatFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_StatFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_StatFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_StatFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.fileInformation = null;
  };
  Directory_StatFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_StatFile_ResponseParams.generate = function(generator_) {
    var generated = new Directory_StatFile_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.fileInformation = generator_.generateStruct(filesystem.mojom.FileInformation, true);
    return generated;
  };

  Directory_StatFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.fileInformation = mutator_.mutateStruct(filesystem.mojom.FileInformation, true);
    }
    return this;
  };
  Directory_StatFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_StatFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_StatFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_StatFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_StatFile_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_StatFile_ResponseParams.fileInformation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.FileInformation, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_StatFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_StatFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_StatFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.fileInformation = decoder.decodeStructPointer(types$.FileInformation);
    return val;
  };

  Directory_StatFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_StatFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(types$.FileInformation, val.fileInformation);
  };
  function Directory_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_Clone_Params.prototype.initDefaults_ = function() {
    this.directory = new bindings.InterfaceRequest();
  };
  Directory_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_Clone_Params.generate = function(generator_) {
    var generated = new Directory_Clone_Params;
    generated.directory = generator_.generateInterfaceRequest("filesystem.mojom.Directory", false);
    return generated;
  };

  Directory_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.directory = mutator_.mutateInterfaceRequest(this.directory, "filesystem.mojom.Directory", false);
    }
    return this;
  };
  Directory_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.directory !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.DirectoryRequest"]);
    }
    return handles;
  };

  Directory_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.directory = handles[idx++];;
    return idx;
  };

  Directory_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_Clone_Params.directory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.directory = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.directory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Directory_ReadEntireFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_ReadEntireFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  Directory_ReadEntireFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_ReadEntireFile_Params.generate = function(generator_) {
    var generated = new Directory_ReadEntireFile_Params;
    generated.path = generator_.generateString(false);
    return generated;
  };

  Directory_ReadEntireFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    return this;
  };
  Directory_ReadEntireFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_ReadEntireFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_ReadEntireFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_ReadEntireFile_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_ReadEntireFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_ReadEntireFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  Directory_ReadEntireFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_ReadEntireFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    return val;
  };

  Directory_ReadEntireFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_ReadEntireFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
  };
  function Directory_ReadEntireFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_ReadEntireFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.data = null;
  };
  Directory_ReadEntireFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_ReadEntireFile_ResponseParams.generate = function(generator_) {
    var generated = new Directory_ReadEntireFile_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Directory_ReadEntireFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Directory_ReadEntireFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_ReadEntireFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_ReadEntireFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_ReadEntireFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_ReadEntireFile_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_ReadEntireFile_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_ReadEntireFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Directory_ReadEntireFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_ReadEntireFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Directory_ReadEntireFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_ReadEntireFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function Directory_WriteFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_WriteFile_Params.prototype.initDefaults_ = function() {
    this.path = null;
    this.data = null;
  };
  Directory_WriteFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_WriteFile_Params.generate = function(generator_) {
    var generated = new Directory_WriteFile_Params;
    generated.path = generator_.generateString(false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Directory_WriteFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateString(this.path, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Directory_WriteFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_WriteFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_WriteFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_WriteFile_Params.validate = function(messageValidator, offset) {
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


    // validate Directory_WriteFile_Params.path
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Directory_WriteFile_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_WriteFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  Directory_WriteFile_Params.decode = function(decoder) {
    var packed;
    var val = new Directory_WriteFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Directory_WriteFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_WriteFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.path);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function Directory_WriteFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Directory_WriteFile_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Directory_WriteFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Directory_WriteFile_ResponseParams.generate = function(generator_) {
    var generated = new Directory_WriteFile_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  Directory_WriteFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  Directory_WriteFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Directory_WriteFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Directory_WriteFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Directory_WriteFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Directory_WriteFile_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Directory_WriteFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Directory_WriteFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Directory_WriteFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Directory_WriteFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Directory_WriteFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDirectory_Read_Name = 577348307;
  var kDirectory_OpenFile_Name = 376720446;
  var kDirectory_OpenFileHandle_Name = 664225539;
  var kDirectory_OpenFileHandles_Name = 2121110283;
  var kDirectory_OpenDirectory_Name = 203043754;
  var kDirectory_Rename_Name = 1113700185;
  var kDirectory_Replace_Name = 21051079;
  var kDirectory_Delete_Name = 781001073;
  var kDirectory_Exists_Name = 2027525954;
  var kDirectory_IsWritable_Name = 542486529;
  var kDirectory_Flush_Name = 1827145731;
  var kDirectory_StatFile_Name = 1867869564;
  var kDirectory_Clone_Name = 568806245;
  var kDirectory_ReadEntireFile_Name = 1539199935;
  var kDirectory_WriteFile_Name = 1335364038;

  function DirectoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Directory,
                                                   handleOrPtrInfo);
  }

  function DirectoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Directory, associatedInterfacePtrInfo);
  }

  DirectoryAssociatedPtr.prototype =
      Object.create(DirectoryPtr.prototype);
  DirectoryAssociatedPtr.prototype.constructor =
      DirectoryAssociatedPtr;

  function DirectoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  DirectoryPtr.prototype.read = function() {
    return DirectoryProxy.prototype.read
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.read = function() {
    var params_ = new Directory_Read_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_Read_Name,
          codec.align(Directory_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Read_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.openFile = function() {
    return DirectoryProxy.prototype.openFile
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.openFile = function(path, file, openFlags) {
    var params_ = new Directory_OpenFile_Params();
    params_.path = path;
    params_.file = file;
    params_.openFlags = openFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_OpenFile_Name,
          codec.align(Directory_OpenFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.openFileHandle = function() {
    return DirectoryProxy.prototype.openFileHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.openFileHandle = function(path, openFlags) {
    var params_ = new Directory_OpenFileHandle_Params();
    params_.path = path;
    params_.openFlags = openFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_OpenFileHandle_Name,
          codec.align(Directory_OpenFileHandle_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFileHandle_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFileHandle_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.openFileHandles = function() {
    return DirectoryProxy.prototype.openFileHandles
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.openFileHandles = function(files) {
    var params_ = new Directory_OpenFileHandles_Params();
    params_.files = files;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_OpenFileHandles_Name,
          codec.align(Directory_OpenFileHandles_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenFileHandles_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenFileHandles_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.openDirectory = function() {
    return DirectoryProxy.prototype.openDirectory
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.openDirectory = function(path, directory, openFlags) {
    var params_ = new Directory_OpenDirectory_Params();
    params_.path = path;
    params_.directory = directory;
    params_.openFlags = openFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_OpenDirectory_Name,
          codec.align(Directory_OpenDirectory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_OpenDirectory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_OpenDirectory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.rename = function() {
    return DirectoryProxy.prototype.rename
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.rename = function(path, newPath) {
    var params_ = new Directory_Rename_Params();
    params_.path = path;
    params_.newPath = newPath;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_Rename_Name,
          codec.align(Directory_Rename_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Rename_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Rename_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.replace = function() {
    return DirectoryProxy.prototype.replace
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.replace = function(path, newPath) {
    var params_ = new Directory_Replace_Params();
    params_.path = path;
    params_.newPath = newPath;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_Replace_Name,
          codec.align(Directory_Replace_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Replace_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Replace_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.delete = function() {
    return DirectoryProxy.prototype.delete
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.delete = function(path, deleteFlags) {
    var params_ = new Directory_Delete_Params();
    params_.path = path;
    params_.deleteFlags = deleteFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_Delete_Name,
          codec.align(Directory_Delete_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Delete_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Delete_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.exists = function() {
    return DirectoryProxy.prototype.exists
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.exists = function(path) {
    var params_ = new Directory_Exists_Params();
    params_.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_Exists_Name,
          codec.align(Directory_Exists_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Exists_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Exists_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.isWritable = function() {
    return DirectoryProxy.prototype.isWritable
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.isWritable = function(path) {
    var params_ = new Directory_IsWritable_Params();
    params_.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_IsWritable_Name,
          codec.align(Directory_IsWritable_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_IsWritable_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_IsWritable_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.flush = function() {
    return DirectoryProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.flush = function() {
    var params_ = new Directory_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_Flush_Name,
          codec.align(Directory_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_Flush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.statFile = function() {
    return DirectoryProxy.prototype.statFile
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.statFile = function(path) {
    var params_ = new Directory_StatFile_Params();
    params_.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_StatFile_Name,
          codec.align(Directory_StatFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_StatFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_StatFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.clone = function() {
    return DirectoryProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.clone = function(directory) {
    var params_ = new Directory_Clone_Params();
    params_.directory = directory;
    var builder = new codec.MessageV0Builder(
        kDirectory_Clone_Name,
        codec.align(Directory_Clone_Params.encodedSize));
    builder.encodeStruct(Directory_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DirectoryPtr.prototype.readEntireFile = function() {
    return DirectoryProxy.prototype.readEntireFile
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.readEntireFile = function(path) {
    var params_ = new Directory_ReadEntireFile_Params();
    params_.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_ReadEntireFile_Name,
          codec.align(Directory_ReadEntireFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_ReadEntireFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_ReadEntireFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DirectoryPtr.prototype.writeFile = function() {
    return DirectoryProxy.prototype.writeFile
        .apply(this.ptr.getProxy(), arguments);
  };

  DirectoryProxy.prototype.writeFile = function(path, data) {
    var params_ = new Directory_WriteFile_Params();
    params_.path = path;
    params_.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDirectory_WriteFile_Name,
          codec.align(Directory_WriteFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Directory_WriteFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Directory_WriteFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DirectoryStub(delegate) {
    this.delegate_ = delegate;
  }
  DirectoryStub.prototype.read = function() {
    return this.delegate_ && this.delegate_.read && this.delegate_.read();
  }
  DirectoryStub.prototype.openFile = function(path, file, openFlags) {
    return this.delegate_ && this.delegate_.openFile && this.delegate_.openFile(path, file, openFlags);
  }
  DirectoryStub.prototype.openFileHandle = function(path, openFlags) {
    return this.delegate_ && this.delegate_.openFileHandle && this.delegate_.openFileHandle(path, openFlags);
  }
  DirectoryStub.prototype.openFileHandles = function(files) {
    return this.delegate_ && this.delegate_.openFileHandles && this.delegate_.openFileHandles(files);
  }
  DirectoryStub.prototype.openDirectory = function(path, directory, openFlags) {
    return this.delegate_ && this.delegate_.openDirectory && this.delegate_.openDirectory(path, directory, openFlags);
  }
  DirectoryStub.prototype.rename = function(path, newPath) {
    return this.delegate_ && this.delegate_.rename && this.delegate_.rename(path, newPath);
  }
  DirectoryStub.prototype.replace = function(path, newPath) {
    return this.delegate_ && this.delegate_.replace && this.delegate_.replace(path, newPath);
  }
  DirectoryStub.prototype.delete = function(path, deleteFlags) {
    return this.delegate_ && this.delegate_.delete && this.delegate_.delete(path, deleteFlags);
  }
  DirectoryStub.prototype.exists = function(path) {
    return this.delegate_ && this.delegate_.exists && this.delegate_.exists(path);
  }
  DirectoryStub.prototype.isWritable = function(path) {
    return this.delegate_ && this.delegate_.isWritable && this.delegate_.isWritable(path);
  }
  DirectoryStub.prototype.flush = function() {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush();
  }
  DirectoryStub.prototype.statFile = function(path) {
    return this.delegate_ && this.delegate_.statFile && this.delegate_.statFile(path);
  }
  DirectoryStub.prototype.clone = function(directory) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(directory);
  }
  DirectoryStub.prototype.readEntireFile = function(path) {
    return this.delegate_ && this.delegate_.readEntireFile && this.delegate_.readEntireFile(path);
  }
  DirectoryStub.prototype.writeFile = function(path, data) {
    return this.delegate_ && this.delegate_.writeFile && this.delegate_.writeFile(path, data);
  }

  DirectoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDirectory_Clone_Name:
      var params = reader.decodeStruct(Directory_Clone_Params);
      this.clone(params.directory);
      return true;
    default:
      return false;
    }
  };

  DirectoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDirectory_Read_Name:
      var params = reader.decodeStruct(Directory_Read_Params);
      this.read().then(function(response) {
        var responseParams =
            new Directory_Read_ResponseParams();
        responseParams.error = response.error;
        responseParams.directoryContents = response.directoryContents;
        var builder = new codec.MessageV1Builder(
            kDirectory_Read_Name,
            codec.align(Directory_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_OpenFile_Name:
      var params = reader.decodeStruct(Directory_OpenFile_Params);
      this.openFile(params.path, params.file, params.openFlags).then(function(response) {
        var responseParams =
            new Directory_OpenFile_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_OpenFile_Name,
            codec.align(Directory_OpenFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_OpenFileHandle_Name:
      var params = reader.decodeStruct(Directory_OpenFileHandle_Params);
      this.openFileHandle(params.path, params.openFlags).then(function(response) {
        var responseParams =
            new Directory_OpenFileHandle_ResponseParams();
        responseParams.error = response.error;
        responseParams.fileHandle = response.fileHandle;
        var builder = new codec.MessageV1Builder(
            kDirectory_OpenFileHandle_Name,
            codec.align(Directory_OpenFileHandle_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFileHandle_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_OpenFileHandles_Name:
      var params = reader.decodeStruct(Directory_OpenFileHandles_Params);
      this.openFileHandles(params.files).then(function(response) {
        var responseParams =
            new Directory_OpenFileHandles_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kDirectory_OpenFileHandles_Name,
            codec.align(Directory_OpenFileHandles_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenFileHandles_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_OpenDirectory_Name:
      var params = reader.decodeStruct(Directory_OpenDirectory_Params);
      this.openDirectory(params.path, params.directory, params.openFlags).then(function(response) {
        var responseParams =
            new Directory_OpenDirectory_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_OpenDirectory_Name,
            codec.align(Directory_OpenDirectory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_OpenDirectory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_Rename_Name:
      var params = reader.decodeStruct(Directory_Rename_Params);
      this.rename(params.path, params.newPath).then(function(response) {
        var responseParams =
            new Directory_Rename_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_Rename_Name,
            codec.align(Directory_Rename_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Rename_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_Replace_Name:
      var params = reader.decodeStruct(Directory_Replace_Params);
      this.replace(params.path, params.newPath).then(function(response) {
        var responseParams =
            new Directory_Replace_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_Replace_Name,
            codec.align(Directory_Replace_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Replace_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_Delete_Name:
      var params = reader.decodeStruct(Directory_Delete_Params);
      this.delete(params.path, params.deleteFlags).then(function(response) {
        var responseParams =
            new Directory_Delete_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_Delete_Name,
            codec.align(Directory_Delete_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Delete_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_Exists_Name:
      var params = reader.decodeStruct(Directory_Exists_Params);
      this.exists(params.path).then(function(response) {
        var responseParams =
            new Directory_Exists_ResponseParams();
        responseParams.error = response.error;
        responseParams.exists = response.exists;
        var builder = new codec.MessageV1Builder(
            kDirectory_Exists_Name,
            codec.align(Directory_Exists_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Exists_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_IsWritable_Name:
      var params = reader.decodeStruct(Directory_IsWritable_Params);
      this.isWritable(params.path).then(function(response) {
        var responseParams =
            new Directory_IsWritable_ResponseParams();
        responseParams.error = response.error;
        responseParams.isWritable = response.isWritable;
        var builder = new codec.MessageV1Builder(
            kDirectory_IsWritable_Name,
            codec.align(Directory_IsWritable_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_IsWritable_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_Flush_Name:
      var params = reader.decodeStruct(Directory_Flush_Params);
      this.flush().then(function(response) {
        var responseParams =
            new Directory_Flush_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_Flush_Name,
            codec.align(Directory_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_StatFile_Name:
      var params = reader.decodeStruct(Directory_StatFile_Params);
      this.statFile(params.path).then(function(response) {
        var responseParams =
            new Directory_StatFile_ResponseParams();
        responseParams.error = response.error;
        responseParams.fileInformation = response.fileInformation;
        var builder = new codec.MessageV1Builder(
            kDirectory_StatFile_Name,
            codec.align(Directory_StatFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_StatFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_ReadEntireFile_Name:
      var params = reader.decodeStruct(Directory_ReadEntireFile_Params);
      this.readEntireFile(params.path).then(function(response) {
        var responseParams =
            new Directory_ReadEntireFile_ResponseParams();
        responseParams.error = response.error;
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kDirectory_ReadEntireFile_Name,
            codec.align(Directory_ReadEntireFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_ReadEntireFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDirectory_WriteFile_Name:
      var params = reader.decodeStruct(Directory_WriteFile_Params);
      this.writeFile(params.path, params.data).then(function(response) {
        var responseParams =
            new Directory_WriteFile_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kDirectory_WriteFile_Name,
            codec.align(Directory_WriteFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Directory_WriteFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDirectoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDirectory_Read_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Read_Params;
      break;
      case kDirectory_OpenFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFile_Params;
      break;
      case kDirectory_OpenFileHandle_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFileHandle_Params;
      break;
      case kDirectory_OpenFileHandles_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenFileHandles_Params;
      break;
      case kDirectory_OpenDirectory_Name:
        if (message.expectsResponse())
          paramsClass = Directory_OpenDirectory_Params;
      break;
      case kDirectory_Rename_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Rename_Params;
      break;
      case kDirectory_Replace_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Replace_Params;
      break;
      case kDirectory_Delete_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Delete_Params;
      break;
      case kDirectory_Exists_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Exists_Params;
      break;
      case kDirectory_IsWritable_Name:
        if (message.expectsResponse())
          paramsClass = Directory_IsWritable_Params;
      break;
      case kDirectory_Flush_Name:
        if (message.expectsResponse())
          paramsClass = Directory_Flush_Params;
      break;
      case kDirectory_StatFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_StatFile_Params;
      break;
      case kDirectory_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Directory_Clone_Params;
      break;
      case kDirectory_ReadEntireFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_ReadEntireFile_Params;
      break;
      case kDirectory_WriteFile_Name:
        if (message.expectsResponse())
          paramsClass = Directory_WriteFile_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDirectoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDirectory_Read_Name:
        if (message.isResponse())
          paramsClass = Directory_Read_ResponseParams;
        break;
      case kDirectory_OpenFile_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFile_ResponseParams;
        break;
      case kDirectory_OpenFileHandle_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFileHandle_ResponseParams;
        break;
      case kDirectory_OpenFileHandles_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenFileHandles_ResponseParams;
        break;
      case kDirectory_OpenDirectory_Name:
        if (message.isResponse())
          paramsClass = Directory_OpenDirectory_ResponseParams;
        break;
      case kDirectory_Rename_Name:
        if (message.isResponse())
          paramsClass = Directory_Rename_ResponseParams;
        break;
      case kDirectory_Replace_Name:
        if (message.isResponse())
          paramsClass = Directory_Replace_ResponseParams;
        break;
      case kDirectory_Delete_Name:
        if (message.isResponse())
          paramsClass = Directory_Delete_ResponseParams;
        break;
      case kDirectory_Exists_Name:
        if (message.isResponse())
          paramsClass = Directory_Exists_ResponseParams;
        break;
      case kDirectory_IsWritable_Name:
        if (message.isResponse())
          paramsClass = Directory_IsWritable_ResponseParams;
        break;
      case kDirectory_Flush_Name:
        if (message.isResponse())
          paramsClass = Directory_Flush_ResponseParams;
        break;
      case kDirectory_StatFile_Name:
        if (message.isResponse())
          paramsClass = Directory_StatFile_ResponseParams;
        break;
      case kDirectory_ReadEntireFile_Name:
        if (message.isResponse())
          paramsClass = Directory_ReadEntireFile_ResponseParams;
        break;
      case kDirectory_WriteFile_Name:
        if (message.isResponse())
          paramsClass = Directory_WriteFile_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Directory = {
    name: 'filesystem.mojom.Directory',
    kVersion: 0,
    ptrClass: DirectoryPtr,
    proxyClass: DirectoryProxy,
    stubClass: DirectoryStub,
    validateRequest: validateDirectoryRequest,
    validateResponse: validateDirectoryResponse,
    mojomId: 'components/services/filesystem/public/interfaces/directory.mojom',
    fuzzMethods: {
      read: {
        params: Directory_Read_Params,
      },
      openFile: {
        params: Directory_OpenFile_Params,
      },
      openFileHandle: {
        params: Directory_OpenFileHandle_Params,
      },
      openFileHandles: {
        params: Directory_OpenFileHandles_Params,
      },
      openDirectory: {
        params: Directory_OpenDirectory_Params,
      },
      rename: {
        params: Directory_Rename_Params,
      },
      replace: {
        params: Directory_Replace_Params,
      },
      delete: {
        params: Directory_Delete_Params,
      },
      exists: {
        params: Directory_Exists_Params,
      },
      isWritable: {
        params: Directory_IsWritable_Params,
      },
      flush: {
        params: Directory_Flush_Params,
      },
      statFile: {
        params: Directory_StatFile_Params,
      },
      clone: {
        params: Directory_Clone_Params,
      },
      readEntireFile: {
        params: Directory_ReadEntireFile_Params,
      },
      writeFile: {
        params: Directory_WriteFile_Params,
      },
    },
  };
  DirectoryStub.prototype.validator = validateDirectoryRequest;
  DirectoryProxy.prototype.validator = validateDirectoryResponse;
  exports.FileOpenDetails = FileOpenDetails;
  exports.FileOpenResult = FileOpenResult;
  exports.Directory = Directory;
  exports.DirectoryPtr = DirectoryPtr;
  exports.DirectoryAssociatedPtr = DirectoryAssociatedPtr;
})();