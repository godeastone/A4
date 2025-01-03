// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/geometry/mojo/geometry.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gfx.mojom');



  function Point(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Point.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  Point.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Point.generate = function(generator_) {
    var generated = new Point;
    generated.x = generator_.generateInt32();
    generated.y = generator_.generateInt32();
    return generated;
  };

  Point.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateInt32(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateInt32(this.y);
    }
    return this;
  };
  Point.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Point.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Point.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Point.validate = function(messageValidator, offset) {
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

  Point.encodedSize = codec.kStructHeaderSize + 8;

  Point.decode = function(decoder) {
    var packed;
    var val = new Point();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Point.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Point.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
  };
  function PointF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PointF.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  PointF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PointF.generate = function(generator_) {
    var generated = new PointF;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    return generated;
  };

  PointF.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    return this;
  };
  PointF.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PointF.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PointF.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PointF.validate = function(messageValidator, offset) {
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

  PointF.encodedSize = codec.kStructHeaderSize + 8;

  PointF.decode = function(decoder) {
    var packed;
    var val = new PointF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    return val;
  };

  PointF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PointF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
  };
  function Size(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Size.prototype.initDefaults_ = function() {
    this.width = 0;
    this.height = 0;
  };
  Size.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Size.generate = function(generator_) {
    var generated = new Size;
    generated.width = generator_.generateInt32();
    generated.height = generator_.generateInt32();
    return generated;
  };

  Size.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateInt32(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateInt32(this.height);
    }
    return this;
  };
  Size.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Size.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Size.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Size.validate = function(messageValidator, offset) {
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

  Size.encodedSize = codec.kStructHeaderSize + 8;

  Size.decode = function(decoder) {
    var packed;
    var val = new Size();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Size.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Size.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };
  function SizeF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SizeF.prototype.initDefaults_ = function() {
    this.width = 0;
    this.height = 0;
  };
  SizeF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SizeF.generate = function(generator_) {
    var generated = new SizeF;
    generated.width = generator_.generateFloat();
    generated.height = generator_.generateFloat();
    return generated;
  };

  SizeF.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateFloat(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateFloat(this.height);
    }
    return this;
  };
  SizeF.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SizeF.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SizeF.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SizeF.validate = function(messageValidator, offset) {
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

  SizeF.encodedSize = codec.kStructHeaderSize + 8;

  SizeF.decode = function(decoder) {
    var packed;
    var val = new SizeF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.width = decoder.decodeStruct(codec.Float);
    val.height = decoder.decodeStruct(codec.Float);
    return val;
  };

  SizeF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SizeF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.width);
    encoder.encodeStruct(codec.Float, val.height);
  };
  function Rect(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Rect.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
  };
  Rect.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Rect.generate = function(generator_) {
    var generated = new Rect;
    generated.x = generator_.generateInt32();
    generated.y = generator_.generateInt32();
    generated.width = generator_.generateInt32();
    generated.height = generator_.generateInt32();
    return generated;
  };

  Rect.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateInt32(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateInt32(this.y);
    }
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateInt32(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateInt32(this.height);
    }
    return this;
  };
  Rect.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Rect.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Rect.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Rect.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  Rect.encodedSize = codec.kStructHeaderSize + 16;

  Rect.decode = function(decoder) {
    var packed;
    var val = new Rect();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Rect.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Rect.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };
  function RectF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RectF.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
  };
  RectF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RectF.generate = function(generator_) {
    var generated = new RectF;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    generated.width = generator_.generateFloat();
    generated.height = generator_.generateFloat();
    return generated;
  };

  RectF.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateFloat(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateFloat(this.height);
    }
    return this;
  };
  RectF.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RectF.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RectF.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RectF.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  RectF.encodedSize = codec.kStructHeaderSize + 16;

  RectF.decode = function(decoder) {
    var packed;
    var val = new RectF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    val.width = decoder.decodeStruct(codec.Float);
    val.height = decoder.decodeStruct(codec.Float);
    return val;
  };

  RectF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RectF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
    encoder.encodeStruct(codec.Float, val.width);
    encoder.encodeStruct(codec.Float, val.height);
  };
  function Insets(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Insets.prototype.initDefaults_ = function() {
    this.top = 0;
    this.left = 0;
    this.bottom = 0;
    this.right = 0;
  };
  Insets.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Insets.generate = function(generator_) {
    var generated = new Insets;
    generated.top = generator_.generateInt32();
    generated.left = generator_.generateInt32();
    generated.bottom = generator_.generateInt32();
    generated.right = generator_.generateInt32();
    return generated;
  };

  Insets.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.top = mutator_.mutateInt32(this.top);
    }
    if (mutator_.chooseMutateField()) {
      this.left = mutator_.mutateInt32(this.left);
    }
    if (mutator_.chooseMutateField()) {
      this.bottom = mutator_.mutateInt32(this.bottom);
    }
    if (mutator_.chooseMutateField()) {
      this.right = mutator_.mutateInt32(this.right);
    }
    return this;
  };
  Insets.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Insets.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Insets.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Insets.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  Insets.encodedSize = codec.kStructHeaderSize + 16;

  Insets.decode = function(decoder) {
    var packed;
    var val = new Insets();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.top = decoder.decodeStruct(codec.Int32);
    val.left = decoder.decodeStruct(codec.Int32);
    val.bottom = decoder.decodeStruct(codec.Int32);
    val.right = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Insets.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Insets.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.top);
    encoder.encodeStruct(codec.Int32, val.left);
    encoder.encodeStruct(codec.Int32, val.bottom);
    encoder.encodeStruct(codec.Int32, val.right);
  };
  function InsetsF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InsetsF.prototype.initDefaults_ = function() {
    this.top = 0;
    this.left = 0;
    this.bottom = 0;
    this.right = 0;
  };
  InsetsF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InsetsF.generate = function(generator_) {
    var generated = new InsetsF;
    generated.top = generator_.generateFloat();
    generated.left = generator_.generateFloat();
    generated.bottom = generator_.generateFloat();
    generated.right = generator_.generateFloat();
    return generated;
  };

  InsetsF.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.top = mutator_.mutateFloat(this.top);
    }
    if (mutator_.chooseMutateField()) {
      this.left = mutator_.mutateFloat(this.left);
    }
    if (mutator_.chooseMutateField()) {
      this.bottom = mutator_.mutateFloat(this.bottom);
    }
    if (mutator_.chooseMutateField()) {
      this.right = mutator_.mutateFloat(this.right);
    }
    return this;
  };
  InsetsF.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InsetsF.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InsetsF.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InsetsF.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  InsetsF.encodedSize = codec.kStructHeaderSize + 16;

  InsetsF.decode = function(decoder) {
    var packed;
    var val = new InsetsF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.top = decoder.decodeStruct(codec.Float);
    val.left = decoder.decodeStruct(codec.Float);
    val.bottom = decoder.decodeStruct(codec.Float);
    val.right = decoder.decodeStruct(codec.Float);
    return val;
  };

  InsetsF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InsetsF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.top);
    encoder.encodeStruct(codec.Float, val.left);
    encoder.encodeStruct(codec.Float, val.bottom);
    encoder.encodeStruct(codec.Float, val.right);
  };
  function Vector2d(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Vector2d.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  Vector2d.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Vector2d.generate = function(generator_) {
    var generated = new Vector2d;
    generated.x = generator_.generateInt32();
    generated.y = generator_.generateInt32();
    return generated;
  };

  Vector2d.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateInt32(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateInt32(this.y);
    }
    return this;
  };
  Vector2d.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Vector2d.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Vector2d.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Vector2d.validate = function(messageValidator, offset) {
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

  Vector2d.encodedSize = codec.kStructHeaderSize + 8;

  Vector2d.decode = function(decoder) {
    var packed;
    var val = new Vector2d();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Vector2d.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Vector2d.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
  };
  function Vector2dF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Vector2dF.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  Vector2dF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Vector2dF.generate = function(generator_) {
    var generated = new Vector2dF;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    return generated;
  };

  Vector2dF.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    return this;
  };
  Vector2dF.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Vector2dF.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Vector2dF.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Vector2dF.validate = function(messageValidator, offset) {
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

  Vector2dF.encodedSize = codec.kStructHeaderSize + 8;

  Vector2dF.decode = function(decoder) {
    var packed;
    var val = new Vector2dF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    return val;
  };

  Vector2dF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Vector2dF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
  };
  function ScrollOffset(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScrollOffset.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
  };
  ScrollOffset.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScrollOffset.generate = function(generator_) {
    var generated = new ScrollOffset;
    generated.x = generator_.generateFloat();
    generated.y = generator_.generateFloat();
    return generated;
  };

  ScrollOffset.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.x = mutator_.mutateFloat(this.x);
    }
    if (mutator_.chooseMutateField()) {
      this.y = mutator_.mutateFloat(this.y);
    }
    return this;
  };
  ScrollOffset.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScrollOffset.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScrollOffset.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScrollOffset.validate = function(messageValidator, offset) {
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

  ScrollOffset.encodedSize = codec.kStructHeaderSize + 8;

  ScrollOffset.decode = function(decoder) {
    var packed;
    var val = new ScrollOffset();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Float);
    val.y = decoder.decodeStruct(codec.Float);
    return val;
  };

  ScrollOffset.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScrollOffset.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.x);
    encoder.encodeStruct(codec.Float, val.y);
  };
  exports.Point = Point;
  exports.PointF = PointF;
  exports.Size = Size;
  exports.SizeF = SizeF;
  exports.Rect = Rect;
  exports.RectF = RectF;
  exports.Insets = Insets;
  exports.InsetsF = InsetsF;
  exports.Vector2d = Vector2d;
  exports.Vector2dF = Vector2dF;
  exports.ScrollOffset = ScrollOffset;
})();