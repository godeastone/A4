// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/page_load_metrics/page_load_metrics.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('pageLoadMetrics.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var web_feature$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/web_feature.mojom', '../../../third_party/blink/public/platform/web_feature.mojom.js');
  }



  function DocumentTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DocumentTiming.prototype.initDefaults_ = function() {
    this.domContentLoadedEventStart = null;
    this.loadEventStart = null;
    this.firstLayout = null;
  };
  DocumentTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DocumentTiming.generate = function(generator_) {
    var generated = new DocumentTiming;
    generated.domContentLoadedEventStart = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.loadEventStart = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstLayout = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    return generated;
  };

  DocumentTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.domContentLoadedEventStart = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.loadEventStart = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstLayout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    return this;
  };
  DocumentTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DocumentTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DocumentTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DocumentTiming.validate = function(messageValidator, offset) {
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


    // validate DocumentTiming.domContentLoadedEventStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DocumentTiming.loadEventStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DocumentTiming.firstLayout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DocumentTiming.encodedSize = codec.kStructHeaderSize + 24;

  DocumentTiming.decode = function(decoder) {
    var packed;
    var val = new DocumentTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.domContentLoadedEventStart = decoder.decodeStructPointer(time$.TimeDelta);
    val.loadEventStart = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstLayout = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  DocumentTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DocumentTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.domContentLoadedEventStart);
    encoder.encodeStructPointer(time$.TimeDelta, val.loadEventStart);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstLayout);
  };
  function PaintTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaintTiming.prototype.initDefaults_ = function() {
    this.firstPaint = null;
    this.firstTextPaint = null;
    this.firstImagePaint = null;
    this.firstContentfulPaint = null;
    this.firstMeaningfulPaint = null;
  };
  PaintTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaintTiming.generate = function(generator_) {
    var generated = new PaintTiming;
    generated.firstPaint = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstTextPaint = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstImagePaint = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstContentfulPaint = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstMeaningfulPaint = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    return generated;
  };

  PaintTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.firstPaint = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstTextPaint = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstImagePaint = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstContentfulPaint = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstMeaningfulPaint = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    return this;
  };
  PaintTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaintTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaintTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaintTiming.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaintTiming.firstPaint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaintTiming.firstTextPaint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaintTiming.firstImagePaint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaintTiming.firstContentfulPaint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaintTiming.firstMeaningfulPaint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaintTiming.encodedSize = codec.kStructHeaderSize + 40;

  PaintTiming.decode = function(decoder) {
    var packed;
    var val = new PaintTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.firstPaint = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstTextPaint = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstImagePaint = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstContentfulPaint = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstMeaningfulPaint = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  PaintTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaintTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstPaint);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstTextPaint);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstImagePaint);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstContentfulPaint);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstMeaningfulPaint);
  };
  function ParseTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ParseTiming.prototype.initDefaults_ = function() {
    this.parseStart = null;
    this.parseStop = null;
    this.parseBlockedOnScriptLoadDuration = null;
    this.parseBlockedOnScriptLoadFromDocumentWriteDuration = null;
    this.parseBlockedOnScriptExecutionDuration = null;
    this.parseBlockedOnScriptExecutionFromDocumentWriteDuration = null;
  };
  ParseTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ParseTiming.generate = function(generator_) {
    var generated = new ParseTiming;
    generated.parseStart = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.parseStop = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.parseBlockedOnScriptLoadDuration = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.parseBlockedOnScriptLoadFromDocumentWriteDuration = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.parseBlockedOnScriptExecutionDuration = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.parseBlockedOnScriptExecutionFromDocumentWriteDuration = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    return generated;
  };

  ParseTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parseStart = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.parseStop = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.parseBlockedOnScriptLoadDuration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.parseBlockedOnScriptLoadFromDocumentWriteDuration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.parseBlockedOnScriptExecutionDuration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.parseBlockedOnScriptExecutionFromDocumentWriteDuration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    return this;
  };
  ParseTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ParseTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ParseTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ParseTiming.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ParseTiming.parseStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ParseTiming.parseStop
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ParseTiming.parseBlockedOnScriptLoadDuration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ParseTiming.parseBlockedOnScriptLoadFromDocumentWriteDuration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ParseTiming.parseBlockedOnScriptExecutionDuration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ParseTiming.parseBlockedOnScriptExecutionFromDocumentWriteDuration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ParseTiming.encodedSize = codec.kStructHeaderSize + 48;

  ParseTiming.decode = function(decoder) {
    var packed;
    var val = new ParseTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parseStart = decoder.decodeStructPointer(time$.TimeDelta);
    val.parseStop = decoder.decodeStructPointer(time$.TimeDelta);
    val.parseBlockedOnScriptLoadDuration = decoder.decodeStructPointer(time$.TimeDelta);
    val.parseBlockedOnScriptLoadFromDocumentWriteDuration = decoder.decodeStructPointer(time$.TimeDelta);
    val.parseBlockedOnScriptExecutionDuration = decoder.decodeStructPointer(time$.TimeDelta);
    val.parseBlockedOnScriptExecutionFromDocumentWriteDuration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  ParseTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ParseTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.parseStart);
    encoder.encodeStructPointer(time$.TimeDelta, val.parseStop);
    encoder.encodeStructPointer(time$.TimeDelta, val.parseBlockedOnScriptLoadDuration);
    encoder.encodeStructPointer(time$.TimeDelta, val.parseBlockedOnScriptLoadFromDocumentWriteDuration);
    encoder.encodeStructPointer(time$.TimeDelta, val.parseBlockedOnScriptExecutionDuration);
    encoder.encodeStructPointer(time$.TimeDelta, val.parseBlockedOnScriptExecutionFromDocumentWriteDuration);
  };
  function StyleSheetTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StyleSheetTiming.prototype.initDefaults_ = function() {
    this.authorStyleSheetParseDurationBeforeFcp = null;
    this.updateStyleDurationBeforeFcp = null;
  };
  StyleSheetTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StyleSheetTiming.generate = function(generator_) {
    var generated = new StyleSheetTiming;
    generated.authorStyleSheetParseDurationBeforeFcp = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.updateStyleDurationBeforeFcp = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    return generated;
  };

  StyleSheetTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.authorStyleSheetParseDurationBeforeFcp = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.updateStyleDurationBeforeFcp = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    return this;
  };
  StyleSheetTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  StyleSheetTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StyleSheetTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  StyleSheetTiming.validate = function(messageValidator, offset) {
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


    // validate StyleSheetTiming.authorStyleSheetParseDurationBeforeFcp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate StyleSheetTiming.updateStyleDurationBeforeFcp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StyleSheetTiming.encodedSize = codec.kStructHeaderSize + 16;

  StyleSheetTiming.decode = function(decoder) {
    var packed;
    var val = new StyleSheetTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.authorStyleSheetParseDurationBeforeFcp = decoder.decodeStructPointer(time$.TimeDelta);
    val.updateStyleDurationBeforeFcp = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  StyleSheetTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StyleSheetTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.authorStyleSheetParseDurationBeforeFcp);
    encoder.encodeStructPointer(time$.TimeDelta, val.updateStyleDurationBeforeFcp);
  };
  function InteractiveTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InteractiveTiming.prototype.initDefaults_ = function() {
    this.interactive = null;
    this.interactiveDetection = null;
    this.firstInvalidatingInput = null;
    this.firstInputDelay = null;
    this.firstInputTimestamp = null;
  };
  InteractiveTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InteractiveTiming.generate = function(generator_) {
    var generated = new InteractiveTiming;
    generated.interactive = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.interactiveDetection = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstInvalidatingInput = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstInputDelay = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.firstInputTimestamp = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    return generated;
  };

  InteractiveTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interactive = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.interactiveDetection = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstInvalidatingInput = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstInputDelay = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.firstInputTimestamp = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    return this;
  };
  InteractiveTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InteractiveTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InteractiveTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InteractiveTiming.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InteractiveTiming.interactive
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InteractiveTiming.interactiveDetection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InteractiveTiming.firstInvalidatingInput
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InteractiveTiming.firstInputDelay
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InteractiveTiming.firstInputTimestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InteractiveTiming.encodedSize = codec.kStructHeaderSize + 40;

  InteractiveTiming.decode = function(decoder) {
    var packed;
    var val = new InteractiveTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interactive = decoder.decodeStructPointer(time$.TimeDelta);
    val.interactiveDetection = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstInvalidatingInput = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstInputDelay = decoder.decodeStructPointer(time$.TimeDelta);
    val.firstInputTimestamp = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  InteractiveTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InteractiveTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.interactive);
    encoder.encodeStructPointer(time$.TimeDelta, val.interactiveDetection);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstInvalidatingInput);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstInputDelay);
    encoder.encodeStructPointer(time$.TimeDelta, val.firstInputTimestamp);
  };
  function PageLoadTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageLoadTiming.prototype.initDefaults_ = function() {
    this.navigationStart = null;
    this.responseStart = null;
    this.documentTiming = null;
    this.interactiveTiming = null;
    this.paintTiming = null;
    this.parseTiming = null;
    this.styleSheetTiming = null;
  };
  PageLoadTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageLoadTiming.generate = function(generator_) {
    var generated = new PageLoadTiming;
    generated.navigationStart = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.responseStart = generator_.generateStruct(mojoBase.mojom.TimeDelta, true);
    generated.documentTiming = generator_.generateStruct(pageLoadMetrics.mojom.DocumentTiming, false);
    generated.interactiveTiming = generator_.generateStruct(pageLoadMetrics.mojom.InteractiveTiming, false);
    generated.paintTiming = generator_.generateStruct(pageLoadMetrics.mojom.PaintTiming, false);
    generated.parseTiming = generator_.generateStruct(pageLoadMetrics.mojom.ParseTiming, false);
    generated.styleSheetTiming = generator_.generateStruct(pageLoadMetrics.mojom.StyleSheetTiming, false);
    return generated;
  };

  PageLoadTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.navigationStart = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.responseStart = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, true);
    }
    if (mutator_.chooseMutateField()) {
      this.documentTiming = mutator_.mutateStruct(pageLoadMetrics.mojom.DocumentTiming, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interactiveTiming = mutator_.mutateStruct(pageLoadMetrics.mojom.InteractiveTiming, false);
    }
    if (mutator_.chooseMutateField()) {
      this.paintTiming = mutator_.mutateStruct(pageLoadMetrics.mojom.PaintTiming, false);
    }
    if (mutator_.chooseMutateField()) {
      this.parseTiming = mutator_.mutateStruct(pageLoadMetrics.mojom.ParseTiming, false);
    }
    if (mutator_.chooseMutateField()) {
      this.styleSheetTiming = mutator_.mutateStruct(pageLoadMetrics.mojom.StyleSheetTiming, false);
    }
    return this;
  };
  PageLoadTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageLoadTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageLoadTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageLoadTiming.validate = function(messageValidator, offset) {
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


    // validate PageLoadTiming.navigationStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadTiming.responseStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadTiming.documentTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, DocumentTiming, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadTiming.interactiveTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, InteractiveTiming, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadTiming.paintTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, PaintTiming, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadTiming.parseTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, ParseTiming, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadTiming.styleSheetTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, StyleSheetTiming, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageLoadTiming.encodedSize = codec.kStructHeaderSize + 56;

  PageLoadTiming.decode = function(decoder) {
    var packed;
    var val = new PageLoadTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.navigationStart = decoder.decodeStructPointer(time$.Time);
    val.responseStart = decoder.decodeStructPointer(time$.TimeDelta);
    val.documentTiming = decoder.decodeStructPointer(DocumentTiming);
    val.interactiveTiming = decoder.decodeStructPointer(InteractiveTiming);
    val.paintTiming = decoder.decodeStructPointer(PaintTiming);
    val.parseTiming = decoder.decodeStructPointer(ParseTiming);
    val.styleSheetTiming = decoder.decodeStructPointer(StyleSheetTiming);
    return val;
  };

  PageLoadTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageLoadTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.Time, val.navigationStart);
    encoder.encodeStructPointer(time$.TimeDelta, val.responseStart);
    encoder.encodeStructPointer(DocumentTiming, val.documentTiming);
    encoder.encodeStructPointer(InteractiveTiming, val.interactiveTiming);
    encoder.encodeStructPointer(PaintTiming, val.paintTiming);
    encoder.encodeStructPointer(ParseTiming, val.parseTiming);
    encoder.encodeStructPointer(StyleSheetTiming, val.styleSheetTiming);
  };
  function PageLoadMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageLoadMetadata.prototype.initDefaults_ = function() {
    this.behaviorFlags = 0;
  };
  PageLoadMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageLoadMetadata.generate = function(generator_) {
    var generated = new PageLoadMetadata;
    generated.behaviorFlags = generator_.generateInt32();
    return generated;
  };

  PageLoadMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.behaviorFlags = mutator_.mutateInt32(this.behaviorFlags);
    }
    return this;
  };
  PageLoadMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageLoadMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageLoadMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageLoadMetadata.validate = function(messageValidator, offset) {
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

  PageLoadMetadata.encodedSize = codec.kStructHeaderSize + 8;

  PageLoadMetadata.decode = function(decoder) {
    var packed;
    var val = new PageLoadMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.behaviorFlags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageLoadMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageLoadMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.behaviorFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageLoadFeatures(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageLoadFeatures.prototype.initDefaults_ = function() {
    this.features = null;
    this.cssProperties = null;
    this.animatedCssProperties = null;
  };
  PageLoadFeatures.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageLoadFeatures.generate = function(generator_) {
    var generated = new PageLoadFeatures;
    generated.features = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2465);
    });
    generated.cssProperties = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.animatedCssProperties = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    return generated;
  };

  PageLoadFeatures.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.features = mutator_.mutateArray(this.features, function(val) {
        return mutator_.mutateEnum(val, 0, 2465);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.cssProperties = mutator_.mutateArray(this.cssProperties, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.animatedCssProperties = mutator_.mutateArray(this.animatedCssProperties, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    return this;
  };
  PageLoadFeatures.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageLoadFeatures.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageLoadFeatures.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageLoadFeatures.validate = function(messageValidator, offset) {
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


    // validate PageLoadFeatures.features
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, new codec.Enum(web_feature$.WebFeature), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadFeatures.cssProperties
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadFeatures.animatedCssProperties
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, codec.Int32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageLoadFeatures.encodedSize = codec.kStructHeaderSize + 24;

  PageLoadFeatures.decode = function(decoder) {
    var packed;
    var val = new PageLoadFeatures();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.features = decoder.decodeArrayPointer(new codec.Enum(web_feature$.WebFeature));
    val.cssProperties = decoder.decodeArrayPointer(codec.Int32);
    val.animatedCssProperties = decoder.decodeArrayPointer(codec.Int32);
    return val;
  };

  PageLoadFeatures.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageLoadFeatures.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.Enum(web_feature$.WebFeature), val.features);
    encoder.encodeArrayPointer(codec.Int32, val.cssProperties);
    encoder.encodeArrayPointer(codec.Int32, val.animatedCssProperties);
  };
  function PageLoadMetrics_UpdateTiming_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageLoadMetrics_UpdateTiming_Params.prototype.initDefaults_ = function() {
    this.pageLoadTiming = null;
    this.pageLoadMetadata = null;
    this.newFeatures = null;
  };
  PageLoadMetrics_UpdateTiming_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PageLoadMetrics_UpdateTiming_Params.generate = function(generator_) {
    var generated = new PageLoadMetrics_UpdateTiming_Params;
    generated.pageLoadTiming = generator_.generateStruct(pageLoadMetrics.mojom.PageLoadTiming, false);
    generated.pageLoadMetadata = generator_.generateStruct(pageLoadMetrics.mojom.PageLoadMetadata, false);
    generated.newFeatures = generator_.generateStruct(pageLoadMetrics.mojom.PageLoadFeatures, false);
    return generated;
  };

  PageLoadMetrics_UpdateTiming_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageLoadTiming = mutator_.mutateStruct(pageLoadMetrics.mojom.PageLoadTiming, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pageLoadMetadata = mutator_.mutateStruct(pageLoadMetrics.mojom.PageLoadMetadata, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newFeatures = mutator_.mutateStruct(pageLoadMetrics.mojom.PageLoadFeatures, false);
    }
    return this;
  };
  PageLoadMetrics_UpdateTiming_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PageLoadMetrics_UpdateTiming_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PageLoadMetrics_UpdateTiming_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PageLoadMetrics_UpdateTiming_Params.validate = function(messageValidator, offset) {
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


    // validate PageLoadMetrics_UpdateTiming_Params.pageLoadTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PageLoadTiming, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadMetrics_UpdateTiming_Params.pageLoadMetadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PageLoadMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageLoadMetrics_UpdateTiming_Params.newFeatures
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PageLoadFeatures, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageLoadMetrics_UpdateTiming_Params.encodedSize = codec.kStructHeaderSize + 24;

  PageLoadMetrics_UpdateTiming_Params.decode = function(decoder) {
    var packed;
    var val = new PageLoadMetrics_UpdateTiming_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageLoadTiming = decoder.decodeStructPointer(PageLoadTiming);
    val.pageLoadMetadata = decoder.decodeStructPointer(PageLoadMetadata);
    val.newFeatures = decoder.decodeStructPointer(PageLoadFeatures);
    return val;
  };

  PageLoadMetrics_UpdateTiming_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageLoadMetrics_UpdateTiming_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PageLoadTiming, val.pageLoadTiming);
    encoder.encodeStructPointer(PageLoadMetadata, val.pageLoadMetadata);
    encoder.encodeStructPointer(PageLoadFeatures, val.newFeatures);
  };
  var kPageLoadMetrics_UpdateTiming_Name = 1001720482;

  function PageLoadMetricsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PageLoadMetrics,
                                                   handleOrPtrInfo);
  }

  function PageLoadMetricsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PageLoadMetrics, associatedInterfacePtrInfo);
  }

  PageLoadMetricsAssociatedPtr.prototype =
      Object.create(PageLoadMetricsPtr.prototype);
  PageLoadMetricsAssociatedPtr.prototype.constructor =
      PageLoadMetricsAssociatedPtr;

  function PageLoadMetricsProxy(receiver) {
    this.receiver_ = receiver;
  }
  PageLoadMetricsPtr.prototype.updateTiming = function() {
    return PageLoadMetricsProxy.prototype.updateTiming
        .apply(this.ptr.getProxy(), arguments);
  };

  PageLoadMetricsProxy.prototype.updateTiming = function(pageLoadTiming, pageLoadMetadata, newFeatures) {
    var params_ = new PageLoadMetrics_UpdateTiming_Params();
    params_.pageLoadTiming = pageLoadTiming;
    params_.pageLoadMetadata = pageLoadMetadata;
    params_.newFeatures = newFeatures;
    var builder = new codec.MessageV0Builder(
        kPageLoadMetrics_UpdateTiming_Name,
        codec.align(PageLoadMetrics_UpdateTiming_Params.encodedSize));
    builder.encodeStruct(PageLoadMetrics_UpdateTiming_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageLoadMetricsStub(delegate) {
    this.delegate_ = delegate;
  }
  PageLoadMetricsStub.prototype.updateTiming = function(pageLoadTiming, pageLoadMetadata, newFeatures) {
    return this.delegate_ && this.delegate_.updateTiming && this.delegate_.updateTiming(pageLoadTiming, pageLoadMetadata, newFeatures);
  }

  PageLoadMetricsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageLoadMetrics_UpdateTiming_Name:
      var params = reader.decodeStruct(PageLoadMetrics_UpdateTiming_Params);
      this.updateTiming(params.pageLoadTiming, params.pageLoadMetadata, params.newFeatures);
      return true;
    default:
      return false;
    }
  };

  PageLoadMetricsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePageLoadMetricsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPageLoadMetrics_UpdateTiming_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageLoadMetrics_UpdateTiming_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageLoadMetricsResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PageLoadMetrics = {
    name: 'page_load_metrics.mojom.PageLoadMetrics',
    kVersion: 0,
    ptrClass: PageLoadMetricsPtr,
    proxyClass: PageLoadMetricsProxy,
    stubClass: PageLoadMetricsStub,
    validateRequest: validatePageLoadMetricsRequest,
    validateResponse: null,
    mojomId: 'chrome/common/page_load_metrics/page_load_metrics.mojom',
    fuzzMethods: {
      updateTiming: {
        params: PageLoadMetrics_UpdateTiming_Params,
      },
    },
  };
  PageLoadMetricsStub.prototype.validator = validatePageLoadMetricsRequest;
  PageLoadMetricsProxy.prototype.validator = null;
  exports.DocumentTiming = DocumentTiming;
  exports.PaintTiming = PaintTiming;
  exports.ParseTiming = ParseTiming;
  exports.StyleSheetTiming = StyleSheetTiming;
  exports.InteractiveTiming = InteractiveTiming;
  exports.PageLoadTiming = PageLoadTiming;
  exports.PageLoadMetadata = PageLoadMetadata;
  exports.PageLoadFeatures = PageLoadFeatures;
  exports.PageLoadMetrics = PageLoadMetrics;
  exports.PageLoadMetricsPtr = PageLoadMetricsPtr;
  exports.PageLoadMetricsAssociatedPtr = PageLoadMetricsAssociatedPtr;
})();