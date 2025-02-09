// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/prerender.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function PrerenderCanceler_CancelPrerenderForPrinting_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderCanceler_CancelPrerenderForPrinting_Params.prototype.initDefaults_ = function() {
  };
  PrerenderCanceler_CancelPrerenderForPrinting_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderCanceler_CancelPrerenderForPrinting_Params.generate = function(generator_) {
    var generated = new PrerenderCanceler_CancelPrerenderForPrinting_Params;
    return generated;
  };

  PrerenderCanceler_CancelPrerenderForPrinting_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PrerenderCanceler_CancelPrerenderForPrinting_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderCanceler_CancelPrerenderForPrinting_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderCanceler_CancelPrerenderForPrinting_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderCanceler_CancelPrerenderForPrinting_Params.validate = function(messageValidator, offset) {
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

  PrerenderCanceler_CancelPrerenderForPrinting_Params.encodedSize = codec.kStructHeaderSize + 0;

  PrerenderCanceler_CancelPrerenderForPrinting_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderCanceler_CancelPrerenderForPrinting_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PrerenderCanceler_CancelPrerenderForPrinting_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderCanceler_CancelPrerenderForPrinting_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.prototype.initDefaults_ = function() {
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.generate = function(generator_) {
    var generated = new PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params;
    return generated;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.validate = function(messageValidator, offset) {
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

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.encodedSize = codec.kStructHeaderSize + 0;

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.generate = function(generator_) {
    var generated = new PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.validate = function(messageValidator, offset) {
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


    // validate PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.prototype.initDefaults_ = function() {
  };
  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.generate = function(generator_) {
    var generated = new PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params;
    return generated;
  };

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.validate = function(messageValidator, offset) {
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

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.encodedSize = codec.kStructHeaderSize + 0;

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PrerenderDispatcher_PrerenderStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderDispatcher_PrerenderStart_Params.prototype.initDefaults_ = function() {
    this.prerenderId = 0;
  };
  PrerenderDispatcher_PrerenderStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderDispatcher_PrerenderStart_Params.generate = function(generator_) {
    var generated = new PrerenderDispatcher_PrerenderStart_Params;
    generated.prerenderId = generator_.generateInt32();
    return generated;
  };

  PrerenderDispatcher_PrerenderStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prerenderId = mutator_.mutateInt32(this.prerenderId);
    }
    return this;
  };
  PrerenderDispatcher_PrerenderStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderDispatcher_PrerenderStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderDispatcher_PrerenderStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderDispatcher_PrerenderStart_Params.validate = function(messageValidator, offset) {
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

  PrerenderDispatcher_PrerenderStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderDispatcher_PrerenderStart_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderDispatcher_PrerenderStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prerenderId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrerenderDispatcher_PrerenderStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderDispatcher_PrerenderStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.prerenderId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PrerenderDispatcher_PrerenderStopLoading_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderDispatcher_PrerenderStopLoading_Params.prototype.initDefaults_ = function() {
    this.prerenderId = 0;
  };
  PrerenderDispatcher_PrerenderStopLoading_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderDispatcher_PrerenderStopLoading_Params.generate = function(generator_) {
    var generated = new PrerenderDispatcher_PrerenderStopLoading_Params;
    generated.prerenderId = generator_.generateInt32();
    return generated;
  };

  PrerenderDispatcher_PrerenderStopLoading_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prerenderId = mutator_.mutateInt32(this.prerenderId);
    }
    return this;
  };
  PrerenderDispatcher_PrerenderStopLoading_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderDispatcher_PrerenderStopLoading_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderDispatcher_PrerenderStopLoading_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderDispatcher_PrerenderStopLoading_Params.validate = function(messageValidator, offset) {
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

  PrerenderDispatcher_PrerenderStopLoading_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderDispatcher_PrerenderStopLoading_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderDispatcher_PrerenderStopLoading_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prerenderId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrerenderDispatcher_PrerenderStopLoading_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderDispatcher_PrerenderStopLoading_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.prerenderId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PrerenderDispatcher_PrerenderDomContentLoaded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderDispatcher_PrerenderDomContentLoaded_Params.prototype.initDefaults_ = function() {
    this.prerenderId = 0;
  };
  PrerenderDispatcher_PrerenderDomContentLoaded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderDispatcher_PrerenderDomContentLoaded_Params.generate = function(generator_) {
    var generated = new PrerenderDispatcher_PrerenderDomContentLoaded_Params;
    generated.prerenderId = generator_.generateInt32();
    return generated;
  };

  PrerenderDispatcher_PrerenderDomContentLoaded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prerenderId = mutator_.mutateInt32(this.prerenderId);
    }
    return this;
  };
  PrerenderDispatcher_PrerenderDomContentLoaded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderDispatcher_PrerenderDomContentLoaded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderDispatcher_PrerenderDomContentLoaded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderDispatcher_PrerenderDomContentLoaded_Params.validate = function(messageValidator, offset) {
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

  PrerenderDispatcher_PrerenderDomContentLoaded_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderDispatcher_PrerenderDomContentLoaded_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderDispatcher_PrerenderDomContentLoaded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prerenderId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrerenderDispatcher_PrerenderDomContentLoaded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderDispatcher_PrerenderDomContentLoaded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.prerenderId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PrerenderDispatcher_PrerenderAddAlias_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderDispatcher_PrerenderAddAlias_Params.prototype.initDefaults_ = function() {
    this.alias = null;
  };
  PrerenderDispatcher_PrerenderAddAlias_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderDispatcher_PrerenderAddAlias_Params.generate = function(generator_) {
    var generated = new PrerenderDispatcher_PrerenderAddAlias_Params;
    generated.alias = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PrerenderDispatcher_PrerenderAddAlias_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.alias = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PrerenderDispatcher_PrerenderAddAlias_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderDispatcher_PrerenderAddAlias_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderDispatcher_PrerenderAddAlias_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderDispatcher_PrerenderAddAlias_Params.validate = function(messageValidator, offset) {
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


    // validate PrerenderDispatcher_PrerenderAddAlias_Params.alias
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrerenderDispatcher_PrerenderAddAlias_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderDispatcher_PrerenderAddAlias_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderDispatcher_PrerenderAddAlias_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.alias = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PrerenderDispatcher_PrerenderAddAlias_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderDispatcher_PrerenderAddAlias_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.alias);
  };
  function PrerenderDispatcher_PrerenderRemoveAliases_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderDispatcher_PrerenderRemoveAliases_Params.prototype.initDefaults_ = function() {
    this.aliases = null;
  };
  PrerenderDispatcher_PrerenderRemoveAliases_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderDispatcher_PrerenderRemoveAliases_Params.generate = function(generator_) {
    var generated = new PrerenderDispatcher_PrerenderRemoveAliases_Params;
    generated.aliases = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Url, false);
    });
    return generated;
  };

  PrerenderDispatcher_PrerenderRemoveAliases_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.aliases = mutator_.mutateArray(this.aliases, function(val) {
        return mutator_.mutateStruct(url.mojom.Url, false);
      });
    }
    return this;
  };
  PrerenderDispatcher_PrerenderRemoveAliases_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderDispatcher_PrerenderRemoveAliases_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderDispatcher_PrerenderRemoveAliases_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderDispatcher_PrerenderRemoveAliases_Params.validate = function(messageValidator, offset) {
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


    // validate PrerenderDispatcher_PrerenderRemoveAliases_Params.aliases
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrerenderDispatcher_PrerenderRemoveAliases_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderDispatcher_PrerenderRemoveAliases_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderDispatcher_PrerenderRemoveAliases_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.aliases = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    return val;
  };

  PrerenderDispatcher_PrerenderRemoveAliases_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderDispatcher_PrerenderRemoveAliases_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.aliases);
  };
  function PrerenderDispatcher_PrerenderStop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrerenderDispatcher_PrerenderStop_Params.prototype.initDefaults_ = function() {
    this.prerenderId = 0;
  };
  PrerenderDispatcher_PrerenderStop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrerenderDispatcher_PrerenderStop_Params.generate = function(generator_) {
    var generated = new PrerenderDispatcher_PrerenderStop_Params;
    generated.prerenderId = generator_.generateInt32();
    return generated;
  };

  PrerenderDispatcher_PrerenderStop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prerenderId = mutator_.mutateInt32(this.prerenderId);
    }
    return this;
  };
  PrerenderDispatcher_PrerenderStop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrerenderDispatcher_PrerenderStop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrerenderDispatcher_PrerenderStop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrerenderDispatcher_PrerenderStop_Params.validate = function(messageValidator, offset) {
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

  PrerenderDispatcher_PrerenderStop_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrerenderDispatcher_PrerenderStop_Params.decode = function(decoder) {
    var packed;
    var val = new PrerenderDispatcher_PrerenderStop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prerenderId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrerenderDispatcher_PrerenderStop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrerenderDispatcher_PrerenderStop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.prerenderId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPrerenderCanceler_CancelPrerenderForPrinting_Name = 63631421;
  var kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name = 1216691590;
  var kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name = 52798314;
  var kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name = 1005179227;

  function PrerenderCancelerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PrerenderCanceler,
                                                   handleOrPtrInfo);
  }

  function PrerenderCancelerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PrerenderCanceler, associatedInterfacePtrInfo);
  }

  PrerenderCancelerAssociatedPtr.prototype =
      Object.create(PrerenderCancelerPtr.prototype);
  PrerenderCancelerAssociatedPtr.prototype.constructor =
      PrerenderCancelerAssociatedPtr;

  function PrerenderCancelerProxy(receiver) {
    this.receiver_ = receiver;
  }
  PrerenderCancelerPtr.prototype.cancelPrerenderForPrinting = function() {
    return PrerenderCancelerProxy.prototype.cancelPrerenderForPrinting
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderCancelerProxy.prototype.cancelPrerenderForPrinting = function() {
    var params_ = new PrerenderCanceler_CancelPrerenderForPrinting_Params();
    var builder = new codec.MessageV0Builder(
        kPrerenderCanceler_CancelPrerenderForPrinting_Name,
        codec.align(PrerenderCanceler_CancelPrerenderForPrinting_Params.encodedSize));
    builder.encodeStruct(PrerenderCanceler_CancelPrerenderForPrinting_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderCancelerPtr.prototype.cancelPrerenderForUnsupportedMethod = function() {
    return PrerenderCancelerProxy.prototype.cancelPrerenderForUnsupportedMethod
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderCancelerProxy.prototype.cancelPrerenderForUnsupportedMethod = function() {
    var params_ = new PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params();
    var builder = new codec.MessageV0Builder(
        kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name,
        codec.align(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params.encodedSize));
    builder.encodeStruct(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderCancelerPtr.prototype.cancelPrerenderForUnsupportedScheme = function() {
    return PrerenderCancelerProxy.prototype.cancelPrerenderForUnsupportedScheme
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderCancelerProxy.prototype.cancelPrerenderForUnsupportedScheme = function(url) {
    var params_ = new PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name,
        codec.align(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params.encodedSize));
    builder.encodeStruct(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderCancelerPtr.prototype.cancelPrerenderForSyncDeferredRedirect = function() {
    return PrerenderCancelerProxy.prototype.cancelPrerenderForSyncDeferredRedirect
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderCancelerProxy.prototype.cancelPrerenderForSyncDeferredRedirect = function() {
    var params_ = new PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params();
    var builder = new codec.MessageV0Builder(
        kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name,
        codec.align(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params.encodedSize));
    builder.encodeStruct(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PrerenderCancelerStub(delegate) {
    this.delegate_ = delegate;
  }
  PrerenderCancelerStub.prototype.cancelPrerenderForPrinting = function() {
    return this.delegate_ && this.delegate_.cancelPrerenderForPrinting && this.delegate_.cancelPrerenderForPrinting();
  }
  PrerenderCancelerStub.prototype.cancelPrerenderForUnsupportedMethod = function() {
    return this.delegate_ && this.delegate_.cancelPrerenderForUnsupportedMethod && this.delegate_.cancelPrerenderForUnsupportedMethod();
  }
  PrerenderCancelerStub.prototype.cancelPrerenderForUnsupportedScheme = function(url) {
    return this.delegate_ && this.delegate_.cancelPrerenderForUnsupportedScheme && this.delegate_.cancelPrerenderForUnsupportedScheme(url);
  }
  PrerenderCancelerStub.prototype.cancelPrerenderForSyncDeferredRedirect = function() {
    return this.delegate_ && this.delegate_.cancelPrerenderForSyncDeferredRedirect && this.delegate_.cancelPrerenderForSyncDeferredRedirect();
  }

  PrerenderCancelerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPrerenderCanceler_CancelPrerenderForPrinting_Name:
      var params = reader.decodeStruct(PrerenderCanceler_CancelPrerenderForPrinting_Params);
      this.cancelPrerenderForPrinting();
      return true;
    case kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name:
      var params = reader.decodeStruct(PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params);
      this.cancelPrerenderForUnsupportedMethod();
      return true;
    case kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name:
      var params = reader.decodeStruct(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params);
      this.cancelPrerenderForUnsupportedScheme(params.url);
      return true;
    case kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name:
      var params = reader.decodeStruct(PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params);
      this.cancelPrerenderForSyncDeferredRedirect();
      return true;
    default:
      return false;
    }
  };

  PrerenderCancelerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePrerenderCancelerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPrerenderCanceler_CancelPrerenderForPrinting_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderCanceler_CancelPrerenderForPrinting_Params;
      break;
      case kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params;
      break;
      case kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params;
      break;
      case kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePrerenderCancelerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PrerenderCanceler = {
    name: 'chrome.mojom.PrerenderCanceler',
    kVersion: 0,
    ptrClass: PrerenderCancelerPtr,
    proxyClass: PrerenderCancelerProxy,
    stubClass: PrerenderCancelerStub,
    validateRequest: validatePrerenderCancelerRequest,
    validateResponse: null,
    mojomId: 'chrome/common/prerender.mojom',
    fuzzMethods: {
      cancelPrerenderForPrinting: {
        params: PrerenderCanceler_CancelPrerenderForPrinting_Params,
      },
      cancelPrerenderForUnsupportedMethod: {
        params: PrerenderCanceler_CancelPrerenderForUnsupportedMethod_Params,
      },
      cancelPrerenderForUnsupportedScheme: {
        params: PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params,
      },
      cancelPrerenderForSyncDeferredRedirect: {
        params: PrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Params,
      },
    },
  };
  PrerenderCancelerStub.prototype.validator = validatePrerenderCancelerRequest;
  PrerenderCancelerProxy.prototype.validator = null;
  var kPrerenderDispatcher_PrerenderStart_Name = 684857254;
  var kPrerenderDispatcher_PrerenderStopLoading_Name = 723978957;
  var kPrerenderDispatcher_PrerenderDomContentLoaded_Name = 1945066323;
  var kPrerenderDispatcher_PrerenderAddAlias_Name = 30442468;
  var kPrerenderDispatcher_PrerenderRemoveAliases_Name = 1011428126;
  var kPrerenderDispatcher_PrerenderStop_Name = 995694911;

  function PrerenderDispatcherPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PrerenderDispatcher,
                                                   handleOrPtrInfo);
  }

  function PrerenderDispatcherAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PrerenderDispatcher, associatedInterfacePtrInfo);
  }

  PrerenderDispatcherAssociatedPtr.prototype =
      Object.create(PrerenderDispatcherPtr.prototype);
  PrerenderDispatcherAssociatedPtr.prototype.constructor =
      PrerenderDispatcherAssociatedPtr;

  function PrerenderDispatcherProxy(receiver) {
    this.receiver_ = receiver;
  }
  PrerenderDispatcherPtr.prototype.prerenderStart = function() {
    return PrerenderDispatcherProxy.prototype.prerenderStart
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderDispatcherProxy.prototype.prerenderStart = function(prerenderId) {
    var params_ = new PrerenderDispatcher_PrerenderStart_Params();
    params_.prerenderId = prerenderId;
    var builder = new codec.MessageV0Builder(
        kPrerenderDispatcher_PrerenderStart_Name,
        codec.align(PrerenderDispatcher_PrerenderStart_Params.encodedSize));
    builder.encodeStruct(PrerenderDispatcher_PrerenderStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderDispatcherPtr.prototype.prerenderStopLoading = function() {
    return PrerenderDispatcherProxy.prototype.prerenderStopLoading
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderDispatcherProxy.prototype.prerenderStopLoading = function(prerenderId) {
    var params_ = new PrerenderDispatcher_PrerenderStopLoading_Params();
    params_.prerenderId = prerenderId;
    var builder = new codec.MessageV0Builder(
        kPrerenderDispatcher_PrerenderStopLoading_Name,
        codec.align(PrerenderDispatcher_PrerenderStopLoading_Params.encodedSize));
    builder.encodeStruct(PrerenderDispatcher_PrerenderStopLoading_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderDispatcherPtr.prototype.prerenderDomContentLoaded = function() {
    return PrerenderDispatcherProxy.prototype.prerenderDomContentLoaded
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderDispatcherProxy.prototype.prerenderDomContentLoaded = function(prerenderId) {
    var params_ = new PrerenderDispatcher_PrerenderDomContentLoaded_Params();
    params_.prerenderId = prerenderId;
    var builder = new codec.MessageV0Builder(
        kPrerenderDispatcher_PrerenderDomContentLoaded_Name,
        codec.align(PrerenderDispatcher_PrerenderDomContentLoaded_Params.encodedSize));
    builder.encodeStruct(PrerenderDispatcher_PrerenderDomContentLoaded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderDispatcherPtr.prototype.prerenderAddAlias = function() {
    return PrerenderDispatcherProxy.prototype.prerenderAddAlias
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderDispatcherProxy.prototype.prerenderAddAlias = function(alias) {
    var params_ = new PrerenderDispatcher_PrerenderAddAlias_Params();
    params_.alias = alias;
    var builder = new codec.MessageV0Builder(
        kPrerenderDispatcher_PrerenderAddAlias_Name,
        codec.align(PrerenderDispatcher_PrerenderAddAlias_Params.encodedSize));
    builder.encodeStruct(PrerenderDispatcher_PrerenderAddAlias_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderDispatcherPtr.prototype.prerenderRemoveAliases = function() {
    return PrerenderDispatcherProxy.prototype.prerenderRemoveAliases
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderDispatcherProxy.prototype.prerenderRemoveAliases = function(aliases) {
    var params_ = new PrerenderDispatcher_PrerenderRemoveAliases_Params();
    params_.aliases = aliases;
    var builder = new codec.MessageV0Builder(
        kPrerenderDispatcher_PrerenderRemoveAliases_Name,
        codec.align(PrerenderDispatcher_PrerenderRemoveAliases_Params.encodedSize));
    builder.encodeStruct(PrerenderDispatcher_PrerenderRemoveAliases_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrerenderDispatcherPtr.prototype.prerenderStop = function() {
    return PrerenderDispatcherProxy.prototype.prerenderStop
        .apply(this.ptr.getProxy(), arguments);
  };

  PrerenderDispatcherProxy.prototype.prerenderStop = function(prerenderId) {
    var params_ = new PrerenderDispatcher_PrerenderStop_Params();
    params_.prerenderId = prerenderId;
    var builder = new codec.MessageV0Builder(
        kPrerenderDispatcher_PrerenderStop_Name,
        codec.align(PrerenderDispatcher_PrerenderStop_Params.encodedSize));
    builder.encodeStruct(PrerenderDispatcher_PrerenderStop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PrerenderDispatcherStub(delegate) {
    this.delegate_ = delegate;
  }
  PrerenderDispatcherStub.prototype.prerenderStart = function(prerenderId) {
    return this.delegate_ && this.delegate_.prerenderStart && this.delegate_.prerenderStart(prerenderId);
  }
  PrerenderDispatcherStub.prototype.prerenderStopLoading = function(prerenderId) {
    return this.delegate_ && this.delegate_.prerenderStopLoading && this.delegate_.prerenderStopLoading(prerenderId);
  }
  PrerenderDispatcherStub.prototype.prerenderDomContentLoaded = function(prerenderId) {
    return this.delegate_ && this.delegate_.prerenderDomContentLoaded && this.delegate_.prerenderDomContentLoaded(prerenderId);
  }
  PrerenderDispatcherStub.prototype.prerenderAddAlias = function(alias) {
    return this.delegate_ && this.delegate_.prerenderAddAlias && this.delegate_.prerenderAddAlias(alias);
  }
  PrerenderDispatcherStub.prototype.prerenderRemoveAliases = function(aliases) {
    return this.delegate_ && this.delegate_.prerenderRemoveAliases && this.delegate_.prerenderRemoveAliases(aliases);
  }
  PrerenderDispatcherStub.prototype.prerenderStop = function(prerenderId) {
    return this.delegate_ && this.delegate_.prerenderStop && this.delegate_.prerenderStop(prerenderId);
  }

  PrerenderDispatcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPrerenderDispatcher_PrerenderStart_Name:
      var params = reader.decodeStruct(PrerenderDispatcher_PrerenderStart_Params);
      this.prerenderStart(params.prerenderId);
      return true;
    case kPrerenderDispatcher_PrerenderStopLoading_Name:
      var params = reader.decodeStruct(PrerenderDispatcher_PrerenderStopLoading_Params);
      this.prerenderStopLoading(params.prerenderId);
      return true;
    case kPrerenderDispatcher_PrerenderDomContentLoaded_Name:
      var params = reader.decodeStruct(PrerenderDispatcher_PrerenderDomContentLoaded_Params);
      this.prerenderDomContentLoaded(params.prerenderId);
      return true;
    case kPrerenderDispatcher_PrerenderAddAlias_Name:
      var params = reader.decodeStruct(PrerenderDispatcher_PrerenderAddAlias_Params);
      this.prerenderAddAlias(params.alias);
      return true;
    case kPrerenderDispatcher_PrerenderRemoveAliases_Name:
      var params = reader.decodeStruct(PrerenderDispatcher_PrerenderRemoveAliases_Params);
      this.prerenderRemoveAliases(params.aliases);
      return true;
    case kPrerenderDispatcher_PrerenderStop_Name:
      var params = reader.decodeStruct(PrerenderDispatcher_PrerenderStop_Params);
      this.prerenderStop(params.prerenderId);
      return true;
    default:
      return false;
    }
  };

  PrerenderDispatcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePrerenderDispatcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPrerenderDispatcher_PrerenderStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderDispatcher_PrerenderStart_Params;
      break;
      case kPrerenderDispatcher_PrerenderStopLoading_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderDispatcher_PrerenderStopLoading_Params;
      break;
      case kPrerenderDispatcher_PrerenderDomContentLoaded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderDispatcher_PrerenderDomContentLoaded_Params;
      break;
      case kPrerenderDispatcher_PrerenderAddAlias_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderDispatcher_PrerenderAddAlias_Params;
      break;
      case kPrerenderDispatcher_PrerenderRemoveAliases_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderDispatcher_PrerenderRemoveAliases_Params;
      break;
      case kPrerenderDispatcher_PrerenderStop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrerenderDispatcher_PrerenderStop_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePrerenderDispatcherResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PrerenderDispatcher = {
    name: 'chrome.mojom.PrerenderDispatcher',
    kVersion: 0,
    ptrClass: PrerenderDispatcherPtr,
    proxyClass: PrerenderDispatcherProxy,
    stubClass: PrerenderDispatcherStub,
    validateRequest: validatePrerenderDispatcherRequest,
    validateResponse: null,
    mojomId: 'chrome/common/prerender.mojom',
    fuzzMethods: {
      prerenderStart: {
        params: PrerenderDispatcher_PrerenderStart_Params,
      },
      prerenderStopLoading: {
        params: PrerenderDispatcher_PrerenderStopLoading_Params,
      },
      prerenderDomContentLoaded: {
        params: PrerenderDispatcher_PrerenderDomContentLoaded_Params,
      },
      prerenderAddAlias: {
        params: PrerenderDispatcher_PrerenderAddAlias_Params,
      },
      prerenderRemoveAliases: {
        params: PrerenderDispatcher_PrerenderRemoveAliases_Params,
      },
      prerenderStop: {
        params: PrerenderDispatcher_PrerenderStop_Params,
      },
    },
  };
  PrerenderDispatcherStub.prototype.validator = validatePrerenderDispatcherRequest;
  PrerenderDispatcherProxy.prototype.validator = null;
  exports.PrerenderCanceler = PrerenderCanceler;
  exports.PrerenderCancelerPtr = PrerenderCancelerPtr;
  exports.PrerenderCancelerAssociatedPtr = PrerenderCancelerAssociatedPtr;
  exports.PrerenderDispatcher = PrerenderDispatcher;
  exports.PrerenderDispatcherPtr = PrerenderDispatcherPtr;
  exports.PrerenderDispatcherAssociatedPtr = PrerenderDispatcherAssociatedPtr;
})();