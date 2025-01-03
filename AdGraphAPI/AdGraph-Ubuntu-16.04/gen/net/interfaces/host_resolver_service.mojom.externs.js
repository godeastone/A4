// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let net = {};
/** @const */
net.interfaces = {};
/** @implements {mojo.InterfacePtr} */
net.interfaces.HostResolverRequestClientPtr = class {

  /**
   * @param { !number } error
   * @param { !net.interfaces.AddressList } result
   */
   reportResult(error, result) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
net.interfaces.HostResolverRequestClient;
net.interfaces.HostResolverRequestInfo = class {
  constructor() {
    /** @type { !string } */
    this.host;
    /** @type { !number } */
    this.port;
    /** @type { !boolean } */
    this.isMyIpAddress;
    /** @type { !net.interfaces.AddressFamily } */
    this.addressFamily;
  }
};
net.interfaces.HostResolverRequestClient_ReportResult_Params = class {
  constructor() {
    /** @type { !number } */
    this.error;
    /** @type { !net.interfaces.AddressList } */
    this.result;
  }
};
