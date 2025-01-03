// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/frame_deadline.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }



  function FrameDeadline(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameDeadline.prototype.initDefaults_ = function() {
    this.frameStartTime = null;
    this.deadlineInFrames = 0;
    this.useDefaultLowerBoundDeadline = false;
    this.frameInterval = null;
  };
  FrameDeadline.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameDeadline.generate = function(generator_) {
    var generated = new FrameDeadline;
    generated.frameStartTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.deadlineInFrames = generator_.generateUint32();
    generated.frameInterval = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.useDefaultLowerBoundDeadline = generator_.generateBool();
    return generated;
  };

  FrameDeadline.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameStartTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deadlineInFrames = mutator_.mutateUint32(this.deadlineInFrames);
    }
    if (mutator_.chooseMutateField()) {
      this.frameInterval = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.useDefaultLowerBoundDeadline = mutator_.mutateBool(this.useDefaultLowerBoundDeadline);
    }
    return this;
  };
  FrameDeadline.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameDeadline.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameDeadline.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameDeadline.validate = function(messageValidator, offset) {
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


    // validate FrameDeadline.frameStartTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate FrameDeadline.frameInterval
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FrameDeadline.encodedSize = codec.kStructHeaderSize + 24;

  FrameDeadline.decode = function(decoder) {
    var packed;
    var val = new FrameDeadline();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameStartTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.deadlineInFrames = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.useDefaultLowerBoundDeadline = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.frameInterval = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  FrameDeadline.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameDeadline.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.frameStartTime);
    encoder.encodeStruct(codec.Uint32, val.deadlineInFrames);
    packed = 0;
    packed |= (val.useDefaultLowerBoundDeadline & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.frameInterval);
  };
  exports.FrameDeadline = FrameDeadline;
})();