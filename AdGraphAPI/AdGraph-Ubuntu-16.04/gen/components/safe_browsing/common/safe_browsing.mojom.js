// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/safe_browsing/common/safe_browsing.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('safeBrowsing.mojom');
  var resource_type$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/resource_type.mojom', '../../../content/public/common/resource_type.mojom.js');
  }
  var http_request_headers$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/http_request_headers.mojom', '../../../services/network/public/mojom/http_request_headers.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function AttributeNameValue(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AttributeNameValue.prototype.initDefaults_ = function() {
    this.name = null;
    this.value = null;
  };
  AttributeNameValue.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AttributeNameValue.generate = function(generator_) {
    var generated = new AttributeNameValue;
    generated.name = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    return generated;
  };

  AttributeNameValue.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    return this;
  };
  AttributeNameValue.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AttributeNameValue.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AttributeNameValue.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AttributeNameValue.validate = function(messageValidator, offset) {
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


    // validate AttributeNameValue.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AttributeNameValue.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AttributeNameValue.encodedSize = codec.kStructHeaderSize + 16;

  AttributeNameValue.decode = function(decoder) {
    var packed;
    var val = new AttributeNameValue();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  AttributeNameValue.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AttributeNameValue.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.value);
  };
  function ThreatDOMDetailsNode(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ThreatDOMDetailsNode.prototype.initDefaults_ = function() {
    this.nodeId = 0;
    this.parentNodeId = 0;
    this.url = null;
    this.tagName = null;
    this.parent = null;
    this.children = null;
    this.childNodeIds = null;
    this.attributes = null;
    this.childFrameRoutingId = 0;
  };
  ThreatDOMDetailsNode.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ThreatDOMDetailsNode.generate = function(generator_) {
    var generated = new ThreatDOMDetailsNode;
    generated.nodeId = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.tagName = generator_.generateString(false);
    generated.parent = generator_.generateStruct(url.mojom.Url, false);
    generated.parentNodeId = generator_.generateInt32();
    generated.children = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Url, false);
    });
    generated.childNodeIds = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.attributes = generator_.generateArray(function() {
      return generator_.generateStruct(safeBrowsing.mojom.AttributeNameValue, false);
    });
    generated.childFrameRoutingId = generator_.generateInt32();
    return generated;
  };

  ThreatDOMDetailsNode.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.nodeId = mutator_.mutateInt32(this.nodeId);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tagName = mutator_.mutateString(this.tagName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.parent = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.parentNodeId = mutator_.mutateInt32(this.parentNodeId);
    }
    if (mutator_.chooseMutateField()) {
      this.children = mutator_.mutateArray(this.children, function(val) {
        return mutator_.mutateStruct(url.mojom.Url, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.childNodeIds = mutator_.mutateArray(this.childNodeIds, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.attributes = mutator_.mutateArray(this.attributes, function(val) {
        return mutator_.mutateStruct(safeBrowsing.mojom.AttributeNameValue, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.childFrameRoutingId = mutator_.mutateInt32(this.childFrameRoutingId);
    }
    return this;
  };
  ThreatDOMDetailsNode.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ThreatDOMDetailsNode.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ThreatDOMDetailsNode.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ThreatDOMDetailsNode.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ThreatDOMDetailsNode.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ThreatDOMDetailsNode.tagName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ThreatDOMDetailsNode.parent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ThreatDOMDetailsNode.children
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ThreatDOMDetailsNode.childNodeIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ThreatDOMDetailsNode.attributes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(AttributeNameValue), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ThreatDOMDetailsNode.encodedSize = codec.kStructHeaderSize + 64;

  ThreatDOMDetailsNode.decode = function(decoder) {
    var packed;
    var val = new ThreatDOMDetailsNode();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.nodeId = decoder.decodeStruct(codec.Int32);
    val.parentNodeId = decoder.decodeStruct(codec.Int32);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.tagName = decoder.decodeStruct(codec.String);
    val.parent = decoder.decodeStructPointer(url$.Url);
    val.children = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    val.childNodeIds = decoder.decodeArrayPointer(codec.Int32);
    val.attributes = decoder.decodeArrayPointer(new codec.PointerTo(AttributeNameValue));
    val.childFrameRoutingId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ThreatDOMDetailsNode.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ThreatDOMDetailsNode.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.nodeId);
    encoder.encodeStruct(codec.Int32, val.parentNodeId);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.tagName);
    encoder.encodeStructPointer(url$.Url, val.parent);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.children);
    encoder.encodeArrayPointer(codec.Int32, val.childNodeIds);
    encoder.encodeArrayPointer(new codec.PointerTo(AttributeNameValue), val.attributes);
    encoder.encodeStruct(codec.Int32, val.childFrameRoutingId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SafeBrowsing_CreateCheckerAndCheck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeBrowsing_CreateCheckerAndCheck_Params.prototype.initDefaults_ = function() {
    this.renderFrameId = 0;
    this.request = new bindings.InterfaceRequest();
    this.url = null;
    this.method = null;
    this.headers = null;
    this.loadFlags = 0;
    this.resourceType = 0;
    this.hasUserGesture = false;
    this.originatedFromServiceWorker = false;
  };
  SafeBrowsing_CreateCheckerAndCheck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeBrowsing_CreateCheckerAndCheck_Params.generate = function(generator_) {
    var generated = new SafeBrowsing_CreateCheckerAndCheck_Params;
    generated.renderFrameId = generator_.generateInt32();
    generated.request = generator_.generateInterfaceRequest("safeBrowsing.mojom.SafeBrowsingUrlChecker", false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.method = generator_.generateString(false);
    generated.headers = generator_.generateStruct(network.mojom.HttpRequestHeaders, false);
    generated.loadFlags = generator_.generateInt32();
    generated.resourceType = generator_.generateEnum(0, 18);
    generated.hasUserGesture = generator_.generateBool();
    generated.originatedFromServiceWorker = generator_.generateBool();
    return generated;
  };

  SafeBrowsing_CreateCheckerAndCheck_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "safeBrowsing.mojom.SafeBrowsingUrlChecker", false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.method = mutator_.mutateString(this.method, false);
    }
    if (mutator_.chooseMutateField()) {
      this.headers = mutator_.mutateStruct(network.mojom.HttpRequestHeaders, false);
    }
    if (mutator_.chooseMutateField()) {
      this.loadFlags = mutator_.mutateInt32(this.loadFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.resourceType = mutator_.mutateEnum(this.resourceType, 0, 18);
    }
    if (mutator_.chooseMutateField()) {
      this.hasUserGesture = mutator_.mutateBool(this.hasUserGesture);
    }
    if (mutator_.chooseMutateField()) {
      this.originatedFromServiceWorker = mutator_.mutateBool(this.originatedFromServiceWorker);
    }
    return this;
  };
  SafeBrowsing_CreateCheckerAndCheck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["safeBrowsing.mojom.SafeBrowsingUrlCheckerRequest"]);
    }
    return handles;
  };

  SafeBrowsing_CreateCheckerAndCheck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeBrowsing_CreateCheckerAndCheck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  SafeBrowsing_CreateCheckerAndCheck_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate SafeBrowsing_CreateCheckerAndCheck_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SafeBrowsing_CreateCheckerAndCheck_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SafeBrowsing_CreateCheckerAndCheck_Params.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SafeBrowsing_CreateCheckerAndCheck_Params.headers
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, http_request_headers$.HttpRequestHeaders, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate SafeBrowsing_CreateCheckerAndCheck_Params.resourceType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 36, resource_type$.ResourceType);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SafeBrowsing_CreateCheckerAndCheck_Params.encodedSize = codec.kStructHeaderSize + 48;

  SafeBrowsing_CreateCheckerAndCheck_Params.decode = function(decoder) {
    var packed;
    var val = new SafeBrowsing_CreateCheckerAndCheck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.method = decoder.decodeStruct(codec.String);
    val.headers = decoder.decodeStructPointer(http_request_headers$.HttpRequestHeaders);
    val.loadFlags = decoder.decodeStruct(codec.Int32);
    val.resourceType = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.hasUserGesture = (packed >> 0) & 1 ? true : false;
    val.originatedFromServiceWorker = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SafeBrowsing_CreateCheckerAndCheck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeBrowsing_CreateCheckerAndCheck_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.method);
    encoder.encodeStructPointer(http_request_headers$.HttpRequestHeaders, val.headers);
    encoder.encodeStruct(codec.Int32, val.loadFlags);
    encoder.encodeStruct(codec.Int32, val.resourceType);
    packed = 0;
    packed |= (val.hasUserGesture & 1) << 0
    packed |= (val.originatedFromServiceWorker & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SafeBrowsing_CreateCheckerAndCheck_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.prototype.initDefaults_ = function() {
    this.slowCheckNotifier = new bindings.InterfaceRequest();
    this.proceed = false;
    this.showedInterstitial = false;
  };
  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.generate = function(generator_) {
    var generated = new SafeBrowsing_CreateCheckerAndCheck_ResponseParams;
    generated.slowCheckNotifier = generator_.generateInterfaceRequest("safeBrowsing.mojom.UrlCheckNotifier", true);
    generated.proceed = generator_.generateBool();
    generated.showedInterstitial = generator_.generateBool();
    return generated;
  };

  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.slowCheckNotifier = mutator_.mutateInterfaceRequest(this.slowCheckNotifier, "safeBrowsing.mojom.UrlCheckNotifier", true);
    }
    if (mutator_.chooseMutateField()) {
      this.proceed = mutator_.mutateBool(this.proceed);
    }
    if (mutator_.chooseMutateField()) {
      this.showedInterstitial = mutator_.mutateBool(this.showedInterstitial);
    }
    return this;
  };
  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.slowCheckNotifier !== null) {
      Array.prototype.push.apply(handles, ["safeBrowsing.mojom.UrlCheckNotifierRequest"]);
    }
    return handles;
  };

  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.slowCheckNotifier = handles[idx++];;
    return idx;
  };

  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SafeBrowsing_CreateCheckerAndCheck_ResponseParams.slowCheckNotifier
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SafeBrowsing_CreateCheckerAndCheck_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.slowCheckNotifier = decoder.decodeStruct(codec.NullableInterfaceRequest);
    packed = decoder.readUint8();
    val.proceed = (packed >> 0) & 1 ? true : false;
    val.showedInterstitial = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SafeBrowsing_CreateCheckerAndCheck_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeBrowsing_CreateCheckerAndCheck_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.slowCheckNotifier);
    packed = 0;
    packed |= (val.proceed & 1) << 0
    packed |= (val.showedInterstitial & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SafeBrowsing_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeBrowsing_Clone_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  SafeBrowsing_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeBrowsing_Clone_Params.generate = function(generator_) {
    var generated = new SafeBrowsing_Clone_Params;
    generated.request = generator_.generateInterfaceRequest("safeBrowsing.mojom.SafeBrowsing", false);
    return generated;
  };

  SafeBrowsing_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "safeBrowsing.mojom.SafeBrowsing", false);
    }
    return this;
  };
  SafeBrowsing_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["safeBrowsing.mojom.SafeBrowsingRequest"]);
    }
    return handles;
  };

  SafeBrowsing_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeBrowsing_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  SafeBrowsing_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate SafeBrowsing_Clone_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeBrowsing_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  SafeBrowsing_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new SafeBrowsing_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SafeBrowsing_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeBrowsing_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SafeBrowsingUrlChecker_CheckUrl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeBrowsingUrlChecker_CheckUrl_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.method = null;
  };
  SafeBrowsingUrlChecker_CheckUrl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeBrowsingUrlChecker_CheckUrl_Params.generate = function(generator_) {
    var generated = new SafeBrowsingUrlChecker_CheckUrl_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.method = generator_.generateString(false);
    return generated;
  };

  SafeBrowsingUrlChecker_CheckUrl_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.method = mutator_.mutateString(this.method, false);
    }
    return this;
  };
  SafeBrowsingUrlChecker_CheckUrl_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SafeBrowsingUrlChecker_CheckUrl_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeBrowsingUrlChecker_CheckUrl_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SafeBrowsingUrlChecker_CheckUrl_Params.validate = function(messageValidator, offset) {
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


    // validate SafeBrowsingUrlChecker_CheckUrl_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SafeBrowsingUrlChecker_CheckUrl_Params.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SafeBrowsingUrlChecker_CheckUrl_Params.encodedSize = codec.kStructHeaderSize + 16;

  SafeBrowsingUrlChecker_CheckUrl_Params.decode = function(decoder) {
    var packed;
    var val = new SafeBrowsingUrlChecker_CheckUrl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.method = decoder.decodeStruct(codec.String);
    return val;
  };

  SafeBrowsingUrlChecker_CheckUrl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeBrowsingUrlChecker_CheckUrl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.method);
  };
  function SafeBrowsingUrlChecker_CheckUrl_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.prototype.initDefaults_ = function() {
    this.slowCheckNotifier = new bindings.InterfaceRequest();
    this.proceed = false;
    this.showedInterstitial = false;
  };
  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.generate = function(generator_) {
    var generated = new SafeBrowsingUrlChecker_CheckUrl_ResponseParams;
    generated.slowCheckNotifier = generator_.generateInterfaceRequest("safeBrowsing.mojom.UrlCheckNotifier", true);
    generated.proceed = generator_.generateBool();
    generated.showedInterstitial = generator_.generateBool();
    return generated;
  };

  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.slowCheckNotifier = mutator_.mutateInterfaceRequest(this.slowCheckNotifier, "safeBrowsing.mojom.UrlCheckNotifier", true);
    }
    if (mutator_.chooseMutateField()) {
      this.proceed = mutator_.mutateBool(this.proceed);
    }
    if (mutator_.chooseMutateField()) {
      this.showedInterstitial = mutator_.mutateBool(this.showedInterstitial);
    }
    return this;
  };
  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.slowCheckNotifier !== null) {
      Array.prototype.push.apply(handles, ["safeBrowsing.mojom.UrlCheckNotifierRequest"]);
    }
    return handles;
  };

  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.slowCheckNotifier = handles[idx++];;
    return idx;
  };

  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate SafeBrowsingUrlChecker_CheckUrl_ResponseParams.slowCheckNotifier
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new SafeBrowsingUrlChecker_CheckUrl_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.slowCheckNotifier = decoder.decodeStruct(codec.NullableInterfaceRequest);
    packed = decoder.readUint8();
    val.proceed = (packed >> 0) & 1 ? true : false;
    val.showedInterstitial = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SafeBrowsingUrlChecker_CheckUrl_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SafeBrowsingUrlChecker_CheckUrl_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.slowCheckNotifier);
    packed = 0;
    packed |= (val.proceed & 1) << 0
    packed |= (val.showedInterstitial & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function UrlCheckNotifier_OnCompleteCheck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UrlCheckNotifier_OnCompleteCheck_Params.prototype.initDefaults_ = function() {
    this.proceed = false;
    this.showedInterstitial = false;
  };
  UrlCheckNotifier_OnCompleteCheck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UrlCheckNotifier_OnCompleteCheck_Params.generate = function(generator_) {
    var generated = new UrlCheckNotifier_OnCompleteCheck_Params;
    generated.proceed = generator_.generateBool();
    generated.showedInterstitial = generator_.generateBool();
    return generated;
  };

  UrlCheckNotifier_OnCompleteCheck_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.proceed = mutator_.mutateBool(this.proceed);
    }
    if (mutator_.chooseMutateField()) {
      this.showedInterstitial = mutator_.mutateBool(this.showedInterstitial);
    }
    return this;
  };
  UrlCheckNotifier_OnCompleteCheck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UrlCheckNotifier_OnCompleteCheck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UrlCheckNotifier_OnCompleteCheck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UrlCheckNotifier_OnCompleteCheck_Params.validate = function(messageValidator, offset) {
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

  UrlCheckNotifier_OnCompleteCheck_Params.encodedSize = codec.kStructHeaderSize + 8;

  UrlCheckNotifier_OnCompleteCheck_Params.decode = function(decoder) {
    var packed;
    var val = new UrlCheckNotifier_OnCompleteCheck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.proceed = (packed >> 0) & 1 ? true : false;
    val.showedInterstitial = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UrlCheckNotifier_OnCompleteCheck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UrlCheckNotifier_OnCompleteCheck_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.proceed & 1) << 0
    packed |= (val.showedInterstitial & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ThreatReporter_GetThreatDOMDetails_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ThreatReporter_GetThreatDOMDetails_Params.prototype.initDefaults_ = function() {
  };
  ThreatReporter_GetThreatDOMDetails_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ThreatReporter_GetThreatDOMDetails_Params.generate = function(generator_) {
    var generated = new ThreatReporter_GetThreatDOMDetails_Params;
    return generated;
  };

  ThreatReporter_GetThreatDOMDetails_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ThreatReporter_GetThreatDOMDetails_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ThreatReporter_GetThreatDOMDetails_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ThreatReporter_GetThreatDOMDetails_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ThreatReporter_GetThreatDOMDetails_Params.validate = function(messageValidator, offset) {
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

  ThreatReporter_GetThreatDOMDetails_Params.encodedSize = codec.kStructHeaderSize + 0;

  ThreatReporter_GetThreatDOMDetails_Params.decode = function(decoder) {
    var packed;
    var val = new ThreatReporter_GetThreatDOMDetails_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ThreatReporter_GetThreatDOMDetails_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ThreatReporter_GetThreatDOMDetails_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ThreatReporter_GetThreatDOMDetails_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ThreatReporter_GetThreatDOMDetails_ResponseParams.prototype.initDefaults_ = function() {
    this.nodes = null;
  };
  ThreatReporter_GetThreatDOMDetails_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ThreatReporter_GetThreatDOMDetails_ResponseParams.generate = function(generator_) {
    var generated = new ThreatReporter_GetThreatDOMDetails_ResponseParams;
    generated.nodes = generator_.generateArray(function() {
      return generator_.generateStruct(safeBrowsing.mojom.ThreatDOMDetailsNode, false);
    });
    return generated;
  };

  ThreatReporter_GetThreatDOMDetails_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.nodes = mutator_.mutateArray(this.nodes, function(val) {
        return mutator_.mutateStruct(safeBrowsing.mojom.ThreatDOMDetailsNode, false);
      });
    }
    return this;
  };
  ThreatReporter_GetThreatDOMDetails_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ThreatReporter_GetThreatDOMDetails_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ThreatReporter_GetThreatDOMDetails_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ThreatReporter_GetThreatDOMDetails_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ThreatReporter_GetThreatDOMDetails_ResponseParams.nodes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ThreatDOMDetailsNode), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ThreatReporter_GetThreatDOMDetails_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ThreatReporter_GetThreatDOMDetails_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ThreatReporter_GetThreatDOMDetails_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.nodes = decoder.decodeArrayPointer(new codec.PointerTo(ThreatDOMDetailsNode));
    return val;
  };

  ThreatReporter_GetThreatDOMDetails_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ThreatReporter_GetThreatDOMDetails_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ThreatDOMDetailsNode), val.nodes);
  };
  function PhishingDetector_StartPhishingDetection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PhishingDetector_StartPhishingDetection_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PhishingDetector_StartPhishingDetection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PhishingDetector_StartPhishingDetection_Params.generate = function(generator_) {
    var generated = new PhishingDetector_StartPhishingDetection_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PhishingDetector_StartPhishingDetection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PhishingDetector_StartPhishingDetection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PhishingDetector_StartPhishingDetection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PhishingDetector_StartPhishingDetection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PhishingDetector_StartPhishingDetection_Params.validate = function(messageValidator, offset) {
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


    // validate PhishingDetector_StartPhishingDetection_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PhishingDetector_StartPhishingDetection_Params.encodedSize = codec.kStructHeaderSize + 8;

  PhishingDetector_StartPhishingDetection_Params.decode = function(decoder) {
    var packed;
    var val = new PhishingDetector_StartPhishingDetection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PhishingDetector_StartPhishingDetection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PhishingDetector_StartPhishingDetection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function PhishingDetectorClient_PhishingDetectionDone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PhishingDetectorClient_PhishingDetectionDone_Params.prototype.initDefaults_ = function() {
    this.requestProto = null;
  };
  PhishingDetectorClient_PhishingDetectionDone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PhishingDetectorClient_PhishingDetectionDone_Params.generate = function(generator_) {
    var generated = new PhishingDetectorClient_PhishingDetectionDone_Params;
    generated.requestProto = generator_.generateString(false);
    return generated;
  };

  PhishingDetectorClient_PhishingDetectionDone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestProto = mutator_.mutateString(this.requestProto, false);
    }
    return this;
  };
  PhishingDetectorClient_PhishingDetectionDone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PhishingDetectorClient_PhishingDetectionDone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PhishingDetectorClient_PhishingDetectionDone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PhishingDetectorClient_PhishingDetectionDone_Params.validate = function(messageValidator, offset) {
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


    // validate PhishingDetectorClient_PhishingDetectionDone_Params.requestProto
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PhishingDetectorClient_PhishingDetectionDone_Params.encodedSize = codec.kStructHeaderSize + 8;

  PhishingDetectorClient_PhishingDetectionDone_Params.decode = function(decoder) {
    var packed;
    var val = new PhishingDetectorClient_PhishingDetectionDone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestProto = decoder.decodeStruct(codec.String);
    return val;
  };

  PhishingDetectorClient_PhishingDetectionDone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PhishingDetectorClient_PhishingDetectionDone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.requestProto);
  };
  function PhishingModelSetter_SetPhishingModel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PhishingModelSetter_SetPhishingModel_Params.prototype.initDefaults_ = function() {
    this.model = null;
  };
  PhishingModelSetter_SetPhishingModel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PhishingModelSetter_SetPhishingModel_Params.generate = function(generator_) {
    var generated = new PhishingModelSetter_SetPhishingModel_Params;
    generated.model = generator_.generateString(false);
    return generated;
  };

  PhishingModelSetter_SetPhishingModel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.model = mutator_.mutateString(this.model, false);
    }
    return this;
  };
  PhishingModelSetter_SetPhishingModel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PhishingModelSetter_SetPhishingModel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PhishingModelSetter_SetPhishingModel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PhishingModelSetter_SetPhishingModel_Params.validate = function(messageValidator, offset) {
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


    // validate PhishingModelSetter_SetPhishingModel_Params.model
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PhishingModelSetter_SetPhishingModel_Params.encodedSize = codec.kStructHeaderSize + 8;

  PhishingModelSetter_SetPhishingModel_Params.decode = function(decoder) {
    var packed;
    var val = new PhishingModelSetter_SetPhishingModel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.model = decoder.decodeStruct(codec.String);
    return val;
  };

  PhishingModelSetter_SetPhishingModel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PhishingModelSetter_SetPhishingModel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.model);
  };
  var kSafeBrowsing_CreateCheckerAndCheck_Name = 1417225138;
  var kSafeBrowsing_Clone_Name = 495794651;

  function SafeBrowsingPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SafeBrowsing,
                                                   handleOrPtrInfo);
  }

  function SafeBrowsingAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SafeBrowsing, associatedInterfacePtrInfo);
  }

  SafeBrowsingAssociatedPtr.prototype =
      Object.create(SafeBrowsingPtr.prototype);
  SafeBrowsingAssociatedPtr.prototype.constructor =
      SafeBrowsingAssociatedPtr;

  function SafeBrowsingProxy(receiver) {
    this.receiver_ = receiver;
  }
  SafeBrowsingPtr.prototype.createCheckerAndCheck = function() {
    return SafeBrowsingProxy.prototype.createCheckerAndCheck
        .apply(this.ptr.getProxy(), arguments);
  };

  SafeBrowsingProxy.prototype.createCheckerAndCheck = function(renderFrameId, request, url, method, headers, loadFlags, resourceType, hasUserGesture, originatedFromServiceWorker) {
    var params_ = new SafeBrowsing_CreateCheckerAndCheck_Params();
    params_.renderFrameId = renderFrameId;
    params_.request = request;
    params_.url = url;
    params_.method = method;
    params_.headers = headers;
    params_.loadFlags = loadFlags;
    params_.resourceType = resourceType;
    params_.hasUserGesture = hasUserGesture;
    params_.originatedFromServiceWorker = originatedFromServiceWorker;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSafeBrowsing_CreateCheckerAndCheck_Name,
          codec.align(SafeBrowsing_CreateCheckerAndCheck_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SafeBrowsing_CreateCheckerAndCheck_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SafeBrowsing_CreateCheckerAndCheck_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SafeBrowsingPtr.prototype.clone = function() {
    return SafeBrowsingProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  SafeBrowsingProxy.prototype.clone = function(request) {
    var params_ = new SafeBrowsing_Clone_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kSafeBrowsing_Clone_Name,
        codec.align(SafeBrowsing_Clone_Params.encodedSize));
    builder.encodeStruct(SafeBrowsing_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SafeBrowsingStub(delegate) {
    this.delegate_ = delegate;
  }
  SafeBrowsingStub.prototype.createCheckerAndCheck = function(renderFrameId, request, url, method, headers, loadFlags, resourceType, hasUserGesture, originatedFromServiceWorker) {
    return this.delegate_ && this.delegate_.createCheckerAndCheck && this.delegate_.createCheckerAndCheck(renderFrameId, request, url, method, headers, loadFlags, resourceType, hasUserGesture, originatedFromServiceWorker);
  }
  SafeBrowsingStub.prototype.clone = function(request) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(request);
  }

  SafeBrowsingStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSafeBrowsing_Clone_Name:
      var params = reader.decodeStruct(SafeBrowsing_Clone_Params);
      this.clone(params.request);
      return true;
    default:
      return false;
    }
  };

  SafeBrowsingStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSafeBrowsing_CreateCheckerAndCheck_Name:
      var params = reader.decodeStruct(SafeBrowsing_CreateCheckerAndCheck_Params);
      this.createCheckerAndCheck(params.renderFrameId, params.request, params.url, params.method, params.headers, params.loadFlags, params.resourceType, params.hasUserGesture, params.originatedFromServiceWorker).then(function(response) {
        var responseParams =
            new SafeBrowsing_CreateCheckerAndCheck_ResponseParams();
        responseParams.slowCheckNotifier = response.slowCheckNotifier;
        responseParams.proceed = response.proceed;
        responseParams.showedInterstitial = response.showedInterstitial;
        var builder = new codec.MessageV1Builder(
            kSafeBrowsing_CreateCheckerAndCheck_Name,
            codec.align(SafeBrowsing_CreateCheckerAndCheck_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SafeBrowsing_CreateCheckerAndCheck_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSafeBrowsingRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSafeBrowsing_CreateCheckerAndCheck_Name:
        if (message.expectsResponse())
          paramsClass = SafeBrowsing_CreateCheckerAndCheck_Params;
      break;
      case kSafeBrowsing_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SafeBrowsing_Clone_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSafeBrowsingResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSafeBrowsing_CreateCheckerAndCheck_Name:
        if (message.isResponse())
          paramsClass = SafeBrowsing_CreateCheckerAndCheck_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SafeBrowsing = {
    name: 'safe_browsing.mojom.SafeBrowsing',
    kVersion: 0,
    ptrClass: SafeBrowsingPtr,
    proxyClass: SafeBrowsingProxy,
    stubClass: SafeBrowsingStub,
    validateRequest: validateSafeBrowsingRequest,
    validateResponse: validateSafeBrowsingResponse,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      createCheckerAndCheck: {
        params: SafeBrowsing_CreateCheckerAndCheck_Params,
      },
      clone: {
        params: SafeBrowsing_Clone_Params,
      },
    },
  };
  SafeBrowsingStub.prototype.validator = validateSafeBrowsingRequest;
  SafeBrowsingProxy.prototype.validator = validateSafeBrowsingResponse;
  var kSafeBrowsingUrlChecker_CheckUrl_Name = 884449355;

  function SafeBrowsingUrlCheckerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SafeBrowsingUrlChecker,
                                                   handleOrPtrInfo);
  }

  function SafeBrowsingUrlCheckerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SafeBrowsingUrlChecker, associatedInterfacePtrInfo);
  }

  SafeBrowsingUrlCheckerAssociatedPtr.prototype =
      Object.create(SafeBrowsingUrlCheckerPtr.prototype);
  SafeBrowsingUrlCheckerAssociatedPtr.prototype.constructor =
      SafeBrowsingUrlCheckerAssociatedPtr;

  function SafeBrowsingUrlCheckerProxy(receiver) {
    this.receiver_ = receiver;
  }
  SafeBrowsingUrlCheckerPtr.prototype.checkUrl = function() {
    return SafeBrowsingUrlCheckerProxy.prototype.checkUrl
        .apply(this.ptr.getProxy(), arguments);
  };

  SafeBrowsingUrlCheckerProxy.prototype.checkUrl = function(url, method) {
    var params_ = new SafeBrowsingUrlChecker_CheckUrl_Params();
    params_.url = url;
    params_.method = method;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kSafeBrowsingUrlChecker_CheckUrl_Name,
          codec.align(SafeBrowsingUrlChecker_CheckUrl_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(SafeBrowsingUrlChecker_CheckUrl_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(SafeBrowsingUrlChecker_CheckUrl_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function SafeBrowsingUrlCheckerStub(delegate) {
    this.delegate_ = delegate;
  }
  SafeBrowsingUrlCheckerStub.prototype.checkUrl = function(url, method) {
    return this.delegate_ && this.delegate_.checkUrl && this.delegate_.checkUrl(url, method);
  }

  SafeBrowsingUrlCheckerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  SafeBrowsingUrlCheckerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSafeBrowsingUrlChecker_CheckUrl_Name:
      var params = reader.decodeStruct(SafeBrowsingUrlChecker_CheckUrl_Params);
      this.checkUrl(params.url, params.method).then(function(response) {
        var responseParams =
            new SafeBrowsingUrlChecker_CheckUrl_ResponseParams();
        responseParams.slowCheckNotifier = response.slowCheckNotifier;
        responseParams.proceed = response.proceed;
        responseParams.showedInterstitial = response.showedInterstitial;
        var builder = new codec.MessageV1Builder(
            kSafeBrowsingUrlChecker_CheckUrl_Name,
            codec.align(SafeBrowsingUrlChecker_CheckUrl_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(SafeBrowsingUrlChecker_CheckUrl_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateSafeBrowsingUrlCheckerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSafeBrowsingUrlChecker_CheckUrl_Name:
        if (message.expectsResponse())
          paramsClass = SafeBrowsingUrlChecker_CheckUrl_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSafeBrowsingUrlCheckerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSafeBrowsingUrlChecker_CheckUrl_Name:
        if (message.isResponse())
          paramsClass = SafeBrowsingUrlChecker_CheckUrl_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var SafeBrowsingUrlChecker = {
    name: 'safe_browsing.mojom.SafeBrowsingUrlChecker',
    kVersion: 0,
    ptrClass: SafeBrowsingUrlCheckerPtr,
    proxyClass: SafeBrowsingUrlCheckerProxy,
    stubClass: SafeBrowsingUrlCheckerStub,
    validateRequest: validateSafeBrowsingUrlCheckerRequest,
    validateResponse: validateSafeBrowsingUrlCheckerResponse,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      checkUrl: {
        params: SafeBrowsingUrlChecker_CheckUrl_Params,
      },
    },
  };
  SafeBrowsingUrlCheckerStub.prototype.validator = validateSafeBrowsingUrlCheckerRequest;
  SafeBrowsingUrlCheckerProxy.prototype.validator = validateSafeBrowsingUrlCheckerResponse;
  var kUrlCheckNotifier_OnCompleteCheck_Name = 2081323460;

  function UrlCheckNotifierPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UrlCheckNotifier,
                                                   handleOrPtrInfo);
  }

  function UrlCheckNotifierAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UrlCheckNotifier, associatedInterfacePtrInfo);
  }

  UrlCheckNotifierAssociatedPtr.prototype =
      Object.create(UrlCheckNotifierPtr.prototype);
  UrlCheckNotifierAssociatedPtr.prototype.constructor =
      UrlCheckNotifierAssociatedPtr;

  function UrlCheckNotifierProxy(receiver) {
    this.receiver_ = receiver;
  }
  UrlCheckNotifierPtr.prototype.onCompleteCheck = function() {
    return UrlCheckNotifierProxy.prototype.onCompleteCheck
        .apply(this.ptr.getProxy(), arguments);
  };

  UrlCheckNotifierProxy.prototype.onCompleteCheck = function(proceed, showedInterstitial) {
    var params_ = new UrlCheckNotifier_OnCompleteCheck_Params();
    params_.proceed = proceed;
    params_.showedInterstitial = showedInterstitial;
    var builder = new codec.MessageV0Builder(
        kUrlCheckNotifier_OnCompleteCheck_Name,
        codec.align(UrlCheckNotifier_OnCompleteCheck_Params.encodedSize));
    builder.encodeStruct(UrlCheckNotifier_OnCompleteCheck_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UrlCheckNotifierStub(delegate) {
    this.delegate_ = delegate;
  }
  UrlCheckNotifierStub.prototype.onCompleteCheck = function(proceed, showedInterstitial) {
    return this.delegate_ && this.delegate_.onCompleteCheck && this.delegate_.onCompleteCheck(proceed, showedInterstitial);
  }

  UrlCheckNotifierStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUrlCheckNotifier_OnCompleteCheck_Name:
      var params = reader.decodeStruct(UrlCheckNotifier_OnCompleteCheck_Params);
      this.onCompleteCheck(params.proceed, params.showedInterstitial);
      return true;
    default:
      return false;
    }
  };

  UrlCheckNotifierStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUrlCheckNotifierRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUrlCheckNotifier_OnCompleteCheck_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UrlCheckNotifier_OnCompleteCheck_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUrlCheckNotifierResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UrlCheckNotifier = {
    name: 'safe_browsing.mojom.UrlCheckNotifier',
    kVersion: 0,
    ptrClass: UrlCheckNotifierPtr,
    proxyClass: UrlCheckNotifierProxy,
    stubClass: UrlCheckNotifierStub,
    validateRequest: validateUrlCheckNotifierRequest,
    validateResponse: null,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      onCompleteCheck: {
        params: UrlCheckNotifier_OnCompleteCheck_Params,
      },
    },
  };
  UrlCheckNotifierStub.prototype.validator = validateUrlCheckNotifierRequest;
  UrlCheckNotifierProxy.prototype.validator = null;
  var kThreatReporter_GetThreatDOMDetails_Name = 159972716;

  function ThreatReporterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ThreatReporter,
                                                   handleOrPtrInfo);
  }

  function ThreatReporterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ThreatReporter, associatedInterfacePtrInfo);
  }

  ThreatReporterAssociatedPtr.prototype =
      Object.create(ThreatReporterPtr.prototype);
  ThreatReporterAssociatedPtr.prototype.constructor =
      ThreatReporterAssociatedPtr;

  function ThreatReporterProxy(receiver) {
    this.receiver_ = receiver;
  }
  ThreatReporterPtr.prototype.getThreatDOMDetails = function() {
    return ThreatReporterProxy.prototype.getThreatDOMDetails
        .apply(this.ptr.getProxy(), arguments);
  };

  ThreatReporterProxy.prototype.getThreatDOMDetails = function() {
    var params_ = new ThreatReporter_GetThreatDOMDetails_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kThreatReporter_GetThreatDOMDetails_Name,
          codec.align(ThreatReporter_GetThreatDOMDetails_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ThreatReporter_GetThreatDOMDetails_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ThreatReporter_GetThreatDOMDetails_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ThreatReporterStub(delegate) {
    this.delegate_ = delegate;
  }
  ThreatReporterStub.prototype.getThreatDOMDetails = function() {
    return this.delegate_ && this.delegate_.getThreatDOMDetails && this.delegate_.getThreatDOMDetails();
  }

  ThreatReporterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ThreatReporterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kThreatReporter_GetThreatDOMDetails_Name:
      var params = reader.decodeStruct(ThreatReporter_GetThreatDOMDetails_Params);
      this.getThreatDOMDetails().then(function(response) {
        var responseParams =
            new ThreatReporter_GetThreatDOMDetails_ResponseParams();
        responseParams.nodes = response.nodes;
        var builder = new codec.MessageV1Builder(
            kThreatReporter_GetThreatDOMDetails_Name,
            codec.align(ThreatReporter_GetThreatDOMDetails_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ThreatReporter_GetThreatDOMDetails_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateThreatReporterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kThreatReporter_GetThreatDOMDetails_Name:
        if (message.expectsResponse())
          paramsClass = ThreatReporter_GetThreatDOMDetails_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateThreatReporterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kThreatReporter_GetThreatDOMDetails_Name:
        if (message.isResponse())
          paramsClass = ThreatReporter_GetThreatDOMDetails_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ThreatReporter = {
    name: 'safe_browsing.mojom.ThreatReporter',
    kVersion: 0,
    ptrClass: ThreatReporterPtr,
    proxyClass: ThreatReporterProxy,
    stubClass: ThreatReporterStub,
    validateRequest: validateThreatReporterRequest,
    validateResponse: validateThreatReporterResponse,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      getThreatDOMDetails: {
        params: ThreatReporter_GetThreatDOMDetails_Params,
      },
    },
  };
  ThreatReporterStub.prototype.validator = validateThreatReporterRequest;
  ThreatReporterProxy.prototype.validator = validateThreatReporterResponse;
  var kPhishingDetector_StartPhishingDetection_Name = 1313062564;

  function PhishingDetectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PhishingDetector,
                                                   handleOrPtrInfo);
  }

  function PhishingDetectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PhishingDetector, associatedInterfacePtrInfo);
  }

  PhishingDetectorAssociatedPtr.prototype =
      Object.create(PhishingDetectorPtr.prototype);
  PhishingDetectorAssociatedPtr.prototype.constructor =
      PhishingDetectorAssociatedPtr;

  function PhishingDetectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  PhishingDetectorPtr.prototype.startPhishingDetection = function() {
    return PhishingDetectorProxy.prototype.startPhishingDetection
        .apply(this.ptr.getProxy(), arguments);
  };

  PhishingDetectorProxy.prototype.startPhishingDetection = function(url) {
    var params_ = new PhishingDetector_StartPhishingDetection_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kPhishingDetector_StartPhishingDetection_Name,
        codec.align(PhishingDetector_StartPhishingDetection_Params.encodedSize));
    builder.encodeStruct(PhishingDetector_StartPhishingDetection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PhishingDetectorStub(delegate) {
    this.delegate_ = delegate;
  }
  PhishingDetectorStub.prototype.startPhishingDetection = function(url) {
    return this.delegate_ && this.delegate_.startPhishingDetection && this.delegate_.startPhishingDetection(url);
  }

  PhishingDetectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPhishingDetector_StartPhishingDetection_Name:
      var params = reader.decodeStruct(PhishingDetector_StartPhishingDetection_Params);
      this.startPhishingDetection(params.url);
      return true;
    default:
      return false;
    }
  };

  PhishingDetectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePhishingDetectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPhishingDetector_StartPhishingDetection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PhishingDetector_StartPhishingDetection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePhishingDetectorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PhishingDetector = {
    name: 'safe_browsing.mojom.PhishingDetector',
    kVersion: 0,
    ptrClass: PhishingDetectorPtr,
    proxyClass: PhishingDetectorProxy,
    stubClass: PhishingDetectorStub,
    validateRequest: validatePhishingDetectorRequest,
    validateResponse: null,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      startPhishingDetection: {
        params: PhishingDetector_StartPhishingDetection_Params,
      },
    },
  };
  PhishingDetectorStub.prototype.validator = validatePhishingDetectorRequest;
  PhishingDetectorProxy.prototype.validator = null;
  var kPhishingDetectorClient_PhishingDetectionDone_Name = 236960708;

  function PhishingDetectorClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PhishingDetectorClient,
                                                   handleOrPtrInfo);
  }

  function PhishingDetectorClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PhishingDetectorClient, associatedInterfacePtrInfo);
  }

  PhishingDetectorClientAssociatedPtr.prototype =
      Object.create(PhishingDetectorClientPtr.prototype);
  PhishingDetectorClientAssociatedPtr.prototype.constructor =
      PhishingDetectorClientAssociatedPtr;

  function PhishingDetectorClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  PhishingDetectorClientPtr.prototype.phishingDetectionDone = function() {
    return PhishingDetectorClientProxy.prototype.phishingDetectionDone
        .apply(this.ptr.getProxy(), arguments);
  };

  PhishingDetectorClientProxy.prototype.phishingDetectionDone = function(requestProto) {
    var params_ = new PhishingDetectorClient_PhishingDetectionDone_Params();
    params_.requestProto = requestProto;
    var builder = new codec.MessageV0Builder(
        kPhishingDetectorClient_PhishingDetectionDone_Name,
        codec.align(PhishingDetectorClient_PhishingDetectionDone_Params.encodedSize));
    builder.encodeStruct(PhishingDetectorClient_PhishingDetectionDone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PhishingDetectorClientStub(delegate) {
    this.delegate_ = delegate;
  }
  PhishingDetectorClientStub.prototype.phishingDetectionDone = function(requestProto) {
    return this.delegate_ && this.delegate_.phishingDetectionDone && this.delegate_.phishingDetectionDone(requestProto);
  }

  PhishingDetectorClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPhishingDetectorClient_PhishingDetectionDone_Name:
      var params = reader.decodeStruct(PhishingDetectorClient_PhishingDetectionDone_Params);
      this.phishingDetectionDone(params.requestProto);
      return true;
    default:
      return false;
    }
  };

  PhishingDetectorClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePhishingDetectorClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPhishingDetectorClient_PhishingDetectionDone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PhishingDetectorClient_PhishingDetectionDone_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePhishingDetectorClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PhishingDetectorClient = {
    name: 'safe_browsing.mojom.PhishingDetectorClient',
    kVersion: 0,
    ptrClass: PhishingDetectorClientPtr,
    proxyClass: PhishingDetectorClientProxy,
    stubClass: PhishingDetectorClientStub,
    validateRequest: validatePhishingDetectorClientRequest,
    validateResponse: null,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      phishingDetectionDone: {
        params: PhishingDetectorClient_PhishingDetectionDone_Params,
      },
    },
  };
  PhishingDetectorClientStub.prototype.validator = validatePhishingDetectorClientRequest;
  PhishingDetectorClientProxy.prototype.validator = null;
  var kPhishingModelSetter_SetPhishingModel_Name = 2025810824;

  function PhishingModelSetterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PhishingModelSetter,
                                                   handleOrPtrInfo);
  }

  function PhishingModelSetterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PhishingModelSetter, associatedInterfacePtrInfo);
  }

  PhishingModelSetterAssociatedPtr.prototype =
      Object.create(PhishingModelSetterPtr.prototype);
  PhishingModelSetterAssociatedPtr.prototype.constructor =
      PhishingModelSetterAssociatedPtr;

  function PhishingModelSetterProxy(receiver) {
    this.receiver_ = receiver;
  }
  PhishingModelSetterPtr.prototype.setPhishingModel = function() {
    return PhishingModelSetterProxy.prototype.setPhishingModel
        .apply(this.ptr.getProxy(), arguments);
  };

  PhishingModelSetterProxy.prototype.setPhishingModel = function(model) {
    var params_ = new PhishingModelSetter_SetPhishingModel_Params();
    params_.model = model;
    var builder = new codec.MessageV0Builder(
        kPhishingModelSetter_SetPhishingModel_Name,
        codec.align(PhishingModelSetter_SetPhishingModel_Params.encodedSize));
    builder.encodeStruct(PhishingModelSetter_SetPhishingModel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PhishingModelSetterStub(delegate) {
    this.delegate_ = delegate;
  }
  PhishingModelSetterStub.prototype.setPhishingModel = function(model) {
    return this.delegate_ && this.delegate_.setPhishingModel && this.delegate_.setPhishingModel(model);
  }

  PhishingModelSetterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPhishingModelSetter_SetPhishingModel_Name:
      var params = reader.decodeStruct(PhishingModelSetter_SetPhishingModel_Params);
      this.setPhishingModel(params.model);
      return true;
    default:
      return false;
    }
  };

  PhishingModelSetterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePhishingModelSetterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPhishingModelSetter_SetPhishingModel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PhishingModelSetter_SetPhishingModel_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePhishingModelSetterResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PhishingModelSetter = {
    name: 'safe_browsing.mojom.PhishingModelSetter',
    kVersion: 0,
    ptrClass: PhishingModelSetterPtr,
    proxyClass: PhishingModelSetterProxy,
    stubClass: PhishingModelSetterStub,
    validateRequest: validatePhishingModelSetterRequest,
    validateResponse: null,
    mojomId: 'components/safe_browsing/common/safe_browsing.mojom',
    fuzzMethods: {
      setPhishingModel: {
        params: PhishingModelSetter_SetPhishingModel_Params,
      },
    },
  };
  PhishingModelSetterStub.prototype.validator = validatePhishingModelSetterRequest;
  PhishingModelSetterProxy.prototype.validator = null;
  exports.AttributeNameValue = AttributeNameValue;
  exports.ThreatDOMDetailsNode = ThreatDOMDetailsNode;
  exports.SafeBrowsing = SafeBrowsing;
  exports.SafeBrowsingPtr = SafeBrowsingPtr;
  exports.SafeBrowsingAssociatedPtr = SafeBrowsingAssociatedPtr;
  exports.SafeBrowsingUrlChecker = SafeBrowsingUrlChecker;
  exports.SafeBrowsingUrlCheckerPtr = SafeBrowsingUrlCheckerPtr;
  exports.SafeBrowsingUrlCheckerAssociatedPtr = SafeBrowsingUrlCheckerAssociatedPtr;
  exports.UrlCheckNotifier = UrlCheckNotifier;
  exports.UrlCheckNotifierPtr = UrlCheckNotifierPtr;
  exports.UrlCheckNotifierAssociatedPtr = UrlCheckNotifierAssociatedPtr;
  exports.ThreatReporter = ThreatReporter;
  exports.ThreatReporterPtr = ThreatReporterPtr;
  exports.ThreatReporterAssociatedPtr = ThreatReporterAssociatedPtr;
  exports.PhishingDetector = PhishingDetector;
  exports.PhishingDetectorPtr = PhishingDetectorPtr;
  exports.PhishingDetectorAssociatedPtr = PhishingDetectorAssociatedPtr;
  exports.PhishingDetectorClient = PhishingDetectorClient;
  exports.PhishingDetectorClientPtr = PhishingDetectorClientPtr;
  exports.PhishingDetectorClientAssociatedPtr = PhishingDetectorClientAssociatedPtr;
  exports.PhishingModelSetter = PhishingModelSetter;
  exports.PhishingModelSetterPtr = PhishingModelSetterPtr;
  exports.PhishingModelSetterAssociatedPtr = PhishingModelSetterAssociatedPtr;
})();