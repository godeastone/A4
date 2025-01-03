// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let domDistiller = {};
/** @const */
domDistiller.mojom = {};
/** @implements {mojo.InterfacePtr} */
domDistiller.mojom.DistillerPageNotifierServicePtr = class {

  /**
   */
   notifyIsDistillerPage() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
domDistiller.mojom.DistillerPageNotifierService;
domDistiller.mojom.DistillerPageNotifierService_NotifyIsDistillerPage_Params = class {
  constructor() {
  }
};
