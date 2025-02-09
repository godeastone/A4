// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/resource_settings.mojom';
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



  function ResourceSettings(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceSettings.prototype.initDefaults_ = function() {
    this.useGpuMemoryBufferResources = false;
  };
  ResourceSettings.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResourceSettings.generate = function(generator_) {
    var generated = new ResourceSettings;
    generated.useGpuMemoryBufferResources = generator_.generateBool();
    return generated;
  };

  ResourceSettings.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.useGpuMemoryBufferResources = mutator_.mutateBool(this.useGpuMemoryBufferResources);
    }
    return this;
  };
  ResourceSettings.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResourceSettings.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResourceSettings.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResourceSettings.validate = function(messageValidator, offset) {
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

  ResourceSettings.encodedSize = codec.kStructHeaderSize + 8;

  ResourceSettings.decode = function(decoder) {
    var packed;
    var val = new ResourceSettings();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.useGpuMemoryBufferResources = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ResourceSettings.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceSettings.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.useGpuMemoryBufferResources & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.ResourceSettings = ResourceSettings;
})();