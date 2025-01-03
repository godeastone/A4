// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom';
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
  var begin_frame_args$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/begin_frame_args.mojom', '../../../public/interfaces/compositing/begin_frame_args.mojom.js');
  }



  function ExternalBeginFrameController_IssueExternalBeginFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ExternalBeginFrameController_IssueExternalBeginFrame_Params.prototype.initDefaults_ = function() {
    this.args = null;
  };
  ExternalBeginFrameController_IssueExternalBeginFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ExternalBeginFrameController_IssueExternalBeginFrame_Params.generate = function(generator_) {
    var generated = new ExternalBeginFrameController_IssueExternalBeginFrame_Params;
    generated.args = generator_.generateStruct(viz.mojom.BeginFrameArgs, false);
    return generated;
  };

  ExternalBeginFrameController_IssueExternalBeginFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.args = mutator_.mutateStruct(viz.mojom.BeginFrameArgs, false);
    }
    return this;
  };
  ExternalBeginFrameController_IssueExternalBeginFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ExternalBeginFrameController_IssueExternalBeginFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ExternalBeginFrameController_IssueExternalBeginFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ExternalBeginFrameController_IssueExternalBeginFrame_Params.validate = function(messageValidator, offset) {
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


    // validate ExternalBeginFrameController_IssueExternalBeginFrame_Params.args
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, begin_frame_args$.BeginFrameArgs, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ExternalBeginFrameController_IssueExternalBeginFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  ExternalBeginFrameController_IssueExternalBeginFrame_Params.decode = function(decoder) {
    var packed;
    var val = new ExternalBeginFrameController_IssueExternalBeginFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.args = decoder.decodeStructPointer(begin_frame_args$.BeginFrameArgs);
    return val;
  };

  ExternalBeginFrameController_IssueExternalBeginFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ExternalBeginFrameController_IssueExternalBeginFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(begin_frame_args$.BeginFrameArgs, val.args);
  };
  function ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.prototype.initDefaults_ = function() {
    this.needsBeginFrames = false;
  };
  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.generate = function(generator_) {
    var generated = new ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params;
    generated.needsBeginFrames = generator_.generateBool();
    return generated;
  };

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.needsBeginFrames = mutator_.mutateBool(this.needsBeginFrames);
    }
    return this;
  };
  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.validate = function(messageValidator, offset) {
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

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.encodedSize = codec.kStructHeaderSize + 8;

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.decode = function(decoder) {
    var packed;
    var val = new ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.needsBeginFrames = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.needsBeginFrames & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.prototype.initDefaults_ = function() {
    this.ack = null;
  };
  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.generate = function(generator_) {
    var generated = new ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params;
    generated.ack = generator_.generateStruct(viz.mojom.BeginFrameAck, false);
    return generated;
  };

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ack = mutator_.mutateStruct(viz.mojom.BeginFrameAck, false);
    }
    return this;
  };
  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.validate = function(messageValidator, offset) {
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


    // validate ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.ack
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, begin_frame_args$.BeginFrameAck, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.decode = function(decoder) {
    var packed;
    var val = new ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ack = decoder.decodeStructPointer(begin_frame_args$.BeginFrameAck);
    return val;
  };

  ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(begin_frame_args$.BeginFrameAck, val.ack);
  };
  var kExternalBeginFrameController_IssueExternalBeginFrame_Name = 920870612;

  function ExternalBeginFrameControllerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ExternalBeginFrameController,
                                                   handleOrPtrInfo);
  }

  function ExternalBeginFrameControllerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ExternalBeginFrameController, associatedInterfacePtrInfo);
  }

  ExternalBeginFrameControllerAssociatedPtr.prototype =
      Object.create(ExternalBeginFrameControllerPtr.prototype);
  ExternalBeginFrameControllerAssociatedPtr.prototype.constructor =
      ExternalBeginFrameControllerAssociatedPtr;

  function ExternalBeginFrameControllerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ExternalBeginFrameControllerPtr.prototype.issueExternalBeginFrame = function() {
    return ExternalBeginFrameControllerProxy.prototype.issueExternalBeginFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  ExternalBeginFrameControllerProxy.prototype.issueExternalBeginFrame = function(args) {
    var params_ = new ExternalBeginFrameController_IssueExternalBeginFrame_Params();
    params_.args = args;
    var builder = new codec.MessageV0Builder(
        kExternalBeginFrameController_IssueExternalBeginFrame_Name,
        codec.align(ExternalBeginFrameController_IssueExternalBeginFrame_Params.encodedSize));
    builder.encodeStruct(ExternalBeginFrameController_IssueExternalBeginFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ExternalBeginFrameControllerStub(delegate) {
    this.delegate_ = delegate;
  }
  ExternalBeginFrameControllerStub.prototype.issueExternalBeginFrame = function(args) {
    return this.delegate_ && this.delegate_.issueExternalBeginFrame && this.delegate_.issueExternalBeginFrame(args);
  }

  ExternalBeginFrameControllerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kExternalBeginFrameController_IssueExternalBeginFrame_Name:
      var params = reader.decodeStruct(ExternalBeginFrameController_IssueExternalBeginFrame_Params);
      this.issueExternalBeginFrame(params.args);
      return true;
    default:
      return false;
    }
  };

  ExternalBeginFrameControllerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateExternalBeginFrameControllerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kExternalBeginFrameController_IssueExternalBeginFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ExternalBeginFrameController_IssueExternalBeginFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateExternalBeginFrameControllerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ExternalBeginFrameController = {
    name: 'viz.mojom.ExternalBeginFrameController',
    kVersion: 0,
    ptrClass: ExternalBeginFrameControllerPtr,
    proxyClass: ExternalBeginFrameControllerProxy,
    stubClass: ExternalBeginFrameControllerStub,
    validateRequest: validateExternalBeginFrameControllerRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom',
    fuzzMethods: {
      issueExternalBeginFrame: {
        params: ExternalBeginFrameController_IssueExternalBeginFrame_Params,
      },
    },
  };
  ExternalBeginFrameControllerStub.prototype.validator = validateExternalBeginFrameControllerRequest;
  ExternalBeginFrameControllerProxy.prototype.validator = null;
  var kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name = 544393315;
  var kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name = 1881681204;

  function ExternalBeginFrameControllerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ExternalBeginFrameControllerClient,
                                                   handleOrPtrInfo);
  }

  function ExternalBeginFrameControllerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ExternalBeginFrameControllerClient, associatedInterfacePtrInfo);
  }

  ExternalBeginFrameControllerClientAssociatedPtr.prototype =
      Object.create(ExternalBeginFrameControllerClientPtr.prototype);
  ExternalBeginFrameControllerClientAssociatedPtr.prototype.constructor =
      ExternalBeginFrameControllerClientAssociatedPtr;

  function ExternalBeginFrameControllerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ExternalBeginFrameControllerClientPtr.prototype.onNeedsBeginFrames = function() {
    return ExternalBeginFrameControllerClientProxy.prototype.onNeedsBeginFrames
        .apply(this.ptr.getProxy(), arguments);
  };

  ExternalBeginFrameControllerClientProxy.prototype.onNeedsBeginFrames = function(needsBeginFrames) {
    var params_ = new ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params();
    params_.needsBeginFrames = needsBeginFrames;
    var builder = new codec.MessageV0Builder(
        kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name,
        codec.align(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params.encodedSize));
    builder.encodeStruct(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ExternalBeginFrameControllerClientPtr.prototype.onDisplayDidFinishFrame = function() {
    return ExternalBeginFrameControllerClientProxy.prototype.onDisplayDidFinishFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  ExternalBeginFrameControllerClientProxy.prototype.onDisplayDidFinishFrame = function(ack) {
    var params_ = new ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params();
    params_.ack = ack;
    var builder = new codec.MessageV0Builder(
        kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name,
        codec.align(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params.encodedSize));
    builder.encodeStruct(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ExternalBeginFrameControllerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ExternalBeginFrameControllerClientStub.prototype.onNeedsBeginFrames = function(needsBeginFrames) {
    return this.delegate_ && this.delegate_.onNeedsBeginFrames && this.delegate_.onNeedsBeginFrames(needsBeginFrames);
  }
  ExternalBeginFrameControllerClientStub.prototype.onDisplayDidFinishFrame = function(ack) {
    return this.delegate_ && this.delegate_.onDisplayDidFinishFrame && this.delegate_.onDisplayDidFinishFrame(ack);
  }

  ExternalBeginFrameControllerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name:
      var params = reader.decodeStruct(ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params);
      this.onNeedsBeginFrames(params.needsBeginFrames);
      return true;
    case kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name:
      var params = reader.decodeStruct(ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params);
      this.onDisplayDidFinishFrame(params.ack);
      return true;
    default:
      return false;
    }
  };

  ExternalBeginFrameControllerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateExternalBeginFrameControllerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kExternalBeginFrameControllerClient_OnNeedsBeginFrames_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params;
      break;
      case kExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateExternalBeginFrameControllerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ExternalBeginFrameControllerClient = {
    name: 'viz.mojom.ExternalBeginFrameControllerClient',
    kVersion: 0,
    ptrClass: ExternalBeginFrameControllerClientPtr,
    proxyClass: ExternalBeginFrameControllerClientProxy,
    stubClass: ExternalBeginFrameControllerClientStub,
    validateRequest: validateExternalBeginFrameControllerClientRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/external_begin_frame_controller.mojom',
    fuzzMethods: {
      onNeedsBeginFrames: {
        params: ExternalBeginFrameControllerClient_OnNeedsBeginFrames_Params,
      },
      onDisplayDidFinishFrame: {
        params: ExternalBeginFrameControllerClient_OnDisplayDidFinishFrame_Params,
      },
    },
  };
  ExternalBeginFrameControllerClientStub.prototype.validator = validateExternalBeginFrameControllerClientRequest;
  ExternalBeginFrameControllerClientProxy.prototype.validator = null;
  exports.ExternalBeginFrameController = ExternalBeginFrameController;
  exports.ExternalBeginFrameControllerPtr = ExternalBeginFrameControllerPtr;
  exports.ExternalBeginFrameControllerAssociatedPtr = ExternalBeginFrameControllerAssociatedPtr;
  exports.ExternalBeginFrameControllerClient = ExternalBeginFrameControllerClient;
  exports.ExternalBeginFrameControllerClientPtr = ExternalBeginFrameControllerClientPtr;
  exports.ExternalBeginFrameControllerClientAssociatedPtr = ExternalBeginFrameControllerClientAssociatedPtr;
})();