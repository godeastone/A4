// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.IMEDriverPtr = class {

  /**
   * @param { !ui.mojom.StartSessionDetails } details
   */
   startSession(details) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.IMEDriver;
/** @implements {mojo.InterfacePtr} */
ui.mojom.IMERegistrarPtr = class {

  /**
   * @param { !ui.mojom.IMEDriverPtr } driver
   */
   registerDriver(driver) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.IMERegistrar;
/** @implements {mojo.InterfacePtr} */
ui.mojom.InputMethodPtr = class {

  /**
   * @param { !ui.mojom.TextInputType } textInputType
   */
   onTextInputTypeChanged(textInputType) {}
  /**
   * @param { !gfx.mojom.Rect } caretBounds
   */
   onCaretBoundsChanged(caretBounds) {}
  /**
   * @param { !ui.mojom.Event } keyEvent
   * @return {Promise}
   */
   processKeyEvent(keyEvent) {}
  /**
   */
   cancelComposition() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.InputMethod;
/** @implements {mojo.InterfacePtr} */
ui.mojom.TextInputClientPtr = class {

  /**
   * @param { !ui.mojom.CompositionText } composition
   */
   setCompositionText(composition) {}
  /**
   */
   confirmCompositionText() {}
  /**
   */
   clearCompositionText() {}
  /**
   * @param { !mojoBase.mojom.String16 } text
   */
   insertText(text) {}
  /**
   * @param { !ui.mojom.Event } event
   */
   insertChar(event) {}
  /**
   * @param { !ui.mojom.Event } event
   * @return {Promise}
   */
   dispatchKeyEventPostIME(event) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.TextInputClient;
ui.mojom.CandidateWindowProperties = class {
  constructor() {
    /** @type { !number } */
    this.pageSize;
    /** @type { !boolean } */
    this.vertical;
    /** @type { !boolean } */
    this.auxiliaryTextVisible;
    /** @type { !boolean } */
    this.cursorVisible;
    /** @type { !string } */
    this.auxiliaryText;
    /** @type { !number } */
    this.cursorPosition;
    /** @type { !ui.mojom.CandidateWindowPosition } */
    this.windowPosition;
  }
};
ui.mojom.CandidateWindowEntry = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
    /** @type { !mojoBase.mojom.String16 } */
    this.label;
    /** @type { !mojoBase.mojom.String16 } */
    this.annotation;
    /** @type { !mojoBase.mojom.String16 } */
    this.descriptionTitle;
    /** @type { !mojoBase.mojom.String16 } */
    this.descriptionBody;
  }
};
ui.mojom.ImeTextSpan = class {
  constructor() {
    /** @type { !ui.mojom.ImeTextSpanType } */
    this.type;
    /** @type { !number } */
    this.startOffset;
    /** @type { !number } */
    this.endOffset;
    /** @type { !number } */
    this.underlineColor;
    /** @type { !ui.mojom.ImeTextSpanThickness } */
    this.thickness;
    /** @type { !number } */
    this.backgroundColor;
    /** @type { !number } */
    this.suggestionHighlightColor;
    /** @type { !Array<string> } */
    this.suggestions;
  }
};
ui.mojom.CompositionText = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.text;
    /** @type { !Array<ui.mojom.ImeTextSpan> } */
    this.imeTextSpans;
    /** @type { !gfx.mojom.Range } */
    this.selection;
  }
};
ui.mojom.StartSessionDetails = class {
  constructor() {
    /** @type { !ui.mojom.TextInputClientPtr } */
    this.client;
    /** @type { !mojo.InterfaceRequest } */
    this.inputMethodRequest;
    /** @type { !ui.mojom.TextInputType } */
    this.textInputType;
    /** @type { !ui.mojom.TextInputMode } */
    this.textInputMode;
    /** @type { !mojoBase.mojom.TextDirection } */
    this.textDirection;
    /** @type { !number } */
    this.textInputFlags;
    /** @type { !gfx.mojom.Rect } */
    this.caretBounds;
  }
};
ui.mojom.IMEDriver_StartSession_Params = class {
  constructor() {
    /** @type { !ui.mojom.StartSessionDetails } */
    this.details;
  }
};
ui.mojom.IMERegistrar_RegisterDriver_Params = class {
  constructor() {
    /** @type { !ui.mojom.IMEDriverPtr } */
    this.driver;
  }
};
ui.mojom.InputMethod_OnTextInputTypeChanged_Params = class {
  constructor() {
    /** @type { !ui.mojom.TextInputType } */
    this.textInputType;
  }
};
ui.mojom.InputMethod_OnCaretBoundsChanged_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.caretBounds;
  }
};
ui.mojom.InputMethod_ProcessKeyEvent_Params = class {
  constructor() {
    /** @type { !ui.mojom.Event } */
    this.keyEvent;
  }
};
ui.mojom.InputMethod_ProcessKeyEvent_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.handled;
  }
};
ui.mojom.InputMethod_CancelComposition_Params = class {
  constructor() {
  }
};
ui.mojom.TextInputClient_SetCompositionText_Params = class {
  constructor() {
    /** @type { !ui.mojom.CompositionText } */
    this.composition;
  }
};
ui.mojom.TextInputClient_ConfirmCompositionText_Params = class {
  constructor() {
  }
};
ui.mojom.TextInputClient_ClearCompositionText_Params = class {
  constructor() {
  }
};
ui.mojom.TextInputClient_InsertText_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.text;
  }
};
ui.mojom.TextInputClient_InsertChar_Params = class {
  constructor() {
    /** @type { !ui.mojom.Event } */
    this.event;
  }
};
ui.mojom.TextInputClient_DispatchKeyEventPostIME_Params = class {
  constructor() {
    /** @type { !ui.mojom.Event } */
    this.event;
  }
};
ui.mojom.TextInputClient_DispatchKeyEventPostIME_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.stoppedPropagation;
  }
};
