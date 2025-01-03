// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.TCPConnectedSocketPtr = class {

  /**
   * @return {Promise}
   */
   getLocalAddress() {}
  /**
   * @param { !network.mojom.HostPortPair } hostPortPair
   * @param { !network.mojom.MutableNetworkTrafficAnnotationTag } trafficAnnotation
   * @param { !mojo.InterfaceRequest } request
   * @param { network.mojom.SocketObserverPtr } observer
   * @return {Promise}
   */
   upgradeToTLS(hostPortPair, trafficAnnotation, request, observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.TCPConnectedSocket;
/** @implements {mojo.InterfacePtr} */
network.mojom.SocketObserverPtr = class {

  /**
   * @param { !number } netError
   */
   onReadError(netError) {}
  /**
   * @param { !number } netError
   */
   onWriteError(netError) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.SocketObserver;
/** @implements {mojo.InterfacePtr} */
network.mojom.TCPServerSocketPtr = class {

  /**
   * @param { network.mojom.SocketObserverPtr } observer
   * @return {Promise}
   */
   accept(observer) {}
  /**
   * @return {Promise}
   */
   getLocalAddress() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.TCPServerSocket;
network.mojom.TCPConnectedSocket_GetLocalAddress_Params = class {
  constructor() {
  }
};
network.mojom.TCPConnectedSocket_GetLocalAddress_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
    /** @type { net.interfaces.IPEndPoint } */
    this.localAddr;
  }
};
network.mojom.TCPConnectedSocket_UpgradeToTLS_Params = class {
  constructor() {
    /** @type { !network.mojom.HostPortPair } */
    this.hostPortPair;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { network.mojom.SocketObserverPtr } */
    this.observer;
  }
};
network.mojom.TCPConnectedSocket_UpgradeToTLS_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
    /** @type { mojo.MojoHandle } */
    this.receiveStream;
    /** @type { mojo.MojoHandle } */
    this.sendStream;
  }
};
network.mojom.SocketObserver_OnReadError_Params = class {
  constructor() {
    /** @type { !number } */
    this.netError;
  }
};
network.mojom.SocketObserver_OnWriteError_Params = class {
  constructor() {
    /** @type { !number } */
    this.netError;
  }
};
network.mojom.TCPServerSocket_Accept_Params = class {
  constructor() {
    /** @type { network.mojom.SocketObserverPtr } */
    this.observer;
  }
};
network.mojom.TCPServerSocket_Accept_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
    /** @type { mojo.MojoHandle } */
    this.sendStream;
    /** @type { net.interfaces.IPEndPoint } */
    this.remoteAddr;
    /** @type { network.mojom.TCPConnectedSocketPtr } */
    this.connectedSocket;
    /** @type { mojo.MojoHandle } */
    this.receiveStream;
  }
};
network.mojom.TCPServerSocket_GetLocalAddress_Params = class {
  constructor() {
  }
};
network.mojom.TCPServerSocket_GetLocalAddress_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.netError;
    /** @type { net.interfaces.IPEndPoint } */
    this.localAddr;
  }
};
