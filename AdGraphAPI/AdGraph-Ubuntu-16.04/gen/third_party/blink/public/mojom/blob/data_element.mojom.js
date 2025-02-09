// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/blob/data_element.mojom';
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
        'mojo/public/mojom/base/file.mojom', '../../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', 'blob.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function DataElementBytes(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataElementBytes.kMaximumEmbeddedDataSize = 256000;
  DataElementBytes.prototype.initDefaults_ = function() {
    this.length = 0;
    this.embeddedData = null;
    this.data = new BytesProviderPtr();
  };
  DataElementBytes.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DataElementBytes.generate = function(generator_) {
    var generated = new DataElementBytes;
    generated.length = generator_.generateUint64();
    generated.embeddedData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.data = generator_.generateInterface("blink.mojom.BytesProvider", false);
    return generated;
  };

  DataElementBytes.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint64(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.embeddedData = mutator_.mutateArray(this.embeddedData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateInterface(this.data, "blink.mojom.BytesProvider", false);
    }
    return this;
  };
  DataElementBytes.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.data !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BytesProviderPtr"]);
    }
    return handles;
  };

  DataElementBytes.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DataElementBytes.prototype.setHandlesInternal_ = function(handles, idx) {
    this.data = handles[idx++];;
    return idx;
  };

  DataElementBytes.validate = function(messageValidator, offset) {
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



    // validate DataElementBytes.embeddedData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DataElementBytes.data
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataElementBytes.encodedSize = codec.kStructHeaderSize + 24;

  DataElementBytes.decode = function(decoder) {
    var packed;
    var val = new DataElementBytes();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.length = decoder.decodeStruct(codec.Uint64);
    val.embeddedData = decoder.decodeArrayPointer(codec.Uint8);
    val.data = decoder.decodeStruct(new codec.Interface(BytesProviderPtr));
    return val;
  };

  DataElementBytes.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataElementBytes.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.length);
    encoder.encodeArrayPointer(codec.Uint8, val.embeddedData);
    encoder.encodeStruct(new codec.Interface(BytesProviderPtr), val.data);
  };
  function DataElementFile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataElementFile.prototype.initDefaults_ = function() {
    this.path = null;
    this.offset = 0;
    this.length = 0;
    this.expectedModificationTime = null;
  };
  DataElementFile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DataElementFile.generate = function(generator_) {
    var generated = new DataElementFile;
    generated.path = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.offset = generator_.generateUint64();
    generated.length = generator_.generateUint64();
    generated.expectedModificationTime = generator_.generateStruct(mojoBase.mojom.Time, true);
    return generated;
  };

  DataElementFile.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint64(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.expectedModificationTime = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    return this;
  };
  DataElementFile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DataElementFile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DataElementFile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DataElementFile.validate = function(messageValidator, offset) {
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


    // validate DataElementFile.path
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate DataElementFile.expectedModificationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataElementFile.encodedSize = codec.kStructHeaderSize + 32;

  DataElementFile.decode = function(decoder) {
    var packed;
    var val = new DataElementFile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStructPointer(file_path$.FilePath);
    val.offset = decoder.decodeStruct(codec.Uint64);
    val.length = decoder.decodeStruct(codec.Uint64);
    val.expectedModificationTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  DataElementFile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataElementFile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.path);
    encoder.encodeStruct(codec.Uint64, val.offset);
    encoder.encodeStruct(codec.Uint64, val.length);
    encoder.encodeStructPointer(time$.Time, val.expectedModificationTime);
  };
  function DataElementFilesystemURL(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataElementFilesystemURL.prototype.initDefaults_ = function() {
    this.url = null;
    this.offset = 0;
    this.length = 0;
    this.expectedModificationTime = null;
  };
  DataElementFilesystemURL.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DataElementFilesystemURL.generate = function(generator_) {
    var generated = new DataElementFilesystemURL;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.offset = generator_.generateUint64();
    generated.length = generator_.generateUint64();
    generated.expectedModificationTime = generator_.generateStruct(mojoBase.mojom.Time, true);
    return generated;
  };

  DataElementFilesystemURL.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint64(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.expectedModificationTime = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    return this;
  };
  DataElementFilesystemURL.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DataElementFilesystemURL.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DataElementFilesystemURL.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DataElementFilesystemURL.validate = function(messageValidator, offset) {
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


    // validate DataElementFilesystemURL.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate DataElementFilesystemURL.expectedModificationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DataElementFilesystemURL.encodedSize = codec.kStructHeaderSize + 32;

  DataElementFilesystemURL.decode = function(decoder) {
    var packed;
    var val = new DataElementFilesystemURL();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.offset = decoder.decodeStruct(codec.Uint64);
    val.length = decoder.decodeStruct(codec.Uint64);
    val.expectedModificationTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  DataElementFilesystemURL.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataElementFilesystemURL.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Uint64, val.offset);
    encoder.encodeStruct(codec.Uint64, val.length);
    encoder.encodeStructPointer(time$.Time, val.expectedModificationTime);
  };
  function DataElementBlob(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DataElementBlob.prototype.initDefaults_ = function() {
    this.blob = new blob$.BlobPtr();
    this.offset = 0;
    this.length = 0;
  };
  DataElementBlob.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DataElementBlob.generate = function(generator_) {
    var generated = new DataElementBlob;
    generated.blob = generator_.generateInterface("blink.mojom.Blob", false);
    generated.offset = generator_.generateUint64();
    generated.length = generator_.generateUint64();
    return generated;
  };

  DataElementBlob.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateInterface(this.blob, "blink.mojom.Blob", false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint64(this.length);
    }
    return this;
  };
  DataElementBlob.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobPtr"]);
    }
    return handles;
  };

  DataElementBlob.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DataElementBlob.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blob = handles[idx++];;
    return idx;
  };

  DataElementBlob.validate = function(messageValidator, offset) {
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


    // validate DataElementBlob.blob
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  DataElementBlob.encodedSize = codec.kStructHeaderSize + 24;

  DataElementBlob.decode = function(decoder) {
    var packed;
    var val = new DataElementBlob();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStruct(new codec.Interface(blob$.BlobPtr));
    val.offset = decoder.decodeStruct(codec.Uint64);
    val.length = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  DataElementBlob.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DataElementBlob.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(blob$.BlobPtr), val.blob);
    encoder.encodeStruct(codec.Uint64, val.offset);
    encoder.encodeStruct(codec.Uint64, val.length);
  };
  function BytesProvider_RequestAsReply_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BytesProvider_RequestAsReply_Params.prototype.initDefaults_ = function() {
  };
  BytesProvider_RequestAsReply_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BytesProvider_RequestAsReply_Params.generate = function(generator_) {
    var generated = new BytesProvider_RequestAsReply_Params;
    return generated;
  };

  BytesProvider_RequestAsReply_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  BytesProvider_RequestAsReply_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BytesProvider_RequestAsReply_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BytesProvider_RequestAsReply_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BytesProvider_RequestAsReply_Params.validate = function(messageValidator, offset) {
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

  BytesProvider_RequestAsReply_Params.encodedSize = codec.kStructHeaderSize + 0;

  BytesProvider_RequestAsReply_Params.decode = function(decoder) {
    var packed;
    var val = new BytesProvider_RequestAsReply_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BytesProvider_RequestAsReply_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BytesProvider_RequestAsReply_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function BytesProvider_RequestAsReply_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BytesProvider_RequestAsReply_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
  };
  BytesProvider_RequestAsReply_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BytesProvider_RequestAsReply_ResponseParams.generate = function(generator_) {
    var generated = new BytesProvider_RequestAsReply_ResponseParams;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  BytesProvider_RequestAsReply_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  BytesProvider_RequestAsReply_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BytesProvider_RequestAsReply_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BytesProvider_RequestAsReply_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BytesProvider_RequestAsReply_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BytesProvider_RequestAsReply_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BytesProvider_RequestAsReply_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BytesProvider_RequestAsReply_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BytesProvider_RequestAsReply_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  BytesProvider_RequestAsReply_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BytesProvider_RequestAsReply_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function BytesProvider_RequestAsStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BytesProvider_RequestAsStream_Params.prototype.initDefaults_ = function() {
    this.pipe = null;
  };
  BytesProvider_RequestAsStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BytesProvider_RequestAsStream_Params.generate = function(generator_) {
    var generated = new BytesProvider_RequestAsStream_Params;
    generated.pipe = generator_.generateDataPipeProducer(false);
    return generated;
  };

  BytesProvider_RequestAsStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pipe = mutator_.mutateDataPipeProducer(this.pipe, false);
    }
    return this;
  };
  BytesProvider_RequestAsStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pipe !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  BytesProvider_RequestAsStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BytesProvider_RequestAsStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.pipe = handles[idx++];;
    return idx;
  };

  BytesProvider_RequestAsStream_Params.validate = function(messageValidator, offset) {
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


    // validate BytesProvider_RequestAsStream_Params.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BytesProvider_RequestAsStream_Params.encodedSize = codec.kStructHeaderSize + 8;

  BytesProvider_RequestAsStream_Params.decode = function(decoder) {
    var packed;
    var val = new BytesProvider_RequestAsStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BytesProvider_RequestAsStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BytesProvider_RequestAsStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.pipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BytesProvider_RequestAsFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BytesProvider_RequestAsFile_Params.prototype.initDefaults_ = function() {
    this.sourceOffset = 0;
    this.sourceSize = 0;
    this.file = null;
    this.fileOffset = 0;
  };
  BytesProvider_RequestAsFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BytesProvider_RequestAsFile_Params.generate = function(generator_) {
    var generated = new BytesProvider_RequestAsFile_Params;
    generated.sourceOffset = generator_.generateUint64();
    generated.sourceSize = generator_.generateUint64();
    generated.file = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.fileOffset = generator_.generateUint64();
    return generated;
  };

  BytesProvider_RequestAsFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceOffset = mutator_.mutateUint64(this.sourceOffset);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceSize = mutator_.mutateUint64(this.sourceSize);
    }
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fileOffset = mutator_.mutateUint64(this.fileOffset);
    }
    return this;
  };
  BytesProvider_RequestAsFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, this.file.getHandleDeps());
    }
    return handles;
  };

  BytesProvider_RequestAsFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BytesProvider_RequestAsFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.file.setHandlesInternal_(handles, idx);
    return idx;
  };

  BytesProvider_RequestAsFile_Params.validate = function(messageValidator, offset) {
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




    // validate BytesProvider_RequestAsFile_Params.file
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  BytesProvider_RequestAsFile_Params.encodedSize = codec.kStructHeaderSize + 32;

  BytesProvider_RequestAsFile_Params.decode = function(decoder) {
    var packed;
    var val = new BytesProvider_RequestAsFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceOffset = decoder.decodeStruct(codec.Uint64);
    val.sourceSize = decoder.decodeStruct(codec.Uint64);
    val.file = decoder.decodeStructPointer(file$.File);
    val.fileOffset = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  BytesProvider_RequestAsFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BytesProvider_RequestAsFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sourceOffset);
    encoder.encodeStruct(codec.Uint64, val.sourceSize);
    encoder.encodeStructPointer(file$.File, val.file);
    encoder.encodeStruct(codec.Uint64, val.fileOffset);
  };
  function BytesProvider_RequestAsFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BytesProvider_RequestAsFile_ResponseParams.prototype.initDefaults_ = function() {
    this.timeFileModified = null;
  };
  BytesProvider_RequestAsFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BytesProvider_RequestAsFile_ResponseParams.generate = function(generator_) {
    var generated = new BytesProvider_RequestAsFile_ResponseParams;
    generated.timeFileModified = generator_.generateStruct(mojoBase.mojom.Time, true);
    return generated;
  };

  BytesProvider_RequestAsFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.timeFileModified = mutator_.mutateStruct(mojoBase.mojom.Time, true);
    }
    return this;
  };
  BytesProvider_RequestAsFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BytesProvider_RequestAsFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BytesProvider_RequestAsFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BytesProvider_RequestAsFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BytesProvider_RequestAsFile_ResponseParams.timeFileModified
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BytesProvider_RequestAsFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BytesProvider_RequestAsFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BytesProvider_RequestAsFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.timeFileModified = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  BytesProvider_RequestAsFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BytesProvider_RequestAsFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.timeFileModified);
  };

  function DataElement(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  DataElement.Tags = {
    bytes: 0,
    file: 1,
    fileFilesystem: 2,
    blob: 3,
  };

  DataElement.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  DataElement.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "bytes",
        "file",
        "fileFilesystem",
        "blob",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a DataElement member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  DataElement.generate = function(generator_) {
    var generated = new DataElement;
    var generators = [
      {
        field: "bytes",

        generator: function() { return generator_.generateStruct(blink.mojom.DataElementBytes, false); },
      },
      {
        field: "file",

        generator: function() { return generator_.generateStruct(blink.mojom.DataElementFile, false); },
      },
      {
        field: "fileFilesystem",

        generator: function() { return generator_.generateStruct(blink.mojom.DataElementFilesystemURL, false); },
      },
      {
        field: "blob",

        generator: function() { return generator_.generateStruct(blink.mojom.DataElementBlob, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  DataElement.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "bytes",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.DataElementBytes, false); },
      },
      {
        field: "file",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.DataElementFile, false); },
      },
      {
        field: "fileFilesystem",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.DataElementFilesystemURL, false); },
      },
      {
        field: "blob",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.DataElementBlob, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  DataElement.prototype.getHandleDeps = function() {
    if (this.$tag == DataElement.Tags.bytes) {
      return this.bytes.getHandleDeps();
    }
    if (this.$tag == DataElement.Tags.blob) {
      return this.blob.getHandleDeps();
    }
    return [];
  }
  DataElement.prototype.setHandles = function() {
    if (this.$tag == DataElement.Tags.bytes) {
      return idx = this.bytes.setHandlesInternal_(handles, idx);
    }
    if (this.$tag == DataElement.Tags.blob) {
      return idx = this.blob.setHandlesInternal_(handles, idx);
    }
    return [];
  }
  Object.defineProperty(DataElement.prototype, "bytes", {
    get: function() {
      if (this.$tag != DataElement.Tags.bytes) {
        throw new ReferenceError(
            "DataElement.bytes is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DataElement.Tags.bytes;
      this.$data = value;
    }
  });
  Object.defineProperty(DataElement.prototype, "file", {
    get: function() {
      if (this.$tag != DataElement.Tags.file) {
        throw new ReferenceError(
            "DataElement.file is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DataElement.Tags.file;
      this.$data = value;
    }
  });
  Object.defineProperty(DataElement.prototype, "fileFilesystem", {
    get: function() {
      if (this.$tag != DataElement.Tags.fileFilesystem) {
        throw new ReferenceError(
            "DataElement.fileFilesystem is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DataElement.Tags.fileFilesystem;
      this.$data = value;
    }
  });
  Object.defineProperty(DataElement.prototype, "blob", {
    get: function() {
      if (this.$tag != DataElement.Tags.blob) {
        throw new ReferenceError(
            "DataElement.blob is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = DataElement.Tags.blob;
      this.$data = value;
    }
  });


    DataElement.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case DataElement.Tags.bytes:
          encoder.encodeStructPointer(DataElementBytes, val.bytes);
          break;
        case DataElement.Tags.file:
          encoder.encodeStructPointer(DataElementFile, val.file);
          break;
        case DataElement.Tags.fileFilesystem:
          encoder.encodeStructPointer(DataElementFilesystemURL, val.fileFilesystem);
          break;
        case DataElement.Tags.blob:
          encoder.encodeStructPointer(DataElementBlob, val.blob);
          break;
      }
      encoder.align();
    };


    DataElement.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new DataElement();
      var tag = decoder.readUint32();
      switch (tag) {
        case DataElement.Tags.bytes:
          result.bytes = decoder.decodeStructPointer(DataElementBytes);
          break;
        case DataElement.Tags.file:
          result.file = decoder.decodeStructPointer(DataElementFile);
          break;
        case DataElement.Tags.fileFilesystem:
          result.fileFilesystem = decoder.decodeStructPointer(DataElementFilesystemURL);
          break;
        case DataElement.Tags.blob:
          result.blob = decoder.decodeStructPointer(DataElementBlob);
          break;
      }
      decoder.align();

      return result;
    };


    DataElement.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case DataElement.Tags.bytes:
          

    // validate DataElement.bytes
    err = messageValidator.validateStructPointer(data_offset, DataElementBytes, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DataElement.Tags.file:
          

    // validate DataElement.file
    err = messageValidator.validateStructPointer(data_offset, DataElementFile, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DataElement.Tags.fileFilesystem:
          

    // validate DataElement.fileFilesystem
    err = messageValidator.validateStructPointer(data_offset, DataElementFilesystemURL, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case DataElement.Tags.blob:
          

    // validate DataElement.blob
    err = messageValidator.validateStructPointer(data_offset, DataElementBlob, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  DataElement.encodedSize = 16;
  var kBytesProvider_RequestAsReply_Name = 676566874;
  var kBytesProvider_RequestAsStream_Name = 846675526;
  var kBytesProvider_RequestAsFile_Name = 1758180763;

  function BytesProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BytesProvider,
                                                   handleOrPtrInfo);
  }

  function BytesProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BytesProvider, associatedInterfacePtrInfo);
  }

  BytesProviderAssociatedPtr.prototype =
      Object.create(BytesProviderPtr.prototype);
  BytesProviderAssociatedPtr.prototype.constructor =
      BytesProviderAssociatedPtr;

  function BytesProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  BytesProviderPtr.prototype.requestAsReply = function() {
    return BytesProviderProxy.prototype.requestAsReply
        .apply(this.ptr.getProxy(), arguments);
  };

  BytesProviderProxy.prototype.requestAsReply = function() {
    var params_ = new BytesProvider_RequestAsReply_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBytesProvider_RequestAsReply_Name,
          codec.align(BytesProvider_RequestAsReply_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BytesProvider_RequestAsReply_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BytesProvider_RequestAsReply_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BytesProviderPtr.prototype.requestAsStream = function() {
    return BytesProviderProxy.prototype.requestAsStream
        .apply(this.ptr.getProxy(), arguments);
  };

  BytesProviderProxy.prototype.requestAsStream = function(pipe) {
    var params_ = new BytesProvider_RequestAsStream_Params();
    params_.pipe = pipe;
    var builder = new codec.MessageV0Builder(
        kBytesProvider_RequestAsStream_Name,
        codec.align(BytesProvider_RequestAsStream_Params.encodedSize));
    builder.encodeStruct(BytesProvider_RequestAsStream_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  BytesProviderPtr.prototype.requestAsFile = function() {
    return BytesProviderProxy.prototype.requestAsFile
        .apply(this.ptr.getProxy(), arguments);
  };

  BytesProviderProxy.prototype.requestAsFile = function(sourceOffset, sourceSize, file, fileOffset) {
    var params_ = new BytesProvider_RequestAsFile_Params();
    params_.sourceOffset = sourceOffset;
    params_.sourceSize = sourceSize;
    params_.file = file;
    params_.fileOffset = fileOffset;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBytesProvider_RequestAsFile_Name,
          codec.align(BytesProvider_RequestAsFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BytesProvider_RequestAsFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BytesProvider_RequestAsFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BytesProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  BytesProviderStub.prototype.requestAsReply = function() {
    return this.delegate_ && this.delegate_.requestAsReply && this.delegate_.requestAsReply();
  }
  BytesProviderStub.prototype.requestAsStream = function(pipe) {
    return this.delegate_ && this.delegate_.requestAsStream && this.delegate_.requestAsStream(pipe);
  }
  BytesProviderStub.prototype.requestAsFile = function(sourceOffset, sourceSize, file, fileOffset) {
    return this.delegate_ && this.delegate_.requestAsFile && this.delegate_.requestAsFile(sourceOffset, sourceSize, file, fileOffset);
  }

  BytesProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBytesProvider_RequestAsStream_Name:
      var params = reader.decodeStruct(BytesProvider_RequestAsStream_Params);
      this.requestAsStream(params.pipe);
      return true;
    default:
      return false;
    }
  };

  BytesProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBytesProvider_RequestAsReply_Name:
      var params = reader.decodeStruct(BytesProvider_RequestAsReply_Params);
      this.requestAsReply().then(function(response) {
        var responseParams =
            new BytesProvider_RequestAsReply_ResponseParams();
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kBytesProvider_RequestAsReply_Name,
            codec.align(BytesProvider_RequestAsReply_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BytesProvider_RequestAsReply_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBytesProvider_RequestAsFile_Name:
      var params = reader.decodeStruct(BytesProvider_RequestAsFile_Params);
      this.requestAsFile(params.sourceOffset, params.sourceSize, params.file, params.fileOffset).then(function(response) {
        var responseParams =
            new BytesProvider_RequestAsFile_ResponseParams();
        responseParams.timeFileModified = response.timeFileModified;
        var builder = new codec.MessageV1Builder(
            kBytesProvider_RequestAsFile_Name,
            codec.align(BytesProvider_RequestAsFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BytesProvider_RequestAsFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBytesProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBytesProvider_RequestAsReply_Name:
        if (message.expectsResponse())
          paramsClass = BytesProvider_RequestAsReply_Params;
      break;
      case kBytesProvider_RequestAsStream_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BytesProvider_RequestAsStream_Params;
      break;
      case kBytesProvider_RequestAsFile_Name:
        if (message.expectsResponse())
          paramsClass = BytesProvider_RequestAsFile_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBytesProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBytesProvider_RequestAsReply_Name:
        if (message.isResponse())
          paramsClass = BytesProvider_RequestAsReply_ResponseParams;
        break;
      case kBytesProvider_RequestAsFile_Name:
        if (message.isResponse())
          paramsClass = BytesProvider_RequestAsFile_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BytesProvider = {
    name: 'blink.mojom.BytesProvider',
    kVersion: 0,
    ptrClass: BytesProviderPtr,
    proxyClass: BytesProviderProxy,
    stubClass: BytesProviderStub,
    validateRequest: validateBytesProviderRequest,
    validateResponse: validateBytesProviderResponse,
    mojomId: 'third_party/blink/public/mojom/blob/data_element.mojom',
    fuzzMethods: {
      requestAsReply: {
        params: BytesProvider_RequestAsReply_Params,
      },
      requestAsStream: {
        params: BytesProvider_RequestAsStream_Params,
      },
      requestAsFile: {
        params: BytesProvider_RequestAsFile_Params,
      },
    },
  };
  BytesProviderStub.prototype.validator = validateBytesProviderRequest;
  BytesProviderProxy.prototype.validator = validateBytesProviderResponse;
  exports.DataElementBytes = DataElementBytes;
  exports.DataElementFile = DataElementFile;
  exports.DataElementFilesystemURL = DataElementFilesystemURL;
  exports.DataElementBlob = DataElementBlob;
  exports.DataElement = DataElement;
  exports.BytesProvider = BytesProvider;
  exports.BytesProviderPtr = BytesProviderPtr;
  exports.BytesProviderAssociatedPtr = BytesProviderAssociatedPtr;
})();