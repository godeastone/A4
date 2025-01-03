// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
content.mojom.SpeechRecognitionHypothesis = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.utterance;
    /** @type { !number } */
    this.confidence;
  }
};
content.mojom.SpeechRecognitionResult = class {
  constructor() {
    /** @type { !Array<content.mojom.SpeechRecognitionHypothesis> } */
    this.hypotheses;
    /** @type { !boolean } */
    this.isProvisional;
  }
};
