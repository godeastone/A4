// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/network_context.mojom';
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
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../mojo/public/mojom/base/values.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var address_list$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/address_list.mojom', '../../../../net/interfaces/address_list.mojom.js');
  }
  var ip_endpoint$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_endpoint.mojom', '../../../../net/interfaces/ip_endpoint.mojom.js');
  }
  var cookie_manager$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/cookie_manager.mojom', 'cookie_manager.mojom.js');
  }
  var ct_log_info$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/ct_log_info.mojom', 'ct_log_info.mojom.js');
  }
  var mutable_network_traffic_annotation_tag$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom', 'mutable_network_traffic_annotation_tag.mojom.js');
  }
  var proxy_config$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/proxy_config.mojom', 'proxy_config.mojom.js');
  }
  var proxy_config_with_annotation$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/proxy_config_with_annotation.mojom', 'proxy_config_with_annotation.mojom.js');
  }
  var ssl_config$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/ssl_config.mojom', 'ssl_config.mojom.js');
  }
  var tcp_socket$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/tcp_socket.mojom', 'tcp_socket.mojom.js');
  }
  var udp_socket$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/udp_socket.mojom', 'udp_socket.mojom.js');
  }
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', 'url_loader.mojom.js');
  }
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', 'url_loader_factory.mojom.js');
  }
  var websocket$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/websocket.mojom', 'websocket.mojom.js');
  }
  var proxy_resolver$ =
      mojo.internal.exposeNamespace('proxyResolver.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/proxy_resolver/public/mojom/proxy_resolver.mojom', '../../../proxy_resolver/public/mojom/proxy_resolver.mojom.js');
  }
  var restricted_cookie_manager$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/restricted_cookie_manager.mojom', 'restricted_cookie_manager.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var kBrowserProcessId = 0;
  var kInvalidProcessId = 0xffffffff;

  function NetworkContextParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContextParams.prototype.initDefaults_ = function() {
    this.contextName = null;
    this.userAgent = null;
    this.acceptLanguage = null;
    this.enableBrotli = true;
    this.restoreOldSessionCookies = false;
    this.persistSessionCookies = false;
    this.httpCacheEnabled = true;
    this.enableDataUrlSupport = false;
    this.enableFileUrlSupport = false;
    this.enableFtpUrlSupport = false;
    this.enforceChromeCtPolicy = false;
    this.http09OnNonDefaultPortsEnabled = false;
    this.pacQuickCheckEnabled = true;
    this.dangerouslyAllowPacAccessToSecureUrls = false;
    this.allowGssapiLibraryLoad = false;
    this.enableCertificateReporting = false;
    this.httpCacheMaxSize = 0;
    this.quicUserAgentId = null;
    this.proxyResolverFactory = new proxy_resolver$.ProxyResolverFactoryPtr();
    this.cookiePath = null;
    this.channelIdPath = null;
    this.httpCachePath = null;
    this.httpServerPropertiesPath = null;
    this.transportSecurityPersisterPath = null;
    this.initialSslConfig = null;
    this.sslConfigClientRequest = new bindings.InterfaceRequest();
    this.proxyConfigClientRequest = new bindings.InterfaceRequest();
    this.initialProxyConfig = null;
    this.proxyConfigPollerClient = new proxy_config_with_annotation$.ProxyConfigPollerClientPtr();
    this.gssapiLibraryName = null;
    this.ctLogs = null;
  };
  NetworkContextParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContextParams.generate = function(generator_) {
    var generated = new NetworkContextParams;
    generated.contextName = generator_.generateString(true);
    generated.userAgent = generator_.generateString(false);
    generated.acceptLanguage = generator_.generateString(false);
    generated.enableBrotli = generator_.generateBool();
    generated.quicUserAgentId = generator_.generateString(false);
    generated.proxyResolverFactory = generator_.generateInterface("proxyResolver.mojom.ProxyResolverFactory", true);
    generated.cookiePath = generator_.generateStruct(mojoBase.mojom.FilePath, true);
    generated.restoreOldSessionCookies = generator_.generateBool();
    generated.persistSessionCookies = generator_.generateBool();
    generated.channelIdPath = generator_.generateStruct(mojoBase.mojom.FilePath, true);
    generated.httpCacheEnabled = generator_.generateBool();
    generated.httpCacheMaxSize = generator_.generateInt32();
    generated.httpCachePath = generator_.generateStruct(mojoBase.mojom.FilePath, true);
    generated.httpServerPropertiesPath = generator_.generateStruct(mojoBase.mojom.FilePath, true);
    generated.transportSecurityPersisterPath = generator_.generateStruct(mojoBase.mojom.FilePath, true);
    generated.enableDataUrlSupport = generator_.generateBool();
    generated.enableFileUrlSupport = generator_.generateBool();
    generated.enableFtpUrlSupport = generator_.generateBool();
    generated.enforceChromeCtPolicy = generator_.generateBool();
    generated.http09OnNonDefaultPortsEnabled = generator_.generateBool();
    generated.initialSslConfig = generator_.generateStruct(network.mojom.SSLConfig, true);
    generated.sslConfigClientRequest = generator_.generateInterfaceRequest("network.mojom.SSLConfigClient", true);
    generated.initialProxyConfig = generator_.generateStruct(network.mojom.ProxyConfigWithAnnotation, true);
    generated.proxyConfigClientRequest = generator_.generateInterfaceRequest("network.mojom.ProxyConfigClient", true);
    generated.proxyConfigPollerClient = generator_.generateInterface("network.mojom.ProxyConfigPollerClient", true);
    generated.pacQuickCheckEnabled = generator_.generateBool();
    generated.dangerouslyAllowPacAccessToSecureUrls = generator_.generateBool();
    generated.allowGssapiLibraryLoad = generator_.generateBool();
    generated.gssapiLibraryName = generator_.generateString(false);
    generated.enableCertificateReporting = generator_.generateBool();
    generated.ctLogs = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.CTLogInfo, false);
    });
    return generated;
  };

  NetworkContextParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.contextName = mutator_.mutateString(this.contextName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.userAgent = mutator_.mutateString(this.userAgent, false);
    }
    if (mutator_.chooseMutateField()) {
      this.acceptLanguage = mutator_.mutateString(this.acceptLanguage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.enableBrotli = mutator_.mutateBool(this.enableBrotli);
    }
    if (mutator_.chooseMutateField()) {
      this.quicUserAgentId = mutator_.mutateString(this.quicUserAgentId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyResolverFactory = mutator_.mutateInterface(this.proxyResolverFactory, "proxyResolver.mojom.ProxyResolverFactory", true);
    }
    if (mutator_.chooseMutateField()) {
      this.cookiePath = mutator_.mutateStruct(mojoBase.mojom.FilePath, true);
    }
    if (mutator_.chooseMutateField()) {
      this.restoreOldSessionCookies = mutator_.mutateBool(this.restoreOldSessionCookies);
    }
    if (mutator_.chooseMutateField()) {
      this.persistSessionCookies = mutator_.mutateBool(this.persistSessionCookies);
    }
    if (mutator_.chooseMutateField()) {
      this.channelIdPath = mutator_.mutateStruct(mojoBase.mojom.FilePath, true);
    }
    if (mutator_.chooseMutateField()) {
      this.httpCacheEnabled = mutator_.mutateBool(this.httpCacheEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.httpCacheMaxSize = mutator_.mutateInt32(this.httpCacheMaxSize);
    }
    if (mutator_.chooseMutateField()) {
      this.httpCachePath = mutator_.mutateStruct(mojoBase.mojom.FilePath, true);
    }
    if (mutator_.chooseMutateField()) {
      this.httpServerPropertiesPath = mutator_.mutateStruct(mojoBase.mojom.FilePath, true);
    }
    if (mutator_.chooseMutateField()) {
      this.transportSecurityPersisterPath = mutator_.mutateStruct(mojoBase.mojom.FilePath, true);
    }
    if (mutator_.chooseMutateField()) {
      this.enableDataUrlSupport = mutator_.mutateBool(this.enableDataUrlSupport);
    }
    if (mutator_.chooseMutateField()) {
      this.enableFileUrlSupport = mutator_.mutateBool(this.enableFileUrlSupport);
    }
    if (mutator_.chooseMutateField()) {
      this.enableFtpUrlSupport = mutator_.mutateBool(this.enableFtpUrlSupport);
    }
    if (mutator_.chooseMutateField()) {
      this.enforceChromeCtPolicy = mutator_.mutateBool(this.enforceChromeCtPolicy);
    }
    if (mutator_.chooseMutateField()) {
      this.http09OnNonDefaultPortsEnabled = mutator_.mutateBool(this.http09OnNonDefaultPortsEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.initialSslConfig = mutator_.mutateStruct(network.mojom.SSLConfig, true);
    }
    if (mutator_.chooseMutateField()) {
      this.sslConfigClientRequest = mutator_.mutateInterfaceRequest(this.sslConfigClientRequest, "network.mojom.SSLConfigClient", true);
    }
    if (mutator_.chooseMutateField()) {
      this.initialProxyConfig = mutator_.mutateStruct(network.mojom.ProxyConfigWithAnnotation, true);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyConfigClientRequest = mutator_.mutateInterfaceRequest(this.proxyConfigClientRequest, "network.mojom.ProxyConfigClient", true);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyConfigPollerClient = mutator_.mutateInterface(this.proxyConfigPollerClient, "network.mojom.ProxyConfigPollerClient", true);
    }
    if (mutator_.chooseMutateField()) {
      this.pacQuickCheckEnabled = mutator_.mutateBool(this.pacQuickCheckEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.dangerouslyAllowPacAccessToSecureUrls = mutator_.mutateBool(this.dangerouslyAllowPacAccessToSecureUrls);
    }
    if (mutator_.chooseMutateField()) {
      this.allowGssapiLibraryLoad = mutator_.mutateBool(this.allowGssapiLibraryLoad);
    }
    if (mutator_.chooseMutateField()) {
      this.gssapiLibraryName = mutator_.mutateString(this.gssapiLibraryName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.enableCertificateReporting = mutator_.mutateBool(this.enableCertificateReporting);
    }
    if (mutator_.chooseMutateField()) {
      this.ctLogs = mutator_.mutateArray(this.ctLogs, function(val) {
        return mutator_.mutateStruct(network.mojom.CTLogInfo, false);
      });
    }
    return this;
  };
  NetworkContextParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.proxyResolverFactory !== null) {
      Array.prototype.push.apply(handles, ["proxyResolver.mojom.ProxyResolverFactoryPtr"]);
    }
    if (this.sslConfigClientRequest !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.SSLConfigClientRequest"]);
    }
    if (this.proxyConfigClientRequest !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.ProxyConfigClientRequest"]);
    }
    if (this.proxyConfigPollerClient !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.ProxyConfigPollerClientPtr"]);
    }
    return handles;
  };

  NetworkContextParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContextParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.proxyResolverFactory = handles[idx++];;
    this.sslConfigClientRequest = handles[idx++];;
    this.proxyConfigClientRequest = handles[idx++];;
    this.proxyConfigPollerClient = handles[idx++];;
    return idx;
  };

  NetworkContextParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 144}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.contextName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.userAgent
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.acceptLanguage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate NetworkContextParams.quicUserAgentId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.proxyResolverFactory
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 40, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.cookiePath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, file_path$.FilePath, true);
    if (err !== validator.validationError.NONE)
        return err;




    // validate NetworkContextParams.channelIdPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, file_path$.FilePath, true);
    if (err !== validator.validationError.NONE)
        return err;




    // validate NetworkContextParams.httpCachePath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, file_path$.FilePath, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.httpServerPropertiesPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, file_path$.FilePath, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.transportSecurityPersisterPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 80, file_path$.FilePath, true);
    if (err !== validator.validationError.NONE)
        return err;







    // validate NetworkContextParams.initialSslConfig
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 88, ssl_config$.SSLConfig, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.sslConfigClientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 96, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.initialProxyConfig
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 104, proxy_config_with_annotation$.ProxyConfigWithAnnotation, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.proxyConfigClientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 100, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContextParams.proxyConfigPollerClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 112, true);
    if (err !== validator.validationError.NONE)
        return err;





    // validate NetworkContextParams.gssapiLibraryName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 120, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate NetworkContextParams.ctLogs
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 128, 8, new codec.PointerTo(ct_log_info$.CTLogInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContextParams.encodedSize = codec.kStructHeaderSize + 136;

  NetworkContextParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContextParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.contextName = decoder.decodeStruct(codec.NullableString);
    val.userAgent = decoder.decodeStruct(codec.String);
    val.acceptLanguage = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.enableBrotli = (packed >> 0) & 1 ? true : false;
    val.restoreOldSessionCookies = (packed >> 1) & 1 ? true : false;
    val.persistSessionCookies = (packed >> 2) & 1 ? true : false;
    val.httpCacheEnabled = (packed >> 3) & 1 ? true : false;
    val.enableDataUrlSupport = (packed >> 4) & 1 ? true : false;
    val.enableFileUrlSupport = (packed >> 5) & 1 ? true : false;
    val.enableFtpUrlSupport = (packed >> 6) & 1 ? true : false;
    val.enforceChromeCtPolicy = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.http09OnNonDefaultPortsEnabled = (packed >> 0) & 1 ? true : false;
    val.pacQuickCheckEnabled = (packed >> 1) & 1 ? true : false;
    val.dangerouslyAllowPacAccessToSecureUrls = (packed >> 2) & 1 ? true : false;
    val.allowGssapiLibraryLoad = (packed >> 3) & 1 ? true : false;
    val.enableCertificateReporting = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    val.httpCacheMaxSize = decoder.decodeStruct(codec.Int32);
    val.quicUserAgentId = decoder.decodeStruct(codec.String);
    val.proxyResolverFactory = decoder.decodeStruct(new codec.NullableInterface(proxy_resolver$.ProxyResolverFactoryPtr));
    val.cookiePath = decoder.decodeStructPointer(file_path$.FilePath);
    val.channelIdPath = decoder.decodeStructPointer(file_path$.FilePath);
    val.httpCachePath = decoder.decodeStructPointer(file_path$.FilePath);
    val.httpServerPropertiesPath = decoder.decodeStructPointer(file_path$.FilePath);
    val.transportSecurityPersisterPath = decoder.decodeStructPointer(file_path$.FilePath);
    val.initialSslConfig = decoder.decodeStructPointer(ssl_config$.SSLConfig);
    val.sslConfigClientRequest = decoder.decodeStruct(codec.NullableInterfaceRequest);
    val.proxyConfigClientRequest = decoder.decodeStruct(codec.NullableInterfaceRequest);
    val.initialProxyConfig = decoder.decodeStructPointer(proxy_config_with_annotation$.ProxyConfigWithAnnotation);
    val.proxyConfigPollerClient = decoder.decodeStruct(new codec.NullableInterface(proxy_config_with_annotation$.ProxyConfigPollerClientPtr));
    val.gssapiLibraryName = decoder.decodeStruct(codec.String);
    val.ctLogs = decoder.decodeArrayPointer(new codec.PointerTo(ct_log_info$.CTLogInfo));
    return val;
  };

  NetworkContextParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContextParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.contextName);
    encoder.encodeStruct(codec.String, val.userAgent);
    encoder.encodeStruct(codec.String, val.acceptLanguage);
    packed = 0;
    packed |= (val.enableBrotli & 1) << 0
    packed |= (val.restoreOldSessionCookies & 1) << 1
    packed |= (val.persistSessionCookies & 1) << 2
    packed |= (val.httpCacheEnabled & 1) << 3
    packed |= (val.enableDataUrlSupport & 1) << 4
    packed |= (val.enableFileUrlSupport & 1) << 5
    packed |= (val.enableFtpUrlSupport & 1) << 6
    packed |= (val.enforceChromeCtPolicy & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.http09OnNonDefaultPortsEnabled & 1) << 0
    packed |= (val.pacQuickCheckEnabled & 1) << 1
    packed |= (val.dangerouslyAllowPacAccessToSecureUrls & 1) << 2
    packed |= (val.allowGssapiLibraryLoad & 1) << 3
    packed |= (val.enableCertificateReporting & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.httpCacheMaxSize);
    encoder.encodeStruct(codec.String, val.quicUserAgentId);
    encoder.encodeStruct(new codec.NullableInterface(proxy_resolver$.ProxyResolverFactoryPtr), val.proxyResolverFactory);
    encoder.encodeStructPointer(file_path$.FilePath, val.cookiePath);
    encoder.encodeStructPointer(file_path$.FilePath, val.channelIdPath);
    encoder.encodeStructPointer(file_path$.FilePath, val.httpCachePath);
    encoder.encodeStructPointer(file_path$.FilePath, val.httpServerPropertiesPath);
    encoder.encodeStructPointer(file_path$.FilePath, val.transportSecurityPersisterPath);
    encoder.encodeStructPointer(ssl_config$.SSLConfig, val.initialSslConfig);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.sslConfigClientRequest);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.proxyConfigClientRequest);
    encoder.encodeStructPointer(proxy_config_with_annotation$.ProxyConfigWithAnnotation, val.initialProxyConfig);
    encoder.encodeStruct(new codec.NullableInterface(proxy_config_with_annotation$.ProxyConfigPollerClientPtr), val.proxyConfigPollerClient);
    encoder.encodeStruct(codec.String, val.gssapiLibraryName);
    encoder.encodeArrayPointer(new codec.PointerTo(ct_log_info$.CTLogInfo), val.ctLogs);
  };
  function NetworkConditions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkConditions.prototype.initDefaults_ = function() {
    this.offline = false;
    this.latency = null;
    this.downloadThroughput = 0;
    this.uploadThroughput = 0;
  };
  NetworkConditions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkConditions.generate = function(generator_) {
    var generated = new NetworkConditions;
    generated.offline = generator_.generateBool();
    generated.latency = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.downloadThroughput = generator_.generateDouble();
    generated.uploadThroughput = generator_.generateDouble();
    return generated;
  };

  NetworkConditions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.offline = mutator_.mutateBool(this.offline);
    }
    if (mutator_.chooseMutateField()) {
      this.latency = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.downloadThroughput = mutator_.mutateDouble(this.downloadThroughput);
    }
    if (mutator_.chooseMutateField()) {
      this.uploadThroughput = mutator_.mutateDouble(this.uploadThroughput);
    }
    return this;
  };
  NetworkConditions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkConditions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkConditions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkConditions.validate = function(messageValidator, offset) {
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



    // validate NetworkConditions.latency
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  NetworkConditions.encodedSize = codec.kStructHeaderSize + 32;

  NetworkConditions.decode = function(decoder) {
    var packed;
    var val = new NetworkConditions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.offline = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.latency = decoder.decodeStructPointer(time$.TimeDelta);
    val.downloadThroughput = decoder.decodeStruct(codec.Double);
    val.uploadThroughput = decoder.decodeStruct(codec.Double);
    return val;
  };

  NetworkConditions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkConditions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.offline & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.latency);
    encoder.encodeStruct(codec.Double, val.downloadThroughput);
    encoder.encodeStruct(codec.Double, val.uploadThroughput);
  };
  function ClearDataFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  ClearDataFilter.Type = {};
  ClearDataFilter.Type.DELETE_MATCHES = 0;
  ClearDataFilter.Type.KEEP_MATCHES = ClearDataFilter.Type.DELETE_MATCHES + 1;

  ClearDataFilter.Type.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ClearDataFilter.Type.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  ClearDataFilter.prototype.initDefaults_ = function() {
    this.type = 0;
    this.domains = null;
    this.origins = null;
  };
  ClearDataFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClearDataFilter.generate = function(generator_) {
    var generated = new ClearDataFilter;
    generated.type = generator_.generateEnum(0, 1);
    generated.domains = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.origins = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Origin, false);
    });
    return generated;
  };

  ClearDataFilter.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.domains = mutator_.mutateArray(this.domains, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.origins = mutator_.mutateArray(this.origins, function(val) {
        return mutator_.mutateStruct(url.mojom.Origin, false);
      });
    }
    return this;
  };
  ClearDataFilter.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClearDataFilter.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClearDataFilter.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClearDataFilter.validate = function(messageValidator, offset) {
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


    // validate ClearDataFilter.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClearDataFilter.Type);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClearDataFilter.domains
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClearDataFilter.origins
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(origin$.Origin), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClearDataFilter.encodedSize = codec.kStructHeaderSize + 24;

  ClearDataFilter.decode = function(decoder) {
    var packed;
    var val = new ClearDataFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.domains = decoder.decodeArrayPointer(codec.String);
    val.origins = decoder.decodeArrayPointer(new codec.PointerTo(origin$.Origin));
    return val;
  };

  ClearDataFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClearDataFilter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.String, val.domains);
    encoder.encodeArrayPointer(new codec.PointerTo(origin$.Origin), val.origins);
  };
  function NetworkUsage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkUsage.prototype.initDefaults_ = function() {
    this.processId = 0;
    this.routingId = 0;
    this.totalBytesReceived = 0;
    this.totalBytesSent = 0;
  };
  NetworkUsage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkUsage.generate = function(generator_) {
    var generated = new NetworkUsage;
    generated.processId = generator_.generateUint32();
    generated.routingId = generator_.generateUint32();
    generated.totalBytesReceived = generator_.generateInt64();
    generated.totalBytesSent = generator_.generateInt64();
    return generated;
  };

  NetworkUsage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateUint32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateUint32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.totalBytesReceived = mutator_.mutateInt64(this.totalBytesReceived);
    }
    if (mutator_.chooseMutateField()) {
      this.totalBytesSent = mutator_.mutateInt64(this.totalBytesSent);
    }
    return this;
  };
  NetworkUsage.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkUsage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkUsage.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkUsage.validate = function(messageValidator, offset) {
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

  NetworkUsage.encodedSize = codec.kStructHeaderSize + 24;

  NetworkUsage.decode = function(decoder) {
    var packed;
    var val = new NetworkUsage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processId = decoder.decodeStruct(codec.Uint32);
    val.routingId = decoder.decodeStruct(codec.Uint32);
    val.totalBytesReceived = decoder.decodeStruct(codec.Int64);
    val.totalBytesSent = decoder.decodeStruct(codec.Int64);
    return val;
  };

  NetworkUsage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkUsage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.processId);
    encoder.encodeStruct(codec.Uint32, val.routingId);
    encoder.encodeStruct(codec.Int64, val.totalBytesReceived);
    encoder.encodeStruct(codec.Int64, val.totalBytesSent);
  };
  function URLLoaderFactoryParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderFactoryParams.prototype.initDefaults_ = function() {
    this.processId = kInvalidProcessId;
    this.isCorbEnabled = true;
    this.corbExcludedInitiatorScheme = null;
  };
  URLLoaderFactoryParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  URLLoaderFactoryParams.generate = function(generator_) {
    var generated = new URLLoaderFactoryParams;
    generated.processId = generator_.generateUint32();
    generated.isCorbEnabled = generator_.generateBool();
    generated.corbExcludedInitiatorScheme = generator_.generateString(false);
    return generated;
  };

  URLLoaderFactoryParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateUint32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.isCorbEnabled = mutator_.mutateBool(this.isCorbEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.corbExcludedInitiatorScheme = mutator_.mutateString(this.corbExcludedInitiatorScheme, false);
    }
    return this;
  };
  URLLoaderFactoryParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  URLLoaderFactoryParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  URLLoaderFactoryParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  URLLoaderFactoryParams.validate = function(messageValidator, offset) {
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




    // validate URLLoaderFactoryParams.corbExcludedInitiatorScheme
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderFactoryParams.encodedSize = codec.kStructHeaderSize + 16;

  URLLoaderFactoryParams.decode = function(decoder) {
    var packed;
    var val = new URLLoaderFactoryParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.isCorbEnabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.corbExcludedInitiatorScheme = decoder.decodeStruct(codec.String);
    return val;
  };

  URLLoaderFactoryParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderFactoryParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.processId);
    packed = 0;
    packed |= (val.isCorbEnabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.corbExcludedInitiatorScheme);
  };
  function NetLogExporter_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Start_Params.prototype.initDefaults_ = function() {
    this.destination = null;
    this.extraConstants = null;
    this.captureMode = 0;
    this.maxFileSize = 0;
  };
  NetLogExporter_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetLogExporter_Start_Params.generate = function(generator_) {
    var generated = new NetLogExporter_Start_Params;
    generated.destination = generator_.generateStruct(mojoBase.mojom.File, false);
    generated.extraConstants = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    generated.captureMode = generator_.generateEnum(0, 2);
    generated.maxFileSize = generator_.generateUint64();
    return generated;
  };

  NetLogExporter_Start_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.destination = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    if (mutator_.chooseMutateField()) {
      this.extraConstants = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    if (mutator_.chooseMutateField()) {
      this.captureMode = mutator_.mutateEnum(this.captureMode, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.maxFileSize = mutator_.mutateUint64(this.maxFileSize);
    }
    return this;
  };
  NetLogExporter_Start_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.destination !== null) {
      Array.prototype.push.apply(handles, this.destination.getHandleDeps());
    }
    return handles;
  };

  NetLogExporter_Start_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetLogExporter_Start_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.destination.setHandlesInternal_(handles, idx);
    return idx;
  };

  NetLogExporter_Start_Params.validate = function(messageValidator, offset) {
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


    // validate NetLogExporter_Start_Params.destination
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogExporter_Start_Params.extraConstants
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogExporter_Start_Params.captureMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, NetLogExporter.CaptureMode);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NetLogExporter_Start_Params.encodedSize = codec.kStructHeaderSize + 32;

  NetLogExporter_Start_Params.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.destination = decoder.decodeStructPointer(file$.File);
    val.extraConstants = decoder.decodeStructPointer(values$.DictionaryValue);
    val.captureMode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxFileSize = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  NetLogExporter_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.destination);
    encoder.encodeStructPointer(values$.DictionaryValue, val.extraConstants);
    encoder.encodeStruct(codec.Int32, val.captureMode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.maxFileSize);
  };
  function NetLogExporter_Start_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Start_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  NetLogExporter_Start_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetLogExporter_Start_ResponseParams.generate = function(generator_) {
    var generated = new NetLogExporter_Start_ResponseParams;
    generated.netError = generator_.generateInt32();
    return generated;
  };

  NetLogExporter_Start_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    return this;
  };
  NetLogExporter_Start_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetLogExporter_Start_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetLogExporter_Start_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetLogExporter_Start_ResponseParams.validate = function(messageValidator, offset) {
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

  NetLogExporter_Start_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetLogExporter_Start_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Start_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetLogExporter_Start_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Start_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetLogExporter_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Stop_Params.prototype.initDefaults_ = function() {
    this.polledValues = null;
  };
  NetLogExporter_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetLogExporter_Stop_Params.generate = function(generator_) {
    var generated = new NetLogExporter_Stop_Params;
    generated.polledValues = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    return generated;
  };

  NetLogExporter_Stop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.polledValues = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    return this;
  };
  NetLogExporter_Stop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetLogExporter_Stop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetLogExporter_Stop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetLogExporter_Stop_Params.validate = function(messageValidator, offset) {
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


    // validate NetLogExporter_Stop_Params.polledValues
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetLogExporter_Stop_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetLogExporter_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.polledValues = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  NetLogExporter_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Stop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(values$.DictionaryValue, val.polledValues);
  };
  function NetLogExporter_Stop_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Stop_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  NetLogExporter_Stop_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetLogExporter_Stop_ResponseParams.generate = function(generator_) {
    var generated = new NetLogExporter_Stop_ResponseParams;
    generated.netError = generator_.generateInt32();
    return generated;
  };

  NetLogExporter_Stop_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    return this;
  };
  NetLogExporter_Stop_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetLogExporter_Stop_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetLogExporter_Stop_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetLogExporter_Stop_ResponseParams.validate = function(messageValidator, offset) {
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

  NetLogExporter_Stop_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetLogExporter_Stop_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Stop_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetLogExporter_Stop_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Stop_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_CreateURLLoaderFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateURLLoaderFactory_Params.prototype.initDefaults_ = function() {
    this.urlLoaderFactory = new bindings.InterfaceRequest();
    this.params = null;
  };
  NetworkContext_CreateURLLoaderFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateURLLoaderFactory_Params.generate = function(generator_) {
    var generated = new NetworkContext_CreateURLLoaderFactory_Params;
    generated.urlLoaderFactory = generator_.generateInterfaceRequest("network.mojom.URLLoaderFactory", false);
    generated.params = generator_.generateStruct(network.mojom.URLLoaderFactoryParams, false);
    return generated;
  };

  NetworkContext_CreateURLLoaderFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urlLoaderFactory = mutator_.mutateInterfaceRequest(this.urlLoaderFactory, "network.mojom.URLLoaderFactory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(network.mojom.URLLoaderFactoryParams, false);
    }
    return this;
  };
  NetworkContext_CreateURLLoaderFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.urlLoaderFactory !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryRequest"]);
    }
    return handles;
  };

  NetworkContext_CreateURLLoaderFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateURLLoaderFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.urlLoaderFactory = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateURLLoaderFactory_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_CreateURLLoaderFactory_Params.urlLoaderFactory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateURLLoaderFactory_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, URLLoaderFactoryParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateURLLoaderFactory_Params.encodedSize = codec.kStructHeaderSize + 16;

  NetworkContext_CreateURLLoaderFactory_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateURLLoaderFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.urlLoaderFactory = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.params = decoder.decodeStructPointer(URLLoaderFactoryParams);
    return val;
  };

  NetworkContext_CreateURLLoaderFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateURLLoaderFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.urlLoaderFactory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(URLLoaderFactoryParams, val.params);
  };
  function NetworkContext_GetCookieManager_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_GetCookieManager_Params.prototype.initDefaults_ = function() {
    this.cookieManager = new bindings.InterfaceRequest();
  };
  NetworkContext_GetCookieManager_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_GetCookieManager_Params.generate = function(generator_) {
    var generated = new NetworkContext_GetCookieManager_Params;
    generated.cookieManager = generator_.generateInterfaceRequest("network.mojom.CookieManager", false);
    return generated;
  };

  NetworkContext_GetCookieManager_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cookieManager = mutator_.mutateInterfaceRequest(this.cookieManager, "network.mojom.CookieManager", false);
    }
    return this;
  };
  NetworkContext_GetCookieManager_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cookieManager !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.CookieManagerRequest"]);
    }
    return handles;
  };

  NetworkContext_GetCookieManager_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_GetCookieManager_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cookieManager = handles[idx++];;
    return idx;
  };

  NetworkContext_GetCookieManager_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_GetCookieManager_Params.cookieManager
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_GetCookieManager_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_GetCookieManager_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_GetCookieManager_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cookieManager = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_GetCookieManager_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_GetCookieManager_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.cookieManager);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_GetRestrictedCookieManager_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_GetRestrictedCookieManager_Params.prototype.initDefaults_ = function() {
    this.restrictedCookieManager = new bindings.InterfaceRequest();
    this.renderProcessId = 0;
    this.renderFrameId = 0;
  };
  NetworkContext_GetRestrictedCookieManager_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_GetRestrictedCookieManager_Params.generate = function(generator_) {
    var generated = new NetworkContext_GetRestrictedCookieManager_Params;
    generated.restrictedCookieManager = generator_.generateInterfaceRequest("network.mojom.RestrictedCookieManager", false);
    generated.renderProcessId = generator_.generateInt32();
    generated.renderFrameId = generator_.generateInt32();
    return generated;
  };

  NetworkContext_GetRestrictedCookieManager_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.restrictedCookieManager = mutator_.mutateInterfaceRequest(this.restrictedCookieManager, "network.mojom.RestrictedCookieManager", false);
    }
    if (mutator_.chooseMutateField()) {
      this.renderProcessId = mutator_.mutateInt32(this.renderProcessId);
    }
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    return this;
  };
  NetworkContext_GetRestrictedCookieManager_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.restrictedCookieManager !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.RestrictedCookieManagerRequest"]);
    }
    return handles;
  };

  NetworkContext_GetRestrictedCookieManager_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_GetRestrictedCookieManager_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.restrictedCookieManager = handles[idx++];;
    return idx;
  };

  NetworkContext_GetRestrictedCookieManager_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_GetRestrictedCookieManager_Params.restrictedCookieManager
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  NetworkContext_GetRestrictedCookieManager_Params.encodedSize = codec.kStructHeaderSize + 16;

  NetworkContext_GetRestrictedCookieManager_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_GetRestrictedCookieManager_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.restrictedCookieManager = decoder.decodeStruct(codec.InterfaceRequest);
    val.renderProcessId = decoder.decodeStruct(codec.Int32);
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_GetRestrictedCookieManager_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_GetRestrictedCookieManager_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.restrictedCookieManager);
    encoder.encodeStruct(codec.Int32, val.renderProcessId);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_ClearNetworkingHistorySince_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearNetworkingHistorySince_Params.prototype.initDefaults_ = function() {
    this.startTime = null;
  };
  NetworkContext_ClearNetworkingHistorySince_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearNetworkingHistorySince_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearNetworkingHistorySince_Params;
    generated.startTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  NetworkContext_ClearNetworkingHistorySince_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.startTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  NetworkContext_ClearNetworkingHistorySince_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearNetworkingHistorySince_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearNetworkingHistorySince_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearNetworkingHistorySince_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearNetworkingHistorySince_Params.startTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearNetworkingHistorySince_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_ClearNetworkingHistorySince_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearNetworkingHistorySince_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  NetworkContext_ClearNetworkingHistorySince_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearNetworkingHistorySince_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.startTime);
  };
  function NetworkContext_ClearNetworkingHistorySince_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearNetworkingHistorySince_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearNetworkingHistorySince_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearNetworkingHistorySince_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearNetworkingHistorySince_ResponseParams;
    return generated;
  };

  NetworkContext_ClearNetworkingHistorySince_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearNetworkingHistorySince_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearNetworkingHistorySince_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearNetworkingHistorySince_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearNetworkingHistorySince_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearNetworkingHistorySince_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearNetworkingHistorySince_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearNetworkingHistorySince_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearNetworkingHistorySince_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearNetworkingHistorySince_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_ClearHttpCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearHttpCache_Params.prototype.initDefaults_ = function() {
    this.startTime = null;
    this.endTime = null;
    this.filter = null;
  };
  NetworkContext_ClearHttpCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearHttpCache_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearHttpCache_Params;
    generated.startTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.endTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.filter = generator_.generateStruct(network.mojom.ClearDataFilter, true);
    return generated;
  };

  NetworkContext_ClearHttpCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.startTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.endTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateStruct(network.mojom.ClearDataFilter, true);
    }
    return this;
  };
  NetworkContext_ClearHttpCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearHttpCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearHttpCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearHttpCache_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearHttpCache_Params.startTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_ClearHttpCache_Params.endTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_ClearHttpCache_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ClearDataFilter, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearHttpCache_Params.encodedSize = codec.kStructHeaderSize + 24;

  NetworkContext_ClearHttpCache_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearHttpCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startTime = decoder.decodeStructPointer(time$.Time);
    val.endTime = decoder.decodeStructPointer(time$.Time);
    val.filter = decoder.decodeStructPointer(ClearDataFilter);
    return val;
  };

  NetworkContext_ClearHttpCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearHttpCache_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.startTime);
    encoder.encodeStructPointer(time$.Time, val.endTime);
    encoder.encodeStructPointer(ClearDataFilter, val.filter);
  };
  function NetworkContext_ClearHttpCache_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearHttpCache_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearHttpCache_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearHttpCache_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearHttpCache_ResponseParams;
    return generated;
  };

  NetworkContext_ClearHttpCache_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearHttpCache_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearHttpCache_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearHttpCache_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearHttpCache_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearHttpCache_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearHttpCache_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearHttpCache_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearHttpCache_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearHttpCache_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_ClearChannelIds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearChannelIds_Params.prototype.initDefaults_ = function() {
    this.startTime = null;
    this.endTime = null;
    this.filter = null;
  };
  NetworkContext_ClearChannelIds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearChannelIds_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearChannelIds_Params;
    generated.startTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.endTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.filter = generator_.generateStruct(network.mojom.ClearDataFilter, true);
    return generated;
  };

  NetworkContext_ClearChannelIds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.startTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.endTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateStruct(network.mojom.ClearDataFilter, true);
    }
    return this;
  };
  NetworkContext_ClearChannelIds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearChannelIds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearChannelIds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearChannelIds_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearChannelIds_Params.startTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_ClearChannelIds_Params.endTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_ClearChannelIds_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ClearDataFilter, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearChannelIds_Params.encodedSize = codec.kStructHeaderSize + 24;

  NetworkContext_ClearChannelIds_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearChannelIds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startTime = decoder.decodeStructPointer(time$.Time);
    val.endTime = decoder.decodeStructPointer(time$.Time);
    val.filter = decoder.decodeStructPointer(ClearDataFilter);
    return val;
  };

  NetworkContext_ClearChannelIds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearChannelIds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.startTime);
    encoder.encodeStructPointer(time$.Time, val.endTime);
    encoder.encodeStructPointer(ClearDataFilter, val.filter);
  };
  function NetworkContext_ClearChannelIds_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearChannelIds_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearChannelIds_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearChannelIds_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearChannelIds_ResponseParams;
    return generated;
  };

  NetworkContext_ClearChannelIds_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearChannelIds_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearChannelIds_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearChannelIds_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearChannelIds_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearChannelIds_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearChannelIds_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearChannelIds_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearChannelIds_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearChannelIds_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_ClearHttpAuthCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearHttpAuthCache_Params.prototype.initDefaults_ = function() {
    this.startTime = null;
  };
  NetworkContext_ClearHttpAuthCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearHttpAuthCache_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearHttpAuthCache_Params;
    generated.startTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  NetworkContext_ClearHttpAuthCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.startTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  NetworkContext_ClearHttpAuthCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearHttpAuthCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearHttpAuthCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearHttpAuthCache_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearHttpAuthCache_Params.startTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearHttpAuthCache_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_ClearHttpAuthCache_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearHttpAuthCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.startTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  NetworkContext_ClearHttpAuthCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearHttpAuthCache_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.startTime);
  };
  function NetworkContext_ClearHttpAuthCache_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearHttpAuthCache_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearHttpAuthCache_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearHttpAuthCache_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearHttpAuthCache_ResponseParams;
    return generated;
  };

  NetworkContext_ClearHttpAuthCache_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearHttpAuthCache_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearHttpAuthCache_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearHttpAuthCache_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearHttpAuthCache_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearHttpAuthCache_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearHttpAuthCache_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearHttpAuthCache_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearHttpAuthCache_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearHttpAuthCache_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_ClearReportingCacheReports_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearReportingCacheReports_Params.prototype.initDefaults_ = function() {
    this.filter = null;
  };
  NetworkContext_ClearReportingCacheReports_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearReportingCacheReports_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearReportingCacheReports_Params;
    generated.filter = generator_.generateStruct(network.mojom.ClearDataFilter, true);
    return generated;
  };

  NetworkContext_ClearReportingCacheReports_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateStruct(network.mojom.ClearDataFilter, true);
    }
    return this;
  };
  NetworkContext_ClearReportingCacheReports_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearReportingCacheReports_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearReportingCacheReports_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearReportingCacheReports_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearReportingCacheReports_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ClearDataFilter, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearReportingCacheReports_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_ClearReportingCacheReports_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearReportingCacheReports_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filter = decoder.decodeStructPointer(ClearDataFilter);
    return val;
  };

  NetworkContext_ClearReportingCacheReports_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearReportingCacheReports_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ClearDataFilter, val.filter);
  };
  function NetworkContext_ClearReportingCacheReports_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearReportingCacheReports_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearReportingCacheReports_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearReportingCacheReports_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearReportingCacheReports_ResponseParams;
    return generated;
  };

  NetworkContext_ClearReportingCacheReports_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearReportingCacheReports_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearReportingCacheReports_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearReportingCacheReports_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearReportingCacheReports_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearReportingCacheReports_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearReportingCacheReports_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearReportingCacheReports_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearReportingCacheReports_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearReportingCacheReports_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_ClearReportingCacheClients_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearReportingCacheClients_Params.prototype.initDefaults_ = function() {
    this.filter = null;
  };
  NetworkContext_ClearReportingCacheClients_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearReportingCacheClients_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearReportingCacheClients_Params;
    generated.filter = generator_.generateStruct(network.mojom.ClearDataFilter, true);
    return generated;
  };

  NetworkContext_ClearReportingCacheClients_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateStruct(network.mojom.ClearDataFilter, true);
    }
    return this;
  };
  NetworkContext_ClearReportingCacheClients_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearReportingCacheClients_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearReportingCacheClients_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearReportingCacheClients_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearReportingCacheClients_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ClearDataFilter, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearReportingCacheClients_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_ClearReportingCacheClients_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearReportingCacheClients_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filter = decoder.decodeStructPointer(ClearDataFilter);
    return val;
  };

  NetworkContext_ClearReportingCacheClients_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearReportingCacheClients_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ClearDataFilter, val.filter);
  };
  function NetworkContext_ClearReportingCacheClients_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearReportingCacheClients_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearReportingCacheClients_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearReportingCacheClients_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearReportingCacheClients_ResponseParams;
    return generated;
  };

  NetworkContext_ClearReportingCacheClients_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearReportingCacheClients_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearReportingCacheClients_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearReportingCacheClients_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearReportingCacheClients_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearReportingCacheClients_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearReportingCacheClients_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearReportingCacheClients_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearReportingCacheClients_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearReportingCacheClients_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_ClearNetworkErrorLogging_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearNetworkErrorLogging_Params.prototype.initDefaults_ = function() {
    this.filter = null;
  };
  NetworkContext_ClearNetworkErrorLogging_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearNetworkErrorLogging_Params.generate = function(generator_) {
    var generated = new NetworkContext_ClearNetworkErrorLogging_Params;
    generated.filter = generator_.generateStruct(network.mojom.ClearDataFilter, true);
    return generated;
  };

  NetworkContext_ClearNetworkErrorLogging_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateStruct(network.mojom.ClearDataFilter, true);
    }
    return this;
  };
  NetworkContext_ClearNetworkErrorLogging_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearNetworkErrorLogging_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearNetworkErrorLogging_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearNetworkErrorLogging_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_ClearNetworkErrorLogging_Params.filter
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ClearDataFilter, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_ClearNetworkErrorLogging_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_ClearNetworkErrorLogging_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearNetworkErrorLogging_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filter = decoder.decodeStructPointer(ClearDataFilter);
    return val;
  };

  NetworkContext_ClearNetworkErrorLogging_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearNetworkErrorLogging_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ClearDataFilter, val.filter);
  };
  function NetworkContext_ClearNetworkErrorLogging_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_ClearNetworkErrorLogging_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_ClearNetworkErrorLogging_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_ClearNetworkErrorLogging_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_ClearNetworkErrorLogging_ResponseParams;
    return generated;
  };

  NetworkContext_ClearNetworkErrorLogging_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_ClearNetworkErrorLogging_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_ClearNetworkErrorLogging_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_ClearNetworkErrorLogging_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_ClearNetworkErrorLogging_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_ClearNetworkErrorLogging_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_ClearNetworkErrorLogging_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_ClearNetworkErrorLogging_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_ClearNetworkErrorLogging_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_ClearNetworkErrorLogging_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_SetNetworkConditions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_SetNetworkConditions_Params.prototype.initDefaults_ = function() {
    this.profileId = null;
    this.conditions = null;
  };
  NetworkContext_SetNetworkConditions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_SetNetworkConditions_Params.generate = function(generator_) {
    var generated = new NetworkContext_SetNetworkConditions_Params;
    generated.profileId = generator_.generateString(false);
    generated.conditions = generator_.generateStruct(network.mojom.NetworkConditions, true);
    return generated;
  };

  NetworkContext_SetNetworkConditions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.profileId = mutator_.mutateString(this.profileId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.conditions = mutator_.mutateStruct(network.mojom.NetworkConditions, true);
    }
    return this;
  };
  NetworkContext_SetNetworkConditions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_SetNetworkConditions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_SetNetworkConditions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_SetNetworkConditions_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_SetNetworkConditions_Params.profileId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_SetNetworkConditions_Params.conditions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, NetworkConditions, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_SetNetworkConditions_Params.encodedSize = codec.kStructHeaderSize + 16;

  NetworkContext_SetNetworkConditions_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_SetNetworkConditions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.profileId = decoder.decodeStruct(codec.String);
    val.conditions = decoder.decodeStructPointer(NetworkConditions);
    return val;
  };

  NetworkContext_SetNetworkConditions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_SetNetworkConditions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.profileId);
    encoder.encodeStructPointer(NetworkConditions, val.conditions);
  };
  function NetworkContext_SetAcceptLanguage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_SetAcceptLanguage_Params.prototype.initDefaults_ = function() {
    this.newAcceptLanguage = null;
  };
  NetworkContext_SetAcceptLanguage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_SetAcceptLanguage_Params.generate = function(generator_) {
    var generated = new NetworkContext_SetAcceptLanguage_Params;
    generated.newAcceptLanguage = generator_.generateString(false);
    return generated;
  };

  NetworkContext_SetAcceptLanguage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.newAcceptLanguage = mutator_.mutateString(this.newAcceptLanguage, false);
    }
    return this;
  };
  NetworkContext_SetAcceptLanguage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_SetAcceptLanguage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_SetAcceptLanguage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_SetAcceptLanguage_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_SetAcceptLanguage_Params.newAcceptLanguage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_SetAcceptLanguage_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_SetAcceptLanguage_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_SetAcceptLanguage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.newAcceptLanguage = decoder.decodeStruct(codec.String);
    return val;
  };

  NetworkContext_SetAcceptLanguage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_SetAcceptLanguage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.newAcceptLanguage);
  };
  function NetworkContext_SetCTPolicy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_SetCTPolicy_Params.prototype.initDefaults_ = function() {
    this.requiredHosts = null;
    this.excludedHosts = null;
    this.excludedSpkis = null;
    this.excludedLegacySpkis = null;
  };
  NetworkContext_SetCTPolicy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_SetCTPolicy_Params.generate = function(generator_) {
    var generated = new NetworkContext_SetCTPolicy_Params;
    generated.requiredHosts = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.excludedHosts = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.excludedSpkis = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.excludedLegacySpkis = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  NetworkContext_SetCTPolicy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requiredHosts = mutator_.mutateArray(this.requiredHosts, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.excludedHosts = mutator_.mutateArray(this.excludedHosts, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.excludedSpkis = mutator_.mutateArray(this.excludedSpkis, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.excludedLegacySpkis = mutator_.mutateArray(this.excludedLegacySpkis, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  NetworkContext_SetCTPolicy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_SetCTPolicy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_SetCTPolicy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_SetCTPolicy_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_SetCTPolicy_Params.requiredHosts
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_SetCTPolicy_Params.excludedHosts
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_SetCTPolicy_Params.excludedSpkis
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_SetCTPolicy_Params.excludedLegacySpkis
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_SetCTPolicy_Params.encodedSize = codec.kStructHeaderSize + 32;

  NetworkContext_SetCTPolicy_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_SetCTPolicy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requiredHosts = decoder.decodeArrayPointer(codec.String);
    val.excludedHosts = decoder.decodeArrayPointer(codec.String);
    val.excludedSpkis = decoder.decodeArrayPointer(codec.String);
    val.excludedLegacySpkis = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  NetworkContext_SetCTPolicy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_SetCTPolicy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.requiredHosts);
    encoder.encodeArrayPointer(codec.String, val.excludedHosts);
    encoder.encodeArrayPointer(codec.String, val.excludedSpkis);
    encoder.encodeArrayPointer(codec.String, val.excludedLegacySpkis);
  };
  function NetworkContext_CreateUDPSocket_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateUDPSocket_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.receiver = new udp_socket$.UDPSocketReceiverPtr();
  };
  NetworkContext_CreateUDPSocket_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateUDPSocket_Params.generate = function(generator_) {
    var generated = new NetworkContext_CreateUDPSocket_Params;
    generated.request = generator_.generateInterfaceRequest("network.mojom.UDPSocket", false);
    generated.receiver = generator_.generateInterface("network.mojom.UDPSocketReceiver", true);
    return generated;
  };

  NetworkContext_CreateUDPSocket_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "network.mojom.UDPSocket", false);
    }
    if (mutator_.chooseMutateField()) {
      this.receiver = mutator_.mutateInterface(this.receiver, "network.mojom.UDPSocketReceiver", true);
    }
    return this;
  };
  NetworkContext_CreateUDPSocket_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.UDPSocketRequest"]);
    }
    if (this.receiver !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.UDPSocketReceiverPtr"]);
    }
    return handles;
  };

  NetworkContext_CreateUDPSocket_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateUDPSocket_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    this.receiver = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateUDPSocket_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_CreateUDPSocket_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateUDPSocket_Params.receiver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateUDPSocket_Params.encodedSize = codec.kStructHeaderSize + 16;

  NetworkContext_CreateUDPSocket_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateUDPSocket_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    val.receiver = decoder.decodeStruct(new codec.NullableInterface(udp_socket$.UDPSocketReceiverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_CreateUDPSocket_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateUDPSocket_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.encodeStruct(new codec.NullableInterface(udp_socket$.UDPSocketReceiverPtr), val.receiver);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_CreateTCPServerSocket_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateTCPServerSocket_Params.prototype.initDefaults_ = function() {
    this.localAddr = null;
    this.backlog = 0;
    this.socket = new bindings.InterfaceRequest();
    this.trafficAnnotation = null;
  };
  NetworkContext_CreateTCPServerSocket_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateTCPServerSocket_Params.generate = function(generator_) {
    var generated = new NetworkContext_CreateTCPServerSocket_Params;
    generated.localAddr = generator_.generateStruct(net.interfaces.IPEndPoint, false);
    generated.backlog = generator_.generateUint32();
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    generated.socket = generator_.generateInterfaceRequest("network.mojom.TCPServerSocket", false);
    return generated;
  };

  NetworkContext_CreateTCPServerSocket_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.localAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, false);
    }
    if (mutator_.chooseMutateField()) {
      this.backlog = mutator_.mutateUint32(this.backlog);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    if (mutator_.chooseMutateField()) {
      this.socket = mutator_.mutateInterfaceRequest(this.socket, "network.mojom.TCPServerSocket", false);
    }
    return this;
  };
  NetworkContext_CreateTCPServerSocket_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.socket !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.TCPServerSocketRequest"]);
    }
    return handles;
  };

  NetworkContext_CreateTCPServerSocket_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateTCPServerSocket_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.socket = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateTCPServerSocket_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_CreateTCPServerSocket_Params.localAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_endpoint$.IPEndPoint, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate NetworkContext_CreateTCPServerSocket_Params.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPServerSocket_Params.socket
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateTCPServerSocket_Params.encodedSize = codec.kStructHeaderSize + 24;

  NetworkContext_CreateTCPServerSocket_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateTCPServerSocket_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.localAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.backlog = decoder.decodeStruct(codec.Uint32);
    val.socket = decoder.decodeStruct(codec.InterfaceRequest);
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    return val;
  };

  NetworkContext_CreateTCPServerSocket_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateTCPServerSocket_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddr);
    encoder.encodeStruct(codec.Uint32, val.backlog);
    encoder.encodeStruct(codec.InterfaceRequest, val.socket);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
  };
  function NetworkContext_CreateTCPServerSocket_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateTCPServerSocket_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.localAddrOut = null;
  };
  NetworkContext_CreateTCPServerSocket_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateTCPServerSocket_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_CreateTCPServerSocket_ResponseParams;
    generated.result = generator_.generateInt32();
    generated.localAddrOut = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    return generated;
  };

  NetworkContext_CreateTCPServerSocket_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    if (mutator_.chooseMutateField()) {
      this.localAddrOut = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    return this;
  };
  NetworkContext_CreateTCPServerSocket_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_CreateTCPServerSocket_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateTCPServerSocket_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_CreateTCPServerSocket_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate NetworkContext_CreateTCPServerSocket_ResponseParams.localAddrOut
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateTCPServerSocket_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  NetworkContext_CreateTCPServerSocket_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateTCPServerSocket_ResponseParams();
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

  NetworkContext_CreateTCPServerSocket_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateTCPServerSocket_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddrOut);
  };
  function NetworkContext_CreateTCPConnectedSocket_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateTCPConnectedSocket_Params.prototype.initDefaults_ = function() {
    this.localAddr = null;
    this.remoteAddrList = null;
    this.trafficAnnotation = null;
    this.socket = new bindings.InterfaceRequest();
    this.observer = new tcp_socket$.SocketObserverPtr();
  };
  NetworkContext_CreateTCPConnectedSocket_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateTCPConnectedSocket_Params.generate = function(generator_) {
    var generated = new NetworkContext_CreateTCPConnectedSocket_Params;
    generated.localAddr = generator_.generateStruct(net.interfaces.IPEndPoint, true);
    generated.remoteAddrList = generator_.generateStruct(net.interfaces.AddressList, false);
    generated.trafficAnnotation = generator_.generateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    generated.socket = generator_.generateInterfaceRequest("network.mojom.TCPConnectedSocket", false);
    generated.observer = generator_.generateInterface("network.mojom.SocketObserver", true);
    return generated;
  };

  NetworkContext_CreateTCPConnectedSocket_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.localAddr = mutator_.mutateStruct(net.interfaces.IPEndPoint, true);
    }
    if (mutator_.chooseMutateField()) {
      this.remoteAddrList = mutator_.mutateStruct(net.interfaces.AddressList, false);
    }
    if (mutator_.chooseMutateField()) {
      this.trafficAnnotation = mutator_.mutateStruct(network.mojom.MutableNetworkTrafficAnnotationTag, false);
    }
    if (mutator_.chooseMutateField()) {
      this.socket = mutator_.mutateInterfaceRequest(this.socket, "network.mojom.TCPConnectedSocket", false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "network.mojom.SocketObserver", true);
    }
    return this;
  };
  NetworkContext_CreateTCPConnectedSocket_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.socket !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.TCPConnectedSocketRequest"]);
    }
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.SocketObserverPtr"]);
    }
    return handles;
  };

  NetworkContext_CreateTCPConnectedSocket_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateTCPConnectedSocket_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.socket = handles[idx++];;
    this.observer = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateTCPConnectedSocket_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPConnectedSocket_Params.localAddr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_endpoint$.IPEndPoint, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPConnectedSocket_Params.remoteAddrList
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, address_list$.AddressList, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPConnectedSocket_Params.trafficAnnotation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPConnectedSocket_Params.socket
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPConnectedSocket_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 28, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateTCPConnectedSocket_Params.encodedSize = codec.kStructHeaderSize + 40;

  NetworkContext_CreateTCPConnectedSocket_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateTCPConnectedSocket_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.localAddr = decoder.decodeStructPointer(ip_endpoint$.IPEndPoint);
    val.remoteAddrList = decoder.decodeStructPointer(address_list$.AddressList);
    val.trafficAnnotation = decoder.decodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag);
    val.socket = decoder.decodeStruct(codec.InterfaceRequest);
    val.observer = decoder.decodeStruct(new codec.NullableInterface(tcp_socket$.SocketObserverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_CreateTCPConnectedSocket_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateTCPConnectedSocket_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_endpoint$.IPEndPoint, val.localAddr);
    encoder.encodeStructPointer(address_list$.AddressList, val.remoteAddrList);
    encoder.encodeStructPointer(mutable_network_traffic_annotation_tag$.MutableNetworkTrafficAnnotationTag, val.trafficAnnotation);
    encoder.encodeStruct(codec.InterfaceRequest, val.socket);
    encoder.encodeStruct(new codec.NullableInterface(tcp_socket$.SocketObserverPtr), val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_CreateTCPConnectedSocket_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateTCPConnectedSocket_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.receiveStream = null;
    this.sendStream = null;
  };
  NetworkContext_CreateTCPConnectedSocket_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateTCPConnectedSocket_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_CreateTCPConnectedSocket_ResponseParams;
    generated.result = generator_.generateInt32();
    generated.receiveStream = generator_.generateDataPipeConsumer(true);
    generated.sendStream = generator_.generateDataPipeProducer(true);
    return generated;
  };

  NetworkContext_CreateTCPConnectedSocket_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateInt32(this.result);
    }
    if (mutator_.chooseMutateField()) {
      this.receiveStream = mutator_.mutateDataPipeConsumer(this.receiveStream, true);
    }
    if (mutator_.chooseMutateField()) {
      this.sendStream = mutator_.mutateDataPipeProducer(this.sendStream, true);
    }
    return this;
  };
  NetworkContext_CreateTCPConnectedSocket_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.receiveStream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.sendStream !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_producer>"]);
    }
    return handles;
  };

  NetworkContext_CreateTCPConnectedSocket_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateTCPConnectedSocket_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.receiveStream = handles[idx++];;
    this.sendStream = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateTCPConnectedSocket_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate NetworkContext_CreateTCPConnectedSocket_ResponseParams.receiveStream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_CreateTCPConnectedSocket_ResponseParams.sendStream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateTCPConnectedSocket_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  NetworkContext_CreateTCPConnectedSocket_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateTCPConnectedSocket_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    val.receiveStream = decoder.decodeStruct(codec.NullableHandle);
    val.sendStream = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_CreateTCPConnectedSocket_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateTCPConnectedSocket_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.encodeStruct(codec.NullableHandle, val.receiveStream);
    encoder.encodeStruct(codec.NullableHandle, val.sendStream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_CreateWebSocket_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateWebSocket_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.processId = 0;
    this.renderFrameId = 0;
    this.origin = null;
  };
  NetworkContext_CreateWebSocket_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateWebSocket_Params.generate = function(generator_) {
    var generated = new NetworkContext_CreateWebSocket_Params;
    generated.request = generator_.generateInterfaceRequest("network.mojom.WebSocket", false);
    generated.processId = generator_.generateInt32();
    generated.renderFrameId = generator_.generateInt32();
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    return generated;
  };

  NetworkContext_CreateWebSocket_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "network.mojom.WebSocket", false);
    }
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateInt32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    return this;
  };
  NetworkContext_CreateWebSocket_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.WebSocketRequest"]);
    }
    return handles;
  };

  NetworkContext_CreateWebSocket_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateWebSocket_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateWebSocket_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_CreateWebSocket_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate NetworkContext_CreateWebSocket_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateWebSocket_Params.encodedSize = codec.kStructHeaderSize + 24;

  NetworkContext_CreateWebSocket_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateWebSocket_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    val.processId = decoder.decodeStruct(codec.Int32);
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  NetworkContext_CreateWebSocket_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateWebSocket_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.encodeStruct(codec.Int32, val.processId);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
  };
  function NetworkContext_CreateNetLogExporter_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_CreateNetLogExporter_Params.prototype.initDefaults_ = function() {
    this.exporter = new bindings.InterfaceRequest();
  };
  NetworkContext_CreateNetLogExporter_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_CreateNetLogExporter_Params.generate = function(generator_) {
    var generated = new NetworkContext_CreateNetLogExporter_Params;
    generated.exporter = generator_.generateInterfaceRequest("network.mojom.NetLogExporter", false);
    return generated;
  };

  NetworkContext_CreateNetLogExporter_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.exporter = mutator_.mutateInterfaceRequest(this.exporter, "network.mojom.NetLogExporter", false);
    }
    return this;
  };
  NetworkContext_CreateNetLogExporter_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.exporter !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.NetLogExporterRequest"]);
    }
    return handles;
  };

  NetworkContext_CreateNetLogExporter_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_CreateNetLogExporter_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.exporter = handles[idx++];;
    return idx;
  };

  NetworkContext_CreateNetLogExporter_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_CreateNetLogExporter_Params.exporter
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkContext_CreateNetLogExporter_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_CreateNetLogExporter_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_CreateNetLogExporter_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.exporter = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_CreateNetLogExporter_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_CreateNetLogExporter_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.exporter);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_BlockThirdPartyCookies_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_BlockThirdPartyCookies_Params.prototype.initDefaults_ = function() {
    this.block = false;
  };
  NetworkContext_BlockThirdPartyCookies_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_BlockThirdPartyCookies_Params.generate = function(generator_) {
    var generated = new NetworkContext_BlockThirdPartyCookies_Params;
    generated.block = generator_.generateBool();
    return generated;
  };

  NetworkContext_BlockThirdPartyCookies_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.block = mutator_.mutateBool(this.block);
    }
    return this;
  };
  NetworkContext_BlockThirdPartyCookies_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_BlockThirdPartyCookies_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_BlockThirdPartyCookies_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_BlockThirdPartyCookies_Params.validate = function(messageValidator, offset) {
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

  NetworkContext_BlockThirdPartyCookies_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_BlockThirdPartyCookies_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_BlockThirdPartyCookies_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.block = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_BlockThirdPartyCookies_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_BlockThirdPartyCookies_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.block & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_AddHSTSForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_AddHSTSForTesting_Params.prototype.initDefaults_ = function() {
    this.host = null;
    this.expiry = null;
    this.includeSubdomains = false;
  };
  NetworkContext_AddHSTSForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_AddHSTSForTesting_Params.generate = function(generator_) {
    var generated = new NetworkContext_AddHSTSForTesting_Params;
    generated.host = generator_.generateString(false);
    generated.expiry = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.includeSubdomains = generator_.generateBool();
    return generated;
  };

  NetworkContext_AddHSTSForTesting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateString(this.host, false);
    }
    if (mutator_.chooseMutateField()) {
      this.expiry = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.includeSubdomains = mutator_.mutateBool(this.includeSubdomains);
    }
    return this;
  };
  NetworkContext_AddHSTSForTesting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_AddHSTSForTesting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_AddHSTSForTesting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_AddHSTSForTesting_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkContext_AddHSTSForTesting_Params.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkContext_AddHSTSForTesting_Params.expiry
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NetworkContext_AddHSTSForTesting_Params.encodedSize = codec.kStructHeaderSize + 24;

  NetworkContext_AddHSTSForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_AddHSTSForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.host = decoder.decodeStruct(codec.String);
    val.expiry = decoder.decodeStructPointer(time$.Time);
    packed = decoder.readUint8();
    val.includeSubdomains = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_AddHSTSForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_AddHSTSForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeStructPointer(time$.Time, val.expiry);
    packed = 0;
    packed |= (val.includeSubdomains & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_AddHSTSForTesting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_AddHSTSForTesting_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_AddHSTSForTesting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_AddHSTSForTesting_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_AddHSTSForTesting_ResponseParams;
    return generated;
  };

  NetworkContext_AddHSTSForTesting_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_AddHSTSForTesting_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_AddHSTSForTesting_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_AddHSTSForTesting_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_AddHSTSForTesting_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_AddHSTSForTesting_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_AddHSTSForTesting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_AddHSTSForTesting_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_AddHSTSForTesting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_AddHSTSForTesting_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkContext_SetFailingHttpTransactionForTesting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_SetFailingHttpTransactionForTesting_Params.prototype.initDefaults_ = function() {
    this.rv = 0;
  };
  NetworkContext_SetFailingHttpTransactionForTesting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_SetFailingHttpTransactionForTesting_Params.generate = function(generator_) {
    var generated = new NetworkContext_SetFailingHttpTransactionForTesting_Params;
    generated.rv = generator_.generateInt32();
    return generated;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rv = mutator_.mutateInt32(this.rv);
    }
    return this;
  };
  NetworkContext_SetFailingHttpTransactionForTesting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_SetFailingHttpTransactionForTesting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_Params.validate = function(messageValidator, offset) {
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

  NetworkContext_SetFailingHttpTransactionForTesting_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkContext_SetFailingHttpTransactionForTesting_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_SetFailingHttpTransactionForTesting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rv = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_SetFailingHttpTransactionForTesting_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.rv);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.generate = function(generator_) {
    var generated = new NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams;
    return generated;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kNetLogExporter_Start_Name = 295003961;
  var kNetLogExporter_Stop_Name = 1785108324;

  function NetLogExporterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetLogExporter,
                                                   handleOrPtrInfo);
  }

  function NetLogExporterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetLogExporter, associatedInterfacePtrInfo);
  }

  NetLogExporterAssociatedPtr.prototype =
      Object.create(NetLogExporterPtr.prototype);
  NetLogExporterAssociatedPtr.prototype.constructor =
      NetLogExporterAssociatedPtr;

  function NetLogExporterProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetLogExporterPtr.prototype.start = function() {
    return NetLogExporterProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  NetLogExporterProxy.prototype.start = function(destination, extraConstants, captureMode, maxFileSize) {
    var params_ = new NetLogExporter_Start_Params();
    params_.destination = destination;
    params_.extraConstants = extraConstants;
    params_.captureMode = captureMode;
    params_.maxFileSize = maxFileSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetLogExporter_Start_Name,
          codec.align(NetLogExporter_Start_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetLogExporter_Start_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetLogExporter_Start_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetLogExporterPtr.prototype.stop = function() {
    return NetLogExporterProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  NetLogExporterProxy.prototype.stop = function(polledValues) {
    var params_ = new NetLogExporter_Stop_Params();
    params_.polledValues = polledValues;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetLogExporter_Stop_Name,
          codec.align(NetLogExporter_Stop_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetLogExporter_Stop_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetLogExporter_Stop_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NetLogExporterStub(delegate) {
    this.delegate_ = delegate;
  }
  NetLogExporterStub.prototype.start = function(destination, extraConstants, captureMode, maxFileSize) {
    return this.delegate_ && this.delegate_.start && this.delegate_.start(destination, extraConstants, captureMode, maxFileSize);
  }
  NetLogExporterStub.prototype.stop = function(polledValues) {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop(polledValues);
  }

  NetLogExporterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  NetLogExporterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetLogExporter_Start_Name:
      var params = reader.decodeStruct(NetLogExporter_Start_Params);
      this.start(params.destination, params.extraConstants, params.captureMode, params.maxFileSize).then(function(response) {
        var responseParams =
            new NetLogExporter_Start_ResponseParams();
        responseParams.netError = response.netError;
        var builder = new codec.MessageV1Builder(
            kNetLogExporter_Start_Name,
            codec.align(NetLogExporter_Start_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetLogExporter_Start_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetLogExporter_Stop_Name:
      var params = reader.decodeStruct(NetLogExporter_Stop_Params);
      this.stop(params.polledValues).then(function(response) {
        var responseParams =
            new NetLogExporter_Stop_ResponseParams();
        responseParams.netError = response.netError;
        var builder = new codec.MessageV1Builder(
            kNetLogExporter_Stop_Name,
            codec.align(NetLogExporter_Stop_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetLogExporter_Stop_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetLogExporterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetLogExporter_Start_Name:
        if (message.expectsResponse())
          paramsClass = NetLogExporter_Start_Params;
      break;
      case kNetLogExporter_Stop_Name:
        if (message.expectsResponse())
          paramsClass = NetLogExporter_Stop_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetLogExporterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetLogExporter_Start_Name:
        if (message.isResponse())
          paramsClass = NetLogExporter_Start_ResponseParams;
        break;
      case kNetLogExporter_Stop_Name:
        if (message.isResponse())
          paramsClass = NetLogExporter_Stop_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetLogExporter = {
    name: 'network.mojom.NetLogExporter',
    kVersion: 0,
    ptrClass: NetLogExporterPtr,
    proxyClass: NetLogExporterProxy,
    stubClass: NetLogExporterStub,
    validateRequest: validateNetLogExporterRequest,
    validateResponse: validateNetLogExporterResponse,
    mojomId: 'services/network/public/mojom/network_context.mojom',
    fuzzMethods: {
      start: {
        params: NetLogExporter_Start_Params,
      },
      stop: {
        params: NetLogExporter_Stop_Params,
      },
    },
  };
  NetLogExporter.kUnlimitedFileSize = 0xFFFFFFFFFFFFFFFF,
  NetLogExporter.CaptureMode = {};
  NetLogExporter.CaptureMode.DEFAULT = 0;
  NetLogExporter.CaptureMode.INCLUDE_COOKIES_AND_CREDENTIALS = NetLogExporter.CaptureMode.DEFAULT + 1;
  NetLogExporter.CaptureMode.INCLUDE_SOCKET_BYTES = NetLogExporter.CaptureMode.INCLUDE_COOKIES_AND_CREDENTIALS + 1;

  NetLogExporter.CaptureMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  NetLogExporter.CaptureMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  NetLogExporterStub.prototype.validator = validateNetLogExporterRequest;
  NetLogExporterProxy.prototype.validator = validateNetLogExporterResponse;
  var kNetworkContext_CreateURLLoaderFactory_Name = 1546000268;
  var kNetworkContext_GetCookieManager_Name = 49020691;
  var kNetworkContext_GetRestrictedCookieManager_Name = 1777688777;
  var kNetworkContext_ClearNetworkingHistorySince_Name = 1306238744;
  var kNetworkContext_ClearHttpCache_Name = 1398965692;
  var kNetworkContext_ClearChannelIds_Name = 1865368962;
  var kNetworkContext_ClearHttpAuthCache_Name = 1282379986;
  var kNetworkContext_ClearReportingCacheReports_Name = 1962635743;
  var kNetworkContext_ClearReportingCacheClients_Name = 1581440053;
  var kNetworkContext_ClearNetworkErrorLogging_Name = 1776982539;
  var kNetworkContext_SetNetworkConditions_Name = 1174756895;
  var kNetworkContext_SetAcceptLanguage_Name = 1823731390;
  var kNetworkContext_SetCTPolicy_Name = 742998906;
  var kNetworkContext_CreateUDPSocket_Name = 1503059985;
  var kNetworkContext_CreateTCPServerSocket_Name = 1044730004;
  var kNetworkContext_CreateTCPConnectedSocket_Name = 434699588;
  var kNetworkContext_CreateWebSocket_Name = 65414029;
  var kNetworkContext_CreateNetLogExporter_Name = 855500053;
  var kNetworkContext_BlockThirdPartyCookies_Name = 1091239746;
  var kNetworkContext_AddHSTSForTesting_Name = 1285671615;
  var kNetworkContext_SetFailingHttpTransactionForTesting_Name = 966303885;

  function NetworkContextPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetworkContext,
                                                   handleOrPtrInfo);
  }

  function NetworkContextAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetworkContext, associatedInterfacePtrInfo);
  }

  NetworkContextAssociatedPtr.prototype =
      Object.create(NetworkContextPtr.prototype);
  NetworkContextAssociatedPtr.prototype.constructor =
      NetworkContextAssociatedPtr;

  function NetworkContextProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetworkContextPtr.prototype.createURLLoaderFactory = function() {
    return NetworkContextProxy.prototype.createURLLoaderFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.createURLLoaderFactory = function(urlLoaderFactory, params) {
    var params_ = new NetworkContext_CreateURLLoaderFactory_Params();
    params_.urlLoaderFactory = urlLoaderFactory;
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_CreateURLLoaderFactory_Name,
        codec.align(NetworkContext_CreateURLLoaderFactory_Params.encodedSize));
    builder.encodeStruct(NetworkContext_CreateURLLoaderFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.getCookieManager = function() {
    return NetworkContextProxy.prototype.getCookieManager
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.getCookieManager = function(cookieManager) {
    var params_ = new NetworkContext_GetCookieManager_Params();
    params_.cookieManager = cookieManager;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_GetCookieManager_Name,
        codec.align(NetworkContext_GetCookieManager_Params.encodedSize));
    builder.encodeStruct(NetworkContext_GetCookieManager_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.getRestrictedCookieManager = function() {
    return NetworkContextProxy.prototype.getRestrictedCookieManager
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.getRestrictedCookieManager = function(restrictedCookieManager, renderProcessId, renderFrameId) {
    var params_ = new NetworkContext_GetRestrictedCookieManager_Params();
    params_.restrictedCookieManager = restrictedCookieManager;
    params_.renderProcessId = renderProcessId;
    params_.renderFrameId = renderFrameId;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_GetRestrictedCookieManager_Name,
        codec.align(NetworkContext_GetRestrictedCookieManager_Params.encodedSize));
    builder.encodeStruct(NetworkContext_GetRestrictedCookieManager_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.clearNetworkingHistorySince = function() {
    return NetworkContextProxy.prototype.clearNetworkingHistorySince
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearNetworkingHistorySince = function(startTime) {
    var params_ = new NetworkContext_ClearNetworkingHistorySince_Params();
    params_.startTime = startTime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearNetworkingHistorySince_Name,
          codec.align(NetworkContext_ClearNetworkingHistorySince_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearNetworkingHistorySince_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearNetworkingHistorySince_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.clearHttpCache = function() {
    return NetworkContextProxy.prototype.clearHttpCache
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearHttpCache = function(startTime, endTime, filter) {
    var params_ = new NetworkContext_ClearHttpCache_Params();
    params_.startTime = startTime;
    params_.endTime = endTime;
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearHttpCache_Name,
          codec.align(NetworkContext_ClearHttpCache_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearHttpCache_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearHttpCache_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.clearChannelIds = function() {
    return NetworkContextProxy.prototype.clearChannelIds
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearChannelIds = function(startTime, endTime, filter) {
    var params_ = new NetworkContext_ClearChannelIds_Params();
    params_.startTime = startTime;
    params_.endTime = endTime;
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearChannelIds_Name,
          codec.align(NetworkContext_ClearChannelIds_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearChannelIds_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearChannelIds_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.clearHttpAuthCache = function() {
    return NetworkContextProxy.prototype.clearHttpAuthCache
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearHttpAuthCache = function(startTime) {
    var params_ = new NetworkContext_ClearHttpAuthCache_Params();
    params_.startTime = startTime;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearHttpAuthCache_Name,
          codec.align(NetworkContext_ClearHttpAuthCache_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearHttpAuthCache_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearHttpAuthCache_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.clearReportingCacheReports = function() {
    return NetworkContextProxy.prototype.clearReportingCacheReports
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearReportingCacheReports = function(filter) {
    var params_ = new NetworkContext_ClearReportingCacheReports_Params();
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearReportingCacheReports_Name,
          codec.align(NetworkContext_ClearReportingCacheReports_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearReportingCacheReports_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearReportingCacheReports_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.clearReportingCacheClients = function() {
    return NetworkContextProxy.prototype.clearReportingCacheClients
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearReportingCacheClients = function(filter) {
    var params_ = new NetworkContext_ClearReportingCacheClients_Params();
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearReportingCacheClients_Name,
          codec.align(NetworkContext_ClearReportingCacheClients_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearReportingCacheClients_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearReportingCacheClients_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.clearNetworkErrorLogging = function() {
    return NetworkContextProxy.prototype.clearNetworkErrorLogging
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.clearNetworkErrorLogging = function(filter) {
    var params_ = new NetworkContext_ClearNetworkErrorLogging_Params();
    params_.filter = filter;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_ClearNetworkErrorLogging_Name,
          codec.align(NetworkContext_ClearNetworkErrorLogging_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_ClearNetworkErrorLogging_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_ClearNetworkErrorLogging_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.setNetworkConditions = function() {
    return NetworkContextProxy.prototype.setNetworkConditions
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.setNetworkConditions = function(profileId, conditions) {
    var params_ = new NetworkContext_SetNetworkConditions_Params();
    params_.profileId = profileId;
    params_.conditions = conditions;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_SetNetworkConditions_Name,
        codec.align(NetworkContext_SetNetworkConditions_Params.encodedSize));
    builder.encodeStruct(NetworkContext_SetNetworkConditions_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.setAcceptLanguage = function() {
    return NetworkContextProxy.prototype.setAcceptLanguage
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.setAcceptLanguage = function(newAcceptLanguage) {
    var params_ = new NetworkContext_SetAcceptLanguage_Params();
    params_.newAcceptLanguage = newAcceptLanguage;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_SetAcceptLanguage_Name,
        codec.align(NetworkContext_SetAcceptLanguage_Params.encodedSize));
    builder.encodeStruct(NetworkContext_SetAcceptLanguage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.setCTPolicy = function() {
    return NetworkContextProxy.prototype.setCTPolicy
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.setCTPolicy = function(requiredHosts, excludedHosts, excludedSpkis, excludedLegacySpkis) {
    var params_ = new NetworkContext_SetCTPolicy_Params();
    params_.requiredHosts = requiredHosts;
    params_.excludedHosts = excludedHosts;
    params_.excludedSpkis = excludedSpkis;
    params_.excludedLegacySpkis = excludedLegacySpkis;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_SetCTPolicy_Name,
        codec.align(NetworkContext_SetCTPolicy_Params.encodedSize));
    builder.encodeStruct(NetworkContext_SetCTPolicy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.createUDPSocket = function() {
    return NetworkContextProxy.prototype.createUDPSocket
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.createUDPSocket = function(request, receiver) {
    var params_ = new NetworkContext_CreateUDPSocket_Params();
    params_.request = request;
    params_.receiver = receiver;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_CreateUDPSocket_Name,
        codec.align(NetworkContext_CreateUDPSocket_Params.encodedSize));
    builder.encodeStruct(NetworkContext_CreateUDPSocket_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.createTCPServerSocket = function() {
    return NetworkContextProxy.prototype.createTCPServerSocket
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.createTCPServerSocket = function(localAddr, backlog, trafficAnnotation, socket) {
    var params_ = new NetworkContext_CreateTCPServerSocket_Params();
    params_.localAddr = localAddr;
    params_.backlog = backlog;
    params_.trafficAnnotation = trafficAnnotation;
    params_.socket = socket;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_CreateTCPServerSocket_Name,
          codec.align(NetworkContext_CreateTCPServerSocket_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_CreateTCPServerSocket_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_CreateTCPServerSocket_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.createTCPConnectedSocket = function() {
    return NetworkContextProxy.prototype.createTCPConnectedSocket
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.createTCPConnectedSocket = function(localAddr, remoteAddrList, trafficAnnotation, socket, observer) {
    var params_ = new NetworkContext_CreateTCPConnectedSocket_Params();
    params_.localAddr = localAddr;
    params_.remoteAddrList = remoteAddrList;
    params_.trafficAnnotation = trafficAnnotation;
    params_.socket = socket;
    params_.observer = observer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_CreateTCPConnectedSocket_Name,
          codec.align(NetworkContext_CreateTCPConnectedSocket_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_CreateTCPConnectedSocket_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_CreateTCPConnectedSocket_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.createWebSocket = function() {
    return NetworkContextProxy.prototype.createWebSocket
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.createWebSocket = function(request, processId, renderFrameId, origin) {
    var params_ = new NetworkContext_CreateWebSocket_Params();
    params_.request = request;
    params_.processId = processId;
    params_.renderFrameId = renderFrameId;
    params_.origin = origin;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_CreateWebSocket_Name,
        codec.align(NetworkContext_CreateWebSocket_Params.encodedSize));
    builder.encodeStruct(NetworkContext_CreateWebSocket_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.createNetLogExporter = function() {
    return NetworkContextProxy.prototype.createNetLogExporter
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.createNetLogExporter = function(exporter) {
    var params_ = new NetworkContext_CreateNetLogExporter_Params();
    params_.exporter = exporter;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_CreateNetLogExporter_Name,
        codec.align(NetworkContext_CreateNetLogExporter_Params.encodedSize));
    builder.encodeStruct(NetworkContext_CreateNetLogExporter_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.blockThirdPartyCookies = function() {
    return NetworkContextProxy.prototype.blockThirdPartyCookies
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.blockThirdPartyCookies = function(block) {
    var params_ = new NetworkContext_BlockThirdPartyCookies_Params();
    params_.block = block;
    var builder = new codec.MessageV0Builder(
        kNetworkContext_BlockThirdPartyCookies_Name,
        codec.align(NetworkContext_BlockThirdPartyCookies_Params.encodedSize));
    builder.encodeStruct(NetworkContext_BlockThirdPartyCookies_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkContextPtr.prototype.addHSTSForTesting = function() {
    return NetworkContextProxy.prototype.addHSTSForTesting
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.addHSTSForTesting = function(host, expiry, includeSubdomains) {
    var params_ = new NetworkContext_AddHSTSForTesting_Params();
    params_.host = host;
    params_.expiry = expiry;
    params_.includeSubdomains = includeSubdomains;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_AddHSTSForTesting_Name,
          codec.align(NetworkContext_AddHSTSForTesting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_AddHSTSForTesting_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_AddHSTSForTesting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkContextPtr.prototype.setFailingHttpTransactionForTesting = function() {
    return NetworkContextProxy.prototype.setFailingHttpTransactionForTesting
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkContextProxy.prototype.setFailingHttpTransactionForTesting = function(rv) {
    var params_ = new NetworkContext_SetFailingHttpTransactionForTesting_Params();
    params_.rv = rv;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkContext_SetFailingHttpTransactionForTesting_Name,
          codec.align(NetworkContext_SetFailingHttpTransactionForTesting_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkContext_SetFailingHttpTransactionForTesting_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NetworkContextStub(delegate) {
    this.delegate_ = delegate;
  }
  NetworkContextStub.prototype.createURLLoaderFactory = function(urlLoaderFactory, params) {
    return this.delegate_ && this.delegate_.createURLLoaderFactory && this.delegate_.createURLLoaderFactory(urlLoaderFactory, params);
  }
  NetworkContextStub.prototype.getCookieManager = function(cookieManager) {
    return this.delegate_ && this.delegate_.getCookieManager && this.delegate_.getCookieManager(cookieManager);
  }
  NetworkContextStub.prototype.getRestrictedCookieManager = function(restrictedCookieManager, renderProcessId, renderFrameId) {
    return this.delegate_ && this.delegate_.getRestrictedCookieManager && this.delegate_.getRestrictedCookieManager(restrictedCookieManager, renderProcessId, renderFrameId);
  }
  NetworkContextStub.prototype.clearNetworkingHistorySince = function(startTime) {
    return this.delegate_ && this.delegate_.clearNetworkingHistorySince && this.delegate_.clearNetworkingHistorySince(startTime);
  }
  NetworkContextStub.prototype.clearHttpCache = function(startTime, endTime, filter) {
    return this.delegate_ && this.delegate_.clearHttpCache && this.delegate_.clearHttpCache(startTime, endTime, filter);
  }
  NetworkContextStub.prototype.clearChannelIds = function(startTime, endTime, filter) {
    return this.delegate_ && this.delegate_.clearChannelIds && this.delegate_.clearChannelIds(startTime, endTime, filter);
  }
  NetworkContextStub.prototype.clearHttpAuthCache = function(startTime) {
    return this.delegate_ && this.delegate_.clearHttpAuthCache && this.delegate_.clearHttpAuthCache(startTime);
  }
  NetworkContextStub.prototype.clearReportingCacheReports = function(filter) {
    return this.delegate_ && this.delegate_.clearReportingCacheReports && this.delegate_.clearReportingCacheReports(filter);
  }
  NetworkContextStub.prototype.clearReportingCacheClients = function(filter) {
    return this.delegate_ && this.delegate_.clearReportingCacheClients && this.delegate_.clearReportingCacheClients(filter);
  }
  NetworkContextStub.prototype.clearNetworkErrorLogging = function(filter) {
    return this.delegate_ && this.delegate_.clearNetworkErrorLogging && this.delegate_.clearNetworkErrorLogging(filter);
  }
  NetworkContextStub.prototype.setNetworkConditions = function(profileId, conditions) {
    return this.delegate_ && this.delegate_.setNetworkConditions && this.delegate_.setNetworkConditions(profileId, conditions);
  }
  NetworkContextStub.prototype.setAcceptLanguage = function(newAcceptLanguage) {
    return this.delegate_ && this.delegate_.setAcceptLanguage && this.delegate_.setAcceptLanguage(newAcceptLanguage);
  }
  NetworkContextStub.prototype.setCTPolicy = function(requiredHosts, excludedHosts, excludedSpkis, excludedLegacySpkis) {
    return this.delegate_ && this.delegate_.setCTPolicy && this.delegate_.setCTPolicy(requiredHosts, excludedHosts, excludedSpkis, excludedLegacySpkis);
  }
  NetworkContextStub.prototype.createUDPSocket = function(request, receiver) {
    return this.delegate_ && this.delegate_.createUDPSocket && this.delegate_.createUDPSocket(request, receiver);
  }
  NetworkContextStub.prototype.createTCPServerSocket = function(localAddr, backlog, trafficAnnotation, socket) {
    return this.delegate_ && this.delegate_.createTCPServerSocket && this.delegate_.createTCPServerSocket(localAddr, backlog, trafficAnnotation, socket);
  }
  NetworkContextStub.prototype.createTCPConnectedSocket = function(localAddr, remoteAddrList, trafficAnnotation, socket, observer) {
    return this.delegate_ && this.delegate_.createTCPConnectedSocket && this.delegate_.createTCPConnectedSocket(localAddr, remoteAddrList, trafficAnnotation, socket, observer);
  }
  NetworkContextStub.prototype.createWebSocket = function(request, processId, renderFrameId, origin) {
    return this.delegate_ && this.delegate_.createWebSocket && this.delegate_.createWebSocket(request, processId, renderFrameId, origin);
  }
  NetworkContextStub.prototype.createNetLogExporter = function(exporter) {
    return this.delegate_ && this.delegate_.createNetLogExporter && this.delegate_.createNetLogExporter(exporter);
  }
  NetworkContextStub.prototype.blockThirdPartyCookies = function(block) {
    return this.delegate_ && this.delegate_.blockThirdPartyCookies && this.delegate_.blockThirdPartyCookies(block);
  }
  NetworkContextStub.prototype.addHSTSForTesting = function(host, expiry, includeSubdomains) {
    return this.delegate_ && this.delegate_.addHSTSForTesting && this.delegate_.addHSTSForTesting(host, expiry, includeSubdomains);
  }
  NetworkContextStub.prototype.setFailingHttpTransactionForTesting = function(rv) {
    return this.delegate_ && this.delegate_.setFailingHttpTransactionForTesting && this.delegate_.setFailingHttpTransactionForTesting(rv);
  }

  NetworkContextStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkContext_CreateURLLoaderFactory_Name:
      var params = reader.decodeStruct(NetworkContext_CreateURLLoaderFactory_Params);
      this.createURLLoaderFactory(params.urlLoaderFactory, params.params);
      return true;
    case kNetworkContext_GetCookieManager_Name:
      var params = reader.decodeStruct(NetworkContext_GetCookieManager_Params);
      this.getCookieManager(params.cookieManager);
      return true;
    case kNetworkContext_GetRestrictedCookieManager_Name:
      var params = reader.decodeStruct(NetworkContext_GetRestrictedCookieManager_Params);
      this.getRestrictedCookieManager(params.restrictedCookieManager, params.renderProcessId, params.renderFrameId);
      return true;
    case kNetworkContext_SetNetworkConditions_Name:
      var params = reader.decodeStruct(NetworkContext_SetNetworkConditions_Params);
      this.setNetworkConditions(params.profileId, params.conditions);
      return true;
    case kNetworkContext_SetAcceptLanguage_Name:
      var params = reader.decodeStruct(NetworkContext_SetAcceptLanguage_Params);
      this.setAcceptLanguage(params.newAcceptLanguage);
      return true;
    case kNetworkContext_SetCTPolicy_Name:
      var params = reader.decodeStruct(NetworkContext_SetCTPolicy_Params);
      this.setCTPolicy(params.requiredHosts, params.excludedHosts, params.excludedSpkis, params.excludedLegacySpkis);
      return true;
    case kNetworkContext_CreateUDPSocket_Name:
      var params = reader.decodeStruct(NetworkContext_CreateUDPSocket_Params);
      this.createUDPSocket(params.request, params.receiver);
      return true;
    case kNetworkContext_CreateWebSocket_Name:
      var params = reader.decodeStruct(NetworkContext_CreateWebSocket_Params);
      this.createWebSocket(params.request, params.processId, params.renderFrameId, params.origin);
      return true;
    case kNetworkContext_CreateNetLogExporter_Name:
      var params = reader.decodeStruct(NetworkContext_CreateNetLogExporter_Params);
      this.createNetLogExporter(params.exporter);
      return true;
    case kNetworkContext_BlockThirdPartyCookies_Name:
      var params = reader.decodeStruct(NetworkContext_BlockThirdPartyCookies_Params);
      this.blockThirdPartyCookies(params.block);
      return true;
    default:
      return false;
    }
  };

  NetworkContextStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkContext_ClearNetworkingHistorySince_Name:
      var params = reader.decodeStruct(NetworkContext_ClearNetworkingHistorySince_Params);
      this.clearNetworkingHistorySince(params.startTime).then(function(response) {
        var responseParams =
            new NetworkContext_ClearNetworkingHistorySince_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearNetworkingHistorySince_Name,
            codec.align(NetworkContext_ClearNetworkingHistorySince_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearNetworkingHistorySince_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_ClearHttpCache_Name:
      var params = reader.decodeStruct(NetworkContext_ClearHttpCache_Params);
      this.clearHttpCache(params.startTime, params.endTime, params.filter).then(function(response) {
        var responseParams =
            new NetworkContext_ClearHttpCache_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearHttpCache_Name,
            codec.align(NetworkContext_ClearHttpCache_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearHttpCache_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_ClearChannelIds_Name:
      var params = reader.decodeStruct(NetworkContext_ClearChannelIds_Params);
      this.clearChannelIds(params.startTime, params.endTime, params.filter).then(function(response) {
        var responseParams =
            new NetworkContext_ClearChannelIds_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearChannelIds_Name,
            codec.align(NetworkContext_ClearChannelIds_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearChannelIds_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_ClearHttpAuthCache_Name:
      var params = reader.decodeStruct(NetworkContext_ClearHttpAuthCache_Params);
      this.clearHttpAuthCache(params.startTime).then(function(response) {
        var responseParams =
            new NetworkContext_ClearHttpAuthCache_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearHttpAuthCache_Name,
            codec.align(NetworkContext_ClearHttpAuthCache_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearHttpAuthCache_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_ClearReportingCacheReports_Name:
      var params = reader.decodeStruct(NetworkContext_ClearReportingCacheReports_Params);
      this.clearReportingCacheReports(params.filter).then(function(response) {
        var responseParams =
            new NetworkContext_ClearReportingCacheReports_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearReportingCacheReports_Name,
            codec.align(NetworkContext_ClearReportingCacheReports_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearReportingCacheReports_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_ClearReportingCacheClients_Name:
      var params = reader.decodeStruct(NetworkContext_ClearReportingCacheClients_Params);
      this.clearReportingCacheClients(params.filter).then(function(response) {
        var responseParams =
            new NetworkContext_ClearReportingCacheClients_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearReportingCacheClients_Name,
            codec.align(NetworkContext_ClearReportingCacheClients_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearReportingCacheClients_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_ClearNetworkErrorLogging_Name:
      var params = reader.decodeStruct(NetworkContext_ClearNetworkErrorLogging_Params);
      this.clearNetworkErrorLogging(params.filter).then(function(response) {
        var responseParams =
            new NetworkContext_ClearNetworkErrorLogging_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_ClearNetworkErrorLogging_Name,
            codec.align(NetworkContext_ClearNetworkErrorLogging_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_ClearNetworkErrorLogging_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_CreateTCPServerSocket_Name:
      var params = reader.decodeStruct(NetworkContext_CreateTCPServerSocket_Params);
      this.createTCPServerSocket(params.localAddr, params.backlog, params.trafficAnnotation, params.socket).then(function(response) {
        var responseParams =
            new NetworkContext_CreateTCPServerSocket_ResponseParams();
        responseParams.result = response.result;
        responseParams.localAddrOut = response.localAddrOut;
        var builder = new codec.MessageV1Builder(
            kNetworkContext_CreateTCPServerSocket_Name,
            codec.align(NetworkContext_CreateTCPServerSocket_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_CreateTCPServerSocket_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_CreateTCPConnectedSocket_Name:
      var params = reader.decodeStruct(NetworkContext_CreateTCPConnectedSocket_Params);
      this.createTCPConnectedSocket(params.localAddr, params.remoteAddrList, params.trafficAnnotation, params.socket, params.observer).then(function(response) {
        var responseParams =
            new NetworkContext_CreateTCPConnectedSocket_ResponseParams();
        responseParams.result = response.result;
        responseParams.receiveStream = response.receiveStream;
        responseParams.sendStream = response.sendStream;
        var builder = new codec.MessageV1Builder(
            kNetworkContext_CreateTCPConnectedSocket_Name,
            codec.align(NetworkContext_CreateTCPConnectedSocket_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_CreateTCPConnectedSocket_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_AddHSTSForTesting_Name:
      var params = reader.decodeStruct(NetworkContext_AddHSTSForTesting_Params);
      this.addHSTSForTesting(params.host, params.expiry, params.includeSubdomains).then(function(response) {
        var responseParams =
            new NetworkContext_AddHSTSForTesting_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_AddHSTSForTesting_Name,
            codec.align(NetworkContext_AddHSTSForTesting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_AddHSTSForTesting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkContext_SetFailingHttpTransactionForTesting_Name:
      var params = reader.decodeStruct(NetworkContext_SetFailingHttpTransactionForTesting_Params);
      this.setFailingHttpTransactionForTesting(params.rv).then(function(response) {
        var responseParams =
            new NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkContext_SetFailingHttpTransactionForTesting_Name,
            codec.align(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetworkContextRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetworkContext_CreateURLLoaderFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_CreateURLLoaderFactory_Params;
      break;
      case kNetworkContext_GetCookieManager_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_GetCookieManager_Params;
      break;
      case kNetworkContext_GetRestrictedCookieManager_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_GetRestrictedCookieManager_Params;
      break;
      case kNetworkContext_ClearNetworkingHistorySince_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearNetworkingHistorySince_Params;
      break;
      case kNetworkContext_ClearHttpCache_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearHttpCache_Params;
      break;
      case kNetworkContext_ClearChannelIds_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearChannelIds_Params;
      break;
      case kNetworkContext_ClearHttpAuthCache_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearHttpAuthCache_Params;
      break;
      case kNetworkContext_ClearReportingCacheReports_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearReportingCacheReports_Params;
      break;
      case kNetworkContext_ClearReportingCacheClients_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearReportingCacheClients_Params;
      break;
      case kNetworkContext_ClearNetworkErrorLogging_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_ClearNetworkErrorLogging_Params;
      break;
      case kNetworkContext_SetNetworkConditions_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_SetNetworkConditions_Params;
      break;
      case kNetworkContext_SetAcceptLanguage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_SetAcceptLanguage_Params;
      break;
      case kNetworkContext_SetCTPolicy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_SetCTPolicy_Params;
      break;
      case kNetworkContext_CreateUDPSocket_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_CreateUDPSocket_Params;
      break;
      case kNetworkContext_CreateTCPServerSocket_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_CreateTCPServerSocket_Params;
      break;
      case kNetworkContext_CreateTCPConnectedSocket_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_CreateTCPConnectedSocket_Params;
      break;
      case kNetworkContext_CreateWebSocket_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_CreateWebSocket_Params;
      break;
      case kNetworkContext_CreateNetLogExporter_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_CreateNetLogExporter_Params;
      break;
      case kNetworkContext_BlockThirdPartyCookies_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkContext_BlockThirdPartyCookies_Params;
      break;
      case kNetworkContext_AddHSTSForTesting_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_AddHSTSForTesting_Params;
      break;
      case kNetworkContext_SetFailingHttpTransactionForTesting_Name:
        if (message.expectsResponse())
          paramsClass = NetworkContext_SetFailingHttpTransactionForTesting_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetworkContextResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetworkContext_ClearNetworkingHistorySince_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearNetworkingHistorySince_ResponseParams;
        break;
      case kNetworkContext_ClearHttpCache_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearHttpCache_ResponseParams;
        break;
      case kNetworkContext_ClearChannelIds_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearChannelIds_ResponseParams;
        break;
      case kNetworkContext_ClearHttpAuthCache_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearHttpAuthCache_ResponseParams;
        break;
      case kNetworkContext_ClearReportingCacheReports_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearReportingCacheReports_ResponseParams;
        break;
      case kNetworkContext_ClearReportingCacheClients_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearReportingCacheClients_ResponseParams;
        break;
      case kNetworkContext_ClearNetworkErrorLogging_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_ClearNetworkErrorLogging_ResponseParams;
        break;
      case kNetworkContext_CreateTCPServerSocket_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_CreateTCPServerSocket_ResponseParams;
        break;
      case kNetworkContext_CreateTCPConnectedSocket_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_CreateTCPConnectedSocket_ResponseParams;
        break;
      case kNetworkContext_AddHSTSForTesting_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_AddHSTSForTesting_ResponseParams;
        break;
      case kNetworkContext_SetFailingHttpTransactionForTesting_Name:
        if (message.isResponse())
          paramsClass = NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetworkContext = {
    name: 'network.mojom.NetworkContext',
    kVersion: 0,
    ptrClass: NetworkContextPtr,
    proxyClass: NetworkContextProxy,
    stubClass: NetworkContextStub,
    validateRequest: validateNetworkContextRequest,
    validateResponse: validateNetworkContextResponse,
    mojomId: 'services/network/public/mojom/network_context.mojom',
    fuzzMethods: {
      createURLLoaderFactory: {
        params: NetworkContext_CreateURLLoaderFactory_Params,
      },
      getCookieManager: {
        params: NetworkContext_GetCookieManager_Params,
      },
      getRestrictedCookieManager: {
        params: NetworkContext_GetRestrictedCookieManager_Params,
      },
      clearNetworkingHistorySince: {
        params: NetworkContext_ClearNetworkingHistorySince_Params,
      },
      clearHttpCache: {
        params: NetworkContext_ClearHttpCache_Params,
      },
      clearChannelIds: {
        params: NetworkContext_ClearChannelIds_Params,
      },
      clearHttpAuthCache: {
        params: NetworkContext_ClearHttpAuthCache_Params,
      },
      clearReportingCacheReports: {
        params: NetworkContext_ClearReportingCacheReports_Params,
      },
      clearReportingCacheClients: {
        params: NetworkContext_ClearReportingCacheClients_Params,
      },
      clearNetworkErrorLogging: {
        params: NetworkContext_ClearNetworkErrorLogging_Params,
      },
      setNetworkConditions: {
        params: NetworkContext_SetNetworkConditions_Params,
      },
      setAcceptLanguage: {
        params: NetworkContext_SetAcceptLanguage_Params,
      },
      setCTPolicy: {
        params: NetworkContext_SetCTPolicy_Params,
      },
      createUDPSocket: {
        params: NetworkContext_CreateUDPSocket_Params,
      },
      createTCPServerSocket: {
        params: NetworkContext_CreateTCPServerSocket_Params,
      },
      createTCPConnectedSocket: {
        params: NetworkContext_CreateTCPConnectedSocket_Params,
      },
      createWebSocket: {
        params: NetworkContext_CreateWebSocket_Params,
      },
      createNetLogExporter: {
        params: NetworkContext_CreateNetLogExporter_Params,
      },
      blockThirdPartyCookies: {
        params: NetworkContext_BlockThirdPartyCookies_Params,
      },
      addHSTSForTesting: {
        params: NetworkContext_AddHSTSForTesting_Params,
      },
      setFailingHttpTransactionForTesting: {
        params: NetworkContext_SetFailingHttpTransactionForTesting_Params,
      },
    },
  };
  NetworkContextStub.prototype.validator = validateNetworkContextRequest;
  NetworkContextProxy.prototype.validator = validateNetworkContextResponse;
  exports.kBrowserProcessId = kBrowserProcessId;
  exports.kInvalidProcessId = kInvalidProcessId;
  exports.NetworkContextParams = NetworkContextParams;
  exports.NetworkConditions = NetworkConditions;
  exports.ClearDataFilter = ClearDataFilter;
  exports.NetworkUsage = NetworkUsage;
  exports.URLLoaderFactoryParams = URLLoaderFactoryParams;
  exports.NetLogExporter = NetLogExporter;
  exports.NetLogExporterPtr = NetLogExporterPtr;
  exports.NetLogExporterAssociatedPtr = NetLogExporterAssociatedPtr;
  exports.NetworkContext = NetworkContext;
  exports.NetworkContextPtr = NetworkContextPtr;
  exports.NetworkContextAssociatedPtr = NetworkContextAssociatedPtr;
})();