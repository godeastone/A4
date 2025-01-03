// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/input/input_injector.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var native_types$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/native_types.mojom', '../native_types.mojom.js');
  }



  function InputInjector_QueueSyntheticSmoothDrag_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticSmoothDrag_Params.prototype.initDefaults_ = function() {
    this.drag = null;
  };
  InputInjector_QueueSyntheticSmoothDrag_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticSmoothDrag_Params.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticSmoothDrag_Params;
    generated.drag = generator_.generateStruct(content.mojom.SyntheticSmoothDrag, false);
    return generated;
  };

  InputInjector_QueueSyntheticSmoothDrag_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.drag = mutator_.mutateStruct(content.mojom.SyntheticSmoothDrag, false);
    }
    return this;
  };
  InputInjector_QueueSyntheticSmoothDrag_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticSmoothDrag_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticSmoothDrag_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticSmoothDrag_Params.validate = function(messageValidator, offset) {
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


    // validate InputInjector_QueueSyntheticSmoothDrag_Params.drag
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.SyntheticSmoothDrag, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputInjector_QueueSyntheticSmoothDrag_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputInjector_QueueSyntheticSmoothDrag_Params.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticSmoothDrag_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.drag = decoder.decodeStructPointer(native_types$.SyntheticSmoothDrag);
    return val;
  };

  InputInjector_QueueSyntheticSmoothDrag_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticSmoothDrag_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.SyntheticSmoothDrag, val.drag);
  };
  function InputInjector_QueueSyntheticSmoothDrag_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.prototype.initDefaults_ = function() {
  };
  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticSmoothDrag_ResponseParams;
    return generated;
  };

  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.validate = function(messageValidator, offset) {
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

  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticSmoothDrag_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputInjector_QueueSyntheticSmoothDrag_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticSmoothDrag_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function InputInjector_QueueSyntheticSmoothScroll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticSmoothScroll_Params.prototype.initDefaults_ = function() {
    this.scroll = null;
  };
  InputInjector_QueueSyntheticSmoothScroll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticSmoothScroll_Params.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticSmoothScroll_Params;
    generated.scroll = generator_.generateStruct(content.mojom.SyntheticSmoothScroll, false);
    return generated;
  };

  InputInjector_QueueSyntheticSmoothScroll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scroll = mutator_.mutateStruct(content.mojom.SyntheticSmoothScroll, false);
    }
    return this;
  };
  InputInjector_QueueSyntheticSmoothScroll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticSmoothScroll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticSmoothScroll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticSmoothScroll_Params.validate = function(messageValidator, offset) {
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


    // validate InputInjector_QueueSyntheticSmoothScroll_Params.scroll
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.SyntheticSmoothScroll, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputInjector_QueueSyntheticSmoothScroll_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputInjector_QueueSyntheticSmoothScroll_Params.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticSmoothScroll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scroll = decoder.decodeStructPointer(native_types$.SyntheticSmoothScroll);
    return val;
  };

  InputInjector_QueueSyntheticSmoothScroll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticSmoothScroll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.SyntheticSmoothScroll, val.scroll);
  };
  function InputInjector_QueueSyntheticSmoothScroll_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.prototype.initDefaults_ = function() {
  };
  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticSmoothScroll_ResponseParams;
    return generated;
  };

  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.validate = function(messageValidator, offset) {
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

  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticSmoothScroll_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputInjector_QueueSyntheticSmoothScroll_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticSmoothScroll_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function InputInjector_QueueSyntheticPinch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticPinch_Params.prototype.initDefaults_ = function() {
    this.pinch = null;
  };
  InputInjector_QueueSyntheticPinch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticPinch_Params.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticPinch_Params;
    generated.pinch = generator_.generateStruct(content.mojom.SyntheticPinch, false);
    return generated;
  };

  InputInjector_QueueSyntheticPinch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pinch = mutator_.mutateStruct(content.mojom.SyntheticPinch, false);
    }
    return this;
  };
  InputInjector_QueueSyntheticPinch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticPinch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticPinch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticPinch_Params.validate = function(messageValidator, offset) {
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


    // validate InputInjector_QueueSyntheticPinch_Params.pinch
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.SyntheticPinch, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputInjector_QueueSyntheticPinch_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputInjector_QueueSyntheticPinch_Params.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticPinch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pinch = decoder.decodeStructPointer(native_types$.SyntheticPinch);
    return val;
  };

  InputInjector_QueueSyntheticPinch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticPinch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.SyntheticPinch, val.pinch);
  };
  function InputInjector_QueueSyntheticPinch_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticPinch_ResponseParams.prototype.initDefaults_ = function() {
  };
  InputInjector_QueueSyntheticPinch_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticPinch_ResponseParams.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticPinch_ResponseParams;
    return generated;
  };

  InputInjector_QueueSyntheticPinch_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  InputInjector_QueueSyntheticPinch_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticPinch_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticPinch_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticPinch_ResponseParams.validate = function(messageValidator, offset) {
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

  InputInjector_QueueSyntheticPinch_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  InputInjector_QueueSyntheticPinch_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticPinch_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputInjector_QueueSyntheticPinch_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticPinch_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function InputInjector_QueueSyntheticTap_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticTap_Params.prototype.initDefaults_ = function() {
    this.tap = null;
  };
  InputInjector_QueueSyntheticTap_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticTap_Params.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticTap_Params;
    generated.tap = generator_.generateStruct(content.mojom.SyntheticTap, false);
    return generated;
  };

  InputInjector_QueueSyntheticTap_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tap = mutator_.mutateStruct(content.mojom.SyntheticTap, false);
    }
    return this;
  };
  InputInjector_QueueSyntheticTap_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticTap_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticTap_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticTap_Params.validate = function(messageValidator, offset) {
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


    // validate InputInjector_QueueSyntheticTap_Params.tap
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.SyntheticTap, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputInjector_QueueSyntheticTap_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputInjector_QueueSyntheticTap_Params.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticTap_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tap = decoder.decodeStructPointer(native_types$.SyntheticTap);
    return val;
  };

  InputInjector_QueueSyntheticTap_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticTap_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.SyntheticTap, val.tap);
  };
  function InputInjector_QueueSyntheticTap_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticTap_ResponseParams.prototype.initDefaults_ = function() {
  };
  InputInjector_QueueSyntheticTap_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticTap_ResponseParams.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticTap_ResponseParams;
    return generated;
  };

  InputInjector_QueueSyntheticTap_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  InputInjector_QueueSyntheticTap_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticTap_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticTap_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticTap_ResponseParams.validate = function(messageValidator, offset) {
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

  InputInjector_QueueSyntheticTap_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  InputInjector_QueueSyntheticTap_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticTap_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputInjector_QueueSyntheticTap_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticTap_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function InputInjector_QueueSyntheticPointerAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticPointerAction_Params.prototype.initDefaults_ = function() {
    this.pointerAction = null;
  };
  InputInjector_QueueSyntheticPointerAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticPointerAction_Params.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticPointerAction_Params;
    generated.pointerAction = generator_.generateStruct(content.mojom.SyntheticPointerAction, false);
    return generated;
  };

  InputInjector_QueueSyntheticPointerAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pointerAction = mutator_.mutateStruct(content.mojom.SyntheticPointerAction, false);
    }
    return this;
  };
  InputInjector_QueueSyntheticPointerAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticPointerAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticPointerAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticPointerAction_Params.validate = function(messageValidator, offset) {
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


    // validate InputInjector_QueueSyntheticPointerAction_Params.pointerAction
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.SyntheticPointerAction, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputInjector_QueueSyntheticPointerAction_Params.encodedSize = codec.kStructHeaderSize + 8;

  InputInjector_QueueSyntheticPointerAction_Params.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticPointerAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pointerAction = decoder.decodeStructPointer(native_types$.SyntheticPointerAction);
    return val;
  };

  InputInjector_QueueSyntheticPointerAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticPointerAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.SyntheticPointerAction, val.pointerAction);
  };
  function InputInjector_QueueSyntheticPointerAction_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputInjector_QueueSyntheticPointerAction_ResponseParams.prototype.initDefaults_ = function() {
  };
  InputInjector_QueueSyntheticPointerAction_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InputInjector_QueueSyntheticPointerAction_ResponseParams.generate = function(generator_) {
    var generated = new InputInjector_QueueSyntheticPointerAction_ResponseParams;
    return generated;
  };

  InputInjector_QueueSyntheticPointerAction_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  InputInjector_QueueSyntheticPointerAction_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InputInjector_QueueSyntheticPointerAction_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InputInjector_QueueSyntheticPointerAction_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InputInjector_QueueSyntheticPointerAction_ResponseParams.validate = function(messageValidator, offset) {
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

  InputInjector_QueueSyntheticPointerAction_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  InputInjector_QueueSyntheticPointerAction_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputInjector_QueueSyntheticPointerAction_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InputInjector_QueueSyntheticPointerAction_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputInjector_QueueSyntheticPointerAction_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kInputInjector_QueueSyntheticSmoothDrag_Name = 1360237144;
  var kInputInjector_QueueSyntheticSmoothScroll_Name = 229414606;
  var kInputInjector_QueueSyntheticPinch_Name = 580441640;
  var kInputInjector_QueueSyntheticTap_Name = 1606674851;
  var kInputInjector_QueueSyntheticPointerAction_Name = 1434867583;

  function InputInjectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputInjector,
                                                   handleOrPtrInfo);
  }

  function InputInjectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputInjector, associatedInterfacePtrInfo);
  }

  InputInjectorAssociatedPtr.prototype =
      Object.create(InputInjectorPtr.prototype);
  InputInjectorAssociatedPtr.prototype.constructor =
      InputInjectorAssociatedPtr;

  function InputInjectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputInjectorPtr.prototype.queueSyntheticSmoothDrag = function() {
    return InputInjectorProxy.prototype.queueSyntheticSmoothDrag
        .apply(this.ptr.getProxy(), arguments);
  };

  InputInjectorProxy.prototype.queueSyntheticSmoothDrag = function(drag) {
    var params_ = new InputInjector_QueueSyntheticSmoothDrag_Params();
    params_.drag = drag;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputInjector_QueueSyntheticSmoothDrag_Name,
          codec.align(InputInjector_QueueSyntheticSmoothDrag_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputInjector_QueueSyntheticSmoothDrag_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputInjector_QueueSyntheticSmoothDrag_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InputInjectorPtr.prototype.queueSyntheticSmoothScroll = function() {
    return InputInjectorProxy.prototype.queueSyntheticSmoothScroll
        .apply(this.ptr.getProxy(), arguments);
  };

  InputInjectorProxy.prototype.queueSyntheticSmoothScroll = function(scroll) {
    var params_ = new InputInjector_QueueSyntheticSmoothScroll_Params();
    params_.scroll = scroll;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputInjector_QueueSyntheticSmoothScroll_Name,
          codec.align(InputInjector_QueueSyntheticSmoothScroll_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputInjector_QueueSyntheticSmoothScroll_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputInjector_QueueSyntheticSmoothScroll_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InputInjectorPtr.prototype.queueSyntheticPinch = function() {
    return InputInjectorProxy.prototype.queueSyntheticPinch
        .apply(this.ptr.getProxy(), arguments);
  };

  InputInjectorProxy.prototype.queueSyntheticPinch = function(pinch) {
    var params_ = new InputInjector_QueueSyntheticPinch_Params();
    params_.pinch = pinch;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputInjector_QueueSyntheticPinch_Name,
          codec.align(InputInjector_QueueSyntheticPinch_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputInjector_QueueSyntheticPinch_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputInjector_QueueSyntheticPinch_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InputInjectorPtr.prototype.queueSyntheticTap = function() {
    return InputInjectorProxy.prototype.queueSyntheticTap
        .apply(this.ptr.getProxy(), arguments);
  };

  InputInjectorProxy.prototype.queueSyntheticTap = function(tap) {
    var params_ = new InputInjector_QueueSyntheticTap_Params();
    params_.tap = tap;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputInjector_QueueSyntheticTap_Name,
          codec.align(InputInjector_QueueSyntheticTap_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputInjector_QueueSyntheticTap_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputInjector_QueueSyntheticTap_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InputInjectorPtr.prototype.queueSyntheticPointerAction = function() {
    return InputInjectorProxy.prototype.queueSyntheticPointerAction
        .apply(this.ptr.getProxy(), arguments);
  };

  InputInjectorProxy.prototype.queueSyntheticPointerAction = function(pointerAction) {
    var params_ = new InputInjector_QueueSyntheticPointerAction_Params();
    params_.pointerAction = pointerAction;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputInjector_QueueSyntheticPointerAction_Name,
          codec.align(InputInjector_QueueSyntheticPointerAction_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputInjector_QueueSyntheticPointerAction_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputInjector_QueueSyntheticPointerAction_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function InputInjectorStub(delegate) {
    this.delegate_ = delegate;
  }
  InputInjectorStub.prototype.queueSyntheticSmoothDrag = function(drag) {
    return this.delegate_ && this.delegate_.queueSyntheticSmoothDrag && this.delegate_.queueSyntheticSmoothDrag(drag);
  }
  InputInjectorStub.prototype.queueSyntheticSmoothScroll = function(scroll) {
    return this.delegate_ && this.delegate_.queueSyntheticSmoothScroll && this.delegate_.queueSyntheticSmoothScroll(scroll);
  }
  InputInjectorStub.prototype.queueSyntheticPinch = function(pinch) {
    return this.delegate_ && this.delegate_.queueSyntheticPinch && this.delegate_.queueSyntheticPinch(pinch);
  }
  InputInjectorStub.prototype.queueSyntheticTap = function(tap) {
    return this.delegate_ && this.delegate_.queueSyntheticTap && this.delegate_.queueSyntheticTap(tap);
  }
  InputInjectorStub.prototype.queueSyntheticPointerAction = function(pointerAction) {
    return this.delegate_ && this.delegate_.queueSyntheticPointerAction && this.delegate_.queueSyntheticPointerAction(pointerAction);
  }

  InputInjectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  InputInjectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputInjector_QueueSyntheticSmoothDrag_Name:
      var params = reader.decodeStruct(InputInjector_QueueSyntheticSmoothDrag_Params);
      this.queueSyntheticSmoothDrag(params.drag).then(function(response) {
        var responseParams =
            new InputInjector_QueueSyntheticSmoothDrag_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kInputInjector_QueueSyntheticSmoothDrag_Name,
            codec.align(InputInjector_QueueSyntheticSmoothDrag_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputInjector_QueueSyntheticSmoothDrag_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kInputInjector_QueueSyntheticSmoothScroll_Name:
      var params = reader.decodeStruct(InputInjector_QueueSyntheticSmoothScroll_Params);
      this.queueSyntheticSmoothScroll(params.scroll).then(function(response) {
        var responseParams =
            new InputInjector_QueueSyntheticSmoothScroll_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kInputInjector_QueueSyntheticSmoothScroll_Name,
            codec.align(InputInjector_QueueSyntheticSmoothScroll_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputInjector_QueueSyntheticSmoothScroll_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kInputInjector_QueueSyntheticPinch_Name:
      var params = reader.decodeStruct(InputInjector_QueueSyntheticPinch_Params);
      this.queueSyntheticPinch(params.pinch).then(function(response) {
        var responseParams =
            new InputInjector_QueueSyntheticPinch_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kInputInjector_QueueSyntheticPinch_Name,
            codec.align(InputInjector_QueueSyntheticPinch_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputInjector_QueueSyntheticPinch_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kInputInjector_QueueSyntheticTap_Name:
      var params = reader.decodeStruct(InputInjector_QueueSyntheticTap_Params);
      this.queueSyntheticTap(params.tap).then(function(response) {
        var responseParams =
            new InputInjector_QueueSyntheticTap_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kInputInjector_QueueSyntheticTap_Name,
            codec.align(InputInjector_QueueSyntheticTap_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputInjector_QueueSyntheticTap_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kInputInjector_QueueSyntheticPointerAction_Name:
      var params = reader.decodeStruct(InputInjector_QueueSyntheticPointerAction_Params);
      this.queueSyntheticPointerAction(params.pointerAction).then(function(response) {
        var responseParams =
            new InputInjector_QueueSyntheticPointerAction_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kInputInjector_QueueSyntheticPointerAction_Name,
            codec.align(InputInjector_QueueSyntheticPointerAction_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputInjector_QueueSyntheticPointerAction_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateInputInjectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputInjector_QueueSyntheticSmoothDrag_Name:
        if (message.expectsResponse())
          paramsClass = InputInjector_QueueSyntheticSmoothDrag_Params;
      break;
      case kInputInjector_QueueSyntheticSmoothScroll_Name:
        if (message.expectsResponse())
          paramsClass = InputInjector_QueueSyntheticSmoothScroll_Params;
      break;
      case kInputInjector_QueueSyntheticPinch_Name:
        if (message.expectsResponse())
          paramsClass = InputInjector_QueueSyntheticPinch_Params;
      break;
      case kInputInjector_QueueSyntheticTap_Name:
        if (message.expectsResponse())
          paramsClass = InputInjector_QueueSyntheticTap_Params;
      break;
      case kInputInjector_QueueSyntheticPointerAction_Name:
        if (message.expectsResponse())
          paramsClass = InputInjector_QueueSyntheticPointerAction_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputInjectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kInputInjector_QueueSyntheticSmoothDrag_Name:
        if (message.isResponse())
          paramsClass = InputInjector_QueueSyntheticSmoothDrag_ResponseParams;
        break;
      case kInputInjector_QueueSyntheticSmoothScroll_Name:
        if (message.isResponse())
          paramsClass = InputInjector_QueueSyntheticSmoothScroll_ResponseParams;
        break;
      case kInputInjector_QueueSyntheticPinch_Name:
        if (message.isResponse())
          paramsClass = InputInjector_QueueSyntheticPinch_ResponseParams;
        break;
      case kInputInjector_QueueSyntheticTap_Name:
        if (message.isResponse())
          paramsClass = InputInjector_QueueSyntheticTap_ResponseParams;
        break;
      case kInputInjector_QueueSyntheticPointerAction_Name:
        if (message.isResponse())
          paramsClass = InputInjector_QueueSyntheticPointerAction_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var InputInjector = {
    name: 'content.mojom.InputInjector',
    kVersion: 0,
    ptrClass: InputInjectorPtr,
    proxyClass: InputInjectorProxy,
    stubClass: InputInjectorStub,
    validateRequest: validateInputInjectorRequest,
    validateResponse: validateInputInjectorResponse,
    mojomId: 'content/common/input/input_injector.mojom',
    fuzzMethods: {
      queueSyntheticSmoothDrag: {
        params: InputInjector_QueueSyntheticSmoothDrag_Params,
      },
      queueSyntheticSmoothScroll: {
        params: InputInjector_QueueSyntheticSmoothScroll_Params,
      },
      queueSyntheticPinch: {
        params: InputInjector_QueueSyntheticPinch_Params,
      },
      queueSyntheticTap: {
        params: InputInjector_QueueSyntheticTap_Params,
      },
      queueSyntheticPointerAction: {
        params: InputInjector_QueueSyntheticPointerAction_Params,
      },
    },
  };
  InputInjectorStub.prototype.validator = validateInputInjectorRequest;
  InputInjectorProxy.prototype.validator = validateInputInjectorResponse;
  exports.InputInjector = InputInjector;
  exports.InputInjectorPtr = InputInjectorPtr;
  exports.InputInjectorAssociatedPtr = InputInjectorAssociatedPtr;
})();