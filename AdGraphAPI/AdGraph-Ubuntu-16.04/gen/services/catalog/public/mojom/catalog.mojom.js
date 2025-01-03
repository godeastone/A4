// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/catalog/public/mojom/catalog.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('catalog.mojom');
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../mojo/public/mojom/base/file_path.mojom.js');
  }



  function Entry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Entry.prototype.initDefaults_ = function() {
    this.name = null;
    this.displayName = null;
  };
  Entry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Entry.generate = function(generator_) {
    var generated = new Entry;
    generated.name = generator_.generateString(false);
    generated.displayName = generator_.generateString(false);
    return generated;
  };

  Entry.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateString(this.displayName, false);
    }
    return this;
  };
  Entry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Entry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Entry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Entry.validate = function(messageValidator, offset) {
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


    // validate Entry.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Entry.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Entry.encodedSize = codec.kStructHeaderSize + 16;

  Entry.decode = function(decoder) {
    var packed;
    var val = new Entry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.displayName = decoder.decodeStruct(codec.String);
    return val;
  };

  Entry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Entry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.displayName);
  };
  function Catalog_GetEntries_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntries_Params.prototype.initDefaults_ = function() {
    this.names = null;
  };
  Catalog_GetEntries_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Catalog_GetEntries_Params.generate = function(generator_) {
    var generated = new Catalog_GetEntries_Params;
    generated.names = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  Catalog_GetEntries_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.names = mutator_.mutateArray(this.names, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  Catalog_GetEntries_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Catalog_GetEntries_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Catalog_GetEntries_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Catalog_GetEntries_Params.validate = function(messageValidator, offset) {
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


    // validate Catalog_GetEntries_Params.names
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntries_Params.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntries_Params.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntries_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.names = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Catalog_GetEntries_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntries_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.names);
  };
  function Catalog_GetEntries_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntries_ResponseParams.prototype.initDefaults_ = function() {
    this.entries = null;
  };
  Catalog_GetEntries_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Catalog_GetEntries_ResponseParams.generate = function(generator_) {
    var generated = new Catalog_GetEntries_ResponseParams;
    generated.entries = generator_.generateArray(function() {
      return generator_.generateStruct(catalog.mojom.Entry, false);
    });
    return generated;
  };

  Catalog_GetEntries_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.entries = mutator_.mutateArray(this.entries, function(val) {
        return mutator_.mutateStruct(catalog.mojom.Entry, false);
      });
    }
    return this;
  };
  Catalog_GetEntries_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Catalog_GetEntries_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Catalog_GetEntries_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Catalog_GetEntries_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Catalog_GetEntries_ResponseParams.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Entry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntries_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntries_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntries_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(Entry));
    return val;
  };

  Catalog_GetEntries_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntries_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Entry), val.entries);
  };
  function Catalog_GetEntriesProvidingCapability_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesProvidingCapability_Params.prototype.initDefaults_ = function() {
    this.capability = null;
  };
  Catalog_GetEntriesProvidingCapability_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Catalog_GetEntriesProvidingCapability_Params.generate = function(generator_) {
    var generated = new Catalog_GetEntriesProvidingCapability_Params;
    generated.capability = generator_.generateString(false);
    return generated;
  };

  Catalog_GetEntriesProvidingCapability_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.capability = mutator_.mutateString(this.capability, false);
    }
    return this;
  };
  Catalog_GetEntriesProvidingCapability_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Catalog_GetEntriesProvidingCapability_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Catalog_GetEntriesProvidingCapability_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Catalog_GetEntriesProvidingCapability_Params.validate = function(messageValidator, offset) {
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


    // validate Catalog_GetEntriesProvidingCapability_Params.capability
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesProvidingCapability_Params.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesProvidingCapability_Params.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesProvidingCapability_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.capability = decoder.decodeStruct(codec.String);
    return val;
  };

  Catalog_GetEntriesProvidingCapability_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesProvidingCapability_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.capability);
  };
  function Catalog_GetEntriesProvidingCapability_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Catalog_GetEntriesProvidingCapability_ResponseParams.prototype.initDefaults_ = function() {
    this.entries = null;
  };
  Catalog_GetEntriesProvidingCapability_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Catalog_GetEntriesProvidingCapability_ResponseParams.generate = function(generator_) {
    var generated = new Catalog_GetEntriesProvidingCapability_ResponseParams;
    generated.entries = generator_.generateArray(function() {
      return generator_.generateStruct(catalog.mojom.Entry, false);
    });
    return generated;
  };

  Catalog_GetEntriesProvidingCapability_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.entries = mutator_.mutateArray(this.entries, function(val) {
        return mutator_.mutateStruct(catalog.mojom.Entry, false);
      });
    }
    return this;
  };
  Catalog_GetEntriesProvidingCapability_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Catalog_GetEntriesProvidingCapability_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Catalog_GetEntriesProvidingCapability_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Catalog_GetEntriesProvidingCapability_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Catalog_GetEntriesProvidingCapability_ResponseParams.entries
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Entry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Catalog_GetEntriesProvidingCapability_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Catalog_GetEntriesProvidingCapability_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Catalog_GetEntriesProvidingCapability_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.entries = decoder.decodeArrayPointer(new codec.PointerTo(Entry));
    return val;
  };

  Catalog_GetEntriesProvidingCapability_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Catalog_GetEntriesProvidingCapability_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Entry), val.entries);
  };
  var kCatalog_GetEntries_Name = 2130494902;
  var kCatalog_GetEntriesProvidingCapability_Name = 989832459;

  function CatalogPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Catalog,
                                                   handleOrPtrInfo);
  }

  function CatalogAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Catalog, associatedInterfacePtrInfo);
  }

  CatalogAssociatedPtr.prototype =
      Object.create(CatalogPtr.prototype);
  CatalogAssociatedPtr.prototype.constructor =
      CatalogAssociatedPtr;

  function CatalogProxy(receiver) {
    this.receiver_ = receiver;
  }
  CatalogPtr.prototype.getEntries = function() {
    return CatalogProxy.prototype.getEntries
        .apply(this.ptr.getProxy(), arguments);
  };

  CatalogProxy.prototype.getEntries = function(names) {
    var params_ = new Catalog_GetEntries_Params();
    params_.names = names;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCatalog_GetEntries_Name,
          codec.align(Catalog_GetEntries_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Catalog_GetEntries_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Catalog_GetEntries_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CatalogPtr.prototype.getEntriesProvidingCapability = function() {
    return CatalogProxy.prototype.getEntriesProvidingCapability
        .apply(this.ptr.getProxy(), arguments);
  };

  CatalogProxy.prototype.getEntriesProvidingCapability = function(capability) {
    var params_ = new Catalog_GetEntriesProvidingCapability_Params();
    params_.capability = capability;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCatalog_GetEntriesProvidingCapability_Name,
          codec.align(Catalog_GetEntriesProvidingCapability_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Catalog_GetEntriesProvidingCapability_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Catalog_GetEntriesProvidingCapability_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CatalogStub(delegate) {
    this.delegate_ = delegate;
  }
  CatalogStub.prototype.getEntries = function(names) {
    return this.delegate_ && this.delegate_.getEntries && this.delegate_.getEntries(names);
  }
  CatalogStub.prototype.getEntriesProvidingCapability = function(capability) {
    return this.delegate_ && this.delegate_.getEntriesProvidingCapability && this.delegate_.getEntriesProvidingCapability(capability);
  }

  CatalogStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CatalogStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCatalog_GetEntries_Name:
      var params = reader.decodeStruct(Catalog_GetEntries_Params);
      this.getEntries(params.names).then(function(response) {
        var responseParams =
            new Catalog_GetEntries_ResponseParams();
        responseParams.entries = response.entries;
        var builder = new codec.MessageV1Builder(
            kCatalog_GetEntries_Name,
            codec.align(Catalog_GetEntries_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Catalog_GetEntries_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCatalog_GetEntriesProvidingCapability_Name:
      var params = reader.decodeStruct(Catalog_GetEntriesProvidingCapability_Params);
      this.getEntriesProvidingCapability(params.capability).then(function(response) {
        var responseParams =
            new Catalog_GetEntriesProvidingCapability_ResponseParams();
        responseParams.entries = response.entries;
        var builder = new codec.MessageV1Builder(
            kCatalog_GetEntriesProvidingCapability_Name,
            codec.align(Catalog_GetEntriesProvidingCapability_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Catalog_GetEntriesProvidingCapability_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCatalogRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCatalog_GetEntries_Name:
        if (message.expectsResponse())
          paramsClass = Catalog_GetEntries_Params;
      break;
      case kCatalog_GetEntriesProvidingCapability_Name:
        if (message.expectsResponse())
          paramsClass = Catalog_GetEntriesProvidingCapability_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCatalogResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCatalog_GetEntries_Name:
        if (message.isResponse())
          paramsClass = Catalog_GetEntries_ResponseParams;
        break;
      case kCatalog_GetEntriesProvidingCapability_Name:
        if (message.isResponse())
          paramsClass = Catalog_GetEntriesProvidingCapability_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Catalog = {
    name: 'catalog.mojom.Catalog',
    kVersion: 0,
    ptrClass: CatalogPtr,
    proxyClass: CatalogProxy,
    stubClass: CatalogStub,
    validateRequest: validateCatalogRequest,
    validateResponse: validateCatalogResponse,
    mojomId: 'services/catalog/public/mojom/catalog.mojom',
    fuzzMethods: {
      getEntries: {
        params: Catalog_GetEntries_Params,
      },
      getEntriesProvidingCapability: {
        params: Catalog_GetEntriesProvidingCapability_Params,
      },
    },
  };
  CatalogStub.prototype.validator = validateCatalogRequest;
  CatalogProxy.prototype.validator = validateCatalogResponse;
  exports.Entry = Entry;
  exports.Catalog = Catalog;
  exports.CatalogPtr = CatalogPtr;
  exports.CatalogAssociatedPtr = CatalogAssociatedPtr;
})();