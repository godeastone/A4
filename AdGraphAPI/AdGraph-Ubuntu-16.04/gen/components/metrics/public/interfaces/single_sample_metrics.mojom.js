// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/metrics/public/interfaces/single_sample_metrics.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('metrics.mojom');



  function SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.prototype.initDefaults_ = function() {
    this.histogramName = null;
    this.min = 0;
    this.max = 0;
    this.bucketCount = 0;
    this.flags = 0;
    this.request = new bindings.InterfaceRequest();
  };
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.generate = function(generator_) {
    var generated = new SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params;
    generated.histogramName = generator_.generateString(false);
    generated.min = generator_.generateInt32();
    generated.max = generator_.generateInt32();
    generated.bucketCount = generator_.generateUint32();
    generated.flags = generator_.generateInt32();
    generated.request = generator_.generateInterfaceRequest("metrics.mojom.SingleSampleMetric", false);
    return generated;
  };

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.histogramName = mutator_.mutateString(this.histogramName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.min = mutator_.mutateInt32(this.min);
    }
    if (mutator_.chooseMutateField()) {
      this.max = mutator_.mutateInt32(this.max);
    }
    if (mutator_.chooseMutateField()) {
      this.bucketCount = mutator_.mutateUint32(this.bucketCount);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateInt32(this.flags);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "metrics.mojom.SingleSampleMetric", false);
    }
    return this;
  };
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["metrics.mojom.SingleSampleMetricRequest"]);
    }
    return handles;
  };

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.validate = function(messageValidator, offset) {
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


    // validate SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.histogramName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;






    // validate SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.encodedSize = codec.kStructHeaderSize + 32;

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.decode = function(decoder) {
    var packed;
    var val = new SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.histogramName = decoder.decodeStruct(codec.String);
    val.min = decoder.decodeStruct(codec.Int32);
    val.max = decoder.decodeStruct(codec.Int32);
    val.bucketCount = decoder.decodeStruct(codec.Uint32);
    val.flags = decoder.decodeStruct(codec.Int32);
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.histogramName);
    encoder.encodeStruct(codec.Int32, val.min);
    encoder.encodeStruct(codec.Int32, val.max);
    encoder.encodeStruct(codec.Uint32, val.bucketCount);
    encoder.encodeStruct(codec.Int32, val.flags);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function SingleSampleMetric_SetSample_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SingleSampleMetric_SetSample_Params.prototype.initDefaults_ = function() {
    this.sample = 0;
  };
  SingleSampleMetric_SetSample_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SingleSampleMetric_SetSample_Params.generate = function(generator_) {
    var generated = new SingleSampleMetric_SetSample_Params;
    generated.sample = generator_.generateInt32();
    return generated;
  };

  SingleSampleMetric_SetSample_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sample = mutator_.mutateInt32(this.sample);
    }
    return this;
  };
  SingleSampleMetric_SetSample_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SingleSampleMetric_SetSample_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SingleSampleMetric_SetSample_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SingleSampleMetric_SetSample_Params.validate = function(messageValidator, offset) {
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

  SingleSampleMetric_SetSample_Params.encodedSize = codec.kStructHeaderSize + 8;

  SingleSampleMetric_SetSample_Params.decode = function(decoder) {
    var packed;
    var val = new SingleSampleMetric_SetSample_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sample = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SingleSampleMetric_SetSample_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SingleSampleMetric_SetSample_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sample);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name = 481851701;

  function SingleSampleMetricsProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SingleSampleMetricsProvider,
                                                   handleOrPtrInfo);
  }

  function SingleSampleMetricsProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SingleSampleMetricsProvider, associatedInterfacePtrInfo);
  }

  SingleSampleMetricsProviderAssociatedPtr.prototype =
      Object.create(SingleSampleMetricsProviderPtr.prototype);
  SingleSampleMetricsProviderAssociatedPtr.prototype.constructor =
      SingleSampleMetricsProviderAssociatedPtr;

  function SingleSampleMetricsProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  SingleSampleMetricsProviderPtr.prototype.acquireSingleSampleMetric = function() {
    return SingleSampleMetricsProviderProxy.prototype.acquireSingleSampleMetric
        .apply(this.ptr.getProxy(), arguments);
  };

  SingleSampleMetricsProviderProxy.prototype.acquireSingleSampleMetric = function(histogramName, min, max, bucketCount, flags, request) {
    var params_ = new SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params();
    params_.histogramName = histogramName;
    params_.min = min;
    params_.max = max;
    params_.bucketCount = bucketCount;
    params_.flags = flags;
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name,
        codec.align(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params.encodedSize));
    builder.encodeStruct(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SingleSampleMetricsProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  SingleSampleMetricsProviderStub.prototype.acquireSingleSampleMetric = function(histogramName, min, max, bucketCount, flags, request) {
    return this.delegate_ && this.delegate_.acquireSingleSampleMetric && this.delegate_.acquireSingleSampleMetric(histogramName, min, max, bucketCount, flags, request);
  }

  SingleSampleMetricsProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name:
      var params = reader.decodeStruct(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params);
      this.acquireSingleSampleMetric(params.histogramName, params.min, params.max, params.bucketCount, params.flags, params.request);
      return true;
    default:
      return false;
    }
  };

  SingleSampleMetricsProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSingleSampleMetricsProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSingleSampleMetricsProvider_AcquireSingleSampleMetric_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSingleSampleMetricsProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SingleSampleMetricsProvider = {
    name: 'metrics.mojom.SingleSampleMetricsProvider',
    kVersion: 0,
    ptrClass: SingleSampleMetricsProviderPtr,
    proxyClass: SingleSampleMetricsProviderProxy,
    stubClass: SingleSampleMetricsProviderStub,
    validateRequest: validateSingleSampleMetricsProviderRequest,
    validateResponse: null,
    mojomId: 'components/metrics/public/interfaces/single_sample_metrics.mojom',
    fuzzMethods: {
      acquireSingleSampleMetric: {
        params: SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params,
      },
    },
  };
  SingleSampleMetricsProviderStub.prototype.validator = validateSingleSampleMetricsProviderRequest;
  SingleSampleMetricsProviderProxy.prototype.validator = null;
  var kSingleSampleMetric_SetSample_Name = 348288678;

  function SingleSampleMetricPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SingleSampleMetric,
                                                   handleOrPtrInfo);
  }

  function SingleSampleMetricAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SingleSampleMetric, associatedInterfacePtrInfo);
  }

  SingleSampleMetricAssociatedPtr.prototype =
      Object.create(SingleSampleMetricPtr.prototype);
  SingleSampleMetricAssociatedPtr.prototype.constructor =
      SingleSampleMetricAssociatedPtr;

  function SingleSampleMetricProxy(receiver) {
    this.receiver_ = receiver;
  }
  SingleSampleMetricPtr.prototype.setSample = function() {
    return SingleSampleMetricProxy.prototype.setSample
        .apply(this.ptr.getProxy(), arguments);
  };

  SingleSampleMetricProxy.prototype.setSample = function(sample) {
    var params_ = new SingleSampleMetric_SetSample_Params();
    params_.sample = sample;
    var builder = new codec.MessageV0Builder(
        kSingleSampleMetric_SetSample_Name,
        codec.align(SingleSampleMetric_SetSample_Params.encodedSize));
    builder.encodeStruct(SingleSampleMetric_SetSample_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SingleSampleMetricStub(delegate) {
    this.delegate_ = delegate;
  }
  SingleSampleMetricStub.prototype.setSample = function(sample) {
    return this.delegate_ && this.delegate_.setSample && this.delegate_.setSample(sample);
  }

  SingleSampleMetricStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSingleSampleMetric_SetSample_Name:
      var params = reader.decodeStruct(SingleSampleMetric_SetSample_Params);
      this.setSample(params.sample);
      return true;
    default:
      return false;
    }
  };

  SingleSampleMetricStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSingleSampleMetricRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSingleSampleMetric_SetSample_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SingleSampleMetric_SetSample_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSingleSampleMetricResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SingleSampleMetric = {
    name: 'metrics.mojom.SingleSampleMetric',
    kVersion: 0,
    ptrClass: SingleSampleMetricPtr,
    proxyClass: SingleSampleMetricProxy,
    stubClass: SingleSampleMetricStub,
    validateRequest: validateSingleSampleMetricRequest,
    validateResponse: null,
    mojomId: 'components/metrics/public/interfaces/single_sample_metrics.mojom',
    fuzzMethods: {
      setSample: {
        params: SingleSampleMetric_SetSample_Params,
      },
    },
  };
  SingleSampleMetricStub.prototype.validator = validateSingleSampleMetricRequest;
  SingleSampleMetricProxy.prototype.validator = null;
  exports.SingleSampleMetricsProvider = SingleSampleMetricsProvider;
  exports.SingleSampleMetricsProviderPtr = SingleSampleMetricsProviderPtr;
  exports.SingleSampleMetricsProviderAssociatedPtr = SingleSampleMetricsProviderAssociatedPtr;
  exports.SingleSampleMetric = SingleSampleMetric;
  exports.SingleSampleMetricPtr = SingleSampleMetricPtr;
  exports.SingleSampleMetricAssociatedPtr = SingleSampleMetricAssociatedPtr;
})();