// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mediaRouter = {};
/** @const */
mediaRouter.mojom = {};
/** @implements {mojo.InterfacePtr} */
mediaRouter.mojom.MediaRouteProviderPtr = class {

  /**
   * @param { !string } mediaSource
   * @param { !string } sinkId
   * @param { !string } originalPresentationId
   * @param { !url.mojom.Origin } origin
   * @param { !number } tabId
   * @param { !mojoBase.mojom.TimeDelta } timeout
   * @param { !boolean } incognito
   * @return {Promise}
   */
   createRoute(mediaSource, sinkId, originalPresentationId, origin, tabId, timeout, incognito) {}
  /**
   * @param { !string } mediaSource
   * @param { !string } presentationId
   * @param { !url.mojom.Origin } origin
   * @param { !number } tabId
   * @param { !mojoBase.mojom.TimeDelta } timeout
   * @param { !boolean } incognito
   * @return {Promise}
   */
   joinRoute(mediaSource, presentationId, origin, tabId, timeout, incognito) {}
  /**
   * @param { !string } mediaSource
   * @param { !string } routeId
   * @param { !string } presentationId
   * @param { !url.mojom.Origin } origin
   * @param { !number } tabId
   * @param { !mojoBase.mojom.TimeDelta } timeout
   * @param { !boolean } incognito
   * @return {Promise}
   */
   connectRouteByRouteId(mediaSource, routeId, presentationId, origin, tabId, timeout, incognito) {}
  /**
   * @param { !string } routeId
   * @return {Promise}
   */
   terminateRoute(routeId) {}
  /**
   * @param { !string } mediaRouteId
   * @param { !string } message
   * @return {Promise}
   */
   sendRouteMessage(mediaRouteId, message) {}
  /**
   * @param { !string } mediaRouteId
   * @param { !Array<number> } data
   * @return {Promise}
   */
   sendRouteBinaryMessage(mediaRouteId, data) {}
  /**
   * @param { !string } mediaSource
   */
   startObservingMediaSinks(mediaSource) {}
  /**
   * @param { !string } mediaSource
   */
   stopObservingMediaSinks(mediaSource) {}
  /**
   * @param { !string } mediaSource
   */
   startObservingMediaRoutes(mediaSource) {}
  /**
   * @param { !string } mediaSource
   */
   stopObservingMediaRoutes(mediaSource) {}
  /**
   * @param { !string } routeId
   */
   startListeningForRouteMessages(routeId) {}
  /**
   * @param { !string } routeId
   */
   stopListeningForRouteMessages(routeId) {}
  /**
   * @param { !string } routeId
   */
   detachRoute(routeId) {}
  /**
   */
   enableMdnsDiscovery() {}
  /**
   * @param { !string } mediaSource
   */
   updateMediaSinks(mediaSource) {}
  /**
   * @param { !string } sinkId
   * @param { !string } mediaSource
   * @param { !mediaRouter.mojom.SinkSearchCriteria } searchCriteria
   * @return {Promise}
   */
   searchSinks(sinkId, mediaSource, searchCriteria) {}
  /**
   * @param { !string } providerName
   * @param { !Array<mediaRouter.mojom.MediaSink> } sinks
   */
   provideSinks(providerName, sinks) {}
  /**
   * @param { !string } routeId
   * @param { !mojo.InterfaceRequest } mediaController
   * @param { !mediaRouter.mojom.MediaStatusObserverPtr } observer
   * @return {Promise}
   */
   createMediaRouteController(routeId, mediaController, observer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mediaRouter.mojom.MediaRouteProvider;
/** @implements {mojo.InterfacePtr} */
mediaRouter.mojom.MediaRouterPtr = class {

  /**
   * @param { !mediaRouter.mojom.Id } providerId
   * @param { !mediaRouter.mojom.MediaRouteProviderPtr } mediaRouterProvider
   * @return {Promise}
   */
   registerMediaRouteProvider(providerId, mediaRouterProvider) {}
  /**
   * @param { !mediaRouter.mojom.Id } providerId
   * @param { !string } mediaSource
   * @param { !Array<mediaRouter.mojom.MediaSink> } sinks
   * @param { !Array<url.mojom.Origin> } origins
   */
   onSinksReceived(providerId, mediaSource, sinks, origins) {}
  /**
   * @param { !mediaRouter.mojom.Issue } issue
   */
   onIssue(issue) {}
  /**
   * @param { !mediaRouter.mojom.Id } providerId
   * @param { !Array<mediaRouter.mojom.MediaRoute> } routes
   * @param { !string } mediaSource
   * @param { !Array<string> } joinableRouteIds
   */
   onRoutesUpdated(providerId, routes, mediaSource, joinableRouteIds) {}
  /**
   * @param { !mediaRouter.mojom.Id } providerId
   * @param { !mediaRouter.mojom.SinkAvailability } availability
   */
   onSinkAvailabilityUpdated(providerId, availability) {}
  /**
   * @param { !string } routeId
   * @param { !mediaRouter.mojom.PresentationConnectionState } state
   */
   onPresentationConnectionStateChanged(routeId, state) {}
  /**
   * @param { !string } routeId
   * @param { !mediaRouter.mojom.PresentationConnectionCloseReason } reason
   * @param { !string } message
   */
   onPresentationConnectionClosed(routeId, reason, message) {}
  /**
   * @param { !string } routeId
   * @param { !Array<mediaRouter.mojom.RouteMessage> } messages
   */
   onRouteMessagesReceived(routeId, messages) {}
  /**
   * @param { !number } tabId
   * @param { !media.mojom.MirrorServiceRemoterPtr } remoter
   * @param { !mojo.InterfaceRequest } remotingSource
   */
   onMediaRemoterCreated(tabId, remoter, remotingSource) {}
  /**
   * @return {Promise}
   */
   getMediaSinkServiceStatus() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mediaRouter.mojom.MediaRouter;
mediaRouter.mojom.MediaSink = class {
  constructor() {
    /** @type { !string } */
    this.sinkId;
    /** @type { !string } */
    this.name;
    /** @type { string } */
    this.description;
    /** @type { string } */
    this.domain;
    /** @type { !mediaRouter.mojom.SinkIconType } */
    this.iconType;
    /** @type { !mediaRouter.mojom.Id } */
    this.providerId;
    /** @type { Object } */
    this.extraData;
  }
};
mediaRouter.mojom.DialMediaSink = class {
  constructor() {
    /** @type { !net.interfaces.IPAddress } */
    this.ipAddress;
    /** @type { !string } */
    this.modelName;
    /** @type { !url.mojom.Url } */
    this.appUrl;
  }
};
mediaRouter.mojom.CastMediaSink = class {
  constructor() {
    /** @type { !net.interfaces.IPEndPoint } */
    this.ipEndpoint;
    /** @type { !string } */
    this.modelName;
    /** @type { !number } */
    this.capabilities;
    /** @type { !number } */
    this.castChannelId;
  }
};
mediaRouter.mojom.MediaRoute = class {
  constructor() {
    /** @type { !string } */
    this.mediaRouteId;
    /** @type { !string } */
    this.presentationId;
    /** @type { string } */
    this.mediaSource;
    /** @type { !string } */
    this.mediaSinkId;
    /** @type { !string } */
    this.description;
    /** @type { !boolean } */
    this.isLocal;
    /** @type { !boolean } */
    this.forDisplay;
    /** @type { !boolean } */
    this.isIncognito;
    /** @type { !boolean } */
    this.isLocalPresentation;
    /** @type { !mediaRouter.mojom.RouteControllerType } */
    this.controllerType;
  }
};
mediaRouter.mojom.Issue = class {
  constructor() {
    /** @type { string } */
    this.routeId;
    /** @type { !mediaRouter.mojom.Severity } */
    this.severity;
    /** @type { !boolean } */
    this.isBlocking;
    /** @type { !string } */
    this.title;
    /** @type { string } */
    this.message;
    /** @type { !mediaRouter.mojom.ActionType } */
    this.defaultAction;
    /** @type { !number } */
    this.helpPageId;
    /** @type { !Array<mediaRouter.mojom.ActionType> } */
    this.secondaryActions;
  }
};
mediaRouter.mojom.RouteMessage = class {
  constructor() {
    /** @type { !mediaRouter.mojom.Type } */
    this.type;
    /** @type { string } */
    this.message;
    /** @type { Array<number> } */
    this.data;
  }
};
mediaRouter.mojom.SinkSearchCriteria = class {
  constructor() {
    /** @type { !string } */
    this.input;
    /** @type { !string } */
    this.domain;
  }
};
mediaRouter.mojom.MediaRouteProviderConfig = class {
  constructor() {
    /** @type { !boolean } */
    this.enableDialDiscovery;
    /** @type { !boolean } */
    this.enableCastDiscovery;
    /** @type { !boolean } */
    this.enableDialSinkQuery;
    /** @type { !boolean } */
    this.enableCastSinkQuery;
  }
};
mediaRouter.mojom.MediaRouteProvider_CreateRoute_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
    /** @type { !string } */
    this.sinkId;
    /** @type { !string } */
    this.originalPresentationId;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !number } */
    this.tabId;
    /** @type { !boolean } */
    this.incognito;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeout;
  }
};
mediaRouter.mojom.MediaRouteProvider_CreateRoute_ResponseParams = class {
  constructor() {
    /** @type { mediaRouter.mojom.MediaRoute } */
    this.route;
    /** @type { string } */
    this.errorText;
    /** @type { !mediaRouter.mojom.RouteRequestResultCode } */
    this.resultCode;
  }
};
mediaRouter.mojom.MediaRouteProvider_JoinRoute_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
    /** @type { !string } */
    this.presentationId;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !number } */
    this.tabId;
    /** @type { !boolean } */
    this.incognito;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeout;
  }
};
mediaRouter.mojom.MediaRouteProvider_JoinRoute_ResponseParams = class {
  constructor() {
    /** @type { mediaRouter.mojom.MediaRoute } */
    this.route;
    /** @type { string } */
    this.errorText;
    /** @type { !mediaRouter.mojom.RouteRequestResultCode } */
    this.resultCode;
  }
};
mediaRouter.mojom.MediaRouteProvider_ConnectRouteByRouteId_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
    /** @type { !string } */
    this.routeId;
    /** @type { !string } */
    this.presentationId;
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !number } */
    this.tabId;
    /** @type { !boolean } */
    this.incognito;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.timeout;
  }
};
mediaRouter.mojom.MediaRouteProvider_ConnectRouteByRouteId_ResponseParams = class {
  constructor() {
    /** @type { mediaRouter.mojom.MediaRoute } */
    this.route;
    /** @type { string } */
    this.errorText;
    /** @type { !mediaRouter.mojom.RouteRequestResultCode } */
    this.resultCode;
  }
};
mediaRouter.mojom.MediaRouteProvider_TerminateRoute_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
  }
};
mediaRouter.mojom.MediaRouteProvider_TerminateRoute_ResponseParams = class {
  constructor() {
    /** @type { string } */
    this.errorText;
    /** @type { !mediaRouter.mojom.RouteRequestResultCode } */
    this.resultCode;
  }
};
mediaRouter.mojom.MediaRouteProvider_SendRouteMessage_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaRouteId;
    /** @type { !string } */
    this.message;
  }
};
mediaRouter.mojom.MediaRouteProvider_SendRouteMessage_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.sent;
  }
};
mediaRouter.mojom.MediaRouteProvider_SendRouteBinaryMessage_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaRouteId;
    /** @type { !Array<number> } */
    this.data;
  }
};
mediaRouter.mojom.MediaRouteProvider_SendRouteBinaryMessage_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.sent;
  }
};
mediaRouter.mojom.MediaRouteProvider_StartObservingMediaSinks_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
  }
};
mediaRouter.mojom.MediaRouteProvider_StopObservingMediaSinks_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
  }
};
mediaRouter.mojom.MediaRouteProvider_StartObservingMediaRoutes_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
  }
};
mediaRouter.mojom.MediaRouteProvider_StopObservingMediaRoutes_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
  }
};
mediaRouter.mojom.MediaRouteProvider_StartListeningForRouteMessages_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
  }
};
mediaRouter.mojom.MediaRouteProvider_StopListeningForRouteMessages_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
  }
};
mediaRouter.mojom.MediaRouteProvider_DetachRoute_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
  }
};
mediaRouter.mojom.MediaRouteProvider_EnableMdnsDiscovery_Params = class {
  constructor() {
  }
};
mediaRouter.mojom.MediaRouteProvider_UpdateMediaSinks_Params = class {
  constructor() {
    /** @type { !string } */
    this.mediaSource;
  }
};
mediaRouter.mojom.MediaRouteProvider_SearchSinks_Params = class {
  constructor() {
    /** @type { !string } */
    this.sinkId;
    /** @type { !string } */
    this.mediaSource;
    /** @type { !mediaRouter.mojom.SinkSearchCriteria } */
    this.searchCriteria;
  }
};
mediaRouter.mojom.MediaRouteProvider_SearchSinks_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.sinkId;
  }
};
mediaRouter.mojom.MediaRouteProvider_ProvideSinks_Params = class {
  constructor() {
    /** @type { !string } */
    this.providerName;
    /** @type { !Array<mediaRouter.mojom.MediaSink> } */
    this.sinks;
  }
};
mediaRouter.mojom.MediaRouteProvider_CreateMediaRouteController_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
    /** @type { !mojo.InterfaceRequest } */
    this.mediaController;
    /** @type { !mediaRouter.mojom.MediaStatusObserverPtr } */
    this.observer;
  }
};
mediaRouter.mojom.MediaRouteProvider_CreateMediaRouteController_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
mediaRouter.mojom.MediaRouter_RegisterMediaRouteProvider_Params = class {
  constructor() {
    /** @type { !mediaRouter.mojom.Id } */
    this.providerId;
    /** @type { !mediaRouter.mojom.MediaRouteProviderPtr } */
    this.mediaRouterProvider;
  }
};
mediaRouter.mojom.MediaRouter_RegisterMediaRouteProvider_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.instanceId;
    /** @type { !mediaRouter.mojom.MediaRouteProviderConfig } */
    this.config;
  }
};
mediaRouter.mojom.MediaRouter_OnSinksReceived_Params = class {
  constructor() {
    /** @type { !mediaRouter.mojom.Id } */
    this.providerId;
    /** @type { !string } */
    this.mediaSource;
    /** @type { !Array<mediaRouter.mojom.MediaSink> } */
    this.sinks;
    /** @type { !Array<url.mojom.Origin> } */
    this.origins;
  }
};
mediaRouter.mojom.MediaRouter_OnIssue_Params = class {
  constructor() {
    /** @type { !mediaRouter.mojom.Issue } */
    this.issue;
  }
};
mediaRouter.mojom.MediaRouter_OnRoutesUpdated_Params = class {
  constructor() {
    /** @type { !mediaRouter.mojom.Id } */
    this.providerId;
    /** @type { !Array<mediaRouter.mojom.MediaRoute> } */
    this.routes;
    /** @type { !string } */
    this.mediaSource;
    /** @type { !Array<string> } */
    this.joinableRouteIds;
  }
};
mediaRouter.mojom.MediaRouter_OnSinkAvailabilityUpdated_Params = class {
  constructor() {
    /** @type { !mediaRouter.mojom.Id } */
    this.providerId;
    /** @type { !mediaRouter.mojom.SinkAvailability } */
    this.availability;
  }
};
mediaRouter.mojom.MediaRouter_OnPresentationConnectionStateChanged_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
    /** @type { !mediaRouter.mojom.PresentationConnectionState } */
    this.state;
  }
};
mediaRouter.mojom.MediaRouter_OnPresentationConnectionClosed_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
    /** @type { !mediaRouter.mojom.PresentationConnectionCloseReason } */
    this.reason;
    /** @type { !string } */
    this.message;
  }
};
mediaRouter.mojom.MediaRouter_OnRouteMessagesReceived_Params = class {
  constructor() {
    /** @type { !string } */
    this.routeId;
    /** @type { !Array<mediaRouter.mojom.RouteMessage> } */
    this.messages;
  }
};
mediaRouter.mojom.MediaRouter_OnMediaRemoterCreated_Params = class {
  constructor() {
    /** @type { !number } */
    this.tabId;
    /** @type { !media.mojom.MirrorServiceRemoterPtr } */
    this.remoter;
    /** @type { !mojo.InterfaceRequest } */
    this.remotingSource;
  }
};
mediaRouter.mojom.MediaRouter_GetMediaSinkServiceStatus_Params = class {
  constructor() {
  }
};
mediaRouter.mojom.MediaRouter_GetMediaSinkServiceStatus_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.status;
  }
};
