// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/audio_parameters.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('media.mojom');



  function AudioParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioParameters.prototype.initDefaults_ = function() {
  };
  AudioParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioParameters.generate = function(generator_) {
    var generated = new AudioParameters;
    return generated;
  };

  AudioParameters.prototype.mutate = function(mutator_) {
    return this;
  };
  AudioParameters.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioParameters.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioParameters.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioParameters.validate = function(messageValidator, offset) {
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

  AudioParameters.encodedSize = codec.kStructHeaderSize + 0;

  AudioParameters.decode = function(decoder) {
    var packed;
    var val = new AudioParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AudioParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioParameters.encodedSize);
    encoder.writeUint32(0);
  };
  exports.AudioParameters = AudioParameters;
})();