// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/payments/mojom/payment_request_data.mojom';
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



  function PaymentAddress(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentAddress.prototype.initDefaults_ = function() {
    this.country = null;
    this.addressLine = null;
    this.region = null;
    this.city = null;
    this.dependentLocality = null;
    this.postalCode = null;
    this.sortingCode = null;
    this.languageCode = null;
    this.scriptCode = null;
    this.organization = null;
    this.recipient = null;
    this.phone = null;
  };
  PaymentAddress.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentAddress.generate = function(generator_) {
    var generated = new PaymentAddress;
    generated.country = generator_.generateString(false);
    generated.addressLine = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.region = generator_.generateString(false);
    generated.city = generator_.generateString(false);
    generated.dependentLocality = generator_.generateString(false);
    generated.postalCode = generator_.generateString(false);
    generated.sortingCode = generator_.generateString(false);
    generated.languageCode = generator_.generateString(false);
    generated.scriptCode = generator_.generateString(false);
    generated.organization = generator_.generateString(false);
    generated.recipient = generator_.generateString(false);
    generated.phone = generator_.generateString(false);
    return generated;
  };

  PaymentAddress.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.country = mutator_.mutateString(this.country, false);
    }
    if (mutator_.chooseMutateField()) {
      this.addressLine = mutator_.mutateArray(this.addressLine, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.region = mutator_.mutateString(this.region, false);
    }
    if (mutator_.chooseMutateField()) {
      this.city = mutator_.mutateString(this.city, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dependentLocality = mutator_.mutateString(this.dependentLocality, false);
    }
    if (mutator_.chooseMutateField()) {
      this.postalCode = mutator_.mutateString(this.postalCode, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sortingCode = mutator_.mutateString(this.sortingCode, false);
    }
    if (mutator_.chooseMutateField()) {
      this.languageCode = mutator_.mutateString(this.languageCode, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scriptCode = mutator_.mutateString(this.scriptCode, false);
    }
    if (mutator_.chooseMutateField()) {
      this.organization = mutator_.mutateString(this.organization, false);
    }
    if (mutator_.chooseMutateField()) {
      this.recipient = mutator_.mutateString(this.recipient, false);
    }
    if (mutator_.chooseMutateField()) {
      this.phone = mutator_.mutateString(this.phone, false);
    }
    return this;
  };
  PaymentAddress.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentAddress.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentAddress.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentAddress.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 104}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.country
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.addressLine
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.region
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.city
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.dependentLocality
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.postalCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.sortingCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.languageCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.scriptCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.organization
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.recipient
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentAddress.phone
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 88, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentAddress.encodedSize = codec.kStructHeaderSize + 96;

  PaymentAddress.decode = function(decoder) {
    var packed;
    var val = new PaymentAddress();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.country = decoder.decodeStruct(codec.String);
    val.addressLine = decoder.decodeArrayPointer(codec.String);
    val.region = decoder.decodeStruct(codec.String);
    val.city = decoder.decodeStruct(codec.String);
    val.dependentLocality = decoder.decodeStruct(codec.String);
    val.postalCode = decoder.decodeStruct(codec.String);
    val.sortingCode = decoder.decodeStruct(codec.String);
    val.languageCode = decoder.decodeStruct(codec.String);
    val.scriptCode = decoder.decodeStruct(codec.String);
    val.organization = decoder.decodeStruct(codec.String);
    val.recipient = decoder.decodeStruct(codec.String);
    val.phone = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentAddress.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentAddress.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.country);
    encoder.encodeArrayPointer(codec.String, val.addressLine);
    encoder.encodeStruct(codec.String, val.region);
    encoder.encodeStruct(codec.String, val.city);
    encoder.encodeStruct(codec.String, val.dependentLocality);
    encoder.encodeStruct(codec.String, val.postalCode);
    encoder.encodeStruct(codec.String, val.sortingCode);
    encoder.encodeStruct(codec.String, val.languageCode);
    encoder.encodeStruct(codec.String, val.scriptCode);
    encoder.encodeStruct(codec.String, val.organization);
    encoder.encodeStruct(codec.String, val.recipient);
    encoder.encodeStruct(codec.String, val.phone);
  };
  function PaymentCurrencyAmount(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PaymentCurrencyAmount.prototype.initDefaults_ = function() {
    this.currency = null;
    this.value = null;
  };
  PaymentCurrencyAmount.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PaymentCurrencyAmount.generate = function(generator_) {
    var generated = new PaymentCurrencyAmount;
    generated.currency = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    return generated;
  };

  PaymentCurrencyAmount.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.currency = mutator_.mutateString(this.currency, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    return this;
  };
  PaymentCurrencyAmount.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PaymentCurrencyAmount.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PaymentCurrencyAmount.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PaymentCurrencyAmount.validate = function(messageValidator, offset) {
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


    // validate PaymentCurrencyAmount.currency
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PaymentCurrencyAmount.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PaymentCurrencyAmount.encodedSize = codec.kStructHeaderSize + 16;

  PaymentCurrencyAmount.decode = function(decoder) {
    var packed;
    var val = new PaymentCurrencyAmount();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.currency = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    return val;
  };

  PaymentCurrencyAmount.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PaymentCurrencyAmount.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.currency);
    encoder.encodeStruct(codec.String, val.value);
  };
  exports.PaymentAddress = PaymentAddress;
  exports.PaymentCurrencyAmount = PaymentCurrencyAmount;
})();