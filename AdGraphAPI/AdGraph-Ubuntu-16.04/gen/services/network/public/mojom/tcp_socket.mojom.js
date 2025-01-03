// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/tcp_socket.mojom';
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
  var ip_endpoint$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_endpoint.mojom', '../../../../net/interfaces/ip_endpoint.mojom.js');
  }
  var tls_socket$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/tls_socket.mojom', 'tls_socket.mojom.js');
  }
  var network_param$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_param.mojom', 'network_param.mojom.js');
  }
  var mutable_network_traffic_annotation_tag$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom', 'mutable_network_traffic_annotation_tag.mojom.js');
  }



  function TCPConnectedSocket_GetLocalAddress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPConnectedSocket_GetLocalAddress_Params.prototype.initDefaults_ = function() {
  };
  TCPConnectedSocket_GetLocalAddress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPConnectedSocket_GetLocalAddress_Params.generate = function(generator_) {
    var generated = new TCPConnectedSocket_GetLocalAddress_Params;
    return generated;
  };

  TCPConnectedSocket_GetLocalAddress_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TCPConnectedSocket_GetLocalAddress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TCPConnectedSocket_GetLocalAddress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPConnectedSocket_GetLocalAddress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TCPConnectedSocket_GetLocalAddress_Params.validate = function(messageValidator, offset) {
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

  TCPConnectedSocket_GetLocalAddress_Params.encodedSize = codec.kStructHeaderSize + 0;

  TCPConnectedSocket_GetLocalAddress_Params.decode = function(decoder) {
    var packed;
    var val = new TCPConnectedSocket_GetLocalAddress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TCPConnectedSocket_GetLocalAddress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPConnectedSocket_GetLocalAddress_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TCPConnectedSocket_GetLocalAddress_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPConnectedSocket_GetLocalAddress_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
    this.localAddr = null;
  };
  TCPConnectedSocket_GetLocalAddress_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPConnectedSocket_GetLocalAddress_ResponseParams.generate = function(generator_) {
    var generated = new TCPConnectedSocket_GetLocalAddress_ResponseParams;
    generated.netError = generator_.generateInt32();
    generated.localAddr = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    return generated;
  };

  TCPConnectedSocket_GetLocalAddress_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    if (mutator_.chooseMutateField()) {
      this.localAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    return this;
  };
  TCPConnectedSocket_GetLocalAddress_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TCPConnectedSocket_GetLocalAddress_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPConnectedSocket_GetLocalAddress_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TCPConnectedSocket_GetLocalAddress_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate TCPConnectedSocket_GetLocalAddress_ResponseParams.localAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TCPConnectedSocket_GetLocalAddress_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  TCPConnectedSocket_GetLocalAddress_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TCPConnectedSocket_GetLocalAddress_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.localAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    return val;
  };

  TCPConnectedSocket_GetLocalAddress_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPConnectedSocket_GetLocalAddress_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddr);
  };
  function TCPConnectedSocket_UpgradeToTLS_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPConnectedSocket_UpgradeToTLS_Params.prototype.initDefaults_ = function() {
    this.hostPortPair = null;
    this.trafficAnnotation = null;
    this.request = new bindings.InterfaceRequest();
    this.observer = new SocketObserverPtr();
  };
  TCPConnectedSocket_UpgradeToTLS_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPConnectedSocket_UpgradeToTLS_Params.generate = function(generator_) {
    var generated = new TCPConnectedSocket_UpgradeToTLS_Params;
    generated.hostPortPair = generator_.generateStruct(network.mojom.HostPortPair, false);
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    generated.request = generator_.generateInterfaceRequest("network.mojom.TLSClientSocket", false);
    generated.observer = generator_.generateInterface("network.mojom.SocketObserver", true);
    return generated;
  };

  TCPConnectedSocket_UpgradeToTLS_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostPortPair = mutator_.mutateStruct(network.mojom.HostPortPair, false);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "network.mojom.TLSClientSocket", false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "network.mojom.SocketObserver", true);
    }
    return this;
  };
  TCPConnectedSocket_UpgradeToTLS_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.TLSClientSocketRequest"]);
    }
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.SocketObserverPtr"]);
    }
    return handles;
  };

  TCPConnectedSocket_UpgradeToTLS_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPConnectedSocket_UpgradeToTLS_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    this.observer = handles[idx++];;
    return idx;
  };

  TCPConnectedSocket_UpgradeToTLS_Params.validate = function(messageValidator, offset) {
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


    // validate TCPConnectedSocket_UpgradeToTLS_Params.hostPortPair
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_param$.HostPortPair, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPConnectedSocket_UpgradeToTLS_Params.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPConnectedSocket_UpgradeToTLS_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPConnectedSocket_UpgradeToTLS_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 20, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TCPConnectedSocket_UpgradeToTLS_Params.encodedSize = codec.kStructHeaderSize + 32;

  TCPConnectedSocket_UpgradeToTLS_Params.decode = function(decoder) {
    var packed;
    var val = new TCPConnectedSocket_UpgradeToTLS_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostPortPair = decoder.decodeStructPointer(network_param$.HostPortPair);
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    val.observer = decoder.decodeStruct(new codec.NullableInterface(SocketObserverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TCPConnectedSocket_UpgradeToTLS_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPConnectedSocket_UpgradeToTLS_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_param$.HostPortPair, val.hostPortPair);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.encodeStruct(new codec.NullableInterface(SocketObserverPtr), val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TCPConnectedSocket_UpgradeToTLS_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPConnectedSocket_UpgradeToTLS_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
    this.receiveStream = null;
    this.sendStream = null;
  };
  TCPConnectedSocket_UpgradeToTLS_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPConnectedSocket_UpgradeToTLS_ResponseParams.generate = function(generator_) {
    var generated = new TCPConnectedSocket_UpgradeToTLS_ResponseParams;
    generated.netError = generator_.generateInt32();
    generated.receiveStream = generator_.generateDataPipeConsumer(true);
    generated.sendStream = generator_.generateDataPipeProducer(true);
    return generated;
  };

  TCPConnectedSocket_UpgradeToTLS_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    if (mutator_.chooseMutateField()) {
      this.receiveStream = mutator_.mutateDataPipeConsumer(this.receiveStream, true);
    }
    if (mutator_.chooseMutateField()) {
      this.sendStream = mutator_.mutateDataPipeProducer(this.sendStream, true);
    }
    return this;
  };
  TCPConnectedSocket_UpgradeToTLS_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.receiveStream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.sendStream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  TCPConnectedSocket_UpgradeToTLS_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPConnectedSocket_UpgradeToTLS_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.receiveStream = handles[idx++];;
    this.sendStream = handles[idx++];;
    return idx;
  };

  TCPConnectedSocket_UpgradeToTLS_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate TCPConnectedSocket_UpgradeToTLS_ResponseParams.receiveStream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPConnectedSocket_UpgradeToTLS_ResponseParams.sendStream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TCPConnectedSocket_UpgradeToTLS_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  TCPConnectedSocket_UpgradeToTLS_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TCPConnectedSocket_UpgradeToTLS_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    val.receiveStream = decoder.decodeStruct(codec.NullableHandle);
    val.sendStream = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TCPConnectedSocket_UpgradeToTLS_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPConnectedSocket_UpgradeToTLS_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.encodeStruct(codec.NullableHandle, val.receiveStream);
    encoder.encodeStruct(codec.NullableHandle, val.sendStream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SocketObserver_OnReadError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SocketObserver_OnReadError_Params.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  SocketObserver_OnReadError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SocketObserver_OnReadError_Params.generate = function(generator_) {
    var generated = new SocketObserver_OnReadError_Params;
    generated.netError = generator_.generateInt32();
    return generated;
  };

  SocketObserver_OnReadError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    return this;
  };
  SocketObserver_OnReadError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SocketObserver_OnReadError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SocketObserver_OnReadError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SocketObserver_OnReadError_Params.validate = function(messageValidator, offset) {
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

  SocketObserver_OnReadError_Params.encodedSize = codec.kStructHeaderSize + 8;

  SocketObserver_OnReadError_Params.decode = function(decoder) {
    var packed;
    var val = new SocketObserver_OnReadError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SocketObserver_OnReadError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SocketObserver_OnReadError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SocketObserver_OnWriteError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SocketObserver_OnWriteError_Params.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  SocketObserver_OnWriteError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SocketObserver_OnWriteError_Params.generate = function(generator_) {
    var generated = new SocketObserver_OnWriteError_Params;
    generated.netError = generator_.generateInt32();
    return generated;
  };

  SocketObserver_OnWriteError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    return this;
  };
  SocketObserver_OnWriteError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SocketObserver_OnWriteError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SocketObserver_OnWriteError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SocketObserver_OnWriteError_Params.validate = function(messageValidator, offset) {
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

  SocketObserver_OnWriteError_Params.encodedSize = codec.kStructHeaderSize + 8;

  SocketObserver_OnWriteError_Params.decode = function(decoder) {
    var packed;
    var val = new SocketObserver_OnWriteError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SocketObserver_OnWriteError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SocketObserver_OnWriteError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TCPServerSocket_Accept_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPServerSocket_Accept_Params.prototype.initDefaults_ = function() {
    this.observer = new SocketObserverPtr();
  };
  TCPServerSocket_Accept_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPServerSocket_Accept_Params.generate = function(generator_) {
    var generated = new TCPServerSocket_Accept_Params;
    generated.observer = generator_.generateInterface("network.mojom.SocketObserver", true);
    return generated;
  };

  TCPServerSocket_Accept_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "network.mojom.SocketObserver", true);
    }
    return this;
  };
  TCPServerSocket_Accept_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.SocketObserverPtr"]);
    }
    return handles;
  };

  TCPServerSocket_Accept_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPServerSocket_Accept_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  TCPServerSocket_Accept_Params.validate = function(messageValidator, offset) {
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


    // validate TCPServerSocket_Accept_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TCPServerSocket_Accept_Params.encodedSize = codec.kStructHeaderSize + 8;

  TCPServerSocket_Accept_Params.decode = function(decoder) {
    var packed;
    var val = new TCPServerSocket_Accept_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.NullableInterface(SocketObserverPtr));
    return val;
  };

  TCPServerSocket_Accept_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPServerSocket_Accept_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.NullableInterface(SocketObserverPtr), val.observer);
  };
  function TCPServerSocket_Accept_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPServerSocket_Accept_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
    this.sendStream = null;
    this.remoteAddr = null;
    this.connectedSocket = new TCPConnectedSocketPtr();
    this.receiveStream = null;
  };
  TCPServerSocket_Accept_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPServerSocket_Accept_ResponseParams.generate = function(generator_) {
    var generated = new TCPServerSocket_Accept_ResponseParams;
    generated.netError = generator_.generateInt32();
    generated.remoteAddr = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    generated.connectedSocket = generator_.generateInterface("network.mojom.TCPConnectedSocket", true);
    generated.sendStream = generator_.generateDataPipeConsumer(true);
    generated.receiveStream = generator_.generateDataPipeProducer(true);
    return generated;
  };

  TCPServerSocket_Accept_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    if (mutator_.chooseMutateField()) {
      this.remoteAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    if (mutator_.chooseMutateField()) {
      this.connectedSocket = mutator_.mutateInterface(this.connectedSocket, "network.mojom.TCPConnectedSocket", true);
    }
    if (mutator_.chooseMutateField()) {
      this.sendStream = mutator_.mutateDataPipeConsumer(this.sendStream, true);
    }
    if (mutator_.chooseMutateField()) {
      this.receiveStream = mutator_.mutateDataPipeProducer(this.receiveStream, true);
    }
    return this;
  };
  TCPServerSocket_Accept_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.connectedSocket !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.TCPConnectedSocketPtr"]);
    }
    if (this.sendStream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.receiveStream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  TCPServerSocket_Accept_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPServerSocket_Accept_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.connectedSocket = handles[idx++];;
    this.sendStream = handles[idx++];;
    this.receiveStream = handles[idx++];;
    return idx;
  };

  TCPServerSocket_Accept_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate TCPServerSocket_Accept_ResponseParams.remoteAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPServerSocket_Accept_ResponseParams.connectedSocket
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPServerSocket_Accept_ResponseParams.sendStream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TCPServerSocket_Accept_ResponseParams.receiveStream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TCPServerSocket_Accept_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  TCPServerSocket_Accept_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TCPServerSocket_Accept_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    val.sendStream = decoder.decodeStruct(codec.NullableHandle);
    val.remoteAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.connectedSocket = decoder.decodeStruct(new codec.NullableInterface(TCPConnectedSocketPtr));
    val.receiveStream = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TCPServerSocket_Accept_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPServerSocket_Accept_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.encodeStruct(codec.NullableHandle, val.sendStream);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.remoteAddr);
    encoder.encodeStruct(new codec.NullableInterface(TCPConnectedSocketPtr), val.connectedSocket);
    encoder.encodeStruct(codec.NullableHandle, val.receiveStream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TCPServerSocket_GetLocalAddress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPServerSocket_GetLocalAddress_Params.prototype.initDefaults_ = function() {
  };
  TCPServerSocket_GetLocalAddress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPServerSocket_GetLocalAddress_Params.generate = function(generator_) {
    var generated = new TCPServerSocket_GetLocalAddress_Params;
    return generated;
  };

  TCPServerSocket_GetLocalAddress_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TCPServerSocket_GetLocalAddress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TCPServerSocket_GetLocalAddress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPServerSocket_GetLocalAddress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TCPServerSocket_GetLocalAddress_Params.validate = function(messageValidator, offset) {
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

  TCPServerSocket_GetLocalAddress_Params.encodedSize = codec.kStructHeaderSize + 0;

  TCPServerSocket_GetLocalAddress_Params.decode = function(decoder) {
    var packed;
    var val = new TCPServerSocket_GetLocalAddress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TCPServerSocket_GetLocalAddress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPServerSocket_GetLocalAddress_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function TCPServerSocket_GetLocalAddress_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TCPServerSocket_GetLocalAddress_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
    this.localAddr = null;
  };
  TCPServerSocket_GetLocalAddress_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TCPServerSocket_GetLocalAddress_ResponseParams.generate = function(generator_) {
    var generated = new TCPServerSocket_GetLocalAddress_ResponseParams;
    generated.netError = generator_.generateInt32();
    generated.localAddr = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    return generated;
  };

  TCPServerSocket_GetLocalAddress_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    if (mutator_.chooseMutateField()) {
      this.localAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    return this;
  };
  TCPServerSocket_GetLocalAddress_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TCPServerSocket_GetLocalAddress_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TCPServerSocket_GetLocalAddress_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TCPServerSocket_GetLocalAddress_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate TCPServerSocket_GetLocalAddress_ResponseParams.localAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TCPServerSocket_GetLocalAddress_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  TCPServerSocket_GetLocalAddress_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TCPServerSocket_GetLocalAddress_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.localAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    return val;
  };

  TCPServerSocket_GetLocalAddress_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TCPServerSocket_GetLocalAddress_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddr);
  };
  var kTCPConnectedSocket_GetLocalAddress_Name = 267735235;
  var kTCPConnectedSocket_UpgradeToTLS_Name = 1847561748;

  function TCPConnectedSocketPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TCPConnectedSocket,
                                                   handleOrPtrInfo);
  }

  function TCPConnectedSocketAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TCPConnectedSocket, associatedInterfacePtrInfo);
  }

  TCPConnectedSocketAssociatedPtr.prototype =
      Object.create(TCPConnectedSocketPtr.prototype);
  TCPConnectedSocketAssociatedPtr.prototype.constructor =
      TCPConnectedSocketAssociatedPtr;

  function TCPConnectedSocketProxy(receiver) {
    this.receiver_ = receiver;
  }
  TCPConnectedSocketPtr.prototype.getLocalAddress = function() {
    return TCPConnectedSocketProxy.prototype.getLocalAddress
        .apply(this.ptr.getProxy(), arguments);
  };

  TCPConnectedSocketProxy.prototype.getLocalAddress = function() {
    var params_ = new TCPConnectedSocket_GetLocalAddress_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kTCPConnectedSocket_GetLocalAddress_Name,
          codec.align(TCPConnectedSocket_GetLocalAddress_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TCPConnectedSocket_GetLocalAddress_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TCPConnectedSocket_GetLocalAddress_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  TCPConnectedSocketPtr.prototype.upgradeToTLS = function() {
    return TCPConnectedSocketProxy.prototype.upgradeToTLS
        .apply(this.ptr.getProxy(), arguments);
  };

  TCPConnectedSocketProxy.prototype.upgradeToTLS = function(hostPortPair, trafficAnnotation, request, observer) {
    var params_ = new TCPConnectedSocket_UpgradeToTLS_Params();
    params_.hostPortPair = hostPortPair;
    params_.trafficAnnotation = trafficAnnotation;
    params_.request = request;
    params_.observer = observer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kTCPConnectedSocket_UpgradeToTLS_Name,
          codec.align(TCPConnectedSocket_UpgradeToTLS_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TCPConnectedSocket_UpgradeToTLS_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TCPConnectedSocket_UpgradeToTLS_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TCPConnectedSocketStub(delegate) {
    this.delegate_ = delegate;
  }
  TCPConnectedSocketStub.prototype.getLocalAddress = function() {
    return this.delegate_ && this.delegate_.getLocalAddress && this.delegate_.getLocalAddress();
  }
  TCPConnectedSocketStub.prototype.upgradeToTLS = function(hostPortPair, trafficAnnotation, request, observer) {
    return this.delegate_ && this.delegate_.upgradeToTLS && this.delegate_.upgradeToTLS(hostPortPair, trafficAnnotation, request, observer);
  }

  TCPConnectedSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TCPConnectedSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTCPConnectedSocket_GetLocalAddress_Name:
      var params = reader.decodeStruct(TCPConnectedSocket_GetLocalAddress_Params);
      this.getLocalAddress().then(function(response) {
        var responseParams =
            new TCPConnectedSocket_GetLocalAddress_ResponseParams();
        responseParams.netError = response.netError;
        responseParams.localAddr = response.localAddr;
        var builder = new codec.MessageV1Builder(
            kTCPConnectedSocket_GetLocalAddress_Name,
            codec.align(TCPConnectedSocket_GetLocalAddress_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TCPConnectedSocket_GetLocalAddress_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kTCPConnectedSocket_UpgradeToTLS_Name:
      var params = reader.decodeStruct(TCPConnectedSocket_UpgradeToTLS_Params);
      this.upgradeToTLS(params.hostPortPair, params.trafficAnnotation, params.request, params.observer).then(function(response) {
        var responseParams =
            new TCPConnectedSocket_UpgradeToTLS_ResponseParams();
        responseParams.netError = response.netError;
        responseParams.receiveStream = response.receiveStream;
        responseParams.sendStream = response.sendStream;
        var builder = new codec.MessageV1Builder(
            kTCPConnectedSocket_UpgradeToTLS_Name,
            codec.align(TCPConnectedSocket_UpgradeToTLS_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TCPConnectedSocket_UpgradeToTLS_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateTCPConnectedSocketRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTCPConnectedSocket_GetLocalAddress_Name:
        if (message.expectsResponse())
          paramsClass = TCPConnectedSocket_GetLocalAddress_Params;
      break;
      case kTCPConnectedSocket_UpgradeToTLS_Name:
        if (message.expectsResponse())
          paramsClass = TCPConnectedSocket_UpgradeToTLS_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTCPConnectedSocketResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTCPConnectedSocket_GetLocalAddress_Name:
        if (message.isResponse())
          paramsClass = TCPConnectedSocket_GetLocalAddress_ResponseParams;
        break;
      case kTCPConnectedSocket_UpgradeToTLS_Name:
        if (message.isResponse())
          paramsClass = TCPConnectedSocket_UpgradeToTLS_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TCPConnectedSocket = {
    name: 'network.mojom.TCPConnectedSocket',
    kVersion: 0,
    ptrClass: TCPConnectedSocketPtr,
    proxyClass: TCPConnectedSocketProxy,
    stubClass: TCPConnectedSocketStub,
    validateRequest: validateTCPConnectedSocketRequest,
    validateResponse: validateTCPConnectedSocketResponse,
    mojomId: 'services/network/public/mojom/tcp_socket.mojom',
    fuzzMethods: {
      getLocalAddress: {
        params: TCPConnectedSocket_GetLocalAddress_Params,
      },
      upgradeToTLS: {
        params: TCPConnectedSocket_UpgradeToTLS_Params,
      },
    },
  };
  TCPConnectedSocketStub.prototype.validator = validateTCPConnectedSocketRequest;
  TCPConnectedSocketProxy.prototype.validator = validateTCPConnectedSocketResponse;
  var kSocketObserver_OnReadError_Name = 1483343230;
  var kSocketObserver_OnWriteError_Name = 882449363;

  function SocketObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SocketObserver,
                                                   handleOrPtrInfo);
  }

  function SocketObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SocketObserver, associatedInterfacePtrInfo);
  }

  SocketObserverAssociatedPtr.prototype =
      Object.create(SocketObserverPtr.prototype);
  SocketObserverAssociatedPtr.prototype.constructor =
      SocketObserverAssociatedPtr;

  function SocketObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  SocketObserverPtr.prototype.onReadError = function() {
    return SocketObserverProxy.prototype.onReadError
        .apply(this.ptr.getProxy(), arguments);
  };

  SocketObserverProxy.prototype.onReadError = function(netError) {
    var params_ = new SocketObserver_OnReadError_Params();
    params_.netError = netError;
    var builder = new codec.MessageV0Builder(
        kSocketObserver_OnReadError_Name,
        codec.align(SocketObserver_OnReadError_Params.encodedSize));
    builder.encodeStruct(SocketObserver_OnReadError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SocketObserverPtr.prototype.onWriteError = function() {
    return SocketObserverProxy.prototype.onWriteError
        .apply(this.ptr.getProxy(), arguments);
  };

  SocketObserverProxy.prototype.onWriteError = function(netError) {
    var params_ = new SocketObserver_OnWriteError_Params();
    params_.netError = netError;
    var builder = new codec.MessageV0Builder(
        kSocketObserver_OnWriteError_Name,
        codec.align(SocketObserver_OnWriteError_Params.encodedSize));
    builder.encodeStruct(SocketObserver_OnWriteError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SocketObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  SocketObserverStub.prototype.onReadError = function(netError) {
    return this.delegate_ && this.delegate_.onReadError && this.delegate_.onReadError(netError);
  }
  SocketObserverStub.prototype.onWriteError = function(netError) {
    return this.delegate_ && this.delegate_.onWriteError && this.delegate_.onWriteError(netError);
  }

  SocketObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSocketObserver_OnReadError_Name:
      var params = reader.decodeStruct(SocketObserver_OnReadError_Params);
      this.onReadError(params.netError);
      return true;
    case kSocketObserver_OnWriteError_Name:
      var params = reader.decodeStruct(SocketObserver_OnWriteError_Params);
      this.onWriteError(params.netError);
      return true;
    default:
      return false;
    }
  };

  SocketObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSocketObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSocketObserver_OnReadError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SocketObserver_OnReadError_Params;
      break;
      case kSocketObserver_OnWriteError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SocketObserver_OnWriteError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSocketObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SocketObserver = {
    name: 'network.mojom.SocketObserver',
    kVersion: 0,
    ptrClass: SocketObserverPtr,
    proxyClass: SocketObserverProxy,
    stubClass: SocketObserverStub,
    validateRequest: validateSocketObserverRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/tcp_socket.mojom',
    fuzzMethods: {
      onReadError: {
        params: SocketObserver_OnReadError_Params,
      },
      onWriteError: {
        params: SocketObserver_OnWriteError_Params,
      },
    },
  };
  SocketObserverStub.prototype.validator = validateSocketObserverRequest;
  SocketObserverProxy.prototype.validator = null;
  var kTCPServerSocket_Accept_Name = 1320659026;
  var kTCPServerSocket_GetLocalAddress_Name = 2076275939;

  function TCPServerSocketPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TCPServerSocket,
                                                   handleOrPtrInfo);
  }

  function TCPServerSocketAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TCPServerSocket, associatedInterfacePtrInfo);
  }

  TCPServerSocketAssociatedPtr.prototype =
      Object.create(TCPServerSocketPtr.prototype);
  TCPServerSocketAssociatedPtr.prototype.constructor =
      TCPServerSocketAssociatedPtr;

  function TCPServerSocketProxy(receiver) {
    this.receiver_ = receiver;
  }
  TCPServerSocketPtr.prototype.accept = function() {
    return TCPServerSocketProxy.prototype.accept
        .apply(this.ptr.getProxy(), arguments);
  };

  TCPServerSocketProxy.prototype.accept = function(observer) {
    var params_ = new TCPServerSocket_Accept_Params();
    params_.observer = observer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kTCPServerSocket_Accept_Name,
          codec.align(TCPServerSocket_Accept_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TCPServerSocket_Accept_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TCPServerSocket_Accept_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  TCPServerSocketPtr.prototype.getLocalAddress = function() {
    return TCPServerSocketProxy.prototype.getLocalAddress
        .apply(this.ptr.getProxy(), arguments);
  };

  TCPServerSocketProxy.prototype.getLocalAddress = function() {
    var params_ = new TCPServerSocket_GetLocalAddress_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kTCPServerSocket_GetLocalAddress_Name,
          codec.align(TCPServerSocket_GetLocalAddress_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TCPServerSocket_GetLocalAddress_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TCPServerSocket_GetLocalAddress_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TCPServerSocketStub(delegate) {
    this.delegate_ = delegate;
  }
  TCPServerSocketStub.prototype.accept = function(observer) {
    return this.delegate_ && this.delegate_.accept && this.delegate_.accept(observer);
  }
  TCPServerSocketStub.prototype.getLocalAddress = function() {
    return this.delegate_ && this.delegate_.getLocalAddress && this.delegate_.getLocalAddress();
  }

  TCPServerSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TCPServerSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTCPServerSocket_Accept_Name:
      var params = reader.decodeStruct(TCPServerSocket_Accept_Params);
      this.accept(params.observer).then(function(response) {
        var responseParams =
            new TCPServerSocket_Accept_ResponseParams();
        responseParams.netError = response.netError;
        responseParams.remoteAddr = response.remoteAddr;
        responseParams.connectedSocket = response.connectedSocket;
        responseParams.sendStream = response.sendStream;
        responseParams.receiveStream = response.receiveStream;
        var builder = new codec.MessageV1Builder(
            kTCPServerSocket_Accept_Name,
            codec.align(TCPServerSocket_Accept_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TCPServerSocket_Accept_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kTCPServerSocket_GetLocalAddress_Name:
      var params = reader.decodeStruct(TCPServerSocket_GetLocalAddress_Params);
      this.getLocalAddress().then(function(response) {
        var responseParams =
            new TCPServerSocket_GetLocalAddress_ResponseParams();
        responseParams.netError = response.netError;
        responseParams.localAddr = response.localAddr;
        var builder = new codec.MessageV1Builder(
            kTCPServerSocket_GetLocalAddress_Name,
            codec.align(TCPServerSocket_GetLocalAddress_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TCPServerSocket_GetLocalAddress_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateTCPServerSocketRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTCPServerSocket_Accept_Name:
        if (message.expectsResponse())
          paramsClass = TCPServerSocket_Accept_Params;
      break;
      case kTCPServerSocket_GetLocalAddress_Name:
        if (message.expectsResponse())
          paramsClass = TCPServerSocket_GetLocalAddress_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTCPServerSocketResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTCPServerSocket_Accept_Name:
        if (message.isResponse())
          paramsClass = TCPServerSocket_Accept_ResponseParams;
        break;
      case kTCPServerSocket_GetLocalAddress_Name:
        if (message.isResponse())
          paramsClass = TCPServerSocket_GetLocalAddress_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TCPServerSocket = {
    name: 'network.mojom.TCPServerSocket',
    kVersion: 0,
    ptrClass: TCPServerSocketPtr,
    proxyClass: TCPServerSocketProxy,
    stubClass: TCPServerSocketStub,
    validateRequest: validateTCPServerSocketRequest,
    validateResponse: validateTCPServerSocketResponse,
    mojomId: 'services/network/public/mojom/tcp_socket.mojom',
    fuzzMethods: {
      accept: {
        params: TCPServerSocket_Accept_Params,
      },
      getLocalAddress: {
        params: TCPServerSocket_GetLocalAddress_Params,
      },
    },
  };
  TCPServerSocketStub.prototype.validator = validateTCPServerSocketRequest;
  TCPServerSocketProxy.prototype.validator = validateTCPServerSocketResponse;
  exports.TCPConnectedSocket = TCPConnectedSocket;
  exports.TCPConnectedSocketPtr = TCPConnectedSocketPtr;
  exports.TCPConnectedSocketAssociatedPtr = TCPConnectedSocketAssociatedPtr;
  exports.SocketObserver = SocketObserver;
  exports.SocketObserverPtr = SocketObserverPtr;
  exports.SocketObserverAssociatedPtr = SocketObserverAssociatedPtr;
  exports.TCPServerSocket = TCPServerSocket;
  exports.TCPServerSocketPtr = TCPServerSocketPtr;
  exports.TCPServerSocketAssociatedPtr = TCPServerSocketAssociatedPtr;
})();