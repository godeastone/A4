// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/broadcastchannel/broadcast_channel.mojom';
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
  var message_port$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/message_port/message_port.mojom', '../../../mojom/message_port/message_port.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../../url/mojom/origin.mojom.js');
  }



  function BroadcastChannelClient_OnMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BroadcastChannelClient_OnMessage_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  BroadcastChannelClient_OnMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BroadcastChannelClient_OnMessage_Params.generate = function(generator_) {
    var generated = new BroadcastChannelClient_OnMessage_Params;
    generated.message = generator_.generateStruct(blink.mojom.CloneableMessage, false);
    return generated;
  };

  BroadcastChannelClient_OnMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(blink.mojom.CloneableMessage, false);
    }
    return this;
  };
  BroadcastChannelClient_OnMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    return handles;
  };

  BroadcastChannelClient_OnMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BroadcastChannelClient_OnMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.message.setHandlesInternal_(handles, idx);
    return idx;
  };

  BroadcastChannelClient_OnMessage_Params.validate = function(messageValidator, offset) {
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


    // validate BroadcastChannelClient_OnMessage_Params.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, message_port$.CloneableMessage, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BroadcastChannelClient_OnMessage_Params.encodedSize = codec.kStructHeaderSize + 8;

  BroadcastChannelClient_OnMessage_Params.decode = function(decoder) {
    var packed;
    var val = new BroadcastChannelClient_OnMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStructPointer(message_port$.CloneableMessage);
    return val;
  };

  BroadcastChannelClient_OnMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BroadcastChannelClient_OnMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(message_port$.CloneableMessage, val.message);
  };
  function BroadcastChannelProvider_ConnectToChannel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BroadcastChannelProvider_ConnectToChannel_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.name = null;
    this.receiver = new associatedBindings.AssociatedInterfacePtrInfo();
    this.sender = new associatedBindings.AssociatedInterfaceRequest();
  };
  BroadcastChannelProvider_ConnectToChannel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BroadcastChannelProvider_ConnectToChannel_Params.generate = function(generator_) {
    var generated = new BroadcastChannelProvider_ConnectToChannel_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.name = generator_.generateString(false);
    generated.receiver = generator_.generateAssociatedInterface("blink.mojom.BroadcastChannelClient", false);
    generated.sender = generator_.generateAssociatedInterfaceRequest("blink.mojom.BroadcastChannelClient", false);
    return generated;
  };

  BroadcastChannelProvider_ConnectToChannel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.receiver = mutator_.mutateAssociatedInterface(this.receiver, "blink.mojom.BroadcastChannelClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sender = mutator_.mutateAssociatedInterfaceRequest(this.sender, "blink.mojom.BroadcastChannelClient", false);
    }
    return this;
  };
  BroadcastChannelProvider_ConnectToChannel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.receiver !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BroadcastChannelClientAssociatedPtr"]);
    }
    if (this.sender !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BroadcastChannelClientAssociatedRequest"]);
    }
    return handles;
  };

  BroadcastChannelProvider_ConnectToChannel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BroadcastChannelProvider_ConnectToChannel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.receiver = handles[idx++];;
    this.sender = handles[idx++];;
    return idx;
  };

  BroadcastChannelProvider_ConnectToChannel_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BroadcastChannelProvider_ConnectToChannel_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BroadcastChannelProvider_ConnectToChannel_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BroadcastChannelProvider_ConnectToChannel_Params.receiver
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BroadcastChannelProvider_ConnectToChannel_Params.sender
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BroadcastChannelProvider_ConnectToChannel_Params.encodedSize = codec.kStructHeaderSize + 32;

  BroadcastChannelProvider_ConnectToChannel_Params.decode = function(decoder) {
    var packed;
    var val = new BroadcastChannelProvider_ConnectToChannel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.name = decoder.decodeStruct(codec.String);
    val.receiver = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.sender = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BroadcastChannelProvider_ConnectToChannel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BroadcastChannelProvider_ConnectToChannel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.receiver);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.sender);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kBroadcastChannelClient_OnMessage_Name = 462310096;

  function BroadcastChannelClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BroadcastChannelClient,
                                                   handleOrPtrInfo);
  }

  function BroadcastChannelClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BroadcastChannelClient, associatedInterfacePtrInfo);
  }

  BroadcastChannelClientAssociatedPtr.prototype =
      Object.create(BroadcastChannelClientPtr.prototype);
  BroadcastChannelClientAssociatedPtr.prototype.constructor =
      BroadcastChannelClientAssociatedPtr;

  function BroadcastChannelClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  BroadcastChannelClientPtr.prototype.onMessage = function() {
    return BroadcastChannelClientProxy.prototype.onMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  BroadcastChannelClientProxy.prototype.onMessage = function(message) {
    var params_ = new BroadcastChannelClient_OnMessage_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kBroadcastChannelClient_OnMessage_Name,
        codec.align(BroadcastChannelClient_OnMessage_Params.encodedSize));
    builder.encodeStruct(BroadcastChannelClient_OnMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function BroadcastChannelClientStub(delegate) {
    this.delegate_ = delegate;
  }
  BroadcastChannelClientStub.prototype.onMessage = function(message) {
    return this.delegate_ && this.delegate_.onMessage && this.delegate_.onMessage(message);
  }

  BroadcastChannelClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBroadcastChannelClient_OnMessage_Name:
      var params = reader.decodeStruct(BroadcastChannelClient_OnMessage_Params);
      this.onMessage(params.message);
      return true;
    default:
      return false;
    }
  };

  BroadcastChannelClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateBroadcastChannelClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBroadcastChannelClient_OnMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BroadcastChannelClient_OnMessage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBroadcastChannelClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var BroadcastChannelClient = {
    name: 'blink.mojom.BroadcastChannelClient',
    kVersion: 0,
    ptrClass: BroadcastChannelClientPtr,
    proxyClass: BroadcastChannelClientProxy,
    stubClass: BroadcastChannelClientStub,
    validateRequest: validateBroadcastChannelClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/broadcastchannel/broadcast_channel.mojom',
    fuzzMethods: {
      onMessage: {
        params: BroadcastChannelClient_OnMessage_Params,
      },
    },
  };
  BroadcastChannelClientStub.prototype.validator = validateBroadcastChannelClientRequest;
  BroadcastChannelClientProxy.prototype.validator = null;
  var kBroadcastChannelProvider_ConnectToChannel_Name = 565751099;

  function BroadcastChannelProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BroadcastChannelProvider,
                                                   handleOrPtrInfo);
  }

  function BroadcastChannelProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BroadcastChannelProvider, associatedInterfacePtrInfo);
  }

  BroadcastChannelProviderAssociatedPtr.prototype =
      Object.create(BroadcastChannelProviderPtr.prototype);
  BroadcastChannelProviderAssociatedPtr.prototype.constructor =
      BroadcastChannelProviderAssociatedPtr;

  function BroadcastChannelProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  BroadcastChannelProviderPtr.prototype.connectToChannel = function() {
    return BroadcastChannelProviderProxy.prototype.connectToChannel
        .apply(this.ptr.getProxy(), arguments);
  };

  BroadcastChannelProviderProxy.prototype.connectToChannel = function(origin, name, receiver, sender) {
    var params_ = new BroadcastChannelProvider_ConnectToChannel_Params();
    params_.origin = origin;
    params_.name = name;
    params_.receiver = receiver;
    params_.sender = sender;
    var builder = new codec.MessageV2Builder(
        kBroadcastChannelProvider_ConnectToChannel_Name,
        codec.align(BroadcastChannelProvider_ConnectToChannel_Params.encodedSize));
    builder.setPayload(BroadcastChannelProvider_ConnectToChannel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function BroadcastChannelProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  BroadcastChannelProviderStub.prototype.connectToChannel = function(origin, name, receiver, sender) {
    return this.delegate_ && this.delegate_.connectToChannel && this.delegate_.connectToChannel(origin, name, receiver, sender);
  }

  BroadcastChannelProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBroadcastChannelProvider_ConnectToChannel_Name:
      var params = reader.decodeStruct(BroadcastChannelProvider_ConnectToChannel_Params);
      this.connectToChannel(params.origin, params.name, params.receiver, params.sender);
      return true;
    default:
      return false;
    }
  };

  BroadcastChannelProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateBroadcastChannelProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBroadcastChannelProvider_ConnectToChannel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BroadcastChannelProvider_ConnectToChannel_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBroadcastChannelProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var BroadcastChannelProvider = {
    name: 'blink.mojom.BroadcastChannelProvider',
    kVersion: 0,
    ptrClass: BroadcastChannelProviderPtr,
    proxyClass: BroadcastChannelProviderProxy,
    stubClass: BroadcastChannelProviderStub,
    validateRequest: validateBroadcastChannelProviderRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/broadcastchannel/broadcast_channel.mojom',
    fuzzMethods: {
      connectToChannel: {
        params: BroadcastChannelProvider_ConnectToChannel_Params,
      },
    },
  };
  BroadcastChannelProviderStub.prototype.validator = validateBroadcastChannelProviderRequest;
  BroadcastChannelProviderProxy.prototype.validator = null;
  exports.BroadcastChannelClient = BroadcastChannelClient;
  exports.BroadcastChannelClientPtr = BroadcastChannelClientPtr;
  exports.BroadcastChannelClientAssociatedPtr = BroadcastChannelClientAssociatedPtr;
  exports.BroadcastChannelProvider = BroadcastChannelProvider;
  exports.BroadcastChannelProviderPtr = BroadcastChannelProviderPtr;
  exports.BroadcastChannelProviderAssociatedPtr = BroadcastChannelProviderAssociatedPtr;
})();