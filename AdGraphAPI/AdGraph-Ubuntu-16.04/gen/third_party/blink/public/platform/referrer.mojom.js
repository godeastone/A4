// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/referrer.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var ReferrerPolicy = {};
  ReferrerPolicy.ALWAYS = 0;
  ReferrerPolicy.DEFAULT = ReferrerPolicy.ALWAYS + 1;
  ReferrerPolicy.NO_REFERRER_WHEN_DOWNGRADE = ReferrerPolicy.DEFAULT + 1;
  ReferrerPolicy.NEVER = ReferrerPolicy.NO_REFERRER_WHEN_DOWNGRADE + 1;
  ReferrerPolicy.ORIGIN = ReferrerPolicy.NEVER + 1;
  ReferrerPolicy.ORIGIN_WHEN_CROSS_ORIGIN = ReferrerPolicy.ORIGIN + 1;
  ReferrerPolicy.SAME_ORIGIN = ReferrerPolicy.ORIGIN_WHEN_CROSS_ORIGIN + 1;
  ReferrerPolicy.STRICT_ORIGIN = ReferrerPolicy.SAME_ORIGIN + 1;
  ReferrerPolicy.NO_REFERRER_WHEN_DOWNGRADE_ORIGIN_WHEN_CROSS_ORIGIN = ReferrerPolicy.STRICT_ORIGIN + 1;

  ReferrerPolicy.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    }
    return false;
  };

  ReferrerPolicy.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function Referrer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Referrer.prototype.initDefaults_ = function() {
    this.url = null;
    this.policy = 0;
  };
  Referrer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Referrer.generate = function(generator_) {
    var generated = new Referrer;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.policy = generator_.generateEnum(0, 8);
    return generated;
  };

  Referrer.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.policy = mutator_.mutateEnum(this.policy, 0, 8);
    }
    return this;
  };
  Referrer.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Referrer.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Referrer.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Referrer.validate = function(messageValidator, offset) {
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


    // validate Referrer.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Referrer.policy
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ReferrerPolicy);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Referrer.encodedSize = codec.kStructHeaderSize + 16;

  Referrer.decode = function(decoder) {
    var packed;
    var val = new Referrer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.policy = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Referrer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Referrer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int32, val.policy);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.ReferrerPolicy = ReferrerPolicy;
  exports.Referrer = Referrer;
})();