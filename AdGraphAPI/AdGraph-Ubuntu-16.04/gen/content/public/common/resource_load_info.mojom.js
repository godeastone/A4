// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/resource_load_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var load_timing_info$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/load_timing_info.mojom', 'load_timing_info.mojom.js');
  }
  var resource_type$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/resource_type.mojom', 'resource_type.mojom.js');
  }
  var ip_address$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_address.mojom', '../../../net/interfaces/ip_address.mojom.js');
  }
  var network_param$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_param.mojom', '../../../services/network/public/mojom/network_param.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function CommonNetworkInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CommonNetworkInfo.prototype.initDefaults_ = function() {
    this.networkAccessed = false;
    this.alwaysAccessNetwork = false;
    this.ipPortPair = null;
  };
  CommonNetworkInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CommonNetworkInfo.generate = function(generator_) {
    var generated = new CommonNetworkInfo;
    generated.networkAccessed = generator_.generateBool();
    generated.alwaysAccessNetwork = generator_.generateBool();
    generated.ipPortPair = generator_.generateStruct(network.mojom.HostPortPair, true);
    return generated;
  };

  CommonNetworkInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.networkAccessed = mutator_.mutateBool(this.networkAccessed);
    }
    if (mutator_.chooseMutateField()) {
      this.alwaysAccessNetwork = mutator_.mutateBool(this.alwaysAccessNetwork);
    }
    if (mutator_.chooseMutateField()) {
      this.ipPortPair = mutator_.mutateStruct(network.mojom.HostPortPair, true);
    }
    return this;
  };
  CommonNetworkInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CommonNetworkInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CommonNetworkInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CommonNetworkInfo.validate = function(messageValidator, offset) {
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




    // validate CommonNetworkInfo.ipPortPair
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, network_param$.HostPortPair, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CommonNetworkInfo.encodedSize = codec.kStructHeaderSize + 16;

  CommonNetworkInfo.decode = function(decoder) {
    var packed;
    var val = new CommonNetworkInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.networkAccessed = (packed >> 0) & 1 ? true : false;
    val.alwaysAccessNetwork = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.ipPortPair = decoder.decodeStructPointer(network_param$.HostPortPair);
    return val;
  };

  CommonNetworkInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CommonNetworkInfo.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.networkAccessed & 1) << 0
    packed |= (val.alwaysAccessNetwork & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(network_param$.HostPortPair, val.ipPortPair);
  };
  function RedirectInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RedirectInfo.prototype.initDefaults_ = function() {
    this.url = null;
    this.networkInfo = null;
  };
  RedirectInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RedirectInfo.generate = function(generator_) {
    var generated = new RedirectInfo;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.networkInfo = generator_.generateStruct(content.mojom.CommonNetworkInfo, false);
    return generated;
  };

  RedirectInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.networkInfo = mutator_.mutateStruct(content.mojom.CommonNetworkInfo, false);
    }
    return this;
  };
  RedirectInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RedirectInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RedirectInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RedirectInfo.validate = function(messageValidator, offset) {
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


    // validate RedirectInfo.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RedirectInfo.networkInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, CommonNetworkInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RedirectInfo.encodedSize = codec.kStructHeaderSize + 16;

  RedirectInfo.decode = function(decoder) {
    var packed;
    var val = new RedirectInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.networkInfo = decoder.decodeStructPointer(CommonNetworkInfo);
    return val;
  };

  RedirectInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RedirectInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(CommonNetworkInfo, val.networkInfo);
  };
  function ResourceLoadInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceLoadInfo.prototype.initDefaults_ = function() {
    this.requestId = 0;
    this.url = null;
    this.referrer = null;
    this.originalUrl = null;
    this.method = null;
    this.resourceType = 0;
    this.wasCached = false;
    this.mimeType = null;
    this.networkInfo = null;
    this.netError = 0;
    this.loadTimingInfo = null;
    this.rawBodyBytes = 0;
    this.totalReceivedBytes = 0;
    this.redirectInfoChain = null;
  };
  ResourceLoadInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceLoadInfo.generate = function(generator_) {
    var generated = new ResourceLoadInfo;
    generated.requestId = generator_.generateInt64();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.referrer = generator_.generateStruct(url.mojom.Url, false);
    generated.originalUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.method = generator_.generateString(false);
    generated.resourceType = generator_.generateEnum(0, 18);
    generated.mimeType = generator_.generateString(false);
    generated.wasCached = generator_.generateBool();
    generated.networkInfo = generator_.generateStruct(content.mojom.CommonNetworkInfo, false);
    generated.netError = generator_.generateInt32();
    generated.loadTimingInfo = generator_.generateStruct(content.mojom.LoadTimingInfo, false);
    generated.rawBodyBytes = generator_.generateInt64();
    generated.totalReceivedBytes = generator_.generateInt64();
    generated.redirectInfoChain = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.RedirectInfo, false);
    });
    return generated;
  };

  ResourceLoadInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestId = mutator_.mutateInt64(this.requestId);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.referrer = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.originalUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.method = mutator_.mutateString(this.method, false);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceType = mutator_.mutateEnum(this.resourceType, 0, 18);
    }
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateString(this.mimeType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.wasCached = mutator_.mutateBool(this.wasCached);
    }
    if (mutator_.chooseMutateField()) {
      this.networkInfo = mutator_.mutateStruct(content.mojom.CommonNetworkInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.netError = mutator_.mutateInt32(this.netError);
    }
    if (mutator_.chooseMutateField()) {
      this.loadTimingInfo = mutator_.mutateStruct(content.mojom.LoadTimingInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rawBodyBytes = mutator_.mutateInt64(this.rawBodyBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.totalReceivedBytes = mutator_.mutateInt64(this.totalReceivedBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.redirectInfoChain = mutator_.mutateArray(this.redirectInfoChain, function(val) {
        return mutator_.mutateStruct(content.mojom.RedirectInfo, false);
      });
    }
    return this;
  };
  ResourceLoadInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceLoadInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceLoadInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceLoadInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 112}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ResourceLoadInfo.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceLoadInfo.referrer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceLoadInfo.originalUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceLoadInfo.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceLoadInfo.resourceType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 40, resource_type$.ResourceType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResourceLoadInfo.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate ResourceLoadInfo.networkInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, CommonNetworkInfo, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ResourceLoadInfo.loadTimingInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, load_timing_info$.LoadTimingInfo, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ResourceLoadInfo.redirectInfoChain
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 96, 8, new codec.PointerTo(RedirectInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceLoadInfo.encodedSize = codec.kStructHeaderSize + 104;

  ResourceLoadInfo.decode = function(decoder) {
    var packed;
    var val = new ResourceLoadInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestId = decoder.decodeStruct(codec.Int64);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.referrer = decoder.decodeStructPointer(url$.Url);
    val.originalUrl = decoder.decodeStructPointer(url$.Url);
    val.method = decoder.decodeStruct(codec.String);
    val.resourceType = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.wasCached = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mimeType = decoder.decodeStruct(codec.String);
    val.networkInfo = decoder.decodeStructPointer(CommonNetworkInfo);
    val.netError = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.loadTimingInfo = decoder.decodeStructPointer(load_timing_info$.LoadTimingInfo);
    val.rawBodyBytes = decoder.decodeStruct(codec.Int64);
    val.totalReceivedBytes = decoder.decodeStruct(codec.Int64);
    val.redirectInfoChain = decoder.decodeArrayPointer(new codec.PointerTo(RedirectInfo));
    return val;
  };

  ResourceLoadInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceLoadInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.requestId);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(url$.Url, val.referrer);
    encoder.encodeStructPointer(url$.Url, val.originalUrl);
    encoder.encodeStruct(codec.String, val.method);
    encoder.encodeStruct(codec.Int32, val.resourceType);
    packed = 0;
    packed |= (val.wasCached & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.mimeType);
    encoder.encodeStructPointer(CommonNetworkInfo, val.networkInfo);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(load_timing_info$.LoadTimingInfo, val.loadTimingInfo);
    encoder.encodeStruct(codec.Int64, val.rawBodyBytes);
    encoder.encodeStruct(codec.Int64, val.totalReceivedBytes);
    encoder.encodeArrayPointer(new codec.PointerTo(RedirectInfo), val.redirectInfoChain);
  };
  exports.CommonNetworkInfo = CommonNetworkInfo;
  exports.RedirectInfo = RedirectInfo;
  exports.ResourceLoadInfo = ResourceLoadInfo;
})();