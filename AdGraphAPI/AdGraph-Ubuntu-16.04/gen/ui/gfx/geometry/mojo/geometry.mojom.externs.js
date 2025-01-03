// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gfx = {};
/** @const */
gfx.mojom = {};
gfx.mojom.Point = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
  }
};
gfx.mojom.PointF = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
  }
};
gfx.mojom.Size = class {
  constructor() {
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
gfx.mojom.SizeF = class {
  constructor() {
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
gfx.mojom.Rect = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
gfx.mojom.RectF = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
gfx.mojom.Insets = class {
  constructor() {
    /** @type { !number } */
    this.top;
    /** @type { !number } */
    this.left;
    /** @type { !number } */
    this.bottom;
    /** @type { !number } */
    this.right;
  }
};
gfx.mojom.InsetsF = class {
  constructor() {
    /** @type { !number } */
    this.top;
    /** @type { !number } */
    this.left;
    /** @type { !number } */
    this.bottom;
    /** @type { !number } */
    this.right;
  }
};
gfx.mojom.Vector2d = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
  }
};
gfx.mojom.Vector2dF = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
  }
};
gfx.mojom.ScrollOffset = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !number } */
    this.y;
  }
};
