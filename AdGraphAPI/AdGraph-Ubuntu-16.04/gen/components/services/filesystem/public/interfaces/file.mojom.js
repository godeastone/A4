// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/filesystem/public/interfaces/file.mojom';
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
  var types$ =
      mojo.internal.exposeNamespace('filesystem.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/services/filesystem/public/interfaces/types.mojom', 'types.mojom.js');
  }
  var file$ =
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



  function File_Close_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Close_Params.prototype.initDefaults_ = function() {
  };
  File_Close_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Close_Params.generate = function(generator_) {
    var generated = new File_Close_Params;
    return generated;
  };

  File_Close_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_Close_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Close_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Close_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Close_Params.validate = function(messageValidator, offset) {
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

  File_Close_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Close_Params.decode = function(decoder) {
    var packed;
    var val = new File_Close_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Close_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Close_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_Close_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Close_ResponseParams.prototype.initDefaults_ = function() {
    this.err = 0;
  };
  File_Close_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Close_ResponseParams.generate = function(generator_) {
    var generated = new File_Close_ResponseParams;
    generated.err = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Close_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.err = mutator_.mutateEnum(this.err, 0, 0);
    }
    return this;
  };
  File_Close_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Close_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Close_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Close_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Close_ResponseParams.err
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Close_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Close_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Close_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.err = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Close_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Close_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.err);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Read_Params.prototype.initDefaults_ = function() {
    this.numBytesToRead = 0;
    this.whence = 0;
    this.offset = 0;
  };
  File_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Read_Params.generate = function(generator_) {
    var generated = new File_Read_Params;
    generated.numBytesToRead = generator_.generateUint32();
    generated.offset = generator_.generateInt64();
    generated.whence = generator_.generateEnum(0, 2);
    return generated;
  };

  File_Read_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.numBytesToRead = mutator_.mutateUint32(this.numBytesToRead);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateInt64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.whence = mutator_.mutateEnum(this.whence, 0, 2);
    }
    return this;
  };
  File_Read_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Read_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Read_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Read_Params.validate = function(messageValidator, offset) {
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




    // validate File_Read_Params.whence
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, types$.Whence);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Read_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Read_Params.decode = function(decoder) {
    var packed;
    var val = new File_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numBytesToRead = decoder.decodeStruct(codec.Uint32);
    val.whence = decoder.decodeStruct(codec.Int32);
    val.offset = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Read_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.numBytesToRead);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.encodeStruct(codec.Int64, val.offset);
  };
  function File_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.bytesRead = null;
  };
  File_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Read_ResponseParams.generate = function(generator_) {
    var generated = new File_Read_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.bytesRead = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  File_Read_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.bytesRead = mutator_.mutateArray(this.bytesRead, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  File_Read_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Read_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Read_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Read_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Read_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate File_Read_ResponseParams.bytesRead
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bytesRead = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  File_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.bytesRead);
  };
  function File_Write_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Write_Params.prototype.initDefaults_ = function() {
    this.bytesToWrite = null;
    this.offset = 0;
    this.whence = 0;
  };
  File_Write_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Write_Params.generate = function(generator_) {
    var generated = new File_Write_Params;
    generated.bytesToWrite = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.offset = generator_.generateInt64();
    generated.whence = generator_.generateEnum(0, 2);
    return generated;
  };

  File_Write_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bytesToWrite = mutator_.mutateArray(this.bytesToWrite, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateInt64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.whence = mutator_.mutateEnum(this.whence, 0, 2);
    }
    return this;
  };
  File_Write_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Write_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Write_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Write_Params.validate = function(messageValidator, offset) {
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


    // validate File_Write_Params.bytesToWrite
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate File_Write_Params.whence
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, types$.Whence);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Write_Params.encodedSize = codec.kStructHeaderSize + 24;

  File_Write_Params.decode = function(decoder) {
    var packed;
    var val = new File_Write_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bytesToWrite = decoder.decodeArrayPointer(codec.Uint8);
    val.offset = decoder.decodeStruct(codec.Int64);
    val.whence = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Write_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Write_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.bytesToWrite);
    encoder.encodeStruct(codec.Int64, val.offset);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Write_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Write_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.numBytesWritten = 0;
  };
  File_Write_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Write_ResponseParams.generate = function(generator_) {
    var generated = new File_Write_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.numBytesWritten = generator_.generateUint32();
    return generated;
  };

  File_Write_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.numBytesWritten = mutator_.mutateUint32(this.numBytesWritten);
    }
    return this;
  };
  File_Write_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Write_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Write_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Write_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Write_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Write_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Write_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Write_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    val.numBytesWritten = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  File_Write_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Write_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.encodeStruct(codec.Uint32, val.numBytesWritten);
  };
  function File_Tell_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Tell_Params.prototype.initDefaults_ = function() {
  };
  File_Tell_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Tell_Params.generate = function(generator_) {
    var generated = new File_Tell_Params;
    return generated;
  };

  File_Tell_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_Tell_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Tell_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Tell_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Tell_Params.validate = function(messageValidator, offset) {
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

  File_Tell_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Tell_Params.decode = function(decoder) {
    var packed;
    var val = new File_Tell_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Tell_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Tell_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_Tell_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Tell_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.position = 0;
  };
  File_Tell_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Tell_ResponseParams.generate = function(generator_) {
    var generated = new File_Tell_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.position = generator_.generateInt64();
    return generated;
  };

  File_Tell_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.position = mutator_.mutateInt64(this.position);
    }
    return this;
  };
  File_Tell_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Tell_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Tell_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Tell_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Tell_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Tell_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Tell_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Tell_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.position = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Tell_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Tell_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.position);
  };
  function File_Seek_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Seek_Params.prototype.initDefaults_ = function() {
    this.offset = 0;
    this.whence = 0;
  };
  File_Seek_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Seek_Params.generate = function(generator_) {
    var generated = new File_Seek_Params;
    generated.offset = generator_.generateInt64();
    generated.whence = generator_.generateEnum(0, 2);
    return generated;
  };

  File_Seek_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateInt64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.whence = mutator_.mutateEnum(this.whence, 0, 2);
    }
    return this;
  };
  File_Seek_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Seek_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Seek_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Seek_Params.validate = function(messageValidator, offset) {
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



    // validate File_Seek_Params.whence
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, types$.Whence);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Seek_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Seek_Params.decode = function(decoder) {
    var packed;
    var val = new File_Seek_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.offset = decoder.decodeStruct(codec.Int64);
    val.whence = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Seek_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Seek_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.offset);
    encoder.encodeStruct(codec.Int32, val.whence);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Seek_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Seek_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.position = 0;
  };
  File_Seek_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Seek_ResponseParams.generate = function(generator_) {
    var generated = new File_Seek_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.position = generator_.generateInt64();
    return generated;
  };

  File_Seek_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.position = mutator_.mutateInt64(this.position);
    }
    return this;
  };
  File_Seek_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Seek_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Seek_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Seek_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Seek_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  File_Seek_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Seek_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Seek_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.position = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Seek_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Seek_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.position);
  };
  function File_Stat_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Stat_Params.prototype.initDefaults_ = function() {
  };
  File_Stat_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Stat_Params.generate = function(generator_) {
    var generated = new File_Stat_Params;
    return generated;
  };

  File_Stat_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_Stat_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Stat_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Stat_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Stat_Params.validate = function(messageValidator, offset) {
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

  File_Stat_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Stat_Params.decode = function(decoder) {
    var packed;
    var val = new File_Stat_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Stat_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Stat_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_Stat_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Stat_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.fileInformation = null;
  };
  File_Stat_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Stat_ResponseParams.generate = function(generator_) {
    var generated = new File_Stat_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.fileInformation = generator_.generateStruct(filesystem.mojom.FileInformation, true);
    return generated;
  };

  File_Stat_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.fileInformation = mutator_.mutateStruct(filesystem.mojom.FileInformation, true);
    }
    return this;
  };
  File_Stat_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Stat_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Stat_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Stat_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Stat_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate File_Stat_ResponseParams.fileInformation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.FileInformation, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Stat_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_Stat_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Stat_ResponseParams();
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

  File_Stat_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Stat_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(types$.FileInformation, val.fileInformation);
  };
  function File_Truncate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Truncate_Params.prototype.initDefaults_ = function() {
    this.size = 0;
  };
  File_Truncate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Truncate_Params.generate = function(generator_) {
    var generated = new File_Truncate_Params;
    generated.size = generator_.generateInt64();
    return generated;
  };

  File_Truncate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateInt64(this.size);
    }
    return this;
  };
  File_Truncate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Truncate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Truncate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Truncate_Params.validate = function(messageValidator, offset) {
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

  File_Truncate_Params.encodedSize = codec.kStructHeaderSize + 8;

  File_Truncate_Params.decode = function(decoder) {
    var packed;
    var val = new File_Truncate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Int64);
    return val;
  };

  File_Truncate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Truncate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.size);
  };
  function File_Truncate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Truncate_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Truncate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Truncate_ResponseParams.generate = function(generator_) {
    var generated = new File_Truncate_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Truncate_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  File_Truncate_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Truncate_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Truncate_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Truncate_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Truncate_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Truncate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Truncate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Truncate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Truncate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Truncate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Touch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Touch_Params.prototype.initDefaults_ = function() {
    this.atime = null;
    this.mtime = null;
  };
  File_Touch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Touch_Params.generate = function(generator_) {
    var generated = new File_Touch_Params;
    generated.atime = generator_.generateStruct(filesystem.mojom.TimespecOrNow, true);
    generated.mtime = generator_.generateStruct(filesystem.mojom.TimespecOrNow, true);
    return generated;
  };

  File_Touch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.atime = mutator_.mutateStruct(filesystem.mojom.TimespecOrNow, true);
    }
    if (mutator_.chooseMutateField()) {
      this.mtime = mutator_.mutateStruct(filesystem.mojom.TimespecOrNow, true);
    }
    return this;
  };
  File_Touch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Touch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Touch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Touch_Params.validate = function(messageValidator, offset) {
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


    // validate File_Touch_Params.atime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, types$.TimespecOrNow, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate File_Touch_Params.mtime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, types$.TimespecOrNow, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Touch_Params.encodedSize = codec.kStructHeaderSize + 16;

  File_Touch_Params.decode = function(decoder) {
    var packed;
    var val = new File_Touch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.atime = decoder.decodeStructPointer(types$.TimespecOrNow);
    val.mtime = decoder.decodeStructPointer(types$.TimespecOrNow);
    return val;
  };

  File_Touch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Touch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(types$.TimespecOrNow, val.atime);
    encoder.encodeStructPointer(types$.TimespecOrNow, val.mtime);
  };
  function File_Touch_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Touch_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Touch_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Touch_ResponseParams.generate = function(generator_) {
    var generated = new File_Touch_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Touch_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  File_Touch_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Touch_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Touch_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Touch_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Touch_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Touch_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Touch_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Touch_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Touch_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Touch_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Dup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Dup_Params.prototype.initDefaults_ = function() {
    this.file = new bindings.InterfaceRequest();
  };
  File_Dup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Dup_Params.generate = function(generator_) {
    var generated = new File_Dup_Params;
    generated.file = generator_.generateInterfaceRequest("filesystem.mojom.File", false);
    return generated;
  };

  File_Dup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateInterfaceRequest(this.file, "filesystem.mojom.File", false);
    }
    return this;
  };
  File_Dup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, ["filesystem.mojom.FileRequest"]);
    }
    return handles;
  };

  File_Dup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Dup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.file = handles[idx++];;
    return idx;
  };

  File_Dup_Params.validate = function(messageValidator, offset) {
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


    // validate File_Dup_Params.file
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Dup_Params.encodedSize = codec.kStructHeaderSize + 8;

  File_Dup_Params.decode = function(decoder) {
    var packed;
    var val = new File_Dup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Dup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Dup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.file);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Dup_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Dup_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Dup_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Dup_ResponseParams.generate = function(generator_) {
    var generated = new File_Dup_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Dup_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  File_Dup_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Dup_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Dup_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Dup_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Dup_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Dup_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Dup_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Dup_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Dup_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Dup_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Flush_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Flush_Params.prototype.initDefaults_ = function() {
  };
  File_Flush_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Flush_Params.generate = function(generator_) {
    var generated = new File_Flush_Params;
    return generated;
  };

  File_Flush_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_Flush_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Flush_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Flush_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Flush_Params.validate = function(messageValidator, offset) {
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

  File_Flush_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Flush_Params.decode = function(decoder) {
    var packed;
    var val = new File_Flush_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Flush_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Flush_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_Flush_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Flush_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Flush_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Flush_ResponseParams.generate = function(generator_) {
    var generated = new File_Flush_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Flush_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  File_Flush_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Flush_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Flush_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Flush_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Flush_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Flush_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Flush_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Flush_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Flush_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Flush_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Lock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Lock_Params.prototype.initDefaults_ = function() {
  };
  File_Lock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Lock_Params.generate = function(generator_) {
    var generated = new File_Lock_Params;
    return generated;
  };

  File_Lock_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_Lock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Lock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Lock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Lock_Params.validate = function(messageValidator, offset) {
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

  File_Lock_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Lock_Params.decode = function(decoder) {
    var packed;
    var val = new File_Lock_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Lock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Lock_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_Lock_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Lock_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Lock_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Lock_ResponseParams.generate = function(generator_) {
    var generated = new File_Lock_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Lock_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  File_Lock_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Lock_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Lock_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Lock_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Lock_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Lock_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Lock_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Lock_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Lock_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Lock_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_Unlock_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Unlock_Params.prototype.initDefaults_ = function() {
  };
  File_Unlock_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Unlock_Params.generate = function(generator_) {
    var generated = new File_Unlock_Params;
    return generated;
  };

  File_Unlock_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_Unlock_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Unlock_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Unlock_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Unlock_Params.validate = function(messageValidator, offset) {
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

  File_Unlock_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_Unlock_Params.decode = function(decoder) {
    var packed;
    var val = new File_Unlock_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_Unlock_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Unlock_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_Unlock_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_Unlock_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  File_Unlock_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_Unlock_ResponseParams.generate = function(generator_) {
    var generated = new File_Unlock_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    return generated;
  };

  File_Unlock_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    return this;
  };
  File_Unlock_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_Unlock_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_Unlock_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_Unlock_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_Unlock_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_Unlock_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  File_Unlock_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_Unlock_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  File_Unlock_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_Unlock_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function File_AsHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_AsHandle_Params.prototype.initDefaults_ = function() {
  };
  File_AsHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_AsHandle_Params.generate = function(generator_) {
    var generated = new File_AsHandle_Params;
    return generated;
  };

  File_AsHandle_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  File_AsHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File_AsHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_AsHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File_AsHandle_Params.validate = function(messageValidator, offset) {
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

  File_AsHandle_Params.encodedSize = codec.kStructHeaderSize + 0;

  File_AsHandle_Params.decode = function(decoder) {
    var packed;
    var val = new File_AsHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  File_AsHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_AsHandle_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function File_AsHandle_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File_AsHandle_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.fileHandle = null;
  };
  File_AsHandle_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File_AsHandle_ResponseParams.generate = function(generator_) {
    var generated = new File_AsHandle_ResponseParams;
    generated.error = generator_.generateEnum(0, 0);
    generated.fileHandle = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  File_AsHandle_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.fileHandle = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  File_AsHandle_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fileHandle !== null) {
      Array.prototype.push.apply(handles, this.fileHandle.getHandleDeps());
    }
    return handles;
  };

  File_AsHandle_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File_AsHandle_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.fileHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  File_AsHandle_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate File_AsHandle_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, file_error$.FileError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate File_AsHandle_ResponseParams.fileHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File_AsHandle_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  File_AsHandle_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new File_AsHandle_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.fileHandle = decoder.decodeStructPointer(file$.File);
    return val;
  };

  File_AsHandle_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File_AsHandle_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(file$.File, val.fileHandle);
  };
  var kFile_Close_Name = 1879321381;
  var kFile_Read_Name = 1746256521;
  var kFile_Write_Name = 1633638980;
  var kFile_Tell_Name = 1219641702;
  var kFile_Seek_Name = 12740908;
  var kFile_Stat_Name = 1162038014;
  var kFile_Truncate_Name = 1376113949;
  var kFile_Touch_Name = 1060022652;
  var kFile_Dup_Name = 135328884;
  var kFile_Flush_Name = 1223678908;
  var kFile_Lock_Name = 1813429016;
  var kFile_Unlock_Name = 2024797390;
  var kFile_AsHandle_Name = 233069678;

  function FilePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(File,
                                                   handleOrPtrInfo);
  }

  function FileAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        File, associatedInterfacePtrInfo);
  }

  FileAssociatedPtr.prototype =
      Object.create(FilePtr.prototype);
  FileAssociatedPtr.prototype.constructor =
      FileAssociatedPtr;

  function FileProxy(receiver) {
    this.receiver_ = receiver;
  }
  FilePtr.prototype.close = function() {
    return FileProxy.prototype.close
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.close = function() {
    var params_ = new File_Close_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Close_Name,
          codec.align(File_Close_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Close_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Close_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.read = function() {
    return FileProxy.prototype.read
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.read = function(numBytesToRead, offset, whence) {
    var params_ = new File_Read_Params();
    params_.numBytesToRead = numBytesToRead;
    params_.offset = offset;
    params_.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Read_Name,
          codec.align(File_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Read_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.write = function() {
    return FileProxy.prototype.write
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.write = function(bytesToWrite, offset, whence) {
    var params_ = new File_Write_Params();
    params_.bytesToWrite = bytesToWrite;
    params_.offset = offset;
    params_.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Write_Name,
          codec.align(File_Write_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Write_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Write_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.tell = function() {
    return FileProxy.prototype.tell
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.tell = function() {
    var params_ = new File_Tell_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Tell_Name,
          codec.align(File_Tell_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Tell_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Tell_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.seek = function() {
    return FileProxy.prototype.seek
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.seek = function(offset, whence) {
    var params_ = new File_Seek_Params();
    params_.offset = offset;
    params_.whence = whence;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Seek_Name,
          codec.align(File_Seek_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Seek_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Seek_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.stat = function() {
    return FileProxy.prototype.stat
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.stat = function() {
    var params_ = new File_Stat_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Stat_Name,
          codec.align(File_Stat_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Stat_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Stat_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.truncate = function() {
    return FileProxy.prototype.truncate
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.truncate = function(size) {
    var params_ = new File_Truncate_Params();
    params_.size = size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Truncate_Name,
          codec.align(File_Truncate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Truncate_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Truncate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.touch = function() {
    return FileProxy.prototype.touch
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.touch = function(atime, mtime) {
    var params_ = new File_Touch_Params();
    params_.atime = atime;
    params_.mtime = mtime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Touch_Name,
          codec.align(File_Touch_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Touch_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Touch_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.dup = function() {
    return FileProxy.prototype.dup
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.dup = function(file) {
    var params_ = new File_Dup_Params();
    params_.file = file;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Dup_Name,
          codec.align(File_Dup_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Dup_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Dup_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.flush = function() {
    return FileProxy.prototype.flush
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.flush = function() {
    var params_ = new File_Flush_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Flush_Name,
          codec.align(File_Flush_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Flush_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Flush_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.lock = function() {
    return FileProxy.prototype.lock
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.lock = function() {
    var params_ = new File_Lock_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Lock_Name,
          codec.align(File_Lock_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Lock_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Lock_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.unlock = function() {
    return FileProxy.prototype.unlock
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.unlock = function() {
    var params_ = new File_Unlock_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_Unlock_Name,
          codec.align(File_Unlock_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_Unlock_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_Unlock_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FilePtr.prototype.asHandle = function() {
    return FileProxy.prototype.asHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  FileProxy.prototype.asHandle = function() {
    var params_ = new File_AsHandle_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFile_AsHandle_Name,
          codec.align(File_AsHandle_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(File_AsHandle_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(File_AsHandle_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FileStub(delegate) {
    this.delegate_ = delegate;
  }
  FileStub.prototype.close = function() {
    return this.delegate_ && this.delegate_.close && this.delegate_.close();
  }
  FileStub.prototype.read = function(numBytesToRead, offset, whence) {
    return this.delegate_ && this.delegate_.read && this.delegate_.read(numBytesToRead, offset, whence);
  }
  FileStub.prototype.write = function(bytesToWrite, offset, whence) {
    return this.delegate_ && this.delegate_.write && this.delegate_.write(bytesToWrite, offset, whence);
  }
  FileStub.prototype.tell = function() {
    return this.delegate_ && this.delegate_.tell && this.delegate_.tell();
  }
  FileStub.prototype.seek = function(offset, whence) {
    return this.delegate_ && this.delegate_.seek && this.delegate_.seek(offset, whence);
  }
  FileStub.prototype.stat = function() {
    return this.delegate_ && this.delegate_.stat && this.delegate_.stat();
  }
  FileStub.prototype.truncate = function(size) {
    return this.delegate_ && this.delegate_.truncate && this.delegate_.truncate(size);
  }
  FileStub.prototype.touch = function(atime, mtime) {
    return this.delegate_ && this.delegate_.touch && this.delegate_.touch(atime, mtime);
  }
  FileStub.prototype.dup = function(file) {
    return this.delegate_ && this.delegate_.dup && this.delegate_.dup(file);
  }
  FileStub.prototype.flush = function() {
    return this.delegate_ && this.delegate_.flush && this.delegate_.flush();
  }
  FileStub.prototype.lock = function() {
    return this.delegate_ && this.delegate_.lock && this.delegate_.lock();
  }
  FileStub.prototype.unlock = function() {
    return this.delegate_ && this.delegate_.unlock && this.delegate_.unlock();
  }
  FileStub.prototype.asHandle = function() {
    return this.delegate_ && this.delegate_.asHandle && this.delegate_.asHandle();
  }

  FileStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FileStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFile_Close_Name:
      var params = reader.decodeStruct(File_Close_Params);
      this.close().then(function(response) {
        var responseParams =
            new File_Close_ResponseParams();
        responseParams.err = response.err;
        var builder = new codec.MessageV1Builder(
            kFile_Close_Name,
            codec.align(File_Close_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Close_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Read_Name:
      var params = reader.decodeStruct(File_Read_Params);
      this.read(params.numBytesToRead, params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_Read_ResponseParams();
        responseParams.error = response.error;
        responseParams.bytesRead = response.bytesRead;
        var builder = new codec.MessageV1Builder(
            kFile_Read_Name,
            codec.align(File_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Write_Name:
      var params = reader.decodeStruct(File_Write_Params);
      this.write(params.bytesToWrite, params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_Write_ResponseParams();
        responseParams.error = response.error;
        responseParams.numBytesWritten = response.numBytesWritten;
        var builder = new codec.MessageV1Builder(
            kFile_Write_Name,
            codec.align(File_Write_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Write_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Tell_Name:
      var params = reader.decodeStruct(File_Tell_Params);
      this.tell().then(function(response) {
        var responseParams =
            new File_Tell_ResponseParams();
        responseParams.error = response.error;
        responseParams.position = response.position;
        var builder = new codec.MessageV1Builder(
            kFile_Tell_Name,
            codec.align(File_Tell_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Tell_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Seek_Name:
      var params = reader.decodeStruct(File_Seek_Params);
      this.seek(params.offset, params.whence).then(function(response) {
        var responseParams =
            new File_Seek_ResponseParams();
        responseParams.error = response.error;
        responseParams.position = response.position;
        var builder = new codec.MessageV1Builder(
            kFile_Seek_Name,
            codec.align(File_Seek_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Seek_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Stat_Name:
      var params = reader.decodeStruct(File_Stat_Params);
      this.stat().then(function(response) {
        var responseParams =
            new File_Stat_ResponseParams();
        responseParams.error = response.error;
        responseParams.fileInformation = response.fileInformation;
        var builder = new codec.MessageV1Builder(
            kFile_Stat_Name,
            codec.align(File_Stat_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Stat_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Truncate_Name:
      var params = reader.decodeStruct(File_Truncate_Params);
      this.truncate(params.size).then(function(response) {
        var responseParams =
            new File_Truncate_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kFile_Truncate_Name,
            codec.align(File_Truncate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Truncate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Touch_Name:
      var params = reader.decodeStruct(File_Touch_Params);
      this.touch(params.atime, params.mtime).then(function(response) {
        var responseParams =
            new File_Touch_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kFile_Touch_Name,
            codec.align(File_Touch_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Touch_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Dup_Name:
      var params = reader.decodeStruct(File_Dup_Params);
      this.dup(params.file).then(function(response) {
        var responseParams =
            new File_Dup_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kFile_Dup_Name,
            codec.align(File_Dup_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Dup_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Flush_Name:
      var params = reader.decodeStruct(File_Flush_Params);
      this.flush().then(function(response) {
        var responseParams =
            new File_Flush_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kFile_Flush_Name,
            codec.align(File_Flush_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Flush_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Lock_Name:
      var params = reader.decodeStruct(File_Lock_Params);
      this.lock().then(function(response) {
        var responseParams =
            new File_Lock_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kFile_Lock_Name,
            codec.align(File_Lock_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Lock_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_Unlock_Name:
      var params = reader.decodeStruct(File_Unlock_Params);
      this.unlock().then(function(response) {
        var responseParams =
            new File_Unlock_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kFile_Unlock_Name,
            codec.align(File_Unlock_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_Unlock_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFile_AsHandle_Name:
      var params = reader.decodeStruct(File_AsHandle_Params);
      this.asHandle().then(function(response) {
        var responseParams =
            new File_AsHandle_ResponseParams();
        responseParams.error = response.error;
        responseParams.fileHandle = response.fileHandle;
        var builder = new codec.MessageV1Builder(
            kFile_AsHandle_Name,
            codec.align(File_AsHandle_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(File_AsHandle_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFileRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFile_Close_Name:
        if (message.expectsResponse())
          paramsClass = File_Close_Params;
      break;
      case kFile_Read_Name:
        if (message.expectsResponse())
          paramsClass = File_Read_Params;
      break;
      case kFile_Write_Name:
        if (message.expectsResponse())
          paramsClass = File_Write_Params;
      break;
      case kFile_Tell_Name:
        if (message.expectsResponse())
          paramsClass = File_Tell_Params;
      break;
      case kFile_Seek_Name:
        if (message.expectsResponse())
          paramsClass = File_Seek_Params;
      break;
      case kFile_Stat_Name:
        if (message.expectsResponse())
          paramsClass = File_Stat_Params;
      break;
      case kFile_Truncate_Name:
        if (message.expectsResponse())
          paramsClass = File_Truncate_Params;
      break;
      case kFile_Touch_Name:
        if (message.expectsResponse())
          paramsClass = File_Touch_Params;
      break;
      case kFile_Dup_Name:
        if (message.expectsResponse())
          paramsClass = File_Dup_Params;
      break;
      case kFile_Flush_Name:
        if (message.expectsResponse())
          paramsClass = File_Flush_Params;
      break;
      case kFile_Lock_Name:
        if (message.expectsResponse())
          paramsClass = File_Lock_Params;
      break;
      case kFile_Unlock_Name:
        if (message.expectsResponse())
          paramsClass = File_Unlock_Params;
      break;
      case kFile_AsHandle_Name:
        if (message.expectsResponse())
          paramsClass = File_AsHandle_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFileResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFile_Close_Name:
        if (message.isResponse())
          paramsClass = File_Close_ResponseParams;
        break;
      case kFile_Read_Name:
        if (message.isResponse())
          paramsClass = File_Read_ResponseParams;
        break;
      case kFile_Write_Name:
        if (message.isResponse())
          paramsClass = File_Write_ResponseParams;
        break;
      case kFile_Tell_Name:
        if (message.isResponse())
          paramsClass = File_Tell_ResponseParams;
        break;
      case kFile_Seek_Name:
        if (message.isResponse())
          paramsClass = File_Seek_ResponseParams;
        break;
      case kFile_Stat_Name:
        if (message.isResponse())
          paramsClass = File_Stat_ResponseParams;
        break;
      case kFile_Truncate_Name:
        if (message.isResponse())
          paramsClass = File_Truncate_ResponseParams;
        break;
      case kFile_Touch_Name:
        if (message.isResponse())
          paramsClass = File_Touch_ResponseParams;
        break;
      case kFile_Dup_Name:
        if (message.isResponse())
          paramsClass = File_Dup_ResponseParams;
        break;
      case kFile_Flush_Name:
        if (message.isResponse())
          paramsClass = File_Flush_ResponseParams;
        break;
      case kFile_Lock_Name:
        if (message.isResponse())
          paramsClass = File_Lock_ResponseParams;
        break;
      case kFile_Unlock_Name:
        if (message.isResponse())
          paramsClass = File_Unlock_ResponseParams;
        break;
      case kFile_AsHandle_Name:
        if (message.isResponse())
          paramsClass = File_AsHandle_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var File = {
    name: 'filesystem.mojom.File',
    kVersion: 0,
    ptrClass: FilePtr,
    proxyClass: FileProxy,
    stubClass: FileStub,
    validateRequest: validateFileRequest,
    validateResponse: validateFileResponse,
    mojomId: 'components/services/filesystem/public/interfaces/file.mojom',
    fuzzMethods: {
      close: {
        params: File_Close_Params,
      },
      read: {
        params: File_Read_Params,
      },
      write: {
        params: File_Write_Params,
      },
      tell: {
        params: File_Tell_Params,
      },
      seek: {
        params: File_Seek_Params,
      },
      stat: {
        params: File_Stat_Params,
      },
      truncate: {
        params: File_Truncate_Params,
      },
      touch: {
        params: File_Touch_Params,
      },
      dup: {
        params: File_Dup_Params,
      },
      flush: {
        params: File_Flush_Params,
      },
      lock: {
        params: File_Lock_Params,
      },
      unlock: {
        params: File_Unlock_Params,
      },
      asHandle: {
        params: File_AsHandle_Params,
      },
    },
  };
  FileStub.prototype.validator = validateFileRequest;
  FileProxy.prototype.validator = validateFileResponse;
  exports.File = File;
  exports.FilePtr = FilePtr;
  exports.FileAssociatedPtr = FileAssociatedPtr;
})();