// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.InputInjectorPtr = class {

  /**
   * @param { !content.mojom.SyntheticSmoothDrag } drag
   * @return {Promise}
   */
   queueSyntheticSmoothDrag(drag) {}
  /**
   * @param { !content.mojom.SyntheticSmoothScroll } scroll
   * @return {Promise}
   */
   queueSyntheticSmoothScroll(scroll) {}
  /**
   * @param { !content.mojom.SyntheticPinch } pinch
   * @return {Promise}
   */
   queueSyntheticPinch(pinch) {}
  /**
   * @param { !content.mojom.SyntheticTap } tap
   * @return {Promise}
   */
   queueSyntheticTap(tap) {}
  /**
   * @param { !content.mojom.SyntheticPointerAction } pointerAction
   * @return {Promise}
   */
   queueSyntheticPointerAction(pointerAction) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.InputInjector;
content.mojom.InputInjector_QueueSyntheticSmoothDrag_Params = class {
  constructor() {
    /** @type { !content.mojom.SyntheticSmoothDrag } */
    this.drag;
  }
};
content.mojom.InputInjector_QueueSyntheticSmoothDrag_ResponseParams = class {
  constructor() {
  }
};
content.mojom.InputInjector_QueueSyntheticSmoothScroll_Params = class {
  constructor() {
    /** @type { !content.mojom.SyntheticSmoothScroll } */
    this.scroll;
  }
};
content.mojom.InputInjector_QueueSyntheticSmoothScroll_ResponseParams = class {
  constructor() {
  }
};
content.mojom.InputInjector_QueueSyntheticPinch_Params = class {
  constructor() {
    /** @type { !content.mojom.SyntheticPinch } */
    this.pinch;
  }
};
content.mojom.InputInjector_QueueSyntheticPinch_ResponseParams = class {
  constructor() {
  }
};
content.mojom.InputInjector_QueueSyntheticTap_Params = class {
  constructor() {
    /** @type { !content.mojom.SyntheticTap } */
    this.tap;
  }
};
content.mojom.InputInjector_QueueSyntheticTap_ResponseParams = class {
  constructor() {
  }
};
content.mojom.InputInjector_QueueSyntheticPointerAction_Params = class {
  constructor() {
    /** @type { !content.mojom.SyntheticPointerAction } */
    this.pointerAction;
  }
};
content.mojom.InputInjector_QueueSyntheticPointerAction_ResponseParams = class {
  constructor() {
  }
};
