// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom';
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



  function NavigationPreloadState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NavigationPreloadState.prototype.initDefaults_ = function() {
    this.enabled = false;
    this.header = "true";
  };
  NavigationPreloadState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NavigationPreloadState.generate = function(generator_) {
    var generated = new NavigationPreloadState;
    generated.enabled = generator_.generateBool();
    generated.header = generator_.generateString(false);
    return generated;
  };

  NavigationPreloadState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    if (mutator_.chooseMutateField()) {
      this.header = mutator_.mutateString(this.header, false);
    }
    return this;
  };
  NavigationPreloadState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NavigationPreloadState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NavigationPreloadState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NavigationPreloadState.validate = function(messageValidator, offset) {
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



    // validate NavigationPreloadState.header
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NavigationPreloadState.encodedSize = codec.kStructHeaderSize + 16;

  NavigationPreloadState.decode = function(decoder) {
    var packed;
    var val = new NavigationPreloadState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.header = decoder.decodeStruct(codec.String);
    return val;
  };

  NavigationPreloadState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NavigationPreloadState.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.header);
  };
  exports.NavigationPreloadState = NavigationPreloadState;
})();