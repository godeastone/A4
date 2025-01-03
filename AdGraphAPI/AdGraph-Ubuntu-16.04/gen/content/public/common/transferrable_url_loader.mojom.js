// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/transferrable_url_loader.mojom';
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
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', '../../../services/network/public/mojom/url_loader.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function TransferrableURLLoader(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TransferrableURLLoader.prototype.initDefaults_ = function() {
    this.url = null;
    this.urlLoader = new url_loader$.URLLoaderPtr();
    this.urlLoaderClient = new bindings.InterfaceRequest();
    this.head = null;
  };
  TransferrableURLLoader.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TransferrableURLLoader.generate = function(generator_) {
    var generated = new TransferrableURLLoader;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.urlLoader = generator_.generateInterface("network.mojom.URLLoader", false);
    generated.urlLoaderClient = generator_.generateInterfaceRequest("network.mojom.URLLoaderClient", false);
    generated.head = generator_.generateStruct(network.mojom.URLResponseHead, false);
    return generated;
  };

  TransferrableURLLoader.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.urlLoader = mutator_.mutateInterface(this.urlLoader, "network.mojom.URLLoader", false);
    }
    if (mutator_.chooseMutateField()) {
      this.urlLoaderClient = mutator_.mutateInterfaceRequest(this.urlLoaderClient, "network.mojom.URLLoaderClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.head = mutator_.mutateStruct(network.mojom.URLResponseHead, false);
    }
    return this;
  };
  TransferrableURLLoader.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.urlLoader !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderPtr"]);
    }
    if (this.urlLoaderClient !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderClientRequest"]);
    }
    return handles;
  };

  TransferrableURLLoader.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TransferrableURLLoader.prototype.setHandlesInternal_ = function(handles, idx) {
    this.urlLoader = handles[idx++];;
    this.urlLoaderClient = handles[idx++];;
    return idx;
  };

  TransferrableURLLoader.validate = function(messageValidator, offset) {
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


    // validate TransferrableURLLoader.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferrableURLLoader.urlLoader
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferrableURLLoader.urlLoaderClient
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferrableURLLoader.head
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url_loader$.URLResponseHead, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TransferrableURLLoader.encodedSize = codec.kStructHeaderSize + 32;

  TransferrableURLLoader.decode = function(decoder) {
    var packed;
    var val = new TransferrableURLLoader();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.urlLoader = decoder.decodeStruct(new codec.Interface(url_loader$.URLLoaderPtr));
    val.urlLoaderClient = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.head = decoder.decodeStructPointer(url_loader$.URLResponseHead);
    return val;
  };

  TransferrableURLLoader.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TransferrableURLLoader.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(new codec.Interface(url_loader$.URLLoaderPtr), val.urlLoader);
    encoder.encodeStruct(codec.InterfaceRequest, val.urlLoaderClient);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url_loader$.URLResponseHead, val.head);
  };
  exports.TransferrableURLLoader = TransferrableURLLoader;
})();