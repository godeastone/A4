// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.KeyData = class {
  constructor() {
    /** @type { !number } */
    this.keyCode;
    /** @type { !boolean } */
    this.isChar;
    /** @type { !number } */
    this.character;
    /** @type { !ui.mojom.KeyboardCode } */
    this.windowsKeyCode;
    /** @type { !number } */
    this.nativeKeyCode;
    /** @type { !number } */
    this.text;
    /** @type { !number } */
    this.unmodifiedText;
    /** @type { Map<string, Array<number>> } */
    this.properties;
  }
};
ui.mojom.LocationData = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
    /** @type { !number } */
    this.screenX;
    /** @type { !number } */
    this.screenY;
  }
};
ui.mojom.PointerData = class {
  constructor() {
    /** @type { !number } */
    this.pointerId;
    /** @type { !number } */
    this.changedButtonFlags;
    /** @type { !ui.mojom.PointerKind } */
    this.kind;
    /** @type { !ui.mojom.LocationData } */
    this.location;
    /** @type { ui.mojom.BrushData } */
    this.brushData;
    /** @type { ui.mojom.WheelData } */
    this.wheelData;
  }
};
ui.mojom.WheelData = class {
  constructor() {
    /** @type { !ui.mojom.WheelMode } */
    this.mode;
    /** @type { !number } */
    this.deltaX;
    /** @type { !number } */
    this.deltaY;
    /** @type { !number } */
    this.deltaZ;
  }
};
ui.mojom.BrushData = class {
  constructor() {
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
    /** @type { !number } */
    this.pressure;
    /** @type { !number } */
    this.tiltX;
    /** @type { !number } */
    this.tiltY;
    /** @type { !number } */
    this.tangentialPressure;
    /** @type { !number } */
    this.twist;
  }
};
ui.mojom.GestureData = class {
  constructor() {
    /** @type { !ui.mojom.LocationData } */
    this.location;
  }
};
ui.mojom.ScrollData = class {
  constructor() {
    /** @type { !ui.mojom.LocationData } */
    this.location;
    /** @type { !number } */
    this.xOffset;
    /** @type { !number } */
    this.yOffset;
    /** @type { !number } */
    this.xOffsetOrdinal;
    /** @type { !number } */
    this.yOffsetOrdinal;
    /** @type { !number } */
    this.fingerCount;
    /** @type { !ui.mojom.EventMomentumPhase } */
    this.momentumPhase;
    /** @type { !ui.mojom.ScrollEventPhase } */
    this.scrollEventPhase;
  }
};
ui.mojom.Event = class {
  constructor() {
    /** @type { !ui.mojom.EventType } */
    this.action;
    /** @type { !number } */
    this.flags;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timeStamp;
    /** @type { !ui.mojom.LatencyInfo } */
    this.latency;
    /** @type { ui.mojom.KeyData } */
    this.keyData;
    /** @type { ui.mojom.PointerData } */
    this.pointerData;
    /** @type { ui.mojom.GestureData } */
    this.gestureData;
    /** @type { ui.mojom.ScrollData } */
    this.scrollData;
  }
};
