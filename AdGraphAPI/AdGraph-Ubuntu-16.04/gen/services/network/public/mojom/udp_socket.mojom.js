// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/udp_socket.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');
  var mutable_network_traffic_annotation_tag$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom', 'mutable_network_traffic_annotation_tag.mojom.js');
  }
  var read_only_buffer$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/read_only_buffer.mojom', '../../../../mojo/public/mojom/base/read_only_buffer.mojom.js');
  }
  var address_family$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/address_family.mojom', '../../../../net/interfaces/address_family.mojom.js');
  }
  var ip_address$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_address.mojom', '../../../../net/interfaces/ip_address.mojom.js');
  }
  var ip_endpoint$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_endpoint.mojom', '../../../../net/interfaces/ip_endpoint.mojom.js');
  }



  function UDPSocketOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocketOptions.prototype.initDefaults_ = function() {
    this.allowAddressReuse = false;
    this.multicastLoopbackMode = true;
    this.multicastInterface = 0;
    this.multicastTimeToLive = 1;
    this.sendBufferSize = 0;
    this.receiveBufferSize = 0;
  };
  UDPSocketOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocketOptions.generate = function(generator_) {
    var generated = new UDPSocketOptions;
    generated.allowAddressReuse = generator_.generateBool();
    generated.multicastInterface = generator_.generateUint32();
    generated.multicastTimeToLive = generator_.generateUint32();
    generated.multicastLoopbackMode = generator_.generateBool();
    generated.sendBufferSize = generator_.generateInt32();
    generated.receiveBufferSize = generator_.generateInt32();
    return generated;
  };

  UDPSocketOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.allowAddressReuse = mutator_.mutateBool(this.allowAddressReuse);
    }
    if (mutator_.chooseMutateField()) {
      this.multicastInterface = mutator_.mutateUint32(this.multicastInterface);
    }
    if (mutator_.chooseMutateField()) {
      this.multicastTimeToLive = mutator_.mutateUint32(this.multicastTimeToLive);
    }
    if (mutator_.chooseMutateField()) {
      this.multicastLoopbackMode = mutator_.mutateBool(this.multicastLoopbackMode);
    }
    if (mutator_.chooseMutateField()) {
      this.sendBufferSize = mutator_.mutateInt32(this.sendBufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.receiveBufferSize = mutator_.mutateInt32(this.receiveBufferSize);
    }
    return this;
  };
  UDPSocketOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocketOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocketOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocketOptions.validate = function(messageValidator, offset) {
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







    return validator.validationError.NONE;
  };

  UDPSocketOptions.encodedSize = codec.kStructHeaderSize + 24;

  UDPSocketOptions.decode = function(decoder) {
    var packed;
    var val = new UDPSocketOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.allowAddressReuse = (packed >> 0) & 1 ? true : false;
    val.multicastLoopbackMode = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.multicastInterface = decoder.decodeStruct(codec.Uint32);
    val.multicastTimeToLive = decoder.decodeStruct(codec.Uint32);
    val.sendBufferSize = decoder.decodeStruct(codec.Int32);
    val.receiveBufferSize = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocketOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocketOptions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.allowAddressReuse & 1) << 0
    packed |= (val.multicastLoopbackMode & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.multicastInterface);
    encoder.encodeStruct(codec.Uint32, val.multicastTimeToLive);
    encoder.encodeStruct(codec.Int32, val.sendBufferSize);
    encoder.encodeStruct(codec.Int32, val.receiveBufferSize);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_Bind_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Bind_Params.prototype.initDefaults_ = function() {
    this.localAddr = null;
    this.socketOptions = null;
  };
  UDPSocket_Bind_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Bind_Params.generate = function(generator_) {
    var generated = new UDPSocket_Bind_Params;
    generated.localAddr = generator_.generateStruct(net.interfaces.IPEndPoint, false);
    generated.socketOptions = generator_.generateStruct(network.mojom.UDPSocketOptions, true);
    return generated;
  };

  UDPSocket_Bind_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.localAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, false);
    }
    if (mutator_.chooseMutateField()) {
      this.socketOptions = mutator_.mutateStruct(network.mojom.UDPSocketOptions, true);
    }
    return this;
  };
  UDPSocket_Bind_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Bind_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Bind_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Bind_Params.validate = function(messageValidator, offset) {
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


    // validate UDPSocket_Bind_Params.localAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_endpoint$.IPEndPoint, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UDPSocket_Bind_Params.socketOptions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, UDPSocketOptions, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Bind_Params.encodedSize = codec.kStructHeaderSize + 16;

  UDPSocket_Bind_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Bind_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.localAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.socketOptions = decoder.decodeStructPointer(UDPSocketOptions);
    return val;
  };

  UDPSocket_Bind_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Bind_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddr);
    encoder.encodeStructPointer(UDPSocketOptions, val.socketOptions);
  };
  function UDPSocket_Bind_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Bind_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.localAddrOut = null;
  };
  UDPSocket_Bind_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Bind_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_Bind_ResponseParams;
    generated.result = generator_.generateInt32();
    generated.localAddrOut = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    return generated;
  };

  UDPSocket_Bind_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    if (mutator_.chooseMutateField()) {
      this.localAddrOut = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    return this;
  };
  UDPSocket_Bind_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Bind_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Bind_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Bind_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate UDPSocket_Bind_ResponseParams.localAddrOut
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Bind_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UDPSocket_Bind_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Bind_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.localAddrOut = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    return val;
  };

  UDPSocket_Bind_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Bind_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddrOut);
  };
  function UDPSocket_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Connect_Params.prototype.initDefaults_ = function() {
    this.remoteAddr = null;
    this.socketOptions = null;
  };
  UDPSocket_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Connect_Params.generate = function(generator_) {
    var generated = new UDPSocket_Connect_Params;
    generated.remoteAddr = generator_.generateStruct(net.interfaces.IPEndPoint, false);
    generated.socketOptions = generator_.generateStruct(network.mojom.UDPSocketOptions, true);
    return generated;
  };

  UDPSocket_Connect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.remoteAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, false);
    }
    if (mutator_.chooseMutateField()) {
      this.socketOptions = mutator_.mutateStruct(network.mojom.UDPSocketOptions, true);
    }
    return this;
  };
  UDPSocket_Connect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Connect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Connect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Connect_Params.validate = function(messageValidator, offset) {
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


    // validate UDPSocket_Connect_Params.remoteAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_endpoint$.IPEndPoint, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UDPSocket_Connect_Params.socketOptions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, UDPSocketOptions, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Connect_Params.encodedSize = codec.kStructHeaderSize + 16;

  UDPSocket_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.remoteAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.socketOptions = decoder.decodeStructPointer(UDPSocketOptions);
    return val;
  };

  UDPSocket_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.remoteAddr);
    encoder.encodeStructPointer(UDPSocketOptions, val.socketOptions);
  };
  function UDPSocket_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.localAddrOut = null;
  };
  UDPSocket_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Connect_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_Connect_ResponseParams;
    generated.result = generator_.generateInt32();
    generated.localAddrOut = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    return generated;
  };

  UDPSocket_Connect_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    if (mutator_.chooseMutateField()) {
      this.localAddrOut = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    return this;
  };
  UDPSocket_Connect_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Connect_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Connect_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Connect_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate UDPSocket_Connect_ResponseParams.localAddrOut
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  UDPSocket_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.localAddrOut = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    return val;
  };

  UDPSocket_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddrOut);
  };
  function UDPSocket_SetBroadcast_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SetBroadcast_Params.prototype.initDefaults_ = function() {
    this.broadcast = false;
  };
  UDPSocket_SetBroadcast_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_SetBroadcast_Params.generate = function(generator_) {
    var generated = new UDPSocket_SetBroadcast_Params;
    generated.broadcast = generator_.generateBool();
    return generated;
  };

  UDPSocket_SetBroadcast_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.broadcast = mutator_.mutateBool(this.broadcast);
    }
    return this;
  };
  UDPSocket_SetBroadcast_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_SetBroadcast_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_SetBroadcast_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_SetBroadcast_Params.validate = function(messageValidator, offset) {
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

  UDPSocket_SetBroadcast_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SetBroadcast_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SetBroadcast_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.broadcast = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_SetBroadcast_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SetBroadcast_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.broadcast & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_SetBroadcast_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SetBroadcast_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  UDPSocket_SetBroadcast_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_SetBroadcast_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_SetBroadcast_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  UDPSocket_SetBroadcast_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  UDPSocket_SetBroadcast_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_SetBroadcast_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_SetBroadcast_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_SetBroadcast_ResponseParams.validate = function(messageValidator, offset) {
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

  UDPSocket_SetBroadcast_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SetBroadcast_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SetBroadcast_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_SetBroadcast_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SetBroadcast_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_JoinGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_JoinGroup_Params.prototype.initDefaults_ = function() {
    this.groupAddress = null;
  };
  UDPSocket_JoinGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_JoinGroup_Params.generate = function(generator_) {
    var generated = new UDPSocket_JoinGroup_Params;
    generated.groupAddress = generator_.generateStruct(net.interfaces.IPAddress, false);
    return generated;
  };

  UDPSocket_JoinGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.groupAddress = mutator_.mutateStruct(net.interfaces.IPAddress, false);
    }
    return this;
  };
  UDPSocket_JoinGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_JoinGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_JoinGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_JoinGroup_Params.validate = function(messageValidator, offset) {
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


    // validate UDPSocket_JoinGroup_Params.groupAddress
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_address$.IPAddress, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_JoinGroup_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_JoinGroup_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_JoinGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.groupAddress = decoder.decodeStructPointer(ip_address$.IPAddress);
    return val;
  };

  UDPSocket_JoinGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_JoinGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_address$.IPAddress, val.groupAddress);
  };
  function UDPSocket_JoinGroup_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_JoinGroup_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  UDPSocket_JoinGroup_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_JoinGroup_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_JoinGroup_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  UDPSocket_JoinGroup_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  UDPSocket_JoinGroup_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_JoinGroup_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_JoinGroup_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_JoinGroup_ResponseParams.validate = function(messageValidator, offset) {
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

  UDPSocket_JoinGroup_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_JoinGroup_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_JoinGroup_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_JoinGroup_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_JoinGroup_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_LeaveGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_LeaveGroup_Params.prototype.initDefaults_ = function() {
    this.groupAddress = null;
  };
  UDPSocket_LeaveGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_LeaveGroup_Params.generate = function(generator_) {
    var generated = new UDPSocket_LeaveGroup_Params;
    generated.groupAddress = generator_.generateStruct(net.interfaces.IPAddress, false);
    return generated;
  };

  UDPSocket_LeaveGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.groupAddress = mutator_.mutateStruct(net.interfaces.IPAddress, false);
    }
    return this;
  };
  UDPSocket_LeaveGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_LeaveGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_LeaveGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_LeaveGroup_Params.validate = function(messageValidator, offset) {
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


    // validate UDPSocket_LeaveGroup_Params.groupAddress
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_address$.IPAddress, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_LeaveGroup_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_LeaveGroup_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_LeaveGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.groupAddress = decoder.decodeStructPointer(ip_address$.IPAddress);
    return val;
  };

  UDPSocket_LeaveGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_LeaveGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_address$.IPAddress, val.groupAddress);
  };
  function UDPSocket_LeaveGroup_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_LeaveGroup_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  UDPSocket_LeaveGroup_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_LeaveGroup_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_LeaveGroup_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  UDPSocket_LeaveGroup_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  UDPSocket_LeaveGroup_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_LeaveGroup_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_LeaveGroup_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_LeaveGroup_ResponseParams.validate = function(messageValidator, offset) {
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

  UDPSocket_LeaveGroup_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_LeaveGroup_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_LeaveGroup_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_LeaveGroup_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_LeaveGroup_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_ReceiveMore_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_ReceiveMore_Params.prototype.initDefaults_ = function() {
    this.numAdditionalDatagrams = 0;
  };
  UDPSocket_ReceiveMore_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_ReceiveMore_Params.generate = function(generator_) {
    var generated = new UDPSocket_ReceiveMore_Params;
    generated.numAdditionalDatagrams = generator_.generateUint32();
    return generated;
  };

  UDPSocket_ReceiveMore_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.numAdditionalDatagrams = mutator_.mutateUint32(this.numAdditionalDatagrams);
    }
    return this;
  };
  UDPSocket_ReceiveMore_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_ReceiveMore_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_ReceiveMore_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_ReceiveMore_Params.validate = function(messageValidator, offset) {
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

  UDPSocket_ReceiveMore_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_ReceiveMore_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_ReceiveMore_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numAdditionalDatagrams = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_ReceiveMore_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_ReceiveMore_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.numAdditionalDatagrams);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_ReceiveMoreWithBufferSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_ReceiveMoreWithBufferSize_Params.prototype.initDefaults_ = function() {
    this.numAdditionalDatagrams = 0;
    this.bufferSize = 0;
  };
  UDPSocket_ReceiveMoreWithBufferSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_ReceiveMoreWithBufferSize_Params.generate = function(generator_) {
    var generated = new UDPSocket_ReceiveMoreWithBufferSize_Params;
    generated.numAdditionalDatagrams = generator_.generateUint32();
    generated.bufferSize = generator_.generateUint32();
    return generated;
  };

  UDPSocket_ReceiveMoreWithBufferSize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.numAdditionalDatagrams = mutator_.mutateUint32(this.numAdditionalDatagrams);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferSize = mutator_.mutateUint32(this.bufferSize);
    }
    return this;
  };
  UDPSocket_ReceiveMoreWithBufferSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_ReceiveMoreWithBufferSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_ReceiveMoreWithBufferSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_ReceiveMoreWithBufferSize_Params.validate = function(messageValidator, offset) {
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

  UDPSocket_ReceiveMoreWithBufferSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_ReceiveMoreWithBufferSize_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_ReceiveMoreWithBufferSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.numAdditionalDatagrams = decoder.decodeStruct(codec.Uint32);
    val.bufferSize = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  UDPSocket_ReceiveMoreWithBufferSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_ReceiveMoreWithBufferSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.numAdditionalDatagrams);
    encoder.encodeStruct(codec.Uint32, val.bufferSize);
  };
  function UDPSocket_SendTo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SendTo_Params.prototype.initDefaults_ = function() {
    this.destAddr = null;
    this.data = null;
    this.trafficAnnotation = null;
  };
  UDPSocket_SendTo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_SendTo_Params.generate = function(generator_) {
    var generated = new UDPSocket_SendTo_Params;
    generated.destAddr = generator_.generateStruct(net.interfaces.IPEndPoint, false);
    generated.data = generator_.generateStruct(mojoBase.mojom.ReadOnlyBuffer, false);
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    return generated;
  };

  UDPSocket_SendTo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.destAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(mojoBase.mojom.ReadOnlyBuffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    return this;
  };
  UDPSocket_SendTo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_SendTo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_SendTo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_SendTo_Params.validate = function(messageValidator, offset) {
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


    // validate UDPSocket_SendTo_Params.destAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_endpoint$.IPEndPoint, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UDPSocket_SendTo_Params.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, read_only_buffer$.ReadOnlyBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UDPSocket_SendTo_Params.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_SendTo_Params.encodedSize = codec.kStructHeaderSize + 24;

  UDPSocket_SendTo_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SendTo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.destAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.data = decoder.decodeStructPointer(read_only_buffer$.ReadOnlyBuffer);
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    return val;
  };

  UDPSocket_SendTo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SendTo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.destAddr);
    encoder.encodeStructPointer(read_only_buffer$.ReadOnlyBuffer, val.data);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
  };
  function UDPSocket_SendTo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SendTo_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  UDPSocket_SendTo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_SendTo_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_SendTo_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  UDPSocket_SendTo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  UDPSocket_SendTo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_SendTo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_SendTo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_SendTo_ResponseParams.validate = function(messageValidator, offset) {
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

  UDPSocket_SendTo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SendTo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SendTo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_SendTo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SendTo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_Send_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Send_Params.prototype.initDefaults_ = function() {
    this.data = null;
    this.trafficAnnotation = null;
  };
  UDPSocket_Send_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Send_Params.generate = function(generator_) {
    var generated = new UDPSocket_Send_Params;
    generated.data = generator_.generateStruct(mojoBase.mojom.ReadOnlyBuffer, false);
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    return generated;
  };

  UDPSocket_Send_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(mojoBase.mojom.ReadOnlyBuffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    return this;
  };
  UDPSocket_Send_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Send_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Send_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Send_Params.validate = function(messageValidator, offset) {
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


    // validate UDPSocket_Send_Params.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, read_only_buffer$.ReadOnlyBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UDPSocket_Send_Params.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Send_Params.encodedSize = codec.kStructHeaderSize + 16;

  UDPSocket_Send_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Send_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStructPointer(read_only_buffer$.ReadOnlyBuffer);
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    return val;
  };

  UDPSocket_Send_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Send_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(read_only_buffer$.ReadOnlyBuffer, val.data);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
  };
  function UDPSocket_Send_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Send_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  UDPSocket_Send_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Send_ResponseParams.generate = function(generator_) {
    var generated = new UDPSocket_Send_ResponseParams;
    generated.result = generator_.generateInt32();
    return generated;
  };

  UDPSocket_Send_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    return this;
  };
  UDPSocket_Send_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Send_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Send_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Send_ResponseParams.validate = function(messageValidator, offset) {
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

  UDPSocket_Send_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_Send_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Send_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_Send_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Send_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UDPSocket_Close_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Close_Params.prototype.initDefaults_ = function() {
  };
  UDPSocket_Close_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocket_Close_Params.generate = function(generator_) {
    var generated = new UDPSocket_Close_Params;
    return generated;
  };

  UDPSocket_Close_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  UDPSocket_Close_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocket_Close_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocket_Close_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocket_Close_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Close_Params.encodedSize = codec.kStructHeaderSize + 0;

  UDPSocket_Close_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Close_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UDPSocket_Close_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Close_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function UDPSocketReceiver_OnReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocketReceiver_OnReceived_Params.prototype.initDefaults_ = function() {
    this.result = 0;
    this.srcAddr = null;
    this.data = null;
  };
  UDPSocketReceiver_OnReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UDPSocketReceiver_OnReceived_Params.generate = function(generator_) {
    var generated = new UDPSocketReceiver_OnReceived_Params;
    generated.result = generator_.generateInt32();
    generated.srcAddr = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    generated.data = generator_.generateStruct(mojoBase.mojom.ReadOnlyBuffer, true);
    return generated;
  };

  UDPSocketReceiver_OnReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    if (mutator_.chooseMutateField()) {
      this.srcAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(mojoBase.mojom.ReadOnlyBuffer, true);
    }
    return this;
  };
  UDPSocketReceiver_OnReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UDPSocketReceiver_OnReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UDPSocketReceiver_OnReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UDPSocketReceiver_OnReceived_Params.validate = function(messageValidator, offset) {
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



    // validate UDPSocketReceiver_OnReceived_Params.srcAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UDPSocketReceiver_OnReceived_Params.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, read_only_buffer$.ReadOnlyBuffer, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocketReceiver_OnReceived_Params.encodedSize = codec.kStructHeaderSize + 24;

  UDPSocketReceiver_OnReceived_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocketReceiver_OnReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.srcAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.data = decoder.decodeStructPointer(read_only_buffer$.ReadOnlyBuffer);
    return val;
  };

  UDPSocketReceiver_OnReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocketReceiver_OnReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.srcAddr);
    encoder.encodeStructPointer(read_only_buffer$.ReadOnlyBuffer, val.data);
  };
  var kUDPSocket_Bind_Name = 1297825762;
  var kUDPSocket_Connect_Name = 865717733;
  var kUDPSocket_SetBroadcast_Name = 2003866824;
  var kUDPSocket_JoinGroup_Name = 74067377;
  var kUDPSocket_LeaveGroup_Name = 1380224374;
  var kUDPSocket_ReceiveMore_Name = 2057057777;
  var kUDPSocket_ReceiveMoreWithBufferSize_Name = 1145683292;
  var kUDPSocket_SendTo_Name = 18870768;
  var kUDPSocket_Send_Name = 290308768;
  var kUDPSocket_Close_Name = 2007840678;

  function UDPSocketPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UDPSocket,
                                                   handleOrPtrInfo);
  }

  function UDPSocketAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UDPSocket, associatedInterfacePtrInfo);
  }

  UDPSocketAssociatedPtr.prototype =
      Object.create(UDPSocketPtr.prototype);
  UDPSocketAssociatedPtr.prototype.constructor =
      UDPSocketAssociatedPtr;

  function UDPSocketProxy(receiver) {
    this.receiver_ = receiver;
  }
  UDPSocketPtr.prototype.bind = function() {
    return UDPSocketProxy.prototype.bind
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.bind = function(localAddr, socketOptions) {
    var params_ = new UDPSocket_Bind_Params();
    params_.localAddr = localAddr;
    params_.socketOptions = socketOptions;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_Bind_Name,
          codec.align(UDPSocket_Bind_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_Bind_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_Bind_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.connect = function() {
    return UDPSocketProxy.prototype.connect
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.connect = function(remoteAddr, socketOptions) {
    var params_ = new UDPSocket_Connect_Params();
    params_.remoteAddr = remoteAddr;
    params_.socketOptions = socketOptions;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_Connect_Name,
          codec.align(UDPSocket_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_Connect_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.setBroadcast = function() {
    return UDPSocketProxy.prototype.setBroadcast
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.setBroadcast = function(broadcast) {
    var params_ = new UDPSocket_SetBroadcast_Params();
    params_.broadcast = broadcast;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_SetBroadcast_Name,
          codec.align(UDPSocket_SetBroadcast_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_SetBroadcast_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_SetBroadcast_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.joinGroup = function() {
    return UDPSocketProxy.prototype.joinGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.joinGroup = function(groupAddress) {
    var params_ = new UDPSocket_JoinGroup_Params();
    params_.groupAddress = groupAddress;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_JoinGroup_Name,
          codec.align(UDPSocket_JoinGroup_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_JoinGroup_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_JoinGroup_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.leaveGroup = function() {
    return UDPSocketProxy.prototype.leaveGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.leaveGroup = function(groupAddress) {
    var params_ = new UDPSocket_LeaveGroup_Params();
    params_.groupAddress = groupAddress;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_LeaveGroup_Name,
          codec.align(UDPSocket_LeaveGroup_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_LeaveGroup_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_LeaveGroup_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.receiveMore = function() {
    return UDPSocketProxy.prototype.receiveMore
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.receiveMore = function(numAdditionalDatagrams) {
    var params_ = new UDPSocket_ReceiveMore_Params();
    params_.numAdditionalDatagrams = numAdditionalDatagrams;
    var builder = new codec.MessageV0Builder(
        kUDPSocket_ReceiveMore_Name,
        codec.align(UDPSocket_ReceiveMore_Params.encodedSize));
    builder.encodeStruct(UDPSocket_ReceiveMore_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  UDPSocketPtr.prototype.receiveMoreWithBufferSize = function() {
    return UDPSocketProxy.prototype.receiveMoreWithBufferSize
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.receiveMoreWithBufferSize = function(numAdditionalDatagrams, bufferSize) {
    var params_ = new UDPSocket_ReceiveMoreWithBufferSize_Params();
    params_.numAdditionalDatagrams = numAdditionalDatagrams;
    params_.bufferSize = bufferSize;
    var builder = new codec.MessageV0Builder(
        kUDPSocket_ReceiveMoreWithBufferSize_Name,
        codec.align(UDPSocket_ReceiveMoreWithBufferSize_Params.encodedSize));
    builder.encodeStruct(UDPSocket_ReceiveMoreWithBufferSize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  UDPSocketPtr.prototype.sendTo = function() {
    return UDPSocketProxy.prototype.sendTo
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.sendTo = function(destAddr, data, trafficAnnotation) {
    var params_ = new UDPSocket_SendTo_Params();
    params_.destAddr = destAddr;
    params_.data = data;
    params_.trafficAnnotation = trafficAnnotation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_SendTo_Name,
          codec.align(UDPSocket_SendTo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_SendTo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_SendTo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.send = function() {
    return UDPSocketProxy.prototype.send
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.send = function(data, trafficAnnotation) {
    var params_ = new UDPSocket_Send_Params();
    params_.data = data;
    params_.trafficAnnotation = trafficAnnotation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kUDPSocket_Send_Name,
          codec.align(UDPSocket_Send_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_Send_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_Send_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketPtr.prototype.close = function() {
    return UDPSocketProxy.prototype.close
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketProxy.prototype.close = function() {
    var params_ = new UDPSocket_Close_Params();
    var builder = new codec.MessageV0Builder(
        kUDPSocket_Close_Name,
        codec.align(UDPSocket_Close_Params.encodedSize));
    builder.encodeStruct(UDPSocket_Close_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UDPSocketStub(delegate) {
    this.delegate_ = delegate;
  }
  UDPSocketStub.prototype.bind = function(localAddr, socketOptions) {
    return this.delegate_ && this.delegate_.bind && this.delegate_.bind(localAddr, socketOptions);
  }
  UDPSocketStub.prototype.connect = function(remoteAddr, socketOptions) {
    return this.delegate_ && this.delegate_.connect && this.delegate_.connect(remoteAddr, socketOptions);
  }
  UDPSocketStub.prototype.setBroadcast = function(broadcast) {
    return this.delegate_ && this.delegate_.setBroadcast && this.delegate_.setBroadcast(broadcast);
  }
  UDPSocketStub.prototype.joinGroup = function(groupAddress) {
    return this.delegate_ && this.delegate_.joinGroup && this.delegate_.joinGroup(groupAddress);
  }
  UDPSocketStub.prototype.leaveGroup = function(groupAddress) {
    return this.delegate_ && this.delegate_.leaveGroup && this.delegate_.leaveGroup(groupAddress);
  }
  UDPSocketStub.prototype.receiveMore = function(numAdditionalDatagrams) {
    return this.delegate_ && this.delegate_.receiveMore && this.delegate_.receiveMore(numAdditionalDatagrams);
  }
  UDPSocketStub.prototype.receiveMoreWithBufferSize = function(numAdditionalDatagrams, bufferSize) {
    return this.delegate_ && this.delegate_.receiveMoreWithBufferSize && this.delegate_.receiveMoreWithBufferSize(numAdditionalDatagrams, bufferSize);
  }
  UDPSocketStub.prototype.sendTo = function(destAddr, data, trafficAnnotation) {
    return this.delegate_ && this.delegate_.sendTo && this.delegate_.sendTo(destAddr, data, trafficAnnotation);
  }
  UDPSocketStub.prototype.send = function(data, trafficAnnotation) {
    return this.delegate_ && this.delegate_.send && this.delegate_.send(data, trafficAnnotation);
  }
  UDPSocketStub.prototype.close = function() {
    return this.delegate_ && this.delegate_.close && this.delegate_.close();
  }

  UDPSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUDPSocket_ReceiveMore_Name:
      var params = reader.decodeStruct(UDPSocket_ReceiveMore_Params);
      this.receiveMore(params.numAdditionalDatagrams);
      return true;
    case kUDPSocket_ReceiveMoreWithBufferSize_Name:
      var params = reader.decodeStruct(UDPSocket_ReceiveMoreWithBufferSize_Params);
      this.receiveMoreWithBufferSize(params.numAdditionalDatagrams, params.bufferSize);
      return true;
    case kUDPSocket_Close_Name:
      var params = reader.decodeStruct(UDPSocket_Close_Params);
      this.close();
      return true;
    default:
      return false;
    }
  };

  UDPSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUDPSocket_Bind_Name:
      var params = reader.decodeStruct(UDPSocket_Bind_Params);
      this.bind(params.localAddr, params.socketOptions).then(function(response) {
        var responseParams =
            new UDPSocket_Bind_ResponseParams();
        responseParams.result = response.result;
        responseParams.localAddrOut = response.localAddrOut;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_Bind_Name,
            codec.align(UDPSocket_Bind_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_Bind_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUDPSocket_Connect_Name:
      var params = reader.decodeStruct(UDPSocket_Connect_Params);
      this.connect(params.remoteAddr, params.socketOptions).then(function(response) {
        var responseParams =
            new UDPSocket_Connect_ResponseParams();
        responseParams.result = response.result;
        responseParams.localAddrOut = response.localAddrOut;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_Connect_Name,
            codec.align(UDPSocket_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUDPSocket_SetBroadcast_Name:
      var params = reader.decodeStruct(UDPSocket_SetBroadcast_Params);
      this.setBroadcast(params.broadcast).then(function(response) {
        var responseParams =
            new UDPSocket_SetBroadcast_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_SetBroadcast_Name,
            codec.align(UDPSocket_SetBroadcast_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_SetBroadcast_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUDPSocket_JoinGroup_Name:
      var params = reader.decodeStruct(UDPSocket_JoinGroup_Params);
      this.joinGroup(params.groupAddress).then(function(response) {
        var responseParams =
            new UDPSocket_JoinGroup_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_JoinGroup_Name,
            codec.align(UDPSocket_JoinGroup_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_JoinGroup_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUDPSocket_LeaveGroup_Name:
      var params = reader.decodeStruct(UDPSocket_LeaveGroup_Params);
      this.leaveGroup(params.groupAddress).then(function(response) {
        var responseParams =
            new UDPSocket_LeaveGroup_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_LeaveGroup_Name,
            codec.align(UDPSocket_LeaveGroup_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_LeaveGroup_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUDPSocket_SendTo_Name:
      var params = reader.decodeStruct(UDPSocket_SendTo_Params);
      this.sendTo(params.destAddr, params.data, params.trafficAnnotation).then(function(response) {
        var responseParams =
            new UDPSocket_SendTo_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_SendTo_Name,
            codec.align(UDPSocket_SendTo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_SendTo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kUDPSocket_Send_Name:
      var params = reader.decodeStruct(UDPSocket_Send_Params);
      this.send(params.data, params.trafficAnnotation).then(function(response) {
        var responseParams =
            new UDPSocket_Send_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kUDPSocket_Send_Name,
            codec.align(UDPSocket_Send_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_Send_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateUDPSocketRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUDPSocket_Bind_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_Bind_Params;
      break;
      case kUDPSocket_Connect_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_Connect_Params;
      break;
      case kUDPSocket_SetBroadcast_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_SetBroadcast_Params;
      break;
      case kUDPSocket_JoinGroup_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_JoinGroup_Params;
      break;
      case kUDPSocket_LeaveGroup_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_LeaveGroup_Params;
      break;
      case kUDPSocket_ReceiveMore_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UDPSocket_ReceiveMore_Params;
      break;
      case kUDPSocket_ReceiveMoreWithBufferSize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UDPSocket_ReceiveMoreWithBufferSize_Params;
      break;
      case kUDPSocket_SendTo_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_SendTo_Params;
      break;
      case kUDPSocket_Send_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_Send_Params;
      break;
      case kUDPSocket_Close_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UDPSocket_Close_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUDPSocketResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUDPSocket_Bind_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_Bind_ResponseParams;
        break;
      case kUDPSocket_Connect_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_Connect_ResponseParams;
        break;
      case kUDPSocket_SetBroadcast_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_SetBroadcast_ResponseParams;
        break;
      case kUDPSocket_JoinGroup_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_JoinGroup_ResponseParams;
        break;
      case kUDPSocket_LeaveGroup_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_LeaveGroup_ResponseParams;
        break;
      case kUDPSocket_SendTo_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_SendTo_ResponseParams;
        break;
      case kUDPSocket_Send_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_Send_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var UDPSocket = {
    name: 'network.mojom.UDPSocket',
    kVersion: 0,
    ptrClass: UDPSocketPtr,
    proxyClass: UDPSocketProxy,
    stubClass: UDPSocketStub,
    validateRequest: validateUDPSocketRequest,
    validateResponse: validateUDPSocketResponse,
    mojomId: 'services/network/public/mojom/udp_socket.mojom',
    fuzzMethods: {
      bind: {
        params: UDPSocket_Bind_Params,
      },
      connect: {
        params: UDPSocket_Connect_Params,
      },
      setBroadcast: {
        params: UDPSocket_SetBroadcast_Params,
      },
      joinGroup: {
        params: UDPSocket_JoinGroup_Params,
      },
      leaveGroup: {
        params: UDPSocket_LeaveGroup_Params,
      },
      receiveMore: {
        params: UDPSocket_ReceiveMore_Params,
      },
      receiveMoreWithBufferSize: {
        params: UDPSocket_ReceiveMoreWithBufferSize_Params,
      },
      sendTo: {
        params: UDPSocket_SendTo_Params,
      },
      send: {
        params: UDPSocket_Send_Params,
      },
      close: {
        params: UDPSocket_Close_Params,
      },
    },
  };
  UDPSocketStub.prototype.validator = validateUDPSocketRequest;
  UDPSocketProxy.prototype.validator = validateUDPSocketResponse;
  var kUDPSocketReceiver_OnReceived_Name = 1807364616;

  function UDPSocketReceiverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UDPSocketReceiver,
                                                   handleOrPtrInfo);
  }

  function UDPSocketReceiverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UDPSocketReceiver, associatedInterfacePtrInfo);
  }

  UDPSocketReceiverAssociatedPtr.prototype =
      Object.create(UDPSocketReceiverPtr.prototype);
  UDPSocketReceiverAssociatedPtr.prototype.constructor =
      UDPSocketReceiverAssociatedPtr;

  function UDPSocketReceiverProxy(receiver) {
    this.receiver_ = receiver;
  }
  UDPSocketReceiverPtr.prototype.onReceived = function() {
    return UDPSocketReceiverProxy.prototype.onReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  UDPSocketReceiverProxy.prototype.onReceived = function(result, srcAddr, data) {
    var params_ = new UDPSocketReceiver_OnReceived_Params();
    params_.result = result;
    params_.srcAddr = srcAddr;
    params_.data = data;
    var builder = new codec.MessageV0Builder(
        kUDPSocketReceiver_OnReceived_Name,
        codec.align(UDPSocketReceiver_OnReceived_Params.encodedSize));
    builder.encodeStruct(UDPSocketReceiver_OnReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UDPSocketReceiverStub(delegate) {
    this.delegate_ = delegate;
  }
  UDPSocketReceiverStub.prototype.onReceived = function(result, srcAddr, data) {
    return this.delegate_ && this.delegate_.onReceived && this.delegate_.onReceived(result, srcAddr, data);
  }

  UDPSocketReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUDPSocketReceiver_OnReceived_Name:
      var params = reader.decodeStruct(UDPSocketReceiver_OnReceived_Params);
      this.onReceived(params.result, params.srcAddr, params.data);
      return true;
    default:
      return false;
    }
  };

  UDPSocketReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUDPSocketReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUDPSocketReceiver_OnReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UDPSocketReceiver_OnReceived_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUDPSocketReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UDPSocketReceiver = {
    name: 'network.mojom.UDPSocketReceiver',
    kVersion: 0,
    ptrClass: UDPSocketReceiverPtr,
    proxyClass: UDPSocketReceiverProxy,
    stubClass: UDPSocketReceiverStub,
    validateRequest: validateUDPSocketReceiverRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/udp_socket.mojom',
    fuzzMethods: {
      onReceived: {
        params: UDPSocketReceiver_OnReceived_Params,
      },
    },
  };
  UDPSocketReceiverStub.prototype.validator = validateUDPSocketReceiverRequest;
  UDPSocketReceiverProxy.prototype.validator = null;
  exports.UDPSocketOptions = UDPSocketOptions;
  exports.UDPSocket = UDPSocket;
  exports.UDPSocketPtr = UDPSocketPtr;
  exports.UDPSocketAssociatedPtr = UDPSocketAssociatedPtr;
  exports.UDPSocketReceiver = UDPSocketReceiver;
  exports.UDPSocketReceiverPtr = UDPSocketReceiverPtr;
  exports.UDPSocketReceiverAssociatedPtr = UDPSocketReceiverAssociatedPtr;
})();