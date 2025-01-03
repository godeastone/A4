// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/pdf_compositor/public/interfaces/pdf_compositor.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('printing.mojom');
  var shared_memory$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/shared_memory.mojom', '../../../../../mojo/public/mojom/base/shared_memory.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }


  var kServiceName = "pdf_compositor";

  function PdfCompositor_NotifyUnavailableSubframe_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_NotifyUnavailableSubframe_Params.prototype.initDefaults_ = function() {
    this.frameGuid = 0;
  };
  PdfCompositor_NotifyUnavailableSubframe_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_NotifyUnavailableSubframe_Params.generate = function(generator_) {
    var generated = new PdfCompositor_NotifyUnavailableSubframe_Params;
    generated.frameGuid = generator_.generateUint64();
    return generated;
  };

  PdfCompositor_NotifyUnavailableSubframe_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameGuid = mutator_.mutateUint64(this.frameGuid);
    }
    return this;
  };
  PdfCompositor_NotifyUnavailableSubframe_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfCompositor_NotifyUnavailableSubframe_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_NotifyUnavailableSubframe_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfCompositor_NotifyUnavailableSubframe_Params.validate = function(messageValidator, offset) {
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

  PdfCompositor_NotifyUnavailableSubframe_Params.encodedSize = codec.kStructHeaderSize + 8;

  PdfCompositor_NotifyUnavailableSubframe_Params.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_NotifyUnavailableSubframe_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameGuid = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  PdfCompositor_NotifyUnavailableSubframe_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_NotifyUnavailableSubframe_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.frameGuid);
  };
  function PdfCompositor_AddSubframeContent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_AddSubframeContent_Params.prototype.initDefaults_ = function() {
    this.frameGuid = 0;
    this.serializedContent = null;
    this.subframeContentInfo = null;
  };
  PdfCompositor_AddSubframeContent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_AddSubframeContent_Params.generate = function(generator_) {
    var generated = new PdfCompositor_AddSubframeContent_Params;
    generated.frameGuid = generator_.generateUint64();
    generated.serializedContent = generator_.generateSharedBuffer(false);
    generated.subframeContentInfo = generator_.generateMap(
      function() {
        return generator_.generateUint32();
      },
      function() {
        return generator_.generateUint64();
      });
    return generated;
  };

  PdfCompositor_AddSubframeContent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameGuid = mutator_.mutateUint64(this.frameGuid);
    }
    if (mutator_.chooseMutateField()) {
      this.serializedContent = mutator_.mutateSharedBuffer(this.serializedContent, false);
    }
    if (mutator_.chooseMutateField()) {
      this.subframeContentInfo = mutator_.mutateMap(this.subframeContentInfo,
        function(val) {
          return mutator_.mutateUint32(val);
        },
        function(val) {
          return mutator_.mutateUint64(val);
        });
    }
    return this;
  };
  PdfCompositor_AddSubframeContent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.serializedContent !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  PdfCompositor_AddSubframeContent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_AddSubframeContent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.serializedContent = handles[idx++];;
    return idx;
  };

  PdfCompositor_AddSubframeContent_Params.validate = function(messageValidator, offset) {
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



    // validate PdfCompositor_AddSubframeContent_Params.serializedContent
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfCompositor_AddSubframeContent_Params.subframeContentInfo
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.Uint32, codec.Uint64, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfCompositor_AddSubframeContent_Params.encodedSize = codec.kStructHeaderSize + 24;

  PdfCompositor_AddSubframeContent_Params.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_AddSubframeContent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameGuid = decoder.decodeStruct(codec.Uint64);
    val.serializedContent = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.subframeContentInfo = decoder.decodeMapPointer(codec.Uint32, codec.Uint64);
    return val;
  };

  PdfCompositor_AddSubframeContent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_AddSubframeContent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.frameGuid);
    encoder.encodeStruct(codec.Handle, val.serializedContent);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.Uint32, codec.Uint64, val.subframeContentInfo);
  };
  function PdfCompositor_CompositePageToPdf_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_CompositePageToPdf_Params.prototype.initDefaults_ = function() {
    this.frameGuid = 0;
    this.pageNum = 0;
    this.skHandle = null;
    this.subframeContentInfo = null;
  };
  PdfCompositor_CompositePageToPdf_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_CompositePageToPdf_Params.generate = function(generator_) {
    var generated = new PdfCompositor_CompositePageToPdf_Params;
    generated.frameGuid = generator_.generateUint64();
    generated.pageNum = generator_.generateUint32();
    generated.skHandle = generator_.generateSharedBuffer(false);
    generated.subframeContentInfo = generator_.generateMap(
      function() {
        return generator_.generateUint32();
      },
      function() {
        return generator_.generateUint64();
      });
    return generated;
  };

  PdfCompositor_CompositePageToPdf_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameGuid = mutator_.mutateUint64(this.frameGuid);
    }
    if (mutator_.chooseMutateField()) {
      this.pageNum = mutator_.mutateUint32(this.pageNum);
    }
    if (mutator_.chooseMutateField()) {
      this.skHandle = mutator_.mutateSharedBuffer(this.skHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.subframeContentInfo = mutator_.mutateMap(this.subframeContentInfo,
        function(val) {
          return mutator_.mutateUint32(val);
        },
        function(val) {
          return mutator_.mutateUint64(val);
        });
    }
    return this;
  };
  PdfCompositor_CompositePageToPdf_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.skHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  PdfCompositor_CompositePageToPdf_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_CompositePageToPdf_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.skHandle = handles[idx++];;
    return idx;
  };

  PdfCompositor_CompositePageToPdf_Params.validate = function(messageValidator, offset) {
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




    // validate PdfCompositor_CompositePageToPdf_Params.skHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfCompositor_CompositePageToPdf_Params.subframeContentInfo
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.Uint32, codec.Uint64, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfCompositor_CompositePageToPdf_Params.encodedSize = codec.kStructHeaderSize + 24;

  PdfCompositor_CompositePageToPdf_Params.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_CompositePageToPdf_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameGuid = decoder.decodeStruct(codec.Uint64);
    val.pageNum = decoder.decodeStruct(codec.Uint32);
    val.skHandle = decoder.decodeStruct(codec.Handle);
    val.subframeContentInfo = decoder.decodeMapPointer(codec.Uint32, codec.Uint64);
    return val;
  };

  PdfCompositor_CompositePageToPdf_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_CompositePageToPdf_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.frameGuid);
    encoder.encodeStruct(codec.Uint32, val.pageNum);
    encoder.encodeStruct(codec.Handle, val.skHandle);
    encoder.encodeMapPointer(codec.Uint32, codec.Uint64, val.subframeContentInfo);
  };
  function PdfCompositor_CompositePageToPdf_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_CompositePageToPdf_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.pdfRegion = null;
  };
  PdfCompositor_CompositePageToPdf_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_CompositePageToPdf_ResponseParams.generate = function(generator_) {
    var generated = new PdfCompositor_CompositePageToPdf_ResponseParams;
    generated.status = generator_.generateEnum(0, 3);
    generated.pdfRegion = generator_.generateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, true);
    return generated;
  };

  PdfCompositor_CompositePageToPdf_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.pdfRegion = mutator_.mutateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, true);
    }
    return this;
  };
  PdfCompositor_CompositePageToPdf_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pdfRegion !== null) {
      Array.prototype.push.apply(handles, this.pdfRegion.getHandleDeps());
    }
    return handles;
  };

  PdfCompositor_CompositePageToPdf_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_CompositePageToPdf_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.pdfRegion.setHandlesInternal_(handles, idx);
    return idx;
  };

  PdfCompositor_CompositePageToPdf_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PdfCompositor_CompositePageToPdf_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PdfCompositor.Status);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfCompositor_CompositePageToPdf_ResponseParams.pdfRegion
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, shared_memory$.ReadOnlySharedMemoryRegion, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfCompositor_CompositePageToPdf_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PdfCompositor_CompositePageToPdf_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_CompositePageToPdf_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pdfRegion = decoder.decodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion);
    return val;
  };

  PdfCompositor_CompositePageToPdf_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_CompositePageToPdf_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion, val.pdfRegion);
  };
  function PdfCompositor_CompositeDocumentToPdf_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_CompositeDocumentToPdf_Params.prototype.initDefaults_ = function() {
    this.frameGuid = 0;
    this.skHandle = null;
    this.subframeContentInfo = null;
  };
  PdfCompositor_CompositeDocumentToPdf_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_CompositeDocumentToPdf_Params.generate = function(generator_) {
    var generated = new PdfCompositor_CompositeDocumentToPdf_Params;
    generated.frameGuid = generator_.generateUint64();
    generated.skHandle = generator_.generateSharedBuffer(false);
    generated.subframeContentInfo = generator_.generateMap(
      function() {
        return generator_.generateUint32();
      },
      function() {
        return generator_.generateUint64();
      });
    return generated;
  };

  PdfCompositor_CompositeDocumentToPdf_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameGuid = mutator_.mutateUint64(this.frameGuid);
    }
    if (mutator_.chooseMutateField()) {
      this.skHandle = mutator_.mutateSharedBuffer(this.skHandle, false);
    }
    if (mutator_.chooseMutateField()) {
      this.subframeContentInfo = mutator_.mutateMap(this.subframeContentInfo,
        function(val) {
          return mutator_.mutateUint32(val);
        },
        function(val) {
          return mutator_.mutateUint64(val);
        });
    }
    return this;
  };
  PdfCompositor_CompositeDocumentToPdf_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.skHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  PdfCompositor_CompositeDocumentToPdf_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_CompositeDocumentToPdf_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.skHandle = handles[idx++];;
    return idx;
  };

  PdfCompositor_CompositeDocumentToPdf_Params.validate = function(messageValidator, offset) {
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



    // validate PdfCompositor_CompositeDocumentToPdf_Params.skHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfCompositor_CompositeDocumentToPdf_Params.subframeContentInfo
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.Uint32, codec.Uint64, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfCompositor_CompositeDocumentToPdf_Params.encodedSize = codec.kStructHeaderSize + 24;

  PdfCompositor_CompositeDocumentToPdf_Params.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_CompositeDocumentToPdf_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameGuid = decoder.decodeStruct(codec.Uint64);
    val.skHandle = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.subframeContentInfo = decoder.decodeMapPointer(codec.Uint32, codec.Uint64);
    return val;
  };

  PdfCompositor_CompositeDocumentToPdf_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_CompositeDocumentToPdf_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.frameGuid);
    encoder.encodeStruct(codec.Handle, val.skHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.Uint32, codec.Uint64, val.subframeContentInfo);
  };
  function PdfCompositor_CompositeDocumentToPdf_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_CompositeDocumentToPdf_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.pdfRegion = null;
  };
  PdfCompositor_CompositeDocumentToPdf_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_CompositeDocumentToPdf_ResponseParams.generate = function(generator_) {
    var generated = new PdfCompositor_CompositeDocumentToPdf_ResponseParams;
    generated.status = generator_.generateEnum(0, 3);
    generated.pdfRegion = generator_.generateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, true);
    return generated;
  };

  PdfCompositor_CompositeDocumentToPdf_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.pdfRegion = mutator_.mutateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, true);
    }
    return this;
  };
  PdfCompositor_CompositeDocumentToPdf_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pdfRegion !== null) {
      Array.prototype.push.apply(handles, this.pdfRegion.getHandleDeps());
    }
    return handles;
  };

  PdfCompositor_CompositeDocumentToPdf_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_CompositeDocumentToPdf_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.pdfRegion.setHandlesInternal_(handles, idx);
    return idx;
  };

  PdfCompositor_CompositeDocumentToPdf_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PdfCompositor_CompositeDocumentToPdf_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PdfCompositor.Status);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfCompositor_CompositeDocumentToPdf_ResponseParams.pdfRegion
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, shared_memory$.ReadOnlySharedMemoryRegion, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfCompositor_CompositeDocumentToPdf_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PdfCompositor_CompositeDocumentToPdf_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_CompositeDocumentToPdf_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pdfRegion = decoder.decodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion);
    return val;
  };

  PdfCompositor_CompositeDocumentToPdf_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_CompositeDocumentToPdf_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion, val.pdfRegion);
  };
  function PdfCompositor_SetWebContentsURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfCompositor_SetWebContentsURL_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PdfCompositor_SetWebContentsURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfCompositor_SetWebContentsURL_Params.generate = function(generator_) {
    var generated = new PdfCompositor_SetWebContentsURL_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PdfCompositor_SetWebContentsURL_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PdfCompositor_SetWebContentsURL_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfCompositor_SetWebContentsURL_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfCompositor_SetWebContentsURL_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfCompositor_SetWebContentsURL_Params.validate = function(messageValidator, offset) {
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


    // validate PdfCompositor_SetWebContentsURL_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfCompositor_SetWebContentsURL_Params.encodedSize = codec.kStructHeaderSize + 8;

  PdfCompositor_SetWebContentsURL_Params.decode = function(decoder) {
    var packed;
    var val = new PdfCompositor_SetWebContentsURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PdfCompositor_SetWebContentsURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfCompositor_SetWebContentsURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  var kPdfCompositor_NotifyUnavailableSubframe_Name = 379986231;
  var kPdfCompositor_AddSubframeContent_Name = 1242695176;
  var kPdfCompositor_CompositePageToPdf_Name = 113984751;
  var kPdfCompositor_CompositeDocumentToPdf_Name = 694032441;
  var kPdfCompositor_SetWebContentsURL_Name = 893106422;

  function PdfCompositorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PdfCompositor,
                                                   handleOrPtrInfo);
  }

  function PdfCompositorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PdfCompositor, associatedInterfacePtrInfo);
  }

  PdfCompositorAssociatedPtr.prototype =
      Object.create(PdfCompositorPtr.prototype);
  PdfCompositorAssociatedPtr.prototype.constructor =
      PdfCompositorAssociatedPtr;

  function PdfCompositorProxy(receiver) {
    this.receiver_ = receiver;
  }
  PdfCompositorPtr.prototype.notifyUnavailableSubframe = function() {
    return PdfCompositorProxy.prototype.notifyUnavailableSubframe
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfCompositorProxy.prototype.notifyUnavailableSubframe = function(frameGuid) {
    var params_ = new PdfCompositor_NotifyUnavailableSubframe_Params();
    params_.frameGuid = frameGuid;
    var builder = new codec.MessageV0Builder(
        kPdfCompositor_NotifyUnavailableSubframe_Name,
        codec.align(PdfCompositor_NotifyUnavailableSubframe_Params.encodedSize));
    builder.encodeStruct(PdfCompositor_NotifyUnavailableSubframe_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfCompositorPtr.prototype.addSubframeContent = function() {
    return PdfCompositorProxy.prototype.addSubframeContent
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfCompositorProxy.prototype.addSubframeContent = function(frameGuid, serializedContent, subframeContentInfo) {
    var params_ = new PdfCompositor_AddSubframeContent_Params();
    params_.frameGuid = frameGuid;
    params_.serializedContent = serializedContent;
    params_.subframeContentInfo = subframeContentInfo;
    var builder = new codec.MessageV0Builder(
        kPdfCompositor_AddSubframeContent_Name,
        codec.align(PdfCompositor_AddSubframeContent_Params.encodedSize));
    builder.encodeStruct(PdfCompositor_AddSubframeContent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PdfCompositorPtr.prototype.compositePageToPdf = function() {
    return PdfCompositorProxy.prototype.compositePageToPdf
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfCompositorProxy.prototype.compositePageToPdf = function(frameGuid, pageNum, skHandle, subframeContentInfo) {
    var params_ = new PdfCompositor_CompositePageToPdf_Params();
    params_.frameGuid = frameGuid;
    params_.pageNum = pageNum;
    params_.skHandle = skHandle;
    params_.subframeContentInfo = subframeContentInfo;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPdfCompositor_CompositePageToPdf_Name,
          codec.align(PdfCompositor_CompositePageToPdf_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PdfCompositor_CompositePageToPdf_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PdfCompositor_CompositePageToPdf_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PdfCompositorPtr.prototype.compositeDocumentToPdf = function() {
    return PdfCompositorProxy.prototype.compositeDocumentToPdf
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfCompositorProxy.prototype.compositeDocumentToPdf = function(frameGuid, skHandle, subframeContentInfo) {
    var params_ = new PdfCompositor_CompositeDocumentToPdf_Params();
    params_.frameGuid = frameGuid;
    params_.skHandle = skHandle;
    params_.subframeContentInfo = subframeContentInfo;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPdfCompositor_CompositeDocumentToPdf_Name,
          codec.align(PdfCompositor_CompositeDocumentToPdf_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PdfCompositor_CompositeDocumentToPdf_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PdfCompositor_CompositeDocumentToPdf_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PdfCompositorPtr.prototype.setWebContentsURL = function() {
    return PdfCompositorProxy.prototype.setWebContentsURL
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfCompositorProxy.prototype.setWebContentsURL = function(url) {
    var params_ = new PdfCompositor_SetWebContentsURL_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kPdfCompositor_SetWebContentsURL_Name,
        codec.align(PdfCompositor_SetWebContentsURL_Params.encodedSize));
    builder.encodeStruct(PdfCompositor_SetWebContentsURL_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PdfCompositorStub(delegate) {
    this.delegate_ = delegate;
  }
  PdfCompositorStub.prototype.notifyUnavailableSubframe = function(frameGuid) {
    return this.delegate_ && this.delegate_.notifyUnavailableSubframe && this.delegate_.notifyUnavailableSubframe(frameGuid);
  }
  PdfCompositorStub.prototype.addSubframeContent = function(frameGuid, serializedContent, subframeContentInfo) {
    return this.delegate_ && this.delegate_.addSubframeContent && this.delegate_.addSubframeContent(frameGuid, serializedContent, subframeContentInfo);
  }
  PdfCompositorStub.prototype.compositePageToPdf = function(frameGuid, pageNum, skHandle, subframeContentInfo) {
    return this.delegate_ && this.delegate_.compositePageToPdf && this.delegate_.compositePageToPdf(frameGuid, pageNum, skHandle, subframeContentInfo);
  }
  PdfCompositorStub.prototype.compositeDocumentToPdf = function(frameGuid, skHandle, subframeContentInfo) {
    return this.delegate_ && this.delegate_.compositeDocumentToPdf && this.delegate_.compositeDocumentToPdf(frameGuid, skHandle, subframeContentInfo);
  }
  PdfCompositorStub.prototype.setWebContentsURL = function(url) {
    return this.delegate_ && this.delegate_.setWebContentsURL && this.delegate_.setWebContentsURL(url);
  }

  PdfCompositorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPdfCompositor_NotifyUnavailableSubframe_Name:
      var params = reader.decodeStruct(PdfCompositor_NotifyUnavailableSubframe_Params);
      this.notifyUnavailableSubframe(params.frameGuid);
      return true;
    case kPdfCompositor_AddSubframeContent_Name:
      var params = reader.decodeStruct(PdfCompositor_AddSubframeContent_Params);
      this.addSubframeContent(params.frameGuid, params.serializedContent, params.subframeContentInfo);
      return true;
    case kPdfCompositor_SetWebContentsURL_Name:
      var params = reader.decodeStruct(PdfCompositor_SetWebContentsURL_Params);
      this.setWebContentsURL(params.url);
      return true;
    default:
      return false;
    }
  };

  PdfCompositorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPdfCompositor_CompositePageToPdf_Name:
      var params = reader.decodeStruct(PdfCompositor_CompositePageToPdf_Params);
      this.compositePageToPdf(params.frameGuid, params.pageNum, params.skHandle, params.subframeContentInfo).then(function(response) {
        var responseParams =
            new PdfCompositor_CompositePageToPdf_ResponseParams();
        responseParams.status = response.status;
        responseParams.pdfRegion = response.pdfRegion;
        var builder = new codec.MessageV1Builder(
            kPdfCompositor_CompositePageToPdf_Name,
            codec.align(PdfCompositor_CompositePageToPdf_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PdfCompositor_CompositePageToPdf_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPdfCompositor_CompositeDocumentToPdf_Name:
      var params = reader.decodeStruct(PdfCompositor_CompositeDocumentToPdf_Params);
      this.compositeDocumentToPdf(params.frameGuid, params.skHandle, params.subframeContentInfo).then(function(response) {
        var responseParams =
            new PdfCompositor_CompositeDocumentToPdf_ResponseParams();
        responseParams.status = response.status;
        responseParams.pdfRegion = response.pdfRegion;
        var builder = new codec.MessageV1Builder(
            kPdfCompositor_CompositeDocumentToPdf_Name,
            codec.align(PdfCompositor_CompositeDocumentToPdf_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PdfCompositor_CompositeDocumentToPdf_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePdfCompositorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPdfCompositor_NotifyUnavailableSubframe_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfCompositor_NotifyUnavailableSubframe_Params;
      break;
      case kPdfCompositor_AddSubframeContent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfCompositor_AddSubframeContent_Params;
      break;
      case kPdfCompositor_CompositePageToPdf_Name:
        if (message.expectsResponse())
          paramsClass = PdfCompositor_CompositePageToPdf_Params;
      break;
      case kPdfCompositor_CompositeDocumentToPdf_Name:
        if (message.expectsResponse())
          paramsClass = PdfCompositor_CompositeDocumentToPdf_Params;
      break;
      case kPdfCompositor_SetWebContentsURL_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PdfCompositor_SetWebContentsURL_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePdfCompositorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPdfCompositor_CompositePageToPdf_Name:
        if (message.isResponse())
          paramsClass = PdfCompositor_CompositePageToPdf_ResponseParams;
        break;
      case kPdfCompositor_CompositeDocumentToPdf_Name:
        if (message.isResponse())
          paramsClass = PdfCompositor_CompositeDocumentToPdf_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PdfCompositor = {
    name: 'printing.mojom.PdfCompositor',
    kVersion: 0,
    ptrClass: PdfCompositorPtr,
    proxyClass: PdfCompositorProxy,
    stubClass: PdfCompositorStub,
    validateRequest: validatePdfCompositorRequest,
    validateResponse: validatePdfCompositorResponse,
    mojomId: 'components/services/pdf_compositor/public/interfaces/pdf_compositor.mojom',
    fuzzMethods: {
      notifyUnavailableSubframe: {
        params: PdfCompositor_NotifyUnavailableSubframe_Params,
      },
      addSubframeContent: {
        params: PdfCompositor_AddSubframeContent_Params,
      },
      compositePageToPdf: {
        params: PdfCompositor_CompositePageToPdf_Params,
      },
      compositeDocumentToPdf: {
        params: PdfCompositor_CompositeDocumentToPdf_Params,
      },
      setWebContentsURL: {
        params: PdfCompositor_SetWebContentsURL_Params,
      },
    },
  };
  PdfCompositor.Status = {};
  PdfCompositor.Status.SUCCESS = 0;
  PdfCompositor.Status.HANDLE_MAP_ERROR = 1;
  PdfCompositor.Status.CONTENT_FORMAT_ERROR = 2;
  PdfCompositor.Status.COMPOSTING_FAILURE = 3;

  PdfCompositor.Status.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  PdfCompositor.Status.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  PdfCompositorStub.prototype.validator = validatePdfCompositorRequest;
  PdfCompositorProxy.prototype.validator = validatePdfCompositorResponse;
  exports.kServiceName = kServiceName;
  exports.PdfCompositor = PdfCompositor;
  exports.PdfCompositorPtr = PdfCompositorPtr;
  exports.PdfCompositorAssociatedPtr = PdfCompositorAssociatedPtr;
})();