// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_NETWORK_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_NETWORK_H_

#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {




template <>
struct FromValue<network::ErrorReason> {
  static network::ErrorReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ErrorReason::FAILED;
    }
    if (value.GetString() == "Failed")
      return network::ErrorReason::FAILED;
    if (value.GetString() == "Aborted")
      return network::ErrorReason::ABORTED;
    if (value.GetString() == "TimedOut")
      return network::ErrorReason::TIMED_OUT;
    if (value.GetString() == "AccessDenied")
      return network::ErrorReason::ACCESS_DENIED;
    if (value.GetString() == "ConnectionClosed")
      return network::ErrorReason::CONNECTION_CLOSED;
    if (value.GetString() == "ConnectionReset")
      return network::ErrorReason::CONNECTION_RESET;
    if (value.GetString() == "ConnectionRefused")
      return network::ErrorReason::CONNECTION_REFUSED;
    if (value.GetString() == "ConnectionAborted")
      return network::ErrorReason::CONNECTION_ABORTED;
    if (value.GetString() == "ConnectionFailed")
      return network::ErrorReason::CONNECTION_FAILED;
    if (value.GetString() == "NameNotResolved")
      return network::ErrorReason::NAME_NOT_RESOLVED;
    if (value.GetString() == "InternetDisconnected")
      return network::ErrorReason::INTERNET_DISCONNECTED;
    if (value.GetString() == "AddressUnreachable")
      return network::ErrorReason::ADDRESS_UNREACHABLE;
    if (value.GetString() == "BlockedByClient")
      return network::ErrorReason::BLOCKED_BY_CLIENT;
    if (value.GetString() == "BlockedByResponse")
      return network::ErrorReason::BLOCKED_BY_RESPONSE;
    errors->AddError("invalid enum value");
    return network::ErrorReason::FAILED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ErrorReason& value, T*) {
  switch (value) {
    case network::ErrorReason::FAILED:
      return std::make_unique<base::Value>("Failed");
    case network::ErrorReason::ABORTED:
      return std::make_unique<base::Value>("Aborted");
    case network::ErrorReason::TIMED_OUT:
      return std::make_unique<base::Value>("TimedOut");
    case network::ErrorReason::ACCESS_DENIED:
      return std::make_unique<base::Value>("AccessDenied");
    case network::ErrorReason::CONNECTION_CLOSED:
      return std::make_unique<base::Value>("ConnectionClosed");
    case network::ErrorReason::CONNECTION_RESET:
      return std::make_unique<base::Value>("ConnectionReset");
    case network::ErrorReason::CONNECTION_REFUSED:
      return std::make_unique<base::Value>("ConnectionRefused");
    case network::ErrorReason::CONNECTION_ABORTED:
      return std::make_unique<base::Value>("ConnectionAborted");
    case network::ErrorReason::CONNECTION_FAILED:
      return std::make_unique<base::Value>("ConnectionFailed");
    case network::ErrorReason::NAME_NOT_RESOLVED:
      return std::make_unique<base::Value>("NameNotResolved");
    case network::ErrorReason::INTERNET_DISCONNECTED:
      return std::make_unique<base::Value>("InternetDisconnected");
    case network::ErrorReason::ADDRESS_UNREACHABLE:
      return std::make_unique<base::Value>("AddressUnreachable");
    case network::ErrorReason::BLOCKED_BY_CLIENT:
      return std::make_unique<base::Value>("BlockedByClient");
    case network::ErrorReason::BLOCKED_BY_RESPONSE:
      return std::make_unique<base::Value>("BlockedByResponse");
  };
  NOTREACHED();
  return nullptr;
}



template <>
struct FromValue<network::ConnectionType> {
  static network::ConnectionType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ConnectionType::NONE;
    }
    if (value.GetString() == "none")
      return network::ConnectionType::NONE;
    if (value.GetString() == "cellular2g")
      return network::ConnectionType::CELLULAR2G;
    if (value.GetString() == "cellular3g")
      return network::ConnectionType::CELLULAR3G;
    if (value.GetString() == "cellular4g")
      return network::ConnectionType::CELLULAR4G;
    if (value.GetString() == "bluetooth")
      return network::ConnectionType::BLUETOOTH;
    if (value.GetString() == "ethernet")
      return network::ConnectionType::ETHERNET;
    if (value.GetString() == "wifi")
      return network::ConnectionType::WIFI;
    if (value.GetString() == "wimax")
      return network::ConnectionType::WIMAX;
    if (value.GetString() == "other")
      return network::ConnectionType::OTHER;
    errors->AddError("invalid enum value");
    return network::ConnectionType::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ConnectionType& value, T*) {
  switch (value) {
    case network::ConnectionType::NONE:
      return std::make_unique<base::Value>("none");
    case network::ConnectionType::CELLULAR2G:
      return std::make_unique<base::Value>("cellular2g");
    case network::ConnectionType::CELLULAR3G:
      return std::make_unique<base::Value>("cellular3g");
    case network::ConnectionType::CELLULAR4G:
      return std::make_unique<base::Value>("cellular4g");
    case network::ConnectionType::BLUETOOTH:
      return std::make_unique<base::Value>("bluetooth");
    case network::ConnectionType::ETHERNET:
      return std::make_unique<base::Value>("ethernet");
    case network::ConnectionType::WIFI:
      return std::make_unique<base::Value>("wifi");
    case network::ConnectionType::WIMAX:
      return std::make_unique<base::Value>("wimax");
    case network::ConnectionType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::CookieSameSite> {
  static network::CookieSameSite Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CookieSameSite::EXACT;
    }
    if (value.GetString() == "Strict")
      return network::CookieSameSite::EXACT;
    if (value.GetString() == "Lax")
      return network::CookieSameSite::LAX;
    errors->AddError("invalid enum value");
    return network::CookieSameSite::EXACT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookieSameSite& value, T*) {
  switch (value) {
    case network::CookieSameSite::EXACT:
      return std::make_unique<base::Value>("Strict");
    case network::CookieSameSite::LAX:
      return std::make_unique<base::Value>("Lax");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::ResourceTiming> {
  static std::unique_ptr<network::ResourceTiming> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResourceTiming::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourceTiming& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::ResourcePriority> {
  static network::ResourcePriority Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ResourcePriority::VERY_LOW;
    }
    if (value.GetString() == "VeryLow")
      return network::ResourcePriority::VERY_LOW;
    if (value.GetString() == "Low")
      return network::ResourcePriority::LOW;
    if (value.GetString() == "Medium")
      return network::ResourcePriority::MEDIUM;
    if (value.GetString() == "High")
      return network::ResourcePriority::HIGH;
    if (value.GetString() == "VeryHigh")
      return network::ResourcePriority::VERY_HIGH;
    errors->AddError("invalid enum value");
    return network::ResourcePriority::VERY_LOW;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourcePriority& value, T*) {
  switch (value) {
    case network::ResourcePriority::VERY_LOW:
      return std::make_unique<base::Value>("VeryLow");
    case network::ResourcePriority::LOW:
      return std::make_unique<base::Value>("Low");
    case network::ResourcePriority::MEDIUM:
      return std::make_unique<base::Value>("Medium");
    case network::ResourcePriority::HIGH:
      return std::make_unique<base::Value>("High");
    case network::ResourcePriority::VERY_HIGH:
      return std::make_unique<base::Value>("VeryHigh");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::Request> {
  static std::unique_ptr<network::Request> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Request::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Request& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedCertificateTimestamp> {
  static std::unique_ptr<network::SignedCertificateTimestamp> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedCertificateTimestamp::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedCertificateTimestamp& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SecurityDetails> {
  static std::unique_ptr<network::SecurityDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SecurityDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SecurityDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::CertificateTransparencyCompliance> {
  static network::CertificateTransparencyCompliance Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CertificateTransparencyCompliance::UNKNOWN;
    }
    if (value.GetString() == "unknown")
      return network::CertificateTransparencyCompliance::UNKNOWN;
    if (value.GetString() == "not-compliant")
      return network::CertificateTransparencyCompliance::NOT_COMPLIANT;
    if (value.GetString() == "compliant")
      return network::CertificateTransparencyCompliance::COMPLIANT;
    errors->AddError("invalid enum value");
    return network::CertificateTransparencyCompliance::UNKNOWN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CertificateTransparencyCompliance& value, T*) {
  switch (value) {
    case network::CertificateTransparencyCompliance::UNKNOWN:
      return std::make_unique<base::Value>("unknown");
    case network::CertificateTransparencyCompliance::NOT_COMPLIANT:
      return std::make_unique<base::Value>("not-compliant");
    case network::CertificateTransparencyCompliance::COMPLIANT:
      return std::make_unique<base::Value>("compliant");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::BlockedReason> {
  static network::BlockedReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::BlockedReason::OTHER;
    }
    if (value.GetString() == "other")
      return network::BlockedReason::OTHER;
    if (value.GetString() == "csp")
      return network::BlockedReason::CSP;
    if (value.GetString() == "mixed-content")
      return network::BlockedReason::MIXED_CONTENT;
    if (value.GetString() == "origin")
      return network::BlockedReason::ORIGIN;
    if (value.GetString() == "inspector")
      return network::BlockedReason::INSPECTOR;
    if (value.GetString() == "subresource-filter")
      return network::BlockedReason::SUBRESOURCE_FILTER;
    if (value.GetString() == "content-type")
      return network::BlockedReason::CONTENT_TYPE;
    errors->AddError("invalid enum value");
    return network::BlockedReason::OTHER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::BlockedReason& value, T*) {
  switch (value) {
    case network::BlockedReason::OTHER:
      return std::make_unique<base::Value>("other");
    case network::BlockedReason::CSP:
      return std::make_unique<base::Value>("csp");
    case network::BlockedReason::MIXED_CONTENT:
      return std::make_unique<base::Value>("mixed-content");
    case network::BlockedReason::ORIGIN:
      return std::make_unique<base::Value>("origin");
    case network::BlockedReason::INSPECTOR:
      return std::make_unique<base::Value>("inspector");
    case network::BlockedReason::SUBRESOURCE_FILTER:
      return std::make_unique<base::Value>("subresource-filter");
    case network::BlockedReason::CONTENT_TYPE:
      return std::make_unique<base::Value>("content-type");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::Response> {
  static std::unique_ptr<network::Response> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Response::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Response& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketRequest> {
  static std::unique_ptr<network::WebSocketRequest> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketRequest::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketRequest& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketResponse> {
  static std::unique_ptr<network::WebSocketResponse> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketResponse::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketResponse& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrame> {
  static std::unique_ptr<network::WebSocketFrame> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrame::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrame& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CachedResource> {
  static std::unique_ptr<network::CachedResource> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CachedResource::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CachedResource& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::Initiator> {
  static std::unique_ptr<network::Initiator> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Initiator::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Initiator& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::Cookie> {
  static std::unique_ptr<network::Cookie> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Cookie::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Cookie& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CookieParam> {
  static std::unique_ptr<network::CookieParam> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CookieParam::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookieParam& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::AuthChallenge> {
  static std::unique_ptr<network::AuthChallenge> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::AuthChallenge::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallenge& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::AuthChallengeResponse> {
  static std::unique_ptr<network::AuthChallengeResponse> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::AuthChallengeResponse::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallengeResponse& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::InterceptionStage> {
  static network::InterceptionStage Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::InterceptionStage::REQUEST;
    }
    if (value.GetString() == "Request")
      return network::InterceptionStage::REQUEST;
    if (value.GetString() == "HeadersReceived")
      return network::InterceptionStage::HEADERS_RECEIVED;
    errors->AddError("invalid enum value");
    return network::InterceptionStage::REQUEST;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::InterceptionStage& value, T*) {
  switch (value) {
    case network::InterceptionStage::REQUEST:
      return std::make_unique<base::Value>("Request");
    case network::InterceptionStage::HEADERS_RECEIVED:
      return std::make_unique<base::Value>("HeadersReceived");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::RequestPattern> {
  static std::unique_ptr<network::RequestPattern> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestPattern::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestPattern& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeSignature> {
  static std::unique_ptr<network::SignedExchangeSignature> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeSignature::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeSignature& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeHeader> {
  static std::unique_ptr<network::SignedExchangeHeader> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeHeader::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeHeader& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeInfo> {
  static std::unique_ptr<network::SignedExchangeInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeInfo& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::RequestReferrerPolicy> {
  static network::RequestReferrerPolicy Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::RequestReferrerPolicy::UNSAFE_URL;
    }
    if (value.GetString() == "unsafe-url")
      return network::RequestReferrerPolicy::UNSAFE_URL;
    if (value.GetString() == "no-referrer-when-downgrade")
      return network::RequestReferrerPolicy::NO_REFERRER_WHEN_DOWNGRADE;
    if (value.GetString() == "no-referrer")
      return network::RequestReferrerPolicy::NO_REFERRER;
    if (value.GetString() == "origin")
      return network::RequestReferrerPolicy::ORIGIN;
    if (value.GetString() == "origin-when-cross-origin")
      return network::RequestReferrerPolicy::ORIGIN_WHEN_CROSS_ORIGIN;
    if (value.GetString() == "same-origin")
      return network::RequestReferrerPolicy::SAME_ORIGIN;
    if (value.GetString() == "strict-origin")
      return network::RequestReferrerPolicy::STRICT_ORIGIN;
    if (value.GetString() == "strict-origin-when-cross-origin")
      return network::RequestReferrerPolicy::STRICT_ORIGIN_WHEN_CROSS_ORIGIN;
    errors->AddError("invalid enum value");
    return network::RequestReferrerPolicy::UNSAFE_URL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestReferrerPolicy& value, T*) {
  switch (value) {
    case network::RequestReferrerPolicy::UNSAFE_URL:
      return std::make_unique<base::Value>("unsafe-url");
    case network::RequestReferrerPolicy::NO_REFERRER_WHEN_DOWNGRADE:
      return std::make_unique<base::Value>("no-referrer-when-downgrade");
    case network::RequestReferrerPolicy::NO_REFERRER:
      return std::make_unique<base::Value>("no-referrer");
    case network::RequestReferrerPolicy::ORIGIN:
      return std::make_unique<base::Value>("origin");
    case network::RequestReferrerPolicy::ORIGIN_WHEN_CROSS_ORIGIN:
      return std::make_unique<base::Value>("origin-when-cross-origin");
    case network::RequestReferrerPolicy::SAME_ORIGIN:
      return std::make_unique<base::Value>("same-origin");
    case network::RequestReferrerPolicy::STRICT_ORIGIN:
      return std::make_unique<base::Value>("strict-origin");
    case network::RequestReferrerPolicy::STRICT_ORIGIN_WHEN_CROSS_ORIGIN:
      return std::make_unique<base::Value>("strict-origin-when-cross-origin");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::InitiatorType> {
  static network::InitiatorType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::InitiatorType::PARSER;
    }
    if (value.GetString() == "parser")
      return network::InitiatorType::PARSER;
    if (value.GetString() == "script")
      return network::InitiatorType::SCRIPT;
    if (value.GetString() == "preload")
      return network::InitiatorType::PRELOAD;
    if (value.GetString() == "SignedExchange")
      return network::InitiatorType::SIGNED_EXCHANGE;
    if (value.GetString() == "other")
      return network::InitiatorType::OTHER;
    errors->AddError("invalid enum value");
    return network::InitiatorType::PARSER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::InitiatorType& value, T*) {
  switch (value) {
    case network::InitiatorType::PARSER:
      return std::make_unique<base::Value>("parser");
    case network::InitiatorType::SCRIPT:
      return std::make_unique<base::Value>("script");
    case network::InitiatorType::PRELOAD:
      return std::make_unique<base::Value>("preload");
    case network::InitiatorType::SIGNED_EXCHANGE:
      return std::make_unique<base::Value>("SignedExchange");
    case network::InitiatorType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::AuthChallengeSource> {
  static network::AuthChallengeSource Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::AuthChallengeSource::SERVER;
    }
    if (value.GetString() == "Server")
      return network::AuthChallengeSource::SERVER;
    if (value.GetString() == "Proxy")
      return network::AuthChallengeSource::PROXY;
    errors->AddError("invalid enum value");
    return network::AuthChallengeSource::SERVER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallengeSource& value, T*) {
  switch (value) {
    case network::AuthChallengeSource::SERVER:
      return std::make_unique<base::Value>("Server");
    case network::AuthChallengeSource::PROXY:
      return std::make_unique<base::Value>("Proxy");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::AuthChallengeResponseResponse> {
  static network::AuthChallengeResponseResponse Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::AuthChallengeResponseResponse::DEFAULT;
    }
    if (value.GetString() == "Default")
      return network::AuthChallengeResponseResponse::DEFAULT;
    if (value.GetString() == "CancelAuth")
      return network::AuthChallengeResponseResponse::CANCEL_AUTH;
    if (value.GetString() == "ProvideCredentials")
      return network::AuthChallengeResponseResponse::PROVIDE_CREDENTIALS;
    errors->AddError("invalid enum value");
    return network::AuthChallengeResponseResponse::DEFAULT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallengeResponseResponse& value, T*) {
  switch (value) {
    case network::AuthChallengeResponseResponse::DEFAULT:
      return std::make_unique<base::Value>("Default");
    case network::AuthChallengeResponseResponse::CANCEL_AUTH:
      return std::make_unique<base::Value>("CancelAuth");
    case network::AuthChallengeResponseResponse::PROVIDE_CREDENTIALS:
      return std::make_unique<base::Value>("ProvideCredentials");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::CanClearBrowserCacheParams> {
  static std::unique_ptr<network::CanClearBrowserCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCacheResult> {
  static std::unique_ptr<network::CanClearBrowserCacheResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCacheResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCacheResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCookiesParams> {
  static std::unique_ptr<network::CanClearBrowserCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCookiesResult> {
  static std::unique_ptr<network::CanClearBrowserCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanEmulateNetworkConditionsParams> {
  static std::unique_ptr<network::CanEmulateNetworkConditionsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanEmulateNetworkConditionsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanEmulateNetworkConditionsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanEmulateNetworkConditionsResult> {
  static std::unique_ptr<network::CanEmulateNetworkConditionsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanEmulateNetworkConditionsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanEmulateNetworkConditionsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCacheParams> {
  static std::unique_ptr<network::ClearBrowserCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCacheResult> {
  static std::unique_ptr<network::ClearBrowserCacheResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCacheResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCacheResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCookiesParams> {
  static std::unique_ptr<network::ClearBrowserCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCookiesResult> {
  static std::unique_ptr<network::ClearBrowserCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ContinueInterceptedRequestParams> {
  static std::unique_ptr<network::ContinueInterceptedRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ContinueInterceptedRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ContinueInterceptedRequestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ContinueInterceptedRequestResult> {
  static std::unique_ptr<network::ContinueInterceptedRequestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ContinueInterceptedRequestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ContinueInterceptedRequestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DeleteCookiesParams> {
  static std::unique_ptr<network::DeleteCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DeleteCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DeleteCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DeleteCookiesResult> {
  static std::unique_ptr<network::DeleteCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DeleteCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DeleteCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DisableParams> {
  static std::unique_ptr<network::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DisableResult> {
  static std::unique_ptr<network::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EmulateNetworkConditionsParams> {
  static std::unique_ptr<network::EmulateNetworkConditionsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EmulateNetworkConditionsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EmulateNetworkConditionsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EmulateNetworkConditionsResult> {
  static std::unique_ptr<network::EmulateNetworkConditionsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EmulateNetworkConditionsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EmulateNetworkConditionsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EnableParams> {
  static std::unique_ptr<network::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EnableResult> {
  static std::unique_ptr<network::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetAllCookiesParams> {
  static std::unique_ptr<network::GetAllCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetAllCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetAllCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetAllCookiesResult> {
  static std::unique_ptr<network::GetAllCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetAllCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetAllCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCertificateParams> {
  static std::unique_ptr<network::GetCertificateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCertificateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCertificateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCertificateResult> {
  static std::unique_ptr<network::GetCertificateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCertificateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCertificateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCookiesParams> {
  static std::unique_ptr<network::GetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCookiesResult> {
  static std::unique_ptr<network::GetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyParams> {
  static std::unique_ptr<network::GetResponseBodyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyResult> {
  static std::unique_ptr<network::GetResponseBodyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetRequestPostDataParams> {
  static std::unique_ptr<network::GetRequestPostDataParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetRequestPostDataParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetRequestPostDataParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetRequestPostDataResult> {
  static std::unique_ptr<network::GetRequestPostDataResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetRequestPostDataResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetRequestPostDataResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyForInterceptionParams> {
  static std::unique_ptr<network::GetResponseBodyForInterceptionParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyForInterceptionParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyForInterceptionParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyForInterceptionResult> {
  static std::unique_ptr<network::GetResponseBodyForInterceptionResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyForInterceptionResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyForInterceptionResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::TakeResponseBodyForInterceptionAsStreamParams> {
  static std::unique_ptr<network::TakeResponseBodyForInterceptionAsStreamParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::TakeResponseBodyForInterceptionAsStreamParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TakeResponseBodyForInterceptionAsStreamParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::TakeResponseBodyForInterceptionAsStreamResult> {
  static std::unique_ptr<network::TakeResponseBodyForInterceptionAsStreamResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::TakeResponseBodyForInterceptionAsStreamResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TakeResponseBodyForInterceptionAsStreamResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReplayXHRParams> {
  static std::unique_ptr<network::ReplayXHRParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReplayXHRParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReplayXHRParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReplayXHRResult> {
  static std::unique_ptr<network::ReplayXHRResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReplayXHRResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReplayXHRResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SearchInResponseBodyParams> {
  static std::unique_ptr<network::SearchInResponseBodyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SearchInResponseBodyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SearchInResponseBodyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SearchInResponseBodyResult> {
  static std::unique_ptr<network::SearchInResponseBodyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SearchInResponseBodyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SearchInResponseBodyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBlockedURLsParams> {
  static std::unique_ptr<network::SetBlockedURLsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBlockedURLsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBlockedURLsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBlockedURLsResult> {
  static std::unique_ptr<network::SetBlockedURLsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBlockedURLsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBlockedURLsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBypassServiceWorkerParams> {
  static std::unique_ptr<network::SetBypassServiceWorkerParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBypassServiceWorkerParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBypassServiceWorkerParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBypassServiceWorkerResult> {
  static std::unique_ptr<network::SetBypassServiceWorkerResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBypassServiceWorkerResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBypassServiceWorkerResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCacheDisabledParams> {
  static std::unique_ptr<network::SetCacheDisabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCacheDisabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCacheDisabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCacheDisabledResult> {
  static std::unique_ptr<network::SetCacheDisabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCacheDisabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCacheDisabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookieParams> {
  static std::unique_ptr<network::SetCookieParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookieParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookieParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookieResult> {
  static std::unique_ptr<network::SetCookieResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookieResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookieResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookiesParams> {
  static std::unique_ptr<network::SetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookiesResult> {
  static std::unique_ptr<network::SetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetDataSizeLimitsForTestParams> {
  static std::unique_ptr<network::SetDataSizeLimitsForTestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetDataSizeLimitsForTestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetDataSizeLimitsForTestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetDataSizeLimitsForTestResult> {
  static std::unique_ptr<network::SetDataSizeLimitsForTestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetDataSizeLimitsForTestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetDataSizeLimitsForTestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetExtraHTTPHeadersParams> {
  static std::unique_ptr<network::SetExtraHTTPHeadersParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetExtraHTTPHeadersParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetExtraHTTPHeadersParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetExtraHTTPHeadersResult> {
  static std::unique_ptr<network::SetExtraHTTPHeadersResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetExtraHTTPHeadersResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetExtraHTTPHeadersResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetRequestInterceptionParams> {
  static std::unique_ptr<network::SetRequestInterceptionParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetRequestInterceptionParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetRequestInterceptionParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetRequestInterceptionResult> {
  static std::unique_ptr<network::SetRequestInterceptionResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetRequestInterceptionResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetRequestInterceptionResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetUserAgentOverrideParams> {
  static std::unique_ptr<network::SetUserAgentOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetUserAgentOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetUserAgentOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetUserAgentOverrideResult> {
  static std::unique_ptr<network::SetUserAgentOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetUserAgentOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetUserAgentOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DataReceivedParams> {
  static std::unique_ptr<network::DataReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DataReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DataReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EventSourceMessageReceivedParams> {
  static std::unique_ptr<network::EventSourceMessageReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EventSourceMessageReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EventSourceMessageReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadingFailedParams> {
  static std::unique_ptr<network::LoadingFailedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadingFailedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadingFailedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadingFinishedParams> {
  static std::unique_ptr<network::LoadingFinishedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadingFinishedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadingFinishedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestInterceptedParams> {
  static std::unique_ptr<network::RequestInterceptedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestInterceptedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestInterceptedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestServedFromCacheParams> {
  static std::unique_ptr<network::RequestServedFromCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestServedFromCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestServedFromCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestWillBeSentParams> {
  static std::unique_ptr<network::RequestWillBeSentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestWillBeSentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestWillBeSentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ResourceChangedPriorityParams> {
  static std::unique_ptr<network::ResourceChangedPriorityParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResourceChangedPriorityParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourceChangedPriorityParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeReceivedParams> {
  static std::unique_ptr<network::SignedExchangeReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ResponseReceivedParams> {
  static std::unique_ptr<network::ResponseReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResponseReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResponseReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketClosedParams> {
  static std::unique_ptr<network::WebSocketClosedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketClosedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketClosedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketCreatedParams> {
  static std::unique_ptr<network::WebSocketCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrameErrorParams> {
  static std::unique_ptr<network::WebSocketFrameErrorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrameErrorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrameErrorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrameReceivedParams> {
  static std::unique_ptr<network::WebSocketFrameReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrameReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrameReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrameSentParams> {
  static std::unique_ptr<network::WebSocketFrameSentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrameSentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrameSentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketHandshakeResponseReceivedParams> {
  static std::unique_ptr<network::WebSocketHandshakeResponseReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketHandshakeResponseReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketHandshakeResponseReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketWillSendHandshakeRequestParams> {
  static std::unique_ptr<network::WebSocketWillSendHandshakeRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketWillSendHandshakeRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketWillSendHandshakeRequestParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_NETWORK_H_
