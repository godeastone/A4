// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let payments = {};
/** @const */
payments.mojom = {};
payments.mojom.PaymentAddress = class {
  constructor() {
    /** @type { !string } */
    this.country;
    /** @type { !Array<string> } */
    this.addressLine;
    /** @type { !string } */
    this.region;
    /** @type { !string } */
    this.city;
    /** @type { !string } */
    this.dependentLocality;
    /** @type { !string } */
    this.postalCode;
    /** @type { !string } */
    this.sortingCode;
    /** @type { !string } */
    this.languageCode;
    /** @type { !string } */
    this.scriptCode;
    /** @type { !string } */
    this.organization;
    /** @type { !string } */
    this.recipient;
    /** @type { !string } */
    this.phone;
  }
};
payments.mojom.PaymentCurrencyAmount = class {
  constructor() {
    /** @type { !string } */
    this.currency;
    /** @type { !string } */
    this.value;
  }
};
