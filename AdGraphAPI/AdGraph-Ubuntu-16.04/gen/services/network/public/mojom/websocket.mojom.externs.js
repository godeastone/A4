// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.WebSocketClientPtr = class {

  /**
   * @param { !string } reason
   */
   onFailChannel(reason) {}
  /**
   * @param { !network.mojom.WebSocketHandshakeRequest } request
   */
   onStartOpeningHandshake(request) {}
  /**
   * @param { !network.mojom.WebSocketHandshakeResponse } response
   */
   onFinishOpeningHandshake(response) {}
  /**
   * @param { !string } selectedProtocol
   * @param { !string } extensions
   */
   onAddChannelResponse(selectedProtocol, extensions) {}
  /**
   * @param { !boolean } fin
   * @param { !network.mojom.WebSocketMessageType } type
   * @param { !Array<number> } data
   */
   onDataFrame(fin, type, data) {}
  /**
   * @param { !number } quota
   */
   onFlowControl(quota) {}
  /**
   * @param { !boolean } wasClean
   * @param { !number } code
   * @param { !string } reason
   */
   onDropChannel(wasClean, code, reason) {}
  /**
   */
   onClosingHandshake() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.WebSocketClient;
/** @implements {mojo.InterfacePtr} */
network.mojom.WebSocketPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !Array<string> } requestedProtocols
   * @param { !url.mojom.Url } firstPartyForCookies
   * @param { !string } userAgentOverride
   * @param { !network.mojom.WebSocketClientPtr } client
   */
   addChannelRequest(url, requestedProtocols, firstPartyForCookies, userAgentOverride, client) {}
  /**
   * @param { !boolean } fin
   * @param { !network.mojom.WebSocketMessageType } type
   * @param { !Array<number> } data
   */
   sendFrame(fin, type, data) {}
  /**
   * @param { !number } quota
   */
   sendFlowControl(quota) {}
  /**
   * @param { !number } code
   * @param { !string } reason
   */
   startClosingHandshake(code, reason) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.WebSocket;
network.mojom.HttpHeader = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.value;
  }
};
network.mojom.WebSocketHandshakeRequest = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !Array<network.mojom.HttpHeader> } */
    this.headers;
    /** @type { !string } */
    this.headersText;
  }
};
network.mojom.WebSocketHandshakeResponse = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.statusCode;
    /** @type { !string } */
    this.statusText;
    /** @type { !Array<network.mojom.HttpHeader> } */
    this.headers;
    /** @type { !string } */
    this.headersText;
  }
};
network.mojom.WebSocketClient_OnFailChannel_Params = class {
  constructor() {
    /** @type { !string } */
    this.reason;
  }
};
network.mojom.WebSocketClient_OnStartOpeningHandshake_Params = class {
  constructor() {
    /** @type { !network.mojom.WebSocketHandshakeRequest } */
    this.request;
  }
};
network.mojom.WebSocketClient_OnFinishOpeningHandshake_Params = class {
  constructor() {
    /** @type { !network.mojom.WebSocketHandshakeResponse } */
    this.response;
  }
};
network.mojom.WebSocketClient_OnAddChannelResponse_Params = class {
  constructor() {
    /** @type { !string } */
    this.selectedProtocol;
    /** @type { !string } */
    this.extensions;
  }
};
network.mojom.WebSocketClient_OnDataFrame_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.fin;
    /** @type { !network.mojom.WebSocketMessageType } */
    this.type;
    /** @type { !Array<number> } */
    this.data;
  }
};
network.mojom.WebSocketClient_OnFlowControl_Params = class {
  constructor() {
    /** @type { !number } */
    this.quota;
  }
};
network.mojom.WebSocketClient_OnDropChannel_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.wasClean;
    /** @type { !number } */
    this.code;
    /** @type { !string } */
    this.reason;
  }
};
network.mojom.WebSocketClient_OnClosingHandshake_Params = class {
  constructor() {
  }
};
network.mojom.WebSocket_AddChannelRequest_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !Array<string> } */
    this.requestedProtocols;
    /** @type { !url.mojom.Url } */
    this.firstPartyForCookies;
    /** @type { !string } */
    this.userAgentOverride;
    /** @type { !network.mojom.WebSocketClientPtr } */
    this.client;
  }
};
network.mojom.WebSocket_SendFrame_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.fin;
    /** @type { !network.mojom.WebSocketMessageType } */
    this.type;
    /** @type { !Array<number> } */
    this.data;
  }
};
network.mojom.WebSocket_SendFlowControl_Params = class {
  constructor() {
    /** @type { !number } */
    this.quota;
  }
};
network.mojom.WebSocket_StartClosingHandshake_Params = class {
  constructor() {
    /** @type { !number } */
    this.code;
    /** @type { !string } */
    this.reason;
  }
};
