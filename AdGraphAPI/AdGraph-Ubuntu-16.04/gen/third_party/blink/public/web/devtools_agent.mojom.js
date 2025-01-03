// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/web/devtools_agent.mojom';
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
  var big_string$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/big_string.mojom', '../../../../mojo/public/mojom/base/big_string.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function DevToolsAgent_AttachDevToolsSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsAgent_AttachDevToolsSession_Params.prototype.initDefaults_ = function() {
    this.host = new associatedBindings.AssociatedInterfacePtrInfo();
    this.session = new associatedBindings.AssociatedInterfaceRequest();
    this.ioSession = new bindings.InterfaceRequest();
    this.reattachState = null;
  };
  DevToolsAgent_AttachDevToolsSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsAgent_AttachDevToolsSession_Params.generate = function(generator_) {
    var generated = new DevToolsAgent_AttachDevToolsSession_Params;
    generated.host = generator_.generateAssociatedInterface("blink.mojom.DevToolsSessionHost", false);
    generated.session = generator_.generateAssociatedInterfaceRequest("blink.mojom.DevToolsSession", false);
    generated.ioSession = generator_.generateInterfaceRequest("blink.mojom.DevToolsSession", false);
    generated.reattachState = generator_.generateString(true);
    return generated;
  };

  DevToolsAgent_AttachDevToolsSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateAssociatedInterface(this.host, "blink.mojom.DevToolsSessionHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.session = mutator_.mutateAssociatedInterfaceRequest(this.session, "blink.mojom.DevToolsSession", false);
    }
    if (mutator_.chooseMutateField()) {
      this.ioSession = mutator_.mutateInterfaceRequest(this.ioSession, "blink.mojom.DevToolsSession", false);
    }
    if (mutator_.chooseMutateField()) {
      this.reattachState = mutator_.mutateString(this.reattachState, true);
    }
    return this;
  };
  DevToolsAgent_AttachDevToolsSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.DevToolsSessionHostAssociatedPtr"]);
    }
    if (this.session !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.DevToolsSessionAssociatedRequest"]);
    }
    if (this.ioSession !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.DevToolsSessionRequest"]);
    }
    return handles;
  };

  DevToolsAgent_AttachDevToolsSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsAgent_AttachDevToolsSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.host = handles[idx++];;
    this.session = handles[idx++];;
    this.ioSession = handles[idx++];;
    return idx;
  };

  DevToolsAgent_AttachDevToolsSession_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsAgent_AttachDevToolsSession_Params.host
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DevToolsAgent_AttachDevToolsSession_Params.session
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DevToolsAgent_AttachDevToolsSession_Params.ioSession
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DevToolsAgent_AttachDevToolsSession_Params.reattachState
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsAgent_AttachDevToolsSession_Params.encodedSize = codec.kStructHeaderSize + 24;

  DevToolsAgent_AttachDevToolsSession_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsAgent_AttachDevToolsSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.host = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.session = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.ioSession = decoder.decodeStruct(codec.InterfaceRequest);
    val.reattachState = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  DevToolsAgent_AttachDevToolsSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsAgent_AttachDevToolsSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.host);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.session);
    encoder.encodeStruct(codec.InterfaceRequest, val.ioSession);
    encoder.encodeStruct(codec.NullableString, val.reattachState);
  };
  function DevToolsAgent_InspectElement_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsAgent_InspectElement_Params.prototype.initDefaults_ = function() {
    this.point = null;
  };
  DevToolsAgent_InspectElement_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsAgent_InspectElement_Params.generate = function(generator_) {
    var generated = new DevToolsAgent_InspectElement_Params;
    generated.point = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  DevToolsAgent_InspectElement_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.point = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  DevToolsAgent_InspectElement_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DevToolsAgent_InspectElement_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsAgent_InspectElement_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DevToolsAgent_InspectElement_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsAgent_InspectElement_Params.point
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsAgent_InspectElement_Params.encodedSize = codec.kStructHeaderSize + 8;

  DevToolsAgent_InspectElement_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsAgent_InspectElement_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.point = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  DevToolsAgent_InspectElement_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsAgent_InspectElement_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.point);
  };
  function DevToolsSession_DispatchProtocolCommand_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsSession_DispatchProtocolCommand_Params.prototype.initDefaults_ = function() {
    this.callId = 0;
    this.method = null;
    this.message = null;
  };
  DevToolsSession_DispatchProtocolCommand_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsSession_DispatchProtocolCommand_Params.generate = function(generator_) {
    var generated = new DevToolsSession_DispatchProtocolCommand_Params;
    generated.callId = generator_.generateInt32();
    generated.method = generator_.generateString(false);
    generated.message = generator_.generateString(false);
    return generated;
  };

  DevToolsSession_DispatchProtocolCommand_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.callId = mutator_.mutateInt32(this.callId);
    }
    if (mutator_.chooseMutateField()) {
      this.method = mutator_.mutateString(this.method, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  DevToolsSession_DispatchProtocolCommand_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DevToolsSession_DispatchProtocolCommand_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsSession_DispatchProtocolCommand_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DevToolsSession_DispatchProtocolCommand_Params.validate = function(messageValidator, offset) {
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



    // validate DevToolsSession_DispatchProtocolCommand_Params.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DevToolsSession_DispatchProtocolCommand_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsSession_DispatchProtocolCommand_Params.encodedSize = codec.kStructHeaderSize + 24;

  DevToolsSession_DispatchProtocolCommand_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsSession_DispatchProtocolCommand_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.callId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.method = decoder.decodeStruct(codec.String);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  DevToolsSession_DispatchProtocolCommand_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsSession_DispatchProtocolCommand_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.callId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.method);
    encoder.encodeStruct(codec.String, val.message);
  };
  function DevToolsSessionHost_DispatchProtocolResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsSessionHost_DispatchProtocolResponse_Params.prototype.initDefaults_ = function() {
    this.message = null;
    this.callId = 0;
    this.state = null;
  };
  DevToolsSessionHost_DispatchProtocolResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsSessionHost_DispatchProtocolResponse_Params.generate = function(generator_) {
    var generated = new DevToolsSessionHost_DispatchProtocolResponse_Params;
    generated.message = generator_.generateStruct(mojoBase.mojom.BigString, false);
    generated.callId = generator_.generateInt32();
    generated.state = generator_.generateString(true);
    return generated;
  };

  DevToolsSessionHost_DispatchProtocolResponse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(mojoBase.mojom.BigString, false);
    }
    if (mutator_.chooseMutateField()) {
      this.callId = mutator_.mutateInt32(this.callId);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateString(this.state, true);
    }
    return this;
  };
  DevToolsSessionHost_DispatchProtocolResponse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    return handles;
  };

  DevToolsSessionHost_DispatchProtocolResponse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsSessionHost_DispatchProtocolResponse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.message.setHandlesInternal_(handles, idx);
    return idx;
  };

  DevToolsSessionHost_DispatchProtocolResponse_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsSessionHost_DispatchProtocolResponse_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, big_string$.BigString, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate DevToolsSessionHost_DispatchProtocolResponse_Params.state
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsSessionHost_DispatchProtocolResponse_Params.encodedSize = codec.kStructHeaderSize + 24;

  DevToolsSessionHost_DispatchProtocolResponse_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsSessionHost_DispatchProtocolResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStructPointer(big_string$.BigString);
    val.callId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.state = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  DevToolsSessionHost_DispatchProtocolResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsSessionHost_DispatchProtocolResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(big_string$.BigString, val.message);
    encoder.encodeStruct(codec.Int32, val.callId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.state);
  };
  function DevToolsSessionHost_DispatchProtocolNotification_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsSessionHost_DispatchProtocolNotification_Params.prototype.initDefaults_ = function() {
    this.message = null;
    this.state = null;
  };
  DevToolsSessionHost_DispatchProtocolNotification_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsSessionHost_DispatchProtocolNotification_Params.generate = function(generator_) {
    var generated = new DevToolsSessionHost_DispatchProtocolNotification_Params;
    generated.message = generator_.generateStruct(mojoBase.mojom.BigString, false);
    generated.state = generator_.generateString(true);
    return generated;
  };

  DevToolsSessionHost_DispatchProtocolNotification_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(mojoBase.mojom.BigString, false);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateString(this.state, true);
    }
    return this;
  };
  DevToolsSessionHost_DispatchProtocolNotification_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    return handles;
  };

  DevToolsSessionHost_DispatchProtocolNotification_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsSessionHost_DispatchProtocolNotification_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.message.setHandlesInternal_(handles, idx);
    return idx;
  };

  DevToolsSessionHost_DispatchProtocolNotification_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsSessionHost_DispatchProtocolNotification_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, big_string$.BigString, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DevToolsSessionHost_DispatchProtocolNotification_Params.state
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsSessionHost_DispatchProtocolNotification_Params.encodedSize = codec.kStructHeaderSize + 16;

  DevToolsSessionHost_DispatchProtocolNotification_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsSessionHost_DispatchProtocolNotification_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStructPointer(big_string$.BigString);
    val.state = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  DevToolsSessionHost_DispatchProtocolNotification_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsSessionHost_DispatchProtocolNotification_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(big_string$.BigString, val.message);
    encoder.encodeStruct(codec.NullableString, val.state);
  };
  var kDevToolsAgent_AttachDevToolsSession_Name = 211506115;
  var kDevToolsAgent_InspectElement_Name = 1666068463;

  function DevToolsAgentPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DevToolsAgent,
                                                   handleOrPtrInfo);
  }

  function DevToolsAgentAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DevToolsAgent, associatedInterfacePtrInfo);
  }

  DevToolsAgentAssociatedPtr.prototype =
      Object.create(DevToolsAgentPtr.prototype);
  DevToolsAgentAssociatedPtr.prototype.constructor =
      DevToolsAgentAssociatedPtr;

  function DevToolsAgentProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevToolsAgentPtr.prototype.attachDevToolsSession = function() {
    return DevToolsAgentProxy.prototype.attachDevToolsSession
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsAgentProxy.prototype.attachDevToolsSession = function(host, session, ioSession, reattachState) {
    var params_ = new DevToolsAgent_AttachDevToolsSession_Params();
    params_.host = host;
    params_.session = session;
    params_.ioSession = ioSession;
    params_.reattachState = reattachState;
    var builder = new codec.MessageV2Builder(
        kDevToolsAgent_AttachDevToolsSession_Name,
        codec.align(DevToolsAgent_AttachDevToolsSession_Params.encodedSize));
    builder.setPayload(DevToolsAgent_AttachDevToolsSession_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevToolsAgentPtr.prototype.inspectElement = function() {
    return DevToolsAgentProxy.prototype.inspectElement
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsAgentProxy.prototype.inspectElement = function(point) {
    var params_ = new DevToolsAgent_InspectElement_Params();
    params_.point = point;
    var builder = new codec.MessageV0Builder(
        kDevToolsAgent_InspectElement_Name,
        codec.align(DevToolsAgent_InspectElement_Params.encodedSize));
    builder.encodeStruct(DevToolsAgent_InspectElement_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DevToolsAgentStub(delegate) {
    this.delegate_ = delegate;
  }
  DevToolsAgentStub.prototype.attachDevToolsSession = function(host, session, ioSession, reattachState) {
    return this.delegate_ && this.delegate_.attachDevToolsSession && this.delegate_.attachDevToolsSession(host, session, ioSession, reattachState);
  }
  DevToolsAgentStub.prototype.inspectElement = function(point) {
    return this.delegate_ && this.delegate_.inspectElement && this.delegate_.inspectElement(point);
  }

  DevToolsAgentStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevToolsAgent_AttachDevToolsSession_Name:
      var params = reader.decodeStruct(DevToolsAgent_AttachDevToolsSession_Params);
      this.attachDevToolsSession(params.host, params.session, params.ioSession, params.reattachState);
      return true;
    case kDevToolsAgent_InspectElement_Name:
      var params = reader.decodeStruct(DevToolsAgent_InspectElement_Params);
      this.inspectElement(params.point);
      return true;
    default:
      return false;
    }
  };

  DevToolsAgentStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDevToolsAgentRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevToolsAgent_AttachDevToolsSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsAgent_AttachDevToolsSession_Params;
      break;
      case kDevToolsAgent_InspectElement_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsAgent_InspectElement_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDevToolsAgentResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DevToolsAgent = {
    name: 'blink.mojom.DevToolsAgent',
    kVersion: 0,
    ptrClass: DevToolsAgentPtr,
    proxyClass: DevToolsAgentProxy,
    stubClass: DevToolsAgentStub,
    validateRequest: validateDevToolsAgentRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/web/devtools_agent.mojom',
    fuzzMethods: {
      attachDevToolsSession: {
        params: DevToolsAgent_AttachDevToolsSession_Params,
      },
      inspectElement: {
        params: DevToolsAgent_InspectElement_Params,
      },
    },
  };
  DevToolsAgentStub.prototype.validator = validateDevToolsAgentRequest;
  DevToolsAgentProxy.prototype.validator = null;
  var kDevToolsSession_DispatchProtocolCommand_Name = 922799425;

  function DevToolsSessionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DevToolsSession,
                                                   handleOrPtrInfo);
  }

  function DevToolsSessionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DevToolsSession, associatedInterfacePtrInfo);
  }

  DevToolsSessionAssociatedPtr.prototype =
      Object.create(DevToolsSessionPtr.prototype);
  DevToolsSessionAssociatedPtr.prototype.constructor =
      DevToolsSessionAssociatedPtr;

  function DevToolsSessionProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevToolsSessionPtr.prototype.dispatchProtocolCommand = function() {
    return DevToolsSessionProxy.prototype.dispatchProtocolCommand
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsSessionProxy.prototype.dispatchProtocolCommand = function(callId, method, message) {
    var params_ = new DevToolsSession_DispatchProtocolCommand_Params();
    params_.callId = callId;
    params_.method = method;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kDevToolsSession_DispatchProtocolCommand_Name,
        codec.align(DevToolsSession_DispatchProtocolCommand_Params.encodedSize));
    builder.encodeStruct(DevToolsSession_DispatchProtocolCommand_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DevToolsSessionStub(delegate) {
    this.delegate_ = delegate;
  }
  DevToolsSessionStub.prototype.dispatchProtocolCommand = function(callId, method, message) {
    return this.delegate_ && this.delegate_.dispatchProtocolCommand && this.delegate_.dispatchProtocolCommand(callId, method, message);
  }

  DevToolsSessionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevToolsSession_DispatchProtocolCommand_Name:
      var params = reader.decodeStruct(DevToolsSession_DispatchProtocolCommand_Params);
      this.dispatchProtocolCommand(params.callId, params.method, params.message);
      return true;
    default:
      return false;
    }
  };

  DevToolsSessionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDevToolsSessionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevToolsSession_DispatchProtocolCommand_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsSession_DispatchProtocolCommand_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDevToolsSessionResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DevToolsSession = {
    name: 'blink.mojom.DevToolsSession',
    kVersion: 0,
    ptrClass: DevToolsSessionPtr,
    proxyClass: DevToolsSessionProxy,
    stubClass: DevToolsSessionStub,
    validateRequest: validateDevToolsSessionRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/web/devtools_agent.mojom',
    fuzzMethods: {
      dispatchProtocolCommand: {
        params: DevToolsSession_DispatchProtocolCommand_Params,
      },
    },
  };
  DevToolsSessionStub.prototype.validator = validateDevToolsSessionRequest;
  DevToolsSessionProxy.prototype.validator = null;
  var kDevToolsSessionHost_DispatchProtocolResponse_Name = 827810839;
  var kDevToolsSessionHost_DispatchProtocolNotification_Name = 1558355937;

  function DevToolsSessionHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DevToolsSessionHost,
                                                   handleOrPtrInfo);
  }

  function DevToolsSessionHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DevToolsSessionHost, associatedInterfacePtrInfo);
  }

  DevToolsSessionHostAssociatedPtr.prototype =
      Object.create(DevToolsSessionHostPtr.prototype);
  DevToolsSessionHostAssociatedPtr.prototype.constructor =
      DevToolsSessionHostAssociatedPtr;

  function DevToolsSessionHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevToolsSessionHostPtr.prototype.dispatchProtocolResponse = function() {
    return DevToolsSessionHostProxy.prototype.dispatchProtocolResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsSessionHostProxy.prototype.dispatchProtocolResponse = function(message, callId, state) {
    var params_ = new DevToolsSessionHost_DispatchProtocolResponse_Params();
    params_.message = message;
    params_.callId = callId;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kDevToolsSessionHost_DispatchProtocolResponse_Name,
        codec.align(DevToolsSessionHost_DispatchProtocolResponse_Params.encodedSize));
    builder.encodeStruct(DevToolsSessionHost_DispatchProtocolResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevToolsSessionHostPtr.prototype.dispatchProtocolNotification = function() {
    return DevToolsSessionHostProxy.prototype.dispatchProtocolNotification
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsSessionHostProxy.prototype.dispatchProtocolNotification = function(message, state) {
    var params_ = new DevToolsSessionHost_DispatchProtocolNotification_Params();
    params_.message = message;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kDevToolsSessionHost_DispatchProtocolNotification_Name,
        codec.align(DevToolsSessionHost_DispatchProtocolNotification_Params.encodedSize));
    builder.encodeStruct(DevToolsSessionHost_DispatchProtocolNotification_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DevToolsSessionHostStub(delegate) {
    this.delegate_ = delegate;
  }
  DevToolsSessionHostStub.prototype.dispatchProtocolResponse = function(message, callId, state) {
    return this.delegate_ && this.delegate_.dispatchProtocolResponse && this.delegate_.dispatchProtocolResponse(message, callId, state);
  }
  DevToolsSessionHostStub.prototype.dispatchProtocolNotification = function(message, state) {
    return this.delegate_ && this.delegate_.dispatchProtocolNotification && this.delegate_.dispatchProtocolNotification(message, state);
  }

  DevToolsSessionHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevToolsSessionHost_DispatchProtocolResponse_Name:
      var params = reader.decodeStruct(DevToolsSessionHost_DispatchProtocolResponse_Params);
      this.dispatchProtocolResponse(params.message, params.callId, params.state);
      return true;
    case kDevToolsSessionHost_DispatchProtocolNotification_Name:
      var params = reader.decodeStruct(DevToolsSessionHost_DispatchProtocolNotification_Params);
      this.dispatchProtocolNotification(params.message, params.state);
      return true;
    default:
      return false;
    }
  };

  DevToolsSessionHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDevToolsSessionHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevToolsSessionHost_DispatchProtocolResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsSessionHost_DispatchProtocolResponse_Params;
      break;
      case kDevToolsSessionHost_DispatchProtocolNotification_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsSessionHost_DispatchProtocolNotification_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDevToolsSessionHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DevToolsSessionHost = {
    name: 'blink.mojom.DevToolsSessionHost',
    kVersion: 0,
    ptrClass: DevToolsSessionHostPtr,
    proxyClass: DevToolsSessionHostProxy,
    stubClass: DevToolsSessionHostStub,
    validateRequest: validateDevToolsSessionHostRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/web/devtools_agent.mojom',
    fuzzMethods: {
      dispatchProtocolResponse: {
        params: DevToolsSessionHost_DispatchProtocolResponse_Params,
      },
      dispatchProtocolNotification: {
        params: DevToolsSessionHost_DispatchProtocolNotification_Params,
      },
    },
  };
  DevToolsSessionHostStub.prototype.validator = validateDevToolsSessionHostRequest;
  DevToolsSessionHostProxy.prototype.validator = null;
  exports.DevToolsAgent = DevToolsAgent;
  exports.DevToolsAgentPtr = DevToolsAgentPtr;
  exports.DevToolsAgentAssociatedPtr = DevToolsAgentAssociatedPtr;
  exports.DevToolsSession = DevToolsSession;
  exports.DevToolsSessionPtr = DevToolsSessionPtr;
  exports.DevToolsSessionAssociatedPtr = DevToolsSessionAssociatedPtr;
  exports.DevToolsSessionHost = DevToolsSessionHost;
  exports.DevToolsSessionHostPtr = DevToolsSessionHostPtr;
  exports.DevToolsSessionHostAssociatedPtr = DevToolsSessionHostAssociatedPtr;
})();