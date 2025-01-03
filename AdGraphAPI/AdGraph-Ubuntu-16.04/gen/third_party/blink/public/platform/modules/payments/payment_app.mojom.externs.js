// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let payments = {};
/** @const */
payments.mojom = {};
/** @implements {mojo.InterfacePtr} */
payments.mojom.PaymentManagerPtr = class {

  /**
   * @param { !url.mojom.Url } contextUrl
   * @param { !string } serviceWorkerScope
   */
   init(contextUrl, serviceWorkerScope) {}
  /**
   * @param { !string } instrumentKey
   * @return {Promise}
   */
   deletePaymentInstrument(instrumentKey) {}
  /**
   * @param { !string } instrumentKey
   * @return {Promise}
   */
   getPaymentInstrument(instrumentKey) {}
  /**
   * @return {Promise}
   */
   keysOfPaymentInstruments() {}
  /**
   * @param { !string } instrumentKey
   * @return {Promise}
   */
   hasPaymentInstrument(instrumentKey) {}
  /**
   * @param { !string } instrumentKey
   * @param { !payments.mojom.PaymentInstrument } instrument
   * @return {Promise}
   */
   setPaymentInstrument(instrumentKey, instrument) {}
  /**
   * @return {Promise}
   */
   clearPaymentInstruments() {}
  /**
   * @param { !string } userHint
   */
   setUserHint(userHint) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
payments.mojom.PaymentManager;
/** @implements {mojo.InterfacePtr} */
payments.mojom.PaymentHandlerResponseCallbackPtr = class {

  /**
   * @param { !boolean } paymentAborted
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onResponseForAbortPayment(paymentAborted, dispatchEventTime) {}
  /**
   * @param { !boolean } canMakePayment
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onResponseForCanMakePayment(canMakePayment, dispatchEventTime) {}
  /**
   * @param { !payments.mojom.PaymentHandlerResponse } response
   * @param { !mojoBase.mojom.Time } dispatchEventTime
   */
   onResponseForPaymentRequest(response, dispatchEventTime) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
payments.mojom.PaymentHandlerResponseCallback;
payments.mojom.PaymentInstrument = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !Array<blink.mojom.ManifestIcon> } */
    this.icons;
    /** @type { !string } */
    this.method;
    /** @type { !string } */
    this.stringifiedCapabilities;
    /** @type { !Array<payments.mojom.BasicCardNetwork> } */
    this.supportedNetworks;
    /** @type { !Array<payments.mojom.BasicCardType> } */
    this.supportedTypes;
  }
};
payments.mojom.CanMakePaymentEventData = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.topOrigin;
    /** @type { !url.mojom.Url } */
    this.paymentRequestOrigin;
    /** @type { !Array<payments.mojom.PaymentMethodData> } */
    this.methodData;
    /** @type { !Array<payments.mojom.PaymentDetailsModifier> } */
    this.modifiers;
  }
};
payments.mojom.PaymentRequestEventData = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.topOrigin;
    /** @type { !url.mojom.Url } */
    this.paymentRequestOrigin;
    /** @type { !string } */
    this.paymentRequestId;
    /** @type { !Array<payments.mojom.PaymentMethodData> } */
    this.methodData;
    /** @type { !payments.mojom.PaymentCurrencyAmount } */
    this.total;
    /** @type { !Array<payments.mojom.PaymentDetailsModifier> } */
    this.modifiers;
    /** @type { !string } */
    this.instrumentKey;
  }
};
payments.mojom.PaymentHandlerResponse = class {
  constructor() {
    /** @type { !string } */
    this.methodName;
    /** @type { !string } */
    this.stringifiedDetails;
  }
};
payments.mojom.PaymentManager_Init_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.contextUrl;
    /** @type { !string } */
    this.serviceWorkerScope;
  }
};
payments.mojom.PaymentManager_DeletePaymentInstrument_Params = class {
  constructor() {
    /** @type { !string } */
    this.instrumentKey;
  }
};
payments.mojom.PaymentManager_DeletePaymentInstrument_ResponseParams = class {
  constructor() {
    /** @type { !payments.mojom.PaymentHandlerStatus } */
    this.status;
  }
};
payments.mojom.PaymentManager_GetPaymentInstrument_Params = class {
  constructor() {
    /** @type { !string } */
    this.instrumentKey;
  }
};
payments.mojom.PaymentManager_GetPaymentInstrument_ResponseParams = class {
  constructor() {
    /** @type { !payments.mojom.PaymentInstrument } */
    this.instrument;
    /** @type { !payments.mojom.PaymentHandlerStatus } */
    this.status;
  }
};
payments.mojom.PaymentManager_KeysOfPaymentInstruments_Params = class {
  constructor() {
  }
};
payments.mojom.PaymentManager_KeysOfPaymentInstruments_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.keys;
    /** @type { !payments.mojom.PaymentHandlerStatus } */
    this.status;
  }
};
payments.mojom.PaymentManager_HasPaymentInstrument_Params = class {
  constructor() {
    /** @type { !string } */
    this.instrumentKey;
  }
};
payments.mojom.PaymentManager_HasPaymentInstrument_ResponseParams = class {
  constructor() {
    /** @type { !payments.mojom.PaymentHandlerStatus } */
    this.status;
  }
};
payments.mojom.PaymentManager_SetPaymentInstrument_Params = class {
  constructor() {
    /** @type { !string } */
    this.instrumentKey;
    /** @type { !payments.mojom.PaymentInstrument } */
    this.instrument;
  }
};
payments.mojom.PaymentManager_SetPaymentInstrument_ResponseParams = class {
  constructor() {
    /** @type { !payments.mojom.PaymentHandlerStatus } */
    this.status;
  }
};
payments.mojom.PaymentManager_ClearPaymentInstruments_Params = class {
  constructor() {
  }
};
payments.mojom.PaymentManager_ClearPaymentInstruments_ResponseParams = class {
  constructor() {
    /** @type { !payments.mojom.PaymentHandlerStatus } */
    this.status;
  }
};
payments.mojom.PaymentManager_SetUserHint_Params = class {
  constructor() {
    /** @type { !string } */
    this.userHint;
  }
};
payments.mojom.PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.paymentAborted;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
payments.mojom.PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.canMakePayment;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
payments.mojom.PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentHandlerResponse } */
    this.response;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
