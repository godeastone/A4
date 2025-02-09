// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/http_request_headers.mojom';
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



  function HttpRequestHeaderKeyValuePair(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HttpRequestHeaderKeyValuePair.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  HttpRequestHeaderKeyValuePair.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HttpRequestHeaderKeyValuePair.generate = function(generator_) {
    var generated = new HttpRequestHeaderKeyValuePair;
    generated.key = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    return generated;
  };

  HttpRequestHeaderKeyValuePair.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    return this;
  };
  HttpRequestHeaderKeyValuePair.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HttpRequestHeaderKeyValuePair.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HttpRequestHeaderKeyValuePair.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HttpRequestHeaderKeyValuePair.validate = function(messageValidator, offset) {
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


    // validate HttpRequestHeaderKeyValuePair.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate HttpRequestHeaderKeyValuePair.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HttpRequestHeaderKeyValuePair.encodedSize = codec.kStructHeaderSize + 16;

  HttpRequestHeaderKeyValuePair.decode = function(decoder) {
    var packed;
    var val = new HttpRequestHeaderKeyValuePair();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  HttpRequestHeaderKeyValuePair.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HttpRequestHeaderKeyValuePair.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(codec.String, val.value);
  };
  function HttpRequestHeaders(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HttpRequestHeaders.prototype.initDefaults_ = function() {
    this.headers = null;
  };
  HttpRequestHeaders.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HttpRequestHeaders.generate = function(generator_) {
    var generated = new HttpRequestHeaders;
    generated.headers = generator_.generateArray(function() {
      return generator_.generateStruct(network.mojom.HttpRequestHeaderKeyValuePair, false);
    });
    return generated;
  };

  HttpRequestHeaders.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.headers = mutator_.mutateArray(this.headers, function(val) {
        return mutator_.mutateStruct(network.mojom.HttpRequestHeaderKeyValuePair, false);
      });
    }
    return this;
  };
  HttpRequestHeaders.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HttpRequestHeaders.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HttpRequestHeaders.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HttpRequestHeaders.validate = function(messageValidator, offset) {
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


    // validate HttpRequestHeaders.headers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(HttpRequestHeaderKeyValuePair), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HttpRequestHeaders.encodedSize = codec.kStructHeaderSize + 8;

  HttpRequestHeaders.decode = function(decoder) {
    var packed;
    var val = new HttpRequestHeaders();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.headers = decoder.decodeArrayPointer(new codec.PointerTo(HttpRequestHeaderKeyValuePair));
    return val;
  };

  HttpRequestHeaders.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HttpRequestHeaders.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(HttpRequestHeaderKeyValuePair), val.headers);
  };
  exports.HttpRequestHeaderKeyValuePair = HttpRequestHeaderKeyValuePair;
  exports.HttpRequestHeaders = HttpRequestHeaders;
})();