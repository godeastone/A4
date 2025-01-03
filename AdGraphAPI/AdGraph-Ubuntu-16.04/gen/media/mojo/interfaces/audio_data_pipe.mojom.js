// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/audio_data_pipe.mojom';
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



  function AudioDataPipe(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioDataPipe.prototype.initDefaults_ = function() {
    this.sharedMemory = null;
    this.socket = null;
  };
  AudioDataPipe.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioDataPipe.generate = function(generator_) {
    var generated = new AudioDataPipe;
    generated.sharedMemory = generator_.generateSharedBuffer(false);
    generated.socket = generator_.generateHandle(false);
    return generated;
  };

  AudioDataPipe.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sharedMemory = mutator_.mutateSharedBuffer(this.sharedMemory, false);
    }
    if (mutator_.chooseMutateField()) {
      this.socket = mutator_.mutateHandle(this.socket, false);
    }
    return this;
  };
  AudioDataPipe.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sharedMemory !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    if (this.socket !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  AudioDataPipe.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioDataPipe.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sharedMemory = handles[idx++];;
    this.socket = handles[idx++];;
    return idx;
  };

  AudioDataPipe.validate = function(messageValidator, offset) {
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


    // validate AudioDataPipe.sharedMemory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioDataPipe.socket
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioDataPipe.encodedSize = codec.kStructHeaderSize + 8;

  AudioDataPipe.decode = function(decoder) {
    var packed;
    var val = new AudioDataPipe();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sharedMemory = decoder.decodeStruct(codec.Handle);
    val.socket = decoder.decodeStruct(codec.Handle);
    return val;
  };

  AudioDataPipe.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioDataPipe.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.sharedMemory);
    encoder.encodeStruct(codec.Handle, val.socket);
  };
  exports.AudioDataPipe = AudioDataPipe;
})();