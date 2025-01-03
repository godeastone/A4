// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/services/file_util/public/mojom/safe_archive_analyzer.mojom';
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



  function SafeArchiveAnalyzerResults(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzerResults.prototype.initDefaults_ = function() {
  };
  SafeArchiveAnalyzerResults.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzerResults.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzerResults;
    return generated;
  };

  SafeArchiveAnalyzerResults.prototype.mutate = function(mutator_) {
    return this;
  };
  SafeArchiveAnalyzerResults.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SafeArchiveAnalyzerResults.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzerResults.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SafeArchiveAnalyzerResults.validate = function(messageValidator, offset) {
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

  SafeArchiveAnalyzerResults.encodedSize = codec.kStructHeaderSize + 0;

  SafeArchiveAnalyzerResults.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzerResults();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SafeArchiveAnalyzerResults.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzerResults.encodedSize);
    encoder.writeUint32(0);
  };
  function SafeArchiveAnalyzer_AnalyzeZipFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzer_AnalyzeZipFile_Params.prototype.initDefaults_ = function() {
    this.zipFile = null;
    this.temporaryFile = null;
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_Params.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzer_AnalyzeZipFile_Params;
    generated.zipFile = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.temporaryFile = generator_.generateStruct(mojoBase.mojom.File, false);
    return generated;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.zipFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.temporaryFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    return this;
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.zipFile !== null) {
      Array.prototype.push.apply(handles, this.zipFile.getHandleDeps());
    }
    if (this.temporaryFile !== null) {
      Array.prototype.push.apply(handles, this.temporaryFile.getHandleDeps());
    }
    return handles;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.zipFile.setHandlesInternal_(handles, idx);
    idx = this.temporaryFile.setHandlesInternal_(handles, idx);
    return idx;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_Params.validate = function(messageValidator, offset) {
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


    // validate SafeArchiveAnalyzer_AnalyzeZipFile_Params.zipFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SafeArchiveAnalyzer_AnalyzeZipFile_Params.temporaryFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  SafeArchiveAnalyzer_AnalyzeZipFile_Params.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzer_AnalyzeZipFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.zipFile = decoder.decodeStructPointer(file$.File);
    val.temporaryFile = decoder.decodeStructPointer(file$.File);
    return val;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzer_AnalyzeZipFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.zipFile);
    encoder.encodeStructPointer(file$.File, val.temporaryFile);
  };
  function SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams;
    generated.results = generator_.generateStruct(chrome.mojom.SafeArchiveAnalyzerResults, false);
    return generated;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateStruct(chrome.mojom.SafeArchiveAnalyzerResults, false);
    }
    return this;
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.results
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SafeArchiveAnalyzerResults, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeStructPointer(SafeArchiveAnalyzerResults);
    return val;
  };

  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SafeArchiveAnalyzerResults, val.results);
  };
  function SafeArchiveAnalyzer_AnalyzeDmgFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.prototype.initDefaults_ = function() {
    this.dmgFile = null;
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzer_AnalyzeDmgFile_Params;
    generated.dmgFile = generator_.generateStruct(mojoBase.mojom.File, false);
    return generated;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dmgFile = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    return this;
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dmgFile !== null) {
      Array.prototype.push.apply(handles, this.dmgFile.getHandleDeps());
    }
    return handles;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.dmgFile.setHandlesInternal_(handles, idx);
    return idx;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.validate = function(messageValidator, offset) {
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


    // validate SafeArchiveAnalyzer_AnalyzeDmgFile_Params.dmgFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzer_AnalyzeDmgFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dmgFile = decoder.decodeStructPointer(file$.File);
    return val;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzer_AnalyzeDmgFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.dmgFile);
  };
  function SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams;
    generated.results = generator_.generateStruct(chrome.mojom.SafeArchiveAnalyzerResults, false);
    return generated;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateStruct(chrome.mojom.SafeArchiveAnalyzerResults, false);
    }
    return this;
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.results
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SafeArchiveAnalyzerResults, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeStructPointer(SafeArchiveAnalyzerResults);
    return val;
  };

  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SafeArchiveAnalyzerResults, val.results);
  };
  function SafeArchiveAnalyzer_AnalyzeRarFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzer_AnalyzeRarFile_Params.prototype.initDefaults_ = function() {
    this.rarFile = null;
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_Params.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzer_AnalyzeRarFile_Params;
    generated.rarFile = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    return generated;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rarFile = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    return this;
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_Params.validate = function(messageValidator, offset) {
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


    // validate SafeArchiveAnalyzer_AnalyzeRarFile_Params.rarFile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_Params.encodedSize = codec.kStructHeaderSize + 8;

  SafeArchiveAnalyzer_AnalyzeRarFile_Params.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzer_AnalyzeRarFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rarFile = decoder.decodeStructPointer(file_path$.FilePath);
    return val;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzer_AnalyzeRarFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.rarFile);
  };
  function SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.generate = function(generator_) {
    var generated = new SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams;
    generated.results = generator_.generateStruct(chrome.mojom.SafeArchiveAnalyzerResults, false);
    return generated;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateStruct(chrome.mojom.SafeArchiveAnalyzerResults, false);
    }
    return this;
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.results
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SafeArchiveAnalyzerResults, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeStructPointer(SafeArchiveAnalyzerResults);
    return val;
  };

  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SafeArchiveAnalyzerResults, val.results);
  };
  var kSafeArchiveAnalyzer_AnalyzeZipFile_Name = 1990156422;
  var kSafeArchiveAnalyzer_AnalyzeDmgFile_Name = 934892519;
  var kSafeArchiveAnalyzer_AnalyzeRarFile_Name = 2000800670;

  function SafeArchiveAnalyzerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SafeArchiveAnalyzer,
                                                   handleOrPtrInfo);
  }

  function SafeArchiveAnalyzerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SafeArchiveAnalyzer, associatedInterfacePtrInfo);
  }

  SafeArchiveAnalyzerAssociatedPtr.prototype =
      Object.create(SafeArchiveAnalyzerPtr.prototype);
  SafeArchiveAnalyzerAssociatedPtr.prototype.constructor =
      SafeArchiveAnalyzerAssociatedPtr;

  function SafeArchiveAnalyzerProxy(receiver) {
    this.receiver_ = receiver;
  }
  SafeArchiveAnalyzerPtr.prototype.analyzeZipFile = function() {
    return SafeArchiveAnalyzerProxy.prototype.analyzeZipFile
        .apply(this.ptr.getProxy(), arguments);
  };

  SafeArchiveAnalyzerProxy.prototype.analyzeZipFile = function(zipFile, temporaryFile) {
    var params_ = new SafeArchiveAnalyzer_AnalyzeZipFile_Params();
    params_.zipFile = zipFile;
    params_.temporaryFile = temporaryFile;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSafeArchiveAnalyzer_AnalyzeZipFile_Name,
          codec.align(SafeArchiveAnalyzer_AnalyzeZipFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SafeArchiveAnalyzer_AnalyzeZipFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SafeArchiveAnalyzerPtr.prototype.analyzeDmgFile = function() {
    return SafeArchiveAnalyzerProxy.prototype.analyzeDmgFile
        .apply(this.ptr.getProxy(), arguments);
  };

  SafeArchiveAnalyzerProxy.prototype.analyzeDmgFile = function(dmgFile) {
    var params_ = new SafeArchiveAnalyzer_AnalyzeDmgFile_Params();
    params_.dmgFile = dmgFile;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSafeArchiveAnalyzer_AnalyzeDmgFile_Name,
          codec.align(SafeArchiveAnalyzer_AnalyzeDmgFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SafeArchiveAnalyzer_AnalyzeDmgFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SafeArchiveAnalyzerPtr.prototype.analyzeRarFile = function() {
    return SafeArchiveAnalyzerProxy.prototype.analyzeRarFile
        .apply(this.ptr.getProxy(), arguments);
  };

  SafeArchiveAnalyzerProxy.prototype.analyzeRarFile = function(rarFile) {
    var params_ = new SafeArchiveAnalyzer_AnalyzeRarFile_Params();
    params_.rarFile = rarFile;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSafeArchiveAnalyzer_AnalyzeRarFile_Name,
          codec.align(SafeArchiveAnalyzer_AnalyzeRarFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SafeArchiveAnalyzer_AnalyzeRarFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SafeArchiveAnalyzerStub(delegate) {
    this.delegate_ = delegate;
  }
  SafeArchiveAnalyzerStub.prototype.analyzeZipFile = function(zipFile, temporaryFile) {
    return this.delegate_ && this.delegate_.analyzeZipFile && this.delegate_.analyzeZipFile(zipFile, temporaryFile);
  }
  SafeArchiveAnalyzerStub.prototype.analyzeDmgFile = function(dmgFile) {
    return this.delegate_ && this.delegate_.analyzeDmgFile && this.delegate_.analyzeDmgFile(dmgFile);
  }
  SafeArchiveAnalyzerStub.prototype.analyzeRarFile = function(rarFile) {
    return this.delegate_ && this.delegate_.analyzeRarFile && this.delegate_.analyzeRarFile(rarFile);
  }

  SafeArchiveAnalyzerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SafeArchiveAnalyzerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSafeArchiveAnalyzer_AnalyzeZipFile_Name:
      var params = reader.decodeStruct(SafeArchiveAnalyzer_AnalyzeZipFile_Params);
      this.analyzeZipFile(params.zipFile, params.temporaryFile).then(function(response) {
        var responseParams =
            new SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kSafeArchiveAnalyzer_AnalyzeZipFile_Name,
            codec.align(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSafeArchiveAnalyzer_AnalyzeDmgFile_Name:
      var params = reader.decodeStruct(SafeArchiveAnalyzer_AnalyzeDmgFile_Params);
      this.analyzeDmgFile(params.dmgFile).then(function(response) {
        var responseParams =
            new SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kSafeArchiveAnalyzer_AnalyzeDmgFile_Name,
            codec.align(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kSafeArchiveAnalyzer_AnalyzeRarFile_Name:
      var params = reader.decodeStruct(SafeArchiveAnalyzer_AnalyzeRarFile_Params);
      this.analyzeRarFile(params.rarFile).then(function(response) {
        var responseParams =
            new SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kSafeArchiveAnalyzer_AnalyzeRarFile_Name,
            codec.align(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSafeArchiveAnalyzerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSafeArchiveAnalyzer_AnalyzeZipFile_Name:
        if (message.expectsResponse())
          paramsClass = SafeArchiveAnalyzer_AnalyzeZipFile_Params;
      break;
      case kSafeArchiveAnalyzer_AnalyzeDmgFile_Name:
        if (message.expectsResponse())
          paramsClass = SafeArchiveAnalyzer_AnalyzeDmgFile_Params;
      break;
      case kSafeArchiveAnalyzer_AnalyzeRarFile_Name:
        if (message.expectsResponse())
          paramsClass = SafeArchiveAnalyzer_AnalyzeRarFile_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSafeArchiveAnalyzerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSafeArchiveAnalyzer_AnalyzeZipFile_Name:
        if (message.isResponse())
          paramsClass = SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams;
        break;
      case kSafeArchiveAnalyzer_AnalyzeDmgFile_Name:
        if (message.isResponse())
          paramsClass = SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams;
        break;
      case kSafeArchiveAnalyzer_AnalyzeRarFile_Name:
        if (message.isResponse())
          paramsClass = SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SafeArchiveAnalyzer = {
    name: 'chrome.mojom.SafeArchiveAnalyzer',
    kVersion: 0,
    ptrClass: SafeArchiveAnalyzerPtr,
    proxyClass: SafeArchiveAnalyzerProxy,
    stubClass: SafeArchiveAnalyzerStub,
    validateRequest: validateSafeArchiveAnalyzerRequest,
    validateResponse: validateSafeArchiveAnalyzerResponse,
    mojomId: 'chrome/services/file_util/public/mojom/safe_archive_analyzer.mojom',
    fuzzMethods: {
      analyzeZipFile: {
        params: SafeArchiveAnalyzer_AnalyzeZipFile_Params,
      },
      analyzeDmgFile: {
        params: SafeArchiveAnalyzer_AnalyzeDmgFile_Params,
      },
      analyzeRarFile: {
        params: SafeArchiveAnalyzer_AnalyzeRarFile_Params,
      },
    },
  };
  SafeArchiveAnalyzerStub.prototype.validator = validateSafeArchiveAnalyzerRequest;
  SafeArchiveAnalyzerProxy.prototype.validator = validateSafeArchiveAnalyzerResponse;
  exports.SafeArchiveAnalyzerResults = SafeArchiveAnalyzerResults;
  exports.SafeArchiveAnalyzer = SafeArchiveAnalyzer;
  exports.SafeArchiveAnalyzerPtr = SafeArchiveAnalyzerPtr;
  exports.SafeArchiveAnalyzerAssociatedPtr = SafeArchiveAnalyzerAssociatedPtr;
})();