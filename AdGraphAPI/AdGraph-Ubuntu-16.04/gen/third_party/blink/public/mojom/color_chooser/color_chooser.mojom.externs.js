// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ColorChooserFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } chooser
   * @param { !blink.mojom.ColorChooserClientPtr } client
   * @param { !number } color
   * @param { !Array<blink.mojom.ColorSuggestion> } suggestions
   */
   openColorChooser(chooser, client, color, suggestions) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ColorChooserFactory;
/** @implements {mojo.InterfacePtr} */
blink.mojom.ColorChooserPtr = class {

  /**
   * @param { !number } color
   */
   setSelectedColor(color) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ColorChooser;
/** @implements {mojo.InterfacePtr} */
blink.mojom.ColorChooserClientPtr = class {

  /**
   * @param { !number } color
   */
   didChooseColor(color) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ColorChooserClient;
blink.mojom.ColorSuggestion = class {
  constructor() {
    /** @type { !number } */
    this.color;
    /** @type { !string } */
    this.label;
  }
};
blink.mojom.ColorChooserFactory_OpenColorChooser_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.chooser;
    /** @type { !blink.mojom.ColorChooserClientPtr } */
    this.client;
    /** @type { !number } */
    this.color;
    /** @type { !Array<blink.mojom.ColorSuggestion> } */
    this.suggestions;
  }
};
blink.mojom.ColorChooser_SetSelectedColor_Params = class {
  constructor() {
    /** @type { !number } */
    this.color;
  }
};
blink.mojom.ColorChooserClient_DidChooseColor_Params = class {
  constructor() {
    /** @type { !number } */
    this.color;
  }
};
