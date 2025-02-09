// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/selection.mojom';
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
  var selection_bound$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/selection_bound.mojom', '../../../../../ui/gfx/mojo/selection_bound.mojom.js');
  }



  function Selection(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Selection.prototype.initDefaults_ = function() {
    this.start = null;
    this.end = null;
  };
  Selection.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Selection.generate = function(generator_) {
    var generated = new Selection;
    generated.start = generator_.generateStruct(gfx.mojom.SelectionBound, false);
    generated.end = generator_.generateStruct(gfx.mojom.SelectionBound, false);
    return generated;
  };

  Selection.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateStruct(gfx.mojom.SelectionBound, false);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateStruct(gfx.mojom.SelectionBound, false);
    }
    return this;
  };
  Selection.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Selection.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Selection.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Selection.validate = function(messageValidator, offset) {
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


    // validate Selection.start
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, selection_bound$.SelectionBound, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Selection.end
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, selection_bound$.SelectionBound, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Selection.encodedSize = codec.kStructHeaderSize + 16;

  Selection.decode = function(decoder) {
    var packed;
    var val = new Selection();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStructPointer(selection_bound$.SelectionBound);
    val.end = decoder.decodeStructPointer(selection_bound$.SelectionBound);
    return val;
  };

  Selection.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Selection.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(selection_bound$.SelectionBound, val.start);
    encoder.encodeStructPointer(selection_bound$.SelectionBound, val.end);
  };
  exports.Selection = Selection;
})();