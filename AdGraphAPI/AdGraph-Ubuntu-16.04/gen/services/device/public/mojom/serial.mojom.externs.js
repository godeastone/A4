// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.SerialDeviceEnumeratorPtr = class {

  /**
   * @return {Promise}
   */
   getDevices() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.SerialDeviceEnumerator;
/** @implements {mojo.InterfacePtr} */
device.mojom.SerialIoHandlerPtr = class {

  /**
   * @param { !string } port
   * @param { !device.mojom.SerialConnectionOptions } options
   * @return {Promise}
   */
   open(port, options) {}
  /**
   * @param { !number } bytes
   * @return {Promise}
   */
   read(bytes) {}
  /**
   * @param { !Array<number> } data
   * @return {Promise}
   */
   write(data) {}
  /**
   * @param { !device.mojom.SerialReceiveError } reason
   */
   cancelRead(reason) {}
  /**
   * @param { !device.mojom.SerialSendError } reason
   */
   cancelWrite(reason) {}
  /**
   * @return {Promise}
   */
   flush() {}
  /**
   * @return {Promise}
   */
   getControlSignals() {}
  /**
   * @param { !device.mojom.SerialHostControlSignals } signals
   * @return {Promise}
   */
   setControlSignals(signals) {}
  /**
   * @param { !device.mojom.SerialConnectionOptions } options
   * @return {Promise}
   */
   configurePort(options) {}
  /**
   * @return {Promise}
   */
   getPortInfo() {}
  /**
   * @return {Promise}
   */
   setBreak() {}
  /**
   * @return {Promise}
   */
   clearBreak() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.SerialIoHandler;
device.mojom.SerialDeviceInfo = class {
  constructor() {
    /** @type { !string } */
    this.path;
    /** @type { !number } */
    this.vendorId;
    /** @type { !boolean } */
    this.hasVendorId;
    /** @type { !boolean } */
    this.hasProductId;
    /** @type { !number } */
    this.productId;
    /** @type { string } */
    this.displayName;
  }
};
device.mojom.SerialConnectionOptions = class {
  constructor() {
    /** @type { !number } */
    this.bitrate;
    /** @type { !device.mojom.SerialDataBits } */
    this.dataBits;
    /** @type { !device.mojom.SerialParityBit } */
    this.parityBit;
    /** @type { !device.mojom.SerialStopBits } */
    this.stopBits;
    /** @type { !boolean } */
    this.ctsFlowControl;
    /** @type { !boolean } */
    this.hasCtsFlowControl;
  }
};
device.mojom.SerialConnectionInfo = class {
  constructor() {
    /** @type { !number } */
    this.bitrate;
    /** @type { !device.mojom.SerialDataBits } */
    this.dataBits;
    /** @type { !device.mojom.SerialParityBit } */
    this.parityBit;
    /** @type { !device.mojom.SerialStopBits } */
    this.stopBits;
    /** @type { !boolean } */
    this.ctsFlowControl;
  }
};
device.mojom.SerialHostControlSignals = class {
  constructor() {
    /** @type { !boolean } */
    this.dtr;
    /** @type { !boolean } */
    this.hasDtr;
    /** @type { !boolean } */
    this.rts;
    /** @type { !boolean } */
    this.hasRts;
  }
};
device.mojom.SerialDeviceControlSignals = class {
  constructor() {
    /** @type { !boolean } */
    this.dcd;
    /** @type { !boolean } */
    this.cts;
    /** @type { !boolean } */
    this.ri;
    /** @type { !boolean } */
    this.dsr;
  }
};
device.mojom.SerialDeviceEnumerator_GetDevices_Params = class {
  constructor() {
  }
};
device.mojom.SerialDeviceEnumerator_GetDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.SerialDeviceInfo> } */
    this.devices;
  }
};
device.mojom.SerialIoHandler_Open_Params = class {
  constructor() {
    /** @type { !string } */
    this.port;
    /** @type { !device.mojom.SerialConnectionOptions } */
    this.options;
  }
};
device.mojom.SerialIoHandler_Open_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.SerialIoHandler_Read_Params = class {
  constructor() {
    /** @type { !number } */
    this.bytes;
  }
};
device.mojom.SerialIoHandler_Read_ResponseParams = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
    /** @type { !device.mojom.SerialReceiveError } */
    this.error;
  }
};
device.mojom.SerialIoHandler_Write_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
  }
};
device.mojom.SerialIoHandler_Write_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.bytesWritten;
    /** @type { !device.mojom.SerialSendError } */
    this.error;
  }
};
device.mojom.SerialIoHandler_CancelRead_Params = class {
  constructor() {
    /** @type { !device.mojom.SerialReceiveError } */
    this.reason;
  }
};
device.mojom.SerialIoHandler_CancelWrite_Params = class {
  constructor() {
    /** @type { !device.mojom.SerialSendError } */
    this.reason;
  }
};
device.mojom.SerialIoHandler_Flush_Params = class {
  constructor() {
  }
};
device.mojom.SerialIoHandler_Flush_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.SerialIoHandler_GetControlSignals_Params = class {
  constructor() {
  }
};
device.mojom.SerialIoHandler_GetControlSignals_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.SerialDeviceControlSignals } */
    this.signals;
  }
};
device.mojom.SerialIoHandler_SetControlSignals_Params = class {
  constructor() {
    /** @type { !device.mojom.SerialHostControlSignals } */
    this.signals;
  }
};
device.mojom.SerialIoHandler_SetControlSignals_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.SerialIoHandler_ConfigurePort_Params = class {
  constructor() {
    /** @type { !device.mojom.SerialConnectionOptions } */
    this.options;
  }
};
device.mojom.SerialIoHandler_ConfigurePort_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.SerialIoHandler_GetPortInfo_Params = class {
  constructor() {
  }
};
device.mojom.SerialIoHandler_GetPortInfo_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.SerialConnectionInfo } */
    this.info;
  }
};
device.mojom.SerialIoHandler_SetBreak_Params = class {
  constructor() {
  }
};
device.mojom.SerialIoHandler_SetBreak_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.SerialIoHandler_ClearBreak_Params = class {
  constructor() {
  }
};
device.mojom.SerialIoHandler_ClearBreak_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
