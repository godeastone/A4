// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/payments/payment_request.mojom';
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


  var PaymentErrorReason = {};
  PaymentErrorReason.UNKNOWN = 0;
  PaymentErrorReason.USER_CANCEL = PaymentErrorReason.UNKNOWN + 1;
  PaymentErrorReason.NOT_SUPPORTED = PaymentErrorReason.USER_CANCEL + 1;

  PaymentErrorReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PaymentErrorReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CanMakePaymentQueryResult = {};
  CanMakePaymentQueryResult.CAN_MAKE_PAYMENT = 0;
  CanMakePaymentQueryResult.CANNOT_MAKE_PAYMENT = CanMakePaymentQueryResult.CAN_MAKE_PAYMENT + 1;
  CanMakePaymentQueryResult.QUERY_QUOTA_EXCEEDED = CanMakePaymentQueryResult.CANNOT_MAKE_PAYMENT + 1;
  CanMakePaymentQueryResult.WARNING_CAN_MAKE_PAYMENT = CanMakePaymentQueryResult.QUERY_QUOTA_EXCEEDED + 1;
  CanMakePaymentQueryResult.WARNING_CANNOT_MAKE_PAYMENT = CanMakePaymentQueryResult.WARNING_CAN_MAKE_PAYMENT + 1;

  CanMakePaymentQueryResult.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  CanMakePaymentQueryResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AndroidPayEnvironment = {};
  AndroidPayEnvironment.PRODUCTION = 0;
  AndroidPayEnvironment.TEST = AndroidPayEnvironment.PRODUCTION + 1;

  AndroidPayEnvironment.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  AndroidPayEnvironment.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AndroidPayCardNetwork = {};
  AndroidPayCardNetwork.AMEX = 0;
  AndroidPayCardNetwork.DISCOVER = AndroidPayCardNetwork.AMEX + 1;
  AndroidPayCardNetwork.MASTERCARD = AndroidPayCardNetwork.DISCOVER + 1;
  AndroidPayCardNetwork.VISA = AndroidPayCardNetwork.MASTERCARD + 1;

  AndroidPayCardNetwork.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  AndroidPayCardNetwork.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AndroidPayTokenization = {};
  AndroidPayTokenization.UNSPECIFIED = 0;
  AndroidPayTokenization.GATEWAY_TOKEN = AndroidPayTokenization.UNSPECIFIED + 1;
  AndroidPayTokenization.NETWORK_TOKEN = AndroidPayTokenization.GATEWAY_TOKEN + 1;

  AndroidPayTokenization.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  AndroidPayTokenization.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BasicCardNetwork = {};
  BasicCardNetwork.AMEX = 0;
  BasicCardNetwork.DINERS = BasicCardNetwork.AMEX + 1;
  BasicCardNetwork.DISCOVER = BasicCardNetwork.DINERS + 1;
  BasicCardNetwork.JCB = BasicCardNetwork.DISCOVER + 1;
  BasicCardNetwork.MASTERCARD = BasicCardNetwork.JCB + 1;
  BasicCardNetwork.MIR = BasicCardNetwork.MASTERCARD + 1;
  BasicCardNetwork.UNIONPAY = BasicCardNetwork.MIR + 1;
  BasicCardNetwork.VISA = BasicCardNetwork.UNIONPAY + 1;

  BasicCardNetwork.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  BasicCardNetwork.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BasicCardType = {};
  BasicCardType.CREDIT = 0;
  BasicCardType.DEBIT = BasicCardType.CREDIT + 1;
  BasicCardType.PREPAID = BasicCardType.DEBIT + 1;

  BasicCardType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  BasicCardType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PaymentShippingType = {};
  PaymentShippingType.SHIPPING = 0;
  PaymentShippingType.DELIVERY = PaymentShippingType.SHIPPING + 1;
  PaymentShippingType.PICKUP = PaymentShippingType.DELIVERY + 1;

  PaymentShippingType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PaymentShippingType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PaymentComplete = {};
  PaymentComplete.FAIL = 0;
  PaymentComplete.SUCCESS = PaymentComplete.FAIL + 1;
  PaymentComplete.UNKNOWN = PaymentComplete.SUCCESS + 1;

  PaymentComplete.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PaymentComplete.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function PaymentResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentResponse.prototype.initDefaults_ = function() {
    this.methodName = null;
    this.stringifiedDetails = null;
    this.shippingAddress = null;
    this.shippingOption = null;
    this.payerName = null;
    this.payerEmail = null;
    this.payerPhone = null;
  };
  PaymentResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentResponse.generate = function(generator_) {
    var generated = new PaymentResponse;
    generated.methodName = generator_.generateString(false);
    generated.stringifiedDetails = generator_.generateString(false);
    generated.shippingAddress = generator_.generateStruct(payments.mojom.PaymentAddress, true);
    generated.shippingOption = generator_.generateString(true);
    generated.payerName = generator_.generateString(true);
    generated.payerEmail = generator_.generateString(true);
    generated.payerPhone = generator_.generateString(true);
    return generated;
  };

  PaymentResponse.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.methodName = mutator_.mutateString(this.methodName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.stringifiedDetails = mutator_.mutateString(this.stringifiedDetails, false);
    }
    if (mutator_.chooseMutateField()) {
      this.shippingAddress = mutator_.mutateStruct(payments.mojom.PaymentAddress, true);
    }
    if (mutator_.chooseMutateField()) {
      this.shippingOption = mutator_.mutateString(this.shippingOption, true);
    }
    if (mutator_.chooseMutateField()) {
      this.payerName = mutator_.mutateString(this.payerName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.payerEmail = mutator_.mutateString(this.payerEmail, true);
    }
    if (mutator_.chooseMutateField()) {
      this.payerPhone = mutator_.mutateString(this.payerPhone, true);
    }
    return this;
  };
  PaymentResponse.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentResponse.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentResponse.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentResponse.validate = function(messageValidator, offset) {
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


    // validate PaymentResponse.methodName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentResponse.stringifiedDetails
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentResponse.shippingAddress
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, payment_request_data$.PaymentAddress, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentResponse.shippingOption
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentResponse.payerName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentResponse.payerEmail
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentResponse.payerPhone
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentResponse.encodedSize = codec.kStructHeaderSize + 56;

  PaymentResponse.decode = function(decoder) {
    var packed;
    var val = new PaymentResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.methodName = decoder.decodeStruct(codec.String);
    val.stringifiedDetails = decoder.decodeStruct(codec.String);
    val.shippingAddress = decoder.decodeStructPointer(payment_request_data$.PaymentAddress);
    val.shippingOption = decoder.decodeStruct(codec.NullableString);
    val.payerName = decoder.decodeStruct(codec.NullableString);
    val.payerEmail = decoder.decodeStruct(codec.NullableString);
    val.payerPhone = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  PaymentResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.methodName);
    encoder.encodeStruct(codec.String, val.stringifiedDetails);
    encoder.encodeStructPointer(payment_request_data$.PaymentAddress, val.shippingAddress);
    encoder.encodeStruct(codec.NullableString, val.shippingOption);
    encoder.encodeStruct(codec.NullableString, val.payerName);
    encoder.encodeStruct(codec.NullableString, val.payerEmail);
    encoder.encodeStruct(codec.NullableString, val.payerPhone);
  };
  function PaymentItem(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentItem.prototype.initDefaults_ = function() {
    this.label = null;
    this.amount = null;
    this.pending = false;
  };
  PaymentItem.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentItem.generate = function(generator_) {
    var generated = new PaymentItem;
    generated.label = generator_.generateString(false);
    generated.amount = generator_.generateStruct(payments.mojom.PaymentCurrencyAmount, false);
    generated.pending = generator_.generateBool();
    return generated;
  };

  PaymentItem.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.amount = mutator_.mutateStruct(payments.mojom.PaymentCurrencyAmount, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pending = mutator_.mutateBool(this.pending);
    }
    return this;
  };
  PaymentItem.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentItem.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentItem.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentItem.validate = function(messageValidator, offset) {
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


    // validate PaymentItem.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentItem.amount
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, payment_request_data$.PaymentCurrencyAmount, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PaymentItem.encodedSize = codec.kStructHeaderSize + 24;

  PaymentItem.decode = function(decoder) {
    var packed;
    var val = new PaymentItem();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStruct(codec.String);
    val.amount = decoder.decodeStructPointer(payment_request_data$.PaymentCurrencyAmount);
    packed = decoder.readUint8();
    val.pending = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentItem.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentItem.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStructPointer(payment_request_data$.PaymentCurrencyAmount, val.amount);
    packed = 0;
    packed |= (val.pending & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentShippingOption(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentShippingOption.prototype.initDefaults_ = function() {
    this.id = null;
    this.label = null;
    this.amount = null;
    this.selected = false;
  };
  PaymentShippingOption.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentShippingOption.generate = function(generator_) {
    var generated = new PaymentShippingOption;
    generated.id = generator_.generateString(false);
    generated.label = generator_.generateString(false);
    generated.amount = generator_.generateStruct(payments.mojom.PaymentCurrencyAmount, false);
    generated.selected = generator_.generateBool();
    return generated;
  };

  PaymentShippingOption.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    if (mutator_.chooseMutateField()) {
      this.amount = mutator_.mutateStruct(payments.mojom.PaymentCurrencyAmount, false);
    }
    if (mutator_.chooseMutateField()) {
      this.selected = mutator_.mutateBool(this.selected);
    }
    return this;
  };
  PaymentShippingOption.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentShippingOption.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentShippingOption.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentShippingOption.validate = function(messageValidator, offset) {
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


    // validate PaymentShippingOption.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentShippingOption.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentShippingOption.amount
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, payment_request_data$.PaymentCurrencyAmount, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PaymentShippingOption.encodedSize = codec.kStructHeaderSize + 32;

  PaymentShippingOption.decode = function(decoder) {
    var packed;
    var val = new PaymentShippingOption();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.label = decoder.decodeStruct(codec.String);
    val.amount = decoder.decodeStructPointer(payment_request_data$.PaymentCurrencyAmount);
    packed = decoder.readUint8();
    val.selected = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentShippingOption.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentShippingOption.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStruct(codec.String, val.label);
    encoder.encodeStructPointer(payment_request_data$.PaymentCurrencyAmount, val.amount);
    packed = 0;
    packed |= (val.selected & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AndroidPayTokenizationParameter(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AndroidPayTokenizationParameter.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  AndroidPayTokenizationParameter.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AndroidPayTokenizationParameter.generate = function(generator_) {
    var generated = new AndroidPayTokenizationParameter;
    generated.key = generator_.generateString(true);
    generated.value = generator_.generateString(true);
    return generated;
  };

  AndroidPayTokenizationParameter.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, true);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, true);
    }
    return this;
  };
  AndroidPayTokenizationParameter.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AndroidPayTokenizationParameter.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AndroidPayTokenizationParameter.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AndroidPayTokenizationParameter.validate = function(messageValidator, offset) {
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


    // validate AndroidPayTokenizationParameter.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AndroidPayTokenizationParameter.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AndroidPayTokenizationParameter.encodedSize = codec.kStructHeaderSize + 16;

  AndroidPayTokenizationParameter.decode = function(decoder) {
    var packed;
    var val = new AndroidPayTokenizationParameter();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.NullableString);
    val.value = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  AndroidPayTokenizationParameter.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AndroidPayTokenizationParameter.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.key);
    encoder.encodeStruct(codec.NullableString, val.value);
  };
  function PaymentMethodData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentMethodData.prototype.initDefaults_ = function() {
    this.supportedMethods = null;
    this.stringifiedData = null;
    this.environment = 0;
    this.tokenizationType = 0;
    this.merchantName = null;
    this.merchantId = null;
    this.allowedCardNetworks = null;
    this.parameters = null;
    this.minGooglePlayServicesVersion = 0;
    this.apiVersion = 0;
    this.supportedNetworks = null;
    this.supportedTypes = null;
  };
  PaymentMethodData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentMethodData.generate = function(generator_) {
    var generated = new PaymentMethodData;
    generated.supportedMethods = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.stringifiedData = generator_.generateString(false);
    generated.environment = generator_.generateEnum(0, 1);
    generated.merchantName = generator_.generateString(true);
    generated.merchantId = generator_.generateString(true);
    generated.allowedCardNetworks = generator_.generateArray(function() {
      return generator_.generateEnum(0, 3);
    });
    generated.tokenizationType = generator_.generateEnum(0, 2);
    generated.parameters = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.AndroidPayTokenizationParameter, false);
    });
    generated.minGooglePlayServicesVersion = generator_.generateInt32();
    generated.apiVersion = generator_.generateInt32();
    generated.supportedNetworks = generator_.generateArray(function() {
      return generator_.generateEnum(0, 7);
    });
    generated.supportedTypes = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2);
    });
    return generated;
  };

  PaymentMethodData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.supportedMethods = mutator_.mutateArray(this.supportedMethods, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.stringifiedData = mutator_.mutateString(this.stringifiedData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.environment = mutator_.mutateEnum(this.environment, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.merchantName = mutator_.mutateString(this.merchantName, true);
    }
    if (mutator_.chooseMutateField()) {
      this.merchantId = mutator_.mutateString(this.merchantId, true);
    }
    if (mutator_.chooseMutateField()) {
      this.allowedCardNetworks = mutator_.mutateArray(this.allowedCardNetworks, function(val) {
        return mutator_.mutateEnum(val, 0, 3);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.tokenizationType = mutator_.mutateEnum(this.tokenizationType, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.parameters = mutator_.mutateArray(this.parameters, function(val) {
        return mutator_.mutateStruct(payments.mojom.AndroidPayTokenizationParameter, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.minGooglePlayServicesVersion = mutator_.mutateInt32(this.minGooglePlayServicesVersion);
    }
    if (mutator_.chooseMutateField()) {
      this.apiVersion = mutator_.mutateInt32(this.apiVersion);
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
  PaymentMethodData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentMethodData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentMethodData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentMethodData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 88}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.supportedMethods
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.stringifiedData
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.environment
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, AndroidPayEnvironment);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.merchantName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.merchantId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.allowedCardNetworks
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, new codec.Enum(AndroidPayCardNetwork), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.tokenizationType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, AndroidPayTokenization);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.parameters
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(AndroidPayTokenizationParameter), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;




    // validate PaymentMethodData.supportedNetworks
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 4, new codec.Enum(BasicCardNetwork), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentMethodData.supportedTypes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 72, 4, new codec.Enum(BasicCardType), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentMethodData.encodedSize = codec.kStructHeaderSize + 80;

  PaymentMethodData.decode = function(decoder) {
    var packed;
    var val = new PaymentMethodData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.supportedMethods = decoder.decodeArrayPointer(codec.String);
    val.stringifiedData = decoder.decodeStruct(codec.String);
    val.environment = decoder.decodeStruct(codec.Int32);
    val.tokenizationType = decoder.decodeStruct(codec.Int32);
    val.merchantName = decoder.decodeStruct(codec.NullableString);
    val.merchantId = decoder.decodeStruct(codec.NullableString);
    val.allowedCardNetworks = decoder.decodeArrayPointer(new codec.Enum(AndroidPayCardNetwork));
    val.parameters = decoder.decodeArrayPointer(new codec.PointerTo(AndroidPayTokenizationParameter));
    val.minGooglePlayServicesVersion = decoder.decodeStruct(codec.Int32);
    val.apiVersion = decoder.decodeStruct(codec.Int32);
    val.supportedNetworks = decoder.decodeArrayPointer(new codec.Enum(BasicCardNetwork));
    val.supportedTypes = decoder.decodeArrayPointer(new codec.Enum(BasicCardType));
    return val;
  };

  PaymentMethodData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentMethodData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.supportedMethods);
    encoder.encodeStruct(codec.String, val.stringifiedData);
    encoder.encodeStruct(codec.Int32, val.environment);
    encoder.encodeStruct(codec.Int32, val.tokenizationType);
    encoder.encodeStruct(codec.NullableString, val.merchantName);
    encoder.encodeStruct(codec.NullableString, val.merchantId);
    encoder.encodeArrayPointer(new codec.Enum(AndroidPayCardNetwork), val.allowedCardNetworks);
    encoder.encodeArrayPointer(new codec.PointerTo(AndroidPayTokenizationParameter), val.parameters);
    encoder.encodeStruct(codec.Int32, val.minGooglePlayServicesVersion);
    encoder.encodeStruct(codec.Int32, val.apiVersion);
    encoder.encodeArrayPointer(new codec.Enum(BasicCardNetwork), val.supportedNetworks);
    encoder.encodeArrayPointer(new codec.Enum(BasicCardType), val.supportedTypes);
  };
  function PaymentDetailsModifier(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentDetailsModifier.prototype.initDefaults_ = function() {
    this.total = null;
    this.additionalDisplayItems = null;
    this.methodData = null;
  };
  PaymentDetailsModifier.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentDetailsModifier.generate = function(generator_) {
    var generated = new PaymentDetailsModifier;
    generated.total = generator_.generateStruct(payments.mojom.PaymentItem, true);
    generated.additionalDisplayItems = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentItem, false);
    });
    generated.methodData = generator_.generateStruct(payments.mojom.PaymentMethodData, false);
    return generated;
  };

  PaymentDetailsModifier.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.total = mutator_.mutateStruct(payments.mojom.PaymentItem, true);
    }
    if (mutator_.chooseMutateField()) {
      this.additionalDisplayItems = mutator_.mutateArray(this.additionalDisplayItems, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentItem, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.methodData = mutator_.mutateStruct(payments.mojom.PaymentMethodData, false);
    }
    return this;
  };
  PaymentDetailsModifier.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentDetailsModifier.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentDetailsModifier.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentDetailsModifier.validate = function(messageValidator, offset) {
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


    // validate PaymentDetailsModifier.total
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentItem, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetailsModifier.additionalDisplayItems
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(PaymentItem), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetailsModifier.methodData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PaymentMethodData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentDetailsModifier.encodedSize = codec.kStructHeaderSize + 24;

  PaymentDetailsModifier.decode = function(decoder) {
    var packed;
    var val = new PaymentDetailsModifier();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.total = decoder.decodeStructPointer(PaymentItem);
    val.additionalDisplayItems = decoder.decodeArrayPointer(new codec.PointerTo(PaymentItem));
    val.methodData = decoder.decodeStructPointer(PaymentMethodData);
    return val;
  };

  PaymentDetailsModifier.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentDetailsModifier.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentItem, val.total);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentItem), val.additionalDisplayItems);
    encoder.encodeStructPointer(PaymentMethodData, val.methodData);
  };
  function PaymentDetails(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentDetails.prototype.initDefaults_ = function() {
    this.total = null;
    this.displayItems = null;
    this.shippingOptions = null;
    this.modifiers = null;
    this.error = "";
    this.id = null;
  };
  PaymentDetails.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentDetails.generate = function(generator_) {
    var generated = new PaymentDetails;
    generated.total = generator_.generateStruct(payments.mojom.PaymentItem, true);
    generated.displayItems = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentItem, false);
    });
    generated.shippingOptions = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentShippingOption, false);
    });
    generated.modifiers = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentDetailsModifier, false);
    });
    generated.error = generator_.generateString(false);
    generated.id = generator_.generateString(true);
    return generated;
  };

  PaymentDetails.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.total = mutator_.mutateStruct(payments.mojom.PaymentItem, true);
    }
    if (mutator_.chooseMutateField()) {
      this.displayItems = mutator_.mutateArray(this.displayItems, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentItem, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.shippingOptions = mutator_.mutateArray(this.shippingOptions, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentShippingOption, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.modifiers = mutator_.mutateArray(this.modifiers, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentDetailsModifier, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, true);
    }
    return this;
  };
  PaymentDetails.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentDetails.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentDetails.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentDetails.validate = function(messageValidator, offset) {
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


    // validate PaymentDetails.total
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentItem, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetails.displayItems
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(PaymentItem), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetails.shippingOptions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(PaymentShippingOption), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetails.modifiers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(PaymentDetailsModifier), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetails.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentDetails.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentDetails.encodedSize = codec.kStructHeaderSize + 48;

  PaymentDetails.decode = function(decoder) {
    var packed;
    var val = new PaymentDetails();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.total = decoder.decodeStructPointer(PaymentItem);
    val.displayItems = decoder.decodeArrayPointer(new codec.PointerTo(PaymentItem));
    val.shippingOptions = decoder.decodeArrayPointer(new codec.PointerTo(PaymentShippingOption));
    val.modifiers = decoder.decodeArrayPointer(new codec.PointerTo(PaymentDetailsModifier));
    val.error = decoder.decodeStruct(codec.String);
    val.id = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  PaymentDetails.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentDetails.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentItem, val.total);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentItem), val.displayItems);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentShippingOption), val.shippingOptions);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentDetailsModifier), val.modifiers);
    encoder.encodeStruct(codec.String, val.error);
    encoder.encodeStruct(codec.NullableString, val.id);
  };
  function PaymentOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentOptions.prototype.initDefaults_ = function() {
    this.requestPayerName = false;
    this.requestPayerEmail = false;
    this.requestPayerPhone = false;
    this.requestShipping = false;
    this.shippingType = 0;
  };
  PaymentOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentOptions.generate = function(generator_) {
    var generated = new PaymentOptions;
    generated.requestPayerName = generator_.generateBool();
    generated.requestPayerEmail = generator_.generateBool();
    generated.requestPayerPhone = generator_.generateBool();
    generated.requestShipping = generator_.generateBool();
    generated.shippingType = generator_.generateEnum(0, 2);
    return generated;
  };

  PaymentOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.requestPayerName = mutator_.mutateBool(this.requestPayerName);
    }
    if (mutator_.chooseMutateField()) {
      this.requestPayerEmail = mutator_.mutateBool(this.requestPayerEmail);
    }
    if (mutator_.chooseMutateField()) {
      this.requestPayerPhone = mutator_.mutateBool(this.requestPayerPhone);
    }
    if (mutator_.chooseMutateField()) {
      this.requestShipping = mutator_.mutateBool(this.requestShipping);
    }
    if (mutator_.chooseMutateField()) {
      this.shippingType = mutator_.mutateEnum(this.shippingType, 0, 2);
    }
    return this;
  };
  PaymentOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentOptions.validate = function(messageValidator, offset) {
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






    // validate PaymentOptions.shippingType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, PaymentShippingType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentOptions.encodedSize = codec.kStructHeaderSize + 8;

  PaymentOptions.decode = function(decoder) {
    var packed;
    var val = new PaymentOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.requestPayerName = (packed >> 0) & 1 ? true : false;
    val.requestPayerEmail = (packed >> 1) & 1 ? true : false;
    val.requestPayerPhone = (packed >> 2) & 1 ? true : false;
    val.requestShipping = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.shippingType = decoder.decodeStruct(codec.Int32);
    return val;
  };

  PaymentOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentOptions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.requestPayerName & 1) << 0
    packed |= (val.requestPayerEmail & 1) << 1
    packed |= (val.requestPayerPhone & 1) << 2
    packed |= (val.requestShipping & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.shippingType);
  };
  function PaymentRequestClient_OnShippingAddressChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnShippingAddressChange_Params.prototype.initDefaults_ = function() {
    this.address = null;
  };
  PaymentRequestClient_OnShippingAddressChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnShippingAddressChange_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnShippingAddressChange_Params;
    generated.address = generator_.generateStruct(payments.mojom.PaymentAddress, false);
    return generated;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.address = mutator_.mutateStruct(payments.mojom.PaymentAddress, false);
    }
    return this;
  };
  PaymentRequestClient_OnShippingAddressChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnShippingAddressChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequestClient_OnShippingAddressChange_Params.address
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, payment_request_data$.PaymentAddress, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnShippingAddressChange_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnShippingAddressChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeStructPointer(payment_request_data$.PaymentAddress);
    return val;
  };

  PaymentRequestClient_OnShippingAddressChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnShippingAddressChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(payment_request_data$.PaymentAddress, val.address);
  };
  function PaymentRequestClient_OnShippingOptionChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnShippingOptionChange_Params.prototype.initDefaults_ = function() {
    this.shippingOptionId = null;
  };
  PaymentRequestClient_OnShippingOptionChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnShippingOptionChange_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnShippingOptionChange_Params;
    generated.shippingOptionId = generator_.generateString(false);
    return generated;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.shippingOptionId = mutator_.mutateString(this.shippingOptionId, false);
    }
    return this;
  };
  PaymentRequestClient_OnShippingOptionChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnShippingOptionChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequestClient_OnShippingOptionChange_Params.shippingOptionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnShippingOptionChange_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnShippingOptionChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shippingOptionId = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentRequestClient_OnShippingOptionChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnShippingOptionChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.shippingOptionId);
  };
  function PaymentRequestClient_OnPaymentResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnPaymentResponse_Params.prototype.initDefaults_ = function() {
    this.response = null;
  };
  PaymentRequestClient_OnPaymentResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnPaymentResponse_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnPaymentResponse_Params;
    generated.response = generator_.generateStruct(payments.mojom.PaymentResponse, false);
    return generated;
  };

  PaymentRequestClient_OnPaymentResponse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateStruct(payments.mojom.PaymentResponse, false);
    }
    return this;
  };
  PaymentRequestClient_OnPaymentResponse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnPaymentResponse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnPaymentResponse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnPaymentResponse_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequestClient_OnPaymentResponse_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentResponse, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnPaymentResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnPaymentResponse_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnPaymentResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(PaymentResponse);
    return val;
  };

  PaymentRequestClient_OnPaymentResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnPaymentResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentResponse, val.response);
  };
  function PaymentRequestClient_OnError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnError_Params.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  PaymentRequestClient_OnError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnError_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnError_Params;
    generated.error = generator_.generateEnum(0, 2);
    return generated;
  };

  PaymentRequestClient_OnError_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 2);
    }
    return this;
  };
  PaymentRequestClient_OnError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnError_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequestClient_OnError_Params.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PaymentErrorReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnError_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnError_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequestClient_OnError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnError_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequestClient_OnComplete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnComplete_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequestClient_OnComplete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnComplete_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnComplete_Params;
    return generated;
  };

  PaymentRequestClient_OnComplete_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentRequestClient_OnComplete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnComplete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnComplete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnComplete_Params.validate = function(messageValidator, offset) {
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

  PaymentRequestClient_OnComplete_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequestClient_OnComplete_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnComplete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequestClient_OnComplete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnComplete_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentRequestClient_OnAbort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnAbort_Params.prototype.initDefaults_ = function() {
    this.abortedSuccessfully = false;
  };
  PaymentRequestClient_OnAbort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnAbort_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnAbort_Params;
    generated.abortedSuccessfully = generator_.generateBool();
    return generated;
  };

  PaymentRequestClient_OnAbort_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.abortedSuccessfully = mutator_.mutateBool(this.abortedSuccessfully);
    }
    return this;
  };
  PaymentRequestClient_OnAbort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnAbort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnAbort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnAbort_Params.validate = function(messageValidator, offset) {
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

  PaymentRequestClient_OnAbort_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnAbort_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnAbort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.abortedSuccessfully = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequestClient_OnAbort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnAbort_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.abortedSuccessfully & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequestClient_OnCanMakePayment_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_OnCanMakePayment_Params.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  PaymentRequestClient_OnCanMakePayment_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_OnCanMakePayment_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_OnCanMakePayment_Params;
    generated.result = generator_.generateEnum(0, 4);
    return generated;
  };

  PaymentRequestClient_OnCanMakePayment_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 4);
    }
    return this;
  };
  PaymentRequestClient_OnCanMakePayment_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_OnCanMakePayment_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_OnCanMakePayment_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_OnCanMakePayment_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequestClient_OnCanMakePayment_Params.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CanMakePaymentQueryResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequestClient_OnCanMakePayment_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequestClient_OnCanMakePayment_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_OnCanMakePayment_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequestClient_OnCanMakePayment_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_OnCanMakePayment_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequestClient_WarnNoFavicon_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequestClient_WarnNoFavicon_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequestClient_WarnNoFavicon_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequestClient_WarnNoFavicon_Params.generate = function(generator_) {
    var generated = new PaymentRequestClient_WarnNoFavicon_Params;
    return generated;
  };

  PaymentRequestClient_WarnNoFavicon_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentRequestClient_WarnNoFavicon_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequestClient_WarnNoFavicon_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequestClient_WarnNoFavicon_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequestClient_WarnNoFavicon_Params.validate = function(messageValidator, offset) {
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

  PaymentRequestClient_WarnNoFavicon_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequestClient_WarnNoFavicon_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequestClient_WarnNoFavicon_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequestClient_WarnNoFavicon_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequestClient_WarnNoFavicon_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentRequest_Init_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Init_Params.prototype.initDefaults_ = function() {
    this.client = new PaymentRequestClientPtr();
    this.methodData = null;
    this.details = null;
    this.options = null;
  };
  PaymentRequest_Init_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_Init_Params.generate = function(generator_) {
    var generated = new PaymentRequest_Init_Params;
    generated.client = generator_.generateInterface("payments.mojom.PaymentRequestClient", false);
    generated.methodData = generator_.generateArray(function() {
      return generator_.generateStruct(payments.mojom.PaymentMethodData, false);
    });
    generated.details = generator_.generateStruct(payments.mojom.PaymentDetails, false);
    generated.options = generator_.generateStruct(payments.mojom.PaymentOptions, false);
    return generated;
  };

  PaymentRequest_Init_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "payments.mojom.PaymentRequestClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.methodData = mutator_.mutateArray(this.methodData, function(val) {
        return mutator_.mutateStruct(payments.mojom.PaymentMethodData, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.details = mutator_.mutateStruct(payments.mojom.PaymentDetails, false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(payments.mojom.PaymentOptions, false);
    }
    return this;
  };
  PaymentRequest_Init_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["payments.mojom.PaymentRequestClientPtr"]);
    }
    return handles;
  };

  PaymentRequest_Init_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_Init_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  PaymentRequest_Init_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequest_Init_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequest_Init_Params.methodData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(PaymentMethodData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequest_Init_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PaymentDetails, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentRequest_Init_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, PaymentOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_Init_Params.encodedSize = codec.kStructHeaderSize + 32;

  PaymentRequest_Init_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Init_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(PaymentRequestClientPtr));
    val.methodData = decoder.decodeArrayPointer(new codec.PointerTo(PaymentMethodData));
    val.details = decoder.decodeStructPointer(PaymentDetails);
    val.options = decoder.decodeStructPointer(PaymentOptions);
    return val;
  };

  PaymentRequest_Init_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Init_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PaymentRequestClientPtr), val.client);
    encoder.encodeArrayPointer(new codec.PointerTo(PaymentMethodData), val.methodData);
    encoder.encodeStructPointer(PaymentDetails, val.details);
    encoder.encodeStructPointer(PaymentOptions, val.options);
  };
  function PaymentRequest_Show_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Show_Params.prototype.initDefaults_ = function() {
    this.isUserGesture = false;
  };
  PaymentRequest_Show_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_Show_Params.generate = function(generator_) {
    var generated = new PaymentRequest_Show_Params;
    generated.isUserGesture = generator_.generateBool();
    return generated;
  };

  PaymentRequest_Show_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isUserGesture = mutator_.mutateBool(this.isUserGesture);
    }
    return this;
  };
  PaymentRequest_Show_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequest_Show_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_Show_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequest_Show_Params.validate = function(messageValidator, offset) {
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

  PaymentRequest_Show_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequest_Show_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Show_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isUserGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequest_Show_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Show_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isUserGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequest_UpdateWith_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_UpdateWith_Params.prototype.initDefaults_ = function() {
    this.details = null;
  };
  PaymentRequest_UpdateWith_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_UpdateWith_Params.generate = function(generator_) {
    var generated = new PaymentRequest_UpdateWith_Params;
    generated.details = generator_.generateStruct(payments.mojom.PaymentDetails, false);
    return generated;
  };

  PaymentRequest_UpdateWith_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.details = mutator_.mutateStruct(payments.mojom.PaymentDetails, false);
    }
    return this;
  };
  PaymentRequest_UpdateWith_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequest_UpdateWith_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_UpdateWith_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequest_UpdateWith_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequest_UpdateWith_Params.details
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PaymentDetails, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_UpdateWith_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequest_UpdateWith_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_UpdateWith_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.details = decoder.decodeStructPointer(PaymentDetails);
    return val;
  };

  PaymentRequest_UpdateWith_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_UpdateWith_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PaymentDetails, val.details);
  };
  function PaymentRequest_NoUpdatedPaymentDetails_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_NoUpdatedPaymentDetails_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequest_NoUpdatedPaymentDetails_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_NoUpdatedPaymentDetails_Params.generate = function(generator_) {
    var generated = new PaymentRequest_NoUpdatedPaymentDetails_Params;
    return generated;
  };

  PaymentRequest_NoUpdatedPaymentDetails_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentRequest_NoUpdatedPaymentDetails_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequest_NoUpdatedPaymentDetails_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_NoUpdatedPaymentDetails_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequest_NoUpdatedPaymentDetails_Params.validate = function(messageValidator, offset) {
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

  PaymentRequest_NoUpdatedPaymentDetails_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequest_NoUpdatedPaymentDetails_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_NoUpdatedPaymentDetails_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequest_NoUpdatedPaymentDetails_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_NoUpdatedPaymentDetails_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentRequest_Abort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Abort_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequest_Abort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_Abort_Params.generate = function(generator_) {
    var generated = new PaymentRequest_Abort_Params;
    return generated;
  };

  PaymentRequest_Abort_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentRequest_Abort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequest_Abort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_Abort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequest_Abort_Params.validate = function(messageValidator, offset) {
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

  PaymentRequest_Abort_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequest_Abort_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Abort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequest_Abort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Abort_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PaymentRequest_Complete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_Complete_Params.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  PaymentRequest_Complete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_Complete_Params.generate = function(generator_) {
    var generated = new PaymentRequest_Complete_Params;
    generated.result = generator_.generateEnum(0, 2);
    return generated;
  };

  PaymentRequest_Complete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 2);
    }
    return this;
  };
  PaymentRequest_Complete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequest_Complete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_Complete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequest_Complete_Params.validate = function(messageValidator, offset) {
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


    // validate PaymentRequest_Complete_Params.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PaymentComplete);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentRequest_Complete_Params.encodedSize = codec.kStructHeaderSize + 8;

  PaymentRequest_Complete_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_Complete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PaymentRequest_Complete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_Complete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PaymentRequest_CanMakePayment_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentRequest_CanMakePayment_Params.prototype.initDefaults_ = function() {
  };
  PaymentRequest_CanMakePayment_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentRequest_CanMakePayment_Params.generate = function(generator_) {
    var generated = new PaymentRequest_CanMakePayment_Params;
    return generated;
  };

  PaymentRequest_CanMakePayment_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PaymentRequest_CanMakePayment_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentRequest_CanMakePayment_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentRequest_CanMakePayment_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentRequest_CanMakePayment_Params.validate = function(messageValidator, offset) {
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

  PaymentRequest_CanMakePayment_Params.encodedSize = codec.kStructHeaderSize + 0;

  PaymentRequest_CanMakePayment_Params.decode = function(decoder) {
    var packed;
    var val = new PaymentRequest_CanMakePayment_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PaymentRequest_CanMakePayment_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentRequest_CanMakePayment_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kPaymentRequestClient_OnShippingAddressChange_Name = 1971519876;
  var kPaymentRequestClient_OnShippingOptionChange_Name = 1214123946;
  var kPaymentRequestClient_OnPaymentResponse_Name = 2076698315;
  var kPaymentRequestClient_OnError_Name = 746265144;
  var kPaymentRequestClient_OnComplete_Name = 1020889524;
  var kPaymentRequestClient_OnAbort_Name = 681933147;
  var kPaymentRequestClient_OnCanMakePayment_Name = 92862420;
  var kPaymentRequestClient_WarnNoFavicon_Name = 73680076;

  function PaymentRequestClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PaymentRequestClient,
                                                   handleOrPtrInfo);
  }

  function PaymentRequestClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PaymentRequestClient, associatedInterfacePtrInfo);
  }

  PaymentRequestClientAssociatedPtr.prototype =
      Object.create(PaymentRequestClientPtr.prototype);
  PaymentRequestClientAssociatedPtr.prototype.constructor =
      PaymentRequestClientAssociatedPtr;

  function PaymentRequestClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  PaymentRequestClientPtr.prototype.onShippingAddressChange = function() {
    return PaymentRequestClientProxy.prototype.onShippingAddressChange
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onShippingAddressChange = function(address) {
    var params_ = new PaymentRequestClient_OnShippingAddressChange_Params();
    params_.address = address;
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnShippingAddressChange_Name,
        codec.align(PaymentRequestClient_OnShippingAddressChange_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnShippingAddressChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.onShippingOptionChange = function() {
    return PaymentRequestClientProxy.prototype.onShippingOptionChange
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onShippingOptionChange = function(shippingOptionId) {
    var params_ = new PaymentRequestClient_OnShippingOptionChange_Params();
    params_.shippingOptionId = shippingOptionId;
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnShippingOptionChange_Name,
        codec.align(PaymentRequestClient_OnShippingOptionChange_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnShippingOptionChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.onPaymentResponse = function() {
    return PaymentRequestClientProxy.prototype.onPaymentResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onPaymentResponse = function(response) {
    var params_ = new PaymentRequestClient_OnPaymentResponse_Params();
    params_.response = response;
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnPaymentResponse_Name,
        codec.align(PaymentRequestClient_OnPaymentResponse_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnPaymentResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.onError = function() {
    return PaymentRequestClientProxy.prototype.onError
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onError = function(error) {
    var params_ = new PaymentRequestClient_OnError_Params();
    params_.error = error;
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnError_Name,
        codec.align(PaymentRequestClient_OnError_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.onComplete = function() {
    return PaymentRequestClientProxy.prototype.onComplete
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onComplete = function() {
    var params_ = new PaymentRequestClient_OnComplete_Params();
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnComplete_Name,
        codec.align(PaymentRequestClient_OnComplete_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnComplete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.onAbort = function() {
    return PaymentRequestClientProxy.prototype.onAbort
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onAbort = function(abortedSuccessfully) {
    var params_ = new PaymentRequestClient_OnAbort_Params();
    params_.abortedSuccessfully = abortedSuccessfully;
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnAbort_Name,
        codec.align(PaymentRequestClient_OnAbort_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnAbort_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.onCanMakePayment = function() {
    return PaymentRequestClientProxy.prototype.onCanMakePayment
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.onCanMakePayment = function(result) {
    var params_ = new PaymentRequestClient_OnCanMakePayment_Params();
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_OnCanMakePayment_Name,
        codec.align(PaymentRequestClient_OnCanMakePayment_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_OnCanMakePayment_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestClientPtr.prototype.warnNoFavicon = function() {
    return PaymentRequestClientProxy.prototype.warnNoFavicon
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestClientProxy.prototype.warnNoFavicon = function() {
    var params_ = new PaymentRequestClient_WarnNoFavicon_Params();
    var builder = new codec.MessageV0Builder(
        kPaymentRequestClient_WarnNoFavicon_Name,
        codec.align(PaymentRequestClient_WarnNoFavicon_Params.encodedSize));
    builder.encodeStruct(PaymentRequestClient_WarnNoFavicon_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PaymentRequestClientStub(delegate) {
    this.delegate_ = delegate;
  }
  PaymentRequestClientStub.prototype.onShippingAddressChange = function(address) {
    return this.delegate_ && this.delegate_.onShippingAddressChange && this.delegate_.onShippingAddressChange(address);
  }
  PaymentRequestClientStub.prototype.onShippingOptionChange = function(shippingOptionId) {
    return this.delegate_ && this.delegate_.onShippingOptionChange && this.delegate_.onShippingOptionChange(shippingOptionId);
  }
  PaymentRequestClientStub.prototype.onPaymentResponse = function(response) {
    return this.delegate_ && this.delegate_.onPaymentResponse && this.delegate_.onPaymentResponse(response);
  }
  PaymentRequestClientStub.prototype.onError = function(error) {
    return this.delegate_ && this.delegate_.onError && this.delegate_.onError(error);
  }
  PaymentRequestClientStub.prototype.onComplete = function() {
    return this.delegate_ && this.delegate_.onComplete && this.delegate_.onComplete();
  }
  PaymentRequestClientStub.prototype.onAbort = function(abortedSuccessfully) {
    return this.delegate_ && this.delegate_.onAbort && this.delegate_.onAbort(abortedSuccessfully);
  }
  PaymentRequestClientStub.prototype.onCanMakePayment = function(result) {
    return this.delegate_ && this.delegate_.onCanMakePayment && this.delegate_.onCanMakePayment(result);
  }
  PaymentRequestClientStub.prototype.warnNoFavicon = function() {
    return this.delegate_ && this.delegate_.warnNoFavicon && this.delegate_.warnNoFavicon();
  }

  PaymentRequestClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentRequestClient_OnShippingAddressChange_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnShippingAddressChange_Params);
      this.onShippingAddressChange(params.address);
      return true;
    case kPaymentRequestClient_OnShippingOptionChange_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnShippingOptionChange_Params);
      this.onShippingOptionChange(params.shippingOptionId);
      return true;
    case kPaymentRequestClient_OnPaymentResponse_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnPaymentResponse_Params);
      this.onPaymentResponse(params.response);
      return true;
    case kPaymentRequestClient_OnError_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnError_Params);
      this.onError(params.error);
      return true;
    case kPaymentRequestClient_OnComplete_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnComplete_Params);
      this.onComplete();
      return true;
    case kPaymentRequestClient_OnAbort_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnAbort_Params);
      this.onAbort(params.abortedSuccessfully);
      return true;
    case kPaymentRequestClient_OnCanMakePayment_Name:
      var params = reader.decodeStruct(PaymentRequestClient_OnCanMakePayment_Params);
      this.onCanMakePayment(params.result);
      return true;
    case kPaymentRequestClient_WarnNoFavicon_Name:
      var params = reader.decodeStruct(PaymentRequestClient_WarnNoFavicon_Params);
      this.warnNoFavicon();
      return true;
    default:
      return false;
    }
  };

  PaymentRequestClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePaymentRequestClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPaymentRequestClient_OnShippingAddressChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnShippingAddressChange_Params;
      break;
      case kPaymentRequestClient_OnShippingOptionChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnShippingOptionChange_Params;
      break;
      case kPaymentRequestClient_OnPaymentResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnPaymentResponse_Params;
      break;
      case kPaymentRequestClient_OnError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnError_Params;
      break;
      case kPaymentRequestClient_OnComplete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnComplete_Params;
      break;
      case kPaymentRequestClient_OnAbort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnAbort_Params;
      break;
      case kPaymentRequestClient_OnCanMakePayment_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_OnCanMakePayment_Params;
      break;
      case kPaymentRequestClient_WarnNoFavicon_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequestClient_WarnNoFavicon_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePaymentRequestClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PaymentRequestClient = {
    name: 'payments.mojom.PaymentRequestClient',
    kVersion: 0,
    ptrClass: PaymentRequestClientPtr,
    proxyClass: PaymentRequestClientProxy,
    stubClass: PaymentRequestClientStub,
    validateRequest: validatePaymentRequestClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/payments/payment_request.mojom',
    fuzzMethods: {
      onShippingAddressChange: {
        params: PaymentRequestClient_OnShippingAddressChange_Params,
      },
      onShippingOptionChange: {
        params: PaymentRequestClient_OnShippingOptionChange_Params,
      },
      onPaymentResponse: {
        params: PaymentRequestClient_OnPaymentResponse_Params,
      },
      onError: {
        params: PaymentRequestClient_OnError_Params,
      },
      onComplete: {
        params: PaymentRequestClient_OnComplete_Params,
      },
      onAbort: {
        params: PaymentRequestClient_OnAbort_Params,
      },
      onCanMakePayment: {
        params: PaymentRequestClient_OnCanMakePayment_Params,
      },
      warnNoFavicon: {
        params: PaymentRequestClient_WarnNoFavicon_Params,
      },
    },
  };
  PaymentRequestClientStub.prototype.validator = validatePaymentRequestClientRequest;
  PaymentRequestClientProxy.prototype.validator = null;
  var kPaymentRequest_Init_Name = 36335975;
  var kPaymentRequest_Show_Name = 380323998;
  var kPaymentRequest_UpdateWith_Name = 448938127;
  var kPaymentRequest_NoUpdatedPaymentDetails_Name = 562606786;
  var kPaymentRequest_Abort_Name = 527662873;
  var kPaymentRequest_Complete_Name = 269881068;
  var kPaymentRequest_CanMakePayment_Name = 253275659;

  function PaymentRequestPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PaymentRequest,
                                                   handleOrPtrInfo);
  }

  function PaymentRequestAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PaymentRequest, associatedInterfacePtrInfo);
  }

  PaymentRequestAssociatedPtr.prototype =
      Object.create(PaymentRequestPtr.prototype);
  PaymentRequestAssociatedPtr.prototype.constructor =
      PaymentRequestAssociatedPtr;

  function PaymentRequestProxy(receiver) {
    this.receiver_ = receiver;
  }
  PaymentRequestPtr.prototype.init = function() {
    return PaymentRequestProxy.prototype.init
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.init = function(client, methodData, details, options) {
    var params_ = new PaymentRequest_Init_Params();
    params_.client = client;
    params_.methodData = methodData;
    params_.details = details;
    params_.options = options;
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_Init_Name,
        codec.align(PaymentRequest_Init_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Init_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestPtr.prototype.show = function() {
    return PaymentRequestProxy.prototype.show
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.show = function(isUserGesture) {
    var params_ = new PaymentRequest_Show_Params();
    params_.isUserGesture = isUserGesture;
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_Show_Name,
        codec.align(PaymentRequest_Show_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Show_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestPtr.prototype.updateWith = function() {
    return PaymentRequestProxy.prototype.updateWith
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.updateWith = function(details) {
    var params_ = new PaymentRequest_UpdateWith_Params();
    params_.details = details;
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_UpdateWith_Name,
        codec.align(PaymentRequest_UpdateWith_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_UpdateWith_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestPtr.prototype.noUpdatedPaymentDetails = function() {
    return PaymentRequestProxy.prototype.noUpdatedPaymentDetails
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.noUpdatedPaymentDetails = function() {
    var params_ = new PaymentRequest_NoUpdatedPaymentDetails_Params();
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_NoUpdatedPaymentDetails_Name,
        codec.align(PaymentRequest_NoUpdatedPaymentDetails_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_NoUpdatedPaymentDetails_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestPtr.prototype.abort = function() {
    return PaymentRequestProxy.prototype.abort
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.abort = function() {
    var params_ = new PaymentRequest_Abort_Params();
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_Abort_Name,
        codec.align(PaymentRequest_Abort_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Abort_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestPtr.prototype.complete = function() {
    return PaymentRequestProxy.prototype.complete
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.complete = function(result) {
    var params_ = new PaymentRequest_Complete_Params();
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_Complete_Name,
        codec.align(PaymentRequest_Complete_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_Complete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PaymentRequestPtr.prototype.canMakePayment = function() {
    return PaymentRequestProxy.prototype.canMakePayment
        .apply(this.ptr.getProxy(), arguments);
  };

  PaymentRequestProxy.prototype.canMakePayment = function() {
    var params_ = new PaymentRequest_CanMakePayment_Params();
    var builder = new codec.MessageV0Builder(
        kPaymentRequest_CanMakePayment_Name,
        codec.align(PaymentRequest_CanMakePayment_Params.encodedSize));
    builder.encodeStruct(PaymentRequest_CanMakePayment_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PaymentRequestStub(delegate) {
    this.delegate_ = delegate;
  }
  PaymentRequestStub.prototype.init = function(client, methodData, details, options) {
    return this.delegate_ && this.delegate_.init && this.delegate_.init(client, methodData, details, options);
  }
  PaymentRequestStub.prototype.show = function(isUserGesture) {
    return this.delegate_ && this.delegate_.show && this.delegate_.show(isUserGesture);
  }
  PaymentRequestStub.prototype.updateWith = function(details) {
    return this.delegate_ && this.delegate_.updateWith && this.delegate_.updateWith(details);
  }
  PaymentRequestStub.prototype.noUpdatedPaymentDetails = function() {
    return this.delegate_ && this.delegate_.noUpdatedPaymentDetails && this.delegate_.noUpdatedPaymentDetails();
  }
  PaymentRequestStub.prototype.abort = function() {
    return this.delegate_ && this.delegate_.abort && this.delegate_.abort();
  }
  PaymentRequestStub.prototype.complete = function(result) {
    return this.delegate_ && this.delegate_.complete && this.delegate_.complete(result);
  }
  PaymentRequestStub.prototype.canMakePayment = function() {
    return this.delegate_ && this.delegate_.canMakePayment && this.delegate_.canMakePayment();
  }

  PaymentRequestStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPaymentRequest_Init_Name:
      var params = reader.decodeStruct(PaymentRequest_Init_Params);
      this.init(params.client, params.methodData, params.details, params.options);
      return true;
    case kPaymentRequest_Show_Name:
      var params = reader.decodeStruct(PaymentRequest_Show_Params);
      this.show(params.isUserGesture);
      return true;
    case kPaymentRequest_UpdateWith_Name:
      var params = reader.decodeStruct(PaymentRequest_UpdateWith_Params);
      this.updateWith(params.details);
      return true;
    case kPaymentRequest_NoUpdatedPaymentDetails_Name:
      var params = reader.decodeStruct(PaymentRequest_NoUpdatedPaymentDetails_Params);
      this.noUpdatedPaymentDetails();
      return true;
    case kPaymentRequest_Abort_Name:
      var params = reader.decodeStruct(PaymentRequest_Abort_Params);
      this.abort();
      return true;
    case kPaymentRequest_Complete_Name:
      var params = reader.decodeStruct(PaymentRequest_Complete_Params);
      this.complete(params.result);
      return true;
    case kPaymentRequest_CanMakePayment_Name:
      var params = reader.decodeStruct(PaymentRequest_CanMakePayment_Params);
      this.canMakePayment();
      return true;
    default:
      return false;
    }
  };

  PaymentRequestStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePaymentRequestRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPaymentRequest_Init_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Init_Params;
      break;
      case kPaymentRequest_Show_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Show_Params;
      break;
      case kPaymentRequest_UpdateWith_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_UpdateWith_Params;
      break;
      case kPaymentRequest_NoUpdatedPaymentDetails_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_NoUpdatedPaymentDetails_Params;
      break;
      case kPaymentRequest_Abort_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Abort_Params;
      break;
      case kPaymentRequest_Complete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_Complete_Params;
      break;
      case kPaymentRequest_CanMakePayment_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PaymentRequest_CanMakePayment_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePaymentRequestResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PaymentRequest = {
    name: 'payments.mojom.PaymentRequest',
    kVersion: 0,
    ptrClass: PaymentRequestPtr,
    proxyClass: PaymentRequestProxy,
    stubClass: PaymentRequestStub,
    validateRequest: validatePaymentRequestRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/payments/payment_request.mojom',
    fuzzMethods: {
      init: {
        params: PaymentRequest_Init_Params,
      },
      show: {
        params: PaymentRequest_Show_Params,
      },
      updateWith: {
        params: PaymentRequest_UpdateWith_Params,
      },
      noUpdatedPaymentDetails: {
        params: PaymentRequest_NoUpdatedPaymentDetails_Params,
      },
      abort: {
        params: PaymentRequest_Abort_Params,
      },
      complete: {
        params: PaymentRequest_Complete_Params,
      },
      canMakePayment: {
        params: PaymentRequest_CanMakePayment_Params,
      },
    },
  };
  PaymentRequestStub.prototype.validator = validatePaymentRequestRequest;
  PaymentRequestProxy.prototype.validator = null;
  exports.PaymentErrorReason = PaymentErrorReason;
  exports.CanMakePaymentQueryResult = CanMakePaymentQueryResult;
  exports.AndroidPayEnvironment = AndroidPayEnvironment;
  exports.AndroidPayCardNetwork = AndroidPayCardNetwork;
  exports.AndroidPayTokenization = AndroidPayTokenization;
  exports.BasicCardNetwork = BasicCardNetwork;
  exports.BasicCardType = BasicCardType;
  exports.PaymentShippingType = PaymentShippingType;
  exports.PaymentComplete = PaymentComplete;
  exports.PaymentResponse = PaymentResponse;
  exports.PaymentItem = PaymentItem;
  exports.PaymentShippingOption = PaymentShippingOption;
  exports.AndroidPayTokenizationParameter = AndroidPayTokenizationParameter;
  exports.PaymentMethodData = PaymentMethodData;
  exports.PaymentDetailsModifier = PaymentDetailsModifier;
  exports.PaymentDetails = PaymentDetails;
  exports.PaymentOptions = PaymentOptions;
  exports.PaymentRequestClient = PaymentRequestClient;
  exports.PaymentRequestClientPtr = PaymentRequestClientPtr;
  exports.PaymentRequestClientAssociatedPtr = PaymentRequestClientAssociatedPtr;
  exports.PaymentRequest = PaymentRequest;
  exports.PaymentRequestPtr = PaymentRequestPtr;
  exports.PaymentRequestAssociatedPtr = PaymentRequestAssociatedPtr;
})();