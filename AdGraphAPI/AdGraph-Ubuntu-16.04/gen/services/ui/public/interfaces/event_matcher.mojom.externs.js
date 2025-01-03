// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.KeyEventMatcher = class {
  constructor() {
    /** @type { !ui.mojom.KeyboardCode } */
    this.keyboardCode;
  }
};
ui.mojom.PointerKindMatcher = class {
  constructor() {
    /** @type { !ui.mojom.PointerKind } */
    this.pointerKind;
  }
};
ui.mojom.PointerLocationMatcher = class {
  constructor() {
    /** @type { !gfx.mojom.RectF } */
    this.region;
  }
};
ui.mojom.EventTypeMatcher = class {
  constructor() {
    /** @type { !ui.mojom.EventType } */
    this.type;
  }
};
ui.mojom.EventFlagsMatcher = class {
  constructor() {
    /** @type { !number } */
    this.flags;
  }
};
ui.mojom.EventMatcher = class {
  constructor() {
    /** @type { !ui.mojom.AcceleratorPhase } */
    this.acceleratorPhase;
    /** @type { ui.mojom.EventTypeMatcher } */
    this.typeMatcher;
    /** @type { ui.mojom.EventFlagsMatcher } */
    this.flagsMatcher;
    /** @type { ui.mojom.EventFlagsMatcher } */
    this.ignoreFlagsMatcher;
    /** @type { ui.mojom.KeyEventMatcher } */
    this.keyMatcher;
    /** @type { ui.mojom.PointerKindMatcher } */
    this.pointerKindMatcher;
    /** @type { ui.mojom.PointerLocationMatcher } */
    this.pointerLocationMatcher;
  }
};
