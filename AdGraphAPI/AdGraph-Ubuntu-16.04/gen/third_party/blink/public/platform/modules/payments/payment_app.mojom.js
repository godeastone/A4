// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/payments/payment_app.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('payments.mojom');
  var payment_request_data$ =
      mojo.internal.exposeNamespace('payments.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/payments/mojom/payment_request_data.mojom', '../../../../../../components/payments/mojom/payment_request_data.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var manifest$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/manifest/manifest.mojom', '../../../mojom/manifest/manifest.mojom.js');
  }
  var payment_request$ =
      mojo.internal.exposeNamespace('payments.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/payments/payment_request.mojom', 'payment_request.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var PaymentHandlerStatus = {};
  PaymentHandlerStatus.SUCCESS = 0;
  PaymentHandlerStatus.NOT_IMPLEMENTED = PaymentHandlerStatus.SUCCESS + 1;
  PaymentHandlerStatus.NOT_FOUND = PaymentHandlerStatus.NOT_IMPLEMENTED + 1;
  PaymentHandlerStatus.NO_ACTIVE_WORKER = PaymentHandlerStatus.NOT_FOUND + 1;
  PaymentHandlerStatus.STORAGE_OPERATION_FAILED = PaymentHandlerStatus.NO_ACTIVE_WORKER + 1;
  PaymentHandlerStatus.FETCH_INSTRUMENT_ICON_FAILED = PaymentHandlerStatus.STORAGE_OPERATION_FAILED + 1;
  PaymentHandlerStatus.FETCH_PAYMENT_APP_INFO_FAILED = PaymentHandlerStatus.FETCH_INSTRUMENT_ICON_FAILED + 1;

  PaymentHandlerStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  PaymentHandlerStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function PaymentInstrument(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentInstrument.prototype.initDefaults_ = function() {
    this.name = null;
    this.icons = null;
    this.method = null;
    this.stringifiedCapabilities = null;
    this.supportedNetworks = null;
    this.supportedTypes = null;
  };
  PaymentInstrument.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentInstrument.generate = function(generator_) {
    var generated = new PaymentInstrument;
    generated.name = generator_.generateString(false);
    generated.icons = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ManifestIcon, false);
    });
    generated.method = generator_.generateString(false);
    generated.stringifiedCapabilities = generator_.generateString(false);
    generated.supportedNetworks = generator_.generateArray(function() {
      return generator_.generateEnum(0, 7);
    });
    generated.supportedTypes = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2);
    });
    return generated;
  };

  PaymentInstrument.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.icons = mutator_.mutateArray(this.icons, function(val) {
        return mutator_.mutateStruct(blink.mojom.ManifestIcon, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.method = mutator_.mutateString(this.method, false);
    }
    if (mutator_.chooseMutateField()) {
      this.stringifiedCapabilities = mutator_.mutateString(this.stringifiedCapabilities, false);
    }
    if (mutator_.chooseMutateField()) {
      this.supportedNetworks = mutator_.mutateArray(this.supportedNetworks, function(val) {
        return mutator_.mutateEnum(val, 0, 7);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.supportedTypes = mutator_.mutateArray(this.supportedTypes, function(val) {
        return mutator_.mutateEnum(val, 0, 2);
      });
    }
    return this;
  };
  PaymentInstrument.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentInstrument.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentInstrument.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentInstrument.validate = function(messageValidator, offset) {
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


    // validate PaymentInstrument.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentInstrument.icons
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(manifest$.ManifestIcon), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentInstrument.method
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentInstrument.stringifiedCapabilities
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentInstrument.supportedNetworks
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 4, new codec.Enum(payment_request$.BasicCardNetwork), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentInstrument.supportedTypes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, new codec.Enum(payment_request$.BasicCardType), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentInstrument.encodedSize = codec.kStructHeaderSize + 48;

  PaymentInstrument.decode = function(decoder) {
    var packed;
    var val = new PaymentInstrument();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.icons = decoder.decodeArrayPointer(new codec.PointerTo(manifest$.ManifestIcon));
    val.method = decoder.decodeStruct(codec.String);
    val.stringifiedCapabilities = decoder.decodeStruct(codec.String);
    val.supportedNetworks = decoder.decodeArrayPointer(new codec.Enum(payment_request$.BasicCardNetwork));
    val.supportedTypes = decoder.decodeArrayPointer(new codec.Enum(payment_request$.BasicCardType));
    return val;
  };

  PaymentInstrument.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentInstrument.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeArrayPointer(new codec.PointerTo(manifest$.ManifestIcon), val.icons);
    encoder.encodeStruct(codec.String, val.method);
    encoder.encodeStruct(codec.String, val.stringifiedCapabilities);
    encoder.encodeArrayPointer(new codec.Enum(payment_request$.BasicCardNetwork), val.supportedNetworks);
    encoder.encodeArrayPointer(new codec.Enum(payment_request$.BasicCardType), val.supportedTypes);
  };
  function CanMakePaymentEventData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CanMakePaymentEventData.prototype.initDefaults_ = function() {
    this.topOrigin = null;
    this.paymentRequestOrigin = null;
    this.methodData = null;
    this.modifiers = null;
  };
  CanMakePaymentEventData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CanMakePaymentEventData.generate = function(generator_) {
    var generated = new CanMakePaymentEventData;
    generated.topOrigin = generator_.generateStruct(url.mojom.Url, false);
    generated.paymentRequestOrigin = generator_.generateStruct(url.mojom.Url, false);
    generated.methodData = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentMethodData, false);
    });
    generated.modifiers = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentDetailsModifier, false);
    });
    return generated;
  };

  CanMakePaymentEventData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.topOrigin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.paymentRequestOrigin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.methodData = mutator_.mutateArray(this.methodData, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentMethodData, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.modifiers = mutator_.mutateArray(this.modifiers, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentDetailsModifier, false);
      });
    }
    return this;
  };
  CanMakePaymentEventData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CanMakePaymentEventData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CanMakePaymentEventData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CanMakePaymentEventData.validate = function(messageValidator, offset) {
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


    // validate CanMakePaymentEventData.topOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanMakePaymentEventData.paymentRequestOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanMakePaymentEventData.methodData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(payment_request$.PaymentMethodData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CanMakePaymentEventData.modifiers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(payment_request$.PaymentDetailsModifier), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CanMakePaymentEventData.encodedSize = codec.kStructHeaderSize + 32;

  CanMakePaymentEventData.decode = function(decoder) {
    var packed;
    var val = new CanMakePaymentEventData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.topOrigin = decoder.decodeStructPointer(url$.Url);
    val.paymentRequestOrigin = decoder.decodeStructPointer(url$.Url);
    val.methodData = decoder.decodeArrayPointer(new codec.PointerTo(payment_request$.PaymentMethodData));
    val.modifiers = decoder.decodeArrayPointer(new codec.PointerTo(payment_request$.PaymentDetailsModifier));
    return val;
  };

  CanMakePaymentEventData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CanMakePaymentEventData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.topOrigin);
    encoder.encodeStructPointer(url$.Url, val.paymentRequestOrigin);
    encoder.encodeArrayPointer(new codec.PointerTo(payment_request$.PaymentMethodData), val.methodData);
    encoder.encodeArrayPointer(new codec.PointerTo(payment_request$.PaymentDetailsModifier), val.modifiers);
  };
  function PaymentRequestEventData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestEventData.prototype.initDefaults_ = function() {
    this.topOrigin = null;
    this.paymentRequestOrigin = null;
    this.paymentRequestId = null;
    this.methodData = null;
    this.total = null;
    this.modifiers = null;
    this.instrumentKey = null;
  };
  PaymentRequestEventData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestEventData.generate = function(generator_) {
    var generated = new PaymentRequestEventData;
    generated.topOrigin = generator_.generateStruct(url.mojom.Url, false);
    generated.paymentRequestOrigin = generator_.generateStruct(url.mojom.Url, false);
    generated.paymentRequestId = generator_.generateString(false);
    generated.methodData = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentMethodData, false);
    });
    generated.total = generator_.generateStruct(payments.mojom.PaymentCurrencyAmount, false);
    generated.modifiers = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentDetailsModifier, false);
    });
    generated.instrumentKey = generator_.generateString(false);
    return generated;
  };

  PaymentRequestEventData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.topOrigin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.paymentRequestOrigin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.paymentRequestId = mutator_.mutateString(this.paymentRequestId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.methodData = mutator_.mutateArray(this.methodData, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentMethodData, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.total = mutator_.mutateStruct(payments.mojom.PaymentCurrencyAmount, false);
    }
    if (mutator_.chooseMutateField()) {
      this.modifiers = mutator_.mutateArray(this.modifiers, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentDetailsModifier, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.instrumentKey = mutator_.mutateString(this.instrumentKey, false);
    }
    return this;
  };
  PaymentRequestEventData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestEventData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestEventData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestEventData.validate = function(messageValidator, offset) {
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


    // validate PaymentRequestEventData.topOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequestEventData.paymentRequestOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequestEventData.paymentRequestId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequestEventData.methodData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(payment_request$.PaymentMethodData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequestEventData.total
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, payment_request_data$.PaymentCurrencyAmount, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequestEventData.modifiers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(payment_request$.PaymentDetailsModifier), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequestEventData.instrumentKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestEventData.encodedSize = codec.kStructHeaderSize + 56;

  PaymentRequestEventData.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestEventData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.topOrigin = decoder.decodeStructPointer(url$.Url);
    val.paymentRequestOrigin = decoder.decodeStructPointer(url$.Url);
    val.paymentRequestId = decoder.decodeStruct(codec.String);
    val.methodData = decoder.decodeArrayPointer(new codec.PointerTo(payment_request$.PaymentMethodData));
    val.total = decoder.decodeStructPointer(payment_request_data$.PaymentCurrencyAmount);
    val.modifiers = decoder.decodeArrayPointer(new codec.PointerTo(payment_request$.PaymentDetailsModifier));
    val.instrumentKey = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentRequestEventData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestEventData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.topOrigin);
    encoder.encodeStructPointer(url$.Url, val.paymentRequestOrigin);
    encoder.encodeStruct(codec.String, val.paymentRequestId);
    encoder.encodeArrayPointer(new codec.PointerTo(payment_request$.PaymentMethodData), val.methodData);
    encoder.encodeStructPointer(payment_request_data$.PaymentCurrencyAmount, val.total);
    encoder.encodeArrayPointer(new codec.PointerTo(payment_request$.PaymentDetailsModifier), val.modifiers);
    encoder.encodeStruct(codec.String, val.instrumentKey);
  };
  function PaymentHandlerResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentHandlerResponse.prototype.initDefaults_ = function() {
    this.methodName = null;
    this.stringifiedDetails = null;
  };
  PaymentHandlerResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentHandlerResponse.generate = function(generator_) {
    var generated = new PaymentHandlerResponse;
    generated.methodName = generator_.generateString(false);
    generated.stringifiedDetails = generator_.generateString(false);
    return generated;
  };

  PaymentHandlerResponse.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.methodName = mutator_.mutateString(this.methodName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.stringifiedDetails = mutator_.mutateString(this.stringifiedDetails, false);
    }
    return this;
  };
  PaymentHandlerResponse.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentHandlerResponse.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentHandlerResponse.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentHandlerResponse.validate = function(messageValidator, offset) {
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


    // validate PaymentHandlerResponse.methodName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentHandlerResponse.stringifiedDetails
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentHandlerResponse.encodedSize = codec.kStructHeaderSize + 16;

  PaymentHandlerResponse.decode = function(decoder) {
    var packed;
    var val = new PaymentHandlerResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.methodName = decoder.decodeStruct(codec.String);
    val.stringifiedDetails = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentHandlerResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentHandlerResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.methodName);
    encoder.encodeStruct(codec.String, val.stringifiedDetails);
  };
  function PaymentManager_Init_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_Init_Params.prototype.initDefaults_ = function() {
    this.contextUrl = null;
    this.serviceWorkerScope = null;
  };
  PaymentManager_Init_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_Init_Params.generate = function(generator_) {
    var generated = new PaymentManager_Init_Params;
    generated.contextUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.serviceWorkerScope = generator_.generateString(false);
    return generated;
  };

  PaymentManager_Init_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.contextUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerScope = mutator_.mutateString(this.serviceWorkerScope, false);
    }
    return this;
  };
  PaymentManager_Init_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_Init_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_Init_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_Init_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_Init_Params.contextUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentManager_Init_Params.serviceWorkerScope
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_Init_Params.encodedSize = codec.kStructHeaderSize + 16;

  PaymentManager_Init_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_Init_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.contextUrl = decoder.decodeStructPointer(url$.Url);
    val.serviceWorkerScope = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentManager_Init_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_Init_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.contextUrl);
    encoder.encodeStruct(codec.String, val.serviceWorkerScope);
  };
  function PaymentManager_DeletePaymentInstrument_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_DeletePaymentInstrument_Params.prototype.initDefaults_ = function() {
    this.instrumentKey = null;
  };
  PaymentManager_DeletePaymentInstrument_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_DeletePaymentInstrument_Params.generate = function(generator_) {
    var generated = new PaymentManager_DeletePaymentInstrument_Params;
    generated.instrumentKey = generator_.generateString(false);
    return generated;
  };

  PaymentManager_DeletePaymentInstrument_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instrumentKey = mutator_.mutateString(this.instrumentKey, false);
    }
    return this;
  };
  PaymentManager_DeletePaymentInstrument_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_DeletePaymentInstrument_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_DeletePaymentInstrument_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_DeletePaymentInstrument_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_DeletePaymentInstrument_Params.instrumentKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_DeletePaymentInstrument_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_DeletePaymentInstrument_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_DeletePaymentInstrument_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instrumentKey = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentManager_DeletePaymentInstrument_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_DeletePaymentInstrument_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instrumentKey);
  };
  function PaymentManager_DeletePaymentInstrument_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_DeletePaymentInstrument_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PaymentManager_DeletePaymentInstrument_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_DeletePaymentInstrument_ResponseParams.generate = function(generator_) {
    var generated = new PaymentManager_DeletePaymentInstrument_ResponseParams;
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  PaymentManager_DeletePaymentInstrument_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  PaymentManager_DeletePaymentInstrument_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_DeletePaymentInstrument_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_DeletePaymentInstrument_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_DeletePaymentInstrument_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_DeletePaymentInstrument_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PaymentHandlerStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_DeletePaymentInstrument_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_DeletePaymentInstrument_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_DeletePaymentInstrument_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentManager_DeletePaymentInstrument_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_DeletePaymentInstrument_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentManager_GetPaymentInstrument_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_GetPaymentInstrument_Params.prototype.initDefaults_ = function() {
    this.instrumentKey = null;
  };
  PaymentManager_GetPaymentInstrument_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_GetPaymentInstrument_Params.generate = function(generator_) {
    var generated = new PaymentManager_GetPaymentInstrument_Params;
    generated.instrumentKey = generator_.generateString(false);
    return generated;
  };

  PaymentManager_GetPaymentInstrument_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instrumentKey = mutator_.mutateString(this.instrumentKey, false);
    }
    return this;
  };
  PaymentManager_GetPaymentInstrument_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_GetPaymentInstrument_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_GetPaymentInstrument_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_GetPaymentInstrument_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_GetPaymentInstrument_Params.instrumentKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_GetPaymentInstrument_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_GetPaymentInstrument_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_GetPaymentInstrument_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instrumentKey = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentManager_GetPaymentInstrument_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_GetPaymentInstrument_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instrumentKey);
  };
  function PaymentManager_GetPaymentInstrument_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_GetPaymentInstrument_ResponseParams.prototype.initDefaults_ = function() {
    this.instrument = null;
    this.status = 0;
  };
  PaymentManager_GetPaymentInstrument_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_GetPaymentInstrument_ResponseParams.generate = function(generator_) {
    var generated = new PaymentManager_GetPaymentInstrument_ResponseParams;
    generated.instrument = generator_.generateStruct(payments.mojom.PaymentInstrument, false);
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  PaymentManager_GetPaymentInstrument_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instrument = mutator_.mutateStruct(payments.mojom.PaymentInstrument, false);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  PaymentManager_GetPaymentInstrument_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_GetPaymentInstrument_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_GetPaymentInstrument_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_GetPaymentInstrument_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_GetPaymentInstrument_ResponseParams.instrument
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentInstrument, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentManager_GetPaymentInstrument_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, PaymentHandlerStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_GetPaymentInstrument_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PaymentManager_GetPaymentInstrument_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_GetPaymentInstrument_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instrument = decoder.decodeStructPointer(PaymentInstrument);
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentManager_GetPaymentInstrument_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_GetPaymentInstrument_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentInstrument, val.instrument);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentManager_KeysOfPaymentInstruments_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_KeysOfPaymentInstruments_Params.prototype.initDefaults_ = function() {
  };
  PaymentManager_KeysOfPaymentInstruments_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_KeysOfPaymentInstruments_Params.generate = function(generator_) {
    var generated = new PaymentManager_KeysOfPaymentInstruments_Params;
    return generated;
  };

  PaymentManager_KeysOfPaymentInstruments_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentManager_KeysOfPaymentInstruments_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_KeysOfPaymentInstruments_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_KeysOfPaymentInstruments_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_KeysOfPaymentInstruments_Params.validate = function(messageValidator, offset) {
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

  PaymentManager_KeysOfPaymentInstruments_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentManager_KeysOfPaymentInstruments_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_KeysOfPaymentInstruments_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentManager_KeysOfPaymentInstruments_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_KeysOfPaymentInstruments_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentManager_KeysOfPaymentInstruments_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_KeysOfPaymentInstruments_ResponseParams.prototype.initDefaults_ = function() {
    this.keys = null;
    this.status = 0;
  };
  PaymentManager_KeysOfPaymentInstruments_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_KeysOfPaymentInstruments_ResponseParams.generate = function(generator_) {
    var generated = new PaymentManager_KeysOfPaymentInstruments_ResponseParams;
    generated.keys = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  PaymentManager_KeysOfPaymentInstruments_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keys = mutator_.mutateArray(this.keys, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  PaymentManager_KeysOfPaymentInstruments_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_KeysOfPaymentInstruments_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_KeysOfPaymentInstruments_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_KeysOfPaymentInstruments_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_KeysOfPaymentInstruments_ResponseParams.keys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentManager_KeysOfPaymentInstruments_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, PaymentHandlerStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_KeysOfPaymentInstruments_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PaymentManager_KeysOfPaymentInstruments_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_KeysOfPaymentInstruments_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keys = decoder.decodeArrayPointer(codec.String);
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentManager_KeysOfPaymentInstruments_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_KeysOfPaymentInstruments_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.keys);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentManager_HasPaymentInstrument_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_HasPaymentInstrument_Params.prototype.initDefaults_ = function() {
    this.instrumentKey = null;
  };
  PaymentManager_HasPaymentInstrument_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_HasPaymentInstrument_Params.generate = function(generator_) {
    var generated = new PaymentManager_HasPaymentInstrument_Params;
    generated.instrumentKey = generator_.generateString(false);
    return generated;
  };

  PaymentManager_HasPaymentInstrument_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instrumentKey = mutator_.mutateString(this.instrumentKey, false);
    }
    return this;
  };
  PaymentManager_HasPaymentInstrument_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_HasPaymentInstrument_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_HasPaymentInstrument_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_HasPaymentInstrument_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_HasPaymentInstrument_Params.instrumentKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_HasPaymentInstrument_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_HasPaymentInstrument_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_HasPaymentInstrument_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instrumentKey = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentManager_HasPaymentInstrument_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_HasPaymentInstrument_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instrumentKey);
  };
  function PaymentManager_HasPaymentInstrument_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_HasPaymentInstrument_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PaymentManager_HasPaymentInstrument_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_HasPaymentInstrument_ResponseParams.generate = function(generator_) {
    var generated = new PaymentManager_HasPaymentInstrument_ResponseParams;
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  PaymentManager_HasPaymentInstrument_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  PaymentManager_HasPaymentInstrument_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_HasPaymentInstrument_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_HasPaymentInstrument_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_HasPaymentInstrument_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_HasPaymentInstrument_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PaymentHandlerStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_HasPaymentInstrument_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_HasPaymentInstrument_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_HasPaymentInstrument_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentManager_HasPaymentInstrument_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_HasPaymentInstrument_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentManager_SetPaymentInstrument_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_SetPaymentInstrument_Params.prototype.initDefaults_ = function() {
    this.instrumentKey = null;
    this.instrument = null;
  };
  PaymentManager_SetPaymentInstrument_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_SetPaymentInstrument_Params.generate = function(generator_) {
    var generated = new PaymentManager_SetPaymentInstrument_Params;
    generated.instrumentKey = generator_.generateString(false);
    generated.instrument = generator_.generateStruct(payments.mojom.PaymentInstrument, false);
    return generated;
  };

  PaymentManager_SetPaymentInstrument_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instrumentKey = mutator_.mutateString(this.instrumentKey, false);
    }
    if (mutator_.chooseMutateField()) {
      this.instrument = mutator_.mutateStruct(payments.mojom.PaymentInstrument, false);
    }
    return this;
  };
  PaymentManager_SetPaymentInstrument_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_SetPaymentInstrument_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_SetPaymentInstrument_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_SetPaymentInstrument_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_SetPaymentInstrument_Params.instrumentKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentManager_SetPaymentInstrument_Params.instrument
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PaymentInstrument, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_SetPaymentInstrument_Params.encodedSize = codec.kStructHeaderSize + 16;

  PaymentManager_SetPaymentInstrument_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_SetPaymentInstrument_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instrumentKey = decoder.decodeStruct(codec.String);
    val.instrument = decoder.decodeStructPointer(PaymentInstrument);
    return val;
  };

  PaymentManager_SetPaymentInstrument_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_SetPaymentInstrument_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.instrumentKey);
    encoder.encodeStructPointer(PaymentInstrument, val.instrument);
  };
  function PaymentManager_SetPaymentInstrument_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_SetPaymentInstrument_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PaymentManager_SetPaymentInstrument_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_SetPaymentInstrument_ResponseParams.generate = function(generator_) {
    var generated = new PaymentManager_SetPaymentInstrument_ResponseParams;
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  PaymentManager_SetPaymentInstrument_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  PaymentManager_SetPaymentInstrument_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_SetPaymentInstrument_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_SetPaymentInstrument_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_SetPaymentInstrument_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_SetPaymentInstrument_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PaymentHandlerStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_SetPaymentInstrument_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_SetPaymentInstrument_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_SetPaymentInstrument_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentManager_SetPaymentInstrument_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_SetPaymentInstrument_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentManager_ClearPaymentInstruments_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_ClearPaymentInstruments_Params.prototype.initDefaults_ = function() {
  };
  PaymentManager_ClearPaymentInstruments_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_ClearPaymentInstruments_Params.generate = function(generator_) {
    var generated = new PaymentManager_ClearPaymentInstruments_Params;
    return generated;
  };

  PaymentManager_ClearPaymentInstruments_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentManager_ClearPaymentInstruments_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_ClearPaymentInstruments_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_ClearPaymentInstruments_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_ClearPaymentInstruments_Params.validate = function(messageValidator, offset) {
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

  PaymentManager_ClearPaymentInstruments_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentManager_ClearPaymentInstruments_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_ClearPaymentInstruments_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentManager_ClearPaymentInstruments_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_ClearPaymentInstruments_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentManager_ClearPaymentInstruments_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_ClearPaymentInstruments_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PaymentManager_ClearPaymentInstruments_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_ClearPaymentInstruments_ResponseParams.generate = function(generator_) {
    var generated = new PaymentManager_ClearPaymentInstruments_ResponseParams;
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  PaymentManager_ClearPaymentInstruments_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  PaymentManager_ClearPaymentInstruments_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_ClearPaymentInstruments_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_ClearPaymentInstruments_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_ClearPaymentInstruments_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_ClearPaymentInstruments_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PaymentHandlerStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_ClearPaymentInstruments_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_ClearPaymentInstruments_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_ClearPaymentInstruments_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentManager_ClearPaymentInstruments_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_ClearPaymentInstruments_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentManager_SetUserHint_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentManager_SetUserHint_Params.prototype.initDefaults_ = function() {
    this.userHint = null;
  };
  PaymentManager_SetUserHint_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentManager_SetUserHint_Params.generate = function(generator_) {
    var generated = new PaymentManager_SetUserHint_Params;
    generated.userHint = generator_.generateString(false);
    return generated;
  };

  PaymentManager_SetUserHint_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.userHint = mutator_.mutateString(this.userHint, false);
    }
    return this;
  };
  PaymentManager_SetUserHint_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentManager_SetUserHint_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentManager_SetUserHint_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentManager_SetUserHint_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentManager_SetUserHint_Params.userHint
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentManager_SetUserHint_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentManager_SetUserHint_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentManager_SetUserHint_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.userHint = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentManager_SetUserHint_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentManager_SetUserHint_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.userHint);
  };
  function PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.prototype.initDefaults_ = function() {
    this.paymentAborted = false;
    this.dispatchEventTime = null;
  };
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.generate = function(generator_) {
    var generated = new PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params;
    generated.paymentAborted = generator_.generateBool();
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.paymentAborted = mutator_.mutateBool(this.paymentAborted);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.validate = function(messageValidator, offset) {
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



    // validate PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.encodedSize = codec.kStructHeaderSize + 16;

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.paymentAborted = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.paymentAborted & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.prototype.initDefaults_ = function() {
    this.canMakePayment = false;
    this.dispatchEventTime = null;
  };
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.generate = function(generator_) {
    var generated = new PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params;
    generated.canMakePayment = generator_.generateBool();
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.canMakePayment = mutator_.mutateBool(this.canMakePayment);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.validate = function(messageValidator, offset) {
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



    // validate PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.encodedSize = codec.kStructHeaderSize + 16;

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.canMakePayment = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.canMakePayment & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.dispatchEventTime = null;
  };
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.generate = function(generator_) {
    var generated = new PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params;
    generated.response = generator_.generateStruct(payments.mojom.PaymentHandlerResponse, false);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(payments.mojom.PaymentHandlerResponse, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentHandlerResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.encodedSize = codec.kStructHeaderSize + 16;

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(PaymentHandlerResponse);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentHandlerResponse, val.response);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  var kPaymentManager_Init_Name = 1243834584;
  var kPaymentManager_DeletePaymentInstrument_Name = 1636847928;
  var kPaymentManager_GetPaymentInstrument_Name = 1921171154;
  var kPaymentManager_KeysOfPaymentInstruments_Name = 1157319725;
  var kPaymentManager_HasPaymentInstrument_Name = 454174435;
  var kPaymentManager_SetPaymentInstrument_Name = 1899672132;
  var kPaymentManager_ClearPaymentInstruments_Name = 1986422900;
  var kPaymentManager_SetUserHint_Name = 592181030;

  function PaymentManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PaymentManager,
                                                   handleOrPtrInfo);
  }

  function PaymentManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PaymentManager, associatedInterfacePtrInfo);
  }

  PaymentManagerAssociatedPtr.prototype =
      Object.create(PaymentManagerPtr.prototype);
  PaymentManagerAssociatedPtr.prototype.constructor =
      PaymentManagerAssociatedPtr;

  function PaymentManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  PaymentManagerPtr.prototype.init = function() {
    return PaymentManagerProxy.prototype.init
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.init = function(contextUrl, serviceWorkerScope) {
    var params_ = new PaymentManager_Init_Params();
    params_.contextUrl = contextUrl;
    params_.serviceWorkerScope = serviceWorkerScope;
    var builder = new codec.MessageV0Builder(
        kPaymentManager_Init_Name,
        codec.align(PaymentManager_Init_Params.encodedSize));
    builder.encodeStruct(PaymentManager_Init_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentManagerPtr.prototype.deletePaymentInstrument = function() {
    return PaymentManagerProxy.prototype.deletePaymentInstrument
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.deletePaymentInstrument = function(instrumentKey) {
    var params_ = new PaymentManager_DeletePaymentInstrument_Params();
    params_.instrumentKey = instrumentKey;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPaymentManager_DeletePaymentInstrument_Name,
          codec.align(PaymentManager_DeletePaymentInstrument_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PaymentManager_DeletePaymentInstrument_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PaymentManager_DeletePaymentInstrument_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PaymentManagerPtr.prototype.getPaymentInstrument = function() {
    return PaymentManagerProxy.prototype.getPaymentInstrument
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.getPaymentInstrument = function(instrumentKey) {
    var params_ = new PaymentManager_GetPaymentInstrument_Params();
    params_.instrumentKey = instrumentKey;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPaymentManager_GetPaymentInstrument_Name,
          codec.align(PaymentManager_GetPaymentInstrument_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PaymentManager_GetPaymentInstrument_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PaymentManager_GetPaymentInstrument_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PaymentManagerPtr.prototype.keysOfPaymentInstruments = function() {
    return PaymentManagerProxy.prototype.keysOfPaymentInstruments
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.keysOfPaymentInstruments = function() {
    var params_ = new PaymentManager_KeysOfPaymentInstruments_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPaymentManager_KeysOfPaymentInstruments_Name,
          codec.align(PaymentManager_KeysOfPaymentInstruments_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PaymentManager_KeysOfPaymentInstruments_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PaymentManager_KeysOfPaymentInstruments_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PaymentManagerPtr.prototype.hasPaymentInstrument = function() {
    return PaymentManagerProxy.prototype.hasPaymentInstrument
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.hasPaymentInstrument = function(instrumentKey) {
    var params_ = new PaymentManager_HasPaymentInstrument_Params();
    params_.instrumentKey = instrumentKey;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPaymentManager_HasPaymentInstrument_Name,
          codec.align(PaymentManager_HasPaymentInstrument_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PaymentManager_HasPaymentInstrument_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PaymentManager_HasPaymentInstrument_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PaymentManagerPtr.prototype.setPaymentInstrument = function() {
    return PaymentManagerProxy.prototype.setPaymentInstrument
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.setPaymentInstrument = function(instrumentKey, instrument) {
    var params_ = new PaymentManager_SetPaymentInstrument_Params();
    params_.instrumentKey = instrumentKey;
    params_.instrument = instrument;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPaymentManager_SetPaymentInstrument_Name,
          codec.align(PaymentManager_SetPaymentInstrument_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PaymentManager_SetPaymentInstrument_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PaymentManager_SetPaymentInstrument_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PaymentManagerPtr.prototype.clearPaymentInstruments = function() {
    return PaymentManagerProxy.prototype.clearPaymentInstruments
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.clearPaymentInstruments = function() {
    var params_ = new PaymentManager_ClearPaymentInstruments_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPaymentManager_ClearPaymentInstruments_Name,
          codec.align(PaymentManager_ClearPaymentInstruments_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PaymentManager_ClearPaymentInstruments_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PaymentManager_ClearPaymentInstruments_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PaymentManagerPtr.prototype.setUserHint = function() {
    return PaymentManagerProxy.prototype.setUserHint
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentManagerProxy.prototype.setUserHint = function(userHint) {
    var params_ = new PaymentManager_SetUserHint_Params();
    params_.userHint = userHint;
    var builder = new codec.MessageV0Builder(
        kPaymentManager_SetUserHint_Name,
        codec.align(PaymentManager_SetUserHint_Params.encodedSize));
    builder.encodeStruct(PaymentManager_SetUserHint_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PaymentManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  PaymentManagerStub.prototype.init = function(contextUrl, serviceWorkerScope) {
    return this.delegate_ && this.delegate_.init && this.delegate_.init(contextUrl, serviceWorkerScope);
  }
  PaymentManagerStub.prototype.deletePaymentInstrument = function(instrumentKey) {
    return this.delegate_ && this.delegate_.deletePaymentInstrument && this.delegate_.deletePaymentInstrument(instrumentKey);
  }
  PaymentManagerStub.prototype.getPaymentInstrument = function(instrumentKey) {
    return this.delegate_ && this.delegate_.getPaymentInstrument && this.delegate_.getPaymentInstrument(instrumentKey);
  }
  PaymentManagerStub.prototype.keysOfPaymentInstruments = function() {
    return this.delegate_ && this.delegate_.keysOfPaymentInstruments && this.delegate_.keysOfPaymentInstruments();
  }
  PaymentManagerStub.prototype.hasPaymentInstrument = function(instrumentKey) {
    return this.delegate_ && this.delegate_.hasPaymentInstrument && this.delegate_.hasPaymentInstrument(instrumentKey);
  }
  PaymentManagerStub.prototype.setPaymentInstrument = function(instrumentKey, instrument) {
    return this.delegate_ && this.delegate_.setPaymentInstrument && this.delegate_.setPaymentInstrument(instrumentKey, instrument);
  }
  PaymentManagerStub.prototype.clearPaymentInstruments = function() {
    return this.delegate_ && this.delegate_.clearPaymentInstruments && this.delegate_.clearPaymentInstruments();
  }
  PaymentManagerStub.prototype.setUserHint = function(userHint) {
    return this.delegate_ && this.delegate_.setUserHint && this.delegate_.setUserHint(userHint);
  }

  PaymentManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentManager_Init_Name:
      var params = reader.decodeStruct(PaymentManager_Init_Params);
      this.init(params.contextUrl, params.serviceWorkerScope);
      return true;
    case kPaymentManager_SetUserHint_Name:
      var params = reader.decodeStruct(PaymentManager_SetUserHint_Params);
      this.setUserHint(params.userHint);
      return true;
    default:
      return false;
    }
  };

  PaymentManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentManager_DeletePaymentInstrument_Name:
      var params = reader.decodeStruct(PaymentManager_DeletePaymentInstrument_Params);
      this.deletePaymentInstrument(params.instrumentKey).then(function(response) {
        var responseParams =
            new PaymentManager_DeletePaymentInstrument_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPaymentManager_DeletePaymentInstrument_Name,
            codec.align(PaymentManager_DeletePaymentInstrument_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PaymentManager_DeletePaymentInstrument_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPaymentManager_GetPaymentInstrument_Name:
      var params = reader.decodeStruct(PaymentManager_GetPaymentInstrument_Params);
      this.getPaymentInstrument(params.instrumentKey).then(function(response) {
        var responseParams =
            new PaymentManager_GetPaymentInstrument_ResponseParams();
        responseParams.instrument = response.instrument;
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPaymentManager_GetPaymentInstrument_Name,
            codec.align(PaymentManager_GetPaymentInstrument_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PaymentManager_GetPaymentInstrument_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPaymentManager_KeysOfPaymentInstruments_Name:
      var params = reader.decodeStruct(PaymentManager_KeysOfPaymentInstruments_Params);
      this.keysOfPaymentInstruments().then(function(response) {
        var responseParams =
            new PaymentManager_KeysOfPaymentInstruments_ResponseParams();
        responseParams.keys = response.keys;
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPaymentManager_KeysOfPaymentInstruments_Name,
            codec.align(PaymentManager_KeysOfPaymentInstruments_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PaymentManager_KeysOfPaymentInstruments_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPaymentManager_HasPaymentInstrument_Name:
      var params = reader.decodeStruct(PaymentManager_HasPaymentInstrument_Params);
      this.hasPaymentInstrument(params.instrumentKey).then(function(response) {
        var responseParams =
            new PaymentManager_HasPaymentInstrument_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPaymentManager_HasPaymentInstrument_Name,
            codec.align(PaymentManager_HasPaymentInstrument_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PaymentManager_HasPaymentInstrument_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPaymentManager_SetPaymentInstrument_Name:
      var params = reader.decodeStruct(PaymentManager_SetPaymentInstrument_Params);
      this.setPaymentInstrument(params.instrumentKey, params.instrument).then(function(response) {
        var responseParams =
            new PaymentManager_SetPaymentInstrument_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPaymentManager_SetPaymentInstrument_Name,
            codec.align(PaymentManager_SetPaymentInstrument_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PaymentManager_SetPaymentInstrument_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPaymentManager_ClearPaymentInstruments_Name:
      var params = reader.decodeStruct(PaymentManager_ClearPaymentInstruments_Params);
      this.clearPaymentInstruments().then(function(response) {
        var responseParams =
            new PaymentManager_ClearPaymentInstruments_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPaymentManager_ClearPaymentInstruments_Name,
            codec.align(PaymentManager_ClearPaymentInstruments_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PaymentManager_ClearPaymentInstruments_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePaymentManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPaymentManager_Init_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentManager_Init_Params;
      break;
      case kPaymentManager_DeletePaymentInstrument_Name:
        if (message.expectsResponse())
          paramsClass = PaymentManager_DeletePaymentInstrument_Params;
      break;
      case kPaymentManager_GetPaymentInstrument_Name:
        if (message.expectsResponse())
          paramsClass = PaymentManager_GetPaymentInstrument_Params;
      break;
      case kPaymentManager_KeysOfPaymentInstruments_Name:
        if (message.expectsResponse())
          paramsClass = PaymentManager_KeysOfPaymentInstruments_Params;
      break;
      case kPaymentManager_HasPaymentInstrument_Name:
        if (message.expectsResponse())
          paramsClass = PaymentManager_HasPaymentInstrument_Params;
      break;
      case kPaymentManager_SetPaymentInstrument_Name:
        if (message.expectsResponse())
          paramsClass = PaymentManager_SetPaymentInstrument_Params;
      break;
      case kPaymentManager_ClearPaymentInstruments_Name:
        if (message.expectsResponse())
          paramsClass = PaymentManager_ClearPaymentInstruments_Params;
      break;
      case kPaymentManager_SetUserHint_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentManager_SetUserHint_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePaymentManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPaymentManager_DeletePaymentInstrument_Name:
        if (message.isResponse())
          paramsClass = PaymentManager_DeletePaymentInstrument_ResponseParams;
        break;
      case kPaymentManager_GetPaymentInstrument_Name:
        if (message.isResponse())
          paramsClass = PaymentManager_GetPaymentInstrument_ResponseParams;
        break;
      case kPaymentManager_KeysOfPaymentInstruments_Name:
        if (message.isResponse())
          paramsClass = PaymentManager_KeysOfPaymentInstruments_ResponseParams;
        break;
      case kPaymentManager_HasPaymentInstrument_Name:
        if (message.isResponse())
          paramsClass = PaymentManager_HasPaymentInstrument_ResponseParams;
        break;
      case kPaymentManager_SetPaymentInstrument_Name:
        if (message.isResponse())
          paramsClass = PaymentManager_SetPaymentInstrument_ResponseParams;
        break;
      case kPaymentManager_ClearPaymentInstruments_Name:
        if (message.isResponse())
          paramsClass = PaymentManager_ClearPaymentInstruments_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PaymentManager = {
    name: 'payments.mojom.PaymentManager',
    kVersion: 0,
    ptrClass: PaymentManagerPtr,
    proxyClass: PaymentManagerProxy,
    stubClass: PaymentManagerStub,
    validateRequest: validatePaymentManagerRequest,
    validateResponse: validatePaymentManagerResponse,
    mojomId: 'third_party/blink/public/platform/modules/payments/payment_app.mojom',
    fuzzMethods: {
      init: {
        params: PaymentManager_Init_Params,
      },
      deletePaymentInstrument: {
        params: PaymentManager_DeletePaymentInstrument_Params,
      },
      getPaymentInstrument: {
        params: PaymentManager_GetPaymentInstrument_Params,
      },
      keysOfPaymentInstruments: {
        params: PaymentManager_KeysOfPaymentInstruments_Params,
      },
      hasPaymentInstrument: {
        params: PaymentManager_HasPaymentInstrument_Params,
      },
      setPaymentInstrument: {
        params: PaymentManager_SetPaymentInstrument_Params,
      },
      clearPaymentInstruments: {
        params: PaymentManager_ClearPaymentInstruments_Params,
      },
      setUserHint: {
        params: PaymentManager_SetUserHint_Params,
      },
    },
  };
  PaymentManagerStub.prototype.validator = validatePaymentManagerRequest;
  PaymentManagerProxy.prototype.validator = validatePaymentManagerResponse;
  var kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name = 609724793;
  var kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name = 1118563485;
  var kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name = 1441995620;

  function PaymentHandlerResponseCallbackPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PaymentHandlerResponseCallback,
                                                   handleOrPtrInfo);
  }

  function PaymentHandlerResponseCallbackAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PaymentHandlerResponseCallback, associatedInterfacePtrInfo);
  }

  PaymentHandlerResponseCallbackAssociatedPtr.prototype =
      Object.create(PaymentHandlerResponseCallbackPtr.prototype);
  PaymentHandlerResponseCallbackAssociatedPtr.prototype.constructor =
      PaymentHandlerResponseCallbackAssociatedPtr;

  function PaymentHandlerResponseCallbackProxy(receiver) {
    this.receiver_ = receiver;
  }
  PaymentHandlerResponseCallbackPtr.prototype.onResponseForAbortPayment = function() {
    return PaymentHandlerResponseCallbackProxy.prototype.onResponseForAbortPayment
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentHandlerResponseCallbackProxy.prototype.onResponseForAbortPayment = function(paymentAborted, dispatchEventTime) {
    var params_ = new PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params();
    params_.paymentAborted = paymentAborted;
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name,
        codec.align(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params.encodedSize));
    builder.encodeStruct(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentHandlerResponseCallbackPtr.prototype.onResponseForCanMakePayment = function() {
    return PaymentHandlerResponseCallbackProxy.prototype.onResponseForCanMakePayment
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentHandlerResponseCallbackProxy.prototype.onResponseForCanMakePayment = function(canMakePayment, dispatchEventTime) {
    var params_ = new PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params();
    params_.canMakePayment = canMakePayment;
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name,
        codec.align(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params.encodedSize));
    builder.encodeStruct(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentHandlerResponseCallbackPtr.prototype.onResponseForPaymentRequest = function() {
    return PaymentHandlerResponseCallbackProxy.prototype.onResponseForPaymentRequest
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentHandlerResponseCallbackProxy.prototype.onResponseForPaymentRequest = function(response, dispatchEventTime) {
    var params_ = new PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params();
    params_.response = response;
    params_.dispatchEventTime = dispatchEventTime;
    var builder = new codec.MessageV0Builder(
        kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name,
        codec.align(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params.encodedSize));
    builder.encodeStruct(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PaymentHandlerResponseCallbackStub(delegate) {
    this.delegate_ = delegate;
  }
  PaymentHandlerResponseCallbackStub.prototype.onResponseForAbortPayment = function(paymentAborted, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponseForAbortPayment && this.delegate_.onResponseForAbortPayment(paymentAborted, dispatchEventTime);
  }
  PaymentHandlerResponseCallbackStub.prototype.onResponseForCanMakePayment = function(canMakePayment, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponseForCanMakePayment && this.delegate_.onResponseForCanMakePayment(canMakePayment, dispatchEventTime);
  }
  PaymentHandlerResponseCallbackStub.prototype.onResponseForPaymentRequest = function(response, dispatchEventTime) {
    return this.delegate_ && this.delegate_.onResponseForPaymentRequest && this.delegate_.onResponseForPaymentRequest(response, dispatchEventTime);
  }

  PaymentHandlerResponseCallbackStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name:
      var params = reader.decodeStruct(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params);
      this.onResponseForAbortPayment(params.paymentAborted, params.dispatchEventTime);
      return true;
    case kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name:
      var params = reader.decodeStruct(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params);
      this.onResponseForCanMakePayment(params.canMakePayment, params.dispatchEventTime);
      return true;
    case kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name:
      var params = reader.decodeStruct(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params);
      this.onResponseForPaymentRequest(params.response, params.dispatchEventTime);
      return true;
    default:
      return false;
    }
  };

  PaymentHandlerResponseCallbackStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePaymentHandlerResponseCallbackRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params;
      break;
      case kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params;
      break;
      case kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePaymentHandlerResponseCallbackResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PaymentHandlerResponseCallback = {
    name: 'payments.mojom.PaymentHandlerResponseCallback',
    kVersion: 0,
    ptrClass: PaymentHandlerResponseCallbackPtr,
    proxyClass: PaymentHandlerResponseCallbackProxy,
    stubClass: PaymentHandlerResponseCallbackStub,
    validateRequest: validatePaymentHandlerResponseCallbackRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/payments/payment_app.mojom',
    fuzzMethods: {
      onResponseForAbortPayment: {
        params: PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params,
      },
      onResponseForCanMakePayment: {
        params: PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params,
      },
      onResponseForPaymentRequest: {
        params: PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params,
      },
    },
  };
  PaymentHandlerResponseCallbackStub.prototype.validator = validatePaymentHandlerResponseCallbackRequest;
  PaymentHandlerResponseCallbackProxy.prototype.validator = null;
  exports.PaymentHandlerStatus = PaymentHandlerStatus;
  exports.PaymentInstrument = PaymentInstrument;
  exports.CanMakePaymentEventData = CanMakePaymentEventData;
  exports.PaymentRequestEventData = PaymentRequestEventData;
  exports.PaymentHandlerResponse = PaymentHandlerResponse;
  exports.PaymentManager = PaymentManager;
  exports.PaymentManagerPtr = PaymentManagerPtr;
  exports.PaymentManagerAssociatedPtr = PaymentManagerAssociatedPtr;
  exports.PaymentHandlerResponseCallback = PaymentHandlerResponseCallback;
  exports.PaymentHandlerResponseCallbackPtr = PaymentHandlerResponseCallbackPtr;
  exports.PaymentHandlerResponseCallbackAssociatedPtr = PaymentHandlerResponseCallbackAssociatedPtr;
})();