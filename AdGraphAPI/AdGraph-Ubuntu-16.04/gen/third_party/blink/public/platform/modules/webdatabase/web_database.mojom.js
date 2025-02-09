// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/webdatabase/web_database.mojom';
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
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../../url/mojom/origin.mojom.js');
  }



  function WebDatabase_UpdateSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabase_UpdateSize_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.name = null;
    this.size = 0;
  };
  WebDatabase_UpdateSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabase_UpdateSize_Params.generate = function(generator_) {
    var generated = new WebDatabase_UpdateSize_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.size = generator_.generateInt64();
    return generated;
  };

  WebDatabase_UpdateSize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateInt64(this.size);
    }
    return this;
  };
  WebDatabase_UpdateSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabase_UpdateSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabase_UpdateSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabase_UpdateSize_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabase_UpdateSize_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabase_UpdateSize_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebDatabase_UpdateSize_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebDatabase_UpdateSize_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabase_UpdateSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.size = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebDatabase_UpdateSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabase_UpdateSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStruct(codec.Int64, val.size);
  };
  function WebDatabase_CloseImmediately_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabase_CloseImmediately_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.name = null;
  };
  WebDatabase_CloseImmediately_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabase_CloseImmediately_Params.generate = function(generator_) {
    var generated = new WebDatabase_CloseImmediately_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  WebDatabase_CloseImmediately_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  WebDatabase_CloseImmediately_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabase_CloseImmediately_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabase_CloseImmediately_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabase_CloseImmediately_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabase_CloseImmediately_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabase_CloseImmediately_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabase_CloseImmediately_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebDatabase_CloseImmediately_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabase_CloseImmediately_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.name = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  WebDatabase_CloseImmediately_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabase_CloseImmediately_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string16$.String16, val.name);
  };
  function WebDatabaseHost_OpenFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_OpenFile_Params.prototype.initDefaults_ = function() {
    this.vfsFileName = null;
    this.desiredFlags = 0;
  };
  WebDatabaseHost_OpenFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_OpenFile_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_OpenFile_Params;
    generated.vfsFileName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.desiredFlags = generator_.generateInt32();
    return generated;
  };

  WebDatabaseHost_OpenFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vfsFileName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.desiredFlags = mutator_.mutateInt32(this.desiredFlags);
    }
    return this;
  };
  WebDatabaseHost_OpenFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_OpenFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_OpenFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_OpenFile_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_OpenFile_Params.vfsFileName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebDatabaseHost_OpenFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebDatabaseHost_OpenFile_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_OpenFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vfsFileName = decoder.decodeStructPointer(string16$.String16);
    val.desiredFlags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebDatabaseHost_OpenFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_OpenFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.vfsFileName);
    encoder.encodeStruct(codec.Int32, val.desiredFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebDatabaseHost_OpenFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_OpenFile_ResponseParams.prototype.initDefaults_ = function() {
    this.file = null;
  };
  WebDatabaseHost_OpenFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_OpenFile_ResponseParams.generate = function(generator_) {
    var generated = new WebDatabaseHost_OpenFile_ResponseParams;
    generated.file = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  WebDatabaseHost_OpenFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  WebDatabaseHost_OpenFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, this.file.getHandleDeps());
    }
    return handles;
  };

  WebDatabaseHost_OpenFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_OpenFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.file.setHandlesInternal_(handles, idx);
    return idx;
  };

  WebDatabaseHost_OpenFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_OpenFile_ResponseParams.file
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabaseHost_OpenFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_OpenFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_OpenFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file = decoder.decodeStructPointer(file$.File);
    return val;
  };

  WebDatabaseHost_OpenFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_OpenFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.file);
  };
  function WebDatabaseHost_DeleteFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_DeleteFile_Params.prototype.initDefaults_ = function() {
    this.vfsFileName = null;
    this.syncDir = false;
  };
  WebDatabaseHost_DeleteFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_DeleteFile_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_DeleteFile_Params;
    generated.vfsFileName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.syncDir = generator_.generateBool();
    return generated;
  };

  WebDatabaseHost_DeleteFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vfsFileName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.syncDir = mutator_.mutateBool(this.syncDir);
    }
    return this;
  };
  WebDatabaseHost_DeleteFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_DeleteFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_DeleteFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_DeleteFile_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_DeleteFile_Params.vfsFileName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebDatabaseHost_DeleteFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebDatabaseHost_DeleteFile_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_DeleteFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vfsFileName = decoder.decodeStructPointer(string16$.String16);
    packed = decoder.readUint8();
    val.syncDir = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebDatabaseHost_DeleteFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_DeleteFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.vfsFileName);
    packed = 0;
    packed |= (val.syncDir & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebDatabaseHost_DeleteFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_DeleteFile_ResponseParams.prototype.initDefaults_ = function() {
    this.sqliteErrorCode = 0;
  };
  WebDatabaseHost_DeleteFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_DeleteFile_ResponseParams.generate = function(generator_) {
    var generated = new WebDatabaseHost_DeleteFile_ResponseParams;
    generated.sqliteErrorCode = generator_.generateInt32();
    return generated;
  };

  WebDatabaseHost_DeleteFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sqliteErrorCode = mutator_.mutateInt32(this.sqliteErrorCode);
    }
    return this;
  };
  WebDatabaseHost_DeleteFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_DeleteFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_DeleteFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_DeleteFile_ResponseParams.validate = function(messageValidator, offset) {
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

  WebDatabaseHost_DeleteFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_DeleteFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_DeleteFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sqliteErrorCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebDatabaseHost_DeleteFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_DeleteFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sqliteErrorCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebDatabaseHost_GetFileAttributes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_GetFileAttributes_Params.prototype.initDefaults_ = function() {
    this.vfsFileName = null;
  };
  WebDatabaseHost_GetFileAttributes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_GetFileAttributes_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_GetFileAttributes_Params;
    generated.vfsFileName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  WebDatabaseHost_GetFileAttributes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vfsFileName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  WebDatabaseHost_GetFileAttributes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_GetFileAttributes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_GetFileAttributes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_GetFileAttributes_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_GetFileAttributes_Params.vfsFileName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabaseHost_GetFileAttributes_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_GetFileAttributes_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_GetFileAttributes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vfsFileName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  WebDatabaseHost_GetFileAttributes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_GetFileAttributes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.vfsFileName);
  };
  function WebDatabaseHost_GetFileAttributes_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_GetFileAttributes_ResponseParams.prototype.initDefaults_ = function() {
    this.attributes = 0;
  };
  WebDatabaseHost_GetFileAttributes_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_GetFileAttributes_ResponseParams.generate = function(generator_) {
    var generated = new WebDatabaseHost_GetFileAttributes_ResponseParams;
    generated.attributes = generator_.generateInt32();
    return generated;
  };

  WebDatabaseHost_GetFileAttributes_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.attributes = mutator_.mutateInt32(this.attributes);
    }
    return this;
  };
  WebDatabaseHost_GetFileAttributes_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_GetFileAttributes_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_GetFileAttributes_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_GetFileAttributes_ResponseParams.validate = function(messageValidator, offset) {
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

  WebDatabaseHost_GetFileAttributes_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_GetFileAttributes_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_GetFileAttributes_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.attributes = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebDatabaseHost_GetFileAttributes_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_GetFileAttributes_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.attributes);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WebDatabaseHost_GetFileSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_GetFileSize_Params.prototype.initDefaults_ = function() {
    this.vfsFileName = null;
  };
  WebDatabaseHost_GetFileSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_GetFileSize_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_GetFileSize_Params;
    generated.vfsFileName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  WebDatabaseHost_GetFileSize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vfsFileName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  WebDatabaseHost_GetFileSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_GetFileSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_GetFileSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_GetFileSize_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_GetFileSize_Params.vfsFileName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabaseHost_GetFileSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_GetFileSize_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_GetFileSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vfsFileName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  WebDatabaseHost_GetFileSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_GetFileSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.vfsFileName);
  };
  function WebDatabaseHost_GetFileSize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_GetFileSize_ResponseParams.prototype.initDefaults_ = function() {
    this.size = 0;
  };
  WebDatabaseHost_GetFileSize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_GetFileSize_ResponseParams.generate = function(generator_) {
    var generated = new WebDatabaseHost_GetFileSize_ResponseParams;
    generated.size = generator_.generateInt64();
    return generated;
  };

  WebDatabaseHost_GetFileSize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateInt64(this.size);
    }
    return this;
  };
  WebDatabaseHost_GetFileSize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_GetFileSize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_GetFileSize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_GetFileSize_ResponseParams.validate = function(messageValidator, offset) {
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

  WebDatabaseHost_GetFileSize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_GetFileSize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_GetFileSize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebDatabaseHost_GetFileSize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_GetFileSize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.size);
  };
  function WebDatabaseHost_SetFileSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_SetFileSize_Params.prototype.initDefaults_ = function() {
    this.vfsFileName = null;
    this.expectedSize = 0;
  };
  WebDatabaseHost_SetFileSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_SetFileSize_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_SetFileSize_Params;
    generated.vfsFileName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.expectedSize = generator_.generateInt64();
    return generated;
  };

  WebDatabaseHost_SetFileSize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.vfsFileName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.expectedSize = mutator_.mutateInt64(this.expectedSize);
    }
    return this;
  };
  WebDatabaseHost_SetFileSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_SetFileSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_SetFileSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_SetFileSize_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_SetFileSize_Params.vfsFileName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebDatabaseHost_SetFileSize_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebDatabaseHost_SetFileSize_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_SetFileSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.vfsFileName = decoder.decodeStructPointer(string16$.String16);
    val.expectedSize = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebDatabaseHost_SetFileSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_SetFileSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.vfsFileName);
    encoder.encodeStruct(codec.Int64, val.expectedSize);
  };
  function WebDatabaseHost_SetFileSize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_SetFileSize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WebDatabaseHost_SetFileSize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_SetFileSize_ResponseParams.generate = function(generator_) {
    var generated = new WebDatabaseHost_SetFileSize_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WebDatabaseHost_SetFileSize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WebDatabaseHost_SetFileSize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_SetFileSize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_SetFileSize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_SetFileSize_ResponseParams.validate = function(messageValidator, offset) {
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

  WebDatabaseHost_SetFileSize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_SetFileSize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_SetFileSize_ResponseParams();
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

  WebDatabaseHost_SetFileSize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_SetFileSize_ResponseParams.encodedSize);
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
  function WebDatabaseHost_GetSpaceAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_GetSpaceAvailable_Params.prototype.initDefaults_ = function() {
    this.origin = null;
  };
  WebDatabaseHost_GetSpaceAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_GetSpaceAvailable_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_GetSpaceAvailable_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    return generated;
  };

  WebDatabaseHost_GetSpaceAvailable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    return this;
  };
  WebDatabaseHost_GetSpaceAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_GetSpaceAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_GetSpaceAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_GetSpaceAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_GetSpaceAvailable_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabaseHost_GetSpaceAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_GetSpaceAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_GetSpaceAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  WebDatabaseHost_GetSpaceAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_GetSpaceAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function WebDatabaseHost_GetSpaceAvailable_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_GetSpaceAvailable_ResponseParams.prototype.initDefaults_ = function() {
    this.spaceAvailable = 0;
  };
  WebDatabaseHost_GetSpaceAvailable_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_GetSpaceAvailable_ResponseParams.generate = function(generator_) {
    var generated = new WebDatabaseHost_GetSpaceAvailable_ResponseParams;
    generated.spaceAvailable = generator_.generateInt64();
    return generated;
  };

  WebDatabaseHost_GetSpaceAvailable_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.spaceAvailable = mutator_.mutateInt64(this.spaceAvailable);
    }
    return this;
  };
  WebDatabaseHost_GetSpaceAvailable_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_GetSpaceAvailable_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_GetSpaceAvailable_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_GetSpaceAvailable_ResponseParams.validate = function(messageValidator, offset) {
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

  WebDatabaseHost_GetSpaceAvailable_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WebDatabaseHost_GetSpaceAvailable_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_GetSpaceAvailable_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.spaceAvailable = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebDatabaseHost_GetSpaceAvailable_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_GetSpaceAvailable_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.spaceAvailable);
  };
  function WebDatabaseHost_Opened_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_Opened_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.databaseName = null;
    this.databaseDescription = null;
    this.estimatedSize = 0;
  };
  WebDatabaseHost_Opened_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_Opened_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_Opened_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.databaseName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.databaseDescription = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.estimatedSize = generator_.generateInt64();
    return generated;
  };

  WebDatabaseHost_Opened_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.databaseName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.databaseDescription = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.estimatedSize = mutator_.mutateInt64(this.estimatedSize);
    }
    return this;
  };
  WebDatabaseHost_Opened_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_Opened_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_Opened_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_Opened_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabaseHost_Opened_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabaseHost_Opened_Params.databaseName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabaseHost_Opened_Params.databaseDescription
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebDatabaseHost_Opened_Params.encodedSize = codec.kStructHeaderSize + 32;

  WebDatabaseHost_Opened_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_Opened_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.databaseName = decoder.decodeStructPointer(string16$.String16);
    val.databaseDescription = decoder.decodeStructPointer(string16$.String16);
    val.estimatedSize = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebDatabaseHost_Opened_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_Opened_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string16$.String16, val.databaseName);
    encoder.encodeStructPointer(string16$.String16, val.databaseDescription);
    encoder.encodeStruct(codec.Int64, val.estimatedSize);
  };
  function WebDatabaseHost_Modified_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_Modified_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.databaseName = null;
  };
  WebDatabaseHost_Modified_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_Modified_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_Modified_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.databaseName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  WebDatabaseHost_Modified_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.databaseName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  WebDatabaseHost_Modified_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_Modified_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_Modified_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_Modified_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_Modified_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabaseHost_Modified_Params.databaseName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabaseHost_Modified_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebDatabaseHost_Modified_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_Modified_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.databaseName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  WebDatabaseHost_Modified_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_Modified_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string16$.String16, val.databaseName);
  };
  function WebDatabaseHost_Closed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_Closed_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.databaseName = null;
  };
  WebDatabaseHost_Closed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_Closed_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_Closed_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.databaseName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  WebDatabaseHost_Closed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.databaseName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  WebDatabaseHost_Closed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_Closed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_Closed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_Closed_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_Closed_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabaseHost_Closed_Params.databaseName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebDatabaseHost_Closed_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebDatabaseHost_Closed_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_Closed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.databaseName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  WebDatabaseHost_Closed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_Closed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string16$.String16, val.databaseName);
  };
  function WebDatabaseHost_HandleSqliteError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebDatabaseHost_HandleSqliteError_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.databaseName = null;
    this.error = 0;
  };
  WebDatabaseHost_HandleSqliteError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebDatabaseHost_HandleSqliteError_Params.generate = function(generator_) {
    var generated = new WebDatabaseHost_HandleSqliteError_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.databaseName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.error = generator_.generateInt32();
    return generated;
  };

  WebDatabaseHost_HandleSqliteError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.databaseName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateInt32(this.error);
    }
    return this;
  };
  WebDatabaseHost_HandleSqliteError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebDatabaseHost_HandleSqliteError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebDatabaseHost_HandleSqliteError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebDatabaseHost_HandleSqliteError_Params.validate = function(messageValidator, offset) {
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


    // validate WebDatabaseHost_HandleSqliteError_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WebDatabaseHost_HandleSqliteError_Params.databaseName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebDatabaseHost_HandleSqliteError_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebDatabaseHost_HandleSqliteError_Params.decode = function(decoder) {
    var packed;
    var val = new WebDatabaseHost_HandleSqliteError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.databaseName = decoder.decodeStructPointer(string16$.String16);
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebDatabaseHost_HandleSqliteError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebDatabaseHost_HandleSqliteError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStructPointer(string16$.String16, val.databaseName);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWebDatabase_UpdateSize_Name = 1046974770;
  var kWebDatabase_CloseImmediately_Name = 1471343071;

  function WebDatabasePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebDatabase,
                                                   handleOrPtrInfo);
  }

  function WebDatabaseAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebDatabase, associatedInterfacePtrInfo);
  }

  WebDatabaseAssociatedPtr.prototype =
      Object.create(WebDatabasePtr.prototype);
  WebDatabaseAssociatedPtr.prototype.constructor =
      WebDatabaseAssociatedPtr;

  function WebDatabaseProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebDatabasePtr.prototype.updateSize = function() {
    return WebDatabaseProxy.prototype.updateSize
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseProxy.prototype.updateSize = function(origin, name, size) {
    var params_ = new WebDatabase_UpdateSize_Params();
    params_.origin = origin;
    params_.name = name;
    params_.size = size;
    var builder = new codec.MessageV0Builder(
        kWebDatabase_UpdateSize_Name,
        codec.align(WebDatabase_UpdateSize_Params.encodedSize));
    builder.encodeStruct(WebDatabase_UpdateSize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebDatabasePtr.prototype.closeImmediately = function() {
    return WebDatabaseProxy.prototype.closeImmediately
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseProxy.prototype.closeImmediately = function(origin, name) {
    var params_ = new WebDatabase_CloseImmediately_Params();
    params_.origin = origin;
    params_.name = name;
    var builder = new codec.MessageV0Builder(
        kWebDatabase_CloseImmediately_Name,
        codec.align(WebDatabase_CloseImmediately_Params.encodedSize));
    builder.encodeStruct(WebDatabase_CloseImmediately_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebDatabaseStub(delegate) {
    this.delegate_ = delegate;
  }
  WebDatabaseStub.prototype.updateSize = function(origin, name, size) {
    return this.delegate_ && this.delegate_.updateSize && this.delegate_.updateSize(origin, name, size);
  }
  WebDatabaseStub.prototype.closeImmediately = function(origin, name) {
    return this.delegate_ && this.delegate_.closeImmediately && this.delegate_.closeImmediately(origin, name);
  }

  WebDatabaseStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebDatabase_UpdateSize_Name:
      var params = reader.decodeStruct(WebDatabase_UpdateSize_Params);
      this.updateSize(params.origin, params.name, params.size);
      return true;
    case kWebDatabase_CloseImmediately_Name:
      var params = reader.decodeStruct(WebDatabase_CloseImmediately_Params);
      this.closeImmediately(params.origin, params.name);
      return true;
    default:
      return false;
    }
  };

  WebDatabaseStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWebDatabaseRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebDatabase_UpdateSize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebDatabase_UpdateSize_Params;
      break;
      case kWebDatabase_CloseImmediately_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebDatabase_CloseImmediately_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebDatabaseResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebDatabase = {
    name: 'blink.mojom.WebDatabase',
    kVersion: 0,
    ptrClass: WebDatabasePtr,
    proxyClass: WebDatabaseProxy,
    stubClass: WebDatabaseStub,
    validateRequest: validateWebDatabaseRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/webdatabase/web_database.mojom',
    fuzzMethods: {
      updateSize: {
        params: WebDatabase_UpdateSize_Params,
      },
      closeImmediately: {
        params: WebDatabase_CloseImmediately_Params,
      },
    },
  };
  WebDatabaseStub.prototype.validator = validateWebDatabaseRequest;
  WebDatabaseProxy.prototype.validator = null;
  var kWebDatabaseHost_OpenFile_Name = 1395751331;
  var kWebDatabaseHost_DeleteFile_Name = 515052861;
  var kWebDatabaseHost_GetFileAttributes_Name = 1956128572;
  var kWebDatabaseHost_GetFileSize_Name = 1455489744;
  var kWebDatabaseHost_SetFileSize_Name = 388098893;
  var kWebDatabaseHost_GetSpaceAvailable_Name = 984846450;
  var kWebDatabaseHost_Opened_Name = 190789758;
  var kWebDatabaseHost_Modified_Name = 753268365;
  var kWebDatabaseHost_Closed_Name = 347332854;
  var kWebDatabaseHost_HandleSqliteError_Name = 1218763422;

  function WebDatabaseHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WebDatabaseHost,
                                                   handleOrPtrInfo);
  }

  function WebDatabaseHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WebDatabaseHost, associatedInterfacePtrInfo);
  }

  WebDatabaseHostAssociatedPtr.prototype =
      Object.create(WebDatabaseHostPtr.prototype);
  WebDatabaseHostAssociatedPtr.prototype.constructor =
      WebDatabaseHostAssociatedPtr;

  function WebDatabaseHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  WebDatabaseHostPtr.prototype.openFile = function() {
    return WebDatabaseHostProxy.prototype.openFile
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.openFile = function(vfsFileName, desiredFlags) {
    var params_ = new WebDatabaseHost_OpenFile_Params();
    params_.vfsFileName = vfsFileName;
    params_.desiredFlags = desiredFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebDatabaseHost_OpenFile_Name,
          codec.align(WebDatabaseHost_OpenFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebDatabaseHost_OpenFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebDatabaseHost_OpenFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebDatabaseHostPtr.prototype.deleteFile = function() {
    return WebDatabaseHostProxy.prototype.deleteFile
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.deleteFile = function(vfsFileName, syncDir) {
    var params_ = new WebDatabaseHost_DeleteFile_Params();
    params_.vfsFileName = vfsFileName;
    params_.syncDir = syncDir;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebDatabaseHost_DeleteFile_Name,
          codec.align(WebDatabaseHost_DeleteFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebDatabaseHost_DeleteFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebDatabaseHost_DeleteFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebDatabaseHostPtr.prototype.getFileAttributes = function() {
    return WebDatabaseHostProxy.prototype.getFileAttributes
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.getFileAttributes = function(vfsFileName) {
    var params_ = new WebDatabaseHost_GetFileAttributes_Params();
    params_.vfsFileName = vfsFileName;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebDatabaseHost_GetFileAttributes_Name,
          codec.align(WebDatabaseHost_GetFileAttributes_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebDatabaseHost_GetFileAttributes_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebDatabaseHost_GetFileAttributes_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebDatabaseHostPtr.prototype.getFileSize = function() {
    return WebDatabaseHostProxy.prototype.getFileSize
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.getFileSize = function(vfsFileName) {
    var params_ = new WebDatabaseHost_GetFileSize_Params();
    params_.vfsFileName = vfsFileName;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebDatabaseHost_GetFileSize_Name,
          codec.align(WebDatabaseHost_GetFileSize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebDatabaseHost_GetFileSize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebDatabaseHost_GetFileSize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebDatabaseHostPtr.prototype.setFileSize = function() {
    return WebDatabaseHostProxy.prototype.setFileSize
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.setFileSize = function(vfsFileName, expectedSize) {
    var params_ = new WebDatabaseHost_SetFileSize_Params();
    params_.vfsFileName = vfsFileName;
    params_.expectedSize = expectedSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebDatabaseHost_SetFileSize_Name,
          codec.align(WebDatabaseHost_SetFileSize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebDatabaseHost_SetFileSize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebDatabaseHost_SetFileSize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebDatabaseHostPtr.prototype.getSpaceAvailable = function() {
    return WebDatabaseHostProxy.prototype.getSpaceAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.getSpaceAvailable = function(origin) {
    var params_ = new WebDatabaseHost_GetSpaceAvailable_Params();
    params_.origin = origin;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWebDatabaseHost_GetSpaceAvailable_Name,
          codec.align(WebDatabaseHost_GetSpaceAvailable_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WebDatabaseHost_GetSpaceAvailable_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WebDatabaseHost_GetSpaceAvailable_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WebDatabaseHostPtr.prototype.opened = function() {
    return WebDatabaseHostProxy.prototype.opened
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.opened = function(origin, databaseName, databaseDescription, estimatedSize) {
    var params_ = new WebDatabaseHost_Opened_Params();
    params_.origin = origin;
    params_.databaseName = databaseName;
    params_.databaseDescription = databaseDescription;
    params_.estimatedSize = estimatedSize;
    var builder = new codec.MessageV0Builder(
        kWebDatabaseHost_Opened_Name,
        codec.align(WebDatabaseHost_Opened_Params.encodedSize));
    builder.encodeStruct(WebDatabaseHost_Opened_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebDatabaseHostPtr.prototype.modified = function() {
    return WebDatabaseHostProxy.prototype.modified
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.modified = function(origin, databaseName) {
    var params_ = new WebDatabaseHost_Modified_Params();
    params_.origin = origin;
    params_.databaseName = databaseName;
    var builder = new codec.MessageV0Builder(
        kWebDatabaseHost_Modified_Name,
        codec.align(WebDatabaseHost_Modified_Params.encodedSize));
    builder.encodeStruct(WebDatabaseHost_Modified_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebDatabaseHostPtr.prototype.closed = function() {
    return WebDatabaseHostProxy.prototype.closed
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.closed = function(origin, databaseName) {
    var params_ = new WebDatabaseHost_Closed_Params();
    params_.origin = origin;
    params_.databaseName = databaseName;
    var builder = new codec.MessageV0Builder(
        kWebDatabaseHost_Closed_Name,
        codec.align(WebDatabaseHost_Closed_Params.encodedSize));
    builder.encodeStruct(WebDatabaseHost_Closed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebDatabaseHostPtr.prototype.handleSqliteError = function() {
    return WebDatabaseHostProxy.prototype.handleSqliteError
        .apply(this.ptr.getProxy(), arguments);
  };

  WebDatabaseHostProxy.prototype.handleSqliteError = function(origin, databaseName, error) {
    var params_ = new WebDatabaseHost_HandleSqliteError_Params();
    params_.origin = origin;
    params_.databaseName = databaseName;
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kWebDatabaseHost_HandleSqliteError_Name,
        codec.align(WebDatabaseHost_HandleSqliteError_Params.encodedSize));
    builder.encodeStruct(WebDatabaseHost_HandleSqliteError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebDatabaseHostStub(delegate) {
    this.delegate_ = delegate;
  }
  WebDatabaseHostStub.prototype.openFile = function(vfsFileName, desiredFlags) {
    return this.delegate_ && this.delegate_.openFile && this.delegate_.openFile(vfsFileName, desiredFlags);
  }
  WebDatabaseHostStub.prototype.deleteFile = function(vfsFileName, syncDir) {
    return this.delegate_ && this.delegate_.deleteFile && this.delegate_.deleteFile(vfsFileName, syncDir);
  }
  WebDatabaseHostStub.prototype.getFileAttributes = function(vfsFileName) {
    return this.delegate_ && this.delegate_.getFileAttributes && this.delegate_.getFileAttributes(vfsFileName);
  }
  WebDatabaseHostStub.prototype.getFileSize = function(vfsFileName) {
    return this.delegate_ && this.delegate_.getFileSize && this.delegate_.getFileSize(vfsFileName);
  }
  WebDatabaseHostStub.prototype.setFileSize = function(vfsFileName, expectedSize) {
    return this.delegate_ && this.delegate_.setFileSize && this.delegate_.setFileSize(vfsFileName, expectedSize);
  }
  WebDatabaseHostStub.prototype.getSpaceAvailable = function(origin) {
    return this.delegate_ && this.delegate_.getSpaceAvailable && this.delegate_.getSpaceAvailable(origin);
  }
  WebDatabaseHostStub.prototype.opened = function(origin, databaseName, databaseDescription, estimatedSize) {
    return this.delegate_ && this.delegate_.opened && this.delegate_.opened(origin, databaseName, databaseDescription, estimatedSize);
  }
  WebDatabaseHostStub.prototype.modified = function(origin, databaseName) {
    return this.delegate_ && this.delegate_.modified && this.delegate_.modified(origin, databaseName);
  }
  WebDatabaseHostStub.prototype.closed = function(origin, databaseName) {
    return this.delegate_ && this.delegate_.closed && this.delegate_.closed(origin, databaseName);
  }
  WebDatabaseHostStub.prototype.handleSqliteError = function(origin, databaseName, error) {
    return this.delegate_ && this.delegate_.handleSqliteError && this.delegate_.handleSqliteError(origin, databaseName, error);
  }

  WebDatabaseHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebDatabaseHost_Opened_Name:
      var params = reader.decodeStruct(WebDatabaseHost_Opened_Params);
      this.opened(params.origin, params.databaseName, params.databaseDescription, params.estimatedSize);
      return true;
    case kWebDatabaseHost_Modified_Name:
      var params = reader.decodeStruct(WebDatabaseHost_Modified_Params);
      this.modified(params.origin, params.databaseName);
      return true;
    case kWebDatabaseHost_Closed_Name:
      var params = reader.decodeStruct(WebDatabaseHost_Closed_Params);
      this.closed(params.origin, params.databaseName);
      return true;
    case kWebDatabaseHost_HandleSqliteError_Name:
      var params = reader.decodeStruct(WebDatabaseHost_HandleSqliteError_Params);
      this.handleSqliteError(params.origin, params.databaseName, params.error);
      return true;
    default:
      return false;
    }
  };

  WebDatabaseHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebDatabaseHost_OpenFile_Name:
      var params = reader.decodeStruct(WebDatabaseHost_OpenFile_Params);
      this.openFile(params.vfsFileName, params.desiredFlags).then(function(response) {
        var responseParams =
            new WebDatabaseHost_OpenFile_ResponseParams();
        responseParams.file = response.file;
        var builder = new codec.MessageV1Builder(
            kWebDatabaseHost_OpenFile_Name,
            codec.align(WebDatabaseHost_OpenFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebDatabaseHost_OpenFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebDatabaseHost_DeleteFile_Name:
      var params = reader.decodeStruct(WebDatabaseHost_DeleteFile_Params);
      this.deleteFile(params.vfsFileName, params.syncDir).then(function(response) {
        var responseParams =
            new WebDatabaseHost_DeleteFile_ResponseParams();
        responseParams.sqliteErrorCode = response.sqliteErrorCode;
        var builder = new codec.MessageV1Builder(
            kWebDatabaseHost_DeleteFile_Name,
            codec.align(WebDatabaseHost_DeleteFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebDatabaseHost_DeleteFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebDatabaseHost_GetFileAttributes_Name:
      var params = reader.decodeStruct(WebDatabaseHost_GetFileAttributes_Params);
      this.getFileAttributes(params.vfsFileName).then(function(response) {
        var responseParams =
            new WebDatabaseHost_GetFileAttributes_ResponseParams();
        responseParams.attributes = response.attributes;
        var builder = new codec.MessageV1Builder(
            kWebDatabaseHost_GetFileAttributes_Name,
            codec.align(WebDatabaseHost_GetFileAttributes_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebDatabaseHost_GetFileAttributes_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebDatabaseHost_GetFileSize_Name:
      var params = reader.decodeStruct(WebDatabaseHost_GetFileSize_Params);
      this.getFileSize(params.vfsFileName).then(function(response) {
        var responseParams =
            new WebDatabaseHost_GetFileSize_ResponseParams();
        responseParams.size = response.size;
        var builder = new codec.MessageV1Builder(
            kWebDatabaseHost_GetFileSize_Name,
            codec.align(WebDatabaseHost_GetFileSize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebDatabaseHost_GetFileSize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebDatabaseHost_SetFileSize_Name:
      var params = reader.decodeStruct(WebDatabaseHost_SetFileSize_Params);
      this.setFileSize(params.vfsFileName, params.expectedSize).then(function(response) {
        var responseParams =
            new WebDatabaseHost_SetFileSize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWebDatabaseHost_SetFileSize_Name,
            codec.align(WebDatabaseHost_SetFileSize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebDatabaseHost_SetFileSize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWebDatabaseHost_GetSpaceAvailable_Name:
      var params = reader.decodeStruct(WebDatabaseHost_GetSpaceAvailable_Params);
      this.getSpaceAvailable(params.origin).then(function(response) {
        var responseParams =
            new WebDatabaseHost_GetSpaceAvailable_ResponseParams();
        responseParams.spaceAvailable = response.spaceAvailable;
        var builder = new codec.MessageV1Builder(
            kWebDatabaseHost_GetSpaceAvailable_Name,
            codec.align(WebDatabaseHost_GetSpaceAvailable_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WebDatabaseHost_GetSpaceAvailable_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWebDatabaseHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebDatabaseHost_OpenFile_Name:
        if (message.expectsResponse())
          paramsClass = WebDatabaseHost_OpenFile_Params;
      break;
      case kWebDatabaseHost_DeleteFile_Name:
        if (message.expectsResponse())
          paramsClass = WebDatabaseHost_DeleteFile_Params;
      break;
      case kWebDatabaseHost_GetFileAttributes_Name:
        if (message.expectsResponse())
          paramsClass = WebDatabaseHost_GetFileAttributes_Params;
      break;
      case kWebDatabaseHost_GetFileSize_Name:
        if (message.expectsResponse())
          paramsClass = WebDatabaseHost_GetFileSize_Params;
      break;
      case kWebDatabaseHost_SetFileSize_Name:
        if (message.expectsResponse())
          paramsClass = WebDatabaseHost_SetFileSize_Params;
      break;
      case kWebDatabaseHost_GetSpaceAvailable_Name:
        if (message.expectsResponse())
          paramsClass = WebDatabaseHost_GetSpaceAvailable_Params;
      break;
      case kWebDatabaseHost_Opened_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebDatabaseHost_Opened_Params;
      break;
      case kWebDatabaseHost_Modified_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebDatabaseHost_Modified_Params;
      break;
      case kWebDatabaseHost_Closed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebDatabaseHost_Closed_Params;
      break;
      case kWebDatabaseHost_HandleSqliteError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebDatabaseHost_HandleSqliteError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebDatabaseHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWebDatabaseHost_OpenFile_Name:
        if (message.isResponse())
          paramsClass = WebDatabaseHost_OpenFile_ResponseParams;
        break;
      case kWebDatabaseHost_DeleteFile_Name:
        if (message.isResponse())
          paramsClass = WebDatabaseHost_DeleteFile_ResponseParams;
        break;
      case kWebDatabaseHost_GetFileAttributes_Name:
        if (message.isResponse())
          paramsClass = WebDatabaseHost_GetFileAttributes_ResponseParams;
        break;
      case kWebDatabaseHost_GetFileSize_Name:
        if (message.isResponse())
          paramsClass = WebDatabaseHost_GetFileSize_ResponseParams;
        break;
      case kWebDatabaseHost_SetFileSize_Name:
        if (message.isResponse())
          paramsClass = WebDatabaseHost_SetFileSize_ResponseParams;
        break;
      case kWebDatabaseHost_GetSpaceAvailable_Name:
        if (message.isResponse())
          paramsClass = WebDatabaseHost_GetSpaceAvailable_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WebDatabaseHost = {
    name: 'blink.mojom.WebDatabaseHost',
    kVersion: 0,
    ptrClass: WebDatabaseHostPtr,
    proxyClass: WebDatabaseHostProxy,
    stubClass: WebDatabaseHostStub,
    validateRequest: validateWebDatabaseHostRequest,
    validateResponse: validateWebDatabaseHostResponse,
    mojomId: 'third_party/blink/public/platform/modules/webdatabase/web_database.mojom',
    fuzzMethods: {
      openFile: {
        params: WebDatabaseHost_OpenFile_Params,
      },
      deleteFile: {
        params: WebDatabaseHost_DeleteFile_Params,
      },
      getFileAttributes: {
        params: WebDatabaseHost_GetFileAttributes_Params,
      },
      getFileSize: {
        params: WebDatabaseHost_GetFileSize_Params,
      },
      setFileSize: {
        params: WebDatabaseHost_SetFileSize_Params,
      },
      getSpaceAvailable: {
        params: WebDatabaseHost_GetSpaceAvailable_Params,
      },
      opened: {
        params: WebDatabaseHost_Opened_Params,
      },
      modified: {
        params: WebDatabaseHost_Modified_Params,
      },
      closed: {
        params: WebDatabaseHost_Closed_Params,
      },
      handleSqliteError: {
        params: WebDatabaseHost_HandleSqliteError_Params,
      },
    },
  };
  WebDatabaseHostStub.prototype.validator = validateWebDatabaseHostRequest;
  WebDatabaseHostProxy.prototype.validator = validateWebDatabaseHostResponse;
  exports.WebDatabase = WebDatabase;
  exports.WebDatabasePtr = WebDatabasePtr;
  exports.WebDatabaseAssociatedPtr = WebDatabaseAssociatedPtr;
  exports.WebDatabaseHost = WebDatabaseHost;
  exports.WebDatabaseHostPtr = WebDatabaseHostPtr;
  exports.WebDatabaseHostAssociatedPtr = WebDatabaseHostAssociatedPtr;
})();