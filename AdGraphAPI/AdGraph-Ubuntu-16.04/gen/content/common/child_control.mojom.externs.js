// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ChildControlPtr = class {

  /**
   */
   processShutdown() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ChildControl;
content.mojom.ChildControl_ProcessShutdown_Params = class {
  constructor() {
  }
};
