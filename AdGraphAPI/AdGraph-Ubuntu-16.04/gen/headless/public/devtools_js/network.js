// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * @fileoverview Generated DevTools bindings for the Network Domain.
 */
'use strict';

goog.provide('chromium.DevTools.ExperimentalNetwork');
goog.provide('chromium.DevTools.Network');
goog.require('chromium.DevTools.Connection');
goog.require('chromium.DevTools.Debugger');
goog.require('chromium.DevTools.Runtime');
goog.require('chromium.DevTools.Security');
goog.forwardDeclare('chromium.DevTools.Page.FrameId');
goog.forwardDeclare('chromium.DevTools.Page.ResourceType');
goog.forwardDeclare('chromium.DevTools.IO.StreamHandle');

goog.scope(function() {
const Connection = chromium.DevTools.Connection;
const Debugger = chromium.DevTools.Debugger;
const Runtime = chromium.DevTools.Runtime;
const Security = chromium.DevTools.Security;

/**
 * Experimental bindings for the Network DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalNetwork = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;
}

const ExperimentalNetwork = chromium.DevTools.ExperimentalNetwork;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
ExperimentalNetwork.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Bindings for the Network DevTools Domain.
 * @param {!Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Network = function(connection) {
  /** @private {!Connection} */
  this.connection_ = connection;

  /** @type {!ExperimentalNetwork} */
  this.experimental = new ExperimentalNetwork(connection);
}

const Network = chromium.DevTools.Network;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
Network.prototype.removeEventListener = function(id) {
  return this.connection_.removeEventListener(id);
}

/**
 * Network level fetch failure reason.
 *
 * @enum {string}
 */
Network.ErrorReason = {
    FAILED: "Failed",
    ABORTED: "Aborted",
    TIMED_OUT: "TimedOut",
    ACCESS_DENIED: "AccessDenied",
    CONNECTION_CLOSED: "ConnectionClosed",
    CONNECTION_RESET: "ConnectionReset",
    CONNECTION_REFUSED: "ConnectionRefused",
    CONNECTION_ABORTED: "ConnectionAborted",
    CONNECTION_FAILED: "ConnectionFailed",
    NAME_NOT_RESOLVED: "NameNotResolved",
    INTERNET_DISCONNECTED: "InternetDisconnected",
    ADDRESS_UNREACHABLE: "AddressUnreachable",
    BLOCKED_BY_CLIENT: "BlockedByClient",
    BLOCKED_BY_RESPONSE: "BlockedByResponse"
};

/**
 * The underlying connection technology that the browser is supposedly using.
 *
 * @enum {string}
 */
Network.ConnectionType = {
    NONE: "none",
    CELLULAR2G: "cellular2g",
    CELLULAR3G: "cellular3g",
    CELLULAR4G: "cellular4g",
    BLUETOOTH: "bluetooth",
    ETHERNET: "ethernet",
    WIFI: "wifi",
    WIMAX: "wimax",
    OTHER: "other"
};

/**
 * Represents the cookie's 'SameSite' status:
 * https://tools.ietf.org/html/draft-west-first-party-cookies
 *
 * @enum {string}
 */
Network.CookieSameSite = {
    EXACT: "Strict",
    LAX: "Lax"
};

/**
 * Loading priority of a resource request.
 *
 * @enum {string}
 */
Network.ResourcePriority = {
    VERY_LOW: "VeryLow",
    LOW: "Low",
    MEDIUM: "Medium",
    HIGH: "High",
    VERY_HIGH: "VeryHigh"
};

/**
 * Whether the request complied with Certificate Transparency policy.
 *
 * @enum {string}
 */
Network.CertificateTransparencyCompliance = {
    UNKNOWN: "unknown",
    NOT_COMPLIANT: "not-compliant",
    COMPLIANT: "compliant"
};

/**
 * The reason why request was blocked.
 *
 * @enum {string}
 */
Network.BlockedReason = {
    OTHER: "other",
    CSP: "csp",
    MIXED_CONTENT: "mixed-content",
    ORIGIN: "origin",
    INSPECTOR: "inspector",
    SUBRESOURCE_FILTER: "subresource-filter",
    CONTENT_TYPE: "content-type"
};

/**
 * Stages of the interception to begin intercepting. Request will intercept before the request is
 * sent. Response will intercept after the response is received.
 *
 * @enum {string}
 */
Network.InterceptionStage = {
    REQUEST: "Request",
    HEADERS_RECEIVED: "HeadersReceived"
};

/**
 * The referrer policy of the request, as defined in https://www.w3.org/TR/referrer-policy/
 *
 * @enum {string}
 */
Network.RequestReferrerPolicy = {
    UNSAFE_URL: "unsafe-url",
    NO_REFERRER_WHEN_DOWNGRADE: "no-referrer-when-downgrade",
    NO_REFERRER: "no-referrer",
    ORIGIN: "origin",
    ORIGIN_WHEN_CROSS_ORIGIN: "origin-when-cross-origin",
    SAME_ORIGIN: "same-origin",
    STRICT_ORIGIN: "strict-origin",
    STRICT_ORIGIN_WHEN_CROSS_ORIGIN: "strict-origin-when-cross-origin"
};

/**
 * Type of this initiator.
 *
 * @enum {string}
 */
Network.InitiatorType = {
    PARSER: "parser",
    SCRIPT: "script",
    PRELOAD: "preload",
    SIGNED_EXCHANGE: "SignedExchange",
    OTHER: "other"
};

/**
 * Source of the authentication challenge.
 *
 * @enum {string}
 */
Network.AuthChallengeSource = {
    SERVER: "Server",
    PROXY: "Proxy"
};

/**
 * The decision on what to do in response to the authorization challenge.  Default means
 * deferring to the default behavior of the net stack, which will likely either the Cancel
 * authentication or display a popup dialog box.
 *
 * @enum {string}
 */
Network.AuthChallengeResponseResponse = {
    DEFAULT: "Default",
    CANCEL_AUTH: "CancelAuth",
    PROVIDE_CREDENTIALS: "ProvideCredentials"
};


/**
 * Timing information for the request.
 *
 * requestTime: Timing's requestTime is a baseline in seconds, while the other numbers are ticks in
 *   milliseconds relatively to this requestTime.
 * proxyStart: Started resolving proxy.
 * proxyEnd: Finished resolving proxy.
 * dnsStart: Started DNS address resolve.
 * dnsEnd: Finished DNS address resolve.
 * connectStart: Started connecting to the remote host.
 * connectEnd: Connected to the remote host.
 * sslStart: Started SSL handshake.
 * sslEnd: Finished SSL handshake.
 * workerStart: Started running ServiceWorker.
 * workerReady: Finished Starting ServiceWorker.
 * sendStart: Started sending request.
 * sendEnd: Finished sending request.
 * pushStart: Time the server started pushing request.
 * pushEnd: Time the server finished pushing request.
 * receiveHeadersEnd: Finished receiving response headers.
 *
 * @typedef {{
 *   requestTime: number,
 *   proxyStart: number,
 *   proxyEnd: number,
 *   dnsStart: number,
 *   dnsEnd: number,
 *   connectStart: number,
 *   connectEnd: number,
 *   sslStart: number,
 *   sslEnd: number,
 *   workerStart: number,
 *   workerReady: number,
 *   sendStart: number,
 *   sendEnd: number,
 *   pushStart: number,
 *   pushEnd: number,
 *   receiveHeadersEnd: number
 * }}
 */
Network.ResourceTiming;

/**
 * HTTP request data.
 *
 * url: Request URL.
 * method: HTTP request method.
 * headers: HTTP request headers.
 * postData: HTTP POST request data.
 * hasPostData: True when the request has POST data. Note that postData might still be omitted when this flag is true when the data is too long.
 * mixedContentType: The mixed content type of the request.
 * initialPriority: Priority of the resource request at the time request is sent.
 * referrerPolicy: The referrer policy of the request, as defined in https://www.w3.org/TR/referrer-policy/
 * isLinkPreload: Whether is loaded via link preload.
 *
 * @typedef {{
 *   url: string,
 *   method: string,
 *   headers: Object,
 *   postData: (string|undefined),
 *   hasPostData: (boolean|undefined),
 *   mixedContentType: (!Security.MixedContentType|undefined),
 *   initialPriority: !Network.ResourcePriority,
 *   referrerPolicy: !Network.RequestReferrerPolicy,
 *   isLinkPreload: (boolean|undefined)
 * }}
 */
Network.Request;

/**
 * Details of a signed certificate timestamp (SCT).
 *
 * status: Validation status.
 * origin: Origin.
 * logDescription: Log name / description.
 * logId: Log ID.
 * timestamp: Issuance date.
 * hashAlgorithm: Hash algorithm.
 * signatureAlgorithm: Signature algorithm.
 * signatureData: Signature data.
 *
 * @typedef {{
 *   status: string,
 *   origin: string,
 *   logDescription: string,
 *   logId: string,
 *   timestamp: number,
 *   hashAlgorithm: string,
 *   signatureAlgorithm: string,
 *   signatureData: string
 * }}
 */
Network.SignedCertificateTimestamp;

/**
 * Security details about a request.
 *
 * protocol: Protocol name (e.g. "TLS 1.2" or "QUIC").
 * keyExchange: Key Exchange used by the connection, or the empty string if not applicable.
 * keyExchangeGroup: (EC)DH group used by the connection, if applicable.
 * cipher: Cipher name.
 * mac: TLS MAC. Note that AEAD ciphers do not have separate MACs.
 * certificateId: Certificate ID value.
 * subjectName: Certificate subject name.
 * sanList: Subject Alternative Name (SAN) DNS names and IP addresses.
 * issuer: Name of the issuing CA.
 * validFrom: Certificate valid from date.
 * validTo: Certificate valid to (expiration) date
 * signedCertificateTimestampList: List of signed certificate timestamps (SCTs).
 * certificateTransparencyCompliance: Whether the request complied with Certificate Transparency policy
 *
 * @typedef {{
 *   protocol: string,
 *   keyExchange: string,
 *   keyExchangeGroup: (string|undefined),
 *   cipher: string,
 *   mac: (string|undefined),
 *   certificateId: number,
 *   subjectName: string,
 *   sanList: !Array.<string>,
 *   issuer: string,
 *   validFrom: number,
 *   validTo: number,
 *   signedCertificateTimestampList: !Array.<!Network.SignedCertificateTimestamp>,
 *   certificateTransparencyCompliance: !Network.CertificateTransparencyCompliance
 * }}
 */
Network.SecurityDetails;

/**
 * HTTP response data.
 *
 * url: Response URL. This URL can be different from CachedResource.url in case of redirect.
 * status: HTTP response status code.
 * statusText: HTTP response status text.
 * headers: HTTP response headers.
 * headersText: HTTP response headers text.
 * mimeType: Resource mimeType as determined by the browser.
 * requestHeaders: Refined HTTP request headers that were actually transmitted over the network.
 * requestHeadersText: HTTP request headers text.
 * connectionReused: Specifies whether physical connection was actually reused for this request.
 * connectionId: Physical connection id that was actually used for this request.
 * remoteIPAddress: Remote IP address.
 * remotePort: Remote port.
 * fromDiskCache: Specifies that the request was served from the disk cache.
 * fromServiceWorker: Specifies that the request was served from the ServiceWorker.
 * encodedDataLength: Total number of bytes received for this request so far.
 * timing: Timing information for the given request.
 * protocol: Protocol used to fetch this request.
 * securityState: Security state of the request resource.
 * securityDetails: Security details for the request.
 *
 * @typedef {{
 *   url: string,
 *   status: number,
 *   statusText: string,
 *   headers: Object,
 *   headersText: (string|undefined),
 *   mimeType: string,
 *   requestHeaders: (Object|undefined),
 *   requestHeadersText: (string|undefined),
 *   connectionReused: boolean,
 *   connectionId: number,
 *   remoteIPAddress: (string|undefined),
 *   remotePort: (number|undefined),
 *   fromDiskCache: (boolean|undefined),
 *   fromServiceWorker: (boolean|undefined),
 *   encodedDataLength: number,
 *   timing: (!Network.ResourceTiming|undefined),
 *   protocol: (string|undefined),
 *   securityState: !Security.SecurityState,
 *   securityDetails: (!Network.SecurityDetails|undefined)
 * }}
 */
Network.Response;

/**
 * WebSocket request data.
 *
 * headers: HTTP request headers.
 *
 * @typedef {{
 *   headers: Object
 * }}
 */
Network.WebSocketRequest;

/**
 * WebSocket response data.
 *
 * status: HTTP response status code.
 * statusText: HTTP response status text.
 * headers: HTTP response headers.
 * headersText: HTTP response headers text.
 * requestHeaders: HTTP request headers.
 * requestHeadersText: HTTP request headers text.
 *
 * @typedef {{
 *   status: number,
 *   statusText: string,
 *   headers: Object,
 *   headersText: (string|undefined),
 *   requestHeaders: (Object|undefined),
 *   requestHeadersText: (string|undefined)
 * }}
 */
Network.WebSocketResponse;

/**
 * WebSocket frame data.
 *
 * opcode: WebSocket frame opcode.
 * mask: WebSocke frame mask.
 * payloadData: WebSocke frame payload data.
 *
 * @typedef {{
 *   opcode: number,
 *   mask: boolean,
 *   payloadData: string
 * }}
 */
Network.WebSocketFrame;

/**
 * Information about the cached resource.
 *
 * url: Resource URL. This is the url of the original network request.
 * type: Type of this resource.
 * response: Cached response data.
 * bodySize: Cached response body size.
 *
 * @typedef {{
 *   url: string,
 *   type: !chromium.DevTools.Page.ResourceType,
 *   response: (!Network.Response|undefined),
 *   bodySize: number
 * }}
 */
Network.CachedResource;

/**
 * Information about the request initiator.
 *
 * type: Type of this initiator.
 * stack: Initiator JavaScript stack trace, set for Script only.
 * url: Initiator URL, set for Parser type or for Script type (when script is importing module) or for SignedExchange type.
 * lineNumber: Initiator line number, set for Parser type or for Script type (when script is importing
 *   module) (0-based).
 *
 * @typedef {{
 *   type: !Network.InitiatorType,
 *   stack: (!Runtime.StackTrace|undefined),
 *   url: (string|undefined),
 *   lineNumber: (number|undefined)
 * }}
 */
Network.Initiator;

/**
 * Cookie object
 *
 * name: Cookie name.
 * value: Cookie value.
 * domain: Cookie domain.
 * path: Cookie path.
 * expires: Cookie expiration date as the number of seconds since the UNIX epoch.
 * size: Cookie size.
 * httpOnly: True if cookie is http-only.
 * secure: True if cookie is secure.
 * session: True in case of session cookie.
 * sameSite: Cookie SameSite type.
 *
 * @typedef {{
 *   name: string,
 *   value: string,
 *   domain: string,
 *   path: string,
 *   expires: number,
 *   size: number,
 *   httpOnly: boolean,
 *   secure: boolean,
 *   session: boolean,
 *   sameSite: (!Network.CookieSameSite|undefined)
 * }}
 */
Network.Cookie;

/**
 * Cookie parameter object
 *
 * name: Cookie name.
 * value: Cookie value.
 * url: The request-URI to associate with the setting of the cookie. This value can affect the
 *   default domain and path values of the created cookie.
 * domain: Cookie domain.
 * path: Cookie path.
 * secure: True if cookie is secure.
 * httpOnly: True if cookie is http-only.
 * sameSite: Cookie SameSite type.
 * expires: Cookie expiration date, session cookie if not set
 *
 * @typedef {{
 *   name: string,
 *   value: string,
 *   url: (string|undefined),
 *   domain: (string|undefined),
 *   path: (string|undefined),
 *   secure: (boolean|undefined),
 *   httpOnly: (boolean|undefined),
 *   sameSite: (!Network.CookieSameSite|undefined),
 *   expires: (number|undefined)
 * }}
 */
Network.CookieParam;

/**
 * Authorization challenge for HTTP status code 401 or 407.
 *
 * source: Source of the authentication challenge.
 * origin: Origin of the challenger.
 * scheme: The authentication scheme used, such as basic or digest
 * realm: The realm of the challenge. May be empty.
 *
 * @typedef {{
 *   source: (!Network.AuthChallengeSource|undefined),
 *   origin: string,
 *   scheme: string,
 *   realm: string
 * }}
 */
Network.AuthChallenge;

/**
 * Response to an AuthChallenge.
 *
 * response: The decision on what to do in response to the authorization challenge.  Default means
 *   deferring to the default behavior of the net stack, which will likely either the Cancel
 *   authentication or display a popup dialog box.
 * username: The username to provide, possibly empty. Should only be set if response is
 *   ProvideCredentials.
 * password: The password to provide, possibly empty. Should only be set if response is
 *   ProvideCredentials.
 *
 * @typedef {{
 *   response: !Network.AuthChallengeResponseResponse,
 *   username: (string|undefined),
 *   password: (string|undefined)
 * }}
 */
Network.AuthChallengeResponse;

/**
 * Request pattern for interception.
 *
 * urlPattern: Wildcards ('*' -> zero or more, '?' -> exactly one) are allowed. Escape character is
 *   backslash. Omitting is equivalent to "*".
 * resourceType: If set, only requests for matching resource types will be intercepted.
 * interceptionStage: Stage at wich to begin intercepting requests. Default is Request.
 *
 * @typedef {{
 *   urlPattern: (string|undefined),
 *   resourceType: (!chromium.DevTools.Page.ResourceType|undefined),
 *   interceptionStage: (!Network.InterceptionStage|undefined)
 * }}
 */
Network.RequestPattern;

/**
 * Information about a signed exchange signature.
 * https://wicg.github.io/webpackage/draft-yasskin-httpbis-origin-signed-exchanges-impl.html#rfc.section.3.1
 *
 * label: Signed exchange signature label.
 * integrity: Signed exchange signature integrity.
 * certUrl: Signed exchange signature cert Url.
 * validityUrl: Signed exchange signature validity Url.
 * date: Signed exchange signature date.
 * expires: Signed exchange signature expires.
 *
 * @typedef {{
 *   label: string,
 *   integrity: string,
 *   certUrl: string,
 *   validityUrl: string,
 *   date: number,
 *   expires: number
 * }}
 */
Network.SignedExchangeSignature;

/**
 * Information about a signed exchange header.
 * https://wicg.github.io/webpackage/draft-yasskin-httpbis-origin-signed-exchanges-impl.html#cbor-representation
 *
 * requestUrl: Signed exchange request URL.
 * requestMethod: Signed exchange request method.
 * responseCode: Signed exchange response code.
 * responseHeaders: Signed exchange response headers.
 * signatures: Signed exchange response signature.
 *
 * @typedef {{
 *   requestUrl: string,
 *   requestMethod: string,
 *   responseCode: number,
 *   responseHeaders: Object,
 *   signatures: !Array.<!Network.SignedExchangeSignature>
 * }}
 */
Network.SignedExchangeHeader;

/**
 * Information about a signed exchange response.
 *
 * outerResponse: The outer response of signed HTTP exchange which was received from network.
 * header: Information about the signed exchange header.
 * securityDetails: Security details for the signed exchange header.
 * errors: Errors occurred while handling the signed exchagne.
 *
 * @typedef {{
 *   outerResponse: !Network.Response,
 *   header: (!Network.SignedExchangeHeader|undefined),
 *   securityDetails: (!Network.SecurityDetails|undefined),
 *   errors: (!Array.<string>|undefined)
 * }}
 */
Network.SignedExchangeInfo;

/**
 * Parameters for the CanClearBrowserCache command.
 *
 *
 * @typedef {undefined}
 */
Network.CanClearBrowserCacheParams;

/**
 * Result for the CanClearBrowserCache command.
 *
 * result: True if browser cache can be cleared.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
Network.CanClearBrowserCacheResult;

/**
 * Parameters for the CanClearBrowserCookies command.
 *
 *
 * @typedef {undefined}
 */
Network.CanClearBrowserCookiesParams;

/**
 * Result for the CanClearBrowserCookies command.
 *
 * result: True if browser cookies can be cleared.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
Network.CanClearBrowserCookiesResult;

/**
 * Parameters for the CanEmulateNetworkConditions command.
 *
 *
 * @typedef {undefined}
 */
Network.CanEmulateNetworkConditionsParams;

/**
 * Result for the CanEmulateNetworkConditions command.
 *
 * result: True if emulation of network conditions is supported.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
Network.CanEmulateNetworkConditionsResult;

/**
 * Parameters for the ClearBrowserCache command.
 *
 *
 * @typedef {undefined}
 */
Network.ClearBrowserCacheParams;

/**
 * Result for the ClearBrowserCache command.
 *
 *
 * @typedef {undefined}
 */
Network.ClearBrowserCacheResult;

/**
 * Parameters for the ClearBrowserCookies command.
 *
 *
 * @typedef {undefined}
 */
Network.ClearBrowserCookiesParams;

/**
 * Result for the ClearBrowserCookies command.
 *
 *
 * @typedef {undefined}
 */
Network.ClearBrowserCookiesResult;

/**
 * Parameters for the ContinueInterceptedRequest command.
 *
 * errorReason: If set this causes the request to fail with the given reason. Passing `Aborted` for requests
 *   marked with `isNavigationRequest` also cancels the navigation. Must not be set in response
 *   to an authChallenge.
 * rawResponse: If set the requests completes using with the provided base64 encoded raw response, including
 *   HTTP status line and headers etc... Must not be set in response to an authChallenge.
 * url: If set the request url will be modified in a way that's not observable by page. Must not be
 *   set in response to an authChallenge.
 * method: If set this allows the request method to be overridden. Must not be set in response to an
 *   authChallenge.
 * postData: If set this allows postData to be set. Must not be set in response to an authChallenge.
 * headers: If set this allows the request headers to be changed. Must not be set in response to an
 *   authChallenge.
 * authChallengeResponse: Response to a requestIntercepted with an authChallenge. Must not be set otherwise.
 *
 * @typedef {{
 *   interceptionId: string,
 *   errorReason: (!Network.ErrorReason|undefined),
 *   rawResponse: (string|undefined),
 *   url: (string|undefined),
 *   method: (string|undefined),
 *   postData: (string|undefined),
 *   headers: (Object|undefined),
 *   authChallengeResponse: (!Network.AuthChallengeResponse|undefined)
 * }}
 */
Network.ContinueInterceptedRequestParams;

/**
 * Result for the ContinueInterceptedRequest command.
 *
 *
 * @typedef {undefined}
 */
Network.ContinueInterceptedRequestResult;

/**
 * Parameters for the DeleteCookies command.
 *
 * name: Name of the cookies to remove.
 * url: If specified, deletes all the cookies with the given name where domain and path match
 *   provided URL.
 * domain: If specified, deletes only cookies with the exact domain.
 * path: If specified, deletes only cookies with the exact path.
 *
 * @typedef {{
 *   name: string,
 *   url: (string|undefined),
 *   domain: (string|undefined),
 *   path: (string|undefined)
 * }}
 */
Network.DeleteCookiesParams;

/**
 * Result for the DeleteCookies command.
 *
 *
 * @typedef {undefined}
 */
Network.DeleteCookiesResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Network.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
Network.DisableResult;

/**
 * Parameters for the EmulateNetworkConditions command.
 *
 * offline: True to emulate internet disconnection.
 * latency: Minimum latency from request sent to response headers received (ms).
 * downloadThroughput: Maximal aggregated download throughput (bytes/sec). -1 disables download throttling.
 * uploadThroughput: Maximal aggregated upload throughput (bytes/sec).  -1 disables upload throttling.
 * connectionType: Connection type if known.
 *
 * @typedef {{
 *   offline: boolean,
 *   latency: number,
 *   downloadThroughput: number,
 *   uploadThroughput: number,
 *   connectionType: (!Network.ConnectionType|undefined)
 * }}
 */
Network.EmulateNetworkConditionsParams;

/**
 * Result for the EmulateNetworkConditions command.
 *
 *
 * @typedef {undefined}
 */
Network.EmulateNetworkConditionsResult;

/**
 * Parameters for the Enable command.
 *
 * maxTotalBufferSize: Buffer size in bytes to use when preserving network payloads (XHRs, etc).
 * maxResourceBufferSize: Per-resource buffer size in bytes to use when preserving network payloads (XHRs, etc).
 * maxPostDataSize: Longest post body size (in bytes) that would be included in requestWillBeSent notification
 *
 * @typedef {{
 *   maxTotalBufferSize: (number|undefined),
 *   maxResourceBufferSize: (number|undefined),
 *   maxPostDataSize: (number|undefined)
 * }}
 */
Network.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
Network.EnableResult;

/**
 * Parameters for the GetAllCookies command.
 *
 *
 * @typedef {undefined}
 */
Network.GetAllCookiesParams;

/**
 * Result for the GetAllCookies command.
 *
 * cookies: Array of cookie objects.
 *
 * @typedef {{
 *   cookies: !Array.<!Network.Cookie>
 * }}
 */
Network.GetAllCookiesResult;

/**
 * Parameters for the GetCertificate command.
 *
 * origin: Origin to get certificate for.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
Network.GetCertificateParams;

/**
 * Result for the GetCertificate command.
 *
 *
 * @typedef {{
 *   tableNames: !Array.<string>
 * }}
 */
Network.GetCertificateResult;

/**
 * Parameters for the GetCookies command.
 *
 * urls: The list of URLs for which applicable cookies will be fetched
 *
 * @typedef {{
 *   urls: (!Array.<string>|undefined)
 * }}
 */
Network.GetCookiesParams;

/**
 * Result for the GetCookies command.
 *
 * cookies: Array of cookie objects.
 *
 * @typedef {{
 *   cookies: !Array.<!Network.Cookie>
 * }}
 */
Network.GetCookiesResult;

/**
 * Parameters for the GetResponseBody command.
 *
 * requestId: Identifier of the network request to get content for.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
Network.GetResponseBodyParams;

/**
 * Result for the GetResponseBody command.
 *
 * body: Response body.
 * base64Encoded: True, if content was sent as base64.
 *
 * @typedef {{
 *   body: string,
 *   base64Encoded: boolean
 * }}
 */
Network.GetResponseBodyResult;

/**
 * Parameters for the GetRequestPostData command.
 *
 * requestId: Identifier of the network request to get content for.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
Network.GetRequestPostDataParams;

/**
 * Result for the GetRequestPostData command.
 *
 * postData: Base64-encoded request body.
 *
 * @typedef {{
 *   postData: string
 * }}
 */
Network.GetRequestPostDataResult;

/**
 * Parameters for the GetResponseBodyForInterception command.
 *
 * interceptionId: Identifier for the intercepted request to get body for.
 *
 * @typedef {{
 *   interceptionId: string
 * }}
 */
Network.GetResponseBodyForInterceptionParams;

/**
 * Result for the GetResponseBodyForInterception command.
 *
 * body: Response body.
 * base64Encoded: True, if content was sent as base64.
 *
 * @typedef {{
 *   body: string,
 *   base64Encoded: boolean
 * }}
 */
Network.GetResponseBodyForInterceptionResult;

/**
 * Parameters for the TakeResponseBodyForInterceptionAsStream command.
 *
 *
 * @typedef {{
 *   interceptionId: string
 * }}
 */
Network.TakeResponseBodyForInterceptionAsStreamParams;

/**
 * Result for the TakeResponseBodyForInterceptionAsStream command.
 *
 *
 * @typedef {{
 *   stream: string
 * }}
 */
Network.TakeResponseBodyForInterceptionAsStreamResult;

/**
 * Parameters for the ReplayXHR command.
 *
 * requestId: Identifier of XHR to replay.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
Network.ReplayXHRParams;

/**
 * Result for the ReplayXHR command.
 *
 *
 * @typedef {undefined}
 */
Network.ReplayXHRResult;

/**
 * Parameters for the SearchInResponseBody command.
 *
 * requestId: Identifier of the network response to search.
 * query: String to search for.
 * caseSensitive: If true, search is case sensitive.
 * isRegex: If true, treats string parameter as regex.
 *
 * @typedef {{
 *   requestId: string,
 *   query: string,
 *   caseSensitive: (boolean|undefined),
 *   isRegex: (boolean|undefined)
 * }}
 */
Network.SearchInResponseBodyParams;

/**
 * Result for the SearchInResponseBody command.
 *
 * result: List of search matches.
 *
 * @typedef {{
 *   result: !Array.<!Debugger.SearchMatch>
 * }}
 */
Network.SearchInResponseBodyResult;

/**
 * Parameters for the SetBlockedURLs command.
 *
 * urls: URL patterns to block. Wildcards ('*') are allowed.
 *
 * @typedef {{
 *   urls: !Array.<string>
 * }}
 */
Network.SetBlockedURLsParams;

/**
 * Result for the SetBlockedURLs command.
 *
 *
 * @typedef {undefined}
 */
Network.SetBlockedURLsResult;

/**
 * Parameters for the SetBypassServiceWorker command.
 *
 * bypass: Bypass service worker and load from network.
 *
 * @typedef {{
 *   bypass: boolean
 * }}
 */
Network.SetBypassServiceWorkerParams;

/**
 * Result for the SetBypassServiceWorker command.
 *
 *
 * @typedef {undefined}
 */
Network.SetBypassServiceWorkerResult;

/**
 * Parameters for the SetCacheDisabled command.
 *
 * cacheDisabled: Cache disabled state.
 *
 * @typedef {{
 *   cacheDisabled: boolean
 * }}
 */
Network.SetCacheDisabledParams;

/**
 * Result for the SetCacheDisabled command.
 *
 *
 * @typedef {undefined}
 */
Network.SetCacheDisabledResult;

/**
 * Parameters for the SetCookie command.
 *
 * name: Cookie name.
 * value: Cookie value.
 * url: The request-URI to associate with the setting of the cookie. This value can affect the
 *   default domain and path values of the created cookie.
 * domain: Cookie domain.
 * path: Cookie path.
 * secure: True if cookie is secure.
 * httpOnly: True if cookie is http-only.
 * sameSite: Cookie SameSite type.
 * expires: Cookie expiration date, session cookie if not set
 *
 * @typedef {{
 *   name: string,
 *   value: string,
 *   url: (string|undefined),
 *   domain: (string|undefined),
 *   path: (string|undefined),
 *   secure: (boolean|undefined),
 *   httpOnly: (boolean|undefined),
 *   sameSite: (!Network.CookieSameSite|undefined),
 *   expires: (number|undefined)
 * }}
 */
Network.SetCookieParams;

/**
 * Result for the SetCookie command.
 *
 * success: True if successfully set cookie.
 *
 * @typedef {{
 *   success: boolean
 * }}
 */
Network.SetCookieResult;

/**
 * Parameters for the SetCookies command.
 *
 * cookies: Cookies to be set.
 *
 * @typedef {{
 *   cookies: !Array.<!Network.CookieParam>
 * }}
 */
Network.SetCookiesParams;

/**
 * Result for the SetCookies command.
 *
 *
 * @typedef {undefined}
 */
Network.SetCookiesResult;

/**
 * Parameters for the SetDataSizeLimitsForTest command.
 *
 * maxTotalSize: Maximum total buffer size.
 * maxResourceSize: Maximum per-resource size.
 *
 * @typedef {{
 *   maxTotalSize: number,
 *   maxResourceSize: number
 * }}
 */
Network.SetDataSizeLimitsForTestParams;

/**
 * Result for the SetDataSizeLimitsForTest command.
 *
 *
 * @typedef {undefined}
 */
Network.SetDataSizeLimitsForTestResult;

/**
 * Parameters for the SetExtraHTTPHeaders command.
 *
 * headers: Map with extra HTTP headers.
 *
 * @typedef {{
 *   headers: Object
 * }}
 */
Network.SetExtraHTTPHeadersParams;

/**
 * Result for the SetExtraHTTPHeaders command.
 *
 *
 * @typedef {undefined}
 */
Network.SetExtraHTTPHeadersResult;

/**
 * Parameters for the SetRequestInterception command.
 *
 * patterns: Requests matching any of these patterns will be forwarded and wait for the corresponding
 *   continueInterceptedRequest call.
 *
 * @typedef {{
 *   patterns: !Array.<!Network.RequestPattern>
 * }}
 */
Network.SetRequestInterceptionParams;

/**
 * Result for the SetRequestInterception command.
 *
 *
 * @typedef {undefined}
 */
Network.SetRequestInterceptionResult;

/**
 * Parameters for the SetUserAgentOverride command.
 *
 * userAgent: User agent to use.
 *
 * @typedef {{
 *   userAgent: string
 * }}
 */
Network.SetUserAgentOverrideParams;

/**
 * Result for the SetUserAgentOverride command.
 *
 *
 * @typedef {undefined}
 */
Network.SetUserAgentOverrideResult;

/**
 * Parameters for the DataReceived event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * dataLength: Data chunk length.
 * encodedDataLength: Actual bytes received (might be less than dataLength for compressed encodings).
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   dataLength: number,
 *   encodedDataLength: number
 * }}
 */
Network.DataReceivedParams;

/**
 * Parameters for the EventSourceMessageReceived event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * eventName: Message type.
 * eventId: Message identifier.
 * data: Message content.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   eventName: string,
 *   eventId: string,
 *   data: string
 * }}
 */
Network.EventSourceMessageReceivedParams;

/**
 * Parameters for the LoadingFailed event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * type: Resource type.
 * errorText: User friendly error message.
 * canceled: True if loading was canceled.
 * blockedReason: The reason why loading was blocked, if any.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   type: !chromium.DevTools.Page.ResourceType,
 *   errorText: string,
 *   canceled: (boolean|undefined),
 *   blockedReason: (!Network.BlockedReason|undefined)
 * }}
 */
Network.LoadingFailedParams;

/**
 * Parameters for the LoadingFinished event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * encodedDataLength: Total number of bytes received for this request.
 * blockedCrossSiteDocument: Set when response was blocked due to being cross-site document response.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   encodedDataLength: number,
 *   blockedCrossSiteDocument: (boolean|undefined)
 * }}
 */
Network.LoadingFinishedParams;

/**
 * Parameters for the RequestIntercepted event.
 *
 * interceptionId: Each request the page makes will have a unique id, however if any redirects are encountered
 *   while processing that fetch, they will be reported with the same id as the original fetch.
 *   Likewise if HTTP authentication is needed then the same fetch id will be used.
 * frameId: The id of the frame that initiated the request.
 * resourceType: How the requested resource will be used.
 * isNavigationRequest: Whether this is a navigation request, which can abort the navigation completely.
 * isDownload: Set if the request is a navigation that will result in a download.
 *   Only present after response is received from the server (i.e. HeadersReceived stage).
 * redirectUrl: Redirect location, only sent if a redirect was intercepted.
 * authChallenge: Details of the Authorization Challenge encountered. If this is set then
 *   continueInterceptedRequest must contain an authChallengeResponse.
 * responseErrorReason: Response error if intercepted at response stage or if redirect occurred while intercepting
 *   request.
 * responseStatusCode: Response code if intercepted at response stage or if redirect occurred while intercepting
 *   request or auth retry occurred.
 * responseHeaders: Response headers if intercepted at the response stage or if redirect occurred while
 *   intercepting request or auth retry occurred.
 *
 * @typedef {{
 *   interceptionId: string,
 *   request: !Network.Request,
 *   frameId: string,
 *   resourceType: !chromium.DevTools.Page.ResourceType,
 *   isNavigationRequest: boolean,
 *   isDownload: (boolean|undefined),
 *   redirectUrl: (string|undefined),
 *   authChallenge: (!Network.AuthChallenge|undefined),
 *   responseErrorReason: (!Network.ErrorReason|undefined),
 *   responseStatusCode: (number|undefined),
 *   responseHeaders: (Object|undefined)
 * }}
 */
Network.RequestInterceptedParams;

/**
 * Parameters for the RequestServedFromCache event.
 *
 * requestId: Request identifier.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
Network.RequestServedFromCacheParams;

/**
 * Parameters for the RequestWillBeSent event.
 *
 * requestId: Request identifier.
 * loaderId: Loader identifier. Empty string if the request is fetched from worker.
 * documentURL: URL of the document this request is loaded for.
 * request: Request data.
 * timestamp: Timestamp.
 * wallTime: Timestamp.
 * initiator: Request initiator.
 * redirectResponse: Redirect response data.
 * type: Type of this resource.
 * frameId: Frame identifier.
 * hasUserGesture: Whether the request is initiated by a user gesture. Defaults to false.
 *
 * @typedef {{
 *   requestId: string,
 *   loaderId: string,
 *   documentURL: string,
 *   request: !Network.Request,
 *   timestamp: number,
 *   wallTime: number,
 *   initiator: !Network.Initiator,
 *   redirectResponse: (!Network.Response|undefined),
 *   type: (!chromium.DevTools.Page.ResourceType|undefined),
 *   frameId: (string|undefined),
 *   hasUserGesture: (boolean|undefined)
 * }}
 */
Network.RequestWillBeSentParams;

/**
 * Parameters for the ResourceChangedPriority event.
 *
 * requestId: Request identifier.
 * newPriority: New priority
 * timestamp: Timestamp.
 *
 * @typedef {{
 *   requestId: string,
 *   newPriority: !Network.ResourcePriority,
 *   timestamp: number
 * }}
 */
Network.ResourceChangedPriorityParams;

/**
 * Parameters for the SignedExchangeReceived event.
 *
 * requestId: Request identifier.
 * info: Information about the signed exchange response.
 *
 * @typedef {{
 *   requestId: string,
 *   info: !Network.SignedExchangeInfo
 * }}
 */
Network.SignedExchangeReceivedParams;

/**
 * Parameters for the ResponseReceived event.
 *
 * requestId: Request identifier.
 * loaderId: Loader identifier. Empty string if the request is fetched from worker.
 * timestamp: Timestamp.
 * type: Resource type.
 * response: Response data.
 * frameId: Frame identifier.
 *
 * @typedef {{
 *   requestId: string,
 *   loaderId: string,
 *   timestamp: number,
 *   type: !chromium.DevTools.Page.ResourceType,
 *   response: !Network.Response,
 *   frameId: (string|undefined)
 * }}
 */
Network.ResponseReceivedParams;

/**
 * Parameters for the WebSocketClosed event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number
 * }}
 */
Network.WebSocketClosedParams;

/**
 * Parameters for the WebSocketCreated event.
 *
 * requestId: Request identifier.
 * url: WebSocket request URL.
 * initiator: Request initiator.
 *
 * @typedef {{
 *   requestId: string,
 *   url: string,
 *   initiator: (!Network.Initiator|undefined)
 * }}
 */
Network.WebSocketCreatedParams;

/**
 * Parameters for the WebSocketFrameError event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * errorMessage: WebSocket frame error message.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   errorMessage: string
 * }}
 */
Network.WebSocketFrameErrorParams;

/**
 * Parameters for the WebSocketFrameReceived event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * response: WebSocket response data.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   response: !Network.WebSocketFrame
 * }}
 */
Network.WebSocketFrameReceivedParams;

/**
 * Parameters for the WebSocketFrameSent event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * response: WebSocket response data.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   response: !Network.WebSocketFrame
 * }}
 */
Network.WebSocketFrameSentParams;

/**
 * Parameters for the WebSocketHandshakeResponseReceived event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * response: WebSocket response data.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   response: !Network.WebSocketResponse
 * }}
 */
Network.WebSocketHandshakeResponseReceivedParams;

/**
 * Parameters for the WebSocketWillSendHandshakeRequest event.
 *
 * requestId: Request identifier.
 * timestamp: Timestamp.
 * wallTime: UTC Timestamp.
 * request: WebSocket request data.
 *
 * @typedef {{
 *   requestId: string,
 *   timestamp: number,
 *   wallTime: number,
 *   request: !Network.WebSocketRequest
 * }}
 */
Network.WebSocketWillSendHandshakeRequestParams;



/**
  * Tells whether clearing browser cache is supported.
  *
  * @return {!Promise<Network.CanClearBrowserCacheResult>}
  */
ExperimentalNetwork.prototype.canClearBrowserCache = function() {
  return this.connection_.sendDevToolsMessage('Network.canClearBrowserCache', {});
};

/**
  * Tells whether clearing browser cookies is supported.
  *
  * @return {!Promise<Network.CanClearBrowserCookiesResult>}
  */
ExperimentalNetwork.prototype.canClearBrowserCookies = function() {
  return this.connection_.sendDevToolsMessage('Network.canClearBrowserCookies', {});
};

/**
  * Tells whether emulation of network conditions is supported.
  *
  * @return {!Promise<Network.CanEmulateNetworkConditionsResult>}
  */
ExperimentalNetwork.prototype.canEmulateNetworkConditions = function() {
  return this.connection_.sendDevToolsMessage('Network.canEmulateNetworkConditions', {});
};

/**
  * Clears browser cache.
  *
  * @return {!Promise<Network.ClearBrowserCacheResult>}
  */
ExperimentalNetwork.prototype.clearBrowserCache = function() {
  return this.connection_.sendDevToolsMessage('Network.clearBrowserCache', {});
};

/**
  * Clears browser cookies.
  *
  * @return {!Promise<Network.ClearBrowserCookiesResult>}
  */
ExperimentalNetwork.prototype.clearBrowserCookies = function() {
  return this.connection_.sendDevToolsMessage('Network.clearBrowserCookies', {});
};

/**
  * Response to Network.requestIntercepted which either modifies the request to continue with any
 * modifications, or blocks it, or completes it with the provided response bytes. If a network
 * fetch occurs as a result which encounters a redirect an additional Network.requestIntercepted
 * event will be sent with the same InterceptionId.
  *
  * @param {Network.ContinueInterceptedRequestParams} params
  * @return {!Promise<Network.ContinueInterceptedRequestResult>}
  */
ExperimentalNetwork.prototype.continueInterceptedRequest = function(params) {
  return this.connection_.sendDevToolsMessage('Network.continueInterceptedRequest', params);
};

/**
  * Deletes browser cookies with matching name and url or domain/path pair.
  *
  * @param {Network.DeleteCookiesParams} params
  * @return {!Promise<Network.DeleteCookiesResult>}
  */
ExperimentalNetwork.prototype.deleteCookies = function(params) {
  return this.connection_.sendDevToolsMessage('Network.deleteCookies', params);
};

/**
  * Disables network tracking, prevents network events from being sent to the client.
  *
  * @return {!Promise<Network.DisableResult>}
  */
ExperimentalNetwork.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Network.disable', {});
};

/**
  * Activates emulation of network conditions.
  *
  * @param {Network.EmulateNetworkConditionsParams} params
  * @return {!Promise<Network.EmulateNetworkConditionsResult>}
  */
ExperimentalNetwork.prototype.emulateNetworkConditions = function(params) {
  return this.connection_.sendDevToolsMessage('Network.emulateNetworkConditions', params);
};

/**
  * Enables network tracking, network events will now be delivered to the client.
  *
  * @param {Network.EnableParams=} opt_params
  * @return {!Promise<Network.EnableResult>}
  */
ExperimentalNetwork.prototype.enable = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Network.enable', opt_params || {});
};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<Network.GetAllCookiesResult>}
  */
ExperimentalNetwork.prototype.getAllCookies = function() {
  return this.connection_.sendDevToolsMessage('Network.getAllCookies', {});
};

/**
  * Returns the DER-encoded certificate.
  *
  * @param {Network.GetCertificateParams} params
  * @return {!Promise<Network.GetCertificateResult>}
  */
ExperimentalNetwork.prototype.getCertificate = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getCertificate', params);
};

/**
  * Returns all browser cookies for the current URL. Depending on the backend support, will return
 * detailed cookie information in the `cookies` field.
  *
  * @param {Network.GetCookiesParams=} opt_params
  * @return {!Promise<Network.GetCookiesResult>}
  */
ExperimentalNetwork.prototype.getCookies = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Network.getCookies', opt_params || {});
};

/**
  * Returns content served for the given request.
  *
  * @param {Network.GetResponseBodyParams} params
  * @return {!Promise<Network.GetResponseBodyResult>}
  */
ExperimentalNetwork.prototype.getResponseBody = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getResponseBody', params);
};

/**
  * Returns post data sent with the request. Returns an error when no data was sent with the request.
  *
  * @param {Network.GetRequestPostDataParams} params
  * @return {!Promise<Network.GetRequestPostDataResult>}
  */
ExperimentalNetwork.prototype.getRequestPostData = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getRequestPostData', params);
};

/**
  * Returns content served for the given currently intercepted request.
  *
  * @param {Network.GetResponseBodyForInterceptionParams} params
  * @return {!Promise<Network.GetResponseBodyForInterceptionResult>}
  */
ExperimentalNetwork.prototype.getResponseBodyForInterception = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getResponseBodyForInterception', params);
};

/**
  * Returns a handle to the stream representing the response body. Note that after this command,
 * the intercepted request can't be continued as is -- you either need to cancel it or to provide
 * the response body. The stream only supports sequential read, IO.read will fail if the position
 * is specified.
  *
  * @param {Network.TakeResponseBodyForInterceptionAsStreamParams} params
  * @return {!Promise<Network.TakeResponseBodyForInterceptionAsStreamResult>}
  */
ExperimentalNetwork.prototype.takeResponseBodyForInterceptionAsStream = function(params) {
  return this.connection_.sendDevToolsMessage('Network.takeResponseBodyForInterceptionAsStream', params);
};

/**
  * This method sends a new XMLHttpRequest which is identical to the original one. The following
 * parameters should be identical: method, url, async, request body, extra headers, withCredentials
 * attribute, user, password.
  *
  * @param {Network.ReplayXHRParams} params
  * @return {!Promise<Network.ReplayXHRResult>}
  */
ExperimentalNetwork.prototype.replayXHR = function(params) {
  return this.connection_.sendDevToolsMessage('Network.replayXHR', params);
};

/**
  * Searches for given string in response content.
  *
  * @param {Network.SearchInResponseBodyParams} params
  * @return {!Promise<Network.SearchInResponseBodyResult>}
  */
ExperimentalNetwork.prototype.searchInResponseBody = function(params) {
  return this.connection_.sendDevToolsMessage('Network.searchInResponseBody', params);
};

/**
  * Blocks URLs from loading.
  *
  * @param {Network.SetBlockedURLsParams} params
  * @return {!Promise<Network.SetBlockedURLsResult>}
  */
ExperimentalNetwork.prototype.setBlockedURLs = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setBlockedURLs', params);
};

/**
  * Toggles ignoring of service worker for each request.
  *
  * @param {Network.SetBypassServiceWorkerParams} params
  * @return {!Promise<Network.SetBypassServiceWorkerResult>}
  */
ExperimentalNetwork.prototype.setBypassServiceWorker = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setBypassServiceWorker', params);
};

/**
  * Toggles ignoring cache for each request. If `true`, cache will not be used.
  *
  * @param {Network.SetCacheDisabledParams} params
  * @return {!Promise<Network.SetCacheDisabledResult>}
  */
ExperimentalNetwork.prototype.setCacheDisabled = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setCacheDisabled', params);
};

/**
  * Sets a cookie with the given cookie data; may overwrite equivalent cookies if they exist.
  *
  * @param {Network.SetCookieParams} params
  * @return {!Promise<Network.SetCookieResult>}
  */
ExperimentalNetwork.prototype.setCookie = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setCookie', params);
};

/**
  * Sets given cookies.
  *
  * @param {Network.SetCookiesParams} params
  * @return {!Promise<Network.SetCookiesResult>}
  */
ExperimentalNetwork.prototype.setCookies = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setCookies', params);
};

/**
  * For testing.
  *
  * @param {Network.SetDataSizeLimitsForTestParams} params
  * @return {!Promise<Network.SetDataSizeLimitsForTestResult>}
  */
ExperimentalNetwork.prototype.setDataSizeLimitsForTest = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setDataSizeLimitsForTest', params);
};

/**
  * Specifies whether to always send extra HTTP headers with the requests from this page.
  *
  * @param {Network.SetExtraHTTPHeadersParams} params
  * @return {!Promise<Network.SetExtraHTTPHeadersResult>}
  */
ExperimentalNetwork.prototype.setExtraHTTPHeaders = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setExtraHTTPHeaders', params);
};

/**
  * Sets the requests to intercept that match a the provided patterns and optionally resource types.
  *
  * @param {Network.SetRequestInterceptionParams} params
  * @return {!Promise<Network.SetRequestInterceptionResult>}
  */
ExperimentalNetwork.prototype.setRequestInterception = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setRequestInterception', params);
};

/**
  * Allows overriding user agent with the given string.
  *
  * @param {Network.SetUserAgentOverrideParams} params
  * @return {!Promise<Network.SetUserAgentOverrideResult>}
  */
ExperimentalNetwork.prototype.setUserAgentOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setUserAgentOverride', params);
};


/**
  * Fired when data chunk was received over the network.
  *
  * @param {!function(!Network.DataReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onDataReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.dataReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when EventSource message is received.
  *
  * @param {!function(!Network.EventSourceMessageReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onEventSourceMessageReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.eventSourceMessageReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when HTTP request has failed to load.
  *
  * @param {!function(!Network.LoadingFailedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onLoadingFailed = function(listener) {
  return this.connection_.addEventListener(
      'Network.loadingFailed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when HTTP request has finished loading.
  *
  * @param {!function(!Network.LoadingFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onLoadingFinished = function(listener) {
  return this.connection_.addEventListener(
      'Network.loadingFinished', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Details of an intercepted HTTP request, which must be either allowed, blocked, modified or
 * mocked.
  *
  * @param {!function(!Network.RequestInterceptedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onRequestIntercepted = function(listener) {
  return this.connection_.addEventListener(
      'Network.requestIntercepted', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired if request ended up loading from cache.
  *
  * @param {!function(!Network.RequestServedFromCacheParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onRequestServedFromCache = function(listener) {
  return this.connection_.addEventListener(
      'Network.requestServedFromCache', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when page is about to send HTTP request.
  *
  * @param {!function(!Network.RequestWillBeSentParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onRequestWillBeSent = function(listener) {
  return this.connection_.addEventListener(
      'Network.requestWillBeSent', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when resource loading priority is changed
  *
  * @param {!function(!Network.ResourceChangedPriorityParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onResourceChangedPriority = function(listener) {
  return this.connection_.addEventListener(
      'Network.resourceChangedPriority', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a signed exchange was received over the network
  *
  * @param {!function(!Network.SignedExchangeReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onSignedExchangeReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.signedExchangeReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when HTTP response is available.
  *
  * @param {!function(!Network.ResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onResponseReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.responseReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket is closed.
  *
  * @param {!function(!Network.WebSocketClosedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketClosed = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketClosed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired upon WebSocket creation.
  *
  * @param {!function(!Network.WebSocketCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketCreated = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket frame error occurs.
  *
  * @param {!function(!Network.WebSocketFrameErrorParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketFrameError = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketFrameError', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket frame is received.
  *
  * @param {!function(!Network.WebSocketFrameReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketFrameReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketFrameReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket frame is sent.
  *
  * @param {!function(!Network.WebSocketFrameSentParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketFrameSent = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketFrameSent', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket handshake response becomes available.
  *
  * @param {!function(!Network.WebSocketHandshakeResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketHandshakeResponseReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketHandshakeResponseReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket is about to initiate handshake.
  *
  * @param {!function(!Network.WebSocketWillSendHandshakeRequestParams)} listener
  * @return {number} The id of this event listener.
  */
ExperimentalNetwork.prototype.onWebSocketWillSendHandshakeRequest = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketWillSendHandshakeRequest', /** @type {!function(!Object): undefined} */ (listener));
};



/**
  * Tells whether clearing browser cache is supported.
  *
  * @return {!Promise<Network.CanClearBrowserCacheResult>}
  */
Network.prototype.canClearBrowserCache = function() {
  return this.connection_.sendDevToolsMessage('Network.canClearBrowserCache', {});
};

/**
  * Tells whether clearing browser cookies is supported.
  *
  * @return {!Promise<Network.CanClearBrowserCookiesResult>}
  */
Network.prototype.canClearBrowserCookies = function() {
  return this.connection_.sendDevToolsMessage('Network.canClearBrowserCookies', {});
};

/**
  * Tells whether emulation of network conditions is supported.
  *
  * @return {!Promise<Network.CanEmulateNetworkConditionsResult>}
  */
Network.prototype.canEmulateNetworkConditions = function() {
  return this.connection_.sendDevToolsMessage('Network.canEmulateNetworkConditions', {});
};

/**
  * Clears browser cache.
  *
  * @return {!Promise<Network.ClearBrowserCacheResult>}
  */
Network.prototype.clearBrowserCache = function() {
  return this.connection_.sendDevToolsMessage('Network.clearBrowserCache', {});
};

/**
  * Clears browser cookies.
  *
  * @return {!Promise<Network.ClearBrowserCookiesResult>}
  */
Network.prototype.clearBrowserCookies = function() {
  return this.connection_.sendDevToolsMessage('Network.clearBrowserCookies', {});
};

/**
  * Response to Network.requestIntercepted which either modifies the request to continue with any
 * modifications, or blocks it, or completes it with the provided response bytes. If a network
 * fetch occurs as a result which encounters a redirect an additional Network.requestIntercepted
 * event will be sent with the same InterceptionId.
  *
  * @param {Network.ContinueInterceptedRequestParams} params
  * @return {!Promise<Network.ContinueInterceptedRequestResult>}
  */
Network.prototype.continueInterceptedRequest = function(params) {
  return this.connection_.sendDevToolsMessage('Network.continueInterceptedRequest', params);
};

/**
  * Deletes browser cookies with matching name and url or domain/path pair.
  *
  * @param {Network.DeleteCookiesParams} params
  * @return {!Promise<Network.DeleteCookiesResult>}
  */
Network.prototype.deleteCookies = function(params) {
  return this.connection_.sendDevToolsMessage('Network.deleteCookies', params);
};

/**
  * Disables network tracking, prevents network events from being sent to the client.
  *
  * @return {!Promise<Network.DisableResult>}
  */
Network.prototype.disable = function() {
  return this.connection_.sendDevToolsMessage('Network.disable', {});
};

/**
  * Activates emulation of network conditions.
  *
  * @param {Network.EmulateNetworkConditionsParams} params
  * @return {!Promise<Network.EmulateNetworkConditionsResult>}
  */
Network.prototype.emulateNetworkConditions = function(params) {
  return this.connection_.sendDevToolsMessage('Network.emulateNetworkConditions', params);
};

/**
  * Enables network tracking, network events will now be delivered to the client.
  *
  * @param {Network.EnableParams=} opt_params
  * @return {!Promise<Network.EnableResult>}
  */
Network.prototype.enable = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Network.enable', opt_params || {});
};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<Network.GetAllCookiesResult>}
  */
Network.prototype.getAllCookies = function() {
  return this.connection_.sendDevToolsMessage('Network.getAllCookies', {});
};

/**
  * Returns the DER-encoded certificate.
  *
  * @param {Network.GetCertificateParams} params
  * @return {!Promise<Network.GetCertificateResult>}
  */
Network.prototype.getCertificate = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getCertificate', params);
};

/**
  * Returns all browser cookies for the current URL. Depending on the backend support, will return
 * detailed cookie information in the `cookies` field.
  *
  * @param {Network.GetCookiesParams=} opt_params
  * @return {!Promise<Network.GetCookiesResult>}
  */
Network.prototype.getCookies = function(opt_params) {
  return this.connection_.sendDevToolsMessage('Network.getCookies', opt_params || {});
};

/**
  * Returns content served for the given request.
  *
  * @param {Network.GetResponseBodyParams} params
  * @return {!Promise<Network.GetResponseBodyResult>}
  */
Network.prototype.getResponseBody = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getResponseBody', params);
};

/**
  * Returns post data sent with the request. Returns an error when no data was sent with the request.
  *
  * @param {Network.GetRequestPostDataParams} params
  * @return {!Promise<Network.GetRequestPostDataResult>}
  */
Network.prototype.getRequestPostData = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getRequestPostData', params);
};

/**
  * Returns content served for the given currently intercepted request.
  *
  * @param {Network.GetResponseBodyForInterceptionParams} params
  * @return {!Promise<Network.GetResponseBodyForInterceptionResult>}
  */
Network.prototype.getResponseBodyForInterception = function(params) {
  return this.connection_.sendDevToolsMessage('Network.getResponseBodyForInterception', params);
};

/**
  * Returns a handle to the stream representing the response body. Note that after this command,
 * the intercepted request can't be continued as is -- you either need to cancel it or to provide
 * the response body. The stream only supports sequential read, IO.read will fail if the position
 * is specified.
  *
  * @param {Network.TakeResponseBodyForInterceptionAsStreamParams} params
  * @return {!Promise<Network.TakeResponseBodyForInterceptionAsStreamResult>}
  */
Network.prototype.takeResponseBodyForInterceptionAsStream = function(params) {
  return this.connection_.sendDevToolsMessage('Network.takeResponseBodyForInterceptionAsStream', params);
};

/**
  * This method sends a new XMLHttpRequest which is identical to the original one. The following
 * parameters should be identical: method, url, async, request body, extra headers, withCredentials
 * attribute, user, password.
  *
  * @param {Network.ReplayXHRParams} params
  * @return {!Promise<Network.ReplayXHRResult>}
  */
Network.prototype.replayXHR = function(params) {
  return this.connection_.sendDevToolsMessage('Network.replayXHR', params);
};

/**
  * Searches for given string in response content.
  *
  * @param {Network.SearchInResponseBodyParams} params
  * @return {!Promise<Network.SearchInResponseBodyResult>}
  */
Network.prototype.searchInResponseBody = function(params) {
  return this.connection_.sendDevToolsMessage('Network.searchInResponseBody', params);
};

/**
  * Blocks URLs from loading.
  *
  * @param {Network.SetBlockedURLsParams} params
  * @return {!Promise<Network.SetBlockedURLsResult>}
  */
Network.prototype.setBlockedURLs = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setBlockedURLs', params);
};

/**
  * Toggles ignoring of service worker for each request.
  *
  * @param {Network.SetBypassServiceWorkerParams} params
  * @return {!Promise<Network.SetBypassServiceWorkerResult>}
  */
Network.prototype.setBypassServiceWorker = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setBypassServiceWorker', params);
};

/**
  * Toggles ignoring cache for each request. If `true`, cache will not be used.
  *
  * @param {Network.SetCacheDisabledParams} params
  * @return {!Promise<Network.SetCacheDisabledResult>}
  */
Network.prototype.setCacheDisabled = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setCacheDisabled', params);
};

/**
  * Sets a cookie with the given cookie data; may overwrite equivalent cookies if they exist.
  *
  * @param {Network.SetCookieParams} params
  * @return {!Promise<Network.SetCookieResult>}
  */
Network.prototype.setCookie = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setCookie', params);
};

/**
  * Sets given cookies.
  *
  * @param {Network.SetCookiesParams} params
  * @return {!Promise<Network.SetCookiesResult>}
  */
Network.prototype.setCookies = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setCookies', params);
};

/**
  * For testing.
  *
  * @param {Network.SetDataSizeLimitsForTestParams} params
  * @return {!Promise<Network.SetDataSizeLimitsForTestResult>}
  */
Network.prototype.setDataSizeLimitsForTest = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setDataSizeLimitsForTest', params);
};

/**
  * Specifies whether to always send extra HTTP headers with the requests from this page.
  *
  * @param {Network.SetExtraHTTPHeadersParams} params
  * @return {!Promise<Network.SetExtraHTTPHeadersResult>}
  */
Network.prototype.setExtraHTTPHeaders = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setExtraHTTPHeaders', params);
};

/**
  * Sets the requests to intercept that match a the provided patterns and optionally resource types.
  *
  * @param {Network.SetRequestInterceptionParams} params
  * @return {!Promise<Network.SetRequestInterceptionResult>}
  */
Network.prototype.setRequestInterception = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setRequestInterception', params);
};

/**
  * Allows overriding user agent with the given string.
  *
  * @param {Network.SetUserAgentOverrideParams} params
  * @return {!Promise<Network.SetUserAgentOverrideResult>}
  */
Network.prototype.setUserAgentOverride = function(params) {
  return this.connection_.sendDevToolsMessage('Network.setUserAgentOverride', params);
};


/**
  * Fired when data chunk was received over the network.
  *
  * @param {!function(!Network.DataReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onDataReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.dataReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when EventSource message is received.
  *
  * @param {!function(!Network.EventSourceMessageReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onEventSourceMessageReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.eventSourceMessageReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when HTTP request has failed to load.
  *
  * @param {!function(!Network.LoadingFailedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onLoadingFailed = function(listener) {
  return this.connection_.addEventListener(
      'Network.loadingFailed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when HTTP request has finished loading.
  *
  * @param {!function(!Network.LoadingFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onLoadingFinished = function(listener) {
  return this.connection_.addEventListener(
      'Network.loadingFinished', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Details of an intercepted HTTP request, which must be either allowed, blocked, modified or
 * mocked.
  *
  * @param {!function(!Network.RequestInterceptedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onRequestIntercepted = function(listener) {
  return this.connection_.addEventListener(
      'Network.requestIntercepted', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired if request ended up loading from cache.
  *
  * @param {!function(!Network.RequestServedFromCacheParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onRequestServedFromCache = function(listener) {
  return this.connection_.addEventListener(
      'Network.requestServedFromCache', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when page is about to send HTTP request.
  *
  * @param {!function(!Network.RequestWillBeSentParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onRequestWillBeSent = function(listener) {
  return this.connection_.addEventListener(
      'Network.requestWillBeSent', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when resource loading priority is changed
  *
  * @param {!function(!Network.ResourceChangedPriorityParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onResourceChangedPriority = function(listener) {
  return this.connection_.addEventListener(
      'Network.resourceChangedPriority', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when a signed exchange was received over the network
  *
  * @param {!function(!Network.SignedExchangeReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onSignedExchangeReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.signedExchangeReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when HTTP response is available.
  *
  * @param {!function(!Network.ResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onResponseReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.responseReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket is closed.
  *
  * @param {!function(!Network.WebSocketClosedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketClosed = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketClosed', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired upon WebSocket creation.
  *
  * @param {!function(!Network.WebSocketCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketCreated = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketCreated', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket frame error occurs.
  *
  * @param {!function(!Network.WebSocketFrameErrorParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketFrameError = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketFrameError', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket frame is received.
  *
  * @param {!function(!Network.WebSocketFrameReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketFrameReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketFrameReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket frame is sent.
  *
  * @param {!function(!Network.WebSocketFrameSentParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketFrameSent = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketFrameSent', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket handshake response becomes available.
  *
  * @param {!function(!Network.WebSocketHandshakeResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketHandshakeResponseReceived = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketHandshakeResponseReceived', /** @type {!function(!Object): undefined} */ (listener));
};

/**
  * Fired when WebSocket is about to initiate handshake.
  *
  * @param {!function(!Network.WebSocketWillSendHandshakeRequestParams)} listener
  * @return {number} The id of this event listener.
  */
Network.prototype.onWebSocketWillSendHandshakeRequest = function(listener) {
  return this.connection_.addEventListener(
      'Network.webSocketWillSendHandshakeRequest', /** @type {!function(!Object): undefined} */ (listener));
};

});  // goog.scope

