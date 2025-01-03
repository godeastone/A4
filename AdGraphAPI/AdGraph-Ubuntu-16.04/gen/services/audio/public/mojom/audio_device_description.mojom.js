// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/audio/public/mojom/audio_device_description.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('audio.mojom');



  function AudioDeviceDescription(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AudioDeviceDescription.prototype.initDefaults_ = function() {
    this.deviceName = null;
    this.uniqueId = null;
    this.groupId = null;
  };
  AudioDeviceDescription.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AudioDeviceDescription.generate = function(generator_) {
    var generated = new AudioDeviceDescription;
    generated.deviceName = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    generated.groupId = generator_.generateString(false);
    return generated;
  };

  AudioDeviceDescription.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.deviceName = mutator_.mutateString(this.deviceName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateString(this.groupId, false);
    }
    return this;
  };
  AudioDeviceDescription.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AudioDeviceDescription.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AudioDeviceDescription.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AudioDeviceDescription.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioDeviceDescription.deviceName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioDeviceDescription.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AudioDeviceDescription.groupId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AudioDeviceDescription.encodedSize = codec.kStructHeaderSize + 24;

  AudioDeviceDescription.decode = function(decoder) {
    var packed;
    var val = new AudioDeviceDescription();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.deviceName = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.groupId = decoder.decodeStruct(codec.String);
    return val;
  };

  AudioDeviceDescription.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AudioDeviceDescription.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.deviceName);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeStruct(codec.String, val.groupId);
  };
  exports.AudioDeviceDescription = AudioDeviceDescription;
})();