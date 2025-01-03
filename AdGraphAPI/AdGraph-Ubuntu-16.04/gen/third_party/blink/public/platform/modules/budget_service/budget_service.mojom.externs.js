// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.BudgetServicePtr = class {

  /**
   * @param { !blink.mojom.BudgetOperationType } operation
   * @return {Promise}
   */
   getCost(operation) {}
  /**
   * @return {Promise}
   */
   getBudget() {}
  /**
   * @param { !blink.mojom.BudgetOperationType } operation
   * @return {Promise}
   */
   reserve(operation) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.BudgetService;
blink.mojom.BudgetState = class {
  constructor() {
    /** @type { !number } */
    this.budgetAt;
    /** @type { !number } */
    this.time;
  }
};
blink.mojom.BudgetService_GetCost_Params = class {
  constructor() {
    /** @type { !blink.mojom.BudgetOperationType } */
    this.operation;
  }
};
blink.mojom.BudgetService_GetCost_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.cost;
  }
};
blink.mojom.BudgetService_GetBudget_Params = class {
  constructor() {
  }
};
blink.mojom.BudgetService_GetBudget_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BudgetServiceErrorType } */
    this.errorType;
    /** @type { !Array<blink.mojom.BudgetState> } */
    this.budget;
  }
};
blink.mojom.BudgetService_Reserve_Params = class {
  constructor() {
    /** @type { !blink.mojom.BudgetOperationType } */
    this.operation;
  }
};
blink.mojom.BudgetService_Reserve_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.BudgetServiceErrorType } */
    this.errorType;
    /** @type { !boolean } */
    this.success;
  }
};
