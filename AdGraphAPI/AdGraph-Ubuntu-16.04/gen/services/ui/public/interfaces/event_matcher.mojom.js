// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/event_matcher.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var event_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event_constants.mojom', '../../../../ui/events/mojo/event_constants.mojom.js');
  }
  var keyboard_codes$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/keyboard_codes.mojom', '../../../../ui/events/mojo/keyboard_codes.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function KeyEventMatcher(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyEventMatcher.prototype.initDefaults_ = function() {
    this.keyboardCode = 0;
  };
  KeyEventMatcher.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeyEventMatcher.generate = function(generator_) {
    var generated = new KeyEventMatcher;
    generated.keyboardCode = generator_.generateEnum(0, 254);
    return generated;
  };

  KeyEventMatcher.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyboardCode = mutator_.mutateEnum(this.keyboardCode, 0, 254);
    }
    return this;
  };
  KeyEventMatcher.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeyEventMatcher.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeyEventMatcher.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeyEventMatcher.validate = function(messageValidator, offset) {
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


    // validate KeyEventMatcher.keyboardCode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, keyboard_codes$.KeyboardCode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyEventMatcher.encodedSize = codec.kStructHeaderSize + 8;

  KeyEventMatcher.decode = function(decoder) {
    var packed;
    var val = new KeyEventMatcher();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyboardCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyEventMatcher.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyEventMatcher.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.keyboardCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PointerKindMatcher(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PointerKindMatcher.prototype.initDefaults_ = function() {
    this.pointerKind = 0;
  };
  PointerKindMatcher.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PointerKindMatcher.generate = function(generator_) {
    var generated = new PointerKindMatcher;
    generated.pointerKind = generator_.generateEnum(0, 3);
    return generated;
  };

  PointerKindMatcher.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pointerKind = mutator_.mutateEnum(this.pointerKind, 0, 3);
    }
    return this;
  };
  PointerKindMatcher.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PointerKindMatcher.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PointerKindMatcher.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PointerKindMatcher.validate = function(messageValidator, offset) {
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


    // validate PointerKindMatcher.pointerKind
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, event_constants$.PointerKind);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PointerKindMatcher.encodedSize = codec.kStructHeaderSize + 8;

  PointerKindMatcher.decode = function(decoder) {
    var packed;
    var val = new PointerKindMatcher();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pointerKind = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PointerKindMatcher.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PointerKindMatcher.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pointerKind);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PointerLocationMatcher(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PointerLocationMatcher.prototype.initDefaults_ = function() {
    this.region = null;
  };
  PointerLocationMatcher.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PointerLocationMatcher.generate = function(generator_) {
    var generated = new PointerLocationMatcher;
    generated.region = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  PointerLocationMatcher.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.region = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  PointerLocationMatcher.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PointerLocationMatcher.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PointerLocationMatcher.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PointerLocationMatcher.validate = function(messageValidator, offset) {
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


    // validate PointerLocationMatcher.region
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PointerLocationMatcher.encodedSize = codec.kStructHeaderSize + 8;

  PointerLocationMatcher.decode = function(decoder) {
    var packed;
    var val = new PointerLocationMatcher();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.region = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  PointerLocationMatcher.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PointerLocationMatcher.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.RectF, val.region);
  };
  function EventTypeMatcher(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EventTypeMatcher.prototype.initDefaults_ = function() {
    this.type = 0;
  };
  EventTypeMatcher.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EventTypeMatcher.generate = function(generator_) {
    var generated = new EventTypeMatcher;
    generated.type = generator_.generateEnum(0, 14);
    return generated;
  };

  EventTypeMatcher.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 14);
    }
    return this;
  };
  EventTypeMatcher.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EventTypeMatcher.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EventTypeMatcher.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EventTypeMatcher.validate = function(messageValidator, offset) {
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


    // validate EventTypeMatcher.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, event_constants$.EventType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EventTypeMatcher.encodedSize = codec.kStructHeaderSize + 8;

  EventTypeMatcher.decode = function(decoder) {
    var packed;
    var val = new EventTypeMatcher();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EventTypeMatcher.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EventTypeMatcher.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EventFlagsMatcher(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EventFlagsMatcher.prototype.initDefaults_ = function() {
    this.flags = 0;
  };
  EventFlagsMatcher.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EventFlagsMatcher.generate = function(generator_) {
    var generated = new EventFlagsMatcher;
    generated.flags = generator_.generateInt32();
    return generated;
  };

  EventFlagsMatcher.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateInt32(this.flags);
    }
    return this;
  };
  EventFlagsMatcher.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EventFlagsMatcher.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EventFlagsMatcher.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EventFlagsMatcher.validate = function(messageValidator, offset) {
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

  EventFlagsMatcher.encodedSize = codec.kStructHeaderSize + 8;

  EventFlagsMatcher.decode = function(decoder) {
    var packed;
    var val = new EventFlagsMatcher();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.flags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EventFlagsMatcher.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EventFlagsMatcher.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EventMatcher(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EventMatcher.prototype.initDefaults_ = function() {
    this.acceleratorPhase = 0;
    this.typeMatcher = null;
    this.flagsMatcher = null;
    this.ignoreFlagsMatcher = null;
    this.keyMatcher = null;
    this.pointerKindMatcher = null;
    this.pointerLocationMatcher = null;
  };
  EventMatcher.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EventMatcher.generate = function(generator_) {
    var generated = new EventMatcher;
    generated.acceleratorPhase = generator_.generateEnum(0, 1);
    generated.typeMatcher = generator_.generateStruct(ui.mojom.EventTypeMatcher, true);
    generated.flagsMatcher = generator_.generateStruct(ui.mojom.EventFlagsMatcher, true);
    generated.ignoreFlagsMatcher = generator_.generateStruct(ui.mojom.EventFlagsMatcher, true);
    generated.keyMatcher = generator_.generateStruct(ui.mojom.KeyEventMatcher, true);
    generated.pointerKindMatcher = generator_.generateStruct(ui.mojom.PointerKindMatcher, true);
    generated.pointerLocationMatcher = generator_.generateStruct(ui.mojom.PointerLocationMatcher, true);
    return generated;
  };

  EventMatcher.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.acceleratorPhase = mutator_.mutateEnum(this.acceleratorPhase, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.typeMatcher = mutator_.mutateStruct(ui.mojom.EventTypeMatcher, true);
    }
    if (mutator_.chooseMutateField()) {
      this.flagsMatcher = mutator_.mutateStruct(ui.mojom.EventFlagsMatcher, true);
    }
    if (mutator_.chooseMutateField()) {
      this.ignoreFlagsMatcher = mutator_.mutateStruct(ui.mojom.EventFlagsMatcher, true);
    }
    if (mutator_.chooseMutateField()) {
      this.keyMatcher = mutator_.mutateStruct(ui.mojom.KeyEventMatcher, true);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerKindMatcher = mutator_.mutateStruct(ui.mojom.PointerKindMatcher, true);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerLocationMatcher = mutator_.mutateStruct(ui.mojom.PointerLocationMatcher, true);
    }
    return this;
  };
  EventMatcher.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EventMatcher.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EventMatcher.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EventMatcher.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.acceleratorPhase
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, event_constants$.AcceleratorPhase);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.typeMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, EventTypeMatcher, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.flagsMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, EventFlagsMatcher, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.ignoreFlagsMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, EventFlagsMatcher, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.keyMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, KeyEventMatcher, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.pointerKindMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, PointerKindMatcher, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EventMatcher.pointerLocationMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, PointerLocationMatcher, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EventMatcher.encodedSize = codec.kStructHeaderSize + 56;

  EventMatcher.decode = function(decoder) {
    var packed;
    var val = new EventMatcher();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.acceleratorPhase = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.typeMatcher = decoder.decodeStructPointer(EventTypeMatcher);
    val.flagsMatcher = decoder.decodeStructPointer(EventFlagsMatcher);
    val.ignoreFlagsMatcher = decoder.decodeStructPointer(EventFlagsMatcher);
    val.keyMatcher = decoder.decodeStructPointer(KeyEventMatcher);
    val.pointerKindMatcher = decoder.decodeStructPointer(PointerKindMatcher);
    val.pointerLocationMatcher = decoder.decodeStructPointer(PointerLocationMatcher);
    return val;
  };

  EventMatcher.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EventMatcher.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.acceleratorPhase);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(EventTypeMatcher, val.typeMatcher);
    encoder.encodeStructPointer(EventFlagsMatcher, val.flagsMatcher);
    encoder.encodeStructPointer(EventFlagsMatcher, val.ignoreFlagsMatcher);
    encoder.encodeStructPointer(KeyEventMatcher, val.keyMatcher);
    encoder.encodeStructPointer(PointerKindMatcher, val.pointerKindMatcher);
    encoder.encodeStructPointer(PointerLocationMatcher, val.pointerLocationMatcher);
  };
  exports.KeyEventMatcher = KeyEventMatcher;
  exports.PointerKindMatcher = PointerKindMatcher;
  exports.PointerLocationMatcher = PointerLocationMatcher;
  exports.EventTypeMatcher = EventTypeMatcher;
  exports.EventFlagsMatcher = EventFlagsMatcher;
  exports.EventMatcher = EventMatcher;
})();