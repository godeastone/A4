// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/blob/blob_url_store.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', '../../../../../services/network/public/mojom/url_loader_factory.mojom.js');
  }
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', 'blob.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function BlobURLStore_Register_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_Register_Params.prototype.initDefaults_ = function() {
    this.blob = new blob$.BlobPtr();
    this.url = null;
  };
  BlobURLStore_Register_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_Register_Params.generate = function(generator_) {
    var generated = new BlobURLStore_Register_Params;
    generated.blob = generator_.generateInterface("blink.mojom.Blob", false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  BlobURLStore_Register_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateInterface(this.blob, "blink.mojom.Blob", false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  BlobURLStore_Register_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobPtr"]);
    }
    return handles;
  };

  BlobURLStore_Register_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_Register_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blob = handles[idx++];;
    return idx;
  };

  BlobURLStore_Register_Params.validate = function(messageValidator, offset) {
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


    // validate BlobURLStore_Register_Params.blob
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobURLStore_Register_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLStore_Register_Params.encodedSize = codec.kStructHeaderSize + 16;

  BlobURLStore_Register_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_Register_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStruct(new codec.Interface(blob$.BlobPtr));
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  BlobURLStore_Register_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_Register_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(blob$.BlobPtr), val.blob);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function BlobURLStore_Register_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_Register_ResponseParams.prototype.initDefaults_ = function() {
  };
  BlobURLStore_Register_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_Register_ResponseParams.generate = function(generator_) {
    var generated = new BlobURLStore_Register_ResponseParams;
    return generated;
  };

  BlobURLStore_Register_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  BlobURLStore_Register_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobURLStore_Register_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_Register_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobURLStore_Register_ResponseParams.validate = function(messageValidator, offset) {
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

  BlobURLStore_Register_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  BlobURLStore_Register_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_Register_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BlobURLStore_Register_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_Register_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function BlobURLStore_Revoke_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_Revoke_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  BlobURLStore_Revoke_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_Revoke_Params.generate = function(generator_) {
    var generated = new BlobURLStore_Revoke_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  BlobURLStore_Revoke_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  BlobURLStore_Revoke_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobURLStore_Revoke_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_Revoke_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobURLStore_Revoke_Params.validate = function(messageValidator, offset) {
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


    // validate BlobURLStore_Revoke_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLStore_Revoke_Params.encodedSize = codec.kStructHeaderSize + 8;

  BlobURLStore_Revoke_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_Revoke_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  BlobURLStore_Revoke_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_Revoke_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function BlobURLStore_Resolve_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_Resolve_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  BlobURLStore_Resolve_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_Resolve_Params.generate = function(generator_) {
    var generated = new BlobURLStore_Resolve_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  BlobURLStore_Resolve_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  BlobURLStore_Resolve_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobURLStore_Resolve_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_Resolve_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobURLStore_Resolve_Params.validate = function(messageValidator, offset) {
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


    // validate BlobURLStore_Resolve_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLStore_Resolve_Params.encodedSize = codec.kStructHeaderSize + 8;

  BlobURLStore_Resolve_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_Resolve_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  BlobURLStore_Resolve_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_Resolve_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function BlobURLStore_Resolve_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_Resolve_ResponseParams.prototype.initDefaults_ = function() {
    this.blob = new blob$.BlobPtr();
  };
  BlobURLStore_Resolve_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_Resolve_ResponseParams.generate = function(generator_) {
    var generated = new BlobURLStore_Resolve_ResponseParams;
    generated.blob = generator_.generateInterface("blink.mojom.Blob", true);
    return generated;
  };

  BlobURLStore_Resolve_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateInterface(this.blob, "blink.mojom.Blob", true);
    }
    return this;
  };
  BlobURLStore_Resolve_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobPtr"]);
    }
    return handles;
  };

  BlobURLStore_Resolve_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_Resolve_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blob = handles[idx++];;
    return idx;
  };

  BlobURLStore_Resolve_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BlobURLStore_Resolve_ResponseParams.blob
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLStore_Resolve_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BlobURLStore_Resolve_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_Resolve_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStruct(new codec.NullableInterface(blob$.BlobPtr));
    return val;
  };

  BlobURLStore_Resolve_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_Resolve_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.NullableInterface(blob$.BlobPtr), val.blob);
  };
  function BlobURLStore_ResolveAsURLLoaderFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_ResolveAsURLLoaderFactory_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.factory = new bindings.InterfaceRequest();
  };
  BlobURLStore_ResolveAsURLLoaderFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_ResolveAsURLLoaderFactory_Params.generate = function(generator_) {
    var generated = new BlobURLStore_ResolveAsURLLoaderFactory_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.factory = generator_.generateInterfaceRequest("network.mojom.URLLoaderFactory", false);
    return generated;
  };

  BlobURLStore_ResolveAsURLLoaderFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.factory = mutator_.mutateInterfaceRequest(this.factory, "network.mojom.URLLoaderFactory", false);
    }
    return this;
  };
  BlobURLStore_ResolveAsURLLoaderFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.factory !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryRequest"]);
    }
    return handles;
  };

  BlobURLStore_ResolveAsURLLoaderFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_ResolveAsURLLoaderFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.factory = handles[idx++];;
    return idx;
  };

  BlobURLStore_ResolveAsURLLoaderFactory_Params.validate = function(messageValidator, offset) {
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


    // validate BlobURLStore_ResolveAsURLLoaderFactory_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobURLStore_ResolveAsURLLoaderFactory_Params.factory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLStore_ResolveAsURLLoaderFactory_Params.encodedSize = codec.kStructHeaderSize + 16;

  BlobURLStore_ResolveAsURLLoaderFactory_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_ResolveAsURLLoaderFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.factory = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BlobURLStore_ResolveAsURLLoaderFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_ResolveAsURLLoaderFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.InterfaceRequest, val.factory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BlobURLStore_ResolveForNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLStore_ResolveForNavigation_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.token = new bindings.InterfaceRequest();
  };
  BlobURLStore_ResolveForNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLStore_ResolveForNavigation_Params.generate = function(generator_) {
    var generated = new BlobURLStore_ResolveForNavigation_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.token = generator_.generateInterfaceRequest("blink.mojom.BlobURLToken", false);
    return generated;
  };

  BlobURLStore_ResolveForNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateInterfaceRequest(this.token, "blink.mojom.BlobURLToken", false);
    }
    return this;
  };
  BlobURLStore_ResolveForNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.token !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobURLTokenRequest"]);
    }
    return handles;
  };

  BlobURLStore_ResolveForNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLStore_ResolveForNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.token = handles[idx++];;
    return idx;
  };

  BlobURLStore_ResolveForNavigation_Params.validate = function(messageValidator, offset) {
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


    // validate BlobURLStore_ResolveForNavigation_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobURLStore_ResolveForNavigation_Params.token
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLStore_ResolveForNavigation_Params.encodedSize = codec.kStructHeaderSize + 16;

  BlobURLStore_ResolveForNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLStore_ResolveForNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.token = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BlobURLStore_ResolveForNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLStore_ResolveForNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.InterfaceRequest, val.token);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BlobURLToken_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLToken_Clone_Params.prototype.initDefaults_ = function() {
    this.token = new bindings.InterfaceRequest();
  };
  BlobURLToken_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLToken_Clone_Params.generate = function(generator_) {
    var generated = new BlobURLToken_Clone_Params;
    generated.token = generator_.generateInterfaceRequest("blink.mojom.BlobURLToken", false);
    return generated;
  };

  BlobURLToken_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateInterfaceRequest(this.token, "blink.mojom.BlobURLToken", false);
    }
    return this;
  };
  BlobURLToken_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.token !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobURLTokenRequest"]);
    }
    return handles;
  };

  BlobURLToken_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLToken_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.token = handles[idx++];;
    return idx;
  };

  BlobURLToken_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate BlobURLToken_Clone_Params.token
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLToken_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  BlobURLToken_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLToken_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BlobURLToken_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLToken_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.token);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BlobURLToken_GetToken_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLToken_GetToken_Params.prototype.initDefaults_ = function() {
  };
  BlobURLToken_GetToken_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLToken_GetToken_Params.generate = function(generator_) {
    var generated = new BlobURLToken_GetToken_Params;
    return generated;
  };

  BlobURLToken_GetToken_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  BlobURLToken_GetToken_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobURLToken_GetToken_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLToken_GetToken_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobURLToken_GetToken_Params.validate = function(messageValidator, offset) {
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

  BlobURLToken_GetToken_Params.encodedSize = codec.kStructHeaderSize + 0;

  BlobURLToken_GetToken_Params.decode = function(decoder) {
    var packed;
    var val = new BlobURLToken_GetToken_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BlobURLToken_GetToken_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLToken_GetToken_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function BlobURLToken_GetToken_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobURLToken_GetToken_ResponseParams.prototype.initDefaults_ = function() {
    this.token = null;
  };
  BlobURLToken_GetToken_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobURLToken_GetToken_ResponseParams.generate = function(generator_) {
    var generated = new BlobURLToken_GetToken_ResponseParams;
    generated.token = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  BlobURLToken_GetToken_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  BlobURLToken_GetToken_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobURLToken_GetToken_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobURLToken_GetToken_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobURLToken_GetToken_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BlobURLToken_GetToken_ResponseParams.token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobURLToken_GetToken_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BlobURLToken_GetToken_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BlobURLToken_GetToken_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  BlobURLToken_GetToken_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobURLToken_GetToken_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.token);
  };
  var kBlobURLStore_Register_Name = 1633479105;
  var kBlobURLStore_Revoke_Name = 55256330;
  var kBlobURLStore_Resolve_Name = 1862391295;
  var kBlobURLStore_ResolveAsURLLoaderFactory_Name = 719998540;
  var kBlobURLStore_ResolveForNavigation_Name = 1426550398;

  function BlobURLStorePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BlobURLStore,
                                                   handleOrPtrInfo);
  }

  function BlobURLStoreAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BlobURLStore, associatedInterfacePtrInfo);
  }

  BlobURLStoreAssociatedPtr.prototype =
      Object.create(BlobURLStorePtr.prototype);
  BlobURLStoreAssociatedPtr.prototype.constructor =
      BlobURLStoreAssociatedPtr;

  function BlobURLStoreProxy(receiver) {
    this.receiver_ = receiver;
  }
  BlobURLStorePtr.prototype.register = function() {
    return BlobURLStoreProxy.prototype.register
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLStoreProxy.prototype.register = function(blob, url) {
    var params_ = new BlobURLStore_Register_Params();
    params_.blob = blob;
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBlobURLStore_Register_Name,
          codec.align(BlobURLStore_Register_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BlobURLStore_Register_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BlobURLStore_Register_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BlobURLStorePtr.prototype.revoke = function() {
    return BlobURLStoreProxy.prototype.revoke
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLStoreProxy.prototype.revoke = function(url) {
    var params_ = new BlobURLStore_Revoke_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kBlobURLStore_Revoke_Name,
        codec.align(BlobURLStore_Revoke_Params.encodedSize));
    builder.encodeStruct(BlobURLStore_Revoke_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  BlobURLStorePtr.prototype.resolve = function() {
    return BlobURLStoreProxy.prototype.resolve
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLStoreProxy.prototype.resolve = function(url) {
    var params_ = new BlobURLStore_Resolve_Params();
    params_.url = url;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBlobURLStore_Resolve_Name,
          codec.align(BlobURLStore_Resolve_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BlobURLStore_Resolve_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BlobURLStore_Resolve_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BlobURLStorePtr.prototype.resolveAsURLLoaderFactory = function() {
    return BlobURLStoreProxy.prototype.resolveAsURLLoaderFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLStoreProxy.prototype.resolveAsURLLoaderFactory = function(url, factory) {
    var params_ = new BlobURLStore_ResolveAsURLLoaderFactory_Params();
    params_.url = url;
    params_.factory = factory;
    var builder = new codec.MessageV0Builder(
        kBlobURLStore_ResolveAsURLLoaderFactory_Name,
        codec.align(BlobURLStore_ResolveAsURLLoaderFactory_Params.encodedSize));
    builder.encodeStruct(BlobURLStore_ResolveAsURLLoaderFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  BlobURLStorePtr.prototype.resolveForNavigation = function() {
    return BlobURLStoreProxy.prototype.resolveForNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLStoreProxy.prototype.resolveForNavigation = function(url, token) {
    var params_ = new BlobURLStore_ResolveForNavigation_Params();
    params_.url = url;
    params_.token = token;
    var builder = new codec.MessageV0Builder(
        kBlobURLStore_ResolveForNavigation_Name,
        codec.align(BlobURLStore_ResolveForNavigation_Params.encodedSize));
    builder.encodeStruct(BlobURLStore_ResolveForNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function BlobURLStoreStub(delegate) {
    this.delegate_ = delegate;
  }
  BlobURLStoreStub.prototype.register = function(blob, url) {
    return this.delegate_ && this.delegate_.register && this.delegate_.register(blob, url);
  }
  BlobURLStoreStub.prototype.revoke = function(url) {
    return this.delegate_ && this.delegate_.revoke && this.delegate_.revoke(url);
  }
  BlobURLStoreStub.prototype.resolve = function(url) {
    return this.delegate_ && this.delegate_.resolve && this.delegate_.resolve(url);
  }
  BlobURLStoreStub.prototype.resolveAsURLLoaderFactory = function(url, factory) {
    return this.delegate_ && this.delegate_.resolveAsURLLoaderFactory && this.delegate_.resolveAsURLLoaderFactory(url, factory);
  }
  BlobURLStoreStub.prototype.resolveForNavigation = function(url, token) {
    return this.delegate_ && this.delegate_.resolveForNavigation && this.delegate_.resolveForNavigation(url, token);
  }

  BlobURLStoreStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBlobURLStore_Revoke_Name:
      var params = reader.decodeStruct(BlobURLStore_Revoke_Params);
      this.revoke(params.url);
      return true;
    case kBlobURLStore_ResolveAsURLLoaderFactory_Name:
      var params = reader.decodeStruct(BlobURLStore_ResolveAsURLLoaderFactory_Params);
      this.resolveAsURLLoaderFactory(params.url, params.factory);
      return true;
    case kBlobURLStore_ResolveForNavigation_Name:
      var params = reader.decodeStruct(BlobURLStore_ResolveForNavigation_Params);
      this.resolveForNavigation(params.url, params.token);
      return true;
    default:
      return false;
    }
  };

  BlobURLStoreStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBlobURLStore_Register_Name:
      var params = reader.decodeStruct(BlobURLStore_Register_Params);
      this.register(params.blob, params.url).then(function(response) {
        var responseParams =
            new BlobURLStore_Register_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kBlobURLStore_Register_Name,
            codec.align(BlobURLStore_Register_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BlobURLStore_Register_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBlobURLStore_Resolve_Name:
      var params = reader.decodeStruct(BlobURLStore_Resolve_Params);
      this.resolve(params.url).then(function(response) {
        var responseParams =
            new BlobURLStore_Resolve_ResponseParams();
        responseParams.blob = response.blob;
        var builder = new codec.MessageV1Builder(
            kBlobURLStore_Resolve_Name,
            codec.align(BlobURLStore_Resolve_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BlobURLStore_Resolve_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBlobURLStoreRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBlobURLStore_Register_Name:
        if (message.expectsResponse())
          paramsClass = BlobURLStore_Register_Params;
      break;
      case kBlobURLStore_Revoke_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BlobURLStore_Revoke_Params;
      break;
      case kBlobURLStore_Resolve_Name:
        if (message.expectsResponse())
          paramsClass = BlobURLStore_Resolve_Params;
      break;
      case kBlobURLStore_ResolveAsURLLoaderFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BlobURLStore_ResolveAsURLLoaderFactory_Params;
      break;
      case kBlobURLStore_ResolveForNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BlobURLStore_ResolveForNavigation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBlobURLStoreResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBlobURLStore_Register_Name:
        if (message.isResponse())
          paramsClass = BlobURLStore_Register_ResponseParams;
        break;
      case kBlobURLStore_Resolve_Name:
        if (message.isResponse())
          paramsClass = BlobURLStore_Resolve_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BlobURLStore = {
    name: 'blink.mojom.BlobURLStore',
    kVersion: 0,
    ptrClass: BlobURLStorePtr,
    proxyClass: BlobURLStoreProxy,
    stubClass: BlobURLStoreStub,
    validateRequest: validateBlobURLStoreRequest,
    validateResponse: validateBlobURLStoreResponse,
    mojomId: 'third_party/blink/public/mojom/blob/blob_url_store.mojom',
    fuzzMethods: {
      register: {
        params: BlobURLStore_Register_Params,
      },
      revoke: {
        params: BlobURLStore_Revoke_Params,
      },
      resolve: {
        params: BlobURLStore_Resolve_Params,
      },
      resolveAsURLLoaderFactory: {
        params: BlobURLStore_ResolveAsURLLoaderFactory_Params,
      },
      resolveForNavigation: {
        params: BlobURLStore_ResolveForNavigation_Params,
      },
    },
  };
  BlobURLStoreStub.prototype.validator = validateBlobURLStoreRequest;
  BlobURLStoreProxy.prototype.validator = validateBlobURLStoreResponse;
  var kBlobURLToken_Clone_Name = 1896748652;
  var kBlobURLToken_GetToken_Name = 1738817298;

  function BlobURLTokenPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BlobURLToken,
                                                   handleOrPtrInfo);
  }

  function BlobURLTokenAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BlobURLToken, associatedInterfacePtrInfo);
  }

  BlobURLTokenAssociatedPtr.prototype =
      Object.create(BlobURLTokenPtr.prototype);
  BlobURLTokenAssociatedPtr.prototype.constructor =
      BlobURLTokenAssociatedPtr;

  function BlobURLTokenProxy(receiver) {
    this.receiver_ = receiver;
  }
  BlobURLTokenPtr.prototype.clone = function() {
    return BlobURLTokenProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLTokenProxy.prototype.clone = function(token) {
    var params_ = new BlobURLToken_Clone_Params();
    params_.token = token;
    var builder = new codec.MessageV0Builder(
        kBlobURLToken_Clone_Name,
        codec.align(BlobURLToken_Clone_Params.encodedSize));
    builder.encodeStruct(BlobURLToken_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  BlobURLTokenPtr.prototype.getToken = function() {
    return BlobURLTokenProxy.prototype.getToken
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobURLTokenProxy.prototype.getToken = function() {
    var params_ = new BlobURLToken_GetToken_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBlobURLToken_GetToken_Name,
          codec.align(BlobURLToken_GetToken_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BlobURLToken_GetToken_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BlobURLToken_GetToken_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BlobURLTokenStub(delegate) {
    this.delegate_ = delegate;
  }
  BlobURLTokenStub.prototype.clone = function(token) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(token);
  }
  BlobURLTokenStub.prototype.getToken = function() {
    return this.delegate_ && this.delegate_.getToken && this.delegate_.getToken();
  }

  BlobURLTokenStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBlobURLToken_Clone_Name:
      var params = reader.decodeStruct(BlobURLToken_Clone_Params);
      this.clone(params.token);
      return true;
    default:
      return false;
    }
  };

  BlobURLTokenStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBlobURLToken_GetToken_Name:
      var params = reader.decodeStruct(BlobURLToken_GetToken_Params);
      this.getToken().then(function(response) {
        var responseParams =
            new BlobURLToken_GetToken_ResponseParams();
        responseParams.token = response.token;
        var builder = new codec.MessageV1Builder(
            kBlobURLToken_GetToken_Name,
            codec.align(BlobURLToken_GetToken_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BlobURLToken_GetToken_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBlobURLTokenRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBlobURLToken_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BlobURLToken_Clone_Params;
      break;
      case kBlobURLToken_GetToken_Name:
        if (message.expectsResponse())
          paramsClass = BlobURLToken_GetToken_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBlobURLTokenResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBlobURLToken_GetToken_Name:
        if (message.isResponse())
          paramsClass = BlobURLToken_GetToken_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BlobURLToken = {
    name: 'blink.mojom.BlobURLToken',
    kVersion: 0,
    ptrClass: BlobURLTokenPtr,
    proxyClass: BlobURLTokenProxy,
    stubClass: BlobURLTokenStub,
    validateRequest: validateBlobURLTokenRequest,
    validateResponse: validateBlobURLTokenResponse,
    mojomId: 'third_party/blink/public/mojom/blob/blob_url_store.mojom',
    fuzzMethods: {
      clone: {
        params: BlobURLToken_Clone_Params,
      },
      getToken: {
        params: BlobURLToken_GetToken_Params,
      },
    },
  };
  BlobURLTokenStub.prototype.validator = validateBlobURLTokenRequest;
  BlobURLTokenProxy.prototype.validator = validateBlobURLTokenResponse;
  exports.BlobURLStore = BlobURLStore;
  exports.BlobURLStorePtr = BlobURLStorePtr;
  exports.BlobURLStoreAssociatedPtr = BlobURLStoreAssociatedPtr;
  exports.BlobURLToken = BlobURLToken;
  exports.BlobURLTokenPtr = BlobURLTokenPtr;
  exports.BlobURLTokenAssociatedPtr = BlobURLTokenAssociatedPtr;
})();