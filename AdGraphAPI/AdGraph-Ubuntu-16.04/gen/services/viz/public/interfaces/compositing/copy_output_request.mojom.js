// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/copy_output_request.mojom';
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
  var mailbox$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox.mojom', '../../../../../gpu/ipc/common/mailbox.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var copy_output_result$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/copy_output_result.mojom', 'copy_output_result.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function CopyOutputRequest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CopyOutputRequest.prototype.initDefaults_ = function() {
    this.resultFormat = 0;
    this.scaleFrom = null;
    this.scaleTo = null;
    this.source = null;
    this.area = null;
    this.resultSelection = null;
    this.resultSender = new CopyOutputResultSenderPtr();
  };
  CopyOutputRequest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CopyOutputRequest.generate = function(generator_) {
    var generated = new CopyOutputRequest;
    generated.resultFormat = generator_.generateEnum(0, 1);
    generated.scaleFrom = generator_.generateStruct(gfx.mojom.Vector2d, false);
    generated.scaleTo = generator_.generateStruct(gfx.mojom.Vector2d, false);
    generated.source = generator_.generateStruct(mojoBase.mojom.UnguessableToken, true);
    generated.area = generator_.generateStruct(gfx.mojom.Rect, true);
    generated.resultSelection = generator_.generateStruct(gfx.mojom.Rect, true);
    generated.resultSender = generator_.generateInterface("viz.mojom.CopyOutputResultSender", false);
    return generated;
  };

  CopyOutputRequest.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.resultFormat = mutator_.mutateEnum(this.resultFormat, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.scaleFrom = mutator_.mutateStruct(gfx.mojom.Vector2d, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scaleTo = mutator_.mutateStruct(gfx.mojom.Vector2d, false);
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, true);
    }
    if (mutator_.chooseMutateField()) {
      this.area = mutator_.mutateStruct(gfx.mojom.Rect, true);
    }
    if (mutator_.chooseMutateField()) {
      this.resultSelection = mutator_.mutateStruct(gfx.mojom.Rect, true);
    }
    if (mutator_.chooseMutateField()) {
      this.resultSender = mutator_.mutateInterface(this.resultSender, "viz.mojom.CopyOutputResultSender", false);
    }
    return this;
  };
  CopyOutputRequest.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.resultSender !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CopyOutputResultSenderPtr"]);
    }
    return handles;
  };

  CopyOutputRequest.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CopyOutputRequest.prototype.setHandlesInternal_ = function(handles, idx) {
    this.resultSender = handles[idx++];;
    return idx;
  };

  CopyOutputRequest.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.resultFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, copy_output_result$.CopyOutputResultFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.scaleFrom
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Vector2d, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.scaleTo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Vector2d, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, unguessable_token$.UnguessableToken, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.area
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.Rect, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.resultSelection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, geometry$.Rect, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputRequest.resultSender
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 48, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CopyOutputRequest.encodedSize = codec.kStructHeaderSize + 56;

  CopyOutputRequest.decode = function(decoder) {
    var packed;
    var val = new CopyOutputRequest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resultFormat = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.scaleFrom = decoder.decodeStructPointer(geometry$.Vector2d);
    val.scaleTo = decoder.decodeStructPointer(geometry$.Vector2d);
    val.source = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.area = decoder.decodeStructPointer(geometry$.Rect);
    val.resultSelection = decoder.decodeStructPointer(geometry$.Rect);
    val.resultSender = decoder.decodeStruct(new codec.Interface(CopyOutputResultSenderPtr));
    return val;
  };

  CopyOutputRequest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CopyOutputRequest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.resultFormat);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Vector2d, val.scaleFrom);
    encoder.encodeStructPointer(geometry$.Vector2d, val.scaleTo);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.source);
    encoder.encodeStructPointer(geometry$.Rect, val.area);
    encoder.encodeStructPointer(geometry$.Rect, val.resultSelection);
    encoder.encodeStruct(new codec.Interface(CopyOutputResultSenderPtr), val.resultSender);
  };
  function CopyOutputResultSender_SendResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CopyOutputResultSender_SendResult_Params.prototype.initDefaults_ = function() {
    this.result = null;
  };
  CopyOutputResultSender_SendResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CopyOutputResultSender_SendResult_Params.generate = function(generator_) {
    var generated = new CopyOutputResultSender_SendResult_Params;
    generated.result = generator_.generateStruct(viz.mojom.CopyOutputResult, false);
    return generated;
  };

  CopyOutputResultSender_SendResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(viz.mojom.CopyOutputResult, false);
    }
    return this;
  };
  CopyOutputResultSender_SendResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  CopyOutputResultSender_SendResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CopyOutputResultSender_SendResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  CopyOutputResultSender_SendResult_Params.validate = function(messageValidator, offset) {
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


    // validate CopyOutputResultSender_SendResult_Params.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, copy_output_result$.CopyOutputResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CopyOutputResultSender_SendResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  CopyOutputResultSender_SendResult_Params.decode = function(decoder) {
    var packed;
    var val = new CopyOutputResultSender_SendResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(copy_output_result$.CopyOutputResult);
    return val;
  };

  CopyOutputResultSender_SendResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CopyOutputResultSender_SendResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(copy_output_result$.CopyOutputResult, val.result);
  };
  var kCopyOutputResultSender_SendResult_Name = 1774408905;

  function CopyOutputResultSenderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CopyOutputResultSender,
                                                   handleOrPtrInfo);
  }

  function CopyOutputResultSenderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CopyOutputResultSender, associatedInterfacePtrInfo);
  }

  CopyOutputResultSenderAssociatedPtr.prototype =
      Object.create(CopyOutputResultSenderPtr.prototype);
  CopyOutputResultSenderAssociatedPtr.prototype.constructor =
      CopyOutputResultSenderAssociatedPtr;

  function CopyOutputResultSenderProxy(receiver) {
    this.receiver_ = receiver;
  }
  CopyOutputResultSenderPtr.prototype.sendResult = function() {
    return CopyOutputResultSenderProxy.prototype.sendResult
        .apply(this.ptr.getProxy(), arguments);
  };

  CopyOutputResultSenderProxy.prototype.sendResult = function(result) {
    var params_ = new CopyOutputResultSender_SendResult_Params();
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kCopyOutputResultSender_SendResult_Name,
        codec.align(CopyOutputResultSender_SendResult_Params.encodedSize));
    builder.encodeStruct(CopyOutputResultSender_SendResult_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CopyOutputResultSenderStub(delegate) {
    this.delegate_ = delegate;
  }
  CopyOutputResultSenderStub.prototype.sendResult = function(result) {
    return this.delegate_ && this.delegate_.sendResult && this.delegate_.sendResult(result);
  }

  CopyOutputResultSenderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCopyOutputResultSender_SendResult_Name:
      var params = reader.decodeStruct(CopyOutputResultSender_SendResult_Params);
      this.sendResult(params.result);
      return true;
    default:
      return false;
    }
  };

  CopyOutputResultSenderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCopyOutputResultSenderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCopyOutputResultSender_SendResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CopyOutputResultSender_SendResult_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCopyOutputResultSenderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CopyOutputResultSender = {
    name: 'viz.mojom.CopyOutputResultSender',
    kVersion: 0,
    ptrClass: CopyOutputResultSenderPtr,
    proxyClass: CopyOutputResultSenderProxy,
    stubClass: CopyOutputResultSenderStub,
    validateRequest: validateCopyOutputResultSenderRequest,
    validateResponse: null,
    mojomId: 'services/viz/public/interfaces/compositing/copy_output_request.mojom',
    fuzzMethods: {
      sendResult: {
        params: CopyOutputResultSender_SendResult_Params,
      },
    },
  };
  CopyOutputResultSenderStub.prototype.validator = validateCopyOutputResultSenderRequest;
  CopyOutputResultSenderProxy.prototype.validator = null;
  exports.CopyOutputRequest = CopyOutputRequest;
  exports.CopyOutputResultSender = CopyOutputResultSender;
  exports.CopyOutputResultSenderPtr = CopyOutputResultSenderPtr;
  exports.CopyOutputResultSenderAssociatedPtr = CopyOutputResultSenderAssociatedPtr;
})();