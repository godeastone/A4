// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.PresentationConnectionPtr = class {

  /**
   * @param { !Object } message
   * @return {Promise}
   */
   onMessage(message) {}
  /**
   * @param { !blink.mojom.PresentationConnectionState } state
   */
   didChangeState(state) {}
  /**
   */
   requestClose() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PresentationConnection;
/** @implements {mojo.InterfacePtr} */
blink.mojom.PresentationServicePtr = class {

  /**
   * @param { !blink.mojom.PresentationControllerPtr } controller
   */
   setController(controller) {}
  /**
   * @param { !blink.mojom.PresentationReceiverPtr } receiver
   */
   setReceiver(receiver) {}
  /**
   * @param { !Array<url.mojom.Url> } presentationUrls
   */
   setDefaultPresentationUrls(presentationUrls) {}
  /**
   * @param { !url.mojom.Url } availabilityUrl
   */
   listenForScreenAvailability(availabilityUrl) {}
  /**
   * @param { !url.mojom.Url } availabilityUrl
   */
   stopListeningForScreenAvailability(availabilityUrl) {}
  /**
   * @param { !Array<url.mojom.Url> } presentationUrls
   * @return {Promise}
   */
   startPresentation(presentationUrls) {}
  /**
   * @param { !Array<url.mojom.Url> } presentationUrls
   * @param { !string } presentationId
   * @return {Promise}
   */
   reconnectPresentation(presentationUrls, presentationId) {}
  /**
   * @param { !blink.mojom.PresentationInfo } presentationInfo
   * @param { !blink.mojom.PresentationConnectionPtr } controllerConnectionPtr
   * @param { !mojo.InterfaceRequest } receiverConnectionRequest
   */
   setPresentationConnection(presentationInfo, controllerConnectionPtr, receiverConnectionRequest) {}
  /**
   * @param { !url.mojom.Url } presentationUrl
   * @param { !string } presentationId
   */
   closeConnection(presentationUrl, presentationId) {}
  /**
   * @param { !url.mojom.Url } presentationUrl
   * @param { !string } presentationId
   */
   terminate(presentationUrl, presentationId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PresentationService;
/** @implements {mojo.InterfacePtr} */
blink.mojom.PresentationControllerPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !blink.mojom.ScreenAvailability } availability
   */
   onScreenAvailabilityUpdated(url, availability) {}
  /**
   * @param { !blink.mojom.PresentationInfo } presentationInfo
   */
   onDefaultPresentationStarted(presentationInfo) {}
  /**
   * @param { !blink.mojom.PresentationInfo } presentationInfo
   * @param { !blink.mojom.PresentationConnectionState } newState
   */
   onConnectionStateChanged(presentationInfo, newState) {}
  /**
   * @param { !blink.mojom.PresentationInfo } presentationInfo
   * @param { !blink.mojom.PresentationConnectionCloseReason } reason
   * @param { !string } message
   */
   onConnectionClosed(presentationInfo, reason, message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PresentationController;
/** @implements {mojo.InterfacePtr} */
blink.mojom.PresentationReceiverPtr = class {

  /**
   * @param { !blink.mojom.PresentationInfo } info
   * @param { !blink.mojom.PresentationConnectionPtr } controllerConnection
   * @param { !mojo.InterfaceRequest } receiverConnectionRequest
   */
   onReceiverConnectionAvailable(info, controllerConnection, receiverConnectionRequest) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PresentationReceiver;
blink.mojom.PresentationInfo = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !string } */
    this.id;
  }
};
blink.mojom.PresentationError = class {
  constructor() {
    /** @type { !blink.mojom.PresentationErrorType } */
    this.errorType;
    /** @type { !string } */
    this.message;
  }
};
blink.mojom.PresentationConnection_OnMessage_Params = class {
  constructor() {
    /** @type { !Object } */
    this.message;
  }
};
blink.mojom.PresentationConnection_OnMessage_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
blink.mojom.PresentationConnection_DidChangeState_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationConnectionState } */
    this.state;
  }
};
blink.mojom.PresentationConnection_RequestClose_Params = class {
  constructor() {
  }
};
blink.mojom.PresentationService_SetController_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationControllerPtr } */
    this.controller;
  }
};
blink.mojom.PresentationService_SetReceiver_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationReceiverPtr } */
    this.receiver;
  }
};
blink.mojom.PresentationService_SetDefaultPresentationUrls_Params = class {
  constructor() {
    /** @type { !Array<url.mojom.Url> } */
    this.presentationUrls;
  }
};
blink.mojom.PresentationService_ListenForScreenAvailability_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.availabilityUrl;
  }
};
blink.mojom.PresentationService_StopListeningForScreenAvailability_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.availabilityUrl;
  }
};
blink.mojom.PresentationService_StartPresentation_Params = class {
  constructor() {
    /** @type { !Array<url.mojom.Url> } */
    this.presentationUrls;
  }
};
blink.mojom.PresentationService_StartPresentation_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.PresentationInfo } */
    this.presentationInfo;
    /** @type { blink.mojom.PresentationError } */
    this.error;
  }
};
blink.mojom.PresentationService_ReconnectPresentation_Params = class {
  constructor() {
    /** @type { !Array<url.mojom.Url> } */
    this.presentationUrls;
    /** @type { !string } */
    this.presentationId;
  }
};
blink.mojom.PresentationService_ReconnectPresentation_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.PresentationInfo } */
    this.presentationInfo;
    /** @type { blink.mojom.PresentationError } */
    this.error;
  }
};
blink.mojom.PresentationService_SetPresentationConnection_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationInfo } */
    this.presentationInfo;
    /** @type { !blink.mojom.PresentationConnectionPtr } */
    this.controllerConnectionPtr;
    /** @type { !mojo.InterfaceRequest } */
    this.receiverConnectionRequest;
  }
};
blink.mojom.PresentationService_CloseConnection_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.presentationUrl;
    /** @type { !string } */
    this.presentationId;
  }
};
blink.mojom.PresentationService_Terminate_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.presentationUrl;
    /** @type { !string } */
    this.presentationId;
  }
};
blink.mojom.PresentationController_OnScreenAvailabilityUpdated_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !blink.mojom.ScreenAvailability } */
    this.availability;
  }
};
blink.mojom.PresentationController_OnDefaultPresentationStarted_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationInfo } */
    this.presentationInfo;
  }
};
blink.mojom.PresentationController_OnConnectionStateChanged_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationInfo } */
    this.presentationInfo;
    /** @type { !blink.mojom.PresentationConnectionState } */
    this.newState;
  }
};
blink.mojom.PresentationController_OnConnectionClosed_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationInfo } */
    this.presentationInfo;
    /** @type { !blink.mojom.PresentationConnectionCloseReason } */
    this.reason;
    /** @type { !string } */
    this.message;
  }
};
blink.mojom.PresentationReceiver_OnReceiverConnectionAvailable_Params = class {
  constructor() {
    /** @type { !blink.mojom.PresentationInfo } */
    this.info;
    /** @type { !blink.mojom.PresentationConnectionPtr } */
    this.controllerConnection;
    /** @type { !mojo.InterfaceRequest } */
    this.receiverConnectionRequest;
  }
};
