// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ipc/ipc.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('iPC.mojom');
  var read_only_buffer$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/read_only_buffer.mojom', '../mojo/public/mojom/base/read_only_buffer.mojom.js');
  }
  var native_struct$ =
      mojo.internal.exposeNamespace('mojo.native');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/interfaces/bindings/native_struct.mojom', '../mojo/public/interfaces/bindings/native_struct.mojom.js');
  }



  function Channel_SetPeerPid_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Channel_SetPeerPid_Params.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  Channel_SetPeerPid_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Channel_SetPeerPid_Params.generate = function(generator_) {
    var generated = new Channel_SetPeerPid_Params;
    generated.pid = generator_.generateInt32();
    return generated;
  };

  Channel_SetPeerPid_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateInt32(this.pid);
    }
    return this;
  };
  Channel_SetPeerPid_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Channel_SetPeerPid_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Channel_SetPeerPid_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Channel_SetPeerPid_Params.validate = function(messageValidator, offset) {
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

  Channel_SetPeerPid_Params.encodedSize = codec.kStructHeaderSize + 8;

  Channel_SetPeerPid_Params.decode = function(decoder) {
    var packed;
    var val = new Channel_SetPeerPid_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Channel_SetPeerPid_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Channel_SetPeerPid_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Channel_Receive_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Channel_Receive_Params.prototype.initDefaults_ = function() {
    this.data = null;
    this.handles = null;
  };
  Channel_Receive_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Channel_Receive_Params.generate = function(generator_) {
    var generated = new Channel_Receive_Params;
    generated.data = generator_.generateStruct(mojoBase.mojom.ReadOnlyBuffer, false);
    generated.handles = generator_.generateArray(function() {
      return generator_.generateStruct(mojo.native.SerializedHandle, false);
    });
    return generated;
  };

  Channel_Receive_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(mojoBase.mojom.ReadOnlyBuffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.handles = mutator_.mutateArray(this.handles, function(val) {
        return mutator_.mutateStruct(mojo.native.SerializedHandle, false);
      });
    }
    return this;
  };
  Channel_Receive_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.handles !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.handles.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  Channel_Receive_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Channel_Receive_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.handles.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  Channel_Receive_Params.validate = function(messageValidator, offset) {
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


    // validate Channel_Receive_Params.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, read_only_buffer$.ReadOnlyBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Channel_Receive_Params.handles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(native_struct$.SerializedHandle), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Channel_Receive_Params.encodedSize = codec.kStructHeaderSize + 16;

  Channel_Receive_Params.decode = function(decoder) {
    var packed;
    var val = new Channel_Receive_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStructPointer(read_only_buffer$.ReadOnlyBuffer);
    val.handles = decoder.decodeArrayPointer(new codec.PointerTo(native_struct$.SerializedHandle));
    return val;
  };

  Channel_Receive_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Channel_Receive_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(read_only_buffer$.ReadOnlyBuffer, val.data);
    encoder.encodeArrayPointer(new codec.PointerTo(native_struct$.SerializedHandle), val.handles);
  };
  function Channel_GetAssociatedInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Channel_GetAssociatedInterface_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.request = new associatedBindings.AssociatedInterfaceRequest();
  };
  Channel_GetAssociatedInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Channel_GetAssociatedInterface_Params.generate = function(generator_) {
    var generated = new Channel_GetAssociatedInterface_Params;
    generated.name = generator_.generateString(false);
    generated.request = generator_.generateAssociatedInterfaceRequest("iPC.mojom.GenericInterface", false);
    return generated;
  };

  Channel_GetAssociatedInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateAssociatedInterfaceRequest(this.request, "iPC.mojom.GenericInterface", false);
    }
    return this;
  };
  Channel_GetAssociatedInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["iPC.mojom.GenericInterfaceAssociatedRequest"]);
    }
    return handles;
  };

  Channel_GetAssociatedInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Channel_GetAssociatedInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  Channel_GetAssociatedInterface_Params.validate = function(messageValidator, offset) {
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


    // validate Channel_GetAssociatedInterface_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Channel_GetAssociatedInterface_Params.request
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Channel_GetAssociatedInterface_Params.encodedSize = codec.kStructHeaderSize + 16;

  Channel_GetAssociatedInterface_Params.decode = function(decoder) {
    var packed;
    var val = new Channel_GetAssociatedInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.request = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Channel_GetAssociatedInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Channel_GetAssociatedInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function GenericInterfacePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GenericInterface,
                                                   handleOrPtrInfo);
  }

  function GenericInterfaceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GenericInterface, associatedInterfacePtrInfo);
  }

  GenericInterfaceAssociatedPtr.prototype =
      Object.create(GenericInterfacePtr.prototype);
  GenericInterfaceAssociatedPtr.prototype.constructor =
      GenericInterfaceAssociatedPtr;

  function GenericInterfaceProxy(receiver) {
    this.receiver_ = receiver;
  }

  function GenericInterfaceStub(delegate) {
    this.delegate_ = delegate;
  }

  GenericInterfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  GenericInterfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGenericInterfaceRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateGenericInterfaceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GenericInterface = {
    name: 'IPC.mojom.GenericInterface',
    kVersion: 0,
    ptrClass: GenericInterfacePtr,
    proxyClass: GenericInterfaceProxy,
    stubClass: GenericInterfaceStub,
    validateRequest: validateGenericInterfaceRequest,
    validateResponse: null,
    mojomId: 'ipc/ipc.mojom',
    fuzzMethods: {
    },
  };
  GenericInterfaceStub.prototype.validator = validateGenericInterfaceRequest;
  GenericInterfaceProxy.prototype.validator = null;
  var kChannel_SetPeerPid_Name = 869602244;
  var kChannel_Receive_Name = 1768910370;
  var kChannel_GetAssociatedInterface_Name = 178427831;

  function ChannelPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Channel,
                                                   handleOrPtrInfo);
  }

  function ChannelAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Channel, associatedInterfacePtrInfo);
  }

  ChannelAssociatedPtr.prototype =
      Object.create(ChannelPtr.prototype);
  ChannelAssociatedPtr.prototype.constructor =
      ChannelAssociatedPtr;

  function ChannelProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChannelPtr.prototype.setPeerPid = function() {
    return ChannelProxy.prototype.setPeerPid
        .apply(this.ptr.getProxy(), arguments);
  };

  ChannelProxy.prototype.setPeerPid = function(pid) {
    var params_ = new Channel_SetPeerPid_Params();
    params_.pid = pid;
    var builder = new codec.MessageV0Builder(
        kChannel_SetPeerPid_Name,
        codec.align(Channel_SetPeerPid_Params.encodedSize));
    builder.encodeStruct(Channel_SetPeerPid_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChannelPtr.prototype.receive = function() {
    return ChannelProxy.prototype.receive
        .apply(this.ptr.getProxy(), arguments);
  };

  ChannelProxy.prototype.receive = function(data, handles) {
    var params_ = new Channel_Receive_Params();
    params_.data = data;
    params_.handles = handles;
    var builder = new codec.MessageV0Builder(
        kChannel_Receive_Name,
        codec.align(Channel_Receive_Params.encodedSize));
    builder.encodeStruct(Channel_Receive_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChannelPtr.prototype.getAssociatedInterface = function() {
    return ChannelProxy.prototype.getAssociatedInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  ChannelProxy.prototype.getAssociatedInterface = function(name, request) {
    var params_ = new Channel_GetAssociatedInterface_Params();
    params_.name = name;
    params_.request = request;
    var builder = new codec.MessageV2Builder(
        kChannel_GetAssociatedInterface_Name,
        codec.align(Channel_GetAssociatedInterface_Params.encodedSize));
    builder.setPayload(Channel_GetAssociatedInterface_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ChannelStub(delegate) {
    this.delegate_ = delegate;
  }
  ChannelStub.prototype.setPeerPid = function(pid) {
    return this.delegate_ && this.delegate_.setPeerPid && this.delegate_.setPeerPid(pid);
  }
  ChannelStub.prototype.receive = function(data, handles) {
    return this.delegate_ && this.delegate_.receive && this.delegate_.receive(data, handles);
  }
  ChannelStub.prototype.getAssociatedInterface = function(name, request) {
    return this.delegate_ && this.delegate_.getAssociatedInterface && this.delegate_.getAssociatedInterface(name, request);
  }

  ChannelStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChannel_SetPeerPid_Name:
      var params = reader.decodeStruct(Channel_SetPeerPid_Params);
      this.setPeerPid(params.pid);
      return true;
    case kChannel_Receive_Name:
      var params = reader.decodeStruct(Channel_Receive_Params);
      this.receive(params.data, params.handles);
      return true;
    case kChannel_GetAssociatedInterface_Name:
      var params = reader.decodeStruct(Channel_GetAssociatedInterface_Params);
      this.getAssociatedInterface(params.name, params.request);
      return true;
    default:
      return false;
    }
  };

  ChannelStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateChannelRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChannel_SetPeerPid_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Channel_SetPeerPid_Params;
      break;
      case kChannel_Receive_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Channel_Receive_Params;
      break;
      case kChannel_GetAssociatedInterface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Channel_GetAssociatedInterface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChannelResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Channel = {
    name: 'IPC.mojom.Channel',
    kVersion: 0,
    ptrClass: ChannelPtr,
    proxyClass: ChannelProxy,
    stubClass: ChannelStub,
    validateRequest: validateChannelRequest,
    validateResponse: null,
    mojomId: 'ipc/ipc.mojom',
    fuzzMethods: {
      setPeerPid: {
        params: Channel_SetPeerPid_Params,
      },
      receive: {
        params: Channel_Receive_Params,
      },
      getAssociatedInterface: {
        params: Channel_GetAssociatedInterface_Params,
      },
    },
  };
  ChannelStub.prototype.validator = validateChannelRequest;
  ChannelProxy.prototype.validator = null;

  function ChannelBootstrapPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChannelBootstrap,
                                                   handleOrPtrInfo);
  }

  function ChannelBootstrapAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChannelBootstrap, associatedInterfacePtrInfo);
  }

  ChannelBootstrapAssociatedPtr.prototype =
      Object.create(ChannelBootstrapPtr.prototype);
  ChannelBootstrapAssociatedPtr.prototype.constructor =
      ChannelBootstrapAssociatedPtr;

  function ChannelBootstrapProxy(receiver) {
    this.receiver_ = receiver;
  }

  function ChannelBootstrapStub(delegate) {
    this.delegate_ = delegate;
  }

  ChannelBootstrapStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ChannelBootstrapStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateChannelBootstrapRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateChannelBootstrapResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ChannelBootstrap = {
    name: 'IPC.mojom.ChannelBootstrap',
    kVersion: 0,
    ptrClass: ChannelBootstrapPtr,
    proxyClass: ChannelBootstrapProxy,
    stubClass: ChannelBootstrapStub,
    validateRequest: validateChannelBootstrapRequest,
    validateResponse: null,
    mojomId: 'ipc/ipc.mojom',
    fuzzMethods: {
    },
  };
  ChannelBootstrapStub.prototype.validator = validateChannelBootstrapRequest;
  ChannelBootstrapProxy.prototype.validator = null;
  exports.GenericInterface = GenericInterface;
  exports.GenericInterfacePtr = GenericInterfacePtr;
  exports.GenericInterfaceAssociatedPtr = GenericInterfaceAssociatedPtr;
  exports.Channel = Channel;
  exports.ChannelPtr = ChannelPtr;
  exports.ChannelAssociatedPtr = ChannelAssociatedPtr;
  exports.ChannelBootstrap = ChannelBootstrap;
  exports.ChannelBootstrapPtr = ChannelBootstrapPtr;
  exports.ChannelBootstrapAssociatedPtr = ChannelBootstrapAssociatedPtr;
})();