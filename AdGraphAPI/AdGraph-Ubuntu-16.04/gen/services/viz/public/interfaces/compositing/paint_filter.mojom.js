// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/paint_filter.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');



  function PaintFilter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaintFilter.prototype.initDefaults_ = function() {
    this.data = null;
  };
  PaintFilter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaintFilter.generate = function(generator_) {
    var generated = new PaintFilter;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  PaintFilter.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  PaintFilter.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaintFilter.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaintFilter.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaintFilter.validate = function(messageValidator, offset) {
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


    // validate PaintFilter.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaintFilter.encodedSize = codec.kStructHeaderSize + 8;

  PaintFilter.decode = function(decoder) {
    var packed;
    var val = new PaintFilter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  PaintFilter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaintFilter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  exports.PaintFilter = PaintFilter;
})();