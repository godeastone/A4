// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/filter_operations.mojom';
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
  var filter_operation$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/filter_operation.mojom', 'filter_operation.mojom.js');
  }



  function FilterOperations(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FilterOperations.prototype.initDefaults_ = function() {
    this.operations = null;
  };
  FilterOperations.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FilterOperations.generate = function(generator_) {
    var generated = new FilterOperations;
    generated.operations = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.FilterOperation, false);
    });
    return generated;
  };

  FilterOperations.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.operations = mutator_.mutateArray(this.operations, function(val) {
        return mutator_.mutateStruct(viz.mojom.FilterOperation, false);
      });
    }
    return this;
  };
  FilterOperations.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FilterOperations.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FilterOperations.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FilterOperations.validate = function(messageValidator, offset) {
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


    // validate FilterOperations.operations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(filter_operation$.FilterOperation), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FilterOperations.encodedSize = codec.kStructHeaderSize + 8;

  FilterOperations.decode = function(decoder) {
    var packed;
    var val = new FilterOperations();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.operations = decoder.decodeArrayPointer(new codec.PointerTo(filter_operation$.FilterOperation));
    return val;
  };

  FilterOperations.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FilterOperations.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(filter_operation$.FilterOperation), val.operations);
  };
  exports.FilterOperations = FilterOperations;
})();