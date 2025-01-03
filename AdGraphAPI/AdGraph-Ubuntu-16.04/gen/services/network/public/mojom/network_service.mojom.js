// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/network_service.mojom';
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
  var network_change_manager$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_change_manager.mojom', 'network_change_manager.mojom.js');
  }
  var network_context$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_context.mojom', 'network_context.mojom.js');
  }
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', 'url_loader.mojom.js');
  }
  var network_param$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_param.mojom', 'network_param.mojom.js');
  }
  var signed_tree_head$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/signed_tree_head.mojom', 'signed_tree_head.mojom.js');
  }
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', 'url_loader_factory.mojom.js');
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



  function SSLPrivateKey_Sign_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SSLPrivateKey_Sign_Params.prototype.initDefaults_ = function() {
    this.algorithm = 0;
    this.input = null;
  };
  SSLPrivateKey_Sign_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SSLPrivateKey_Sign_Params.generate = function(generator_) {
    var generated = new SSLPrivateKey_Sign_Params;
    generated.algorithm = generator_.generateUint16();
    generated.input = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  SSLPrivateKey_Sign_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.algorithm = mutator_.mutateUint16(this.algorithm);
    }
    if (mutator_.chooseMutateField()) {
      this.input = mutator_.mutateArray(this.input, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  SSLPrivateKey_Sign_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SSLPrivateKey_Sign_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SSLPrivateKey_Sign_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SSLPrivateKey_Sign_Params.validate = function(messageValidator, offset) {
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



    // validate SSLPrivateKey_Sign_Params.input
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SSLPrivateKey_Sign_Params.encodedSize = codec.kStructHeaderSize + 16;

  SSLPrivateKey_Sign_Params.decode = function(decoder) {
    var packed;
    var val = new SSLPrivateKey_Sign_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.algorithm = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.input = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  SSLPrivateKey_Sign_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SSLPrivateKey_Sign_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.algorithm);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.input);
  };
  function SSLPrivateKey_Sign_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SSLPrivateKey_Sign_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
    this.signature = null;
  };
  SSLPrivateKey_Sign_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SSLPrivateKey_Sign_ResponseParams.generate = function(generator_) {
    var generated = new SSLPrivateKey_Sign_ResponseParams;
    generated.netError = generator_.generateInt32();
    generated.signature = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  SSLPrivateKey_Sign_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    if (mutator_.chooseMutateField()) {
      this.signature = mutator_.mutateArray(this.signature, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  SSLPrivateKey_Sign_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SSLPrivateKey_Sign_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SSLPrivateKey_Sign_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SSLPrivateKey_Sign_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate SSLPrivateKey_Sign_ResponseParams.signature
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SSLPrivateKey_Sign_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  SSLPrivateKey_Sign_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SSLPrivateKey_Sign_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.signature = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  SSLPrivateKey_Sign_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SSLPrivateKey_Sign_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.signature);
  };
  function AuthChallengeResponder_OnAuthCredentials_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AuthChallengeResponder_OnAuthCredentials_Params.prototype.initDefaults_ = function() {
    this.credentials = null;
  };
  AuthChallengeResponder_OnAuthCredentials_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AuthChallengeResponder_OnAuthCredentials_Params.generate = function(generator_) {
    var generated = new AuthChallengeResponder_OnAuthCredentials_Params;
    generated.credentials = generator_.generateStruct(network.mojom.AuthCredentials, true);
    return generated;
  };

  AuthChallengeResponder_OnAuthCredentials_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.credentials = mutator_.mutateStruct(network.mojom.AuthCredentials, true);
    }
    return this;
  };
  AuthChallengeResponder_OnAuthCredentials_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AuthChallengeResponder_OnAuthCredentials_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AuthChallengeResponder_OnAuthCredentials_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AuthChallengeResponder_OnAuthCredentials_Params.validate = function(messageValidator, offset) {
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


    // validate AuthChallengeResponder_OnAuthCredentials_Params.credentials
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_param$.AuthCredentials, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AuthChallengeResponder_OnAuthCredentials_Params.encodedSize = codec.kStructHeaderSize + 8;

  AuthChallengeResponder_OnAuthCredentials_Params.decode = function(decoder) {
    var packed;
    var val = new AuthChallengeResponder_OnAuthCredentials_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.credentials = decoder.decodeStructPointer(network_param$.AuthCredentials);
    return val;
  };

  AuthChallengeResponder_OnAuthCredentials_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AuthChallengeResponder_OnAuthCredentials_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_param$.AuthCredentials, val.credentials);
  };
  function NetworkServiceClient_OnAuthRequired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceClient_OnAuthRequired_Params.prototype.initDefaults_ = function() {
    this.processId = 0;
    this.routingId = 0;
    this.requestId = 0;
    this.firstAuthAttempt = false;
    this.url = null;
    this.siteForCookies = null;
    this.authInfo = null;
    this.resourceType = 0;
    this.authChallengeResponder = new AuthChallengeResponderPtr();
  };
  NetworkServiceClient_OnAuthRequired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceClient_OnAuthRequired_Params.generate = function(generator_) {
    var generated = new NetworkServiceClient_OnAuthRequired_Params;
    generated.processId = generator_.generateUint32();
    generated.routingId = generator_.generateUint32();
    generated.requestId = generator_.generateUint32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.siteForCookies = generator_.generateStruct(url.mojom.Url, false);
    generated.firstAuthAttempt = generator_.generateBool();
    generated.authInfo = generator_.generateStruct(network.mojom.AuthChallengeInfo, false);
    generated.resourceType = generator_.generateInt32();
    generated.authChallengeResponder = generator_.generateInterface("network.mojom.AuthChallengeResponder", false);
    return generated;
  };

  NetworkServiceClient_OnAuthRequired_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateUint32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateUint32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateUint32(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.siteForCookies = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.firstAuthAttempt = mutator_.mutateBool(this.firstAuthAttempt);
    }
    if (mutator_.chooseMutateField()) {
      this.authInfo = mutator_.mutateStruct(network.mojom.AuthChallengeInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceType = mutator_.mutateInt32(this.resourceType);
    }
    if (mutator_.chooseMutateField()) {
      this.authChallengeResponder = mutator_.mutateInterface(this.authChallengeResponder, "network.mojom.AuthChallengeResponder", false);
    }
    return this;
  };
  NetworkServiceClient_OnAuthRequired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.authChallengeResponder !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.AuthChallengeResponderPtr"]);
    }
    return handles;
  };

  NetworkServiceClient_OnAuthRequired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceClient_OnAuthRequired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.authChallengeResponder = handles[idx++];;
    return idx;
  };

  NetworkServiceClient_OnAuthRequired_Params.validate = function(messageValidator, offset) {
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





    // validate NetworkServiceClient_OnAuthRequired_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkServiceClient_OnAuthRequired_Params.siteForCookies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate NetworkServiceClient_OnAuthRequired_Params.authInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, network_param$.AuthChallengeInfo, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate NetworkServiceClient_OnAuthRequired_Params.authChallengeResponder
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 44, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkServiceClient_OnAuthRequired_Params.encodedSize = codec.kStructHeaderSize + 56;

  NetworkServiceClient_OnAuthRequired_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceClient_OnAuthRequired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processId = decoder.decodeStruct(codec.Uint32);
    val.routingId = decoder.decodeStruct(codec.Uint32);
    val.requestId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.firstAuthAttempt = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.siteForCookies = decoder.decodeStructPointer(url$.Url);
    val.authInfo = decoder.decodeStructPointer(network_param$.AuthChallengeInfo);
    val.resourceType = decoder.decodeStruct(codec.Int32);
    val.authChallengeResponder = decoder.decodeStruct(new codec.Interface(AuthChallengeResponderPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceClient_OnAuthRequired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceClient_OnAuthRequired_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.processId);
    encoder.encodeStruct(codec.Uint32, val.routingId);
    encoder.encodeStruct(codec.Uint32, val.requestId);
    packed = 0;
    packed |= (val.firstAuthAttempt & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.siteForCookies);
    encoder.encodeStructPointer(network_param$.AuthChallengeInfo, val.authInfo);
    encoder.encodeStruct(codec.Int32, val.resourceType);
    encoder.encodeStruct(new codec.Interface(AuthChallengeResponderPtr), val.authChallengeResponder);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceClient_OnCertificateRequested_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceClient_OnCertificateRequested_Params.prototype.initDefaults_ = function() {
    this.processId = 0;
    this.routingId = 0;
    this.requestId = 0;
    this.certInfo = null;
  };
  NetworkServiceClient_OnCertificateRequested_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceClient_OnCertificateRequested_Params.generate = function(generator_) {
    var generated = new NetworkServiceClient_OnCertificateRequested_Params;
    generated.processId = generator_.generateUint32();
    generated.routingId = generator_.generateUint32();
    generated.requestId = generator_.generateUint32();
    generated.certInfo = generator_.generateStruct(network.mojom.SSLCertRequestInfo, false);
    return generated;
  };

  NetworkServiceClient_OnCertificateRequested_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateUint32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateUint32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateUint32(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.certInfo = mutator_.mutateStruct(network.mojom.SSLCertRequestInfo, false);
    }
    return this;
  };
  NetworkServiceClient_OnCertificateRequested_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceClient_OnCertificateRequested_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceClient_OnCertificateRequested_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceClient_OnCertificateRequested_Params.validate = function(messageValidator, offset) {
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





    // validate NetworkServiceClient_OnCertificateRequested_Params.certInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, network_param$.SSLCertRequestInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkServiceClient_OnCertificateRequested_Params.encodedSize = codec.kStructHeaderSize + 24;

  NetworkServiceClient_OnCertificateRequested_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceClient_OnCertificateRequested_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processId = decoder.decodeStruct(codec.Uint32);
    val.routingId = decoder.decodeStruct(codec.Uint32);
    val.requestId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.certInfo = decoder.decodeStructPointer(network_param$.SSLCertRequestInfo);
    return val;
  };

  NetworkServiceClient_OnCertificateRequested_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceClient_OnCertificateRequested_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.processId);
    encoder.encodeStruct(codec.Uint32, val.routingId);
    encoder.encodeStruct(codec.Uint32, val.requestId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(network_param$.SSLCertRequestInfo, val.certInfo);
  };
  function NetworkServiceClient_OnCertificateRequested_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceClient_OnCertificateRequested_ResponseParams.prototype.initDefaults_ = function() {
    this.x509Certificate = null;
    this.algorithmPreferences = null;
    this.sslPrivateKey = new SSLPrivateKeyPtr();
    this.cancelCertificateSelection = false;
  };
  NetworkServiceClient_OnCertificateRequested_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceClient_OnCertificateRequested_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceClient_OnCertificateRequested_ResponseParams;
    generated.x509Certificate = generator_.generateStruct(network.mojom.X509Certificate, false);
    generated.algorithmPreferences = generator_.generateArray(function() {
      return generator_.generateUint16();
    });
    generated.sslPrivateKey = generator_.generateInterface("network.mojom.SSLPrivateKey", false);
    generated.cancelCertificateSelection = generator_.generateBool();
    return generated;
  };

  NetworkServiceClient_OnCertificateRequested_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x509Certificate = mutator_.mutateStruct(network.mojom.X509Certificate, false);
    }
    if (mutator_.chooseMutateField()) {
      this.algorithmPreferences = mutator_.mutateArray(this.algorithmPreferences, function(val) {
        return mutator_.mutateUint16(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.sslPrivateKey = mutator_.mutateInterface(this.sslPrivateKey, "network.mojom.SSLPrivateKey", false);
    }
    if (mutator_.chooseMutateField()) {
      this.cancelCertificateSelection = mutator_.mutateBool(this.cancelCertificateSelection);
    }
    return this;
  };
  NetworkServiceClient_OnCertificateRequested_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sslPrivateKey !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.SSLPrivateKeyPtr"]);
    }
    return handles;
  };

  NetworkServiceClient_OnCertificateRequested_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceClient_OnCertificateRequested_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sslPrivateKey = handles[idx++];;
    return idx;
  };

  NetworkServiceClient_OnCertificateRequested_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate NetworkServiceClient_OnCertificateRequested_ResponseParams.x509Certificate
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_param$.X509Certificate, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkServiceClient_OnCertificateRequested_ResponseParams.algorithmPreferences
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 2, codec.Uint16, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkServiceClient_OnCertificateRequested_ResponseParams.sslPrivateKey
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NetworkServiceClient_OnCertificateRequested_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  NetworkServiceClient_OnCertificateRequested_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceClient_OnCertificateRequested_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x509Certificate = decoder.decodeStructPointer(network_param$.X509Certificate);
    val.algorithmPreferences = decoder.decodeArrayPointer(codec.Uint16);
    val.sslPrivateKey = decoder.decodeStruct(new codec.Interface(SSLPrivateKeyPtr));
    packed = decoder.readUint8();
    val.cancelCertificateSelection = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceClient_OnCertificateRequested_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceClient_OnCertificateRequested_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_param$.X509Certificate, val.x509Certificate);
    encoder.encodeArrayPointer(codec.Uint16, val.algorithmPreferences);
    encoder.encodeStruct(new codec.Interface(SSLPrivateKeyPtr), val.sslPrivateKey);
    packed = 0;
    packed |= (val.cancelCertificateSelection & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceClient_OnSSLCertificateError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceClient_OnSSLCertificateError_Params.prototype.initDefaults_ = function() {
    this.processId = 0;
    this.routingId = 0;
    this.requestId = 0;
    this.resourceType = 0;
    this.url = null;
    this.sslInfo = null;
    this.fatal = false;
  };
  NetworkServiceClient_OnSSLCertificateError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceClient_OnSSLCertificateError_Params.generate = function(generator_) {
    var generated = new NetworkServiceClient_OnSSLCertificateError_Params;
    generated.processId = generator_.generateUint32();
    generated.routingId = generator_.generateUint32();
    generated.requestId = generator_.generateUint32();
    generated.resourceType = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.sslInfo = generator_.generateStruct(network.mojom.SSLInfo, false);
    generated.fatal = generator_.generateBool();
    return generated;
  };

  NetworkServiceClient_OnSSLCertificateError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateUint32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateUint32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateUint32(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceType = mutator_.mutateInt32(this.resourceType);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sslInfo = mutator_.mutateStruct(network.mojom.SSLInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fatal = mutator_.mutateBool(this.fatal);
    }
    return this;
  };
  NetworkServiceClient_OnSSLCertificateError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceClient_OnSSLCertificateError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceClient_OnSSLCertificateError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceClient_OnSSLCertificateError_Params.validate = function(messageValidator, offset) {
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






    // validate NetworkServiceClient_OnSSLCertificateError_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkServiceClient_OnSSLCertificateError_Params.sslInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, network_param$.SSLInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NetworkServiceClient_OnSSLCertificateError_Params.encodedSize = codec.kStructHeaderSize + 40;

  NetworkServiceClient_OnSSLCertificateError_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceClient_OnSSLCertificateError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processId = decoder.decodeStruct(codec.Uint32);
    val.routingId = decoder.decodeStruct(codec.Uint32);
    val.requestId = decoder.decodeStruct(codec.Uint32);
    val.resourceType = decoder.decodeStruct(codec.Int32);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.sslInfo = decoder.decodeStructPointer(network_param$.SSLInfo);
    packed = decoder.readUint8();
    val.fatal = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceClient_OnSSLCertificateError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceClient_OnSSLCertificateError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.processId);
    encoder.encodeStruct(codec.Uint32, val.routingId);
    encoder.encodeStruct(codec.Uint32, val.requestId);
    encoder.encodeStruct(codec.Int32, val.resourceType);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(network_param$.SSLInfo, val.sslInfo);
    packed = 0;
    packed |= (val.fatal & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceClient_OnSSLCertificateError_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceClient_OnSSLCertificateError_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  NetworkServiceClient_OnSSLCertificateError_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceClient_OnSSLCertificateError_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceClient_OnSSLCertificateError_ResponseParams;
    generated.netError = generator_.generateInt32();
    return generated;
  };

  NetworkServiceClient_OnSSLCertificateError_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    return this;
  };
  NetworkServiceClient_OnSSLCertificateError_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceClient_OnSSLCertificateError_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceClient_OnSSLCertificateError_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceClient_OnSSLCertificateError_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkServiceClient_OnSSLCertificateError_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetworkServiceClient_OnSSLCertificateError_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceClient_OnSSLCertificateError_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceClient_OnSSLCertificateError_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceClient_OnSSLCertificateError_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = new NetworkServiceClientPtr();
  };
  NetworkService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_SetClient_Params.generate = function(generator_) {
    var generated = new NetworkService_SetClient_Params;
    generated.client = generator_.generateInterface("network.mojom.NetworkServiceClient", false);
    return generated;
  };

  NetworkService_SetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "network.mojom.NetworkServiceClient", false);
    }
    return this;
  };
  NetworkService_SetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.NetworkServiceClientPtr"]);
    }
    return handles;
  };

  NetworkService_SetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_SetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  NetworkService_SetClient_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(NetworkServiceClientPtr));
    return val;
  };

  NetworkService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(NetworkServiceClientPtr), val.client);
  };
  function NetworkService_CreateNetworkContext_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_CreateNetworkContext_Params.prototype.initDefaults_ = function() {
    this.context = new bindings.InterfaceRequest();
    this.params = null;
  };
  NetworkService_CreateNetworkContext_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_CreateNetworkContext_Params.generate = function(generator_) {
    var generated = new NetworkService_CreateNetworkContext_Params;
    generated.context = generator_.generateInterfaceRequest("network.mojom.NetworkContext", false);
    generated.params = generator_.generateStruct(network.mojom.NetworkContextParams, false);
    return generated;
  };

  NetworkService_CreateNetworkContext_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.context = mutator_.mutateInterfaceRequest(this.context, "network.mojom.NetworkContext", false);
    }
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(network.mojom.NetworkContextParams, false);
    }
    return this;
  };
  NetworkService_CreateNetworkContext_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.context !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.NetworkContextRequest"]);
    }
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  NetworkService_CreateNetworkContext_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_CreateNetworkContext_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.context = handles[idx++];;
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  NetworkService_CreateNetworkContext_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkService_CreateNetworkContext_Params.context
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkService_CreateNetworkContext_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, network_context$.NetworkContextParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkService_CreateNetworkContext_Params.encodedSize = codec.kStructHeaderSize + 16;

  NetworkService_CreateNetworkContext_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_CreateNetworkContext_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.context = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.params = decoder.decodeStructPointer(network_context$.NetworkContextParams);
    return val;
  };

  NetworkService_CreateNetworkContext_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_CreateNetworkContext_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.context);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(network_context$.NetworkContextParams, val.params);
  };
  function NetworkService_DisableQuic_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_DisableQuic_Params.prototype.initDefaults_ = function() {
  };
  NetworkService_DisableQuic_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_DisableQuic_Params.generate = function(generator_) {
    var generated = new NetworkService_DisableQuic_Params;
    return generated;
  };

  NetworkService_DisableQuic_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkService_DisableQuic_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkService_DisableQuic_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_DisableQuic_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkService_DisableQuic_Params.validate = function(messageValidator, offset) {
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

  NetworkService_DisableQuic_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetworkService_DisableQuic_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_DisableQuic_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkService_DisableQuic_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_DisableQuic_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkService_SetRawHeadersAccess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_SetRawHeadersAccess_Params.prototype.initDefaults_ = function() {
    this.processId = 0;
    this.allow = false;
  };
  NetworkService_SetRawHeadersAccess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_SetRawHeadersAccess_Params.generate = function(generator_) {
    var generated = new NetworkService_SetRawHeadersAccess_Params;
    generated.processId = generator_.generateUint32();
    generated.allow = generator_.generateBool();
    return generated;
  };

  NetworkService_SetRawHeadersAccess_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.processId = mutator_.mutateUint32(this.processId);
    }
    if (mutator_.chooseMutateField()) {
      this.allow = mutator_.mutateBool(this.allow);
    }
    return this;
  };
  NetworkService_SetRawHeadersAccess_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkService_SetRawHeadersAccess_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_SetRawHeadersAccess_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkService_SetRawHeadersAccess_Params.validate = function(messageValidator, offset) {
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

  NetworkService_SetRawHeadersAccess_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkService_SetRawHeadersAccess_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_SetRawHeadersAccess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.processId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.allow = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkService_SetRawHeadersAccess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_SetRawHeadersAccess_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.processId);
    packed = 0;
    packed |= (val.allow & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkService_GetNetworkChangeManager_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_GetNetworkChangeManager_Params.prototype.initDefaults_ = function() {
    this.networkChangeManager = new bindings.InterfaceRequest();
  };
  NetworkService_GetNetworkChangeManager_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_GetNetworkChangeManager_Params.generate = function(generator_) {
    var generated = new NetworkService_GetNetworkChangeManager_Params;
    generated.networkChangeManager = generator_.generateInterfaceRequest("network.mojom.NetworkChangeManager", false);
    return generated;
  };

  NetworkService_GetNetworkChangeManager_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.networkChangeManager = mutator_.mutateInterfaceRequest(this.networkChangeManager, "network.mojom.NetworkChangeManager", false);
    }
    return this;
  };
  NetworkService_GetNetworkChangeManager_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.networkChangeManager !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.NetworkChangeManagerRequest"]);
    }
    return handles;
  };

  NetworkService_GetNetworkChangeManager_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_GetNetworkChangeManager_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.networkChangeManager = handles[idx++];;
    return idx;
  };

  NetworkService_GetNetworkChangeManager_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkService_GetNetworkChangeManager_Params.networkChangeManager
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkService_GetNetworkChangeManager_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkService_GetNetworkChangeManager_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_GetNetworkChangeManager_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.networkChangeManager = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkService_GetNetworkChangeManager_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_GetNetworkChangeManager_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.networkChangeManager);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkService_GetTotalNetworkUsages_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_GetTotalNetworkUsages_Params.prototype.initDefaults_ = function() {
  };
  NetworkService_GetTotalNetworkUsages_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_GetTotalNetworkUsages_Params.generate = function(generator_) {
    var generated = new NetworkService_GetTotalNetworkUsages_Params;
    return generated;
  };

  NetworkService_GetTotalNetworkUsages_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkService_GetTotalNetworkUsages_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkService_GetTotalNetworkUsages_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_GetTotalNetworkUsages_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkService_GetTotalNetworkUsages_Params.validate = function(messageValidator, offset) {
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

  NetworkService_GetTotalNetworkUsages_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetworkService_GetTotalNetworkUsages_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_GetTotalNetworkUsages_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkService_GetTotalNetworkUsages_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_GetTotalNetworkUsages_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkService_GetTotalNetworkUsages_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_GetTotalNetworkUsages_ResponseParams.prototype.initDefaults_ = function() {
    this.totalNetworkUsages = null;
  };
  NetworkService_GetTotalNetworkUsages_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_GetTotalNetworkUsages_ResponseParams.generate = function(generator_) {
    var generated = new NetworkService_GetTotalNetworkUsages_ResponseParams;
    generated.totalNetworkUsages = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.NetworkUsage, false);
    });
    return generated;
  };

  NetworkService_GetTotalNetworkUsages_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.totalNetworkUsages = mutator_.mutateArray(this.totalNetworkUsages, function(val) {
        return mutator_.mutateStruct(network.mojom.NetworkUsage, false);
      });
    }
    return this;
  };
  NetworkService_GetTotalNetworkUsages_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkService_GetTotalNetworkUsages_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_GetTotalNetworkUsages_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkService_GetTotalNetworkUsages_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate NetworkService_GetTotalNetworkUsages_ResponseParams.totalNetworkUsages
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(network_context$.NetworkUsage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkService_GetTotalNetworkUsages_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetworkService_GetTotalNetworkUsages_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkService_GetTotalNetworkUsages_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.totalNetworkUsages = decoder.decodeArrayPointer(new codec.PointerTo(network_context$.NetworkUsage));
    return val;
  };

  NetworkService_GetTotalNetworkUsages_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_GetTotalNetworkUsages_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(network_context$.NetworkUsage), val.totalNetworkUsages);
  };
  function NetworkService_UpdateSignedTreeHead_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkService_UpdateSignedTreeHead_Params.prototype.initDefaults_ = function() {
    this.signedTreeHead = null;
  };
  NetworkService_UpdateSignedTreeHead_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkService_UpdateSignedTreeHead_Params.generate = function(generator_) {
    var generated = new NetworkService_UpdateSignedTreeHead_Params;
    generated.signedTreeHead = generator_.generateStruct(network.mojom.SignedTreeHead, false);
    return generated;
  };

  NetworkService_UpdateSignedTreeHead_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.signedTreeHead = mutator_.mutateStruct(network.mojom.SignedTreeHead, false);
    }
    return this;
  };
  NetworkService_UpdateSignedTreeHead_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkService_UpdateSignedTreeHead_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkService_UpdateSignedTreeHead_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkService_UpdateSignedTreeHead_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkService_UpdateSignedTreeHead_Params.signedTreeHead
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, signed_tree_head$.SignedTreeHead, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkService_UpdateSignedTreeHead_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkService_UpdateSignedTreeHead_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkService_UpdateSignedTreeHead_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.signedTreeHead = decoder.decodeStructPointer(signed_tree_head$.SignedTreeHead);
    return val;
  };

  NetworkService_UpdateSignedTreeHead_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkService_UpdateSignedTreeHead_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(signed_tree_head$.SignedTreeHead, val.signedTreeHead);
  };
  var kSSLPrivateKey_Sign_Name = 444714333;

  function SSLPrivateKeyPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SSLPrivateKey,
                                                   handleOrPtrInfo);
  }

  function SSLPrivateKeyAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SSLPrivateKey, associatedInterfacePtrInfo);
  }

  SSLPrivateKeyAssociatedPtr.prototype =
      Object.create(SSLPrivateKeyPtr.prototype);
  SSLPrivateKeyAssociatedPtr.prototype.constructor =
      SSLPrivateKeyAssociatedPtr;

  function SSLPrivateKeyProxy(receiver) {
    this.receiver_ = receiver;
  }
  SSLPrivateKeyPtr.prototype.sign = function() {
    return SSLPrivateKeyProxy.prototype.sign
        .apply(this.ptr.getProxy(), arguments);
  };

  SSLPrivateKeyProxy.prototype.sign = function(algorithm, input) {
    var params_ = new SSLPrivateKey_Sign_Params();
    params_.algorithm = algorithm;
    params_.input = input;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSSLPrivateKey_Sign_Name,
          codec.align(SSLPrivateKey_Sign_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SSLPrivateKey_Sign_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SSLPrivateKey_Sign_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SSLPrivateKeyStub(delegate) {
    this.delegate_ = delegate;
  }
  SSLPrivateKeyStub.prototype.sign = function(algorithm, input) {
    return this.delegate_ && this.delegate_.sign && this.delegate_.sign(algorithm, input);
  }

  SSLPrivateKeyStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SSLPrivateKeyStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSSLPrivateKey_Sign_Name:
      var params = reader.decodeStruct(SSLPrivateKey_Sign_Params);
      this.sign(params.algorithm, params.input).then(function(response) {
        var responseParams =
            new SSLPrivateKey_Sign_ResponseParams();
        responseParams.netError = response.netError;
        responseParams.signature = response.signature;
        var builder = new codec.MessageV1Builder(
            kSSLPrivateKey_Sign_Name,
            codec.align(SSLPrivateKey_Sign_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SSLPrivateKey_Sign_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSSLPrivateKeyRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSSLPrivateKey_Sign_Name:
        if (message.expectsResponse())
          paramsClass = SSLPrivateKey_Sign_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSSLPrivateKeyResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSSLPrivateKey_Sign_Name:
        if (message.isResponse())
          paramsClass = SSLPrivateKey_Sign_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SSLPrivateKey = {
    name: 'network.mojom.SSLPrivateKey',
    kVersion: 0,
    ptrClass: SSLPrivateKeyPtr,
    proxyClass: SSLPrivateKeyProxy,
    stubClass: SSLPrivateKeyStub,
    validateRequest: validateSSLPrivateKeyRequest,
    validateResponse: validateSSLPrivateKeyResponse,
    mojomId: 'services/network/public/mojom/network_service.mojom',
    fuzzMethods: {
      sign: {
        params: SSLPrivateKey_Sign_Params,
      },
    },
  };
  SSLPrivateKeyStub.prototype.validator = validateSSLPrivateKeyRequest;
  SSLPrivateKeyProxy.prototype.validator = validateSSLPrivateKeyResponse;
  var kAuthChallengeResponder_OnAuthCredentials_Name = 1627449351;

  function AuthChallengeResponderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AuthChallengeResponder,
                                                   handleOrPtrInfo);
  }

  function AuthChallengeResponderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AuthChallengeResponder, associatedInterfacePtrInfo);
  }

  AuthChallengeResponderAssociatedPtr.prototype =
      Object.create(AuthChallengeResponderPtr.prototype);
  AuthChallengeResponderAssociatedPtr.prototype.constructor =
      AuthChallengeResponderAssociatedPtr;

  function AuthChallengeResponderProxy(receiver) {
    this.receiver_ = receiver;
  }
  AuthChallengeResponderPtr.prototype.onAuthCredentials = function() {
    return AuthChallengeResponderProxy.prototype.onAuthCredentials
        .apply(this.ptr.getProxy(), arguments);
  };

  AuthChallengeResponderProxy.prototype.onAuthCredentials = function(credentials) {
    var params_ = new AuthChallengeResponder_OnAuthCredentials_Params();
    params_.credentials = credentials;
    var builder = new codec.MessageV0Builder(
        kAuthChallengeResponder_OnAuthCredentials_Name,
        codec.align(AuthChallengeResponder_OnAuthCredentials_Params.encodedSize));
    builder.encodeStruct(AuthChallengeResponder_OnAuthCredentials_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AuthChallengeResponderStub(delegate) {
    this.delegate_ = delegate;
  }
  AuthChallengeResponderStub.prototype.onAuthCredentials = function(credentials) {
    return this.delegate_ && this.delegate_.onAuthCredentials && this.delegate_.onAuthCredentials(credentials);
  }

  AuthChallengeResponderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAuthChallengeResponder_OnAuthCredentials_Name:
      var params = reader.decodeStruct(AuthChallengeResponder_OnAuthCredentials_Params);
      this.onAuthCredentials(params.credentials);
      return true;
    default:
      return false;
    }
  };

  AuthChallengeResponderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAuthChallengeResponderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAuthChallengeResponder_OnAuthCredentials_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AuthChallengeResponder_OnAuthCredentials_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAuthChallengeResponderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AuthChallengeResponder = {
    name: 'network.mojom.AuthChallengeResponder',
    kVersion: 0,
    ptrClass: AuthChallengeResponderPtr,
    proxyClass: AuthChallengeResponderProxy,
    stubClass: AuthChallengeResponderStub,
    validateRequest: validateAuthChallengeResponderRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/network_service.mojom',
    fuzzMethods: {
      onAuthCredentials: {
        params: AuthChallengeResponder_OnAuthCredentials_Params,
      },
    },
  };
  AuthChallengeResponderStub.prototype.validator = validateAuthChallengeResponderRequest;
  AuthChallengeResponderProxy.prototype.validator = null;
  var kNetworkServiceClient_OnAuthRequired_Name = 807022739;
  var kNetworkServiceClient_OnCertificateRequested_Name = 1986556047;
  var kNetworkServiceClient_OnSSLCertificateError_Name = 187239211;

  function NetworkServiceClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetworkServiceClient,
                                                   handleOrPtrInfo);
  }

  function NetworkServiceClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetworkServiceClient, associatedInterfacePtrInfo);
  }

  NetworkServiceClientAssociatedPtr.prototype =
      Object.create(NetworkServiceClientPtr.prototype);
  NetworkServiceClientAssociatedPtr.prototype.constructor =
      NetworkServiceClientAssociatedPtr;

  function NetworkServiceClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetworkServiceClientPtr.prototype.onAuthRequired = function() {
    return NetworkServiceClientProxy.prototype.onAuthRequired
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceClientProxy.prototype.onAuthRequired = function(processId, routingId, requestId, url, siteForCookies, firstAuthAttempt, authInfo, resourceType, authChallengeResponder) {
    var params_ = new NetworkServiceClient_OnAuthRequired_Params();
    params_.processId = processId;
    params_.routingId = routingId;
    params_.requestId = requestId;
    params_.url = url;
    params_.siteForCookies = siteForCookies;
    params_.firstAuthAttempt = firstAuthAttempt;
    params_.authInfo = authInfo;
    params_.resourceType = resourceType;
    params_.authChallengeResponder = authChallengeResponder;
    var builder = new codec.MessageV0Builder(
        kNetworkServiceClient_OnAuthRequired_Name,
        codec.align(NetworkServiceClient_OnAuthRequired_Params.encodedSize));
    builder.encodeStruct(NetworkServiceClient_OnAuthRequired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServiceClientPtr.prototype.onCertificateRequested = function() {
    return NetworkServiceClientProxy.prototype.onCertificateRequested
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceClientProxy.prototype.onCertificateRequested = function(processId, routingId, requestId, certInfo) {
    var params_ = new NetworkServiceClient_OnCertificateRequested_Params();
    params_.processId = processId;
    params_.routingId = routingId;
    params_.requestId = requestId;
    params_.certInfo = certInfo;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceClient_OnCertificateRequested_Name,
          codec.align(NetworkServiceClient_OnCertificateRequested_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceClient_OnCertificateRequested_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceClient_OnCertificateRequested_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkServiceClientPtr.prototype.onSSLCertificateError = function() {
    return NetworkServiceClientProxy.prototype.onSSLCertificateError
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceClientProxy.prototype.onSSLCertificateError = function(processId, routingId, requestId, resourceType, url, sslInfo, fatal) {
    var params_ = new NetworkServiceClient_OnSSLCertificateError_Params();
    params_.processId = processId;
    params_.routingId = routingId;
    params_.requestId = requestId;
    params_.resourceType = resourceType;
    params_.url = url;
    params_.sslInfo = sslInfo;
    params_.fatal = fatal;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceClient_OnSSLCertificateError_Name,
          codec.align(NetworkServiceClient_OnSSLCertificateError_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceClient_OnSSLCertificateError_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceClient_OnSSLCertificateError_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NetworkServiceClientStub(delegate) {
    this.delegate_ = delegate;
  }
  NetworkServiceClientStub.prototype.onAuthRequired = function(processId, routingId, requestId, url, siteForCookies, firstAuthAttempt, authInfo, resourceType, authChallengeResponder) {
    return this.delegate_ && this.delegate_.onAuthRequired && this.delegate_.onAuthRequired(processId, routingId, requestId, url, siteForCookies, firstAuthAttempt, authInfo, resourceType, authChallengeResponder);
  }
  NetworkServiceClientStub.prototype.onCertificateRequested = function(processId, routingId, requestId, certInfo) {
    return this.delegate_ && this.delegate_.onCertificateRequested && this.delegate_.onCertificateRequested(processId, routingId, requestId, certInfo);
  }
  NetworkServiceClientStub.prototype.onSSLCertificateError = function(processId, routingId, requestId, resourceType, url, sslInfo, fatal) {
    return this.delegate_ && this.delegate_.onSSLCertificateError && this.delegate_.onSSLCertificateError(processId, routingId, requestId, resourceType, url, sslInfo, fatal);
  }

  NetworkServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkServiceClient_OnAuthRequired_Name:
      var params = reader.decodeStruct(NetworkServiceClient_OnAuthRequired_Params);
      this.onAuthRequired(params.processId, params.routingId, params.requestId, params.url, params.siteForCookies, params.firstAuthAttempt, params.authInfo, params.resourceType, params.authChallengeResponder);
      return true;
    default:
      return false;
    }
  };

  NetworkServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkServiceClient_OnCertificateRequested_Name:
      var params = reader.decodeStruct(NetworkServiceClient_OnCertificateRequested_Params);
      this.onCertificateRequested(params.processId, params.routingId, params.requestId, params.certInfo).then(function(response) {
        var responseParams =
            new NetworkServiceClient_OnCertificateRequested_ResponseParams();
        responseParams.x509Certificate = response.x509Certificate;
        responseParams.algorithmPreferences = response.algorithmPreferences;
        responseParams.sslPrivateKey = response.sslPrivateKey;
        responseParams.cancelCertificateSelection = response.cancelCertificateSelection;
        var builder = new codec.MessageV1Builder(
            kNetworkServiceClient_OnCertificateRequested_Name,
            codec.align(NetworkServiceClient_OnCertificateRequested_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceClient_OnCertificateRequested_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkServiceClient_OnSSLCertificateError_Name:
      var params = reader.decodeStruct(NetworkServiceClient_OnSSLCertificateError_Params);
      this.onSSLCertificateError(params.processId, params.routingId, params.requestId, params.resourceType, params.url, params.sslInfo, params.fatal).then(function(response) {
        var responseParams =
            new NetworkServiceClient_OnSSLCertificateError_ResponseParams();
        responseParams.netError = response.netError;
        var builder = new codec.MessageV1Builder(
            kNetworkServiceClient_OnSSLCertificateError_Name,
            codec.align(NetworkServiceClient_OnSSLCertificateError_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceClient_OnSSLCertificateError_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetworkServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetworkServiceClient_OnAuthRequired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkServiceClient_OnAuthRequired_Params;
      break;
      case kNetworkServiceClient_OnCertificateRequested_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceClient_OnCertificateRequested_Params;
      break;
      case kNetworkServiceClient_OnSSLCertificateError_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceClient_OnSSLCertificateError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetworkServiceClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetworkServiceClient_OnCertificateRequested_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceClient_OnCertificateRequested_ResponseParams;
        break;
      case kNetworkServiceClient_OnSSLCertificateError_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceClient_OnSSLCertificateError_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetworkServiceClient = {
    name: 'network.mojom.NetworkServiceClient',
    kVersion: 0,
    ptrClass: NetworkServiceClientPtr,
    proxyClass: NetworkServiceClientProxy,
    stubClass: NetworkServiceClientStub,
    validateRequest: validateNetworkServiceClientRequest,
    validateResponse: validateNetworkServiceClientResponse,
    mojomId: 'services/network/public/mojom/network_service.mojom',
    fuzzMethods: {
      onAuthRequired: {
        params: NetworkServiceClient_OnAuthRequired_Params,
      },
      onCertificateRequested: {
        params: NetworkServiceClient_OnCertificateRequested_Params,
      },
      onSSLCertificateError: {
        params: NetworkServiceClient_OnSSLCertificateError_Params,
      },
    },
  };
  NetworkServiceClientStub.prototype.validator = validateNetworkServiceClientRequest;
  NetworkServiceClientProxy.prototype.validator = validateNetworkServiceClientResponse;
  var kNetworkService_SetClient_Name = 779156562;
  var kNetworkService_CreateNetworkContext_Name = 805688084;
  var kNetworkService_DisableQuic_Name = 1459203628;
  var kNetworkService_SetRawHeadersAccess_Name = 979136440;
  var kNetworkService_GetNetworkChangeManager_Name = 1645362113;
  var kNetworkService_GetTotalNetworkUsages_Name = 1007273066;
  var kNetworkService_UpdateSignedTreeHead_Name = 50895349;

  function NetworkServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetworkService,
                                                   handleOrPtrInfo);
  }

  function NetworkServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetworkService, associatedInterfacePtrInfo);
  }

  NetworkServiceAssociatedPtr.prototype =
      Object.create(NetworkServicePtr.prototype);
  NetworkServiceAssociatedPtr.prototype.constructor =
      NetworkServiceAssociatedPtr;

  function NetworkServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetworkServicePtr.prototype.setClient = function() {
    return NetworkServiceProxy.prototype.setClient
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.setClient = function(client) {
    var params_ = new NetworkService_SetClient_Params();
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kNetworkService_SetClient_Name,
        codec.align(NetworkService_SetClient_Params.encodedSize));
    builder.encodeStruct(NetworkService_SetClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServicePtr.prototype.createNetworkContext = function() {
    return NetworkServiceProxy.prototype.createNetworkContext
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.createNetworkContext = function(context, params) {
    var params_ = new NetworkService_CreateNetworkContext_Params();
    params_.context = context;
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kNetworkService_CreateNetworkContext_Name,
        codec.align(NetworkService_CreateNetworkContext_Params.encodedSize));
    builder.encodeStruct(NetworkService_CreateNetworkContext_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServicePtr.prototype.disableQuic = function() {
    return NetworkServiceProxy.prototype.disableQuic
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.disableQuic = function() {
    var params_ = new NetworkService_DisableQuic_Params();
    var builder = new codec.MessageV0Builder(
        kNetworkService_DisableQuic_Name,
        codec.align(NetworkService_DisableQuic_Params.encodedSize));
    builder.encodeStruct(NetworkService_DisableQuic_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServicePtr.prototype.setRawHeadersAccess = function() {
    return NetworkServiceProxy.prototype.setRawHeadersAccess
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.setRawHeadersAccess = function(processId, allow) {
    var params_ = new NetworkService_SetRawHeadersAccess_Params();
    params_.processId = processId;
    params_.allow = allow;
    var builder = new codec.MessageV0Builder(
        kNetworkService_SetRawHeadersAccess_Name,
        codec.align(NetworkService_SetRawHeadersAccess_Params.encodedSize));
    builder.encodeStruct(NetworkService_SetRawHeadersAccess_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServicePtr.prototype.getNetworkChangeManager = function() {
    return NetworkServiceProxy.prototype.getNetworkChangeManager
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.getNetworkChangeManager = function(networkChangeManager) {
    var params_ = new NetworkService_GetNetworkChangeManager_Params();
    params_.networkChangeManager = networkChangeManager;
    var builder = new codec.MessageV0Builder(
        kNetworkService_GetNetworkChangeManager_Name,
        codec.align(NetworkService_GetNetworkChangeManager_Params.encodedSize));
    builder.encodeStruct(NetworkService_GetNetworkChangeManager_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServicePtr.prototype.getTotalNetworkUsages = function() {
    return NetworkServiceProxy.prototype.getTotalNetworkUsages
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.getTotalNetworkUsages = function() {
    var params_ = new NetworkService_GetTotalNetworkUsages_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkService_GetTotalNetworkUsages_Name,
          codec.align(NetworkService_GetTotalNetworkUsages_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkService_GetTotalNetworkUsages_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkService_GetTotalNetworkUsages_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkServicePtr.prototype.updateSignedTreeHead = function() {
    return NetworkServiceProxy.prototype.updateSignedTreeHead
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceProxy.prototype.updateSignedTreeHead = function(signedTreeHead) {
    var params_ = new NetworkService_UpdateSignedTreeHead_Params();
    params_.signedTreeHead = signedTreeHead;
    var builder = new codec.MessageV0Builder(
        kNetworkService_UpdateSignedTreeHead_Name,
        codec.align(NetworkService_UpdateSignedTreeHead_Params.encodedSize));
    builder.encodeStruct(NetworkService_UpdateSignedTreeHead_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NetworkServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  NetworkServiceStub.prototype.setClient = function(client) {
    return this.delegate_ && this.delegate_.setClient && this.delegate_.setClient(client);
  }
  NetworkServiceStub.prototype.createNetworkContext = function(context, params) {
    return this.delegate_ && this.delegate_.createNetworkContext && this.delegate_.createNetworkContext(context, params);
  }
  NetworkServiceStub.prototype.disableQuic = function() {
    return this.delegate_ && this.delegate_.disableQuic && this.delegate_.disableQuic();
  }
  NetworkServiceStub.prototype.setRawHeadersAccess = function(processId, allow) {
    return this.delegate_ && this.delegate_.setRawHeadersAccess && this.delegate_.setRawHeadersAccess(processId, allow);
  }
  NetworkServiceStub.prototype.getNetworkChangeManager = function(networkChangeManager) {
    return this.delegate_ && this.delegate_.getNetworkChangeManager && this.delegate_.getNetworkChangeManager(networkChangeManager);
  }
  NetworkServiceStub.prototype.getTotalNetworkUsages = function() {
    return this.delegate_ && this.delegate_.getTotalNetworkUsages && this.delegate_.getTotalNetworkUsages();
  }
  NetworkServiceStub.prototype.updateSignedTreeHead = function(signedTreeHead) {
    return this.delegate_ && this.delegate_.updateSignedTreeHead && this.delegate_.updateSignedTreeHead(signedTreeHead);
  }

  NetworkServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkService_SetClient_Name:
      var params = reader.decodeStruct(NetworkService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kNetworkService_CreateNetworkContext_Name:
      var params = reader.decodeStruct(NetworkService_CreateNetworkContext_Params);
      this.createNetworkContext(params.context, params.params);
      return true;
    case kNetworkService_DisableQuic_Name:
      var params = reader.decodeStruct(NetworkService_DisableQuic_Params);
      this.disableQuic();
      return true;
    case kNetworkService_SetRawHeadersAccess_Name:
      var params = reader.decodeStruct(NetworkService_SetRawHeadersAccess_Params);
      this.setRawHeadersAccess(params.processId, params.allow);
      return true;
    case kNetworkService_GetNetworkChangeManager_Name:
      var params = reader.decodeStruct(NetworkService_GetNetworkChangeManager_Params);
      this.getNetworkChangeManager(params.networkChangeManager);
      return true;
    case kNetworkService_UpdateSignedTreeHead_Name:
      var params = reader.decodeStruct(NetworkService_UpdateSignedTreeHead_Params);
      this.updateSignedTreeHead(params.signedTreeHead);
      return true;
    default:
      return false;
    }
  };

  NetworkServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkService_GetTotalNetworkUsages_Name:
      var params = reader.decodeStruct(NetworkService_GetTotalNetworkUsages_Params);
      this.getTotalNetworkUsages().then(function(response) {
        var responseParams =
            new NetworkService_GetTotalNetworkUsages_ResponseParams();
        responseParams.totalNetworkUsages = response.totalNetworkUsages;
        var builder = new codec.MessageV1Builder(
            kNetworkService_GetTotalNetworkUsages_Name,
            codec.align(NetworkService_GetTotalNetworkUsages_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkService_GetTotalNetworkUsages_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetworkServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetworkService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkService_SetClient_Params;
      break;
      case kNetworkService_CreateNetworkContext_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkService_CreateNetworkContext_Params;
      break;
      case kNetworkService_DisableQuic_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkService_DisableQuic_Params;
      break;
      case kNetworkService_SetRawHeadersAccess_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkService_SetRawHeadersAccess_Params;
      break;
      case kNetworkService_GetNetworkChangeManager_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkService_GetNetworkChangeManager_Params;
      break;
      case kNetworkService_GetTotalNetworkUsages_Name:
        if (message.expectsResponse())
          paramsClass = NetworkService_GetTotalNetworkUsages_Params;
      break;
      case kNetworkService_UpdateSignedTreeHead_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkService_UpdateSignedTreeHead_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetworkServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetworkService_GetTotalNetworkUsages_Name:
        if (message.isResponse())
          paramsClass = NetworkService_GetTotalNetworkUsages_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetworkService = {
    name: 'network.mojom.NetworkService',
    kVersion: 0,
    ptrClass: NetworkServicePtr,
    proxyClass: NetworkServiceProxy,
    stubClass: NetworkServiceStub,
    validateRequest: validateNetworkServiceRequest,
    validateResponse: validateNetworkServiceResponse,
    mojomId: 'services/network/public/mojom/network_service.mojom',
    fuzzMethods: {
      setClient: {
        params: NetworkService_SetClient_Params,
      },
      createNetworkContext: {
        params: NetworkService_CreateNetworkContext_Params,
      },
      disableQuic: {
        params: NetworkService_DisableQuic_Params,
      },
      setRawHeadersAccess: {
        params: NetworkService_SetRawHeadersAccess_Params,
      },
      getNetworkChangeManager: {
        params: NetworkService_GetNetworkChangeManager_Params,
      },
      getTotalNetworkUsages: {
        params: NetworkService_GetTotalNetworkUsages_Params,
      },
      updateSignedTreeHead: {
        params: NetworkService_UpdateSignedTreeHead_Params,
      },
    },
  };
  NetworkServiceStub.prototype.validator = validateNetworkServiceRequest;
  NetworkServiceProxy.prototype.validator = validateNetworkServiceResponse;
  exports.SSLPrivateKey = SSLPrivateKey;
  exports.SSLPrivateKeyPtr = SSLPrivateKeyPtr;
  exports.SSLPrivateKeyAssociatedPtr = SSLPrivateKeyAssociatedPtr;
  exports.AuthChallengeResponder = AuthChallengeResponder;
  exports.AuthChallengeResponderPtr = AuthChallengeResponderPtr;
  exports.AuthChallengeResponderAssociatedPtr = AuthChallengeResponderAssociatedPtr;
  exports.NetworkServiceClient = NetworkServiceClient;
  exports.NetworkServiceClientPtr = NetworkServiceClientPtr;
  exports.NetworkServiceClientAssociatedPtr = NetworkServiceClientAssociatedPtr;
  exports.NetworkService = NetworkService;
  exports.NetworkServicePtr = NetworkServicePtr;
  exports.NetworkServiceAssociatedPtr = NetworkServiceAssociatedPtr;
})();