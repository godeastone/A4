// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


/**
 * Experimental bindings for the Network DevTools Domain.  Note these
 * are subject to change without warning. Use at your own risk.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.ExperimentalNetwork = function(connection) {};

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.ExperimentalNetwork.prototype.removeEventListener = function(id) {};

/**
 * Bindings for the Network DevTools Domain.
 * @param {!chromium.DevTools.Connection} connection The DevTools connection.
 * @constructor
 */
chromium.DevTools.Network = function(connection) {};

/** @type {!chromium.DevTools.ExperimentalNetwork} */
chromium.DevTools.Network.prototype.experimental;

/**
 * Removes an event listener.
 *
 * @param {number} id The id of the event listener to remove.
 * @return {boolean} Whether the event listener was actually removed.
 */
chromium.DevTools.Network.prototype.removeEventListener = function(id) {};

/**
 * Network level fetch failure reason.
 *
 * @enum {string}
 */
chromium.DevTools.Network.ErrorReason = {
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
chromium.DevTools.Network.ConnectionType = {
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
chromium.DevTools.Network.CookieSameSite = {
    EXACT: "Strict",
    LAX: "Lax"
};

/**
 * Loading priority of a resource request.
 *
 * @enum {string}
 */
chromium.DevTools.Network.ResourcePriority = {
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
chromium.DevTools.Network.CertificateTransparencyCompliance = {
    UNKNOWN: "unknown",
    NOT_COMPLIANT: "not-compliant",
    COMPLIANT: "compliant"
};

/**
 * The reason why request was blocked.
 *
 * @enum {string}
 */
chromium.DevTools.Network.BlockedReason = {
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
chromium.DevTools.Network.InterceptionStage = {
    REQUEST: "Request",
    HEADERS_RECEIVED: "HeadersReceived"
};

/**
 * The referrer policy of the request, as defined in https://www.w3.org/TR/referrer-policy/
 *
 * @enum {string}
 */
chromium.DevTools.Network.RequestReferrerPolicy = {
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
chromium.DevTools.Network.InitiatorType = {
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
chromium.DevTools.Network.AuthChallengeSource = {
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
chromium.DevTools.Network.AuthChallengeResponseResponse = {
    DEFAULT: "Default",
    CANCEL_AUTH: "CancelAuth",
    PROVIDE_CREDENTIALS: "ProvideCredentials"
};


/**
 * Timing information for the request.
 *
 * requestTime: Timing's requestTime is a baseline in seconds, while the other numbers are ticks in
 *    milliseconds relatively to this requestTime.
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
chromium.DevTools.Network.ResourceTiming;

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
 *   mixedContentType: (!chromium.DevTools.Security.MixedContentType|undefined),
 *   initialPriority: !chromium.DevTools.Network.ResourcePriority,
 *   referrerPolicy: !chromium.DevTools.Network.RequestReferrerPolicy,
 *   isLinkPreload: (boolean|undefined)
 * }}
 */
chromium.DevTools.Network.Request;

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
chromium.DevTools.Network.SignedCertificateTimestamp;

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
 *   signedCertificateTimestampList: !Array.<!chromium.DevTools.Network.SignedCertificateTimestamp>,
 *   certificateTransparencyCompliance: !chromium.DevTools.Network.CertificateTransparencyCompliance
 * }}
 */
chromium.DevTools.Network.SecurityDetails;

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
 *   timing: (!chromium.DevTools.Network.ResourceTiming|undefined),
 *   protocol: (string|undefined),
 *   securityState: !chromium.DevTools.Security.SecurityState,
 *   securityDetails: (!chromium.DevTools.Network.SecurityDetails|undefined)
 * }}
 */
chromium.DevTools.Network.Response;

/**
 * WebSocket request data.
 *
 * headers: HTTP request headers.
 *
 * @typedef {{
 *   headers: Object
 * }}
 */
chromium.DevTools.Network.WebSocketRequest;

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
chromium.DevTools.Network.WebSocketResponse;

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
chromium.DevTools.Network.WebSocketFrame;

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
 *   response: (!chromium.DevTools.Network.Response|undefined),
 *   bodySize: number
 * }}
 */
chromium.DevTools.Network.CachedResource;

/**
 * Information about the request initiator.
 *
 * type: Type of this initiator.
 * stack: Initiator JavaScript stack trace, set for Script only.
 * url: Initiator URL, set for Parser type or for Script type (when script is importing module) or for SignedExchange type.
 * lineNumber: Initiator line number, set for Parser type or for Script type (when script is importing
 *    module) (0-based).
 *
 * @typedef {{
 *   type: !chromium.DevTools.Network.InitiatorType,
 *   stack: (!chromium.DevTools.Runtime.StackTrace|undefined),
 *   url: (string|undefined),
 *   lineNumber: (number|undefined)
 * }}
 */
chromium.DevTools.Network.Initiator;

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
 *   sameSite: (!chromium.DevTools.Network.CookieSameSite|undefined)
 * }}
 */
chromium.DevTools.Network.Cookie;

/**
 * Cookie parameter object
 *
 * name: Cookie name.
 * value: Cookie value.
 * url: The request-URI to associate with the setting of the cookie. This value can affect the
 *    default domain and path values of the created cookie.
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
 *   sameSite: (!chromium.DevTools.Network.CookieSameSite|undefined),
 *   expires: (number|undefined)
 * }}
 */
chromium.DevTools.Network.CookieParam;

/**
 * Authorization challenge for HTTP status code 401 or 407.
 *
 * source: Source of the authentication challenge.
 * origin: Origin of the challenger.
 * scheme: The authentication scheme used, such as basic or digest
 * realm: The realm of the challenge. May be empty.
 *
 * @typedef {{
 *   source: (!chromium.DevTools.Network.AuthChallengeSource|undefined),
 *   origin: string,
 *   scheme: string,
 *   realm: string
 * }}
 */
chromium.DevTools.Network.AuthChallenge;

/**
 * Response to an AuthChallenge.
 *
 * response: The decision on what to do in response to the authorization challenge.  Default means
 *    deferring to the default behavior of the net stack, which will likely either the Cancel
 *    authentication or display a popup dialog box.
 * username: The username to provide, possibly empty. Should only be set if response is
 *    ProvideCredentials.
 * password: The password to provide, possibly empty. Should only be set if response is
 *    ProvideCredentials.
 *
 * @typedef {{
 *   response: !chromium.DevTools.Network.AuthChallengeResponseResponse,
 *   username: (string|undefined),
 *   password: (string|undefined)
 * }}
 */
chromium.DevTools.Network.AuthChallengeResponse;

/**
 * Request pattern for interception.
 *
 * urlPattern: Wildcards ('*' -> zero or more, '?' -> exactly one) are allowed. Escape character is
 *    backslash. Omitting is equivalent to "*".
 * resourceType: If set, only requests for matching resource types will be intercepted.
 * interceptionStage: Stage at wich to begin intercepting requests. Default is Request.
 *
 * @typedef {{
 *   urlPattern: (string|undefined),
 *   resourceType: (!chromium.DevTools.Page.ResourceType|undefined),
 *   interceptionStage: (!chromium.DevTools.Network.InterceptionStage|undefined)
 * }}
 */
chromium.DevTools.Network.RequestPattern;

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
chromium.DevTools.Network.SignedExchangeSignature;

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
 *   signatures: !Array.<!chromium.DevTools.Network.SignedExchangeSignature>
 * }}
 */
chromium.DevTools.Network.SignedExchangeHeader;

/**
 * Information about a signed exchange response.
 *
 * outerResponse: The outer response of signed HTTP exchange which was received from network.
 * header: Information about the signed exchange header.
 * securityDetails: Security details for the signed exchange header.
 * errors: Errors occurred while handling the signed exchagne.
 *
 * @typedef {{
 *   outerResponse: !chromium.DevTools.Network.Response,
 *   header: (!chromium.DevTools.Network.SignedExchangeHeader|undefined),
 *   securityDetails: (!chromium.DevTools.Network.SecurityDetails|undefined),
 *   errors: (!Array.<string>|undefined)
 * }}
 */
chromium.DevTools.Network.SignedExchangeInfo;

/**
 * Parameters for the CanClearBrowserCache command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.CanClearBrowserCacheParams;

/**
 * Result for the CanClearBrowserCache command.
 *
 * result: True if browser cache can be cleared.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
chromium.DevTools.Network.CanClearBrowserCacheResult;

/**
 * Parameters for the CanClearBrowserCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.CanClearBrowserCookiesParams;

/**
 * Result for the CanClearBrowserCookies command.
 *
 * result: True if browser cookies can be cleared.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
chromium.DevTools.Network.CanClearBrowserCookiesResult;

/**
 * Parameters for the CanEmulateNetworkConditions command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.CanEmulateNetworkConditionsParams;

/**
 * Result for the CanEmulateNetworkConditions command.
 *
 * result: True if emulation of network conditions is supported.
 *
 * @typedef {{
 *   result: boolean
 * }}
 */
chromium.DevTools.Network.CanEmulateNetworkConditionsResult;

/**
 * Parameters for the ClearBrowserCache command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.ClearBrowserCacheParams;

/**
 * Result for the ClearBrowserCache command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.ClearBrowserCacheResult;

/**
 * Parameters for the ClearBrowserCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.ClearBrowserCookiesParams;

/**
 * Result for the ClearBrowserCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.ClearBrowserCookiesResult;

/**
 * Parameters for the ContinueInterceptedRequest command.
 *
 * errorReason: If set this causes the request to fail with the given reason. Passing `Aborted` for requests
 *    marked with `isNavigationRequest` also cancels the navigation. Must not be set in response
 *    to an authChallenge.
 * rawResponse: If set the requests completes using with the provided base64 encoded raw response, including
 *    HTTP status line and headers etc... Must not be set in response to an authChallenge.
 * url: If set the request url will be modified in a way that's not observable by page. Must not be
 *    set in response to an authChallenge.
 * method: If set this allows the request method to be overridden. Must not be set in response to an
 *    authChallenge.
 * postData: If set this allows postData to be set. Must not be set in response to an authChallenge.
 * headers: If set this allows the request headers to be changed. Must not be set in response to an
 *    authChallenge.
 * authChallengeResponse: Response to a requestIntercepted with an authChallenge. Must not be set otherwise.
 *
 * @typedef {{
 *   interceptionId: string,
 *   errorReason: (!chromium.DevTools.Network.ErrorReason|undefined),
 *   rawResponse: (string|undefined),
 *   url: (string|undefined),
 *   method: (string|undefined),
 *   postData: (string|undefined),
 *   headers: (Object|undefined),
 *   authChallengeResponse: (!chromium.DevTools.Network.AuthChallengeResponse|undefined)
 * }}
 */
chromium.DevTools.Network.ContinueInterceptedRequestParams;

/**
 * Result for the ContinueInterceptedRequest command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.ContinueInterceptedRequestResult;

/**
 * Parameters for the DeleteCookies command.
 *
 * name: Name of the cookies to remove.
 * url: If specified, deletes all the cookies with the given name where domain and path match
 *    provided URL.
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
chromium.DevTools.Network.DeleteCookiesParams;

/**
 * Result for the DeleteCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.DeleteCookiesResult;

/**
 * Parameters for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.DisableParams;

/**
 * Result for the Disable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.DisableResult;

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
 *   connectionType: (!chromium.DevTools.Network.ConnectionType|undefined)
 * }}
 */
chromium.DevTools.Network.EmulateNetworkConditionsParams;

/**
 * Result for the EmulateNetworkConditions command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.EmulateNetworkConditionsResult;

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
chromium.DevTools.Network.EnableParams;

/**
 * Result for the Enable command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.EnableResult;

/**
 * Parameters for the GetAllCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.GetAllCookiesParams;

/**
 * Result for the GetAllCookies command.
 *
 * cookies: Array of cookie objects.
 *
 * @typedef {{
 *   cookies: !Array.<!chromium.DevTools.Network.Cookie>
 * }}
 */
chromium.DevTools.Network.GetAllCookiesResult;

/**
 * Parameters for the GetCertificate command.
 *
 * origin: Origin to get certificate for.
 *
 * @typedef {{
 *   origin: string
 * }}
 */
chromium.DevTools.Network.GetCertificateParams;

/**
 * Result for the GetCertificate command.
 *
 *
 * @typedef {{
 *   tableNames: !Array.<string>
 * }}
 */
chromium.DevTools.Network.GetCertificateResult;

/**
 * Parameters for the GetCookies command.
 *
 * urls: The list of URLs for which applicable cookies will be fetched
 *
 * @typedef {{
 *   urls: (!Array.<string>|undefined)
 * }}
 */
chromium.DevTools.Network.GetCookiesParams;

/**
 * Result for the GetCookies command.
 *
 * cookies: Array of cookie objects.
 *
 * @typedef {{
 *   cookies: !Array.<!chromium.DevTools.Network.Cookie>
 * }}
 */
chromium.DevTools.Network.GetCookiesResult;

/**
 * Parameters for the GetResponseBody command.
 *
 * requestId: Identifier of the network request to get content for.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
chromium.DevTools.Network.GetResponseBodyParams;

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
chromium.DevTools.Network.GetResponseBodyResult;

/**
 * Parameters for the GetRequestPostData command.
 *
 * requestId: Identifier of the network request to get content for.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
chromium.DevTools.Network.GetRequestPostDataParams;

/**
 * Result for the GetRequestPostData command.
 *
 * postData: Base64-encoded request body.
 *
 * @typedef {{
 *   postData: string
 * }}
 */
chromium.DevTools.Network.GetRequestPostDataResult;

/**
 * Parameters for the GetResponseBodyForInterception command.
 *
 * interceptionId: Identifier for the intercepted request to get body for.
 *
 * @typedef {{
 *   interceptionId: string
 * }}
 */
chromium.DevTools.Network.GetResponseBodyForInterceptionParams;

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
chromium.DevTools.Network.GetResponseBodyForInterceptionResult;

/**
 * Parameters for the TakeResponseBodyForInterceptionAsStream command.
 *
 *
 * @typedef {{
 *   interceptionId: string
 * }}
 */
chromium.DevTools.Network.TakeResponseBodyForInterceptionAsStreamParams;

/**
 * Result for the TakeResponseBodyForInterceptionAsStream command.
 *
 *
 * @typedef {{
 *   stream: string
 * }}
 */
chromium.DevTools.Network.TakeResponseBodyForInterceptionAsStreamResult;

/**
 * Parameters for the ReplayXHR command.
 *
 * requestId: Identifier of XHR to replay.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
chromium.DevTools.Network.ReplayXHRParams;

/**
 * Result for the ReplayXHR command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.ReplayXHRResult;

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
chromium.DevTools.Network.SearchInResponseBodyParams;

/**
 * Result for the SearchInResponseBody command.
 *
 * result: List of search matches.
 *
 * @typedef {{
 *   result: !Array.<!chromium.DevTools.Debugger.SearchMatch>
 * }}
 */
chromium.DevTools.Network.SearchInResponseBodyResult;

/**
 * Parameters for the SetBlockedURLs command.
 *
 * urls: URL patterns to block. Wildcards ('*') are allowed.
 *
 * @typedef {{
 *   urls: !Array.<string>
 * }}
 */
chromium.DevTools.Network.SetBlockedURLsParams;

/**
 * Result for the SetBlockedURLs command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetBlockedURLsResult;

/**
 * Parameters for the SetBypassServiceWorker command.
 *
 * bypass: Bypass service worker and load from network.
 *
 * @typedef {{
 *   bypass: boolean
 * }}
 */
chromium.DevTools.Network.SetBypassServiceWorkerParams;

/**
 * Result for the SetBypassServiceWorker command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetBypassServiceWorkerResult;

/**
 * Parameters for the SetCacheDisabled command.
 *
 * cacheDisabled: Cache disabled state.
 *
 * @typedef {{
 *   cacheDisabled: boolean
 * }}
 */
chromium.DevTools.Network.SetCacheDisabledParams;

/**
 * Result for the SetCacheDisabled command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetCacheDisabledResult;

/**
 * Parameters for the SetCookie command.
 *
 * name: Cookie name.
 * value: Cookie value.
 * url: The request-URI to associate with the setting of the cookie. This value can affect the
 *    default domain and path values of the created cookie.
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
 *   sameSite: (!chromium.DevTools.Network.CookieSameSite|undefined),
 *   expires: (number|undefined)
 * }}
 */
chromium.DevTools.Network.SetCookieParams;

/**
 * Result for the SetCookie command.
 *
 * success: True if successfully set cookie.
 *
 * @typedef {{
 *   success: boolean
 * }}
 */
chromium.DevTools.Network.SetCookieResult;

/**
 * Parameters for the SetCookies command.
 *
 * cookies: Cookies to be set.
 *
 * @typedef {{
 *   cookies: !Array.<!chromium.DevTools.Network.CookieParam>
 * }}
 */
chromium.DevTools.Network.SetCookiesParams;

/**
 * Result for the SetCookies command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetCookiesResult;

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
chromium.DevTools.Network.SetDataSizeLimitsForTestParams;

/**
 * Result for the SetDataSizeLimitsForTest command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetDataSizeLimitsForTestResult;

/**
 * Parameters for the SetExtraHTTPHeaders command.
 *
 * headers: Map with extra HTTP headers.
 *
 * @typedef {{
 *   headers: Object
 * }}
 */
chromium.DevTools.Network.SetExtraHTTPHeadersParams;

/**
 * Result for the SetExtraHTTPHeaders command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetExtraHTTPHeadersResult;

/**
 * Parameters for the SetRequestInterception command.
 *
 * patterns: Requests matching any of these patterns will be forwarded and wait for the corresponding
 *    continueInterceptedRequest call.
 *
 * @typedef {{
 *   patterns: !Array.<!chromium.DevTools.Network.RequestPattern>
 * }}
 */
chromium.DevTools.Network.SetRequestInterceptionParams;

/**
 * Result for the SetRequestInterception command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetRequestInterceptionResult;

/**
 * Parameters for the SetUserAgentOverride command.
 *
 * userAgent: User agent to use.
 *
 * @typedef {{
 *   userAgent: string
 * }}
 */
chromium.DevTools.Network.SetUserAgentOverrideParams;

/**
 * Result for the SetUserAgentOverride command.
 *
 *
 * @typedef {undefined}
 */
chromium.DevTools.Network.SetUserAgentOverrideResult;

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
chromium.DevTools.Network.DataReceivedParams;

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
chromium.DevTools.Network.EventSourceMessageReceivedParams;

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
 *   blockedReason: (!chromium.DevTools.Network.BlockedReason|undefined)
 * }}
 */
chromium.DevTools.Network.LoadingFailedParams;

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
chromium.DevTools.Network.LoadingFinishedParams;

/**
 * Parameters for the RequestIntercepted event.
 *
 * interceptionId: Each request the page makes will have a unique id, however if any redirects are encountered
 *    while processing that fetch, they will be reported with the same id as the original fetch.
 *    Likewise if HTTP authentication is needed then the same fetch id will be used.
 * frameId: The id of the frame that initiated the request.
 * resourceType: How the requested resource will be used.
 * isNavigationRequest: Whether this is a navigation request, which can abort the navigation completely.
 * isDownload: Set if the request is a navigation that will result in a download.
 *    Only present after response is received from the server (i.e. HeadersReceived stage).
 * redirectUrl: Redirect location, only sent if a redirect was intercepted.
 * authChallenge: Details of the Authorization Challenge encountered. If this is set then
 *    continueInterceptedRequest must contain an authChallengeResponse.
 * responseErrorReason: Response error if intercepted at response stage or if redirect occurred while intercepting
 *    request.
 * responseStatusCode: Response code if intercepted at response stage or if redirect occurred while intercepting
 *    request or auth retry occurred.
 * responseHeaders: Response headers if intercepted at the response stage or if redirect occurred while
 *    intercepting request or auth retry occurred.
 *
 * @typedef {{
 *   interceptionId: string,
 *   request: !chromium.DevTools.Network.Request,
 *   frameId: string,
 *   resourceType: !chromium.DevTools.Page.ResourceType,
 *   isNavigationRequest: boolean,
 *   isDownload: (boolean|undefined),
 *   redirectUrl: (string|undefined),
 *   authChallenge: (!chromium.DevTools.Network.AuthChallenge|undefined),
 *   responseErrorReason: (!chromium.DevTools.Network.ErrorReason|undefined),
 *   responseStatusCode: (number|undefined),
 *   responseHeaders: (Object|undefined)
 * }}
 */
chromium.DevTools.Network.RequestInterceptedParams;

/**
 * Parameters for the RequestServedFromCache event.
 *
 * requestId: Request identifier.
 *
 * @typedef {{
 *   requestId: string
 * }}
 */
chromium.DevTools.Network.RequestServedFromCacheParams;

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
 *   request: !chromium.DevTools.Network.Request,
 *   timestamp: number,
 *   wallTime: number,
 *   initiator: !chromium.DevTools.Network.Initiator,
 *   redirectResponse: (!chromium.DevTools.Network.Response|undefined),
 *   type: (!chromium.DevTools.Page.ResourceType|undefined),
 *   frameId: (string|undefined),
 *   hasUserGesture: (boolean|undefined)
 * }}
 */
chromium.DevTools.Network.RequestWillBeSentParams;

/**
 * Parameters for the ResourceChangedPriority event.
 *
 * requestId: Request identifier.
 * newPriority: New priority
 * timestamp: Timestamp.
 *
 * @typedef {{
 *   requestId: string,
 *   newPriority: !chromium.DevTools.Network.ResourcePriority,
 *   timestamp: number
 * }}
 */
chromium.DevTools.Network.ResourceChangedPriorityParams;

/**
 * Parameters for the SignedExchangeReceived event.
 *
 * requestId: Request identifier.
 * info: Information about the signed exchange response.
 *
 * @typedef {{
 *   requestId: string,
 *   info: !chromium.DevTools.Network.SignedExchangeInfo
 * }}
 */
chromium.DevTools.Network.SignedExchangeReceivedParams;

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
 *   response: !chromium.DevTools.Network.Response,
 *   frameId: (string|undefined)
 * }}
 */
chromium.DevTools.Network.ResponseReceivedParams;

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
chromium.DevTools.Network.WebSocketClosedParams;

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
 *   initiator: (!chromium.DevTools.Network.Initiator|undefined)
 * }}
 */
chromium.DevTools.Network.WebSocketCreatedParams;

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
chromium.DevTools.Network.WebSocketFrameErrorParams;

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
 *   response: !chromium.DevTools.Network.WebSocketFrame
 * }}
 */
chromium.DevTools.Network.WebSocketFrameReceivedParams;

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
 *   response: !chromium.DevTools.Network.WebSocketFrame
 * }}
 */
chromium.DevTools.Network.WebSocketFrameSentParams;

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
 *   response: !chromium.DevTools.Network.WebSocketResponse
 * }}
 */
chromium.DevTools.Network.WebSocketHandshakeResponseReceivedParams;

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
 *   request: !chromium.DevTools.Network.WebSocketRequest
 * }}
 */
chromium.DevTools.Network.WebSocketWillSendHandshakeRequestParams;



/**
  * Tells whether clearing browser cache is supported.
  *
  * @return {!Promise<chromium.DevTools.Network.CanClearBrowserCacheResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.canClearBrowserCache = function() {};

/**
  * Tells whether clearing browser cookies is supported.
  *
  * @return {!Promise<chromium.DevTools.Network.CanClearBrowserCookiesResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.canClearBrowserCookies = function() {};

/**
  * Tells whether emulation of network conditions is supported.
  *
  * @return {!Promise<chromium.DevTools.Network.CanEmulateNetworkConditionsResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.canEmulateNetworkConditions = function() {};

/**
  * Clears browser cache.
  *
  * @return {!Promise<chromium.DevTools.Network.ClearBrowserCacheResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.clearBrowserCache = function() {};

/**
  * Clears browser cookies.
  *
  * @return {!Promise<chromium.DevTools.Network.ClearBrowserCookiesResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.clearBrowserCookies = function() {};

/**
  * Response to Network.requestIntercepted which either modifies the request to continue with any
 * modifications, or blocks it, or completes it with the provided response bytes. If a network
 * fetch occurs as a result which encounters a redirect an additional Network.requestIntercepted
 * event will be sent with the same InterceptionId.
  *
  * @param {chromium.DevTools.Network.ContinueInterceptedRequestParams} params
  * @return {!Promise<chromium.DevTools.Network.ContinueInterceptedRequestResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.continueInterceptedRequest = function(params) {};

/**
  * Deletes browser cookies with matching name and url or domain/path pair.
  *
  * @param {chromium.DevTools.Network.DeleteCookiesParams} params
  * @return {!Promise<chromium.DevTools.Network.DeleteCookiesResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.deleteCookies = function(params) {};

/**
  * Disables network tracking, prevents network events from being sent to the client.
  *
  * @return {!Promise<chromium.DevTools.Network.DisableResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.disable = function() {};

/**
  * Activates emulation of network conditions.
  *
  * @param {chromium.DevTools.Network.EmulateNetworkConditionsParams} params
  * @return {!Promise<chromium.DevTools.Network.EmulateNetworkConditionsResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.emulateNetworkConditions = function(params) {};

/**
  * Enables network tracking, network events will now be delivered to the client.
  *
  * @param {chromium.DevTools.Network.EnableParams=} opt_params
  * @return {!Promise<chromium.DevTools.Network.EnableResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.enable = function(opt_params) {};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<chromium.DevTools.Network.GetAllCookiesResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.getAllCookies = function() {};

/**
  * Returns the DER-encoded certificate.
  *
  * @param {chromium.DevTools.Network.GetCertificateParams} params
  * @return {!Promise<chromium.DevTools.Network.GetCertificateResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.getCertificate = function(params) {};

/**
  * Returns all browser cookies for the current URL. Depending on the backend support, will return
 * detailed cookie information in the `cookies` field.
  *
  * @param {chromium.DevTools.Network.GetCookiesParams=} opt_params
  * @return {!Promise<chromium.DevTools.Network.GetCookiesResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.getCookies = function(opt_params) {};

/**
  * Returns content served for the given request.
  *
  * @param {chromium.DevTools.Network.GetResponseBodyParams} params
  * @return {!Promise<chromium.DevTools.Network.GetResponseBodyResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.getResponseBody = function(params) {};

/**
  * Returns post data sent with the request. Returns an error when no data was sent with the request.
  *
  * @param {chromium.DevTools.Network.GetRequestPostDataParams} params
  * @return {!Promise<chromium.DevTools.Network.GetRequestPostDataResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.getRequestPostData = function(params) {};

/**
  * Returns content served for the given currently intercepted request.
  *
  * @param {chromium.DevTools.Network.GetResponseBodyForInterceptionParams} params
  * @return {!Promise<chromium.DevTools.Network.GetResponseBodyForInterceptionResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.getResponseBodyForInterception = function(params) {};

/**
  * Returns a handle to the stream representing the response body. Note that after this command,
 * the intercepted request can't be continued as is -- you either need to cancel it or to provide
 * the response body. The stream only supports sequential read, IO.read will fail if the position
 * is specified.
  *
  * @param {chromium.DevTools.Network.TakeResponseBodyForInterceptionAsStreamParams} params
  * @return {!Promise<chromium.DevTools.Network.TakeResponseBodyForInterceptionAsStreamResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.takeResponseBodyForInterceptionAsStream = function(params) {};

/**
  * This method sends a new XMLHttpRequest which is identical to the original one. The following
 * parameters should be identical: method, url, async, request body, extra headers, withCredentials
 * attribute, user, password.
  *
  * @param {chromium.DevTools.Network.ReplayXHRParams} params
  * @return {!Promise<chromium.DevTools.Network.ReplayXHRResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.replayXHR = function(params) {};

/**
  * Searches for given string in response content.
  *
  * @param {chromium.DevTools.Network.SearchInResponseBodyParams} params
  * @return {!Promise<chromium.DevTools.Network.SearchInResponseBodyResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.searchInResponseBody = function(params) {};

/**
  * Blocks URLs from loading.
  *
  * @param {chromium.DevTools.Network.SetBlockedURLsParams} params
  * @return {!Promise<chromium.DevTools.Network.SetBlockedURLsResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setBlockedURLs = function(params) {};

/**
  * Toggles ignoring of service worker for each request.
  *
  * @param {chromium.DevTools.Network.SetBypassServiceWorkerParams} params
  * @return {!Promise<chromium.DevTools.Network.SetBypassServiceWorkerResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setBypassServiceWorker = function(params) {};

/**
  * Toggles ignoring cache for each request. If `true`, cache will not be used.
  *
  * @param {chromium.DevTools.Network.SetCacheDisabledParams} params
  * @return {!Promise<chromium.DevTools.Network.SetCacheDisabledResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setCacheDisabled = function(params) {};

/**
  * Sets a cookie with the given cookie data; may overwrite equivalent cookies if they exist.
  *
  * @param {chromium.DevTools.Network.SetCookieParams} params
  * @return {!Promise<chromium.DevTools.Network.SetCookieResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setCookie = function(params) {};

/**
  * Sets given cookies.
  *
  * @param {chromium.DevTools.Network.SetCookiesParams} params
  * @return {!Promise<chromium.DevTools.Network.SetCookiesResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setCookies = function(params) {};

/**
  * For testing.
  *
  * @param {chromium.DevTools.Network.SetDataSizeLimitsForTestParams} params
  * @return {!Promise<chromium.DevTools.Network.SetDataSizeLimitsForTestResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setDataSizeLimitsForTest = function(params) {};

/**
  * Specifies whether to always send extra HTTP headers with the requests from this page.
  *
  * @param {chromium.DevTools.Network.SetExtraHTTPHeadersParams} params
  * @return {!Promise<chromium.DevTools.Network.SetExtraHTTPHeadersResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setExtraHTTPHeaders = function(params) {};

/**
  * Sets the requests to intercept that match a the provided patterns and optionally resource types.
  *
  * @param {chromium.DevTools.Network.SetRequestInterceptionParams} params
  * @return {!Promise<chromium.DevTools.Network.SetRequestInterceptionResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setRequestInterception = function(params) {};

/**
  * Allows overriding user agent with the given string.
  *
  * @param {chromium.DevTools.Network.SetUserAgentOverrideParams} params
  * @return {!Promise<chromium.DevTools.Network.SetUserAgentOverrideResult>}
  */
chromium.DevTools.ExperimentalNetwork.prototype.setUserAgentOverride = function(params) {};


/**
  * Fired when data chunk was received over the network.
  *
  * @param {!function(!chromium.DevTools.Network.DataReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onDataReceived = function(listener) {};

/**
  * Fired when EventSource message is received.
  *
  * @param {!function(!chromium.DevTools.Network.EventSourceMessageReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onEventSourceMessageReceived = function(listener) {};

/**
  * Fired when HTTP request has failed to load.
  *
  * @param {!function(!chromium.DevTools.Network.LoadingFailedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onLoadingFailed = function(listener) {};

/**
  * Fired when HTTP request has finished loading.
  *
  * @param {!function(!chromium.DevTools.Network.LoadingFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onLoadingFinished = function(listener) {};

/**
  * Details of an intercepted HTTP request, which must be either allowed, blocked, modified or
 * mocked.
  *
  * @param {!function(!chromium.DevTools.Network.RequestInterceptedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onRequestIntercepted = function(listener) {};

/**
  * Fired if request ended up loading from cache.
  *
  * @param {!function(!chromium.DevTools.Network.RequestServedFromCacheParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onRequestServedFromCache = function(listener) {};

/**
  * Fired when page is about to send HTTP request.
  *
  * @param {!function(!chromium.DevTools.Network.RequestWillBeSentParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onRequestWillBeSent = function(listener) {};

/**
  * Fired when resource loading priority is changed
  *
  * @param {!function(!chromium.DevTools.Network.ResourceChangedPriorityParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onResourceChangedPriority = function(listener) {};

/**
  * Fired when a signed exchange was received over the network
  *
  * @param {!function(!chromium.DevTools.Network.SignedExchangeReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onSignedExchangeReceived = function(listener) {};

/**
  * Fired when HTTP response is available.
  *
  * @param {!function(!chromium.DevTools.Network.ResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onResponseReceived = function(listener) {};

/**
  * Fired when WebSocket is closed.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketClosedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketClosed = function(listener) {};

/**
  * Fired upon WebSocket creation.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketCreated = function(listener) {};

/**
  * Fired when WebSocket frame error occurs.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketFrameErrorParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketFrameError = function(listener) {};

/**
  * Fired when WebSocket frame is received.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketFrameReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketFrameReceived = function(listener) {};

/**
  * Fired when WebSocket frame is sent.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketFrameSentParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketFrameSent = function(listener) {};

/**
  * Fired when WebSocket handshake response becomes available.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketHandshakeResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketHandshakeResponseReceived = function(listener) {};

/**
  * Fired when WebSocket is about to initiate handshake.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketWillSendHandshakeRequestParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.ExperimentalNetwork.prototype.onWebSocketWillSendHandshakeRequest = function(listener) {};



/**
  * Tells whether clearing browser cache is supported.
  *
  * @return {!Promise<chromium.DevTools.Network.CanClearBrowserCacheResult>}
  */
chromium.DevTools.Network.prototype.canClearBrowserCache = function() {};

/**
  * Tells whether clearing browser cookies is supported.
  *
  * @return {!Promise<chromium.DevTools.Network.CanClearBrowserCookiesResult>}
  */
chromium.DevTools.Network.prototype.canClearBrowserCookies = function() {};

/**
  * Tells whether emulation of network conditions is supported.
  *
  * @return {!Promise<chromium.DevTools.Network.CanEmulateNetworkConditionsResult>}
  */
chromium.DevTools.Network.prototype.canEmulateNetworkConditions = function() {};

/**
  * Clears browser cache.
  *
  * @return {!Promise<chromium.DevTools.Network.ClearBrowserCacheResult>}
  */
chromium.DevTools.Network.prototype.clearBrowserCache = function() {};

/**
  * Clears browser cookies.
  *
  * @return {!Promise<chromium.DevTools.Network.ClearBrowserCookiesResult>}
  */
chromium.DevTools.Network.prototype.clearBrowserCookies = function() {};

/**
  * Response to Network.requestIntercepted which either modifies the request to continue with any
 * modifications, or blocks it, or completes it with the provided response bytes. If a network
 * fetch occurs as a result which encounters a redirect an additional Network.requestIntercepted
 * event will be sent with the same InterceptionId.
  *
  * @param {chromium.DevTools.Network.ContinueInterceptedRequestParams} params
  * @return {!Promise<chromium.DevTools.Network.ContinueInterceptedRequestResult>}
  */
chromium.DevTools.Network.prototype.continueInterceptedRequest = function(params) {};

/**
  * Deletes browser cookies with matching name and url or domain/path pair.
  *
  * @param {chromium.DevTools.Network.DeleteCookiesParams} params
  * @return {!Promise<chromium.DevTools.Network.DeleteCookiesResult>}
  */
chromium.DevTools.Network.prototype.deleteCookies = function(params) {};

/**
  * Disables network tracking, prevents network events from being sent to the client.
  *
  * @return {!Promise<chromium.DevTools.Network.DisableResult>}
  */
chromium.DevTools.Network.prototype.disable = function() {};

/**
  * Activates emulation of network conditions.
  *
  * @param {chromium.DevTools.Network.EmulateNetworkConditionsParams} params
  * @return {!Promise<chromium.DevTools.Network.EmulateNetworkConditionsResult>}
  */
chromium.DevTools.Network.prototype.emulateNetworkConditions = function(params) {};

/**
  * Enables network tracking, network events will now be delivered to the client.
  *
  * @param {chromium.DevTools.Network.EnableParams=} opt_params
  * @return {!Promise<chromium.DevTools.Network.EnableResult>}
  */
chromium.DevTools.Network.prototype.enable = function(opt_params) {};

/**
  * Returns all browser cookies. Depending on the backend support, will return detailed cookie
 * information in the `cookies` field.
  *
  * @return {!Promise<chromium.DevTools.Network.GetAllCookiesResult>}
  */
chromium.DevTools.Network.prototype.getAllCookies = function() {};

/**
  * Returns the DER-encoded certificate.
  *
  * @param {chromium.DevTools.Network.GetCertificateParams} params
  * @return {!Promise<chromium.DevTools.Network.GetCertificateResult>}
  */
chromium.DevTools.Network.prototype.getCertificate = function(params) {};

/**
  * Returns all browser cookies for the current URL. Depending on the backend support, will return
 * detailed cookie information in the `cookies` field.
  *
  * @param {chromium.DevTools.Network.GetCookiesParams=} opt_params
  * @return {!Promise<chromium.DevTools.Network.GetCookiesResult>}
  */
chromium.DevTools.Network.prototype.getCookies = function(opt_params) {};

/**
  * Returns content served for the given request.
  *
  * @param {chromium.DevTools.Network.GetResponseBodyParams} params
  * @return {!Promise<chromium.DevTools.Network.GetResponseBodyResult>}
  */
chromium.DevTools.Network.prototype.getResponseBody = function(params) {};

/**
  * Returns post data sent with the request. Returns an error when no data was sent with the request.
  *
  * @param {chromium.DevTools.Network.GetRequestPostDataParams} params
  * @return {!Promise<chromium.DevTools.Network.GetRequestPostDataResult>}
  */
chromium.DevTools.Network.prototype.getRequestPostData = function(params) {};

/**
  * Returns content served for the given currently intercepted request.
  *
  * @param {chromium.DevTools.Network.GetResponseBodyForInterceptionParams} params
  * @return {!Promise<chromium.DevTools.Network.GetResponseBodyForInterceptionResult>}
  */
chromium.DevTools.Network.prototype.getResponseBodyForInterception = function(params) {};

/**
  * Returns a handle to the stream representing the response body. Note that after this command,
 * the intercepted request can't be continued as is -- you either need to cancel it or to provide
 * the response body. The stream only supports sequential read, IO.read will fail if the position
 * is specified.
  *
  * @param {chromium.DevTools.Network.TakeResponseBodyForInterceptionAsStreamParams} params
  * @return {!Promise<chromium.DevTools.Network.TakeResponseBodyForInterceptionAsStreamResult>}
  */
chromium.DevTools.Network.prototype.takeResponseBodyForInterceptionAsStream = function(params) {};

/**
  * This method sends a new XMLHttpRequest which is identical to the original one. The following
 * parameters should be identical: method, url, async, request body, extra headers, withCredentials
 * attribute, user, password.
  *
  * @param {chromium.DevTools.Network.ReplayXHRParams} params
  * @return {!Promise<chromium.DevTools.Network.ReplayXHRResult>}
  */
chromium.DevTools.Network.prototype.replayXHR = function(params) {};

/**
  * Searches for given string in response content.
  *
  * @param {chromium.DevTools.Network.SearchInResponseBodyParams} params
  * @return {!Promise<chromium.DevTools.Network.SearchInResponseBodyResult>}
  */
chromium.DevTools.Network.prototype.searchInResponseBody = function(params) {};

/**
  * Blocks URLs from loading.
  *
  * @param {chromium.DevTools.Network.SetBlockedURLsParams} params
  * @return {!Promise<chromium.DevTools.Network.SetBlockedURLsResult>}
  */
chromium.DevTools.Network.prototype.setBlockedURLs = function(params) {};

/**
  * Toggles ignoring of service worker for each request.
  *
  * @param {chromium.DevTools.Network.SetBypassServiceWorkerParams} params
  * @return {!Promise<chromium.DevTools.Network.SetBypassServiceWorkerResult>}
  */
chromium.DevTools.Network.prototype.setBypassServiceWorker = function(params) {};

/**
  * Toggles ignoring cache for each request. If `true`, cache will not be used.
  *
  * @param {chromium.DevTools.Network.SetCacheDisabledParams} params
  * @return {!Promise<chromium.DevTools.Network.SetCacheDisabledResult>}
  */
chromium.DevTools.Network.prototype.setCacheDisabled = function(params) {};

/**
  * Sets a cookie with the given cookie data; may overwrite equivalent cookies if they exist.
  *
  * @param {chromium.DevTools.Network.SetCookieParams} params
  * @return {!Promise<chromium.DevTools.Network.SetCookieResult>}
  */
chromium.DevTools.Network.prototype.setCookie = function(params) {};

/**
  * Sets given cookies.
  *
  * @param {chromium.DevTools.Network.SetCookiesParams} params
  * @return {!Promise<chromium.DevTools.Network.SetCookiesResult>}
  */
chromium.DevTools.Network.prototype.setCookies = function(params) {};

/**
  * For testing.
  *
  * @param {chromium.DevTools.Network.SetDataSizeLimitsForTestParams} params
  * @return {!Promise<chromium.DevTools.Network.SetDataSizeLimitsForTestResult>}
  */
chromium.DevTools.Network.prototype.setDataSizeLimitsForTest = function(params) {};

/**
  * Specifies whether to always send extra HTTP headers with the requests from this page.
  *
  * @param {chromium.DevTools.Network.SetExtraHTTPHeadersParams} params
  * @return {!Promise<chromium.DevTools.Network.SetExtraHTTPHeadersResult>}
  */
chromium.DevTools.Network.prototype.setExtraHTTPHeaders = function(params) {};

/**
  * Sets the requests to intercept that match a the provided patterns and optionally resource types.
  *
  * @param {chromium.DevTools.Network.SetRequestInterceptionParams} params
  * @return {!Promise<chromium.DevTools.Network.SetRequestInterceptionResult>}
  */
chromium.DevTools.Network.prototype.setRequestInterception = function(params) {};

/**
  * Allows overriding user agent with the given string.
  *
  * @param {chromium.DevTools.Network.SetUserAgentOverrideParams} params
  * @return {!Promise<chromium.DevTools.Network.SetUserAgentOverrideResult>}
  */
chromium.DevTools.Network.prototype.setUserAgentOverride = function(params) {};


/**
  * Fired when data chunk was received over the network.
  *
  * @param {!function(!chromium.DevTools.Network.DataReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onDataReceived = function(listener) {};

/**
  * Fired when EventSource message is received.
  *
  * @param {!function(!chromium.DevTools.Network.EventSourceMessageReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onEventSourceMessageReceived = function(listener) {};

/**
  * Fired when HTTP request has failed to load.
  *
  * @param {!function(!chromium.DevTools.Network.LoadingFailedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onLoadingFailed = function(listener) {};

/**
  * Fired when HTTP request has finished loading.
  *
  * @param {!function(!chromium.DevTools.Network.LoadingFinishedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onLoadingFinished = function(listener) {};

/**
  * Details of an intercepted HTTP request, which must be either allowed, blocked, modified or
 * mocked.
  *
  * @param {!function(!chromium.DevTools.Network.RequestInterceptedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onRequestIntercepted = function(listener) {};

/**
  * Fired if request ended up loading from cache.
  *
  * @param {!function(!chromium.DevTools.Network.RequestServedFromCacheParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onRequestServedFromCache = function(listener) {};

/**
  * Fired when page is about to send HTTP request.
  *
  * @param {!function(!chromium.DevTools.Network.RequestWillBeSentParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onRequestWillBeSent = function(listener) {};

/**
  * Fired when resource loading priority is changed
  *
  * @param {!function(!chromium.DevTools.Network.ResourceChangedPriorityParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onResourceChangedPriority = function(listener) {};

/**
  * Fired when a signed exchange was received over the network
  *
  * @param {!function(!chromium.DevTools.Network.SignedExchangeReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onSignedExchangeReceived = function(listener) {};

/**
  * Fired when HTTP response is available.
  *
  * @param {!function(!chromium.DevTools.Network.ResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onResponseReceived = function(listener) {};

/**
  * Fired when WebSocket is closed.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketClosedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketClosed = function(listener) {};

/**
  * Fired upon WebSocket creation.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketCreatedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketCreated = function(listener) {};

/**
  * Fired when WebSocket frame error occurs.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketFrameErrorParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketFrameError = function(listener) {};

/**
  * Fired when WebSocket frame is received.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketFrameReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketFrameReceived = function(listener) {};

/**
  * Fired when WebSocket frame is sent.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketFrameSentParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketFrameSent = function(listener) {};

/**
  * Fired when WebSocket handshake response becomes available.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketHandshakeResponseReceivedParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketHandshakeResponseReceived = function(listener) {};

/**
  * Fired when WebSocket is about to initiate handshake.
  *
  * @param {!function(!chromium.DevTools.Network.WebSocketWillSendHandshakeRequestParams)} listener
  * @return {number} The id of this event listener.
  */
chromium.DevTools.Network.prototype.onWebSocketWillSendHandshakeRequest = function(listener) {};
