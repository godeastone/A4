// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/icc_profile.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gfx.mojom');
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', 'color_space.mojom.js');
  }



  function ICCProfile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ICCProfile.prototype.initDefaults_ = function() {
  };
  ICCProfile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ICCProfile.generate = function(generator_) {
    var generated = new ICCProfile;
    return generated;
  };

  ICCProfile.prototype.mutate = function(mutator_) {
    return this;
  };
  ICCProfile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ICCProfile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ICCProfile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ICCProfile.validate = function(messageValidator, offset) {
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

  ICCProfile.encodedSize = codec.kStructHeaderSize + 0;

  ICCProfile.decode = function(decoder) {
    var packed;
    var val = new ICCProfile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ICCProfile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ICCProfile.encodedSize);
    encoder.writeUint32(0);
  };
  exports.ICCProfile = ICCProfile;
})();