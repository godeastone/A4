// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/process_id.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojoBase.mojom');



  function ProcessId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessId.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  ProcessId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProcessId.generate = function(generator_) {
    var generated = new ProcessId;
    generated.pid = generator_.generateUint32();
    return generated;
  };

  ProcessId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateUint32(this.pid);
    }
    return this;
  };
  ProcessId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProcessId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProcessId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProcessId.validate = function(messageValidator, offset) {
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

  ProcessId.encodedSize = codec.kStructHeaderSize + 8;

  ProcessId.decode = function(decoder) {
    var packed;
    var val = new ProcessId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProcessId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.ProcessId = ProcessId;
})();