// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let payments = {};
/** @const */
payments.mojom = {};
/** @implements {mojo.InterfacePtr} */
payments.mojom.PaymentRequestClientPtr = class {

  /**
   * @param { !payments.mojom.PaymentAddress } address
   */
   onShippingAddressChange(address) {}
  /**
   * @param { !string } shippingOptionId
   */
   onShippingOptionChange(shippingOptionId) {}
  /**
   * @param { !payments.mojom.PaymentResponse } response
   */
   onPaymentResponse(response) {}
  /**
   * @param { !payments.mojom.PaymentErrorReason } error
   */
   onError(error) {}
  /**
   */
   onComplete() {}
  /**
   * @param { !boolean } abortedSuccessfully
   */
   onAbort(abortedSuccessfully) {}
  /**
   * @param { !payments.mojom.CanMakePaymentQueryResult } result
   */
   onCanMakePayment(result) {}
  /**
   */
   warnNoFavicon() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
payments.mojom.PaymentRequestClient;
/** @implements {mojo.InterfacePtr} */
payments.mojom.PaymentRequestPtr = class {

  /**
   * @param { !payments.mojom.PaymentRequestClientPtr } client
   * @param { !Array<payments.mojom.PaymentMethodData> } methodData
   * @param { !payments.mojom.PaymentDetails } details
   * @param { !payments.mojom.PaymentOptions } options
   */
   init(client, methodData, details, options) {}
  /**
   * @param { !boolean } isUserGesture
   */
   show(isUserGesture) {}
  /**
   * @param { !payments.mojom.PaymentDetails } details
   */
   updateWith(details) {}
  /**
   */
   noUpdatedPaymentDetails() {}
  /**
   */
   abort() {}
  /**
   * @param { !payments.mojom.PaymentComplete } result
   */
   complete(result) {}
  /**
   */
   canMakePayment() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
payments.mojom.PaymentRequest;
payments.mojom.PaymentResponse = class {
  constructor() {
    /** @type { !string } */
    this.methodName;
    /** @type { !string } */
    this.stringifiedDetails;
    /** @type { payments.mojom.PaymentAddress } */
    this.shippingAddress;
    /** @type { string } */
    this.shippingOption;
    /** @type { string } */
    this.payerName;
    /** @type { string } */
    this.payerEmail;
    /** @type { string } */
    this.payerPhone;
  }
};
payments.mojom.PaymentItem = class {
  constructor() {
    /** @type { !string } */
    this.label;
    /** @type { !payments.mojom.PaymentCurrencyAmount } */
    this.amount;
    /** @type { !boolean } */
    this.pending;
  }
};
payments.mojom.PaymentShippingOption = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !string } */
    this.label;
    /** @type { !payments.mojom.PaymentCurrencyAmount } */
    this.amount;
    /** @type { !boolean } */
    this.selected;
  }
};
payments.mojom.AndroidPayTokenizationParameter = class {
  constructor() {
    /** @type { string } */
    this.key;
    /** @type { string } */
    this.value;
  }
};
payments.mojom.PaymentMethodData = class {
  constructor() {
    /** @type { !Array<string> } */
    this.supportedMethods;
    /** @type { !string } */
    this.stringifiedData;
    /** @type { !payments.mojom.AndroidPayEnvironment } */
    this.environment;
    /** @type { !payments.mojom.AndroidPayTokenization } */
    this.tokenizationType;
    /** @type { string } */
    this.merchantName;
    /** @type { string } */
    this.merchantId;
    /** @type { !Array<payments.mojom.AndroidPayCardNetwork> } */
    this.allowedCardNetworks;
    /** @type { !Array<payments.mojom.AndroidPayTokenizationParameter> } */
    this.parameters;
    /** @type { !number } */
    this.minGooglePlayServicesVersion;
    /** @type { !number } */
    this.apiVersion;
    /** @type { !Array<payments.mojom.BasicCardNetwork> } */
    this.supportedNetworks;
    /** @type { !Array<payments.mojom.BasicCardType> } */
    this.supportedTypes;
  }
};
payments.mojom.PaymentDetailsModifier = class {
  constructor() {
    /** @type { payments.mojom.PaymentItem } */
    this.total;
    /** @type { !Array<payments.mojom.PaymentItem> } */
    this.additionalDisplayItems;
    /** @type { !payments.mojom.PaymentMethodData } */
    this.methodData;
  }
};
payments.mojom.PaymentDetails = class {
  constructor() {
    /** @type { payments.mojom.PaymentItem } */
    this.total;
    /** @type { !Array<payments.mojom.PaymentItem> } */
    this.displayItems;
    /** @type { !Array<payments.mojom.PaymentShippingOption> } */
    this.shippingOptions;
    /** @type { !Array<payments.mojom.PaymentDetailsModifier> } */
    this.modifiers;
    /** @type { !string } */
    this.error;
    /** @type { string } */
    this.id;
  }
};
payments.mojom.PaymentOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.requestPayerName;
    /** @type { !boolean } */
    this.requestPayerEmail;
    /** @type { !boolean } */
    this.requestPayerPhone;
    /** @type { !boolean } */
    this.requestShipping;
    /** @type { !payments.mojom.PaymentShippingType } */
    this.shippingType;
  }
};
payments.mojom.PaymentRequestClient_OnShippingAddressChange_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentAddress } */
    this.address;
  }
};
payments.mojom.PaymentRequestClient_OnShippingOptionChange_Params = class {
  constructor() {
    /** @type { !string } */
    this.shippingOptionId;
  }
};
payments.mojom.PaymentRequestClient_OnPaymentResponse_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentResponse } */
    this.response;
  }
};
payments.mojom.PaymentRequestClient_OnError_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentErrorReason } */
    this.error;
  }
};
payments.mojom.PaymentRequestClient_OnComplete_Params = class {
  constructor() {
  }
};
payments.mojom.PaymentRequestClient_OnAbort_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.abortedSuccessfully;
  }
};
payments.mojom.PaymentRequestClient_OnCanMakePayment_Params = class {
  constructor() {
    /** @type { !payments.mojom.CanMakePaymentQueryResult } */
    this.result;
  }
};
payments.mojom.PaymentRequestClient_WarnNoFavicon_Params = class {
  constructor() {
  }
};
payments.mojom.PaymentRequest_Init_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentRequestClientPtr } */
    this.client;
    /** @type { !Array<payments.mojom.PaymentMethodData> } */
    this.methodData;
    /** @type { !payments.mojom.PaymentDetails } */
    this.details;
    /** @type { !payments.mojom.PaymentOptions } */
    this.options;
  }
};
payments.mojom.PaymentRequest_Show_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.isUserGesture;
  }
};
payments.mojom.PaymentRequest_UpdateWith_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentDetails } */
    this.details;
  }
};
payments.mojom.PaymentRequest_NoUpdatedPaymentDetails_Params = class {
  constructor() {
  }
};
payments.mojom.PaymentRequest_Abort_Params = class {
  constructor() {
  }
};
payments.mojom.PaymentRequest_Complete_Params = class {
  constructor() {
    /** @type { !payments.mojom.PaymentComplete } */
    this.result;
  }
};
payments.mojom.PaymentRequest_CanMakePayment_Params = class {
  constructor() {
  }
};
