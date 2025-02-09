// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/dx_diag_node.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gpu.mojom');



  function DxDiagNode(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DxDiagNode.prototype.initDefaults_ = function() {
    this.values = null;
    this.children = null;
  };
  DxDiagNode.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DxDiagNode.generate = function(generator_) {
    var generated = new DxDiagNode;
    generated.values = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateString(false);
      });
    generated.children = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateStruct(gpu.mojom.DxDiagNode, false);
      });
    return generated;
  };

  DxDiagNode.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateMap(this.values,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateString(val, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.children = mutator_.mutateMap(this.children,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateStruct(gpu.mojom.DxDiagNode, false);
        });
    }
    return this;
  };
  DxDiagNode.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DxDiagNode.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DxDiagNode.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DxDiagNode.validate = function(messageValidator, offset) {
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


    // validate DxDiagNode.values
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DxDiagNode.children
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, new codec.PointerTo(DxDiagNode), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DxDiagNode.encodedSize = codec.kStructHeaderSize + 16;

  DxDiagNode.decode = function(decoder) {
    var packed;
    var val = new DxDiagNode();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.values = decoder.decodeMapPointer(codec.String, codec.String);
    val.children = decoder.decodeMapPointer(codec.String, new codec.PointerTo(DxDiagNode));
    return val;
  };

  DxDiagNode.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DxDiagNode.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, codec.String, val.values);
    encoder.encodeMapPointer(codec.String, new codec.PointerTo(DxDiagNode), val.children);
  };
  exports.DxDiagNode = DxDiagNode;
})();