// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/url_loader_factory_bundle.mojom';
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
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', '../../services/network/public/mojom/url_loader_factory.mojom.js');
  }



  function URLLoaderFactoryBundle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  URLLoaderFactoryBundle.prototype.initDefaults_ = function() {
    this.defaultFactory = new url_loader_factory$.URLLoaderFactoryPtr();
    this.factories = null;
  };
  URLLoaderFactoryBundle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  URLLoaderFactoryBundle.generate = function(generator_) {
    var generated = new URLLoaderFactoryBundle;
    generated.defaultFactory = generator_.generateInterface("network.mojom.URLLoaderFactory", false);
    generated.factories = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateInterface("network.mojom.URLLoaderFactory", false);
      });
    return generated;
  };

  URLLoaderFactoryBundle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.defaultFactory = mutator_.mutateInterface(this.defaultFactory, "network.mojom.URLLoaderFactory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.factories = mutator_.mutateMap(this.factories,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateInterface(val, "network.mojom.URLLoaderFactory", false);
        });
    }
    return this;
  };
  URLLoaderFactoryBundle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.defaultFactory !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryPtr"]);
    }
    if (this.factories !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], Array.from(this.factories.values()).map(function(val) {
        if (val) {
          return ["network.mojom.URLLoaderFactoryPtr"];
        }
        return [];
      })));
    }
    return handles;
  };

  URLLoaderFactoryBundle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  URLLoaderFactoryBundle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.defaultFactory = handles[idx++];;
    this.factories.forEach(function(val) {
      val = handles[idx++];;
    });
    return idx;
  };

  URLLoaderFactoryBundle.validate = function(messageValidator, offset) {
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


    // validate URLLoaderFactoryBundle.defaultFactory
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate URLLoaderFactoryBundle.factories
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  URLLoaderFactoryBundle.encodedSize = codec.kStructHeaderSize + 16;

  URLLoaderFactoryBundle.decode = function(decoder) {
    var packed;
    var val = new URLLoaderFactoryBundle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.defaultFactory = decoder.decodeStruct(new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr));
    val.factories = decoder.decodeMapPointer(codec.String, new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr));
    return val;
  };

  URLLoaderFactoryBundle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(URLLoaderFactoryBundle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr), val.defaultFactory);
    encoder.encodeMapPointer(codec.String, new codec.Interface(url_loader_factory$.URLLoaderFactoryPtr), val.factories);
  };
  exports.URLLoaderFactoryBundle = URLLoaderFactoryBundle;
})();