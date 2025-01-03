// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.NotificationAction = class {
  constructor() {
    /** @type { !blink.mojom.NotificationActionType } */
    this.type;
    /** @type { !string } */
    this.action;
    /** @type { !mojoBase.mojom.String16 } */
    this.title;
    /** @type { !url.mojom.Url } */
    this.icon;
    /** @type { mojoBase.mojom.String16 } */
    this.placeholder;
  }
};
blink.mojom.NotificationData = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.title;
    /** @type { !blink.mojom.NotificationDirection } */
    this.direction;
    /** @type { !boolean } */
    this.renotify;
    /** @type { !boolean } */
    this.silent;
    /** @type { !boolean } */
    this.requireInteraction;
    /** @type { string } */
    this.lang;
    /** @type { !mojoBase.mojom.String16 } */
    this.body;
    /** @type { !string } */
    this.tag;
    /** @type { !url.mojom.Url } */
    this.image;
    /** @type { !url.mojom.Url } */
    this.icon;
    /** @type { !url.mojom.Url } */
    this.badge;
    /** @type { Array<number> } */
    this.vibrationPattern;
    /** @type { !number } */
    this.timestamp;
    /** @type { Array<number> } */
    this.data;
    /** @type { Array<blink.mojom.NotificationAction> } */
    this.actions;
  }
};
blink.mojom.NotificationResources = class {
  constructor() {
    /** @type { skia.mojom.Bitmap } */
    this.image;
    /** @type { skia.mojom.Bitmap } */
    this.icon;
    /** @type { skia.mojom.Bitmap } */
    this.badge;
    /** @type { Array<skia.mojom.Bitmap> } */
    this.actionIcons;
  }
};
