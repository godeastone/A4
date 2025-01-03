// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.UDPSocketPtr = class {

  /**
   * @param { !net.interfaces.IPEndPoint } localAddr
   * @param { network.mojom.UDPSocketOptions } socketOptions
   * @return {Promise}
   */
   bind(localAddr, socketOptions) {}
  /**
   * @param { !net.interfaces.IPEndPoint } remoteAddr
   * @param { network.mojom.UDPSocketOptions } socketOptions
   * @return {Promise}
   */
   connect(remoteAddr, socketOptions) {}
  /**
   * @param { !boolean } broadcast
   * @return {Promise}
   */
   setBroadcast(broadcast) {}
  /**
   * @param { !net.interfaces.IPAddress } groupAddress
   * @return {Promise}
   */
   joinGroup(groupAddress) {}
  /**
   * @param { !net.interfaces.IPAddress } groupAddress
   * @return {Promise}
   */
   leaveGroup(groupAddress) {}
  /**
   * @param { !number } numAdditionalDatagrams
   */
   receiveMore(numAdditionalDatagrams) {}
  /**
   * @param { !number } numAdditionalDatagrams
   * @param { !number } bufferSize
   */
   receiveMoreWithBufferSize(numAdditionalDatagrams, bufferSize) {}
  /**
   * @param { !net.interfaces.IPEndPoint } destAddr
   * @param { !mojoBase.mojom.ReadOnlyBuffer } data
   * @param { !network.mojom.MutableNetworkTrafficAnnotationTag } trafficAnnotation
   * @return {Promise}
   */
   sendTo(destAddr, data, trafficAnnotation) {}
  /**
   * @param { !mojoBase.mojom.ReadOnlyBuffer } data
   * @param { !network.mojom.MutableNetworkTrafficAnnotationTag } trafficAnnotation
   * @return {Promise}
   */
   send(data, trafficAnnotation) {}
  /**
   */
   close() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.UDPSocket;
/** @implements {mojo.InterfacePtr} */
network.mojom.UDPSocketReceiverPtr = class {

  /**
   * @param { !number } result
   * @param { net.interfaces.IPEndPoint } srcAddr
   * @param { mojoBase.mojom.ReadOnlyBuffer } data
   */
   onReceived(result, srcAddr, data) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.UDPSocketReceiver;
network.mojom.UDPSocketOptions = class {
  constructor() {
    /** @type { !boolean } */
    this.allowAddressReuse;
    /** @type { !boolean } */
    this.multicastLoopbackMode;
    /** @type { !number } */
    this.multicastInterface;
    /** @type { !number } */
    this.multicastTimeToLive;
    /** @type { !number } */
    this.sendBufferSize;
    /** @type { !number } */
    this.receiveBufferSize;
  }
};
network.mojom.UDPSocket_Bind_Params = class {
  constructor() {
    /** @type { !net.interfaces.IPEndPoint } */
    this.localAddr;
    /** @type { network.mojom.UDPSocketOptions } */
    this.socketOptions;
  }
};
network.mojom.UDPSocket_Bind_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
    /** @type { net.interfaces.IPEndPoint } */
    this.localAddrOut;
  }
};
network.mojom.UDPSocket_Connect_Params = class {
  constructor() {
    /** @type { !net.interfaces.IPEndPoint } */
    this.remoteAddr;
    /** @type { network.mojom.UDPSocketOptions } */
    this.socketOptions;
  }
};
network.mojom.UDPSocket_Connect_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
    /** @type { net.interfaces.IPEndPoint } */
    this.localAddrOut;
  }
};
network.mojom.UDPSocket_SetBroadcast_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.broadcast;
  }
};
network.mojom.UDPSocket_SetBroadcast_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
network.mojom.UDPSocket_JoinGroup_Params = class {
  constructor() {
    /** @type { !net.interfaces.IPAddress } */
    this.groupAddress;
  }
};
network.mojom.UDPSocket_JoinGroup_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
network.mojom.UDPSocket_LeaveGroup_Params = class {
  constructor() {
    /** @type { !net.interfaces.IPAddress } */
    this.groupAddress;
  }
};
network.mojom.UDPSocket_LeaveGroup_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
network.mojom.UDPSocket_ReceiveMore_Params = class {
  constructor() {
    /** @type { !number } */
    this.numAdditionalDatagrams;
  }
};
network.mojom.UDPSocket_ReceiveMoreWithBufferSize_Params = class {
  constructor() {
    /** @type { !number } */
    this.numAdditionalDatagrams;
    /** @type { !number } */
    this.bufferSize;
  }
};
network.mojom.UDPSocket_SendTo_Params = class {
  constructor() {
    /** @type { !net.interfaces.IPEndPoint } */
    this.destAddr;
    /** @type { !mojoBase.mojom.ReadOnlyBuffer } */
    this.data;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
  }
};
network.mojom.UDPSocket_SendTo_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
network.mojom.UDPSocket_Send_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ReadOnlyBuffer } */
    this.data;
    /** @type { !network.mojom.MutableNetworkTrafficAnnotationTag } */
    this.trafficAnnotation;
  }
};
network.mojom.UDPSocket_Send_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.result;
  }
};
network.mojom.UDPSocket_Close_Params = class {
  constructor() {
  }
};
network.mojom.UDPSocketReceiver_OnReceived_Params = class {
  constructor() {
    /** @type { !number } */
    this.result;
    /** @type { net.interfaces.IPEndPoint } */
    this.srcAddr;
    /** @type { mojoBase.mojom.ReadOnlyBuffer } */
    this.data;
  }
};
