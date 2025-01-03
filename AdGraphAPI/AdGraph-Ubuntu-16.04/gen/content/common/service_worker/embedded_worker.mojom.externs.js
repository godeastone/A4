// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.EmbeddedWorkerInstanceClientPtr = class {

  /**
   * @param { !content.mojom.EmbeddedWorkerStartParams } params
   */
   startWorker(params) {}
  /**
   */
   stopWorker() {}
  /**
   */
   resumeAfterDownload() {}
  /**
   * @param { !blink.mojom.ConsoleMessageLevel } level
   * @param { !string } message
   */
   addMessageToConsole(level, message) {}
  /**
   * @param { !mojo.AssociatedInterfaceRequest } devtoolsAgent
   */
   bindDevToolsAgent(devtoolsAgent) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.EmbeddedWorkerInstanceClient;
/** @implements {mojo.InterfacePtr} */
content.mojom.EmbeddedWorkerInstanceHostPtr = class {

  /**
   */
   requestTermination() {}
  /**
   * @param { !blink.mojom.WebFeature } feature
   */
   countFeature(feature) {}
  /**
   */
   onReadyForInspection() {}
  /**
   */
   onScriptLoaded() {}
  /**
   */
   onScriptLoadFailed() {}
  /**
   * @param { !number } threadId
   */
   onThreadStarted(threadId) {}
  /**
   * @param { !boolean } success
   */
   onScriptEvaluated(success) {}
  /**
   * @param { !content.mojom.EmbeddedWorkerStartTiming } startTiming
   */
   onStarted(startTiming) {}
  /**
   * @param { !mojoBase.mojom.String16 } errorMessage
   * @param { !number } lineNumber
   * @param { !number } columnNumber
   * @param { !url.mojom.Url } sourceUrl
   */
   onReportException(errorMessage, lineNumber, columnNumber, sourceUrl) {}
  /**
   * @param { !number } sourceIdentifier
   * @param { !number } messageLevel
   * @param { !mojoBase.mojom.String16 } message
   * @param { !number } lineNumber
   * @param { !url.mojom.Url } sourceUrl
   */
   onReportConsoleMessage(sourceIdentifier, messageLevel, message, lineNumber, sourceUrl) {}
  /**
   */
   onStopped() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.EmbeddedWorkerInstanceHost;
content.mojom.EmbeddedWorkerStartParams = class {
  constructor() {
    /** @type { !number } */
    this.embeddedWorkerId;
    /** @type { !number } */
    this.workerDevtoolsAgentRouteId;
    /** @type { !number } */
    this.serviceWorkerVersionId;
    /** @type { !url.mojom.Url } */
    this.scope;
    /** @type { !url.mojom.Url } */
    this.scriptUrl;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsWorkerToken;
    /** @type { !boolean } */
    this.pauseAfterDownload;
    /** @type { !boolean } */
    this.waitForDebugger;
    /** @type { !boolean } */
    this.isInstalled;
    /** @type { !boolean } */
    this.dataSaverEnabled;
    /** @type { !content.mojom.V8CacheOptions } */
    this.v8CacheOptions;
    /** @type { !mojo.InterfaceRequest } */
    this.dispatcherRequest;
    /** @type { !mojo.InterfaceRequest } */
    this.controllerRequest;
    /** @type { blink.mojom.ServiceWorkerInstalledScriptsInfo } */
    this.installedScriptsInfo;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.instanceHost;
    /** @type { !content.mojom.ServiceWorkerProviderInfoForStartWorker } */
    this.providerInfo;
    /** @type { !blink.mojom.WorkerContentSettingsProxyPtr } */
    this.contentSettingsProxy;
  }
};
content.mojom.EmbeddedWorkerStartTiming = class {
  constructor() {
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.blinkInitializedTime;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.startWorkerReceivedTime;
  }
};
content.mojom.EmbeddedWorkerInstanceClient_StartWorker_Params = class {
  constructor() {
    /** @type { !content.mojom.EmbeddedWorkerStartParams } */
    this.params;
  }
};
content.mojom.EmbeddedWorkerInstanceClient_StopWorker_Params = class {
  constructor() {
  }
};
content.mojom.EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params = class {
  constructor() {
  }
};
content.mojom.EmbeddedWorkerInstanceClient_AddMessageToConsole_Params = class {
  constructor() {
    /** @type { !blink.mojom.ConsoleMessageLevel } */
    this.level;
    /** @type { !string } */
    this.message;
  }
};
content.mojom.EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.devtoolsAgent;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_RequestTermination_Params = class {
  constructor() {
  }
};
content.mojom.EmbeddedWorkerInstanceHost_CountFeature_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebFeature } */
    this.feature;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnReadyForInspection_Params = class {
  constructor() {
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnScriptLoaded_Params = class {
  constructor() {
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params = class {
  constructor() {
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnThreadStarted_Params = class {
  constructor() {
    /** @type { !number } */
    this.threadId;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnStarted_Params = class {
  constructor() {
    /** @type { !content.mojom.EmbeddedWorkerStartTiming } */
    this.startTiming;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnReportException_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.errorMessage;
    /** @type { !number } */
    this.lineNumber;
    /** @type { !number } */
    this.columnNumber;
    /** @type { !url.mojom.Url } */
    this.sourceUrl;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params = class {
  constructor() {
    /** @type { !number } */
    this.sourceIdentifier;
    /** @type { !number } */
    this.messageLevel;
    /** @type { !mojoBase.mojom.String16 } */
    this.message;
    /** @type { !number } */
    this.lineNumber;
    /** @type { !url.mojom.Url } */
    this.sourceUrl;
  }
};
content.mojom.EmbeddedWorkerInstanceHost_OnStopped_Params = class {
  constructor() {
  }
};
