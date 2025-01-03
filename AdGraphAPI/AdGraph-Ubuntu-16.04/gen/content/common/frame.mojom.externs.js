// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.FramePtr = class {

  /**
   * @param { !mojo.InterfaceRequest } interfaces
   */
   getInterfaceProvider(interfaces) {}
  /**
   * @return {Promise}
   */
   getCanonicalUrlForSharing() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.Frame;
/** @implements {mojo.InterfacePtr} */
content.mojom.FrameNavigationControlPtr = class {

  /**
   * @param { !network.mojom.URLResponseHead } head
   * @param { !content.mojom.CommonNavigationParams } commonParams
   * @param { !content.mojom.RequestNavigationParams } requestParams
   * @param { network.mojom.URLLoaderClientEndpoints } urlLoaderClientEndpoints
   * @param { content.mojom.URLLoaderFactoryBundle } subresourceLoaderFactories
   * @param { Array<content.mojom.TransferrableURLLoader> } subresourceOverrides
   * @param { content.mojom.ControllerServiceWorkerInfo } controllerServiceWorkerInfo
   * @param { !mojoBase.mojom.UnguessableToken } devtoolsNavigationToken
   */
   commitNavigation(head, commonParams, requestParams, urlLoaderClientEndpoints, subresourceLoaderFactories, subresourceOverrides, controllerServiceWorkerInfo, devtoolsNavigationToken) {}
  /**
   * @param { !content.mojom.CommonNavigationParams } commonParams
   * @param { !content.mojom.RequestNavigationParams } requestParams
   * @param { !boolean } hasStaleCopyInCache
   * @param { !number } errorCode
   * @param { string } errorPageContent
   * @param { content.mojom.URLLoaderFactoryBundle } subresourceLoaderFactories
   */
   commitFailedNavigation(commonParams, requestParams, hasStaleCopyInCache, errorCode, errorPageContent, subresourceLoaderFactories) {}
  /**
   * @param { !content.mojom.CommonNavigationParams } commonParams
   * @param { !content.mojom.RequestNavigationParams } requestParams
   * @return {Promise}
   */
   commitSameDocumentNavigation(commonParams, requestParams) {}
  /**
   * @param { !url.mojom.Url } url
   */
   handleRendererDebugURL(url) {}
  /**
   * @param { !content.mojom.URLLoaderFactoryBundle } subresourceLoaderFactories
   */
   updateSubresourceLoaderFactories(subresourceLoaderFactories) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FrameNavigationControl;
/** @implements {mojo.InterfacePtr} */
content.mojom.FrameBindingsControlPtr = class {

  /**
   * @param { !number } enabledBindingsFlags
   */
   allowBindings(enabledBindingsFlags) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FrameBindingsControl;
/** @implements {mojo.InterfacePtr} */
content.mojom.FrameFactoryPtr = class {

  /**
   * @param { !number } frameRoutingId
   * @param { !mojo.InterfaceRequest } frame
   */
   createFrame(frameRoutingId, frame) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FrameFactory;
/** @implements {mojo.InterfacePtr} */
content.mojom.KeepAliveHandlePtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.KeepAliveHandle;
/** @implements {mojo.InterfacePtr} */
content.mojom.FrameHostPtr = class {

  /**
   * @param { !content.mojom.CreateNewWindowParams } params
   * @return {Promise}
   */
   createNewWindow(params) {}
  /**
   * @param { !mojo.InterfaceRequest } keepAliveHandle
   */
   issueKeepAliveHandle(keepAliveHandle) {}
  /**
   * @param { !content.mojom.DidCommitProvisionalLoadParams } params
   * @param { mojo.InterfaceRequest } interfaceProviderRequest
   */
   didCommitProvisionalLoad(params, interfaceProviderRequest) {}
  /**
   * @param { !content.mojom.DidCommitProvisionalLoadParams } params
   */
   didCommitSameDocumentNavigation(params) {}
  /**
   * @param { !content.mojom.CommonNavigationParams } commonParams
   * @param { !content.mojom.BeginNavigationParams } beginParams
   * @param { blink.mojom.BlobURLTokenPtr } blobUrlToken
   */
   beginNavigation(commonParams, beginParams, blobUrlToken) {}
  /**
   * @param { !url.mojom.Url } url
   * @param { !number } certStatus
   */
   subresourceResponseStarted(url, certStatus) {}
  /**
   * @param { !content.mojom.ResourceLoadInfo } urlLoadInfo
   */
   resourceLoadComplete(urlLoadInfo) {}
  /**
   * @param { !string } name
   * @param { !string } uniqueName
   */
   didChangeName(name, uniqueName) {}
  /**
   * @param { !number } policyBitmap
   */
   enforceInsecureRequestPolicy(policyBitmap) {}
  /**
   * @param { !Array<number> } set
   */
   enforceInsecureNavigationsSet(set) {}
  /**
   * @param { !blink.mojom.WebSandboxFlags } sandboxFlags
   * @param { !Array<blink.mojom.ParsedFeaturePolicyDeclaration> } parsedHeader
   */
   didSetFramePolicyHeaders(sandboxFlags, parsedHeader) {}
  /**
   */
   cancelInitialHistoryLoad() {}
  /**
   * @param { !string } encodingName
   */
   updateEncoding(encodingName) {}
  /**
   * @param { !gfx.mojom.Size } size
   */
   frameSizeChanged(size) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FrameHost;
content.mojom.CommonNavigationParams = class {
  constructor() {
  }
};
content.mojom.RequestNavigationParams = class {
  constructor() {
  }
};
content.mojom.CreateNewWindowParams = class {
  constructor() {
    /** @type { !boolean } */
    this.userGesture;
    /** @type { !boolean } */
    this.openerSuppressed;
    /** @type { !content.mojom.WindowContainerType } */
    this.windowContainerType;
    /** @type { !string } */
    this.sessionStorageNamespaceId;
    /** @type { !string } */
    this.cloneFromSessionStorageNamespaceId;
    /** @type { !string } */
    this.frameName;
    /** @type { !ui.mojom.WindowOpenDisposition } */
    this.disposition;
    /** @type { !url.mojom.Url } */
    this.targetUrl;
    /** @type { !blink.mojom.Referrer } */
    this.referrer;
    /** @type { !blink.mojom.WindowFeatures } */
    this.features;
  }
};
content.mojom.CreateNewWindowReply = class {
  constructor() {
    /** @type { !number } */
    this.routeId;
    /** @type { !number } */
    this.mainFrameRouteId;
    /** @type { !number } */
    this.mainFrameWidgetRouteId;
    /** @type { !serviceManager.mojom.InterfaceProviderPtr } */
    this.mainFrameInterfaceProvider;
    /** @type { !string } */
    this.clonedSessionStorageNamespaceId;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsMainFrameToken;
  }
};
content.mojom.DidCommitProvisionalLoadParams = class {
  constructor() {
  }
};
content.mojom.Frame_GetInterfaceProvider_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.interfaces;
  }
};
content.mojom.Frame_GetCanonicalUrlForSharing_Params = class {
  constructor() {
  }
};
content.mojom.Frame_GetCanonicalUrlForSharing_ResponseParams = class {
  constructor() {
    /** @type { url.mojom.Url } */
    this.canonicalUrl;
  }
};
content.mojom.FrameNavigationControl_CommitNavigation_Params = class {
  constructor() {
    /** @type { !network.mojom.URLResponseHead } */
    this.head;
    /** @type { !content.mojom.CommonNavigationParams } */
    this.commonParams;
    /** @type { !content.mojom.RequestNavigationParams } */
    this.requestParams;
    /** @type { network.mojom.URLLoaderClientEndpoints } */
    this.urlLoaderClientEndpoints;
    /** @type { content.mojom.URLLoaderFactoryBundle } */
    this.subresourceLoaderFactories;
    /** @type { Array<content.mojom.TransferrableURLLoader> } */
    this.subresourceOverrides;
    /** @type { content.mojom.ControllerServiceWorkerInfo } */
    this.controllerServiceWorkerInfo;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsNavigationToken;
  }
};
content.mojom.FrameNavigationControl_CommitFailedNavigation_Params = class {
  constructor() {
    /** @type { !content.mojom.CommonNavigationParams } */
    this.commonParams;
    /** @type { !content.mojom.RequestNavigationParams } */
    this.requestParams;
    /** @type { !boolean } */
    this.hasStaleCopyInCache;
    /** @type { !number } */
    this.errorCode;
    /** @type { string } */
    this.errorPageContent;
    /** @type { content.mojom.URLLoaderFactoryBundle } */
    this.subresourceLoaderFactories;
  }
};
content.mojom.FrameNavigationControl_CommitSameDocumentNavigation_Params = class {
  constructor() {
    /** @type { !content.mojom.CommonNavigationParams } */
    this.commonParams;
    /** @type { !content.mojom.RequestNavigationParams } */
    this.requestParams;
  }
};
content.mojom.FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.CommitResult } */
    this.commitResult;
  }
};
content.mojom.FrameNavigationControl_HandleRendererDebugURL_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
content.mojom.FrameNavigationControl_UpdateSubresourceLoaderFactories_Params = class {
  constructor() {
    /** @type { !content.mojom.URLLoaderFactoryBundle } */
    this.subresourceLoaderFactories;
  }
};
content.mojom.FrameBindingsControl_AllowBindings_Params = class {
  constructor() {
    /** @type { !number } */
    this.enabledBindingsFlags;
  }
};
content.mojom.FrameFactory_CreateFrame_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameRoutingId;
    /** @type { !mojo.InterfaceRequest } */
    this.frame;
  }
};
content.mojom.FrameHost_CreateNewWindow_Params = class {
  constructor() {
    /** @type { !content.mojom.CreateNewWindowParams } */
    this.params;
  }
};
content.mojom.FrameHost_CreateNewWindow_ResponseParams = class {
  constructor() {
    /** @type { !content.mojom.CreateNewWindowStatus } */
    this.status;
    /** @type { content.mojom.CreateNewWindowReply } */
    this.reply;
  }
};
content.mojom.FrameHost_IssueKeepAliveHandle_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.keepAliveHandle;
  }
};
content.mojom.FrameHost_DidCommitProvisionalLoad_Params = class {
  constructor() {
    /** @type { !content.mojom.DidCommitProvisionalLoadParams } */
    this.params;
    /** @type { mojo.InterfaceRequest } */
    this.interfaceProviderRequest;
  }
};
content.mojom.FrameHost_DidCommitSameDocumentNavigation_Params = class {
  constructor() {
    /** @type { !content.mojom.DidCommitProvisionalLoadParams } */
    this.params;
  }
};
content.mojom.FrameHost_BeginNavigation_Params = class {
  constructor() {
    /** @type { !content.mojom.CommonNavigationParams } */
    this.commonParams;
    /** @type { !content.mojom.BeginNavigationParams } */
    this.beginParams;
    /** @type { blink.mojom.BlobURLTokenPtr } */
    this.blobUrlToken;
  }
};
content.mojom.FrameHost_SubresourceResponseStarted_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !number } */
    this.certStatus;
  }
};
content.mojom.FrameHost_ResourceLoadComplete_Params = class {
  constructor() {
    /** @type { !content.mojom.ResourceLoadInfo } */
    this.urlLoadInfo;
  }
};
content.mojom.FrameHost_DidChangeName_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.uniqueName;
  }
};
content.mojom.FrameHost_EnforceInsecureRequestPolicy_Params = class {
  constructor() {
    /** @type { !number } */
    this.policyBitmap;
  }
};
content.mojom.FrameHost_EnforceInsecureNavigationsSet_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.set;
  }
};
content.mojom.FrameHost_DidSetFramePolicyHeaders_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebSandboxFlags } */
    this.sandboxFlags;
    /** @type { !Array<blink.mojom.ParsedFeaturePolicyDeclaration> } */
    this.parsedHeader;
  }
};
content.mojom.FrameHost_CancelInitialHistoryLoad_Params = class {
  constructor() {
  }
};
content.mojom.FrameHost_UpdateEncoding_Params = class {
  constructor() {
    /** @type { !string } */
    this.encodingName;
  }
};
content.mojom.FrameHost_FrameSizeChanged_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.size;
  }
};
