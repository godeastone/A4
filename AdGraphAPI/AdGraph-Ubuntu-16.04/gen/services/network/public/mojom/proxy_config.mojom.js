// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/proxy_config.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var ProxyRulesType = {};
  ProxyRulesType.EMPTY = 0;
  ProxyRulesType.PROXY_LIST = ProxyRulesType.EMPTY + 1;
  ProxyRulesType.PROXY_LIST_PER_SCHEME = ProxyRulesType.PROXY_LIST + 1;

  ProxyRulesType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ProxyRulesType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ProxyBypassRules(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyBypassRules.prototype.initDefaults_ = function() {
    this.rules = null;
  };
  ProxyBypassRules.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyBypassRules.generate = function(generator_) {
    var generated = new ProxyBypassRules;
    generated.rules = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ProxyBypassRules.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rules = mutator_.mutateArray(this.rules, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ProxyBypassRules.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyBypassRules.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyBypassRules.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyBypassRules.validate = function(messageValidator, offset) {
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


    // validate ProxyBypassRules.rules
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyBypassRules.encodedSize = codec.kStructHeaderSize + 8;

  ProxyBypassRules.decode = function(decoder) {
    var packed;
    var val = new ProxyBypassRules();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rules = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ProxyBypassRules.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyBypassRules.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.rules);
  };
  function ProxyList(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyList.prototype.initDefaults_ = function() {
    this.proxies = null;
  };
  ProxyList.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyList.generate = function(generator_) {
    var generated = new ProxyList;
    generated.proxies = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ProxyList.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.proxies = mutator_.mutateArray(this.proxies, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ProxyList.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyList.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyList.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyList.validate = function(messageValidator, offset) {
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


    // validate ProxyList.proxies
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyList.encodedSize = codec.kStructHeaderSize + 8;

  ProxyList.decode = function(decoder) {
    var packed;
    var val = new ProxyList();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.proxies = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ProxyList.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyList.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.proxies);
  };
  function ProxyRules(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyRules.prototype.initDefaults_ = function() {
    this.bypassRules = null;
    this.reverseBypass = false;
    this.type = 0;
    this.singleProxies = null;
    this.proxiesForHttp = null;
    this.proxiesForHttps = null;
    this.proxiesForFtp = null;
    this.fallbackProxies = null;
  };
  ProxyRules.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyRules.generate = function(generator_) {
    var generated = new ProxyRules;
    generated.bypassRules = generator_.generateStruct(network.mojom.ProxyBypassRules, false);
    generated.reverseBypass = generator_.generateBool();
    generated.type = generator_.generateEnum(0, 2);
    generated.singleProxies = generator_.generateStruct(network.mojom.ProxyList, false);
    generated.proxiesForHttp = generator_.generateStruct(network.mojom.ProxyList, false);
    generated.proxiesForHttps = generator_.generateStruct(network.mojom.ProxyList, false);
    generated.proxiesForFtp = generator_.generateStruct(network.mojom.ProxyList, false);
    generated.fallbackProxies = generator_.generateStruct(network.mojom.ProxyList, false);
    return generated;
  };

  ProxyRules.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bypassRules = mutator_.mutateStruct(network.mojom.ProxyBypassRules, false);
    }
    if (mutator_.chooseMutateField()) {
      this.reverseBypass = mutator_.mutateBool(this.reverseBypass);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.singleProxies = mutator_.mutateStruct(network.mojom.ProxyList, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxiesForHttp = mutator_.mutateStruct(network.mojom.ProxyList, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxiesForHttps = mutator_.mutateStruct(network.mojom.ProxyList, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxiesForFtp = mutator_.mutateStruct(network.mojom.ProxyList, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fallbackProxies = mutator_.mutateStruct(network.mojom.ProxyList, false);
    }
    return this;
  };
  ProxyRules.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyRules.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyRules.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyRules.validate = function(messageValidator, offset) {
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


    // validate ProxyRules.bypassRules
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ProxyBypassRules, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ProxyRules.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, ProxyRulesType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyRules.singleProxies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ProxyList, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyRules.proxiesForHttp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, ProxyList, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyRules.proxiesForHttps
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, ProxyList, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyRules.proxiesForFtp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, ProxyList, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProxyRules.fallbackProxies
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, ProxyList, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyRules.encodedSize = codec.kStructHeaderSize + 56;

  ProxyRules.decode = function(decoder) {
    var packed;
    var val = new ProxyRules();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bypassRules = decoder.decodeStructPointer(ProxyBypassRules);
    packed = decoder.readUint8();
    val.reverseBypass = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.Int32);
    val.singleProxies = decoder.decodeStructPointer(ProxyList);
    val.proxiesForHttp = decoder.decodeStructPointer(ProxyList);
    val.proxiesForHttps = decoder.decodeStructPointer(ProxyList);
    val.proxiesForFtp = decoder.decodeStructPointer(ProxyList);
    val.fallbackProxies = decoder.decodeStructPointer(ProxyList);
    return val;
  };

  ProxyRules.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyRules.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ProxyBypassRules, val.bypassRules);
    packed = 0;
    packed |= (val.reverseBypass & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStructPointer(ProxyList, val.singleProxies);
    encoder.encodeStructPointer(ProxyList, val.proxiesForHttp);
    encoder.encodeStructPointer(ProxyList, val.proxiesForHttps);
    encoder.encodeStructPointer(ProxyList, val.proxiesForFtp);
    encoder.encodeStructPointer(ProxyList, val.fallbackProxies);
  };
  function ProxyConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProxyConfig.prototype.initDefaults_ = function() {
    this.autoDetect = false;
    this.pacMandatory = false;
    this.pacUrl = null;
    this.proxyRules = null;
  };
  ProxyConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProxyConfig.generate = function(generator_) {
    var generated = new ProxyConfig;
    generated.autoDetect = generator_.generateBool();
    generated.pacUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.pacMandatory = generator_.generateBool();
    generated.proxyRules = generator_.generateStruct(network.mojom.ProxyRules, false);
    return generated;
  };

  ProxyConfig.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.autoDetect = mutator_.mutateBool(this.autoDetect);
    }
    if (mutator_.chooseMutateField()) {
      this.pacUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pacMandatory = mutator_.mutateBool(this.pacMandatory);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyRules = mutator_.mutateStruct(network.mojom.ProxyRules, false);
    }
    return this;
  };
  ProxyConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProxyConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProxyConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProxyConfig.validate = function(messageValidator, offset) {
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



    // validate ProxyConfig.pacUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ProxyConfig.proxyRules
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ProxyRules, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProxyConfig.encodedSize = codec.kStructHeaderSize + 24;

  ProxyConfig.decode = function(decoder) {
    var packed;
    var val = new ProxyConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.autoDetect = (packed >> 0) & 1 ? true : false;
    val.pacMandatory = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pacUrl = decoder.decodeStructPointer(url$.Url);
    val.proxyRules = decoder.decodeStructPointer(ProxyRules);
    return val;
  };

  ProxyConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProxyConfig.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.autoDetect & 1) << 0
    packed |= (val.pacMandatory & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.pacUrl);
    encoder.encodeStructPointer(ProxyRules, val.proxyRules);
  };
  exports.ProxyRulesType = ProxyRulesType;
  exports.ProxyBypassRules = ProxyBypassRules;
  exports.ProxyList = ProxyList;
  exports.ProxyRules = ProxyRules;
  exports.ProxyConfig = ProxyConfig;
})();