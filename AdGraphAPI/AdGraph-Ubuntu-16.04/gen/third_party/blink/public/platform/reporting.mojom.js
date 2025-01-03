// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/reporting.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }



  function ReportingServiceProxy_QueueInterventionReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReportingServiceProxy_QueueInterventionReport_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.message = null;
    this.sourceFile = null;
    this.lineNumber = 0;
    this.columnNumber = 0;
  };
  ReportingServiceProxy_QueueInterventionReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ReportingServiceProxy_QueueInterventionReport_Params.generate = function(generator_) {
    var generated = new ReportingServiceProxy_QueueInterventionReport_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.message = generator_.generateString(false);
    generated.sourceFile = generator_.generateString(false);
    generated.lineNumber = generator_.generateInt32();
    generated.columnNumber = generator_.generateInt32();
    return generated;
  };

  ReportingServiceProxy_QueueInterventionReport_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceFile = mutator_.mutateString(this.sourceFile, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.columnNumber = mutator_.mutateInt32(this.columnNumber);
    }
    return this;
  };
  ReportingServiceProxy_QueueInterventionReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ReportingServiceProxy_QueueInterventionReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ReportingServiceProxy_QueueInterventionReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ReportingServiceProxy_QueueInterventionReport_Params.validate = function(messageValidator, offset) {
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


    // validate ReportingServiceProxy_QueueInterventionReport_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueInterventionReport_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueInterventionReport_Params.sourceFile
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ReportingServiceProxy_QueueInterventionReport_Params.encodedSize = codec.kStructHeaderSize + 32;

  ReportingServiceProxy_QueueInterventionReport_Params.decode = function(decoder) {
    var packed;
    var val = new ReportingServiceProxy_QueueInterventionReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.message = decoder.decodeStruct(codec.String);
    val.sourceFile = decoder.decodeStruct(codec.String);
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    val.columnNumber = decoder.decodeStruct(codec.Int32);
    return val;
  };

  ReportingServiceProxy_QueueInterventionReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReportingServiceProxy_QueueInterventionReport_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.message);
    encoder.encodeStruct(codec.String, val.sourceFile);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.encodeStruct(codec.Int32, val.columnNumber);
  };
  function ReportingServiceProxy_QueueDeprecationReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReportingServiceProxy_QueueDeprecationReport_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.id = null;
    this.anticipatedRemoval = null;
    this.message = null;
    this.sourceFile = null;
    this.lineNumber = 0;
    this.columnNumber = 0;
  };
  ReportingServiceProxy_QueueDeprecationReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ReportingServiceProxy_QueueDeprecationReport_Params.generate = function(generator_) {
    var generated = new ReportingServiceProxy_QueueDeprecationReport_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.id = generator_.generateString(false);
    generated.anticipatedRemoval = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.message = generator_.generateString(false);
    generated.sourceFile = generator_.generateString(false);
    generated.lineNumber = generator_.generateInt32();
    generated.columnNumber = generator_.generateInt32();
    return generated;
  };

  ReportingServiceProxy_QueueDeprecationReport_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.anticipatedRemoval = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceFile = mutator_.mutateString(this.sourceFile, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.columnNumber = mutator_.mutateInt32(this.columnNumber);
    }
    return this;
  };
  ReportingServiceProxy_QueueDeprecationReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ReportingServiceProxy_QueueDeprecationReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ReportingServiceProxy_QueueDeprecationReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ReportingServiceProxy_QueueDeprecationReport_Params.validate = function(messageValidator, offset) {
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


    // validate ReportingServiceProxy_QueueDeprecationReport_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueDeprecationReport_Params.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueDeprecationReport_Params.anticipatedRemoval
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueDeprecationReport_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueDeprecationReport_Params.sourceFile
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ReportingServiceProxy_QueueDeprecationReport_Params.encodedSize = codec.kStructHeaderSize + 48;

  ReportingServiceProxy_QueueDeprecationReport_Params.decode = function(decoder) {
    var packed;
    var val = new ReportingServiceProxy_QueueDeprecationReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.id = decoder.decodeStruct(codec.String);
    val.anticipatedRemoval = decoder.decodeStructPointer(time$.Time);
    val.message = decoder.decodeStruct(codec.String);
    val.sourceFile = decoder.decodeStruct(codec.String);
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    val.columnNumber = decoder.decodeStruct(codec.Int32);
    return val;
  };

  ReportingServiceProxy_QueueDeprecationReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReportingServiceProxy_QueueDeprecationReport_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStructPointer(time$.Time, val.anticipatedRemoval);
    encoder.encodeStruct(codec.String, val.message);
    encoder.encodeStruct(codec.String, val.sourceFile);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.encodeStruct(codec.Int32, val.columnNumber);
  };
  function ReportingServiceProxy_QueueCspViolationReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReportingServiceProxy_QueueCspViolationReport_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.group = null;
    this.documentUri = null;
    this.referrer = null;
    this.violatedDirective = null;
    this.effectiveDirective = null;
    this.originalPolicy = null;
    this.disposition = null;
    this.blockedUri = null;
    this.lineNumber = 0;
    this.columnNumber = 0;
    this.sourceFile = null;
    this.statusCode = 0;
    this.scriptSample = null;
  };
  ReportingServiceProxy_QueueCspViolationReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ReportingServiceProxy_QueueCspViolationReport_Params.generate = function(generator_) {
    var generated = new ReportingServiceProxy_QueueCspViolationReport_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.group = generator_.generateString(false);
    generated.documentUri = generator_.generateString(false);
    generated.referrer = generator_.generateString(false);
    generated.violatedDirective = generator_.generateString(false);
    generated.effectiveDirective = generator_.generateString(false);
    generated.originalPolicy = generator_.generateString(false);
    generated.disposition = generator_.generateString(false);
    generated.blockedUri = generator_.generateString(false);
    generated.lineNumber = generator_.generateInt32();
    generated.columnNumber = generator_.generateInt32();
    generated.sourceFile = generator_.generateString(false);
    generated.statusCode = generator_.generateInt32();
    generated.scriptSample = generator_.generateString(false);
    return generated;
  };

  ReportingServiceProxy_QueueCspViolationReport_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.group = mutator_.mutateString(this.group, false);
    }
    if (mutator_.chooseMutateField()) {
      this.documentUri = mutator_.mutateString(this.documentUri, false);
    }
    if (mutator_.chooseMutateField()) {
      this.referrer = mutator_.mutateString(this.referrer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.violatedDirective = mutator_.mutateString(this.violatedDirective, false);
    }
    if (mutator_.chooseMutateField()) {
      this.effectiveDirective = mutator_.mutateString(this.effectiveDirective, false);
    }
    if (mutator_.chooseMutateField()) {
      this.originalPolicy = mutator_.mutateString(this.originalPolicy, false);
    }
    if (mutator_.chooseMutateField()) {
      this.disposition = mutator_.mutateString(this.disposition, false);
    }
    if (mutator_.chooseMutateField()) {
      this.blockedUri = mutator_.mutateString(this.blockedUri, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lineNumber = mutator_.mutateInt32(this.lineNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.columnNumber = mutator_.mutateInt32(this.columnNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceFile = mutator_.mutateString(this.sourceFile, false);
    }
    if (mutator_.chooseMutateField()) {
      this.statusCode = mutator_.mutateInt32(this.statusCode);
    }
    if (mutator_.chooseMutateField()) {
      this.scriptSample = mutator_.mutateString(this.scriptSample, false);
    }
    return this;
  };
  ReportingServiceProxy_QueueCspViolationReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ReportingServiceProxy_QueueCspViolationReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ReportingServiceProxy_QueueCspViolationReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ReportingServiceProxy_QueueCspViolationReport_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 112}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.group
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.documentUri
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.referrer
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.violatedDirective
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.effectiveDirective
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.originalPolicy
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.disposition
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ReportingServiceProxy_QueueCspViolationReport_Params.blockedUri
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate ReportingServiceProxy_QueueCspViolationReport_Params.sourceFile
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate ReportingServiceProxy_QueueCspViolationReport_Params.scriptSample
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 96, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ReportingServiceProxy_QueueCspViolationReport_Params.encodedSize = codec.kStructHeaderSize + 104;

  ReportingServiceProxy_QueueCspViolationReport_Params.decode = function(decoder) {
    var packed;
    var val = new ReportingServiceProxy_QueueCspViolationReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.group = decoder.decodeStruct(codec.String);
    val.documentUri = decoder.decodeStruct(codec.String);
    val.referrer = decoder.decodeStruct(codec.String);
    val.violatedDirective = decoder.decodeStruct(codec.String);
    val.effectiveDirective = decoder.decodeStruct(codec.String);
    val.originalPolicy = decoder.decodeStruct(codec.String);
    val.disposition = decoder.decodeStruct(codec.String);
    val.blockedUri = decoder.decodeStruct(codec.String);
    val.lineNumber = decoder.decodeStruct(codec.Int32);
    val.columnNumber = decoder.decodeStruct(codec.Int32);
    val.sourceFile = decoder.decodeStruct(codec.String);
    val.statusCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.scriptSample = decoder.decodeStruct(codec.String);
    return val;
  };

  ReportingServiceProxy_QueueCspViolationReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReportingServiceProxy_QueueCspViolationReport_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.group);
    encoder.encodeStruct(codec.String, val.documentUri);
    encoder.encodeStruct(codec.String, val.referrer);
    encoder.encodeStruct(codec.String, val.violatedDirective);
    encoder.encodeStruct(codec.String, val.effectiveDirective);
    encoder.encodeStruct(codec.String, val.originalPolicy);
    encoder.encodeStruct(codec.String, val.disposition);
    encoder.encodeStruct(codec.String, val.blockedUri);
    encoder.encodeStruct(codec.Int32, val.lineNumber);
    encoder.encodeStruct(codec.Int32, val.columnNumber);
    encoder.encodeStruct(codec.String, val.sourceFile);
    encoder.encodeStruct(codec.Int32, val.statusCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.scriptSample);
  };
  var kReportingServiceProxy_QueueInterventionReport_Name = 1904928341;
  var kReportingServiceProxy_QueueDeprecationReport_Name = 1259813153;
  var kReportingServiceProxy_QueueCspViolationReport_Name = 1579883752;

  function ReportingServiceProxyPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ReportingServiceProxy,
                                                   handleOrPtrInfo);
  }

  function ReportingServiceProxyAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ReportingServiceProxy, associatedInterfacePtrInfo);
  }

  ReportingServiceProxyAssociatedPtr.prototype =
      Object.create(ReportingServiceProxyPtr.prototype);
  ReportingServiceProxyAssociatedPtr.prototype.constructor =
      ReportingServiceProxyAssociatedPtr;

  function ReportingServiceProxyProxy(receiver) {
    this.receiver_ = receiver;
  }
  ReportingServiceProxyPtr.prototype.queueInterventionReport = function() {
    return ReportingServiceProxyProxy.prototype.queueInterventionReport
        .apply(this.ptr.getProxy(), arguments);
  };

  ReportingServiceProxyProxy.prototype.queueInterventionReport = function(url, message, sourceFile, lineNumber, columnNumber) {
    var params_ = new ReportingServiceProxy_QueueInterventionReport_Params();
    params_.url = url;
    params_.message = message;
    params_.sourceFile = sourceFile;
    params_.lineNumber = lineNumber;
    params_.columnNumber = columnNumber;
    var builder = new codec.MessageV0Builder(
        kReportingServiceProxy_QueueInterventionReport_Name,
        codec.align(ReportingServiceProxy_QueueInterventionReport_Params.encodedSize));
    builder.encodeStruct(ReportingServiceProxy_QueueInterventionReport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReportingServiceProxyPtr.prototype.queueDeprecationReport = function() {
    return ReportingServiceProxyProxy.prototype.queueDeprecationReport
        .apply(this.ptr.getProxy(), arguments);
  };

  ReportingServiceProxyProxy.prototype.queueDeprecationReport = function(url, id, anticipatedRemoval, message, sourceFile, lineNumber, columnNumber) {
    var params_ = new ReportingServiceProxy_QueueDeprecationReport_Params();
    params_.url = url;
    params_.id = id;
    params_.anticipatedRemoval = anticipatedRemoval;
    params_.message = message;
    params_.sourceFile = sourceFile;
    params_.lineNumber = lineNumber;
    params_.columnNumber = columnNumber;
    var builder = new codec.MessageV0Builder(
        kReportingServiceProxy_QueueDeprecationReport_Name,
        codec.align(ReportingServiceProxy_QueueDeprecationReport_Params.encodedSize));
    builder.encodeStruct(ReportingServiceProxy_QueueDeprecationReport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ReportingServiceProxyPtr.prototype.queueCspViolationReport = function() {
    return ReportingServiceProxyProxy.prototype.queueCspViolationReport
        .apply(this.ptr.getProxy(), arguments);
  };

  ReportingServiceProxyProxy.prototype.queueCspViolationReport = function(url, group, documentUri, referrer, violatedDirective, effectiveDirective, originalPolicy, disposition, blockedUri, lineNumber, columnNumber, sourceFile, statusCode, scriptSample) {
    var params_ = new ReportingServiceProxy_QueueCspViolationReport_Params();
    params_.url = url;
    params_.group = group;
    params_.documentUri = documentUri;
    params_.referrer = referrer;
    params_.violatedDirective = violatedDirective;
    params_.effectiveDirective = effectiveDirective;
    params_.originalPolicy = originalPolicy;
    params_.disposition = disposition;
    params_.blockedUri = blockedUri;
    params_.lineNumber = lineNumber;
    params_.columnNumber = columnNumber;
    params_.sourceFile = sourceFile;
    params_.statusCode = statusCode;
    params_.scriptSample = scriptSample;
    var builder = new codec.MessageV0Builder(
        kReportingServiceProxy_QueueCspViolationReport_Name,
        codec.align(ReportingServiceProxy_QueueCspViolationReport_Params.encodedSize));
    builder.encodeStruct(ReportingServiceProxy_QueueCspViolationReport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ReportingServiceProxyStub(delegate) {
    this.delegate_ = delegate;
  }
  ReportingServiceProxyStub.prototype.queueInterventionReport = function(url, message, sourceFile, lineNumber, columnNumber) {
    return this.delegate_ && this.delegate_.queueInterventionReport && this.delegate_.queueInterventionReport(url, message, sourceFile, lineNumber, columnNumber);
  }
  ReportingServiceProxyStub.prototype.queueDeprecationReport = function(url, id, anticipatedRemoval, message, sourceFile, lineNumber, columnNumber) {
    return this.delegate_ && this.delegate_.queueDeprecationReport && this.delegate_.queueDeprecationReport(url, id, anticipatedRemoval, message, sourceFile, lineNumber, columnNumber);
  }
  ReportingServiceProxyStub.prototype.queueCspViolationReport = function(url, group, documentUri, referrer, violatedDirective, effectiveDirective, originalPolicy, disposition, blockedUri, lineNumber, columnNumber, sourceFile, statusCode, scriptSample) {
    return this.delegate_ && this.delegate_.queueCspViolationReport && this.delegate_.queueCspViolationReport(url, group, documentUri, referrer, violatedDirective, effectiveDirective, originalPolicy, disposition, blockedUri, lineNumber, columnNumber, sourceFile, statusCode, scriptSample);
  }

  ReportingServiceProxyStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kReportingServiceProxy_QueueInterventionReport_Name:
      var params = reader.decodeStruct(ReportingServiceProxy_QueueInterventionReport_Params);
      this.queueInterventionReport(params.url, params.message, params.sourceFile, params.lineNumber, params.columnNumber);
      return true;
    case kReportingServiceProxy_QueueDeprecationReport_Name:
      var params = reader.decodeStruct(ReportingServiceProxy_QueueDeprecationReport_Params);
      this.queueDeprecationReport(params.url, params.id, params.anticipatedRemoval, params.message, params.sourceFile, params.lineNumber, params.columnNumber);
      return true;
    case kReportingServiceProxy_QueueCspViolationReport_Name:
      var params = reader.decodeStruct(ReportingServiceProxy_QueueCspViolationReport_Params);
      this.queueCspViolationReport(params.url, params.group, params.documentUri, params.referrer, params.violatedDirective, params.effectiveDirective, params.originalPolicy, params.disposition, params.blockedUri, params.lineNumber, params.columnNumber, params.sourceFile, params.statusCode, params.scriptSample);
      return true;
    default:
      return false;
    }
  };

  ReportingServiceProxyStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateReportingServiceProxyRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kReportingServiceProxy_QueueInterventionReport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ReportingServiceProxy_QueueInterventionReport_Params;
      break;
      case kReportingServiceProxy_QueueDeprecationReport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ReportingServiceProxy_QueueDeprecationReport_Params;
      break;
      case kReportingServiceProxy_QueueCspViolationReport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ReportingServiceProxy_QueueCspViolationReport_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateReportingServiceProxyResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ReportingServiceProxy = {
    name: 'blink.mojom.ReportingServiceProxy',
    kVersion: 0,
    ptrClass: ReportingServiceProxyPtr,
    proxyClass: ReportingServiceProxyProxy,
    stubClass: ReportingServiceProxyStub,
    validateRequest: validateReportingServiceProxyRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/reporting.mojom',
    fuzzMethods: {
      queueInterventionReport: {
        params: ReportingServiceProxy_QueueInterventionReport_Params,
      },
      queueDeprecationReport: {
        params: ReportingServiceProxy_QueueDeprecationReport_Params,
      },
      queueCspViolationReport: {
        params: ReportingServiceProxy_QueueCspViolationReport_Params,
      },
    },
  };
  ReportingServiceProxyStub.prototype.validator = validateReportingServiceProxyRequest;
  ReportingServiceProxyProxy.prototype.validator = null;
  exports.ReportingServiceProxy = ReportingServiceProxy;
  exports.ReportingServiceProxyPtr = ReportingServiceProxyPtr;
  exports.ReportingServiceProxyAssociatedPtr = ReportingServiceProxyAssociatedPtr;
})();