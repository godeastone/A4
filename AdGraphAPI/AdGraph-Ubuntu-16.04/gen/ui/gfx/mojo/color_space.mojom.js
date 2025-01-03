// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/color_space.mojom';
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



  function ColorSpace(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ColorSpace.prototype.initDefaults_ = function() {
  };
  ColorSpace.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ColorSpace.generate = function(generator_) {
    var generated = new ColorSpace;
    return generated;
  };

  ColorSpace.prototype.mutate = function(mutator_) {
    return this;
  };
  ColorSpace.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ColorSpace.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ColorSpace.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ColorSpace.validate = function(messageValidator, offset) {
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

  ColorSpace.encodedSize = codec.kStructHeaderSize + 0;

  ColorSpace.decode = function(decoder) {
    var packed;
    var val = new ColorSpace();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ColorSpace.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ColorSpace.encodedSize);
    encoder.writeUint32(0);
  };
  exports.ColorSpace = ColorSpace;
})();