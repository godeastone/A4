// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_NETWORK_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_NETWORK_H_

#include "base/values.h"

namespace headless {

namespace network {
using Headers = base::Value;
class ResourceTiming;
class Request;
class SignedCertificateTimestamp;
class SecurityDetails;
class Response;
class WebSocketRequest;
class WebSocketResponse;
class WebSocketFrame;
class CachedResource;
class Initiator;
class Cookie;
class CookieParam;
class AuthChallenge;
class AuthChallengeResponse;
class RequestPattern;
class SignedExchangeSignature;
class SignedExchangeHeader;
class SignedExchangeInfo;
class CanClearBrowserCacheParams;
class CanClearBrowserCacheResult;
class CanClearBrowserCookiesParams;
class CanClearBrowserCookiesResult;
class CanEmulateNetworkConditionsParams;
class CanEmulateNetworkConditionsResult;
class ClearBrowserCacheParams;
class ClearBrowserCacheResult;
class ClearBrowserCookiesParams;
class ClearBrowserCookiesResult;
class ContinueInterceptedRequestParams;
class ContinueInterceptedRequestResult;
class DeleteCookiesParams;
class DeleteCookiesResult;
class DisableParams;
class DisableResult;
class EmulateNetworkConditionsParams;
class EmulateNetworkConditionsResult;
class EnableParams;
class EnableResult;
class GetAllCookiesParams;
class GetAllCookiesResult;
class GetCertificateParams;
class GetCertificateResult;
class GetCookiesParams;
class GetCookiesResult;
class GetResponseBodyParams;
class GetResponseBodyResult;
class GetRequestPostDataParams;
class GetRequestPostDataResult;
class GetResponseBodyForInterceptionParams;
class GetResponseBodyForInterceptionResult;
class TakeResponseBodyForInterceptionAsStreamParams;
class TakeResponseBodyForInterceptionAsStreamResult;
class ReplayXHRParams;
class ReplayXHRResult;
class SearchInResponseBodyParams;
class SearchInResponseBodyResult;
class SetBlockedURLsParams;
class SetBlockedURLsResult;
class SetBypassServiceWorkerParams;
class SetBypassServiceWorkerResult;
class SetCacheDisabledParams;
class SetCacheDisabledResult;
class SetCookieParams;
class SetCookieResult;
class SetCookiesParams;
class SetCookiesResult;
class SetDataSizeLimitsForTestParams;
class SetDataSizeLimitsForTestResult;
class SetExtraHTTPHeadersParams;
class SetExtraHTTPHeadersResult;
class SetRequestInterceptionParams;
class SetRequestInterceptionResult;
class SetUserAgentOverrideParams;
class SetUserAgentOverrideResult;
class DataReceivedParams;
class EventSourceMessageReceivedParams;
class LoadingFailedParams;
class LoadingFinishedParams;
class RequestInterceptedParams;
class RequestServedFromCacheParams;
class RequestWillBeSentParams;
class ResourceChangedPriorityParams;
class SignedExchangeReceivedParams;
class ResponseReceivedParams;
class WebSocketClosedParams;
class WebSocketCreatedParams;
class WebSocketFrameErrorParams;
class WebSocketFrameReceivedParams;
class WebSocketFrameSentParams;
class WebSocketHandshakeResponseReceivedParams;
class WebSocketWillSendHandshakeRequestParams;

enum class ErrorReason {
  FAILED,
  ABORTED,
  TIMED_OUT,
  ACCESS_DENIED,
  CONNECTION_CLOSED,
  CONNECTION_RESET,
  CONNECTION_REFUSED,
  CONNECTION_ABORTED,
  CONNECTION_FAILED,
  NAME_NOT_RESOLVED,
  INTERNET_DISCONNECTED,
  ADDRESS_UNREACHABLE,
  BLOCKED_BY_CLIENT,
  BLOCKED_BY_RESPONSE
};

enum class ConnectionType {
  NONE,
  CELLULAR2G,
  CELLULAR3G,
  CELLULAR4G,
  BLUETOOTH,
  ETHERNET,
  WIFI,
  WIMAX,
  OTHER
};

enum class CookieSameSite {
  EXACT,
  LAX
};

enum class ResourcePriority {
  VERY_LOW,
  LOW,
  MEDIUM,
  HIGH,
  VERY_HIGH
};

enum class CertificateTransparencyCompliance {
  UNKNOWN,
  NOT_COMPLIANT,
  COMPLIANT
};

enum class BlockedReason {
  OTHER,
  CSP,
  MIXED_CONTENT,
  ORIGIN,
  INSPECTOR,
  SUBRESOURCE_FILTER,
  CONTENT_TYPE
};

enum class InterceptionStage {
  REQUEST,
  HEADERS_RECEIVED
};

enum class RequestReferrerPolicy {
  UNSAFE_URL,
  NO_REFERRER_WHEN_DOWNGRADE,
  NO_REFERRER,
  ORIGIN,
  ORIGIN_WHEN_CROSS_ORIGIN,
  SAME_ORIGIN,
  STRICT_ORIGIN,
  STRICT_ORIGIN_WHEN_CROSS_ORIGIN
};

enum class InitiatorType {
  PARSER,
  SCRIPT,
  PRELOAD,
  SIGNED_EXCHANGE,
  OTHER
};

enum class AuthChallengeSource {
  SERVER,
  PROXY
};

enum class AuthChallengeResponseResponse {
  DEFAULT,
  CANCEL_AUTH,
  PROVIDE_CREDENTIALS
};

}  // namespace network

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_NETWORK_H_
