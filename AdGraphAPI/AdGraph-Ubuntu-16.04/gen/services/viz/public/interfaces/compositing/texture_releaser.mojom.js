// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/texture_releaser.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../../gpu/ipc/common/sync_token.mojom.js');
  }



  function TextureReleaser_Release_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextureReleaser_Release_Params.prototype.initDefaults_ = function() {
    this.syncToken = null;
    this.isLost = false;
  };
  TextureReleaser_Release_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextureReleaser_Release_Params.generate = function(generator_) {
    var generated = new TextureReleaser_Release_Params;
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    generated.isLost = generator_.generateBool();
    return generated;
  };

  TextureReleaser_Release_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isLost = mutator_.mutateBool(this.isLost);
    }
    return this;
  };
  TextureReleaser_Release_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextureReleaser_Release_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextureReleaser_Release_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextureReleaser_Release_Params.validate = function(messageValidator, offset) {
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


    // validate TextureReleaser_Release_Params.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TextureReleaser_Release_Params.encodedSize = codec.kStructHeaderSize + 16;

  TextureReleaser_Release_Params.decode = function(decoder) {
    var packed;
    var val = new TextureReleaser_Release_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    packed = decoder.readUint8();
    val.isLost = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TextureReleaser_Release_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextureReleaser_Release_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
    packed = 0;
    packed |= (val.isLost & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kTextureReleaser_Release_Name = 1626514772;

  function TextureReleaserPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TextureReleaser,
                                                   handleOrPtrInfo);
  }

  function TextureReleaserAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TextureReleaser, associatedInterfacePtrInfo);
  }

  TextureReleaserAssociatedPtr.prototype =
      Object.create(TextureReleaserPtr.prototype);
  TextureReleaserAssociatedPtr.prototype.constructor =
      TextureReleaserAssociatedPtr;

  function TextureReleaserProxy(receiver) {
    this.receiver_ = receiver;
  }
  TextureReleaserPtr.prototype.release = function() {
    return TextureReleaserProxy.prototype.release
        .apply(this.ptr.getProxy(), arguments);
  };

  TextureReleaserProxy.prototype.release = function(syncToken, isLost) {
    var params_ = new TextureReleaser_Release_Params();
    params_.syncToken = syncToken;
    params_.isLost = isLost;
    var builder = new codec.MessageV0Builder(
        kTextureReleaser_Release_Name,
        codec.align(TextureReleaser_Release_Params.encodedSize));
    builder.encodeStruct(TextureReleaser_Release_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TextureReleaserStub(delegate) {
    this.delegate_ = delegate;
  }
  TextureReleaserStub.prototype.release = function(syncToken, isLost) {
    return this.delegate_ && this.delegate_.release && this.delegate_.release(syncToken, isLost);
  }

  TextureReleaserStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextureReleaser_Release_Name:
      var params = reader.decodeStruct(TextureReleaser_Release_Params);
      this.release(params.syncToken, params.isLost);
      return true;
    default:
      return false;
    }
  };

  TextureReleaserStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTextureReleaserRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextureReleaser_Release_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TextureReleaser_Release_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextureReleaserResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TextureReleaser = {
    name: 'viz.mojom.TextureReleaser',
    kVersion: 0,
    ptrClass: TextureReleaserPtr,
    proxyClass: TextureReleaserProxy,
    stubClass: TextureReleaserStub,
    validateRequest: validateTextureReleaserRequest,
    validateResponse: null,
    mojomId: 'services/viz/public/interfaces/compositing/texture_releaser.mojom',
    fuzzMethods: {
      release: {
        params: TextureReleaser_Release_Params,
      },
    },
  };
  TextureReleaserStub.prototype.validator = validateTextureReleaserRequest;
  TextureReleaserProxy.prototype.validator = null;
  exports.TextureReleaser = TextureReleaser;
  exports.TextureReleaserPtr = TextureReleaserPtr;
  exports.TextureReleaserAssociatedPtr = TextureReleaserAssociatedPtr;
})();