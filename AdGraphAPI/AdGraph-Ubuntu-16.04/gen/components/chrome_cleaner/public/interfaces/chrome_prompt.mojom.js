// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/chrome_cleaner/public/interfaces/chrome_prompt.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chromeCleaner.mojom');


  var PromptAcceptance = {};
  PromptAcceptance.UNSPECIFIED = 0;
  PromptAcceptance.ACCEPTED_WITH_LOGS = 1;
  PromptAcceptance.ACCEPTED_WITHOUT_LOGS = 2;
  PromptAcceptance.DENIED = 3;
  PromptAcceptance.NUM_VALUES = PromptAcceptance.DENIED + 1;

  PromptAcceptance.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  PromptAcceptance.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FilePath(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilePath.prototype.initDefaults_ = function() {
    this.value = null;
  };
  FilePath.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilePath.generate = function(generator_) {
    var generated = new FilePath;
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint16();
    });
    return generated;
  };

  FilePath.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint16(val);
      });
    }
    return this;
  };
  FilePath.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FilePath.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilePath.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FilePath.validate = function(messageValidator, offset) {
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


    // validate FilePath.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 2, codec.Uint16, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FilePath.encodedSize = codec.kStructHeaderSize + 8;

  FilePath.decode = function(decoder) {
    var packed;
    var val = new FilePath();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeArrayPointer(codec.Uint16);
    return val;
  };

  FilePath.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilePath.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint16, val.value);
  };
  function RegistryKey(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RegistryKey.prototype.initDefaults_ = function() {
    this.value = null;
  };
  RegistryKey.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RegistryKey.generate = function(generator_) {
    var generated = new RegistryKey;
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint16();
    });
    return generated;
  };

  RegistryKey.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint16(val);
      });
    }
    return this;
  };
  RegistryKey.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RegistryKey.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RegistryKey.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RegistryKey.validate = function(messageValidator, offset) {
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


    // validate RegistryKey.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 2, codec.Uint16, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RegistryKey.encodedSize = codec.kStructHeaderSize + 8;

  RegistryKey.decode = function(decoder) {
    var packed;
    var val = new RegistryKey();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeArrayPointer(codec.Uint16);
    return val;
  };

  RegistryKey.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RegistryKey.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint16, val.value);
  };
  function ChromePrompt_PromptUser_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromePrompt_PromptUser_Params.prototype.initDefaults_ = function() {
    this.filesToDelete = null;
    this.registryKeys = null;
  };
  ChromePrompt_PromptUser_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromePrompt_PromptUser_Params.generate = function(generator_) {
    var generated = new ChromePrompt_PromptUser_Params;
    generated.filesToDelete = generator_.generateArray(function() {
      return generator_.generateStruct(chromeCleaner.mojom.FilePath, false);
    });
    generated.registryKeys = generator_.generateArray(function() {
      return generator_.generateStruct(chromeCleaner.mojom.RegistryKey, false);
    });
    return generated;
  };

  ChromePrompt_PromptUser_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filesToDelete = mutator_.mutateArray(this.filesToDelete, function(val) {
        return mutator_.mutateStruct(chromeCleaner.mojom.FilePath, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.registryKeys = mutator_.mutateArray(this.registryKeys, function(val) {
        return mutator_.mutateStruct(chromeCleaner.mojom.RegistryKey, false);
      });
    }
    return this;
  };
  ChromePrompt_PromptUser_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromePrompt_PromptUser_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromePrompt_PromptUser_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromePrompt_PromptUser_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16},
      {version: 1, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ChromePrompt_PromptUser_Params.filesToDelete
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FilePath), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // version check ChromePrompt_PromptUser_Params.registryKeys
    if (!messageValidator.isFieldInStructVersion(offset, 1))
      return validator.validationError.NONE;
    // validate ChromePrompt_PromptUser_Params.registryKeys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(RegistryKey), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromePrompt_PromptUser_Params.encodedSize = codec.kStructHeaderSize + 16;

  ChromePrompt_PromptUser_Params.decode = function(decoder) {
    var packed;
    var val = new ChromePrompt_PromptUser_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filesToDelete = decoder.decodeArrayPointer(new codec.PointerTo(FilePath));
    val.registryKeys = decoder.decodeArrayPointer(new codec.PointerTo(RegistryKey));
    return val;
  };

  ChromePrompt_PromptUser_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromePrompt_PromptUser_Params.encodedSize);
    encoder.writeUint32(1);
    encoder.encodeArrayPointer(new codec.PointerTo(FilePath), val.filesToDelete);
    encoder.encodeArrayPointer(new codec.PointerTo(RegistryKey), val.registryKeys);
  };
  function ChromePrompt_PromptUser_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromePrompt_PromptUser_ResponseParams.prototype.initDefaults_ = function() {
    this.promptAcceptance = 0;
  };
  ChromePrompt_PromptUser_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromePrompt_PromptUser_ResponseParams.generate = function(generator_) {
    var generated = new ChromePrompt_PromptUser_ResponseParams;
    generated.promptAcceptance = generator_.generateEnum(0, 4);
    return generated;
  };

  ChromePrompt_PromptUser_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.promptAcceptance = mutator_.mutateEnum(this.promptAcceptance, 0, 4);
    }
    return this;
  };
  ChromePrompt_PromptUser_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromePrompt_PromptUser_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromePrompt_PromptUser_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromePrompt_PromptUser_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ChromePrompt_PromptUser_ResponseParams.promptAcceptance
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PromptAcceptance);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromePrompt_PromptUser_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ChromePrompt_PromptUser_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ChromePrompt_PromptUser_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.promptAcceptance = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ChromePrompt_PromptUser_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromePrompt_PromptUser_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.promptAcceptance);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kChromePrompt_PromptUser_Name = 0;

  function ChromePromptPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChromePrompt,
                                                   handleOrPtrInfo);
  }

  function ChromePromptAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChromePrompt, associatedInterfacePtrInfo);
  }

  ChromePromptAssociatedPtr.prototype =
      Object.create(ChromePromptPtr.prototype);
  ChromePromptAssociatedPtr.prototype.constructor =
      ChromePromptAssociatedPtr;

  function ChromePromptProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChromePromptPtr.prototype.promptUser = function() {
    return ChromePromptProxy.prototype.promptUser
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromePromptProxy.prototype.promptUser = function(filesToDelete, registryKeys) {
    var params_ = new ChromePrompt_PromptUser_Params();
    params_.filesToDelete = filesToDelete;
    params_.registryKeys = registryKeys;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kChromePrompt_PromptUser_Name,
          codec.align(ChromePrompt_PromptUser_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ChromePrompt_PromptUser_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ChromePrompt_PromptUser_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ChromePromptStub(delegate) {
    this.delegate_ = delegate;
  }
  ChromePromptStub.prototype.promptUser = function(filesToDelete, registryKeys) {
    return this.delegate_ && this.delegate_.promptUser && this.delegate_.promptUser(filesToDelete, registryKeys);
  }

  ChromePromptStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ChromePromptStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChromePrompt_PromptUser_Name:
      var params = reader.decodeStruct(ChromePrompt_PromptUser_Params);
      this.promptUser(params.filesToDelete, params.registryKeys).then(function(response) {
        var responseParams =
            new ChromePrompt_PromptUser_ResponseParams();
        responseParams.promptAcceptance = response.promptAcceptance;
        var builder = new codec.MessageV1Builder(
            kChromePrompt_PromptUser_Name,
            codec.align(ChromePrompt_PromptUser_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ChromePrompt_PromptUser_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateChromePromptRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChromePrompt_PromptUser_Name:
        if (message.expectsResponse())
          paramsClass = ChromePrompt_PromptUser_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChromePromptResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kChromePrompt_PromptUser_Name:
        if (message.isResponse())
          paramsClass = ChromePrompt_PromptUser_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ChromePrompt = {
    name: 'chrome_cleaner.mojom.ChromePrompt',
    kVersion: 1,
    ptrClass: ChromePromptPtr,
    proxyClass: ChromePromptProxy,
    stubClass: ChromePromptStub,
    validateRequest: validateChromePromptRequest,
    validateResponse: validateChromePromptResponse,
    mojomId: 'components/chrome_cleaner/public/interfaces/chrome_prompt.mojom',
    fuzzMethods: {
      promptUser: {
        params: ChromePrompt_PromptUser_Params,
      },
    },
  };
  ChromePromptStub.prototype.validator = validateChromePromptRequest;
  ChromePromptProxy.prototype.validator = validateChromePromptResponse;
  exports.PromptAcceptance = PromptAcceptance;
  exports.FilePath = FilePath;
  exports.RegistryKey = RegistryKey;
  exports.ChromePrompt = ChromePrompt;
  exports.ChromePromptPtr = ChromePromptPtr;
  exports.ChromePromptAssociatedPtr = ChromePromptAssociatedPtr;
})();