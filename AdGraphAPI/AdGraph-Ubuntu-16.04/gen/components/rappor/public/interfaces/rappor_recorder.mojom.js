// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/rappor/public/interfaces/rappor_recorder.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('rappor.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }



  function RapporRecorder_RecordRappor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RapporRecorder_RecordRappor_Params.prototype.initDefaults_ = function() {
    this.metric = null;
    this.sample = null;
  };
  RapporRecorder_RecordRappor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RapporRecorder_RecordRappor_Params.generate = function(generator_) {
    var generated = new RapporRecorder_RecordRappor_Params;
    generated.metric = generator_.generateString(false);
    generated.sample = generator_.generateString(false);
    return generated;
  };

  RapporRecorder_RecordRappor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metric = mutator_.mutateString(this.metric, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sample = mutator_.mutateString(this.sample, false);
    }
    return this;
  };
  RapporRecorder_RecordRappor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RapporRecorder_RecordRappor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RapporRecorder_RecordRappor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RapporRecorder_RecordRappor_Params.validate = function(messageValidator, offset) {
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


    // validate RapporRecorder_RecordRappor_Params.metric
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RapporRecorder_RecordRappor_Params.sample
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RapporRecorder_RecordRappor_Params.encodedSize = codec.kStructHeaderSize + 16;

  RapporRecorder_RecordRappor_Params.decode = function(decoder) {
    var packed;
    var val = new RapporRecorder_RecordRappor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metric = decoder.decodeStruct(codec.String);
    val.sample = decoder.decodeStruct(codec.String);
    return val;
  };

  RapporRecorder_RecordRappor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RapporRecorder_RecordRappor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.metric);
    encoder.encodeStruct(codec.String, val.sample);
  };
  function RapporRecorder_RecordRapporURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RapporRecorder_RecordRapporURL_Params.prototype.initDefaults_ = function() {
    this.metric = null;
    this.url = null;
  };
  RapporRecorder_RecordRapporURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RapporRecorder_RecordRapporURL_Params.generate = function(generator_) {
    var generated = new RapporRecorder_RecordRapporURL_Params;
    generated.metric = generator_.generateString(false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  RapporRecorder_RecordRapporURL_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.metric = mutator_.mutateString(this.metric, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  RapporRecorder_RecordRapporURL_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RapporRecorder_RecordRapporURL_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RapporRecorder_RecordRapporURL_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RapporRecorder_RecordRapporURL_Params.validate = function(messageValidator, offset) {
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


    // validate RapporRecorder_RecordRapporURL_Params.metric
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RapporRecorder_RecordRapporURL_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RapporRecorder_RecordRapporURL_Params.encodedSize = codec.kStructHeaderSize + 16;

  RapporRecorder_RecordRapporURL_Params.decode = function(decoder) {
    var packed;
    var val = new RapporRecorder_RecordRapporURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metric = decoder.decodeStruct(codec.String);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  RapporRecorder_RecordRapporURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RapporRecorder_RecordRapporURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.metric);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  var kRapporRecorder_RecordRappor_Name = 1394229440;
  var kRapporRecorder_RecordRapporURL_Name = 464809086;

  function RapporRecorderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RapporRecorder,
                                                   handleOrPtrInfo);
  }

  function RapporRecorderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RapporRecorder, associatedInterfacePtrInfo);
  }

  RapporRecorderAssociatedPtr.prototype =
      Object.create(RapporRecorderPtr.prototype);
  RapporRecorderAssociatedPtr.prototype.constructor =
      RapporRecorderAssociatedPtr;

  function RapporRecorderProxy(receiver) {
    this.receiver_ = receiver;
  }
  RapporRecorderPtr.prototype.recordRappor = function() {
    return RapporRecorderProxy.prototype.recordRappor
        .apply(this.ptr.getProxy(), arguments);
  };

  RapporRecorderProxy.prototype.recordRappor = function(metric, sample) {
    var params_ = new RapporRecorder_RecordRappor_Params();
    params_.metric = metric;
    params_.sample = sample;
    var builder = new codec.MessageV0Builder(
        kRapporRecorder_RecordRappor_Name,
        codec.align(RapporRecorder_RecordRappor_Params.encodedSize));
    builder.encodeStruct(RapporRecorder_RecordRappor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RapporRecorderPtr.prototype.recordRapporURL = function() {
    return RapporRecorderProxy.prototype.recordRapporURL
        .apply(this.ptr.getProxy(), arguments);
  };

  RapporRecorderProxy.prototype.recordRapporURL = function(metric, url) {
    var params_ = new RapporRecorder_RecordRapporURL_Params();
    params_.metric = metric;
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kRapporRecorder_RecordRapporURL_Name,
        codec.align(RapporRecorder_RecordRapporURL_Params.encodedSize));
    builder.encodeStruct(RapporRecorder_RecordRapporURL_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RapporRecorderStub(delegate) {
    this.delegate_ = delegate;
  }
  RapporRecorderStub.prototype.recordRappor = function(metric, sample) {
    return this.delegate_ && this.delegate_.recordRappor && this.delegate_.recordRappor(metric, sample);
  }
  RapporRecorderStub.prototype.recordRapporURL = function(metric, url) {
    return this.delegate_ && this.delegate_.recordRapporURL && this.delegate_.recordRapporURL(metric, url);
  }

  RapporRecorderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRapporRecorder_RecordRappor_Name:
      var params = reader.decodeStruct(RapporRecorder_RecordRappor_Params);
      this.recordRappor(params.metric, params.sample);
      return true;
    case kRapporRecorder_RecordRapporURL_Name:
      var params = reader.decodeStruct(RapporRecorder_RecordRapporURL_Params);
      this.recordRapporURL(params.metric, params.url);
      return true;
    default:
      return false;
    }
  };

  RapporRecorderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRapporRecorderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRapporRecorder_RecordRappor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RapporRecorder_RecordRappor_Params;
      break;
      case kRapporRecorder_RecordRapporURL_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RapporRecorder_RecordRapporURL_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRapporRecorderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RapporRecorder = {
    name: 'rappor.mojom.RapporRecorder',
    kVersion: 0,
    ptrClass: RapporRecorderPtr,
    proxyClass: RapporRecorderProxy,
    stubClass: RapporRecorderStub,
    validateRequest: validateRapporRecorderRequest,
    validateResponse: null,
    mojomId: 'components/rappor/public/interfaces/rappor_recorder.mojom',
    fuzzMethods: {
      recordRappor: {
        params: RapporRecorder_RecordRappor_Params,
      },
      recordRapporURL: {
        params: RapporRecorder_RecordRapporURL_Params,
      },
    },
  };
  RapporRecorderStub.prototype.validator = validateRapporRecorderRequest;
  RapporRecorderProxy.prototype.validator = null;
  exports.RapporRecorder = RapporRecorder;
  exports.RapporRecorderPtr = RapporRecorderPtr;
  exports.RapporRecorderAssociatedPtr = RapporRecorderAssociatedPtr;
})();