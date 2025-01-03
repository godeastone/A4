// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/frame_sink_id.mojom';
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



  function FrameSinkId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameSinkId.prototype.initDefaults_ = function() {
    this.clientId = 0;
    this.sinkId = 0;
  };
  FrameSinkId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameSinkId.generate = function(generator_) {
    var generated = new FrameSinkId;
    generated.clientId = generator_.generateUint32();
    generated.sinkId = generator_.generateUint32();
    return generated;
  };

  FrameSinkId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateUint32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.sinkId = mutator_.mutateUint32(this.sinkId);
    }
    return this;
  };
  FrameSinkId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameSinkId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameSinkId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameSinkId.validate = function(messageValidator, offset) {
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



    return validator.validationError.NONE;
  };

  FrameSinkId.encodedSize = codec.kStructHeaderSize + 8;

  FrameSinkId.decode = function(decoder) {
    var packed;
    var val = new FrameSinkId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Uint32);
    val.sinkId = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  FrameSinkId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameSinkId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.clientId);
    encoder.encodeStruct(codec.Uint32, val.sinkId);
  };
  exports.FrameSinkId = FrameSinkId;
})();