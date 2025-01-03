// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RendererPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } serviceRequest
   */
   createEmbedderRendererService(serviceRequest) {}
  /**
   * @param { !content.mojom.CreateViewParams } params
   */
   createView(params) {}
  /**
   * @param { !content.mojom.CreateFrameParams } params
   */
   createFrame(params) {}
  /**
   * @param { !number } routingId
   * @param { !number } renderViewRoutingId
   * @param { !number } openerRoutingId
   * @param { !number } parentRoutingId
   * @param { !content.mojom.FrameReplicationState } replicationState
   * @param { !mojoBase.mojom.UnguessableToken } devtoolsFrameToken
   */
   createFrameProxy(routingId, renderViewRoutingId, openerRoutingId, parentRoutingId, replicationState, devtoolsFrameToken) {}
  /**
   * @param { !mojo.InterfaceRequest } clientRequest
   */
   setUpEmbeddedWorkerChannelForServiceWorker(clientRequest) {}
  /**
   * @param { !content.mojom.NetworkConnectionType } connectionType
   * @param { !number } maxBandwidthMbps
   */
   onNetworkConnectionChanged(connectionType, maxBandwidthMbps) {}
  /**
   * @param { !network.mojom.EffectiveConnectionType } effectiveConnectionType
   * @param { !mojoBase.mojom.TimeDelta } httpRtt
   * @param { !mojoBase.mojom.TimeDelta } transportRtt
   * @param { !number } bandwidthKbps
   */
   onNetworkQualityChanged(effectiveConnectionType, httpRtt, transportRtt, bandwidthKbps) {}
  /**
   * @param { !boolean } suspend
   */
   setWebKitSharedTimersSuspended(suspend) {}
  /**
   * @param { !string } userAgent
   */
   setUserAgent(userAgent) {}
  /**
   * @param { !content.mojom.UpdateScrollbarThemeParams } params
   */
   updateScrollbarTheme(params) {}
  /**
   * @param { !number } aquaColorVariant
   * @param { !string } highlightTextColor
   * @param { !string } highlightColor
   */
   onSystemColorsChanged(aquaColorVariant, highlightTextColor, highlightColor) {}
  /**
   * @param { !boolean } reloadPages
   */
   purgePluginListCache(reloadPages) {}
  /**
   * @param { !boolean } background
   */
   setProcessBackgrounded(background) {}
  /**
   * @param { !boolean } keepActive
   */
   setSchedulerKeepActive(keepActive) {}
  /**
   */
   processPurgeAndSuspend() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.Renderer;
content.mojom.CreateViewParams = class {
  constructor() {
    /** @type { !content.mojom.RendererPreferences } */
    this.rendererPreferences;
    /** @type { !content.mojom.WebPreferences } */
    this.webPreferences;
    /** @type { !number } */
    this.viewId;
    /** @type { !number } */
    this.mainFrameRoutingId;
    /** @type { serviceManager.mojom.InterfaceProviderPtr } */
    this.mainFrameInterfaceProvider;
    /** @type { !number } */
    this.mainFrameWidgetRoutingId;
    /** @type { !number } */
    this.openerFrameRouteId;
    /** @type { !string } */
    this.sessionStorageNamespaceId;
    /** @type { !boolean } */
    this.swappedOut;
    /** @type { !boolean } */
    this.hidden;
    /** @type { !boolean } */
    this.neverVisible;
    /** @type { !boolean } */
    this.windowWasCreatedWithOpener;
    /** @type { !boolean } */
    this.hasCommittedRealLoad;
    /** @type { !boolean } */
    this.rendererWideNamedFrameLookup;
    /** @type { !number } */
    this.proxyRoutingId;
    /** @type { !content.mojom.FrameReplicationState } */
    this.replicatedFrameState;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsMainFrameToken;
    /** @type { !content.mojom.VisualProperties } */
    this.visualProperties;
    /** @type { !number } */
    this.pageZoomLevel;
  }
};
content.mojom.CreateFrameWidgetParams = class {
  constructor() {
    /** @type { !number } */
    this.routingId;
    /** @type { !boolean } */
    this.hidden;
  }
};
content.mojom.CreateFrameParams = class {
  constructor() {
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.proxyRoutingId;
    /** @type { !number } */
    this.openerRoutingId;
    /** @type { !number } */
    this.parentRoutingId;
    /** @type { !number } */
    this.previousSiblingRoutingId;
    /** @type { !serviceManager.mojom.InterfaceProviderPtr } */
    this.interfaceProvider;
    /** @type { !boolean } */
    this.hasCommittedRealLoad;
    /** @type { !content.mojom.FrameReplicationState } */
    this.replicationState;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsFrameToken;
    /** @type { !content.mojom.FrameOwnerProperties } */
    this.frameOwnerProperties;
    /** @type { !content.mojom.CreateFrameWidgetParams } */
    this.widgetParams;
  }
};
content.mojom.UpdateScrollbarThemeParams = class {
  constructor() {
    /** @type { !number } */
    this.initialButtonDelay;
    /** @type { !number } */
    this.autoscrollButtonDelay;
    /** @type { !boolean } */
    this.jumpOnTrackClick;
    /** @type { !boolean } */
    this.redraw;
    /** @type { !boolean } */
    this.scrollViewRubberBanding;
    /** @type { !content.mojom.ScrollerStyle } */
    this.preferredScrollerStyle;
    /** @type { !content.mojom.ScrollbarButtonsPlacement } */
    this.buttonPlacement;
  }
};
content.mojom.Renderer_CreateEmbedderRendererService_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.serviceRequest;
  }
};
content.mojom.Renderer_CreateView_Params = class {
  constructor() {
    /** @type { !content.mojom.CreateViewParams } */
    this.params;
  }
};
content.mojom.Renderer_CreateFrame_Params = class {
  constructor() {
    /** @type { !content.mojom.CreateFrameParams } */
    this.params;
  }
};
content.mojom.Renderer_CreateFrameProxy_Params = class {
  constructor() {
    /** @type { !number } */
    this.routingId;
    /** @type { !number } */
    this.renderViewRoutingId;
    /** @type { !number } */
    this.openerRoutingId;
    /** @type { !number } */
    this.parentRoutingId;
    /** @type { !content.mojom.FrameReplicationState } */
    this.replicationState;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.devtoolsFrameToken;
  }
};
content.mojom.Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.clientRequest;
  }
};
content.mojom.Renderer_OnNetworkConnectionChanged_Params = class {
  constructor() {
    /** @type { !content.mojom.NetworkConnectionType } */
    this.connectionType;
    /** @type { !number } */
    this.maxBandwidthMbps;
  }
};
content.mojom.Renderer_OnNetworkQualityChanged_Params = class {
  constructor() {
    /** @type { !network.mojom.EffectiveConnectionType } */
    this.effectiveConnectionType;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.httpRtt;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.transportRtt;
    /** @type { !number } */
    this.bandwidthKbps;
  }
};
content.mojom.Renderer_SetWebKitSharedTimersSuspended_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.suspend;
  }
};
content.mojom.Renderer_SetUserAgent_Params = class {
  constructor() {
    /** @type { !string } */
    this.userAgent;
  }
};
content.mojom.Renderer_UpdateScrollbarTheme_Params = class {
  constructor() {
    /** @type { !content.mojom.UpdateScrollbarThemeParams } */
    this.params;
  }
};
content.mojom.Renderer_OnSystemColorsChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.aquaColorVariant;
    /** @type { !string } */
    this.highlightTextColor;
    /** @type { !string } */
    this.highlightColor;
  }
};
content.mojom.Renderer_PurgePluginListCache_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.reloadPages;
  }
};
content.mojom.Renderer_SetProcessBackgrounded_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.background;
  }
};
content.mojom.Renderer_SetSchedulerKeepActive_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.keepActive;
  }
};
content.mojom.Renderer_ProcessPurgeAndSuspend_Params = class {
  constructor() {
  }
};
