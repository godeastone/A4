// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/page_state.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.history.mojom');
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../mojo/public/mojom/base/string16.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../mojo/public/mojom/base/time.mojom.js');
  }
  var referrer$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/referrer.mojom', '../../third_party/blink/public/platform/referrer.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var ScrollRestorationType = {};
  ScrollRestorationType.kAuto = 0;
  ScrollRestorationType.kManual = 1;

  ScrollRestorationType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ScrollRestorationType.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function DEPRECATED_FileSystemFile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DEPRECATED_FileSystemFile.prototype.initDefaults_ = function() {
    this.filesystemUrl = null;
    this.offset = 0;
    this.length = 0;
    this.modificationTime = null;
  };
  DEPRECATED_FileSystemFile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DEPRECATED_FileSystemFile.generate = function(generator_) {
    var generated = new DEPRECATED_FileSystemFile;
    generated.filesystemUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.offset = generator_.generateUint64();
    generated.length = generator_.generateUint64();
    generated.modificationTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  DEPRECATED_FileSystemFile.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filesystemUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint64(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.modificationTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  DEPRECATED_FileSystemFile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DEPRECATED_FileSystemFile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DEPRECATED_FileSystemFile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DEPRECATED_FileSystemFile.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DEPRECATED_FileSystemFile.filesystemUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate DEPRECATED_FileSystemFile.modificationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DEPRECATED_FileSystemFile.encodedSize = codec.kStructHeaderSize + 32;

  DEPRECATED_FileSystemFile.decode = function(decoder) {
    var packed;
    var val = new DEPRECATED_FileSystemFile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filesystemUrl = decoder.decodeStructPointer(url$.Url);
    val.offset = decoder.decodeStruct(codec.Uint64);
    val.length = decoder.decodeStruct(codec.Uint64);
    val.modificationTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  DEPRECATED_FileSystemFile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DEPRECATED_FileSystemFile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.filesystemUrl);
    encoder.encodeStruct(codec.Uint64, val.offset);
    encoder.encodeStruct(codec.Uint64, val.length);
    encoder.encodeStructPointer(time$.Time, val.modificationTime);
  };
  function File(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  File.prototype.initDefaults_ = function() {
    this.path = null;
    this.offset = 0;
    this.length = 0;
    this.modificationTime = null;
  };
  File.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  File.generate = function(generator_) {
    var generated = new File;
    generated.path = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.offset = generator_.generateUint64();
    generated.length = generator_.generateUint64();
    generated.modificationTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  File.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint64(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateUint64(this.length);
    }
    if (mutator_.chooseMutateField()) {
      this.modificationTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  File.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  File.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  File.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  File.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate File.path
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate File.modificationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  File.encodedSize = codec.kStructHeaderSize + 32;

  File.decode = function(decoder) {
    var packed;
    var val = new File();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeStructPointer(string16$.String16);
    val.offset = decoder.decodeStruct(codec.Uint64);
    val.length = decoder.decodeStruct(codec.Uint64);
    val.modificationTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  File.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(File.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.path);
    encoder.encodeStruct(codec.Uint64, val.offset);
    encoder.encodeStruct(codec.Uint64, val.length);
    encoder.encodeStructPointer(time$.Time, val.modificationTime);
  };
  function RequestBody(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RequestBody.prototype.initDefaults_ = function() {
    this.elements = null;
    this.identifier = 0;
    this.containsSensitiveInfo = false;
  };
  RequestBody.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RequestBody.generate = function(generator_) {
    var generated = new RequestBody;
    generated.elements = generator_.generateArray(function() {
      return generator_.generateUnion(content.history.mojom.Element, false);
    });
    generated.identifier = generator_.generateInt64();
    generated.containsSensitiveInfo = generator_.generateBool();
    return generated;
  };

  RequestBody.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.elements = mutator_.mutateArray(this.elements, function(val) {
        return mutator_.mutateUnion(content.history.mojom.Element, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.identifier = mutator_.mutateInt64(this.identifier);
    }
    if (mutator_.chooseMutateField()) {
      this.containsSensitiveInfo = mutator_.mutateBool(this.containsSensitiveInfo);
    }
    return this;
  };
  RequestBody.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RequestBody.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RequestBody.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RequestBody.validate = function(messageValidator, offset) {
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


    // validate RequestBody.elements
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 16, Element, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  RequestBody.encodedSize = codec.kStructHeaderSize + 24;

  RequestBody.decode = function(decoder) {
    var packed;
    var val = new RequestBody();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.elements = decoder.decodeArrayPointer(Element);
    val.identifier = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.containsSensitiveInfo = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RequestBody.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RequestBody.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(Element, val.elements);
    encoder.encodeStruct(codec.Int64, val.identifier);
    packed = 0;
    packed |= (val.containsSensitiveInfo & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function HttpBody(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HttpBody.prototype.initDefaults_ = function() {
    this.httpContentType = null;
    this.requestBody = null;
    this.containsPasswords = false;
  };
  HttpBody.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HttpBody.generate = function(generator_) {
    var generated = new HttpBody;
    generated.httpContentType = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.requestBody = generator_.generateStruct(content.history.mojom.RequestBody, true);
    generated.containsPasswords = generator_.generateBool();
    return generated;
  };

  HttpBody.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.httpContentType = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.requestBody = mutator_.mutateStruct(content.history.mojom.RequestBody, true);
    }
    if (mutator_.chooseMutateField()) {
      this.containsPasswords = mutator_.mutateBool(this.containsPasswords);
    }
    return this;
  };
  HttpBody.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HttpBody.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HttpBody.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HttpBody.validate = function(messageValidator, offset) {
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


    // validate HttpBody.httpContentType
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HttpBody.requestBody
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, RequestBody, true);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  HttpBody.encodedSize = codec.kStructHeaderSize + 24;

  HttpBody.decode = function(decoder) {
    var packed;
    var val = new HttpBody();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.httpContentType = decoder.decodeStructPointer(string16$.String16);
    val.requestBody = decoder.decodeStructPointer(RequestBody);
    packed = decoder.readUint8();
    val.containsPasswords = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  HttpBody.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HttpBody.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.httpContentType);
    encoder.encodeStructPointer(RequestBody, val.requestBody);
    packed = 0;
    packed |= (val.containsPasswords & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ViewState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ViewState.prototype.initDefaults_ = function() {
    this.visualViewportScrollOffset = null;
    this.scrollOffset = null;
    this.pageScaleFactor = 0;
    this.scrollAnchorSelector = null;
    this.scrollAnchorOffset = null;
    this.scrollAnchorSimhash = 0;
  };
  ViewState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ViewState.generate = function(generator_) {
    var generated = new ViewState;
    generated.visualViewportScrollOffset = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.scrollOffset = generator_.generateStruct(gfx.mojom.Point, false);
    generated.pageScaleFactor = generator_.generateDouble();
    generated.scrollAnchorSelector = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.scrollAnchorOffset = generator_.generateStruct(gfx.mojom.PointF, true);
    generated.scrollAnchorSimhash = generator_.generateUint64();
    return generated;
  };

  ViewState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.visualViewportScrollOffset = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollOffset = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pageScaleFactor = mutator_.mutateDouble(this.pageScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollAnchorSelector = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollAnchorOffset = mutator_.mutateStruct(gfx.mojom.PointF, true);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollAnchorSimhash = mutator_.mutateUint64(this.scrollAnchorSimhash);
    }
    return this;
  };
  ViewState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ViewState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ViewState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ViewState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32},
      {version: 1, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ViewState.visualViewportScrollOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ViewState.scrollOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;




    // version check ViewState.scrollAnchorSelector
    if (!messageValidator.isFieldInStructVersion(offset, 1))
      return validator.validationError.NONE;
    // validate ViewState.scrollAnchorSelector
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;



    // version check ViewState.scrollAnchorOffset
    if (!messageValidator.isFieldInStructVersion(offset, 1))
      return validator.validationError.NONE;
    // validate ViewState.scrollAnchorOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.PointF, true);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ViewState.encodedSize = codec.kStructHeaderSize + 48;

  ViewState.decode = function(decoder) {
    var packed;
    var val = new ViewState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.visualViewportScrollOffset = decoder.decodeStructPointer(geometry$.PointF);
    val.scrollOffset = decoder.decodeStructPointer(geometry$.Point);
    val.pageScaleFactor = decoder.decodeStruct(codec.Double);
    val.scrollAnchorSelector = decoder.decodeStructPointer(string16$.String16);
    val.scrollAnchorOffset = decoder.decodeStructPointer(geometry$.PointF);
    val.scrollAnchorSimhash = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ViewState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ViewState.encodedSize);
    encoder.writeUint32(1);
    encoder.encodeStructPointer(geometry$.PointF, val.visualViewportScrollOffset);
    encoder.encodeStructPointer(geometry$.Point, val.scrollOffset);
    encoder.encodeStruct(codec.Double, val.pageScaleFactor);
    encoder.encodeStructPointer(string16$.String16, val.scrollAnchorSelector);
    encoder.encodeStructPointer(geometry$.PointF, val.scrollAnchorOffset);
    encoder.encodeStruct(codec.Uint64, val.scrollAnchorSimhash);
  };
  function FrameState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameState.prototype.initDefaults_ = function() {
    this.urlString = null;
    this.referrer = null;
    this.target = null;
    this.stateObject = null;
    this.documentState = null;
    this.scrollRestorationType = 0;
    this.referrerPolicy = 0;
    this.viewState = null;
    this.itemSequenceNumber = 0;
    this.documentSequenceNumber = 0;
    this.httpBody = null;
    this.children = null;
  };
  FrameState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameState.generate = function(generator_) {
    var generated = new FrameState;
    generated.urlString = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.referrer = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.target = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.stateObject = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.documentState = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, true);
    });
    generated.scrollRestorationType = generator_.generateEnum(0, 1);
    generated.viewState = generator_.generateStruct(content.history.mojom.ViewState, true);
    generated.itemSequenceNumber = generator_.generateInt64();
    generated.documentSequenceNumber = generator_.generateInt64();
    generated.referrerPolicy = generator_.generateEnum(0, 8);
    generated.httpBody = generator_.generateStruct(content.history.mojom.HttpBody, false);
    generated.children = generator_.generateArray(function() {
      return generator_.generateStruct(content.history.mojom.FrameState, false);
    });
    return generated;
  };

  FrameState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urlString = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.referrer = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.stateObject = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.documentState = mutator_.mutateArray(this.documentState, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, true);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.scrollRestorationType = mutator_.mutateEnum(this.scrollRestorationType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.viewState = mutator_.mutateStruct(content.history.mojom.ViewState, true);
    }
    if (mutator_.chooseMutateField()) {
      this.itemSequenceNumber = mutator_.mutateInt64(this.itemSequenceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.documentSequenceNumber = mutator_.mutateInt64(this.documentSequenceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.referrerPolicy = mutator_.mutateEnum(this.referrerPolicy, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.httpBody = mutator_.mutateStruct(content.history.mojom.HttpBody, false);
    }
    if (mutator_.chooseMutateField()) {
      this.children = mutator_.mutateArray(this.children, function(val) {
        return mutator_.mutateStruct(content.history.mojom.FrameState, false);
      });
    }
    return this;
  };
  FrameState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameState.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 96}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.urlString
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.referrer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.stateObject
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.documentState
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.NullablePointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.scrollRestorationType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 40, ScrollRestorationType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.viewState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, ViewState, true);
    if (err !== validator.validationError.NONE)
        return err;




    // validate FrameState.referrerPolicy
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 44, referrer$.ReferrerPolicy);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.httpBody
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, HttpBody, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameState.children
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 80, 8, new codec.PointerTo(FrameState), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameState.encodedSize = codec.kStructHeaderSize + 88;

  FrameState.decode = function(decoder) {
    var packed;
    var val = new FrameState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.urlString = decoder.decodeStructPointer(string16$.String16);
    val.referrer = decoder.decodeStructPointer(string16$.String16);
    val.target = decoder.decodeStructPointer(string16$.String16);
    val.stateObject = decoder.decodeStructPointer(string16$.String16);
    val.documentState = decoder.decodeArrayPointer(new codec.NullablePointerTo(string16$.String16));
    val.scrollRestorationType = decoder.decodeStruct(codec.Int32);
    val.referrerPolicy = decoder.decodeStruct(codec.Int32);
    val.viewState = decoder.decodeStructPointer(ViewState);
    val.itemSequenceNumber = decoder.decodeStruct(codec.Int64);
    val.documentSequenceNumber = decoder.decodeStruct(codec.Int64);
    val.httpBody = decoder.decodeStructPointer(HttpBody);
    val.children = decoder.decodeArrayPointer(new codec.PointerTo(FrameState));
    return val;
  };

  FrameState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.urlString);
    encoder.encodeStructPointer(string16$.String16, val.referrer);
    encoder.encodeStructPointer(string16$.String16, val.target);
    encoder.encodeStructPointer(string16$.String16, val.stateObject);
    encoder.encodeArrayPointer(new codec.NullablePointerTo(string16$.String16), val.documentState);
    encoder.encodeStruct(codec.Int32, val.scrollRestorationType);
    encoder.encodeStruct(codec.Int32, val.referrerPolicy);
    encoder.encodeStructPointer(ViewState, val.viewState);
    encoder.encodeStruct(codec.Int64, val.itemSequenceNumber);
    encoder.encodeStruct(codec.Int64, val.documentSequenceNumber);
    encoder.encodeStructPointer(HttpBody, val.httpBody);
    encoder.encodeArrayPointer(new codec.PointerTo(FrameState), val.children);
  };
  function PageState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageState.prototype.initDefaults_ = function() {
    this.referencedFiles = null;
    this.top = null;
  };
  PageState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageState.generate = function(generator_) {
    var generated = new PageState;
    generated.referencedFiles = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, true);
    });
    generated.top = generator_.generateStruct(content.history.mojom.FrameState, false);
    return generated;
  };

  PageState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.referencedFiles = mutator_.mutateArray(this.referencedFiles, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, true);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.top = mutator_.mutateStruct(content.history.mojom.FrameState, false);
    }
    return this;
  };
  PageState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageState.validate = function(messageValidator, offset) {
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


    // validate PageState.referencedFiles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.NullablePointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageState.top
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, FrameState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageState.encodedSize = codec.kStructHeaderSize + 16;

  PageState.decode = function(decoder) {
    var packed;
    var val = new PageState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.referencedFiles = decoder.decodeArrayPointer(new codec.NullablePointerTo(string16$.String16));
    val.top = decoder.decodeStructPointer(FrameState);
    return val;
  };

  PageState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.NullablePointerTo(string16$.String16), val.referencedFiles);
    encoder.encodeStructPointer(FrameState, val.top);
  };

  function Element(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  Element.Tags = {
    blobUuid: 0,
    bytes: 1,
    file: 2,
    dEPRECATEDFileSystemFile: 3,
  };

  Element.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  Element.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "blobUuid",
        "bytes",
        "file",
        "dEPRECATEDFileSystemFile",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a Element member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  Element.generate = function(generator_) {
    var generated = new Element;
    var generators = [
      {
        field: "blobUuid",

        generator: function() { return generator_.generateString(false); },
      },
      {
        field: "bytes",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateUint8();
        }); },
      },
      {
        field: "file",

        generator: function() { return generator_.generateStruct(content.history.mojom.File, false); },
      },
      {
        field: "dEPRECATEDFileSystemFile",

        generator: function() { return generator_.generateStruct(content.history.mojom.DEPRECATED_FileSystemFile, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  Element.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "blobUuid",

        mutator: function() { return mutator_.mutateString(this.blobUuid, false); },
      },
      {
        field: "bytes",

        mutator: function() { return mutator_.mutateArray(this.bytes, function(val) {
          return mutator_.mutateUint8(val);
        }); },
      },
      {
        field: "file",

        mutator: function() { return mutator_.mutateStruct(content.history.mojom.File, false); },
      },
      {
        field: "dEPRECATEDFileSystemFile",

        mutator: function() { return mutator_.mutateStruct(content.history.mojom.DEPRECATED_FileSystemFile, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  Element.prototype.getHandleDeps = function() {
    return [];
  }
  Element.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(Element.prototype, "blobUuid", {
    get: function() {
      if (this.$tag != Element.Tags.blobUuid) {
        throw new ReferenceError(
            "Element.blobUuid is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = Element.Tags.blobUuid;
      this.$data = value;
    }
  });
  Object.defineProperty(Element.prototype, "bytes", {
    get: function() {
      if (this.$tag != Element.Tags.bytes) {
        throw new ReferenceError(
            "Element.bytes is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = Element.Tags.bytes;
      this.$data = value;
    }
  });
  Object.defineProperty(Element.prototype, "file", {
    get: function() {
      if (this.$tag != Element.Tags.file) {
        throw new ReferenceError(
            "Element.file is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = Element.Tags.file;
      this.$data = value;
    }
  });
  Object.defineProperty(Element.prototype, "dEPRECATEDFileSystemFile", {
    get: function() {
      if (this.$tag != Element.Tags.dEPRECATEDFileSystemFile) {
        throw new ReferenceError(
            "Element.dEPRECATEDFileSystemFile is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = Element.Tags.dEPRECATEDFileSystemFile;
      this.$data = value;
    }
  });


    Element.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case Element.Tags.blobUuid:
          encoder.encodeStruct(codec.String, val.blobUuid);
          break;
        case Element.Tags.bytes:
          encoder.encodeArrayPointer(codec.Uint8, val.bytes);
          break;
        case Element.Tags.file:
          encoder.encodeStructPointer(File, val.file);
          break;
        case Element.Tags.dEPRECATEDFileSystemFile:
          encoder.encodeStructPointer(DEPRECATED_FileSystemFile, val.dEPRECATEDFileSystemFile);
          break;
      }
      encoder.align();
    };


    Element.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new Element();
      var tag = decoder.readUint32();
      switch (tag) {
        case Element.Tags.blobUuid:
          result.blobUuid = decoder.decodeStruct(codec.String);
          break;
        case Element.Tags.bytes:
          result.bytes = decoder.decodeArrayPointer(codec.Uint8);
          break;
        case Element.Tags.file:
          result.file = decoder.decodeStructPointer(File);
          break;
        case Element.Tags.dEPRECATEDFileSystemFile:
          result.dEPRECATEDFileSystemFile = decoder.decodeStructPointer(DEPRECATED_FileSystemFile);
          break;
      }
      decoder.align();

      return result;
    };


    Element.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case Element.Tags.blobUuid:
          

    // validate Element.blobUuid
    err = messageValidator.validateStringPointer(data_offset, false)
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case Element.Tags.bytes:
          

    // validate Element.bytes
    err = messageValidator.validateArrayPointer(data_offset, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case Element.Tags.file:
          

    // validate Element.file
    err = messageValidator.validateStructPointer(data_offset, File, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case Element.Tags.dEPRECATEDFileSystemFile:
          

    // validate Element.dEPRECATEDFileSystemFile
    err = messageValidator.validateStructPointer(data_offset, DEPRECATED_FileSystemFile, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  Element.encodedSize = 16;
  exports.ScrollRestorationType = ScrollRestorationType;
  exports.DEPRECATED_FileSystemFile = DEPRECATED_FileSystemFile;
  exports.File = File;
  exports.RequestBody = RequestBody;
  exports.HttpBody = HttpBody;
  exports.ViewState = ViewState;
  exports.FrameState = FrameState;
  exports.PageState = PageState;
  exports.Element = Element;
})();