// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/pdf/common/pdf.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('pdf.mojom');
  var referrer$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/referrer.mojom', '../../../third_party/blink/public/platform/referrer.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function PdfListener_SetCaretPosition_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfListener_SetCaretPosition_Params.prototype.initDefaults_ = function() {
    this.position = null;
  };
  PdfListener_SetCaretPosition_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfListener_SetCaretPosition_Params.generate = function(generator_) {
    var generated = new PdfListener_SetCaretPosition_Params;
    generated.position = generator_.generateStruct(gfx.mojom.PointF, false);
    return generated;
  };

  PdfListener_SetCaretPosition_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.position = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    return this;
  };
  PdfListener_SetCaretPosition_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfListener_SetCaretPosition_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfListener_SetCaretPosition_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfListener_SetCaretPosition_Params.validate = function(messageValidator, offset) {
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


    // validate PdfListener_SetCaretPosition_Params.position
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfListener_SetCaretPosition_Params.encodedSize = codec.kStructHeaderSize + 8;

  PdfListener_SetCaretPosition_Params.decode = function(decoder) {
    var packed;
    var val = new PdfListener_SetCaretPosition_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.position = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  PdfListener_SetCaretPosition_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfListener_SetCaretPosition_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.position);
  };
  function PdfListener_MoveRangeSelectionExtent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfListener_MoveRangeSelectionExtent_Params.prototype.initDefaults_ = function() {
    this.extent = null;
  };
  PdfListener_MoveRangeSelectionExtent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfListener_MoveRangeSelectionExtent_Params.generate = function(generator_) {
    var generated = new PdfListener_MoveRangeSelectionExtent_Params;
    generated.extent = generator_.generateStruct(gfx.mojom.PointF, false);
    return generated;
  };

  PdfListener_MoveRangeSelectionExtent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.extent = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    return this;
  };
  PdfListener_MoveRangeSelectionExtent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfListener_MoveRangeSelectionExtent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfListener_MoveRangeSelectionExtent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfListener_MoveRangeSelectionExtent_Params.validate = function(messageValidator, offset) {
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


    // validate PdfListener_MoveRangeSelectionExtent_Params.extent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfListener_MoveRangeSelectionExtent_Params.encodedSize = codec.kStructHeaderSize + 8;

  PdfListener_MoveRangeSelectionExtent_Params.decode = function(decoder) {
    var packed;
    var val = new PdfListener_MoveRangeSelectionExtent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.extent = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  PdfListener_MoveRangeSelectionExtent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfListener_MoveRangeSelectionExtent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.extent);
  };
  function PdfListener_SetSelectionBounds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfListener_SetSelectionBounds_Params.prototype.initDefaults_ = function() {
    this.base = null;
    this.extent = null;
  };
  PdfListener_SetSelectionBounds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfListener_SetSelectionBounds_Params.generate = function(generator_) {
    var generated = new PdfListener_SetSelectionBounds_Params;
    generated.base = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.extent = generator_.generateStruct(gfx.mojom.PointF, false);
    return generated;
  };

  PdfListener_SetSelectionBounds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.base = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.extent = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    return this;
  };
  PdfListener_SetSelectionBounds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfListener_SetSelectionBounds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfListener_SetSelectionBounds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfListener_SetSelectionBounds_Params.validate = function(messageValidator, offset) {
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


    // validate PdfListener_SetSelectionBounds_Params.base
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfListener_SetSelectionBounds_Params.extent
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfListener_SetSelectionBounds_Params.encodedSize = codec.kStructHeaderSize + 16;

  PdfListener_SetSelectionBounds_Params.decode = function(decoder) {
    var packed;
    var val = new PdfListener_SetSelectionBounds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.base = decoder.decodeStructPointer(geometry$.PointF);
    val.extent = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  PdfListener_SetSelectionBounds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfListener_SetSelectionBounds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.base);
    encoder.encodeStructPointer(geometry$.PointF, val.extent);
  };
  function PdfService_SetListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfService_SetListener_Params.prototype.initDefaults_ = function() {
    this.client = new PdfListenerPtr();
  };
  PdfService_SetListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfService_SetListener_Params.generate = function(generator_) {
    var generated = new PdfService_SetListener_Params;
    generated.client = generator_.generateInterface("pdf.mojom.PdfListener", false);
    return generated;
  };

  PdfService_SetListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "pdf.mojom.PdfListener", false);
    }
    return this;
  };
  PdfService_SetListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["pdf.mojom.PdfListenerPtr"]);
    }
    return handles;
  };

  PdfService_SetListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfService_SetListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  PdfService_SetListener_Params.validate = function(messageValidator, offset) {
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


    // validate PdfService_SetListener_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfService_SetListener_Params.encodedSize = codec.kStructHeaderSize + 8;

  PdfService_SetListener_Params.decode = function(decoder) {
    var packed;
    var val = new PdfService_SetListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(PdfListenerPtr));
    return val;
  };

  PdfService_SetListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfService_SetListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PdfListenerPtr), val.client);
  };
  function PdfService_UpdateContentRestrictions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfService_UpdateContentRestrictions_Params.prototype.initDefaults_ = function() {
    this.restrictions = 0;
  };
  PdfService_UpdateContentRestrictions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfService_UpdateContentRestrictions_Params.generate = function(generator_) {
    var generated = new PdfService_UpdateContentRestrictions_Params;
    generated.restrictions = generator_.generateInt32();
    return generated;
  };

  PdfService_UpdateContentRestrictions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.restrictions = mutator_.mutateInt32(this.restrictions);
    }
    return this;
  };
  PdfService_UpdateContentRestrictions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfService_UpdateContentRestrictions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfService_UpdateContentRestrictions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfService_UpdateContentRestrictions_Params.validate = function(messageValidator, offset) {
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

  PdfService_UpdateContentRestrictions_Params.encodedSize = codec.kStructHeaderSize + 8;

  PdfService_UpdateContentRestrictions_Params.decode = function(decoder) {
    var packed;
    var val = new PdfService_UpdateContentRestrictions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.restrictions = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PdfService_UpdateContentRestrictions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfService_UpdateContentRestrictions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.restrictions);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PdfService_HasUnsupportedFeature_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfService_HasUnsupportedFeature_Params.prototype.initDefaults_ = function() {
  };
  PdfService_HasUnsupportedFeature_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfService_HasUnsupportedFeature_Params.generate = function(generator_) {
    var generated = new PdfService_HasUnsupportedFeature_Params;
    return generated;
  };

  PdfService_HasUnsupportedFeature_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PdfService_HasUnsupportedFeature_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfService_HasUnsupportedFeature_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfService_HasUnsupportedFeature_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfService_HasUnsupportedFeature_Params.validate = function(messageValidator, offset) {
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

  PdfService_HasUnsupportedFeature_Params.encodedSize = codec.kStructHeaderSize + 0;

  PdfService_HasUnsupportedFeature_Params.decode = function(decoder) {
    var packed;
    var val = new PdfService_HasUnsupportedFeature_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PdfService_HasUnsupportedFeature_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfService_HasUnsupportedFeature_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PdfService_SaveUrlAs_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfService_SaveUrlAs_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.referrer = null;
  };
  PdfService_SaveUrlAs_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfService_SaveUrlAs_Params.generate = function(generator_) {
    var generated = new PdfService_SaveUrlAs_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.referrer = generator_.generateStruct(blink.mojom.Referrer, false);
    return generated;
  };

  PdfService_SaveUrlAs_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.referrer = mutator_.mutateStruct(blink.mojom.Referrer, false);
    }
    return this;
  };
  PdfService_SaveUrlAs_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfService_SaveUrlAs_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfService_SaveUrlAs_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfService_SaveUrlAs_Params.validate = function(messageValidator, offset) {
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


    // validate PdfService_SaveUrlAs_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfService_SaveUrlAs_Params.referrer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, referrer$.Referrer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfService_SaveUrlAs_Params.encodedSize = codec.kStructHeaderSize + 16;

  PdfService_SaveUrlAs_Params.decode = function(decoder) {
    var packed;
    var val = new PdfService_SaveUrlAs_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.referrer = decoder.decodeStructPointer(referrer$.Referrer);
    return val;
  };

  PdfService_SaveUrlAs_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfService_SaveUrlAs_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(referrer$.Referrer, val.referrer);
  };
  function PdfService_SelectionChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfService_SelectionChanged_Params.prototype.initDefaults_ = function() {
    this.left = null;
    this.leftHeight = 0;
    this.rightHeight = 0;
    this.right = null;
  };
  PdfService_SelectionChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfService_SelectionChanged_Params.generate = function(generator_) {
    var generated = new PdfService_SelectionChanged_Params;
    generated.left = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.leftHeight = generator_.generateInt32();
    generated.right = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.rightHeight = generator_.generateInt32();
    return generated;
  };

  PdfService_SelectionChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.left = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.leftHeight = mutator_.mutateInt32(this.leftHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.right = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rightHeight = mutator_.mutateInt32(this.rightHeight);
    }
    return this;
  };
  PdfService_SelectionChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfService_SelectionChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfService_SelectionChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfService_SelectionChanged_Params.validate = function(messageValidator, offset) {
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


    // validate PdfService_SelectionChanged_Params.left
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PdfService_SelectionChanged_Params.right
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PdfService_SelectionChanged_Params.encodedSize = codec.kStructHeaderSize + 24;

  PdfService_SelectionChanged_Params.decode = function(decoder) {
    var packed;
    var val = new PdfService_SelectionChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.left = decoder.decodeStructPointer(geometry$.PointF);
    val.leftHeight = decoder.decodeStruct(codec.Int32);
    val.rightHeight = decoder.decodeStruct(codec.Int32);
    val.right = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  PdfService_SelectionChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfService_SelectionChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.left);
    encoder.encodeStruct(codec.Int32, val.leftHeight);
    encoder.encodeStruct(codec.Int32, val.rightHeight);
    encoder.encodeStructPointer(geometry$.PointF, val.right);
  };
  var kPdfListener_SetCaretPosition_Name = 432414411;
  var kPdfListener_MoveRangeSelectionExtent_Name = 1824544741;
  var kPdfListener_SetSelectionBounds_Name = 809400403;

  function PdfListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PdfListener,
                                                   handleOrPtrInfo);
  }

  function PdfListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PdfListener, associatedInterfacePtrInfo);
  }

  PdfListenerAssociatedPtr.prototype =
      Object.create(PdfListenerPtr.prototype);
  PdfListenerAssociatedPtr.prototype.constructor =
      PdfListenerAssociatedPtr;

  function PdfListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  PdfListenerPtr.prototype.setCaretPosition = function() {
    return PdfListenerProxy.prototype.setCaretPosition
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfListenerProxy.prototype.setCaretPosition = function(position) {
    var params_ = new PdfListener_SetCaretPosition_Params();
    params_.position = position;
    var builder = new codec.MessageV0Builder(
        kPdfListener_SetCaretPosition_Name,
        codec.align(PdfListener_SetCaretPosition_Params.encodedSize));
    builder.encodeStruct(PdfListener_SetCaretPosition_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfListenerPtr.prototype.moveRangeSelectionExtent = function() {
    return PdfListenerProxy.prototype.moveRangeSelectionExtent
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfListenerProxy.prototype.moveRangeSelectionExtent = function(extent) {
    var params_ = new PdfListener_MoveRangeSelectionExtent_Params();
    params_.extent = extent;
    var builder = new codec.MessageV0Builder(
        kPdfListener_MoveRangeSelectionExtent_Name,
        codec.align(PdfListener_MoveRangeSelectionExtent_Params.encodedSize));
    builder.encodeStruct(PdfListener_MoveRangeSelectionExtent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfListenerPtr.prototype.setSelectionBounds = function() {
    return PdfListenerProxy.prototype.setSelectionBounds
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfListenerProxy.prototype.setSelectionBounds = function(base, extent) {
    var params_ = new PdfListener_SetSelectionBounds_Params();
    params_.base = base;
    params_.extent = extent;
    var builder = new codec.MessageV0Builder(
        kPdfListener_SetSelectionBounds_Name,
        codec.align(PdfListener_SetSelectionBounds_Params.encodedSize));
    builder.encodeStruct(PdfListener_SetSelectionBounds_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PdfListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  PdfListenerStub.prototype.setCaretPosition = function(position) {
    return this.delegate_ && this.delegate_.setCaretPosition && this.delegate_.setCaretPosition(position);
  }
  PdfListenerStub.prototype.moveRangeSelectionExtent = function(extent) {
    return this.delegate_ && this.delegate_.moveRangeSelectionExtent && this.delegate_.moveRangeSelectionExtent(extent);
  }
  PdfListenerStub.prototype.setSelectionBounds = function(base, extent) {
    return this.delegate_ && this.delegate_.setSelectionBounds && this.delegate_.setSelectionBounds(base, extent);
  }

  PdfListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPdfListener_SetCaretPosition_Name:
      var params = reader.decodeStruct(PdfListener_SetCaretPosition_Params);
      this.setCaretPosition(params.position);
      return true;
    case kPdfListener_MoveRangeSelectionExtent_Name:
      var params = reader.decodeStruct(PdfListener_MoveRangeSelectionExtent_Params);
      this.moveRangeSelectionExtent(params.extent);
      return true;
    case kPdfListener_SetSelectionBounds_Name:
      var params = reader.decodeStruct(PdfListener_SetSelectionBounds_Params);
      this.setSelectionBounds(params.base, params.extent);
      return true;
    default:
      return false;
    }
  };

  PdfListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePdfListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPdfListener_SetCaretPosition_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfListener_SetCaretPosition_Params;
      break;
      case kPdfListener_MoveRangeSelectionExtent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfListener_MoveRangeSelectionExtent_Params;
      break;
      case kPdfListener_SetSelectionBounds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfListener_SetSelectionBounds_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePdfListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PdfListener = {
    name: 'pdf.mojom.PdfListener',
    kVersion: 0,
    ptrClass: PdfListenerPtr,
    proxyClass: PdfListenerProxy,
    stubClass: PdfListenerStub,
    validateRequest: validatePdfListenerRequest,
    validateResponse: null,
    mojomId: 'components/pdf/common/pdf.mojom',
    fuzzMethods: {
      setCaretPosition: {
        params: PdfListener_SetCaretPosition_Params,
      },
      moveRangeSelectionExtent: {
        params: PdfListener_MoveRangeSelectionExtent_Params,
      },
      setSelectionBounds: {
        params: PdfListener_SetSelectionBounds_Params,
      },
    },
  };
  PdfListenerStub.prototype.validator = validatePdfListenerRequest;
  PdfListenerProxy.prototype.validator = null;
  var kPdfService_SetListener_Name = 1018596724;
  var kPdfService_UpdateContentRestrictions_Name = 1568257570;
  var kPdfService_HasUnsupportedFeature_Name = 1759345801;
  var kPdfService_SaveUrlAs_Name = 713438600;
  var kPdfService_SelectionChanged_Name = 611475560;

  function PdfServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PdfService,
                                                   handleOrPtrInfo);
  }

  function PdfServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PdfService, associatedInterfacePtrInfo);
  }

  PdfServiceAssociatedPtr.prototype =
      Object.create(PdfServicePtr.prototype);
  PdfServiceAssociatedPtr.prototype.constructor =
      PdfServiceAssociatedPtr;

  function PdfServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  PdfServicePtr.prototype.setListener = function() {
    return PdfServiceProxy.prototype.setListener
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfServiceProxy.prototype.setListener = function(client) {
    var params_ = new PdfService_SetListener_Params();
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kPdfService_SetListener_Name,
        codec.align(PdfService_SetListener_Params.encodedSize));
    builder.encodeStruct(PdfService_SetListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfServicePtr.prototype.updateContentRestrictions = function() {
    return PdfServiceProxy.prototype.updateContentRestrictions
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfServiceProxy.prototype.updateContentRestrictions = function(restrictions) {
    var params_ = new PdfService_UpdateContentRestrictions_Params();
    params_.restrictions = restrictions;
    var builder = new codec.MessageV0Builder(
        kPdfService_UpdateContentRestrictions_Name,
        codec.align(PdfService_UpdateContentRestrictions_Params.encodedSize));
    builder.encodeStruct(PdfService_UpdateContentRestrictions_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfServicePtr.prototype.hasUnsupportedFeature = function() {
    return PdfServiceProxy.prototype.hasUnsupportedFeature
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfServiceProxy.prototype.hasUnsupportedFeature = function() {
    var params_ = new PdfService_HasUnsupportedFeature_Params();
    var builder = new codec.MessageV0Builder(
        kPdfService_HasUnsupportedFeature_Name,
        codec.align(PdfService_HasUnsupportedFeature_Params.encodedSize));
    builder.encodeStruct(PdfService_HasUnsupportedFeature_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfServicePtr.prototype.saveUrlAs = function() {
    return PdfServiceProxy.prototype.saveUrlAs
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfServiceProxy.prototype.saveUrlAs = function(url, referrer) {
    var params_ = new PdfService_SaveUrlAs_Params();
    params_.url = url;
    params_.referrer = referrer;
    var builder = new codec.MessageV0Builder(
        kPdfService_SaveUrlAs_Name,
        codec.align(PdfService_SaveUrlAs_Params.encodedSize));
    builder.encodeStruct(PdfService_SaveUrlAs_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfServicePtr.prototype.selectionChanged = function() {
    return PdfServiceProxy.prototype.selectionChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfServiceProxy.prototype.selectionChanged = function(left, leftHeight, right, rightHeight) {
    var params_ = new PdfService_SelectionChanged_Params();
    params_.left = left;
    params_.leftHeight = leftHeight;
    params_.right = right;
    params_.rightHeight = rightHeight;
    var builder = new codec.MessageV0Builder(
        kPdfService_SelectionChanged_Name,
        codec.align(PdfService_SelectionChanged_Params.encodedSize));
    builder.encodeStruct(PdfService_SelectionChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PdfServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  PdfServiceStub.prototype.setListener = function(client) {
    return this.delegate_ && this.delegate_.setListener && this.delegate_.setListener(client);
  }
  PdfServiceStub.prototype.updateContentRestrictions = function(restrictions) {
    return this.delegate_ && this.delegate_.updateContentRestrictions && this.delegate_.updateContentRestrictions(restrictions);
  }
  PdfServiceStub.prototype.hasUnsupportedFeature = function() {
    return this.delegate_ && this.delegate_.hasUnsupportedFeature && this.delegate_.hasUnsupportedFeature();
  }
  PdfServiceStub.prototype.saveUrlAs = function(url, referrer) {
    return this.delegate_ && this.delegate_.saveUrlAs && this.delegate_.saveUrlAs(url, referrer);
  }
  PdfServiceStub.prototype.selectionChanged = function(left, leftHeight, right, rightHeight) {
    return this.delegate_ && this.delegate_.selectionChanged && this.delegate_.selectionChanged(left, leftHeight, right, rightHeight);
  }

  PdfServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPdfService_SetListener_Name:
      var params = reader.decodeStruct(PdfService_SetListener_Params);
      this.setListener(params.client);
      return true;
    case kPdfService_UpdateContentRestrictions_Name:
      var params = reader.decodeStruct(PdfService_UpdateContentRestrictions_Params);
      this.updateContentRestrictions(params.restrictions);
      return true;
    case kPdfService_HasUnsupportedFeature_Name:
      var params = reader.decodeStruct(PdfService_HasUnsupportedFeature_Params);
      this.hasUnsupportedFeature();
      return true;
    case kPdfService_SaveUrlAs_Name:
      var params = reader.decodeStruct(PdfService_SaveUrlAs_Params);
      this.saveUrlAs(params.url, params.referrer);
      return true;
    case kPdfService_SelectionChanged_Name:
      var params = reader.decodeStruct(PdfService_SelectionChanged_Params);
      this.selectionChanged(params.left, params.leftHeight, params.right, params.rightHeight);
      return true;
    default:
      return false;
    }
  };

  PdfServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePdfServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPdfService_SetListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfService_SetListener_Params;
      break;
      case kPdfService_UpdateContentRestrictions_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfService_UpdateContentRestrictions_Params;
      break;
      case kPdfService_HasUnsupportedFeature_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfService_HasUnsupportedFeature_Params;
      break;
      case kPdfService_SaveUrlAs_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfService_SaveUrlAs_Params;
      break;
      case kPdfService_SelectionChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfService_SelectionChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePdfServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PdfService = {
    name: 'pdf.mojom.PdfService',
    kVersion: 0,
    ptrClass: PdfServicePtr,
    proxyClass: PdfServiceProxy,
    stubClass: PdfServiceStub,
    validateRequest: validatePdfServiceRequest,
    validateResponse: null,
    mojomId: 'components/pdf/common/pdf.mojom',
    fuzzMethods: {
      setListener: {
        params: PdfService_SetListener_Params,
      },
      updateContentRestrictions: {
        params: PdfService_UpdateContentRestrictions_Params,
      },
      hasUnsupportedFeature: {
        params: PdfService_HasUnsupportedFeature_Params,
      },
      saveUrlAs: {
        params: PdfService_SaveUrlAs_Params,
      },
      selectionChanged: {
        params: PdfService_SelectionChanged_Params,
      },
    },
  };
  PdfServiceStub.prototype.validator = validatePdfServiceRequest;
  PdfServiceProxy.prototype.validator = null;
  exports.PdfListener = PdfListener;
  exports.PdfListenerPtr = PdfListenerPtr;
  exports.PdfListenerAssociatedPtr = PdfListenerAssociatedPtr;
  exports.PdfService = PdfService;
  exports.PdfServicePtr = PdfServicePtr;
  exports.PdfServiceAssociatedPtr = PdfServiceAssociatedPtr;
})();