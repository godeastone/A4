// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SpeechRecognizerPtr = class {

  /**
   * @param { !content.mojom.StartSpeechRecognitionRequestParams } params
   */
   start(params) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SpeechRecognizer;
/** @implements {mojo.InterfacePtr} */
content.mojom.SpeechRecognitionSessionPtr = class {

  /**
   */
   abort() {}
  /**
   */
   stopCapture() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SpeechRecognitionSession;
/** @implements {mojo.InterfacePtr} */
content.mojom.SpeechRecognitionSessionClientPtr = class {

  /**
   * @param { !Array<content.mojom.SpeechRecognitionResult> } results
   */
   resultRetrieved(results) {}
  /**
   * @param { !content.mojom.SpeechRecognitionError } error
   */
   errorOccurred(error) {}
  /**
   */
   started() {}
  /**
   */
   audioStarted() {}
  /**
   */
   soundStarted() {}
  /**
   */
   soundEnded() {}
  /**
   */
   audioEnded() {}
  /**
   */
   ended() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SpeechRecognitionSessionClient;
content.mojom.StartSpeechRecognitionRequestParams = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.sessionRequest;
    /** @type { !content.mojom.SpeechRecognitionSessionClientPtr } */
    this.client;
    /** @type { !number } */
    this.maxHypotheses;
    /** @type { !string } */
    this.language;
    /** @type { !Array<content.mojom.SpeechRecognitionGrammar> } */
    this.grammars;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !boolean } */
    this.continuous;
    /** @type { !boolean } */
    this.interimResults;
  }
};
content.mojom.SpeechRecognizer_Start_Params = class {
  constructor() {
    /** @type { !content.mojom.StartSpeechRecognitionRequestParams } */
    this.params;
  }
};
content.mojom.SpeechRecognitionSession_Abort_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSession_StopCapture_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSessionClient_ResultRetrieved_Params = class {
  constructor() {
    /** @type { !Array<content.mojom.SpeechRecognitionResult> } */
    this.results;
  }
};
content.mojom.SpeechRecognitionSessionClient_ErrorOccurred_Params = class {
  constructor() {
    /** @type { !content.mojom.SpeechRecognitionError } */
    this.error;
  }
};
content.mojom.SpeechRecognitionSessionClient_Started_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSessionClient_AudioStarted_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSessionClient_SoundStarted_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSessionClient_SoundEnded_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSessionClient_AudioEnded_Params = class {
  constructor() {
  }
};
content.mojom.SpeechRecognitionSessionClient_Ended_Params = class {
  constructor() {
  }
};
