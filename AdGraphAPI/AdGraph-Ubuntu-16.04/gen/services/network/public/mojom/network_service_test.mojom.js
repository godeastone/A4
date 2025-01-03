// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/network_service_test.mojom';
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
  var network_param$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_param.mojom', 'network_param.mojom.js');
  }



  function Rule(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Rule.prototype.initDefaults_ = function() {
    this.hostPattern = null;
    this.replacement = null;
  };
  Rule.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Rule.generate = function(generator_) {
    var generated = new Rule;
    generated.hostPattern = generator_.generateString(false);
    generated.replacement = generator_.generateString(false);
    return generated;
  };

  Rule.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostPattern = mutator_.mutateString(this.hostPattern, false);
    }
    if (mutator_.chooseMutateField()) {
      this.replacement = mutator_.mutateString(this.replacement, false);
    }
    return this;
  };
  Rule.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Rule.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Rule.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Rule.validate = function(messageValidator, offset) {
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


    // validate Rule.hostPattern
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Rule.replacement
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Rule.encodedSize = codec.kStructHeaderSize + 16;

  Rule.decode = function(decoder) {
    var packed;
    var val = new Rule();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostPattern = decoder.decodeStruct(codec.String);
    val.replacement = decoder.decodeStruct(codec.String);
    return val;
  };

  Rule.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Rule.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.hostPattern);
    encoder.encodeStruct(codec.String, val.replacement);
  };
  function NetworkServiceTest_AddRules_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_AddRules_Params.prototype.initDefaults_ = function() {
    this.rules = null;
  };
  NetworkServiceTest_AddRules_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_AddRules_Params.generate = function(generator_) {
    var generated = new NetworkServiceTest_AddRules_Params;
    generated.rules = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.Rule, false);
    });
    return generated;
  };

  NetworkServiceTest_AddRules_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rules = mutator_.mutateArray(this.rules, function(val) {
        return mutator_.mutateStruct(network.mojom.Rule, false);
      });
    }
    return this;
  };
  NetworkServiceTest_AddRules_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_AddRules_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_AddRules_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_AddRules_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkServiceTest_AddRules_Params.rules
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(Rule), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkServiceTest_AddRules_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkServiceTest_AddRules_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_AddRules_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rules = decoder.decodeArrayPointer(new codec.PointerTo(Rule));
    return val;
  };

  NetworkServiceTest_AddRules_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_AddRules_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(Rule), val.rules);
  };
  function NetworkServiceTest_AddRules_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_AddRules_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkServiceTest_AddRules_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_AddRules_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceTest_AddRules_ResponseParams;
    return generated;
  };

  NetworkServiceTest_AddRules_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkServiceTest_AddRules_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_AddRules_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_AddRules_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_AddRules_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_AddRules_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkServiceTest_AddRules_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_AddRules_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkServiceTest_AddRules_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_AddRules_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkServiceTest_SimulateNetworkChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_SimulateNetworkChange_Params.prototype.initDefaults_ = function() {
    this.type = 0;
  };
  NetworkServiceTest_SimulateNetworkChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_SimulateNetworkChange_Params.generate = function(generator_) {
    var generated = new NetworkServiceTest_SimulateNetworkChange_Params;
    generated.type = generator_.generateEnum(0, 7);
    return generated;
  };

  NetworkServiceTest_SimulateNetworkChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 7);
    }
    return this;
  };
  NetworkServiceTest_SimulateNetworkChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_SimulateNetworkChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_SimulateNetworkChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_SimulateNetworkChange_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkServiceTest_SimulateNetworkChange_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, network_change_manager$.ConnectionType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkServiceTest_SimulateNetworkChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkServiceTest_SimulateNetworkChange_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_SimulateNetworkChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceTest_SimulateNetworkChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_SimulateNetworkChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceTest_SimulateNetworkChange_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_SimulateNetworkChange_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkServiceTest_SimulateNetworkChange_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_SimulateNetworkChange_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceTest_SimulateNetworkChange_ResponseParams;
    return generated;
  };

  NetworkServiceTest_SimulateNetworkChange_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkServiceTest_SimulateNetworkChange_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_SimulateNetworkChange_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_SimulateNetworkChange_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_SimulateNetworkChange_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_SimulateNetworkChange_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkServiceTest_SimulateNetworkChange_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_SimulateNetworkChange_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkServiceTest_SimulateNetworkChange_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_SimulateNetworkChange_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkServiceTest_SimulateCrash_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_SimulateCrash_Params.prototype.initDefaults_ = function() {
  };
  NetworkServiceTest_SimulateCrash_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_SimulateCrash_Params.generate = function(generator_) {
    var generated = new NetworkServiceTest_SimulateCrash_Params;
    return generated;
  };

  NetworkServiceTest_SimulateCrash_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkServiceTest_SimulateCrash_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_SimulateCrash_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_SimulateCrash_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_SimulateCrash_Params.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_SimulateCrash_Params.encodedSize = codec.kStructHeaderSize + 0;

  NetworkServiceTest_SimulateCrash_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_SimulateCrash_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkServiceTest_SimulateCrash_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_SimulateCrash_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkServiceTest_MockCertVerifierSetDefaultResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.prototype.initDefaults_ = function() {
    this.defaultResult = 0;
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.generate = function(generator_) {
    var generated = new NetworkServiceTest_MockCertVerifierSetDefaultResult_Params;
    generated.defaultResult = generator_.generateInt32();
    return generated;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.defaultResult = mutator_.mutateInt32(this.defaultResult);
    }
    return this;
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_MockCertVerifierSetDefaultResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.defaultResult = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.defaultResult);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams;
    return generated;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.prototype.initDefaults_ = function() {
    this.cert = null;
    this.hostPattern = null;
    this.verifyResult = null;
    this.rv = 0;
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.generate = function(generator_) {
    var generated = new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params;
    generated.cert = generator_.generateStruct(network.mojom.X509Certificate, false);
    generated.hostPattern = generator_.generateString(false);
    generated.verifyResult = generator_.generateStruct(network.mojom.CertVerifyResult, false);
    generated.rv = generator_.generateInt32();
    return generated;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cert = mutator_.mutateStruct(network.mojom.X509Certificate, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hostPattern = mutator_.mutateString(this.hostPattern, false);
    }
    if (mutator_.chooseMutateField()) {
      this.verifyResult = mutator_.mutateStruct(network.mojom.CertVerifyResult, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rv = mutator_.mutateInt32(this.rv);
    }
    return this;
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.cert
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_param$.X509Certificate, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.hostPattern
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.verifyResult
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, network_param$.CertVerifyResult, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.encodedSize = codec.kStructHeaderSize + 32;

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cert = decoder.decodeStructPointer(network_param$.X509Certificate);
    val.hostPattern = decoder.decodeStruct(codec.String);
    val.verifyResult = decoder.decodeStructPointer(network_param$.CertVerifyResult);
    val.rv = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_param$.X509Certificate, val.cert);
    encoder.encodeStruct(codec.String, val.hostPattern);
    encoder.encodeStructPointer(network_param$.CertVerifyResult, val.verifyResult);
    encoder.encodeStruct(codec.Int32, val.rv);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams;
    return generated;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NetworkServiceTest_SetShouldRequireCT_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_SetShouldRequireCT_Params.prototype.initDefaults_ = function() {
    this.required = 0;
  };
  NetworkServiceTest_SetShouldRequireCT_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_SetShouldRequireCT_Params.generate = function(generator_) {
    var generated = new NetworkServiceTest_SetShouldRequireCT_Params;
    generated.required = generator_.generateEnum(0, 2);
    return generated;
  };

  NetworkServiceTest_SetShouldRequireCT_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.required = mutator_.mutateEnum(this.required, 0, 2);
    }
    return this;
  };
  NetworkServiceTest_SetShouldRequireCT_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_SetShouldRequireCT_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_SetShouldRequireCT_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_SetShouldRequireCT_Params.validate = function(messageValidator, offset) {
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


    // validate NetworkServiceTest_SetShouldRequireCT_Params.required
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, NetworkServiceTest.ShouldRequireCT);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetworkServiceTest_SetShouldRequireCT_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetworkServiceTest_SetShouldRequireCT_Params.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_SetShouldRequireCT_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.required = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetworkServiceTest_SetShouldRequireCT_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_SetShouldRequireCT_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.required);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetworkServiceTest_SetShouldRequireCT_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetworkServiceTest_SetShouldRequireCT_ResponseParams.prototype.initDefaults_ = function() {
  };
  NetworkServiceTest_SetShouldRequireCT_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NetworkServiceTest_SetShouldRequireCT_ResponseParams.generate = function(generator_) {
    var generated = new NetworkServiceTest_SetShouldRequireCT_ResponseParams;
    return generated;
  };

  NetworkServiceTest_SetShouldRequireCT_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NetworkServiceTest_SetShouldRequireCT_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NetworkServiceTest_SetShouldRequireCT_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NetworkServiceTest_SetShouldRequireCT_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NetworkServiceTest_SetShouldRequireCT_ResponseParams.validate = function(messageValidator, offset) {
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

  NetworkServiceTest_SetShouldRequireCT_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NetworkServiceTest_SetShouldRequireCT_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetworkServiceTest_SetShouldRequireCT_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NetworkServiceTest_SetShouldRequireCT_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetworkServiceTest_SetShouldRequireCT_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kNetworkServiceTest_AddRules_Name = 1878687837;
  var kNetworkServiceTest_SimulateNetworkChange_Name = 1138227348;
  var kNetworkServiceTest_SimulateCrash_Name = 840022144;
  var kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name = 1738761184;
  var kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name = 616860871;
  var kNetworkServiceTest_SetShouldRequireCT_Name = 1875015643;

  function NetworkServiceTestPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetworkServiceTest,
                                                   handleOrPtrInfo);
  }

  function NetworkServiceTestAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetworkServiceTest, associatedInterfacePtrInfo);
  }

  NetworkServiceTestAssociatedPtr.prototype =
      Object.create(NetworkServiceTestPtr.prototype);
  NetworkServiceTestAssociatedPtr.prototype.constructor =
      NetworkServiceTestAssociatedPtr;

  function NetworkServiceTestProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetworkServiceTestPtr.prototype.addRules = function() {
    return NetworkServiceTestProxy.prototype.addRules
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceTestProxy.prototype.addRules = function(rules) {
    var params_ = new NetworkServiceTest_AddRules_Params();
    params_.rules = rules;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceTest_AddRules_Name,
          codec.align(NetworkServiceTest_AddRules_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceTest_AddRules_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceTest_AddRules_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkServiceTestPtr.prototype.simulateNetworkChange = function() {
    return NetworkServiceTestProxy.prototype.simulateNetworkChange
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceTestProxy.prototype.simulateNetworkChange = function(type) {
    var params_ = new NetworkServiceTest_SimulateNetworkChange_Params();
    params_.type = type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceTest_SimulateNetworkChange_Name,
          codec.align(NetworkServiceTest_SimulateNetworkChange_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceTest_SimulateNetworkChange_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceTest_SimulateNetworkChange_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkServiceTestPtr.prototype.simulateCrash = function() {
    return NetworkServiceTestProxy.prototype.simulateCrash
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceTestProxy.prototype.simulateCrash = function() {
    var params_ = new NetworkServiceTest_SimulateCrash_Params();
    var builder = new codec.MessageV0Builder(
        kNetworkServiceTest_SimulateCrash_Name,
        codec.align(NetworkServiceTest_SimulateCrash_Params.encodedSize));
    builder.encodeStruct(NetworkServiceTest_SimulateCrash_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NetworkServiceTestPtr.prototype.mockCertVerifierSetDefaultResult = function() {
    return NetworkServiceTestProxy.prototype.mockCertVerifierSetDefaultResult
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceTestProxy.prototype.mockCertVerifierSetDefaultResult = function(defaultResult) {
    var params_ = new NetworkServiceTest_MockCertVerifierSetDefaultResult_Params();
    params_.defaultResult = defaultResult;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name,
          codec.align(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkServiceTestPtr.prototype.mockCertVerifierAddResultForCertAndHost = function() {
    return NetworkServiceTestProxy.prototype.mockCertVerifierAddResultForCertAndHost
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceTestProxy.prototype.mockCertVerifierAddResultForCertAndHost = function(cert, hostPattern, verifyResult, rv) {
    var params_ = new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params();
    params_.cert = cert;
    params_.hostPattern = hostPattern;
    params_.verifyResult = verifyResult;
    params_.rv = rv;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name,
          codec.align(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetworkServiceTestPtr.prototype.setShouldRequireCT = function() {
    return NetworkServiceTestProxy.prototype.setShouldRequireCT
        .apply(this.ptr.getProxy(), arguments);
  };

  NetworkServiceTestProxy.prototype.setShouldRequireCT = function(required) {
    var params_ = new NetworkServiceTest_SetShouldRequireCT_Params();
    params_.required = required;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetworkServiceTest_SetShouldRequireCT_Name,
          codec.align(NetworkServiceTest_SetShouldRequireCT_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetworkServiceTest_SetShouldRequireCT_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetworkServiceTest_SetShouldRequireCT_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NetworkServiceTestStub(delegate) {
    this.delegate_ = delegate;
  }
  NetworkServiceTestStub.prototype.addRules = function(rules) {
    return this.delegate_ && this.delegate_.addRules && this.delegate_.addRules(rules);
  }
  NetworkServiceTestStub.prototype.simulateNetworkChange = function(type) {
    return this.delegate_ && this.delegate_.simulateNetworkChange && this.delegate_.simulateNetworkChange(type);
  }
  NetworkServiceTestStub.prototype.simulateCrash = function() {
    return this.delegate_ && this.delegate_.simulateCrash && this.delegate_.simulateCrash();
  }
  NetworkServiceTestStub.prototype.mockCertVerifierSetDefaultResult = function(defaultResult) {
    return this.delegate_ && this.delegate_.mockCertVerifierSetDefaultResult && this.delegate_.mockCertVerifierSetDefaultResult(defaultResult);
  }
  NetworkServiceTestStub.prototype.mockCertVerifierAddResultForCertAndHost = function(cert, hostPattern, verifyResult, rv) {
    return this.delegate_ && this.delegate_.mockCertVerifierAddResultForCertAndHost && this.delegate_.mockCertVerifierAddResultForCertAndHost(cert, hostPattern, verifyResult, rv);
  }
  NetworkServiceTestStub.prototype.setShouldRequireCT = function(required) {
    return this.delegate_ && this.delegate_.setShouldRequireCT && this.delegate_.setShouldRequireCT(required);
  }

  NetworkServiceTestStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkServiceTest_SimulateCrash_Name:
      var params = reader.decodeStruct(NetworkServiceTest_SimulateCrash_Params);
      this.simulateCrash();
      return true;
    default:
      return false;
    }
  };

  NetworkServiceTestStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetworkServiceTest_AddRules_Name:
      var params = reader.decodeStruct(NetworkServiceTest_AddRules_Params);
      this.addRules(params.rules).then(function(response) {
        var responseParams =
            new NetworkServiceTest_AddRules_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkServiceTest_AddRules_Name,
            codec.align(NetworkServiceTest_AddRules_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceTest_AddRules_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkServiceTest_SimulateNetworkChange_Name:
      var params = reader.decodeStruct(NetworkServiceTest_SimulateNetworkChange_Params);
      this.simulateNetworkChange(params.type).then(function(response) {
        var responseParams =
            new NetworkServiceTest_SimulateNetworkChange_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkServiceTest_SimulateNetworkChange_Name,
            codec.align(NetworkServiceTest_SimulateNetworkChange_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceTest_SimulateNetworkChange_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name:
      var params = reader.decodeStruct(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params);
      this.mockCertVerifierSetDefaultResult(params.defaultResult).then(function(response) {
        var responseParams =
            new NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name,
            codec.align(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name:
      var params = reader.decodeStruct(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params);
      this.mockCertVerifierAddResultForCertAndHost(params.cert, params.hostPattern, params.verifyResult, params.rv).then(function(response) {
        var responseParams =
            new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name,
            codec.align(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetworkServiceTest_SetShouldRequireCT_Name:
      var params = reader.decodeStruct(NetworkServiceTest_SetShouldRequireCT_Params);
      this.setShouldRequireCT(params.required).then(function(response) {
        var responseParams =
            new NetworkServiceTest_SetShouldRequireCT_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNetworkServiceTest_SetShouldRequireCT_Name,
            codec.align(NetworkServiceTest_SetShouldRequireCT_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetworkServiceTest_SetShouldRequireCT_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetworkServiceTestRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetworkServiceTest_AddRules_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceTest_AddRules_Params;
      break;
      case kNetworkServiceTest_SimulateNetworkChange_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceTest_SimulateNetworkChange_Params;
      break;
      case kNetworkServiceTest_SimulateCrash_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetworkServiceTest_SimulateCrash_Params;
      break;
      case kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceTest_MockCertVerifierSetDefaultResult_Params;
      break;
      case kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params;
      break;
      case kNetworkServiceTest_SetShouldRequireCT_Name:
        if (message.expectsResponse())
          paramsClass = NetworkServiceTest_SetShouldRequireCT_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetworkServiceTestResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetworkServiceTest_AddRules_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceTest_AddRules_ResponseParams;
        break;
      case kNetworkServiceTest_SimulateNetworkChange_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceTest_SimulateNetworkChange_ResponseParams;
        break;
      case kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams;
        break;
      case kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams;
        break;
      case kNetworkServiceTest_SetShouldRequireCT_Name:
        if (message.isResponse())
          paramsClass = NetworkServiceTest_SetShouldRequireCT_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetworkServiceTest = {
    name: 'network.mojom.NetworkServiceTest',
    kVersion: 0,
    ptrClass: NetworkServiceTestPtr,
    proxyClass: NetworkServiceTestProxy,
    stubClass: NetworkServiceTestStub,
    validateRequest: validateNetworkServiceTestRequest,
    validateResponse: validateNetworkServiceTestResponse,
    mojomId: 'services/network/public/mojom/network_service_test.mojom',
    fuzzMethods: {
      addRules: {
        params: NetworkServiceTest_AddRules_Params,
      },
      simulateNetworkChange: {
        params: NetworkServiceTest_SimulateNetworkChange_Params,
      },
      simulateCrash: {
        params: NetworkServiceTest_SimulateCrash_Params,
      },
      mockCertVerifierSetDefaultResult: {
        params: NetworkServiceTest_MockCertVerifierSetDefaultResult_Params,
      },
      mockCertVerifierAddResultForCertAndHost: {
        params: NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params,
      },
      setShouldRequireCT: {
        params: NetworkServiceTest_SetShouldRequireCT_Params,
      },
    },
  };
  NetworkServiceTest.ShouldRequireCT = {};
  NetworkServiceTest.ShouldRequireCT.RESET = 0;
  NetworkServiceTest.ShouldRequireCT.REQUIRE = 1;
  NetworkServiceTest.ShouldRequireCT.DONT_REQUIRE = 2;

  NetworkServiceTest.ShouldRequireCT.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  NetworkServiceTest.ShouldRequireCT.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  NetworkServiceTestStub.prototype.validator = validateNetworkServiceTestRequest;
  NetworkServiceTestProxy.prototype.validator = validateNetworkServiceTestResponse;
  exports.Rule = Rule;
  exports.NetworkServiceTest = NetworkServiceTest;
  exports.NetworkServiceTestPtr = NetworkServiceTestPtr;
  exports.NetworkServiceTestAssociatedPtr = NetworkServiceTestAssociatedPtr;
})();