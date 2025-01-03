// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/proxy_resolver/public/mojom/proxy_resolver.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('proxyResolver.mojom');
  var address_family$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/address_family.mojom', '../../../../net/interfaces/address_family.mojom.js');
  }
  var host_resolver_service$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/host_resolver_service.mojom', '../../../../net/interfaces/host_resolver_service.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var kProxyResolverServiceName = "proxy_resolver";
  var ProxyScheme = {};
  ProxyScheme.INVALID = 0;
  ProxyScheme.DIRECT = ProxyScheme.INVALID + 1;
  ProxyScheme.HTTP = ProxyScheme.DIRECT + 1;
  ProxyScheme.SOCKS4 = ProxyScheme.HTTP + 1;
  ProxyScheme.SOCKS5 = ProxyScheme.SOCKS4 + 1;
  ProxyScheme.HTTPS = ProxyScheme.SOCKS5 + 1;
  ProxyScheme.QUIC = ProxyScheme.HTTPS + 1;

  ProxyScheme.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  ProxyScheme.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ProxyServer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyServer.prototype.initDefaults_ = function() {
    this.scheme = 0;
    this.port = 0;
    this.host = null;
  };
  ProxyServer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyServer.generate = function(generator_) {
    var generated = new ProxyServer;
    generated.scheme = generator_.generateEnum(0, 6);
    generated.host = generator_.generateString(false);
    generated.port = generator_.generateUint16();
    return generated;
  };

  ProxyServer.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scheme = mutator_.mutateEnum(this.scheme, 0, 6);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateString(this.host, false);
    }
    if (mutator_.chooseMutateField()) {
      this.port = mutator_.mutateUint16(this.port);
    }
    return this;
  };
  ProxyServer.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyServer.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyServer.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyServer.validate = function(messageValidator, offset) {
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


    // validate ProxyServer.scheme
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ProxyScheme);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyServer.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProxyServer.encodedSize = codec.kStructHeaderSize + 16;

  ProxyServer.decode = function(decoder) {
    var packed;
    var val = new ProxyServer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scheme = decoder.decodeStruct(codec.Int32);
    val.port = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    val.host = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyServer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyServer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.scheme);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.host);
  };
  function ProxyInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyInfo.prototype.initDefaults_ = function() {
    this.proxyServers = null;
  };
  ProxyInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyInfo.generate = function(generator_) {
    var generated = new ProxyInfo;
    generated.proxyServers = generator_.generateArray(function() {
      return generator_.generateStruct(proxyResolver.mojom.ProxyServer, false);
    });
    return generated;
  };

  ProxyInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.proxyServers = mutator_.mutateArray(this.proxyServers, function(val) {
        return mutator_.mutateStruct(proxyResolver.mojom.ProxyServer, false);
      });
    }
    return this;
  };
  ProxyInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyInfo.validate = function(messageValidator, offset) {
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


    // validate ProxyInfo.proxyServers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ProxyServer), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyInfo.encodedSize = codec.kStructHeaderSize + 8;

  ProxyInfo.decode = function(decoder) {
    var packed;
    var val = new ProxyInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.proxyServers = decoder.decodeArrayPointer(new codec.PointerTo(ProxyServer));
    return val;
  };

  ProxyInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ProxyServer), val.proxyServers);
  };
  function ProxyResolver_GetProxyForUrl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolver_GetProxyForUrl_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.client = new ProxyResolverRequestClientPtr();
  };
  ProxyResolver_GetProxyForUrl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolver_GetProxyForUrl_Params.generate = function(generator_) {
    var generated = new ProxyResolver_GetProxyForUrl_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.client = generator_.generateInterface("proxyResolver.mojom.ProxyResolverRequestClient", false);
    return generated;
  };

  ProxyResolver_GetProxyForUrl_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "proxyResolver.mojom.ProxyResolverRequestClient", false);
    }
    return this;
  };
  ProxyResolver_GetProxyForUrl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["proxyResolver.mojom.ProxyResolverRequestClientPtr"]);
    }
    return handles;
  };

  ProxyResolver_GetProxyForUrl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolver_GetProxyForUrl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  ProxyResolver_GetProxyForUrl_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyResolver_GetProxyForUrl_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyResolver_GetProxyForUrl_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolver_GetProxyForUrl_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolver_GetProxyForUrl_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolver_GetProxyForUrl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.client = decoder.decodeStruct(new codec.Interface(ProxyResolverRequestClientPtr));
    return val;
  };

  ProxyResolver_GetProxyForUrl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolver_GetProxyForUrl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(new codec.Interface(ProxyResolverRequestClientPtr), val.client);
  };
  function ProxyResolverRequestClient_ReportResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_ReportResult_Params.prototype.initDefaults_ = function() {
    this.error = 0;
    this.proxyInfo = null;
  };
  ProxyResolverRequestClient_ReportResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverRequestClient_ReportResult_Params.generate = function(generator_) {
    var generated = new ProxyResolverRequestClient_ReportResult_Params;
    generated.error = generator_.generateInt32();
    generated.proxyInfo = generator_.generateStruct(proxyResolver.mojom.ProxyInfo, false);
    return generated;
  };

  ProxyResolverRequestClient_ReportResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateInt32(this.error);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyInfo = mutator_.mutateStruct(proxyResolver.mojom.ProxyInfo, false);
    }
    return this;
  };
  ProxyResolverRequestClient_ReportResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyResolverRequestClient_ReportResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverRequestClient_ReportResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyResolverRequestClient_ReportResult_Params.validate = function(messageValidator, offset) {
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



    // validate ProxyResolverRequestClient_ReportResult_Params.proxyInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ProxyInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_ReportResult_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverRequestClient_ReportResult_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_ReportResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.proxyInfo = decoder.decodeStructPointer(ProxyInfo);
    return val;
  };

  ProxyResolverRequestClient_ReportResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_ReportResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ProxyInfo, val.proxyInfo);
  };
  function ProxyResolverRequestClient_Alert_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_Alert_Params.prototype.initDefaults_ = function() {
    this.error = null;
  };
  ProxyResolverRequestClient_Alert_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverRequestClient_Alert_Params.generate = function(generator_) {
    var generated = new ProxyResolverRequestClient_Alert_Params;
    generated.error = generator_.generateString(false);
    return generated;
  };

  ProxyResolverRequestClient_Alert_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, false);
    }
    return this;
  };
  ProxyResolverRequestClient_Alert_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyResolverRequestClient_Alert_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverRequestClient_Alert_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyResolverRequestClient_Alert_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyResolverRequestClient_Alert_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_Alert_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyResolverRequestClient_Alert_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_Alert_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverRequestClient_Alert_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_Alert_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverRequestClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_OnError_Params.prototype.initDefaults_ = function() {
    this.lineNumber = 0;
    this.error = null;
  };
  ProxyResolverRequestClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverRequestClient_OnError_Params.generate = function(generator_) {
    var generated = new ProxyResolverRequestClient_OnError_Params;
    generated.lineNumber = generator_.generateInt32();
    generated.error = generator_.generateString(false);
    return generated;
  };

  ProxyResolverRequestClient_OnError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, false);
    }
    return this;
  };
  ProxyResolverRequestClient_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyResolverRequestClient_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverRequestClient_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyResolverRequestClient_OnError_Params.validate = function(messageValidator, offset) {
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



    // validate ProxyResolverRequestClient_OnError_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverRequestClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverRequestClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverRequestClient_ResolveDns_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverRequestClient_ResolveDns_Params.prototype.initDefaults_ = function() {
    this.requestInfo = null;
    this.client = new host_resolver_service$.HostResolverRequestClientPtr();
  };
  ProxyResolverRequestClient_ResolveDns_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverRequestClient_ResolveDns_Params.generate = function(generator_) {
    var generated = new ProxyResolverRequestClient_ResolveDns_Params;
    generated.requestInfo = generator_.generateStruct(net.interfaces.HostResolverRequestInfo, false);
    generated.client = generator_.generateInterface("net.interfaces.HostResolverRequestClient", false);
    return generated;
  };

  ProxyResolverRequestClient_ResolveDns_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestInfo = mutator_.mutateStruct(net.interfaces.HostResolverRequestInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "net.interfaces.HostResolverRequestClient", false);
    }
    return this;
  };
  ProxyResolverRequestClient_ResolveDns_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["net.interfaces.HostResolverRequestClientPtr"]);
    }
    return handles;
  };

  ProxyResolverRequestClient_ResolveDns_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverRequestClient_ResolveDns_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  ProxyResolverRequestClient_ResolveDns_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyResolverRequestClient_ResolveDns_Params.requestInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, host_resolver_service$.HostResolverRequestInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyResolverRequestClient_ResolveDns_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverRequestClient_ResolveDns_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverRequestClient_ResolveDns_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverRequestClient_ResolveDns_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestInfo = decoder.decodeStructPointer(host_resolver_service$.HostResolverRequestInfo);
    val.client = decoder.decodeStruct(new codec.Interface(host_resolver_service$.HostResolverRequestClientPtr));
    return val;
  };

  ProxyResolverRequestClient_ResolveDns_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverRequestClient_ResolveDns_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(host_resolver_service$.HostResolverRequestInfo, val.requestInfo);
    encoder.encodeStruct(new codec.Interface(host_resolver_service$.HostResolverRequestClientPtr), val.client);
  };
  function ProxyResolverFactory_CreateResolver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactory_CreateResolver_Params.prototype.initDefaults_ = function() {
    this.pacScript = null;
    this.resolver = new bindings.InterfaceRequest();
    this.client = new ProxyResolverFactoryRequestClientPtr();
  };
  ProxyResolverFactory_CreateResolver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverFactory_CreateResolver_Params.generate = function(generator_) {
    var generated = new ProxyResolverFactory_CreateResolver_Params;
    generated.pacScript = generator_.generateString(false);
    generated.resolver = generator_.generateInterfaceRequest("proxyResolver.mojom.ProxyResolver", false);
    generated.client = generator_.generateInterface("proxyResolver.mojom.ProxyResolverFactoryRequestClient", false);
    return generated;
  };

  ProxyResolverFactory_CreateResolver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pacScript = mutator_.mutateString(this.pacScript, false);
    }
    if (mutator_.chooseMutateField()) {
      this.resolver = mutator_.mutateInterfaceRequest(this.resolver, "proxyResolver.mojom.ProxyResolver", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "proxyResolver.mojom.ProxyResolverFactoryRequestClient", false);
    }
    return this;
  };
  ProxyResolverFactory_CreateResolver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.resolver !== null) {
      Array.prototype.push.apply(handles, ["proxyResolver.mojom.ProxyResolverRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["proxyResolver.mojom.ProxyResolverFactoryRequestClientPtr"]);
    }
    return handles;
  };

  ProxyResolverFactory_CreateResolver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverFactory_CreateResolver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.resolver = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  ProxyResolverFactory_CreateResolver_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyResolverFactory_CreateResolver_Params.pacScript
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyResolverFactory_CreateResolver_Params.resolver
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyResolverFactory_CreateResolver_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactory_CreateResolver_Params.encodedSize = codec.kStructHeaderSize + 24;

  ProxyResolverFactory_CreateResolver_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactory_CreateResolver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pacScript = decoder.decodeStruct(codec.String);
    val.resolver = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(ProxyResolverFactoryRequestClientPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProxyResolverFactory_CreateResolver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactory_CreateResolver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.pacScript);
    encoder.encodeStruct(codec.InterfaceRequest, val.resolver);
    encoder.encodeStruct(new codec.Interface(ProxyResolverFactoryRequestClientPtr), val.client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProxyResolverFactoryRequestClient_ReportResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverFactoryRequestClient_ReportResult_Params.generate = function(generator_) {
    var generated = new ProxyResolverFactoryRequestClient_ReportResult_Params;
    generated.error = generator_.generateInt32();
    return generated;
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateInt32(this.error);
    }
    return this;
  };
  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverFactoryRequestClient_ReportResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.validate = function(messageValidator, offset) {
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

  ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyResolverFactoryRequestClient_ReportResult_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_ReportResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProxyResolverFactoryRequestClient_ReportResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProxyResolverFactoryRequestClient_Alert_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_Alert_Params.prototype.initDefaults_ = function() {
    this.error = null;
  };
  ProxyResolverFactoryRequestClient_Alert_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverFactoryRequestClient_Alert_Params.generate = function(generator_) {
    var generated = new ProxyResolverFactoryRequestClient_Alert_Params;
    generated.error = generator_.generateString(false);
    return generated;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, false);
    }
    return this;
  };
  ProxyResolverFactoryRequestClient_Alert_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverFactoryRequestClient_Alert_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyResolverFactoryRequestClient_Alert_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProxyResolverFactoryRequestClient_Alert_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_Alert_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverFactoryRequestClient_Alert_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_Alert_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverFactoryRequestClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_OnError_Params.prototype.initDefaults_ = function() {
    this.lineNumber = 0;
    this.error = null;
  };
  ProxyResolverFactoryRequestClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverFactoryRequestClient_OnError_Params.generate = function(generator_) {
    var generated = new ProxyResolverFactoryRequestClient_OnError_Params;
    generated.lineNumber = generator_.generateInt32();
    generated.error = generator_.generateString(false);
    return generated;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, false);
    }
    return this;
  };
  ProxyResolverFactoryRequestClient_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverFactoryRequestClient_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.validate = function(messageValidator, offset) {
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



    // validate ProxyResolverFactoryRequestClient_OnError_Params.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverFactoryRequestClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  ProxyResolverFactoryRequestClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.error);
  };
  function ProxyResolverFactoryRequestClient_ResolveDns_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.initDefaults_ = function() {
    this.requestInfo = null;
    this.client = new host_resolver_service$.HostResolverRequestClientPtr();
  };
  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyResolverFactoryRequestClient_ResolveDns_Params.generate = function(generator_) {
    var generated = new ProxyResolverFactoryRequestClient_ResolveDns_Params;
    generated.requestInfo = generator_.generateStruct(net.interfaces.HostResolverRequestInfo, false);
    generated.client = generator_.generateInterface("net.interfaces.HostResolverRequestClient", false);
    return generated;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestInfo = mutator_.mutateStruct(net.interfaces.HostResolverRequestInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "net.interfaces.HostResolverRequestClient", false);
    }
    return this;
  };
  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["net.interfaces.HostResolverRequestClientPtr"]);
    }
    return handles;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyResolverFactoryRequestClient_ResolveDns_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.validate = function(messageValidator, offset) {
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


    // validate ProxyResolverFactoryRequestClient_ResolveDns_Params.requestInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, host_resolver_service$.HostResolverRequestInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyResolverFactoryRequestClient_ResolveDns_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProxyResolverFactoryRequestClient_ResolveDns_Params.decode = function(decoder) {
    var packed;
    var val = new ProxyResolverFactoryRequestClient_ResolveDns_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestInfo = decoder.decodeStructPointer(host_resolver_service$.HostResolverRequestInfo);
    val.client = decoder.decodeStruct(new codec.Interface(host_resolver_service$.HostResolverRequestClientPtr));
    return val;
  };

  ProxyResolverFactoryRequestClient_ResolveDns_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(host_resolver_service$.HostResolverRequestInfo, val.requestInfo);
    encoder.encodeStruct(new codec.Interface(host_resolver_service$.HostResolverRequestClientPtr), val.client);
  };
  var kProxyResolver_GetProxyForUrl_Name = 1235395736;

  function ProxyResolverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProxyResolver,
                                                   handleOrPtrInfo);
  }

  function ProxyResolverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProxyResolver, associatedInterfacePtrInfo);
  }

  ProxyResolverAssociatedPtr.prototype =
      Object.create(ProxyResolverPtr.prototype);
  ProxyResolverAssociatedPtr.prototype.constructor =
      ProxyResolverAssociatedPtr;

  function ProxyResolverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProxyResolverPtr.prototype.getProxyForUrl = function() {
    return ProxyResolverProxy.prototype.getProxyForUrl
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverProxy.prototype.getProxyForUrl = function(url, client) {
    var params_ = new ProxyResolver_GetProxyForUrl_Params();
    params_.url = url;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kProxyResolver_GetProxyForUrl_Name,
        codec.align(ProxyResolver_GetProxyForUrl_Params.encodedSize));
    builder.encodeStruct(ProxyResolver_GetProxyForUrl_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverStub(delegate) {
    this.delegate_ = delegate;
  }
  ProxyResolverStub.prototype.getProxyForUrl = function(url, client) {
    return this.delegate_ && this.delegate_.getProxyForUrl && this.delegate_.getProxyForUrl(url, client);
  }

  ProxyResolverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolver_GetProxyForUrl_Name:
      var params = reader.decodeStruct(ProxyResolver_GetProxyForUrl_Params);
      this.getProxyForUrl(params.url, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProxyResolverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolver_GetProxyForUrl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolver_GetProxyForUrl_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolver = {
    name: 'proxy_resolver.mojom.ProxyResolver',
    kVersion: 0,
    ptrClass: ProxyResolverPtr,
    proxyClass: ProxyResolverProxy,
    stubClass: ProxyResolverStub,
    validateRequest: validateProxyResolverRequest,
    validateResponse: null,
    mojomId: 'services/proxy_resolver/public/mojom/proxy_resolver.mojom',
    fuzzMethods: {
      getProxyForUrl: {
        params: ProxyResolver_GetProxyForUrl_Params,
      },
    },
  };
  ProxyResolverStub.prototype.validator = validateProxyResolverRequest;
  ProxyResolverProxy.prototype.validator = null;
  var kProxyResolverRequestClient_ReportResult_Name = 1899730000;
  var kProxyResolverRequestClient_Alert_Name = 1299442255;
  var kProxyResolverRequestClient_OnError_Name = 1870219511;
  var kProxyResolverRequestClient_ResolveDns_Name = 758926334;

  function ProxyResolverRequestClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProxyResolverRequestClient,
                                                   handleOrPtrInfo);
  }

  function ProxyResolverRequestClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProxyResolverRequestClient, associatedInterfacePtrInfo);
  }

  ProxyResolverRequestClientAssociatedPtr.prototype =
      Object.create(ProxyResolverRequestClientPtr.prototype);
  ProxyResolverRequestClientAssociatedPtr.prototype.constructor =
      ProxyResolverRequestClientAssociatedPtr;

  function ProxyResolverRequestClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProxyResolverRequestClientPtr.prototype.reportResult = function() {
    return ProxyResolverRequestClientProxy.prototype.reportResult
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverRequestClientProxy.prototype.reportResult = function(error, proxyInfo) {
    var params_ = new ProxyResolverRequestClient_ReportResult_Params();
    params_.error = error;
    params_.proxyInfo = proxyInfo;
    var builder = new codec.MessageV0Builder(
        kProxyResolverRequestClient_ReportResult_Name,
        codec.align(ProxyResolverRequestClient_ReportResult_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_ReportResult_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverRequestClientPtr.prototype.alert = function() {
    return ProxyResolverRequestClientProxy.prototype.alert
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverRequestClientProxy.prototype.alert = function(error) {
    var params_ = new ProxyResolverRequestClient_Alert_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kProxyResolverRequestClient_Alert_Name,
        codec.align(ProxyResolverRequestClient_Alert_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_Alert_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverRequestClientPtr.prototype.onError = function() {
    return ProxyResolverRequestClientProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverRequestClientProxy.prototype.onError = function(lineNumber, error) {
    var params_ = new ProxyResolverRequestClient_OnError_Params();
    params_.lineNumber = lineNumber;
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kProxyResolverRequestClient_OnError_Name,
        codec.align(ProxyResolverRequestClient_OnError_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverRequestClientPtr.prototype.resolveDns = function() {
    return ProxyResolverRequestClientProxy.prototype.resolveDns
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverRequestClientProxy.prototype.resolveDns = function(requestInfo, client) {
    var params_ = new ProxyResolverRequestClient_ResolveDns_Params();
    params_.requestInfo = requestInfo;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kProxyResolverRequestClient_ResolveDns_Name,
        codec.align(ProxyResolverRequestClient_ResolveDns_Params.encodedSize));
    builder.encodeStruct(ProxyResolverRequestClient_ResolveDns_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverRequestClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProxyResolverRequestClientStub.prototype.reportResult = function(error, proxyInfo) {
    return this.delegate_ && this.delegate_.reportResult && this.delegate_.reportResult(error, proxyInfo);
  }
  ProxyResolverRequestClientStub.prototype.alert = function(error) {
    return this.delegate_ && this.delegate_.alert && this.delegate_.alert(error);
  }
  ProxyResolverRequestClientStub.prototype.onError = function(lineNumber, error) {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError(lineNumber, error);
  }
  ProxyResolverRequestClientStub.prototype.resolveDns = function(requestInfo, client) {
    return this.delegate_ && this.delegate_.resolveDns && this.delegate_.resolveDns(requestInfo, client);
  }

  ProxyResolverRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolverRequestClient_ReportResult_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_ReportResult_Params);
      this.reportResult(params.error, params.proxyInfo);
      return true;
    case kProxyResolverRequestClient_Alert_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_Alert_Params);
      this.alert(params.error);
      return true;
    case kProxyResolverRequestClient_OnError_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_OnError_Params);
      this.onError(params.lineNumber, params.error);
      return true;
    case kProxyResolverRequestClient_ResolveDns_Name:
      var params = reader.decodeStruct(ProxyResolverRequestClient_ResolveDns_Params);
      this.resolveDns(params.requestInfo, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProxyResolverRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolverRequestClient_ReportResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_ReportResult_Params;
      break;
      case kProxyResolverRequestClient_Alert_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_Alert_Params;
      break;
      case kProxyResolverRequestClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_OnError_Params;
      break;
      case kProxyResolverRequestClient_ResolveDns_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverRequestClient_ResolveDns_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolverRequestClient = {
    name: 'proxy_resolver.mojom.ProxyResolverRequestClient',
    kVersion: 0,
    ptrClass: ProxyResolverRequestClientPtr,
    proxyClass: ProxyResolverRequestClientProxy,
    stubClass: ProxyResolverRequestClientStub,
    validateRequest: validateProxyResolverRequestClientRequest,
    validateResponse: null,
    mojomId: 'services/proxy_resolver/public/mojom/proxy_resolver.mojom',
    fuzzMethods: {
      reportResult: {
        params: ProxyResolverRequestClient_ReportResult_Params,
      },
      alert: {
        params: ProxyResolverRequestClient_Alert_Params,
      },
      onError: {
        params: ProxyResolverRequestClient_OnError_Params,
      },
      resolveDns: {
        params: ProxyResolverRequestClient_ResolveDns_Params,
      },
    },
  };
  ProxyResolverRequestClientStub.prototype.validator = validateProxyResolverRequestClientRequest;
  ProxyResolverRequestClientProxy.prototype.validator = null;
  var kProxyResolverFactory_CreateResolver_Name = 1769599116;

  function ProxyResolverFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProxyResolverFactory,
                                                   handleOrPtrInfo);
  }

  function ProxyResolverFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProxyResolverFactory, associatedInterfacePtrInfo);
  }

  ProxyResolverFactoryAssociatedPtr.prototype =
      Object.create(ProxyResolverFactoryPtr.prototype);
  ProxyResolverFactoryAssociatedPtr.prototype.constructor =
      ProxyResolverFactoryAssociatedPtr;

  function ProxyResolverFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProxyResolverFactoryPtr.prototype.createResolver = function() {
    return ProxyResolverFactoryProxy.prototype.createResolver
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverFactoryProxy.prototype.createResolver = function(pacScript, resolver, client) {
    var params_ = new ProxyResolverFactory_CreateResolver_Params();
    params_.pacScript = pacScript;
    params_.resolver = resolver;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kProxyResolverFactory_CreateResolver_Name,
        codec.align(ProxyResolverFactory_CreateResolver_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactory_CreateResolver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  ProxyResolverFactoryStub.prototype.createResolver = function(pacScript, resolver, client) {
    return this.delegate_ && this.delegate_.createResolver && this.delegate_.createResolver(pacScript, resolver, client);
  }

  ProxyResolverFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolverFactory_CreateResolver_Name:
      var params = reader.decodeStruct(ProxyResolverFactory_CreateResolver_Params);
      this.createResolver(params.pacScript, params.resolver, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProxyResolverFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolverFactory_CreateResolver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactory_CreateResolver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolverFactory = {
    name: 'proxy_resolver.mojom.ProxyResolverFactory',
    kVersion: 0,
    ptrClass: ProxyResolverFactoryPtr,
    proxyClass: ProxyResolverFactoryProxy,
    stubClass: ProxyResolverFactoryStub,
    validateRequest: validateProxyResolverFactoryRequest,
    validateResponse: null,
    mojomId: 'services/proxy_resolver/public/mojom/proxy_resolver.mojom',
    fuzzMethods: {
      createResolver: {
        params: ProxyResolverFactory_CreateResolver_Params,
      },
    },
  };
  ProxyResolverFactoryStub.prototype.validator = validateProxyResolverFactoryRequest;
  ProxyResolverFactoryProxy.prototype.validator = null;
  var kProxyResolverFactoryRequestClient_ReportResult_Name = 1638062100;
  var kProxyResolverFactoryRequestClient_Alert_Name = 157970713;
  var kProxyResolverFactoryRequestClient_OnError_Name = 1942184792;
  var kProxyResolverFactoryRequestClient_ResolveDns_Name = 1752245291;

  function ProxyResolverFactoryRequestClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProxyResolverFactoryRequestClient,
                                                   handleOrPtrInfo);
  }

  function ProxyResolverFactoryRequestClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProxyResolverFactoryRequestClient, associatedInterfacePtrInfo);
  }

  ProxyResolverFactoryRequestClientAssociatedPtr.prototype =
      Object.create(ProxyResolverFactoryRequestClientPtr.prototype);
  ProxyResolverFactoryRequestClientAssociatedPtr.prototype.constructor =
      ProxyResolverFactoryRequestClientAssociatedPtr;

  function ProxyResolverFactoryRequestClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProxyResolverFactoryRequestClientPtr.prototype.reportResult = function() {
    return ProxyResolverFactoryRequestClientProxy.prototype.reportResult
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverFactoryRequestClientProxy.prototype.reportResult = function(error) {
    var params_ = new ProxyResolverFactoryRequestClient_ReportResult_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kProxyResolverFactoryRequestClient_ReportResult_Name,
        codec.align(ProxyResolverFactoryRequestClient_ReportResult_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_ReportResult_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverFactoryRequestClientPtr.prototype.alert = function() {
    return ProxyResolverFactoryRequestClientProxy.prototype.alert
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverFactoryRequestClientProxy.prototype.alert = function(error) {
    var params_ = new ProxyResolverFactoryRequestClient_Alert_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kProxyResolverFactoryRequestClient_Alert_Name,
        codec.align(ProxyResolverFactoryRequestClient_Alert_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_Alert_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverFactoryRequestClientPtr.prototype.onError = function() {
    return ProxyResolverFactoryRequestClientProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverFactoryRequestClientProxy.prototype.onError = function(lineNumber, error) {
    var params_ = new ProxyResolverFactoryRequestClient_OnError_Params();
    params_.lineNumber = lineNumber;
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kProxyResolverFactoryRequestClient_OnError_Name,
        codec.align(ProxyResolverFactoryRequestClient_OnError_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProxyResolverFactoryRequestClientPtr.prototype.resolveDns = function() {
    return ProxyResolverFactoryRequestClientProxy.prototype.resolveDns
        .apply(this.ptr.getProxy(), arguments);
  };

  ProxyResolverFactoryRequestClientProxy.prototype.resolveDns = function(requestInfo, client) {
    var params_ = new ProxyResolverFactoryRequestClient_ResolveDns_Params();
    params_.requestInfo = requestInfo;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kProxyResolverFactoryRequestClient_ResolveDns_Name,
        codec.align(ProxyResolverFactoryRequestClient_ResolveDns_Params.encodedSize));
    builder.encodeStruct(ProxyResolverFactoryRequestClient_ResolveDns_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProxyResolverFactoryRequestClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProxyResolverFactoryRequestClientStub.prototype.reportResult = function(error) {
    return this.delegate_ && this.delegate_.reportResult && this.delegate_.reportResult(error);
  }
  ProxyResolverFactoryRequestClientStub.prototype.alert = function(error) {
    return this.delegate_ && this.delegate_.alert && this.delegate_.alert(error);
  }
  ProxyResolverFactoryRequestClientStub.prototype.onError = function(lineNumber, error) {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError(lineNumber, error);
  }
  ProxyResolverFactoryRequestClientStub.prototype.resolveDns = function(requestInfo, client) {
    return this.delegate_ && this.delegate_.resolveDns && this.delegate_.resolveDns(requestInfo, client);
  }

  ProxyResolverFactoryRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProxyResolverFactoryRequestClient_ReportResult_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_ReportResult_Params);
      this.reportResult(params.error);
      return true;
    case kProxyResolverFactoryRequestClient_Alert_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_Alert_Params);
      this.alert(params.error);
      return true;
    case kProxyResolverFactoryRequestClient_OnError_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_OnError_Params);
      this.onError(params.lineNumber, params.error);
      return true;
    case kProxyResolverFactoryRequestClient_ResolveDns_Name:
      var params = reader.decodeStruct(ProxyResolverFactoryRequestClient_ResolveDns_Params);
      this.resolveDns(params.requestInfo, params.client);
      return true;
    default:
      return false;
    }
  };

  ProxyResolverFactoryRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProxyResolverFactoryRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProxyResolverFactoryRequestClient_ReportResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_ReportResult_Params;
      break;
      case kProxyResolverFactoryRequestClient_Alert_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_Alert_Params;
      break;
      case kProxyResolverFactoryRequestClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_OnError_Params;
      break;
      case kProxyResolverFactoryRequestClient_ResolveDns_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProxyResolverFactoryRequestClient_ResolveDns_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProxyResolverFactoryRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProxyResolverFactoryRequestClient = {
    name: 'proxy_resolver.mojom.ProxyResolverFactoryRequestClient',
    kVersion: 0,
    ptrClass: ProxyResolverFactoryRequestClientPtr,
    proxyClass: ProxyResolverFactoryRequestClientProxy,
    stubClass: ProxyResolverFactoryRequestClientStub,
    validateRequest: validateProxyResolverFactoryRequestClientRequest,
    validateResponse: null,
    mojomId: 'services/proxy_resolver/public/mojom/proxy_resolver.mojom',
    fuzzMethods: {
      reportResult: {
        params: ProxyResolverFactoryRequestClient_ReportResult_Params,
      },
      alert: {
        params: ProxyResolverFactoryRequestClient_Alert_Params,
      },
      onError: {
        params: ProxyResolverFactoryRequestClient_OnError_Params,
      },
      resolveDns: {
        params: ProxyResolverFactoryRequestClient_ResolveDns_Params,
      },
    },
  };
  ProxyResolverFactoryRequestClientStub.prototype.validator = validateProxyResolverFactoryRequestClientRequest;
  ProxyResolverFactoryRequestClientProxy.prototype.validator = null;
  exports.kProxyResolverServiceName = kProxyResolverServiceName;
  exports.ProxyScheme = ProxyScheme;
  exports.ProxyServer = ProxyServer;
  exports.ProxyInfo = ProxyInfo;
  exports.ProxyResolver = ProxyResolver;
  exports.ProxyResolverPtr = ProxyResolverPtr;
  exports.ProxyResolverAssociatedPtr = ProxyResolverAssociatedPtr;
  exports.ProxyResolverRequestClient = ProxyResolverRequestClient;
  exports.ProxyResolverRequestClientPtr = ProxyResolverRequestClientPtr;
  exports.ProxyResolverRequestClientAssociatedPtr = ProxyResolverRequestClientAssociatedPtr;
  exports.ProxyResolverFactory = ProxyResolverFactory;
  exports.ProxyResolverFactoryPtr = ProxyResolverFactoryPtr;
  exports.ProxyResolverFactoryAssociatedPtr = ProxyResolverFactoryAssociatedPtr;
  exports.ProxyResolverFactoryRequestClient = ProxyResolverFactoryRequestClient;
  exports.ProxyResolverFactoryRequestClientPtr = ProxyResolverFactoryRequestClientPtr;
  exports.ProxyResolverFactoryRequestClientAssociatedPtr = ProxyResolverFactoryRequestClientAssociatedPtr;
})();