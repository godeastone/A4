// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/capabilities.mojom';
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



  function Capabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Capabilities.prototype.initDefaults_ = function() {
  };
  Capabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Capabilities.generate = function(generator_) {
    var generated = new Capabilities;
    return generated;
  };

  Capabilities.prototype.mutate = function(mutator_) {
    return this;
  };
  Capabilities.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Capabilities.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Capabilities.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Capabilities.validate = function(messageValidator, offset) {
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

  Capabilities.encodedSize = codec.kStructHeaderSize + 0;

  Capabilities.decode = function(decoder) {
    var packed;
    var val = new Capabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Capabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Capabilities.encodedSize);
    encoder.writeUint32(0);
  };
  exports.Capabilities = Capabilities;
})();