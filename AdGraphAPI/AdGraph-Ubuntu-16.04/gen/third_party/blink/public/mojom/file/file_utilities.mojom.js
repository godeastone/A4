// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/file/file_utilities.mojom';
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
  var file_info$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_info.mojom', '../../../../../mojo/public/mojom/base/file_info.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../../mojo/public/mojom/base/file_path.mojom.js');
  }



  function FileUtilitiesHost_GetFileInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileUtilitiesHost_GetFileInfo_Params.prototype.initDefaults_ = function() {
    this.path = null;
  };
  FileUtilitiesHost_GetFileInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileUtilitiesHost_GetFileInfo_Params.generate = function(generator_) {
    var generated = new FileUtilitiesHost_GetFileInfo_Params;
    generated.path = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    return generated;
  };

  FileUtilitiesHost_GetFileInfo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    return this;
  };
  FileUtilitiesHost_GetFileInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileUtilitiesHost_GetFileInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileUtilitiesHost_GetFileInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileUtilitiesHost_GetFileInfo_Params.validate = function(messageValidator, offset) {
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


    // validate FileUtilitiesHost_GetFileInfo_Params.path
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileUtilitiesHost_GetFileInfo_Params.encodedSize = codec.kStructHeaderSize + 8;

  FileUtilitiesHost_GetFileInfo_Params.decode = function(decoder) {
    var packed;
    var val = new FileUtilitiesHost_GetFileInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStructPointer(file_path$.FilePath);
    return val;
  };

  FileUtilitiesHost_GetFileInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileUtilitiesHost_GetFileInfo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.path);
  };
  function FileUtilitiesHost_GetFileInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileUtilitiesHost_GetFileInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  FileUtilitiesHost_GetFileInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileUtilitiesHost_GetFileInfo_ResponseParams.generate = function(generator_) {
    var generated = new FileUtilitiesHost_GetFileInfo_ResponseParams;
    generated.result = generator_.generateStruct(mojoBase.mojom.FileInfo, true);
    return generated;
  };

  FileUtilitiesHost_GetFileInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(mojoBase.mojom.FileInfo, true);
    }
    return this;
  };
  FileUtilitiesHost_GetFileInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileUtilitiesHost_GetFileInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileUtilitiesHost_GetFileInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileUtilitiesHost_GetFileInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FileUtilitiesHost_GetFileInfo_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_info$.FileInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FileUtilitiesHost_GetFileInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FileUtilitiesHost_GetFileInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FileUtilitiesHost_GetFileInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(file_info$.FileInfo);
    return val;
  };

  FileUtilitiesHost_GetFileInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileUtilitiesHost_GetFileInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_info$.FileInfo, val.result);
  };
  var kFileUtilitiesHost_GetFileInfo_Name = 1129083419;

  function FileUtilitiesHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FileUtilitiesHost,
                                                   handleOrPtrInfo);
  }

  function FileUtilitiesHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FileUtilitiesHost, associatedInterfacePtrInfo);
  }

  FileUtilitiesHostAssociatedPtr.prototype =
      Object.create(FileUtilitiesHostPtr.prototype);
  FileUtilitiesHostAssociatedPtr.prototype.constructor =
      FileUtilitiesHostAssociatedPtr;

  function FileUtilitiesHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  FileUtilitiesHostPtr.prototype.getFileInfo = function() {
    return FileUtilitiesHostProxy.prototype.getFileInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  FileUtilitiesHostProxy.prototype.getFileInfo = function(path) {
    var params_ = new FileUtilitiesHost_GetFileInfo_Params();
    params_.path = path;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFileUtilitiesHost_GetFileInfo_Name,
          codec.align(FileUtilitiesHost_GetFileInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FileUtilitiesHost_GetFileInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FileUtilitiesHost_GetFileInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FileUtilitiesHostStub(delegate) {
    this.delegate_ = delegate;
  }
  FileUtilitiesHostStub.prototype.getFileInfo = function(path) {
    return this.delegate_ && this.delegate_.getFileInfo && this.delegate_.getFileInfo(path);
  }

  FileUtilitiesHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FileUtilitiesHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFileUtilitiesHost_GetFileInfo_Name:
      var params = reader.decodeStruct(FileUtilitiesHost_GetFileInfo_Params);
      this.getFileInfo(params.path).then(function(response) {
        var responseParams =
            new FileUtilitiesHost_GetFileInfo_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kFileUtilitiesHost_GetFileInfo_Name,
            codec.align(FileUtilitiesHost_GetFileInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FileUtilitiesHost_GetFileInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFileUtilitiesHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFileUtilitiesHost_GetFileInfo_Name:
        if (message.expectsResponse())
          paramsClass = FileUtilitiesHost_GetFileInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFileUtilitiesHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFileUtilitiesHost_GetFileInfo_Name:
        if (message.isResponse())
          paramsClass = FileUtilitiesHost_GetFileInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FileUtilitiesHost = {
    name: 'blink.mojom.FileUtilitiesHost',
    kVersion: 0,
    ptrClass: FileUtilitiesHostPtr,
    proxyClass: FileUtilitiesHostProxy,
    stubClass: FileUtilitiesHostStub,
    validateRequest: validateFileUtilitiesHostRequest,
    validateResponse: validateFileUtilitiesHostResponse,
    mojomId: 'third_party/blink/public/mojom/file/file_utilities.mojom',
    fuzzMethods: {
      getFileInfo: {
        params: FileUtilitiesHost_GetFileInfo_Params,
      },
    },
  };
  FileUtilitiesHostStub.prototype.validator = validateFileUtilitiesHostRequest;
  FileUtilitiesHostProxy.prototype.validator = validateFileUtilitiesHostResponse;
  exports.FileUtilitiesHost = FileUtilitiesHost;
  exports.FileUtilitiesHostPtr = FileUtilitiesHostPtr;
  exports.FileUtilitiesHostAssociatedPtr = FileUtilitiesHostAssociatedPtr;
})();