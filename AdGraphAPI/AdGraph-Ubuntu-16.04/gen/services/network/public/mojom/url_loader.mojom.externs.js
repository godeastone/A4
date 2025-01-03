// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.URLLoaderPtr = class {

  /**
   * @param { network.mojom.HttpRequestHeaders } modifiedRequestHeaders
   */
   followRedirect(modifiedRequestHeaders) {}
  /**
   */
   proceedWithResponse() {}
  /**
   * @param { !network.mojom.RequestPriority } priority
   * @param { !number } intraPriorityValue
   */
   setPriority(priority, intraPriorityValue) {}
  /**
   */
   pauseReadingBodyFromNet() {}
  /**
   */
   resumeReadingBodyFromNet() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.URLLoader;
/** @implements {mojo.InterfacePtr} */
network.mojom.DownloadedTempFilePtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.DownloadedTempFile;
/** @implements {mojo.InterfacePtr} */
network.mojom.URLLoaderClientPtr = class {

  /**
   * @param { !network.mojom.URLResponseHead } head
   * @param { network.mojom.DownloadedTempFilePtr } downloadedFile
   */
   onReceiveResponse(head, downloadedFile) {}
  /**
   * @param { !network.mojom.URLRequestRedirectInfo } redirectInfo
   * @param { !network.mojom.URLResponseHead } head
   */
   onReceiveRedirect(redirectInfo, head) {}
  /**
   * @param { !number } dataLength
   * @param { !number } encodedLength
   */
   onDataDownloaded(dataLength, encodedLength) {}
  /**
   * @param { !number } currentPosition
   * @param { !number } totalSize
   * @return {Promise}
   */
   onUploadProgress(currentPosition, totalSize) {}
  /**
   * @param { !Array<number> } data
   */
   onReceiveCachedMetadata(data) {}
  /**
   * @param { !number } transferSizeDiff
   */
   onTransferSizeUpdated(transferSizeDiff) {}
  /**
   * @param { !mojo.MojoHandle } body
   */
   onStartLoadingResponseBody(body) {}
  /**
   * @param { !network.mojom.URLLoaderCompletionStatus } status
   */
   onComplete(status) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.URLLoaderClient;
network.mojom.URLRequest = class {
  constructor() {
  }
};
network.mojom.URLResponseHead = class {
  constructor() {
  }
};
network.mojom.URLRequestRedirectInfo = class {
  constructor() {
  }
};
network.mojom.CORSErrorStatus = class {
  constructor() {
  }
};
network.mojom.URLLoaderCompletionStatus = class {
  constructor() {
  }
};
network.mojom.URLLoaderClientEndpoints = class {
  constructor() {
    /** @type { !network.mojom.URLLoaderPtr } */
    this.urlLoader;
    /** @type { !mojo.InterfaceRequest } */
    this.urlLoaderClient;
  }
};
network.mojom.URLLoader_FollowRedirect_Params = class {
  constructor() {
    /** @type { network.mojom.HttpRequestHeaders } */
    this.modifiedRequestHeaders;
  }
};
network.mojom.URLLoader_ProceedWithResponse_Params = class {
  constructor() {
  }
};
network.mojom.URLLoader_SetPriority_Params = class {
  constructor() {
    /** @type { !network.mojom.RequestPriority } */
    this.priority;
    /** @type { !number } */
    this.intraPriorityValue;
  }
};
network.mojom.URLLoader_PauseReadingBodyFromNet_Params = class {
  constructor() {
  }
};
network.mojom.URLLoader_ResumeReadingBodyFromNet_Params = class {
  constructor() {
  }
};
network.mojom.URLLoaderClient_OnReceiveResponse_Params = class {
  constructor() {
    /** @type { !network.mojom.URLResponseHead } */
    this.head;
    /** @type { network.mojom.DownloadedTempFilePtr } */
    this.downloadedFile;
  }
};
network.mojom.URLLoaderClient_OnReceiveRedirect_Params = class {
  constructor() {
    /** @type { !network.mojom.URLRequestRedirectInfo } */
    this.redirectInfo;
    /** @type { !network.mojom.URLResponseHead } */
    this.head;
  }
};
network.mojom.URLLoaderClient_OnDataDownloaded_Params = class {
  constructor() {
    /** @type { !number } */
    this.dataLength;
    /** @type { !number } */
    this.encodedLength;
  }
};
network.mojom.URLLoaderClient_OnUploadProgress_Params = class {
  constructor() {
    /** @type { !number } */
    this.currentPosition;
    /** @type { !number } */
    this.totalSize;
  }
};
network.mojom.URLLoaderClient_OnUploadProgress_ResponseParams = class {
  constructor() {
  }
};
network.mojom.URLLoaderClient_OnReceiveCachedMetadata_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
  }
};
network.mojom.URLLoaderClient_OnTransferSizeUpdated_Params = class {
  constructor() {
    /** @type { !number } */
    this.transferSizeDiff;
  }
};
network.mojom.URLLoaderClient_OnStartLoadingResponseBody_Params = class {
  constructor() {
    /** @type { !mojo.MojoHandle } */
    this.body;
  }
};
network.mojom.URLLoaderClient_OnComplete_Params = class {
  constructor() {
    /** @type { !network.mojom.URLLoaderCompletionStatus } */
    this.status;
  }
};
