// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/client_hints.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('clientHints.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../mojo/public/mojom/base/time.mojom.js');
  }
  var web_client_hints_types$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/web_client_hints_types.mojom', '../../third_party/blink/public/platform/web_client_hints_types.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../url/mojom/origin.mojom.js');
  }



  function ClientHints_PersistClientHints_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientHints_PersistClientHints_Params.prototype.initDefaults_ = function() {
    this.primaryOrigin = null;
    this.clientHints = null;
    this.expirationDuration = null;
  };
  ClientHints_PersistClientHints_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClientHints_PersistClientHints_Params.generate = function(generator_) {
    var generated = new ClientHints_PersistClientHints_Params;
    generated.primaryOrigin = generator_.generateStruct(url.mojom.Origin, false);
    generated.clientHints = generator_.generateArray(function() {
      return generator_.generateEnum(0, 6);
    });
    generated.expirationDuration = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  ClientHints_PersistClientHints_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.primaryOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientHints = mutator_.mutateArray(this.clientHints, function(val) {
        return mutator_.mutateEnum(val, 0, 6);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.expirationDuration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  ClientHints_PersistClientHints_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClientHints_PersistClientHints_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClientHints_PersistClientHints_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClientHints_PersistClientHints_Params.validate = function(messageValidator, offset) {
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


    // validate ClientHints_PersistClientHints_Params.primaryOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientHints_PersistClientHints_Params.clientHints
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, new codec.Enum(web_client_hints_types$.WebClientHintsType), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientHints_PersistClientHints_Params.expirationDuration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientHints_PersistClientHints_Params.encodedSize = codec.kStructHeaderSize + 24;

  ClientHints_PersistClientHints_Params.decode = function(decoder) {
    var packed;
    var val = new ClientHints_PersistClientHints_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.primaryOrigin = decoder.decodeStructPointer(origin$.Origin);
    val.clientHints = decoder.decodeArrayPointer(new codec.Enum(web_client_hints_types$.WebClientHintsType));
    val.expirationDuration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  ClientHints_PersistClientHints_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientHints_PersistClientHints_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.primaryOrigin);
    encoder.encodeArrayPointer(new codec.Enum(web_client_hints_types$.WebClientHintsType), val.clientHints);
    encoder.encodeStructPointer(time$.TimeDelta, val.expirationDuration);
  };
  var kClientHints_PersistClientHints_Name = 1921773543;

  function ClientHintsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ClientHints,
                                                   handleOrPtrInfo);
  }

  function ClientHintsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ClientHints, associatedInterfacePtrInfo);
  }

  ClientHintsAssociatedPtr.prototype =
      Object.create(ClientHintsPtr.prototype);
  ClientHintsAssociatedPtr.prototype.constructor =
      ClientHintsAssociatedPtr;

  function ClientHintsProxy(receiver) {
    this.receiver_ = receiver;
  }
  ClientHintsPtr.prototype.persistClientHints = function() {
    return ClientHintsProxy.prototype.persistClientHints
        .apply(this.ptr.getProxy(), arguments);
  };

  ClientHintsProxy.prototype.persistClientHints = function(primaryOrigin, clientHints, expirationDuration) {
    var params_ = new ClientHints_PersistClientHints_Params();
    params_.primaryOrigin = primaryOrigin;
    params_.clientHints = clientHints;
    params_.expirationDuration = expirationDuration;
    var builder = new codec.MessageV0Builder(
        kClientHints_PersistClientHints_Name,
        codec.align(ClientHints_PersistClientHints_Params.encodedSize));
    builder.encodeStruct(ClientHints_PersistClientHints_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ClientHintsStub(delegate) {
    this.delegate_ = delegate;
  }
  ClientHintsStub.prototype.persistClientHints = function(primaryOrigin, clientHints, expirationDuration) {
    return this.delegate_ && this.delegate_.persistClientHints && this.delegate_.persistClientHints(primaryOrigin, clientHints, expirationDuration);
  }

  ClientHintsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClientHints_PersistClientHints_Name:
      var params = reader.decodeStruct(ClientHints_PersistClientHints_Params);
      this.persistClientHints(params.primaryOrigin, params.clientHints, params.expirationDuration);
      return true;
    default:
      return false;
    }
  };

  ClientHintsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateClientHintsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClientHints_PersistClientHints_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClientHints_PersistClientHints_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClientHintsResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ClientHints = {
    name: 'client_hints.mojom.ClientHints',
    kVersion: 0,
    ptrClass: ClientHintsPtr,
    proxyClass: ClientHintsProxy,
    stubClass: ClientHintsStub,
    validateRequest: validateClientHintsRequest,
    validateResponse: null,
    mojomId: 'chrome/common/client_hints.mojom',
    fuzzMethods: {
      persistClientHints: {
        params: ClientHints_PersistClientHints_Params,
      },
    },
  };
  ClientHintsStub.prototype.validator = validateClientHintsRequest;
  ClientHintsProxy.prototype.validator = null;
  exports.ClientHints = ClientHints;
  exports.ClientHintsPtr = ClientHintsPtr;
  exports.ClientHintsAssociatedPtr = ClientHintsAssociatedPtr;
})();