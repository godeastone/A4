// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/visitedlink/common/visitedlink.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('visitedlink.mojom');
  var shared_memory$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/shared_memory.mojom', '../../../mojo/public/mojom/base/shared_memory.mojom.js');
  }



  function VisitedLinkNotificationSink_UpdateVisitedLinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.prototype.initDefaults_ = function() {
    this.tableRegion = null;
  };
  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.generate = function(generator_) {
    var generated = new VisitedLinkNotificationSink_UpdateVisitedLinks_Params;
    generated.tableRegion = generator_.generateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, false);
    return generated;
  };

  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tableRegion = mutator_.mutateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, false);
    }
    return this;
  };
  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.tableRegion !== null) {
      Array.prototype.push.apply(handles, this.tableRegion.getHandleDeps());
    }
    return handles;
  };

  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.tableRegion.setHandlesInternal_(handles, idx);
    return idx;
  };

  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.validate = function(messageValidator, offset) {
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


    // validate VisitedLinkNotificationSink_UpdateVisitedLinks_Params.tableRegion
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, shared_memory$.ReadOnlySharedMemoryRegion, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.decode = function(decoder) {
    var packed;
    var val = new VisitedLinkNotificationSink_UpdateVisitedLinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tableRegion = decoder.decodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion);
    return val;
  };

  VisitedLinkNotificationSink_UpdateVisitedLinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VisitedLinkNotificationSink_UpdateVisitedLinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion, val.tableRegion);
  };
  function VisitedLinkNotificationSink_AddVisitedLinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VisitedLinkNotificationSink_AddVisitedLinks_Params.prototype.initDefaults_ = function() {
    this.linkHashes = null;
  };
  VisitedLinkNotificationSink_AddVisitedLinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VisitedLinkNotificationSink_AddVisitedLinks_Params.generate = function(generator_) {
    var generated = new VisitedLinkNotificationSink_AddVisitedLinks_Params;
    generated.linkHashes = generator_.generateArray(function() {
      return generator_.generateUint64();
    });
    return generated;
  };

  VisitedLinkNotificationSink_AddVisitedLinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.linkHashes = mutator_.mutateArray(this.linkHashes, function(val) {
        return mutator_.mutateUint64(val);
      });
    }
    return this;
  };
  VisitedLinkNotificationSink_AddVisitedLinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VisitedLinkNotificationSink_AddVisitedLinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VisitedLinkNotificationSink_AddVisitedLinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VisitedLinkNotificationSink_AddVisitedLinks_Params.validate = function(messageValidator, offset) {
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


    // validate VisitedLinkNotificationSink_AddVisitedLinks_Params.linkHashes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.Uint64, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VisitedLinkNotificationSink_AddVisitedLinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  VisitedLinkNotificationSink_AddVisitedLinks_Params.decode = function(decoder) {
    var packed;
    var val = new VisitedLinkNotificationSink_AddVisitedLinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.linkHashes = decoder.decodeArrayPointer(codec.Uint64);
    return val;
  };

  VisitedLinkNotificationSink_AddVisitedLinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VisitedLinkNotificationSink_AddVisitedLinks_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint64, val.linkHashes);
  };
  function VisitedLinkNotificationSink_ResetVisitedLinks_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VisitedLinkNotificationSink_ResetVisitedLinks_Params.prototype.initDefaults_ = function() {
    this.invalidateCachedHashes = false;
  };
  VisitedLinkNotificationSink_ResetVisitedLinks_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VisitedLinkNotificationSink_ResetVisitedLinks_Params.generate = function(generator_) {
    var generated = new VisitedLinkNotificationSink_ResetVisitedLinks_Params;
    generated.invalidateCachedHashes = generator_.generateBool();
    return generated;
  };

  VisitedLinkNotificationSink_ResetVisitedLinks_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.invalidateCachedHashes = mutator_.mutateBool(this.invalidateCachedHashes);
    }
    return this;
  };
  VisitedLinkNotificationSink_ResetVisitedLinks_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VisitedLinkNotificationSink_ResetVisitedLinks_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VisitedLinkNotificationSink_ResetVisitedLinks_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VisitedLinkNotificationSink_ResetVisitedLinks_Params.validate = function(messageValidator, offset) {
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

  VisitedLinkNotificationSink_ResetVisitedLinks_Params.encodedSize = codec.kStructHeaderSize + 8;

  VisitedLinkNotificationSink_ResetVisitedLinks_Params.decode = function(decoder) {
    var packed;
    var val = new VisitedLinkNotificationSink_ResetVisitedLinks_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.invalidateCachedHashes = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VisitedLinkNotificationSink_ResetVisitedLinks_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VisitedLinkNotificationSink_ResetVisitedLinks_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.invalidateCachedHashes & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVisitedLinkNotificationSink_UpdateVisitedLinks_Name = 1736659486;
  var kVisitedLinkNotificationSink_AddVisitedLinks_Name = 27536901;
  var kVisitedLinkNotificationSink_ResetVisitedLinks_Name = 1689061284;

  function VisitedLinkNotificationSinkPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VisitedLinkNotificationSink,
                                                   handleOrPtrInfo);
  }

  function VisitedLinkNotificationSinkAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VisitedLinkNotificationSink, associatedInterfacePtrInfo);
  }

  VisitedLinkNotificationSinkAssociatedPtr.prototype =
      Object.create(VisitedLinkNotificationSinkPtr.prototype);
  VisitedLinkNotificationSinkAssociatedPtr.prototype.constructor =
      VisitedLinkNotificationSinkAssociatedPtr;

  function VisitedLinkNotificationSinkProxy(receiver) {
    this.receiver_ = receiver;
  }
  VisitedLinkNotificationSinkPtr.prototype.updateVisitedLinks = function() {
    return VisitedLinkNotificationSinkProxy.prototype.updateVisitedLinks
        .apply(this.ptr.getProxy(), arguments);
  };

  VisitedLinkNotificationSinkProxy.prototype.updateVisitedLinks = function(tableRegion) {
    var params_ = new VisitedLinkNotificationSink_UpdateVisitedLinks_Params();
    params_.tableRegion = tableRegion;
    var builder = new codec.MessageV0Builder(
        kVisitedLinkNotificationSink_UpdateVisitedLinks_Name,
        codec.align(VisitedLinkNotificationSink_UpdateVisitedLinks_Params.encodedSize));
    builder.encodeStruct(VisitedLinkNotificationSink_UpdateVisitedLinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VisitedLinkNotificationSinkPtr.prototype.addVisitedLinks = function() {
    return VisitedLinkNotificationSinkProxy.prototype.addVisitedLinks
        .apply(this.ptr.getProxy(), arguments);
  };

  VisitedLinkNotificationSinkProxy.prototype.addVisitedLinks = function(linkHashes) {
    var params_ = new VisitedLinkNotificationSink_AddVisitedLinks_Params();
    params_.linkHashes = linkHashes;
    var builder = new codec.MessageV0Builder(
        kVisitedLinkNotificationSink_AddVisitedLinks_Name,
        codec.align(VisitedLinkNotificationSink_AddVisitedLinks_Params.encodedSize));
    builder.encodeStruct(VisitedLinkNotificationSink_AddVisitedLinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VisitedLinkNotificationSinkPtr.prototype.resetVisitedLinks = function() {
    return VisitedLinkNotificationSinkProxy.prototype.resetVisitedLinks
        .apply(this.ptr.getProxy(), arguments);
  };

  VisitedLinkNotificationSinkProxy.prototype.resetVisitedLinks = function(invalidateCachedHashes) {
    var params_ = new VisitedLinkNotificationSink_ResetVisitedLinks_Params();
    params_.invalidateCachedHashes = invalidateCachedHashes;
    var builder = new codec.MessageV0Builder(
        kVisitedLinkNotificationSink_ResetVisitedLinks_Name,
        codec.align(VisitedLinkNotificationSink_ResetVisitedLinks_Params.encodedSize));
    builder.encodeStruct(VisitedLinkNotificationSink_ResetVisitedLinks_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VisitedLinkNotificationSinkStub(delegate) {
    this.delegate_ = delegate;
  }
  VisitedLinkNotificationSinkStub.prototype.updateVisitedLinks = function(tableRegion) {
    return this.delegate_ && this.delegate_.updateVisitedLinks && this.delegate_.updateVisitedLinks(tableRegion);
  }
  VisitedLinkNotificationSinkStub.prototype.addVisitedLinks = function(linkHashes) {
    return this.delegate_ && this.delegate_.addVisitedLinks && this.delegate_.addVisitedLinks(linkHashes);
  }
  VisitedLinkNotificationSinkStub.prototype.resetVisitedLinks = function(invalidateCachedHashes) {
    return this.delegate_ && this.delegate_.resetVisitedLinks && this.delegate_.resetVisitedLinks(invalidateCachedHashes);
  }

  VisitedLinkNotificationSinkStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVisitedLinkNotificationSink_UpdateVisitedLinks_Name:
      var params = reader.decodeStruct(VisitedLinkNotificationSink_UpdateVisitedLinks_Params);
      this.updateVisitedLinks(params.tableRegion);
      return true;
    case kVisitedLinkNotificationSink_AddVisitedLinks_Name:
      var params = reader.decodeStruct(VisitedLinkNotificationSink_AddVisitedLinks_Params);
      this.addVisitedLinks(params.linkHashes);
      return true;
    case kVisitedLinkNotificationSink_ResetVisitedLinks_Name:
      var params = reader.decodeStruct(VisitedLinkNotificationSink_ResetVisitedLinks_Params);
      this.resetVisitedLinks(params.invalidateCachedHashes);
      return true;
    default:
      return false;
    }
  };

  VisitedLinkNotificationSinkStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVisitedLinkNotificationSinkRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVisitedLinkNotificationSink_UpdateVisitedLinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VisitedLinkNotificationSink_UpdateVisitedLinks_Params;
      break;
      case kVisitedLinkNotificationSink_AddVisitedLinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VisitedLinkNotificationSink_AddVisitedLinks_Params;
      break;
      case kVisitedLinkNotificationSink_ResetVisitedLinks_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VisitedLinkNotificationSink_ResetVisitedLinks_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVisitedLinkNotificationSinkResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VisitedLinkNotificationSink = {
    name: 'visitedlink.mojom.VisitedLinkNotificationSink',
    kVersion: 0,
    ptrClass: VisitedLinkNotificationSinkPtr,
    proxyClass: VisitedLinkNotificationSinkProxy,
    stubClass: VisitedLinkNotificationSinkStub,
    validateRequest: validateVisitedLinkNotificationSinkRequest,
    validateResponse: null,
    mojomId: 'components/visitedlink/common/visitedlink.mojom',
    fuzzMethods: {
      updateVisitedLinks: {
        params: VisitedLinkNotificationSink_UpdateVisitedLinks_Params,
      },
      addVisitedLinks: {
        params: VisitedLinkNotificationSink_AddVisitedLinks_Params,
      },
      resetVisitedLinks: {
        params: VisitedLinkNotificationSink_ResetVisitedLinks_Params,
      },
    },
  };
  VisitedLinkNotificationSinkStub.prototype.validator = validateVisitedLinkNotificationSinkRequest;
  VisitedLinkNotificationSinkProxy.prototype.validator = null;
  exports.VisitedLinkNotificationSink = VisitedLinkNotificationSink;
  exports.VisitedLinkNotificationSinkPtr = VisitedLinkNotificationSinkPtr;
  exports.VisitedLinkNotificationSinkAssociatedPtr = VisitedLinkNotificationSinkAssociatedPtr;
})();