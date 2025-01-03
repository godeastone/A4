// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/network.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Network {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Network";
const char Metainfo::commandPrefix[] = "Network.";
const char Metainfo::version[] = "1.3";

namespace ErrorReasonEnum {
const char Failed[] = "Failed";
const char Aborted[] = "Aborted";
const char TimedOut[] = "TimedOut";
const char AccessDenied[] = "AccessDenied";
const char ConnectionClosed[] = "ConnectionClosed";
const char ConnectionReset[] = "ConnectionReset";
const char ConnectionRefused[] = "ConnectionRefused";
const char ConnectionAborted[] = "ConnectionAborted";
const char ConnectionFailed[] = "ConnectionFailed";
const char NameNotResolved[] = "NameNotResolved";
const char InternetDisconnected[] = "InternetDisconnected";
const char AddressUnreachable[] = "AddressUnreachable";
const char BlockedByClient[] = "BlockedByClient";
const char BlockedByResponse[] = "BlockedByResponse";
} // namespace ErrorReasonEnum

namespace ConnectionTypeEnum {
const char None[] = "none";
const char Cellular2g[] = "cellular2g";
const char Cellular3g[] = "cellular3g";
const char Cellular4g[] = "cellular4g";
const char Bluetooth[] = "bluetooth";
const char Ethernet[] = "ethernet";
const char Wifi[] = "wifi";
const char Wimax[] = "wimax";
const char Other[] = "other";
} // namespace ConnectionTypeEnum

namespace CookieSameSiteEnum {
const char Strict[] = "Strict";
const char Lax[] = "Lax";
} // namespace CookieSameSiteEnum

std::unique_ptr<ResourceTiming> ResourceTiming::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ResourceTiming> result(new ResourceTiming());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestTimeValue = object->get("requestTime");
    errors->setName("requestTime");
    result->m_requestTime = ValueConversions<double>::fromValue(requestTimeValue, errors);
    protocol::Value* proxyStartValue = object->get("proxyStart");
    errors->setName("proxyStart");
    result->m_proxyStart = ValueConversions<double>::fromValue(proxyStartValue, errors);
    protocol::Value* proxyEndValue = object->get("proxyEnd");
    errors->setName("proxyEnd");
    result->m_proxyEnd = ValueConversions<double>::fromValue(proxyEndValue, errors);
    protocol::Value* dnsStartValue = object->get("dnsStart");
    errors->setName("dnsStart");
    result->m_dnsStart = ValueConversions<double>::fromValue(dnsStartValue, errors);
    protocol::Value* dnsEndValue = object->get("dnsEnd");
    errors->setName("dnsEnd");
    result->m_dnsEnd = ValueConversions<double>::fromValue(dnsEndValue, errors);
    protocol::Value* connectStartValue = object->get("connectStart");
    errors->setName("connectStart");
    result->m_connectStart = ValueConversions<double>::fromValue(connectStartValue, errors);
    protocol::Value* connectEndValue = object->get("connectEnd");
    errors->setName("connectEnd");
    result->m_connectEnd = ValueConversions<double>::fromValue(connectEndValue, errors);
    protocol::Value* sslStartValue = object->get("sslStart");
    errors->setName("sslStart");
    result->m_sslStart = ValueConversions<double>::fromValue(sslStartValue, errors);
    protocol::Value* sslEndValue = object->get("sslEnd");
    errors->setName("sslEnd");
    result->m_sslEnd = ValueConversions<double>::fromValue(sslEndValue, errors);
    protocol::Value* workerStartValue = object->get("workerStart");
    errors->setName("workerStart");
    result->m_workerStart = ValueConversions<double>::fromValue(workerStartValue, errors);
    protocol::Value* workerReadyValue = object->get("workerReady");
    errors->setName("workerReady");
    result->m_workerReady = ValueConversions<double>::fromValue(workerReadyValue, errors);
    protocol::Value* sendStartValue = object->get("sendStart");
    errors->setName("sendStart");
    result->m_sendStart = ValueConversions<double>::fromValue(sendStartValue, errors);
    protocol::Value* sendEndValue = object->get("sendEnd");
    errors->setName("sendEnd");
    result->m_sendEnd = ValueConversions<double>::fromValue(sendEndValue, errors);
    protocol::Value* pushStartValue = object->get("pushStart");
    errors->setName("pushStart");
    result->m_pushStart = ValueConversions<double>::fromValue(pushStartValue, errors);
    protocol::Value* pushEndValue = object->get("pushEnd");
    errors->setName("pushEnd");
    result->m_pushEnd = ValueConversions<double>::fromValue(pushEndValue, errors);
    protocol::Value* receiveHeadersEndValue = object->get("receiveHeadersEnd");
    errors->setName("receiveHeadersEnd");
    result->m_receiveHeadersEnd = ValueConversions<double>::fromValue(receiveHeadersEndValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ResourceTiming::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestTime", ValueConversions<double>::toValue(m_requestTime));
    result->setValue("proxyStart", ValueConversions<double>::toValue(m_proxyStart));
    result->setValue("proxyEnd", ValueConversions<double>::toValue(m_proxyEnd));
    result->setValue("dnsStart", ValueConversions<double>::toValue(m_dnsStart));
    result->setValue("dnsEnd", ValueConversions<double>::toValue(m_dnsEnd));
    result->setValue("connectStart", ValueConversions<double>::toValue(m_connectStart));
    result->setValue("connectEnd", ValueConversions<double>::toValue(m_connectEnd));
    result->setValue("sslStart", ValueConversions<double>::toValue(m_sslStart));
    result->setValue("sslEnd", ValueConversions<double>::toValue(m_sslEnd));
    result->setValue("workerStart", ValueConversions<double>::toValue(m_workerStart));
    result->setValue("workerReady", ValueConversions<double>::toValue(m_workerReady));
    result->setValue("sendStart", ValueConversions<double>::toValue(m_sendStart));
    result->setValue("sendEnd", ValueConversions<double>::toValue(m_sendEnd));
    result->setValue("pushStart", ValueConversions<double>::toValue(m_pushStart));
    result->setValue("pushEnd", ValueConversions<double>::toValue(m_pushEnd));
    result->setValue("receiveHeadersEnd", ValueConversions<double>::toValue(m_receiveHeadersEnd));
    return result;
}

std::unique_ptr<ResourceTiming> ResourceTiming::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace ResourcePriorityEnum {
const char VeryLow[] = "VeryLow";
const char Low[] = "Low";
const char Medium[] = "Medium";
const char High[] = "High";
const char VeryHigh[] = "VeryHigh";
} // namespace ResourcePriorityEnum

const char* Request::ReferrerPolicyEnum::UnsafeUrl = "unsafe-url";
const char* Request::ReferrerPolicyEnum::NoReferrerWhenDowngrade = "no-referrer-when-downgrade";
const char* Request::ReferrerPolicyEnum::NoReferrer = "no-referrer";
const char* Request::ReferrerPolicyEnum::Origin = "origin";
const char* Request::ReferrerPolicyEnum::OriginWhenCrossOrigin = "origin-when-cross-origin";
const char* Request::ReferrerPolicyEnum::SameOrigin = "same-origin";
const char* Request::ReferrerPolicyEnum::StrictOrigin = "strict-origin";
const char* Request::ReferrerPolicyEnum::StrictOriginWhenCrossOrigin = "strict-origin-when-cross-origin";

std::unique_ptr<Request> Request::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Request> result(new Request());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* methodValue = object->get("method");
    errors->setName("method");
    result->m_method = ValueConversions<String>::fromValue(methodValue, errors);
    protocol::Value* headersValue = object->get("headers");
    errors->setName("headers");
    result->m_headers = ValueConversions<protocol::Network::Headers>::fromValue(headersValue, errors);
    protocol::Value* postDataValue = object->get("postData");
    if (postDataValue) {
        errors->setName("postData");
        result->m_postData = ValueConversions<String>::fromValue(postDataValue, errors);
    }
    protocol::Value* hasPostDataValue = object->get("hasPostData");
    if (hasPostDataValue) {
        errors->setName("hasPostData");
        result->m_hasPostData = ValueConversions<bool>::fromValue(hasPostDataValue, errors);
    }
    protocol::Value* mixedContentTypeValue = object->get("mixedContentType");
    if (mixedContentTypeValue) {
        errors->setName("mixedContentType");
        result->m_mixedContentType = ValueConversions<String>::fromValue(mixedContentTypeValue, errors);
    }
    protocol::Value* initialPriorityValue = object->get("initialPriority");
    errors->setName("initialPriority");
    result->m_initialPriority = ValueConversions<String>::fromValue(initialPriorityValue, errors);
    protocol::Value* referrerPolicyValue = object->get("referrerPolicy");
    errors->setName("referrerPolicy");
    result->m_referrerPolicy = ValueConversions<String>::fromValue(referrerPolicyValue, errors);
    protocol::Value* isLinkPreloadValue = object->get("isLinkPreload");
    if (isLinkPreloadValue) {
        errors->setName("isLinkPreload");
        result->m_isLinkPreload = ValueConversions<bool>::fromValue(isLinkPreloadValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Request::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("method", ValueConversions<String>::toValue(m_method));
    result->setValue("headers", ValueConversions<protocol::Network::Headers>::toValue(m_headers.get()));
    if (m_postData.isJust())
        result->setValue("postData", ValueConversions<String>::toValue(m_postData.fromJust()));
    if (m_hasPostData.isJust())
        result->setValue("hasPostData", ValueConversions<bool>::toValue(m_hasPostData.fromJust()));
    if (m_mixedContentType.isJust())
        result->setValue("mixedContentType", ValueConversions<String>::toValue(m_mixedContentType.fromJust()));
    result->setValue("initialPriority", ValueConversions<String>::toValue(m_initialPriority));
    result->setValue("referrerPolicy", ValueConversions<String>::toValue(m_referrerPolicy));
    if (m_isLinkPreload.isJust())
        result->setValue("isLinkPreload", ValueConversions<bool>::toValue(m_isLinkPreload.fromJust()));
    return result;
}

std::unique_ptr<Request> Request::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SignedCertificateTimestamp> SignedCertificateTimestamp::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SignedCertificateTimestamp> result(new SignedCertificateTimestamp());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<String>::fromValue(statusValue, errors);
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<String>::fromValue(originValue, errors);
    protocol::Value* logDescriptionValue = object->get("logDescription");
    errors->setName("logDescription");
    result->m_logDescription = ValueConversions<String>::fromValue(logDescriptionValue, errors);
    protocol::Value* logIdValue = object->get("logId");
    errors->setName("logId");
    result->m_logId = ValueConversions<String>::fromValue(logIdValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    protocol::Value* hashAlgorithmValue = object->get("hashAlgorithm");
    errors->setName("hashAlgorithm");
    result->m_hashAlgorithm = ValueConversions<String>::fromValue(hashAlgorithmValue, errors);
    protocol::Value* signatureAlgorithmValue = object->get("signatureAlgorithm");
    errors->setName("signatureAlgorithm");
    result->m_signatureAlgorithm = ValueConversions<String>::fromValue(signatureAlgorithmValue, errors);
    protocol::Value* signatureDataValue = object->get("signatureData");
    errors->setName("signatureData");
    result->m_signatureData = ValueConversions<String>::fromValue(signatureDataValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SignedCertificateTimestamp::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("status", ValueConversions<String>::toValue(m_status));
    result->setValue("origin", ValueConversions<String>::toValue(m_origin));
    result->setValue("logDescription", ValueConversions<String>::toValue(m_logDescription));
    result->setValue("logId", ValueConversions<String>::toValue(m_logId));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    result->setValue("hashAlgorithm", ValueConversions<String>::toValue(m_hashAlgorithm));
    result->setValue("signatureAlgorithm", ValueConversions<String>::toValue(m_signatureAlgorithm));
    result->setValue("signatureData", ValueConversions<String>::toValue(m_signatureData));
    return result;
}

std::unique_ptr<SignedCertificateTimestamp> SignedCertificateTimestamp::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SecurityDetails> SecurityDetails::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SecurityDetails> result(new SecurityDetails());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* protocolValue = object->get("protocol");
    errors->setName("protocol");
    result->m_protocol = ValueConversions<String>::fromValue(protocolValue, errors);
    protocol::Value* keyExchangeValue = object->get("keyExchange");
    errors->setName("keyExchange");
    result->m_keyExchange = ValueConversions<String>::fromValue(keyExchangeValue, errors);
    protocol::Value* keyExchangeGroupValue = object->get("keyExchangeGroup");
    if (keyExchangeGroupValue) {
        errors->setName("keyExchangeGroup");
        result->m_keyExchangeGroup = ValueConversions<String>::fromValue(keyExchangeGroupValue, errors);
    }
    protocol::Value* cipherValue = object->get("cipher");
    errors->setName("cipher");
    result->m_cipher = ValueConversions<String>::fromValue(cipherValue, errors);
    protocol::Value* macValue = object->get("mac");
    if (macValue) {
        errors->setName("mac");
        result->m_mac = ValueConversions<String>::fromValue(macValue, errors);
    }
    protocol::Value* certificateIdValue = object->get("certificateId");
    errors->setName("certificateId");
    result->m_certificateId = ValueConversions<int>::fromValue(certificateIdValue, errors);
    protocol::Value* subjectNameValue = object->get("subjectName");
    errors->setName("subjectName");
    result->m_subjectName = ValueConversions<String>::fromValue(subjectNameValue, errors);
    protocol::Value* sanListValue = object->get("sanList");
    errors->setName("sanList");
    result->m_sanList = ValueConversions<protocol::Array<String>>::fromValue(sanListValue, errors);
    protocol::Value* issuerValue = object->get("issuer");
    errors->setName("issuer");
    result->m_issuer = ValueConversions<String>::fromValue(issuerValue, errors);
    protocol::Value* validFromValue = object->get("validFrom");
    errors->setName("validFrom");
    result->m_validFrom = ValueConversions<double>::fromValue(validFromValue, errors);
    protocol::Value* validToValue = object->get("validTo");
    errors->setName("validTo");
    result->m_validTo = ValueConversions<double>::fromValue(validToValue, errors);
    protocol::Value* signedCertificateTimestampListValue = object->get("signedCertificateTimestampList");
    errors->setName("signedCertificateTimestampList");
    result->m_signedCertificateTimestampList = ValueConversions<protocol::Array<protocol::Network::SignedCertificateTimestamp>>::fromValue(signedCertificateTimestampListValue, errors);
    protocol::Value* certificateTransparencyComplianceValue = object->get("certificateTransparencyCompliance");
    errors->setName("certificateTransparencyCompliance");
    result->m_certificateTransparencyCompliance = ValueConversions<String>::fromValue(certificateTransparencyComplianceValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SecurityDetails::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("protocol", ValueConversions<String>::toValue(m_protocol));
    result->setValue("keyExchange", ValueConversions<String>::toValue(m_keyExchange));
    if (m_keyExchangeGroup.isJust())
        result->setValue("keyExchangeGroup", ValueConversions<String>::toValue(m_keyExchangeGroup.fromJust()));
    result->setValue("cipher", ValueConversions<String>::toValue(m_cipher));
    if (m_mac.isJust())
        result->setValue("mac", ValueConversions<String>::toValue(m_mac.fromJust()));
    result->setValue("certificateId", ValueConversions<int>::toValue(m_certificateId));
    result->setValue("subjectName", ValueConversions<String>::toValue(m_subjectName));
    result->setValue("sanList", ValueConversions<protocol::Array<String>>::toValue(m_sanList.get()));
    result->setValue("issuer", ValueConversions<String>::toValue(m_issuer));
    result->setValue("validFrom", ValueConversions<double>::toValue(m_validFrom));
    result->setValue("validTo", ValueConversions<double>::toValue(m_validTo));
    result->setValue("signedCertificateTimestampList", ValueConversions<protocol::Array<protocol::Network::SignedCertificateTimestamp>>::toValue(m_signedCertificateTimestampList.get()));
    result->setValue("certificateTransparencyCompliance", ValueConversions<String>::toValue(m_certificateTransparencyCompliance));
    return result;
}

std::unique_ptr<SecurityDetails> SecurityDetails::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace CertificateTransparencyComplianceEnum {
const char Unknown[] = "unknown";
const char NotCompliant[] = "not-compliant";
const char Compliant[] = "compliant";
} // namespace CertificateTransparencyComplianceEnum

namespace BlockedReasonEnum {
const char Other[] = "other";
const char Csp[] = "csp";
const char MixedContent[] = "mixed-content";
const char Origin[] = "origin";
const char Inspector[] = "inspector";
const char SubresourceFilter[] = "subresource-filter";
const char ContentType[] = "content-type";
} // namespace BlockedReasonEnum

std::unique_ptr<Response> Response::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Response> result(new Response());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<int>::fromValue(statusValue, errors);
    protocol::Value* statusTextValue = object->get("statusText");
    errors->setName("statusText");
    result->m_statusText = ValueConversions<String>::fromValue(statusTextValue, errors);
    protocol::Value* headersValue = object->get("headers");
    errors->setName("headers");
    result->m_headers = ValueConversions<protocol::Network::Headers>::fromValue(headersValue, errors);
    protocol::Value* headersTextValue = object->get("headersText");
    if (headersTextValue) {
        errors->setName("headersText");
        result->m_headersText = ValueConversions<String>::fromValue(headersTextValue, errors);
    }
    protocol::Value* mimeTypeValue = object->get("mimeType");
    errors->setName("mimeType");
    result->m_mimeType = ValueConversions<String>::fromValue(mimeTypeValue, errors);
    protocol::Value* requestHeadersValue = object->get("requestHeaders");
    if (requestHeadersValue) {
        errors->setName("requestHeaders");
        result->m_requestHeaders = ValueConversions<protocol::Network::Headers>::fromValue(requestHeadersValue, errors);
    }
    protocol::Value* requestHeadersTextValue = object->get("requestHeadersText");
    if (requestHeadersTextValue) {
        errors->setName("requestHeadersText");
        result->m_requestHeadersText = ValueConversions<String>::fromValue(requestHeadersTextValue, errors);
    }
    protocol::Value* connectionReusedValue = object->get("connectionReused");
    errors->setName("connectionReused");
    result->m_connectionReused = ValueConversions<bool>::fromValue(connectionReusedValue, errors);
    protocol::Value* connectionIdValue = object->get("connectionId");
    errors->setName("connectionId");
    result->m_connectionId = ValueConversions<double>::fromValue(connectionIdValue, errors);
    protocol::Value* remoteIPAddressValue = object->get("remoteIPAddress");
    if (remoteIPAddressValue) {
        errors->setName("remoteIPAddress");
        result->m_remoteIPAddress = ValueConversions<String>::fromValue(remoteIPAddressValue, errors);
    }
    protocol::Value* remotePortValue = object->get("remotePort");
    if (remotePortValue) {
        errors->setName("remotePort");
        result->m_remotePort = ValueConversions<int>::fromValue(remotePortValue, errors);
    }
    protocol::Value* fromDiskCacheValue = object->get("fromDiskCache");
    if (fromDiskCacheValue) {
        errors->setName("fromDiskCache");
        result->m_fromDiskCache = ValueConversions<bool>::fromValue(fromDiskCacheValue, errors);
    }
    protocol::Value* fromServiceWorkerValue = object->get("fromServiceWorker");
    if (fromServiceWorkerValue) {
        errors->setName("fromServiceWorker");
        result->m_fromServiceWorker = ValueConversions<bool>::fromValue(fromServiceWorkerValue, errors);
    }
    protocol::Value* encodedDataLengthValue = object->get("encodedDataLength");
    errors->setName("encodedDataLength");
    result->m_encodedDataLength = ValueConversions<double>::fromValue(encodedDataLengthValue, errors);
    protocol::Value* timingValue = object->get("timing");
    if (timingValue) {
        errors->setName("timing");
        result->m_timing = ValueConversions<protocol::Network::ResourceTiming>::fromValue(timingValue, errors);
    }
    protocol::Value* protocolValue = object->get("protocol");
    if (protocolValue) {
        errors->setName("protocol");
        result->m_protocol = ValueConversions<String>::fromValue(protocolValue, errors);
    }
    protocol::Value* securityStateValue = object->get("securityState");
    errors->setName("securityState");
    result->m_securityState = ValueConversions<String>::fromValue(securityStateValue, errors);
    protocol::Value* securityDetailsValue = object->get("securityDetails");
    if (securityDetailsValue) {
        errors->setName("securityDetails");
        result->m_securityDetails = ValueConversions<protocol::Network::SecurityDetails>::fromValue(securityDetailsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Response::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("status", ValueConversions<int>::toValue(m_status));
    result->setValue("statusText", ValueConversions<String>::toValue(m_statusText));
    result->setValue("headers", ValueConversions<protocol::Network::Headers>::toValue(m_headers.get()));
    if (m_headersText.isJust())
        result->setValue("headersText", ValueConversions<String>::toValue(m_headersText.fromJust()));
    result->setValue("mimeType", ValueConversions<String>::toValue(m_mimeType));
    if (m_requestHeaders.isJust())
        result->setValue("requestHeaders", ValueConversions<protocol::Network::Headers>::toValue(m_requestHeaders.fromJust()));
    if (m_requestHeadersText.isJust())
        result->setValue("requestHeadersText", ValueConversions<String>::toValue(m_requestHeadersText.fromJust()));
    result->setValue("connectionReused", ValueConversions<bool>::toValue(m_connectionReused));
    result->setValue("connectionId", ValueConversions<double>::toValue(m_connectionId));
    if (m_remoteIPAddress.isJust())
        result->setValue("remoteIPAddress", ValueConversions<String>::toValue(m_remoteIPAddress.fromJust()));
    if (m_remotePort.isJust())
        result->setValue("remotePort", ValueConversions<int>::toValue(m_remotePort.fromJust()));
    if (m_fromDiskCache.isJust())
        result->setValue("fromDiskCache", ValueConversions<bool>::toValue(m_fromDiskCache.fromJust()));
    if (m_fromServiceWorker.isJust())
        result->setValue("fromServiceWorker", ValueConversions<bool>::toValue(m_fromServiceWorker.fromJust()));
    result->setValue("encodedDataLength", ValueConversions<double>::toValue(m_encodedDataLength));
    if (m_timing.isJust())
        result->setValue("timing", ValueConversions<protocol::Network::ResourceTiming>::toValue(m_timing.fromJust()));
    if (m_protocol.isJust())
        result->setValue("protocol", ValueConversions<String>::toValue(m_protocol.fromJust()));
    result->setValue("securityState", ValueConversions<String>::toValue(m_securityState));
    if (m_securityDetails.isJust())
        result->setValue("securityDetails", ValueConversions<protocol::Network::SecurityDetails>::toValue(m_securityDetails.fromJust()));
    return result;
}

std::unique_ptr<Response> Response::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

const char* Initiator::TypeEnum::Parser = "parser";
const char* Initiator::TypeEnum::Script = "script";
const char* Initiator::TypeEnum::Preload = "preload";
const char* Initiator::TypeEnum::SignedExchange = "SignedExchange";
const char* Initiator::TypeEnum::Other = "other";

std::unique_ptr<Initiator> Initiator::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Initiator> result(new Initiator());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* stackValue = object->get("stack");
    if (stackValue) {
        errors->setName("stack");
        result->m_stack = ValueConversions<protocol::Runtime::StackTrace>::fromValue(stackValue, errors);
    }
    protocol::Value* urlValue = object->get("url");
    if (urlValue) {
        errors->setName("url");
        result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    }
    protocol::Value* lineNumberValue = object->get("lineNumber");
    if (lineNumberValue) {
        errors->setName("lineNumber");
        result->m_lineNumber = ValueConversions<double>::fromValue(lineNumberValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Initiator::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    if (m_stack.isJust())
        result->setValue("stack", ValueConversions<protocol::Runtime::StackTrace>::toValue(m_stack.fromJust()));
    if (m_url.isJust())
        result->setValue("url", ValueConversions<String>::toValue(m_url.fromJust()));
    if (m_lineNumber.isJust())
        result->setValue("lineNumber", ValueConversions<double>::toValue(m_lineNumber.fromJust()));
    return result;
}

std::unique_ptr<Initiator> Initiator::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<Cookie> Cookie::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Cookie> result(new Cookie());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<String>::fromValue(valueValue, errors);
    protocol::Value* domainValue = object->get("domain");
    errors->setName("domain");
    result->m_domain = ValueConversions<String>::fromValue(domainValue, errors);
    protocol::Value* pathValue = object->get("path");
    errors->setName("path");
    result->m_path = ValueConversions<String>::fromValue(pathValue, errors);
    protocol::Value* expiresValue = object->get("expires");
    errors->setName("expires");
    result->m_expires = ValueConversions<double>::fromValue(expiresValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<int>::fromValue(sizeValue, errors);
    protocol::Value* httpOnlyValue = object->get("httpOnly");
    errors->setName("httpOnly");
    result->m_httpOnly = ValueConversions<bool>::fromValue(httpOnlyValue, errors);
    protocol::Value* secureValue = object->get("secure");
    errors->setName("secure");
    result->m_secure = ValueConversions<bool>::fromValue(secureValue, errors);
    protocol::Value* sessionValue = object->get("session");
    errors->setName("session");
    result->m_session = ValueConversions<bool>::fromValue(sessionValue, errors);
    protocol::Value* sameSiteValue = object->get("sameSite");
    if (sameSiteValue) {
        errors->setName("sameSite");
        result->m_sameSite = ValueConversions<String>::fromValue(sameSiteValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Cookie::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("value", ValueConversions<String>::toValue(m_value));
    result->setValue("domain", ValueConversions<String>::toValue(m_domain));
    result->setValue("path", ValueConversions<String>::toValue(m_path));
    result->setValue("expires", ValueConversions<double>::toValue(m_expires));
    result->setValue("size", ValueConversions<int>::toValue(m_size));
    result->setValue("httpOnly", ValueConversions<bool>::toValue(m_httpOnly));
    result->setValue("secure", ValueConversions<bool>::toValue(m_secure));
    result->setValue("session", ValueConversions<bool>::toValue(m_session));
    if (m_sameSite.isJust())
        result->setValue("sameSite", ValueConversions<String>::toValue(m_sameSite.fromJust()));
    return result;
}

std::unique_ptr<Cookie> Cookie::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<CookieParam> CookieParam::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CookieParam> result(new CookieParam());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<String>::fromValue(valueValue, errors);
    protocol::Value* urlValue = object->get("url");
    if (urlValue) {
        errors->setName("url");
        result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    }
    protocol::Value* domainValue = object->get("domain");
    if (domainValue) {
        errors->setName("domain");
        result->m_domain = ValueConversions<String>::fromValue(domainValue, errors);
    }
    protocol::Value* pathValue = object->get("path");
    if (pathValue) {
        errors->setName("path");
        result->m_path = ValueConversions<String>::fromValue(pathValue, errors);
    }
    protocol::Value* secureValue = object->get("secure");
    if (secureValue) {
        errors->setName("secure");
        result->m_secure = ValueConversions<bool>::fromValue(secureValue, errors);
    }
    protocol::Value* httpOnlyValue = object->get("httpOnly");
    if (httpOnlyValue) {
        errors->setName("httpOnly");
        result->m_httpOnly = ValueConversions<bool>::fromValue(httpOnlyValue, errors);
    }
    protocol::Value* sameSiteValue = object->get("sameSite");
    if (sameSiteValue) {
        errors->setName("sameSite");
        result->m_sameSite = ValueConversions<String>::fromValue(sameSiteValue, errors);
    }
    protocol::Value* expiresValue = object->get("expires");
    if (expiresValue) {
        errors->setName("expires");
        result->m_expires = ValueConversions<double>::fromValue(expiresValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CookieParam::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("value", ValueConversions<String>::toValue(m_value));
    if (m_url.isJust())
        result->setValue("url", ValueConversions<String>::toValue(m_url.fromJust()));
    if (m_domain.isJust())
        result->setValue("domain", ValueConversions<String>::toValue(m_domain.fromJust()));
    if (m_path.isJust())
        result->setValue("path", ValueConversions<String>::toValue(m_path.fromJust()));
    if (m_secure.isJust())
        result->setValue("secure", ValueConversions<bool>::toValue(m_secure.fromJust()));
    if (m_httpOnly.isJust())
        result->setValue("httpOnly", ValueConversions<bool>::toValue(m_httpOnly.fromJust()));
    if (m_sameSite.isJust())
        result->setValue("sameSite", ValueConversions<String>::toValue(m_sameSite.fromJust()));
    if (m_expires.isJust())
        result->setValue("expires", ValueConversions<double>::toValue(m_expires.fromJust()));
    return result;
}

std::unique_ptr<CookieParam> CookieParam::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

const char* AuthChallenge::SourceEnum::Server = "Server";
const char* AuthChallenge::SourceEnum::Proxy = "Proxy";

std::unique_ptr<AuthChallenge> AuthChallenge::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AuthChallenge> result(new AuthChallenge());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sourceValue = object->get("source");
    if (sourceValue) {
        errors->setName("source");
        result->m_source = ValueConversions<String>::fromValue(sourceValue, errors);
    }
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<String>::fromValue(originValue, errors);
    protocol::Value* schemeValue = object->get("scheme");
    errors->setName("scheme");
    result->m_scheme = ValueConversions<String>::fromValue(schemeValue, errors);
    protocol::Value* realmValue = object->get("realm");
    errors->setName("realm");
    result->m_realm = ValueConversions<String>::fromValue(realmValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AuthChallenge::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_source.isJust())
        result->setValue("source", ValueConversions<String>::toValue(m_source.fromJust()));
    result->setValue("origin", ValueConversions<String>::toValue(m_origin));
    result->setValue("scheme", ValueConversions<String>::toValue(m_scheme));
    result->setValue("realm", ValueConversions<String>::toValue(m_realm));
    return result;
}

std::unique_ptr<AuthChallenge> AuthChallenge::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

const char* AuthChallengeResponse::ResponseEnum::Default = "Default";
const char* AuthChallengeResponse::ResponseEnum::CancelAuth = "CancelAuth";
const char* AuthChallengeResponse::ResponseEnum::ProvideCredentials = "ProvideCredentials";

std::unique_ptr<AuthChallengeResponse> AuthChallengeResponse::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AuthChallengeResponse> result(new AuthChallengeResponse());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* responseValue = object->get("response");
    errors->setName("response");
    result->m_response = ValueConversions<String>::fromValue(responseValue, errors);
    protocol::Value* usernameValue = object->get("username");
    if (usernameValue) {
        errors->setName("username");
        result->m_username = ValueConversions<String>::fromValue(usernameValue, errors);
    }
    protocol::Value* passwordValue = object->get("password");
    if (passwordValue) {
        errors->setName("password");
        result->m_password = ValueConversions<String>::fromValue(passwordValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AuthChallengeResponse::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("response", ValueConversions<String>::toValue(m_response));
    if (m_username.isJust())
        result->setValue("username", ValueConversions<String>::toValue(m_username.fromJust()));
    if (m_password.isJust())
        result->setValue("password", ValueConversions<String>::toValue(m_password.fromJust()));
    return result;
}

std::unique_ptr<AuthChallengeResponse> AuthChallengeResponse::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace InterceptionStageEnum {
const char Request[] = "Request";
const char HeadersReceived[] = "HeadersReceived";
} // namespace InterceptionStageEnum

std::unique_ptr<RequestPattern> RequestPattern::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<RequestPattern> result(new RequestPattern());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlPatternValue = object->get("urlPattern");
    if (urlPatternValue) {
        errors->setName("urlPattern");
        result->m_urlPattern = ValueConversions<String>::fromValue(urlPatternValue, errors);
    }
    protocol::Value* resourceTypeValue = object->get("resourceType");
    if (resourceTypeValue) {
        errors->setName("resourceType");
        result->m_resourceType = ValueConversions<String>::fromValue(resourceTypeValue, errors);
    }
    protocol::Value* interceptionStageValue = object->get("interceptionStage");
    if (interceptionStageValue) {
        errors->setName("interceptionStage");
        result->m_interceptionStage = ValueConversions<String>::fromValue(interceptionStageValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> RequestPattern::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_urlPattern.isJust())
        result->setValue("urlPattern", ValueConversions<String>::toValue(m_urlPattern.fromJust()));
    if (m_resourceType.isJust())
        result->setValue("resourceType", ValueConversions<String>::toValue(m_resourceType.fromJust()));
    if (m_interceptionStage.isJust())
        result->setValue("interceptionStage", ValueConversions<String>::toValue(m_interceptionStage.fromJust()));
    return result;
}

std::unique_ptr<RequestPattern> RequestPattern::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SignedExchangeSignature> SignedExchangeSignature::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SignedExchangeSignature> result(new SignedExchangeSignature());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* labelValue = object->get("label");
    errors->setName("label");
    result->m_label = ValueConversions<String>::fromValue(labelValue, errors);
    protocol::Value* integrityValue = object->get("integrity");
    errors->setName("integrity");
    result->m_integrity = ValueConversions<String>::fromValue(integrityValue, errors);
    protocol::Value* certUrlValue = object->get("certUrl");
    errors->setName("certUrl");
    result->m_certUrl = ValueConversions<String>::fromValue(certUrlValue, errors);
    protocol::Value* validityUrlValue = object->get("validityUrl");
    errors->setName("validityUrl");
    result->m_validityUrl = ValueConversions<String>::fromValue(validityUrlValue, errors);
    protocol::Value* dateValue = object->get("date");
    errors->setName("date");
    result->m_date = ValueConversions<int>::fromValue(dateValue, errors);
    protocol::Value* expiresValue = object->get("expires");
    errors->setName("expires");
    result->m_expires = ValueConversions<int>::fromValue(expiresValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SignedExchangeSignature::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("label", ValueConversions<String>::toValue(m_label));
    result->setValue("integrity", ValueConversions<String>::toValue(m_integrity));
    result->setValue("certUrl", ValueConversions<String>::toValue(m_certUrl));
    result->setValue("validityUrl", ValueConversions<String>::toValue(m_validityUrl));
    result->setValue("date", ValueConversions<int>::toValue(m_date));
    result->setValue("expires", ValueConversions<int>::toValue(m_expires));
    return result;
}

std::unique_ptr<SignedExchangeSignature> SignedExchangeSignature::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SignedExchangeHeader> SignedExchangeHeader::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SignedExchangeHeader> result(new SignedExchangeHeader());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestUrlValue = object->get("requestUrl");
    errors->setName("requestUrl");
    result->m_requestUrl = ValueConversions<String>::fromValue(requestUrlValue, errors);
    protocol::Value* requestMethodValue = object->get("requestMethod");
    errors->setName("requestMethod");
    result->m_requestMethod = ValueConversions<String>::fromValue(requestMethodValue, errors);
    protocol::Value* responseCodeValue = object->get("responseCode");
    errors->setName("responseCode");
    result->m_responseCode = ValueConversions<int>::fromValue(responseCodeValue, errors);
    protocol::Value* responseHeadersValue = object->get("responseHeaders");
    errors->setName("responseHeaders");
    result->m_responseHeaders = ValueConversions<protocol::Network::Headers>::fromValue(responseHeadersValue, errors);
    protocol::Value* signaturesValue = object->get("signatures");
    errors->setName("signatures");
    result->m_signatures = ValueConversions<protocol::Array<protocol::Network::SignedExchangeSignature>>::fromValue(signaturesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SignedExchangeHeader::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestUrl", ValueConversions<String>::toValue(m_requestUrl));
    result->setValue("requestMethod", ValueConversions<String>::toValue(m_requestMethod));
    result->setValue("responseCode", ValueConversions<int>::toValue(m_responseCode));
    result->setValue("responseHeaders", ValueConversions<protocol::Network::Headers>::toValue(m_responseHeaders.get()));
    result->setValue("signatures", ValueConversions<protocol::Array<protocol::Network::SignedExchangeSignature>>::toValue(m_signatures.get()));
    return result;
}

std::unique_ptr<SignedExchangeHeader> SignedExchangeHeader::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SignedExchangeInfo> SignedExchangeInfo::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SignedExchangeInfo> result(new SignedExchangeInfo());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* outerResponseValue = object->get("outerResponse");
    errors->setName("outerResponse");
    result->m_outerResponse = ValueConversions<protocol::Network::Response>::fromValue(outerResponseValue, errors);
    protocol::Value* headerValue = object->get("header");
    if (headerValue) {
        errors->setName("header");
        result->m_header = ValueConversions<protocol::Network::SignedExchangeHeader>::fromValue(headerValue, errors);
    }
    protocol::Value* securityDetailsValue = object->get("securityDetails");
    if (securityDetailsValue) {
        errors->setName("securityDetails");
        result->m_securityDetails = ValueConversions<protocol::Network::SecurityDetails>::fromValue(securityDetailsValue, errors);
    }
    protocol::Value* errorsValue = object->get("errors");
    if (errorsValue) {
        errors->setName("errors");
        result->m_errors = ValueConversions<protocol::Array<String>>::fromValue(errorsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SignedExchangeInfo::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("outerResponse", ValueConversions<protocol::Network::Response>::toValue(m_outerResponse.get()));
    if (m_header.isJust())
        result->setValue("header", ValueConversions<protocol::Network::SignedExchangeHeader>::toValue(m_header.fromJust()));
    if (m_securityDetails.isJust())
        result->setValue("securityDetails", ValueConversions<protocol::Network::SecurityDetails>::toValue(m_securityDetails.fromJust()));
    if (m_errors.isJust())
        result->setValue("errors", ValueConversions<protocol::Array<String>>::toValue(m_errors.fromJust()));
    return result;
}

std::unique_ptr<SignedExchangeInfo> SignedExchangeInfo::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LoadingFailedNotification> LoadingFailedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LoadingFailedNotification> result(new LoadingFailedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestIdValue = object->get("requestId");
    errors->setName("requestId");
    result->m_requestId = ValueConversions<String>::fromValue(requestIdValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* errorTextValue = object->get("errorText");
    errors->setName("errorText");
    result->m_errorText = ValueConversions<String>::fromValue(errorTextValue, errors);
    protocol::Value* canceledValue = object->get("canceled");
    if (canceledValue) {
        errors->setName("canceled");
        result->m_canceled = ValueConversions<bool>::fromValue(canceledValue, errors);
    }
    protocol::Value* blockedReasonValue = object->get("blockedReason");
    if (blockedReasonValue) {
        errors->setName("blockedReason");
        result->m_blockedReason = ValueConversions<String>::fromValue(blockedReasonValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LoadingFailedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestId", ValueConversions<String>::toValue(m_requestId));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    result->setValue("errorText", ValueConversions<String>::toValue(m_errorText));
    if (m_canceled.isJust())
        result->setValue("canceled", ValueConversions<bool>::toValue(m_canceled.fromJust()));
    if (m_blockedReason.isJust())
        result->setValue("blockedReason", ValueConversions<String>::toValue(m_blockedReason.fromJust()));
    return result;
}

std::unique_ptr<LoadingFailedNotification> LoadingFailedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LoadingFinishedNotification> LoadingFinishedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LoadingFinishedNotification> result(new LoadingFinishedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestIdValue = object->get("requestId");
    errors->setName("requestId");
    result->m_requestId = ValueConversions<String>::fromValue(requestIdValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    protocol::Value* encodedDataLengthValue = object->get("encodedDataLength");
    errors->setName("encodedDataLength");
    result->m_encodedDataLength = ValueConversions<double>::fromValue(encodedDataLengthValue, errors);
    protocol::Value* blockedCrossSiteDocumentValue = object->get("blockedCrossSiteDocument");
    if (blockedCrossSiteDocumentValue) {
        errors->setName("blockedCrossSiteDocument");
        result->m_blockedCrossSiteDocument = ValueConversions<bool>::fromValue(blockedCrossSiteDocumentValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LoadingFinishedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestId", ValueConversions<String>::toValue(m_requestId));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    result->setValue("encodedDataLength", ValueConversions<double>::toValue(m_encodedDataLength));
    if (m_blockedCrossSiteDocument.isJust())
        result->setValue("blockedCrossSiteDocument", ValueConversions<bool>::toValue(m_blockedCrossSiteDocument.fromJust()));
    return result;
}

std::unique_ptr<LoadingFinishedNotification> LoadingFinishedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<RequestInterceptedNotification> RequestInterceptedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<RequestInterceptedNotification> result(new RequestInterceptedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* interceptionIdValue = object->get("interceptionId");
    errors->setName("interceptionId");
    result->m_interceptionId = ValueConversions<String>::fromValue(interceptionIdValue, errors);
    protocol::Value* requestValue = object->get("request");
    errors->setName("request");
    result->m_request = ValueConversions<protocol::Network::Request>::fromValue(requestValue, errors);
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    protocol::Value* resourceTypeValue = object->get("resourceType");
    errors->setName("resourceType");
    result->m_resourceType = ValueConversions<String>::fromValue(resourceTypeValue, errors);
    protocol::Value* isNavigationRequestValue = object->get("isNavigationRequest");
    errors->setName("isNavigationRequest");
    result->m_isNavigationRequest = ValueConversions<bool>::fromValue(isNavigationRequestValue, errors);
    protocol::Value* isDownloadValue = object->get("isDownload");
    if (isDownloadValue) {
        errors->setName("isDownload");
        result->m_isDownload = ValueConversions<bool>::fromValue(isDownloadValue, errors);
    }
    protocol::Value* redirectUrlValue = object->get("redirectUrl");
    if (redirectUrlValue) {
        errors->setName("redirectUrl");
        result->m_redirectUrl = ValueConversions<String>::fromValue(redirectUrlValue, errors);
    }
    protocol::Value* authChallengeValue = object->get("authChallenge");
    if (authChallengeValue) {
        errors->setName("authChallenge");
        result->m_authChallenge = ValueConversions<protocol::Network::AuthChallenge>::fromValue(authChallengeValue, errors);
    }
    protocol::Value* responseErrorReasonValue = object->get("responseErrorReason");
    if (responseErrorReasonValue) {
        errors->setName("responseErrorReason");
        result->m_responseErrorReason = ValueConversions<String>::fromValue(responseErrorReasonValue, errors);
    }
    protocol::Value* responseStatusCodeValue = object->get("responseStatusCode");
    if (responseStatusCodeValue) {
        errors->setName("responseStatusCode");
        result->m_responseStatusCode = ValueConversions<int>::fromValue(responseStatusCodeValue, errors);
    }
    protocol::Value* responseHeadersValue = object->get("responseHeaders");
    if (responseHeadersValue) {
        errors->setName("responseHeaders");
        result->m_responseHeaders = ValueConversions<protocol::Network::Headers>::fromValue(responseHeadersValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> RequestInterceptedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("interceptionId", ValueConversions<String>::toValue(m_interceptionId));
    result->setValue("request", ValueConversions<protocol::Network::Request>::toValue(m_request.get()));
    result->setValue("frameId", ValueConversions<String>::toValue(m_frameId));
    result->setValue("resourceType", ValueConversions<String>::toValue(m_resourceType));
    result->setValue("isNavigationRequest", ValueConversions<bool>::toValue(m_isNavigationRequest));
    if (m_isDownload.isJust())
        result->setValue("isDownload", ValueConversions<bool>::toValue(m_isDownload.fromJust()));
    if (m_redirectUrl.isJust())
        result->setValue("redirectUrl", ValueConversions<String>::toValue(m_redirectUrl.fromJust()));
    if (m_authChallenge.isJust())
        result->setValue("authChallenge", ValueConversions<protocol::Network::AuthChallenge>::toValue(m_authChallenge.fromJust()));
    if (m_responseErrorReason.isJust())
        result->setValue("responseErrorReason", ValueConversions<String>::toValue(m_responseErrorReason.fromJust()));
    if (m_responseStatusCode.isJust())
        result->setValue("responseStatusCode", ValueConversions<int>::toValue(m_responseStatusCode.fromJust()));
    if (m_responseHeaders.isJust())
        result->setValue("responseHeaders", ValueConversions<protocol::Network::Headers>::toValue(m_responseHeaders.fromJust()));
    return result;
}

std::unique_ptr<RequestInterceptedNotification> RequestInterceptedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<RequestWillBeSentNotification> RequestWillBeSentNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<RequestWillBeSentNotification> result(new RequestWillBeSentNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestIdValue = object->get("requestId");
    errors->setName("requestId");
    result->m_requestId = ValueConversions<String>::fromValue(requestIdValue, errors);
    protocol::Value* loaderIdValue = object->get("loaderId");
    errors->setName("loaderId");
    result->m_loaderId = ValueConversions<String>::fromValue(loaderIdValue, errors);
    protocol::Value* documentURLValue = object->get("documentURL");
    errors->setName("documentURL");
    result->m_documentURL = ValueConversions<String>::fromValue(documentURLValue, errors);
    protocol::Value* requestValue = object->get("request");
    errors->setName("request");
    result->m_request = ValueConversions<protocol::Network::Request>::fromValue(requestValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    protocol::Value* wallTimeValue = object->get("wallTime");
    errors->setName("wallTime");
    result->m_wallTime = ValueConversions<double>::fromValue(wallTimeValue, errors);
    protocol::Value* initiatorValue = object->get("initiator");
    errors->setName("initiator");
    result->m_initiator = ValueConversions<protocol::Network::Initiator>::fromValue(initiatorValue, errors);
    protocol::Value* redirectResponseValue = object->get("redirectResponse");
    if (redirectResponseValue) {
        errors->setName("redirectResponse");
        result->m_redirectResponse = ValueConversions<protocol::Network::Response>::fromValue(redirectResponseValue, errors);
    }
    protocol::Value* typeValue = object->get("type");
    if (typeValue) {
        errors->setName("type");
        result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    }
    protocol::Value* frameIdValue = object->get("frameId");
    if (frameIdValue) {
        errors->setName("frameId");
        result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    }
    protocol::Value* hasUserGestureValue = object->get("hasUserGesture");
    if (hasUserGestureValue) {
        errors->setName("hasUserGesture");
        result->m_hasUserGesture = ValueConversions<bool>::fromValue(hasUserGestureValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> RequestWillBeSentNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestId", ValueConversions<String>::toValue(m_requestId));
    result->setValue("loaderId", ValueConversions<String>::toValue(m_loaderId));
    result->setValue("documentURL", ValueConversions<String>::toValue(m_documentURL));
    result->setValue("request", ValueConversions<protocol::Network::Request>::toValue(m_request.get()));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    result->setValue("wallTime", ValueConversions<double>::toValue(m_wallTime));
    result->setValue("initiator", ValueConversions<protocol::Network::Initiator>::toValue(m_initiator.get()));
    if (m_redirectResponse.isJust())
        result->setValue("redirectResponse", ValueConversions<protocol::Network::Response>::toValue(m_redirectResponse.fromJust()));
    if (m_type.isJust())
        result->setValue("type", ValueConversions<String>::toValue(m_type.fromJust()));
    if (m_frameId.isJust())
        result->setValue("frameId", ValueConversions<String>::toValue(m_frameId.fromJust()));
    if (m_hasUserGesture.isJust())
        result->setValue("hasUserGesture", ValueConversions<bool>::toValue(m_hasUserGesture.fromJust()));
    return result;
}

std::unique_ptr<RequestWillBeSentNotification> RequestWillBeSentNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SignedExchangeReceivedNotification> SignedExchangeReceivedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SignedExchangeReceivedNotification> result(new SignedExchangeReceivedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestIdValue = object->get("requestId");
    errors->setName("requestId");
    result->m_requestId = ValueConversions<String>::fromValue(requestIdValue, errors);
    protocol::Value* infoValue = object->get("info");
    errors->setName("info");
    result->m_info = ValueConversions<protocol::Network::SignedExchangeInfo>::fromValue(infoValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SignedExchangeReceivedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestId", ValueConversions<String>::toValue(m_requestId));
    result->setValue("info", ValueConversions<protocol::Network::SignedExchangeInfo>::toValue(m_info.get()));
    return result;
}

std::unique_ptr<SignedExchangeReceivedNotification> SignedExchangeReceivedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ResponseReceivedNotification> ResponseReceivedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ResponseReceivedNotification> result(new ResponseReceivedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestIdValue = object->get("requestId");
    errors->setName("requestId");
    result->m_requestId = ValueConversions<String>::fromValue(requestIdValue, errors);
    protocol::Value* loaderIdValue = object->get("loaderId");
    errors->setName("loaderId");
    result->m_loaderId = ValueConversions<String>::fromValue(loaderIdValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* responseValue = object->get("response");
    errors->setName("response");
    result->m_response = ValueConversions<protocol::Network::Response>::fromValue(responseValue, errors);
    protocol::Value* frameIdValue = object->get("frameId");
    if (frameIdValue) {
        errors->setName("frameId");
        result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ResponseReceivedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestId", ValueConversions<String>::toValue(m_requestId));
    result->setValue("loaderId", ValueConversions<String>::toValue(m_loaderId));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    result->setValue("response", ValueConversions<protocol::Network::Response>::toValue(m_response.get()));
    if (m_frameId.isJust())
        result->setValue("frameId", ValueConversions<String>::toValue(m_frameId.fromJust()));
    return result;
}

std::unique_ptr<ResponseReceivedNotification> ResponseReceivedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::LoadingFailed(const String& requestId, double timestamp, const String& type, const String& errorText, Maybe<bool> canceled, Maybe<String> blockedReason)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<LoadingFailedNotification> messageData = LoadingFailedNotification::Create()
        .SetRequestId(requestId)
        .SetTimestamp(timestamp)
        .SetType(type)
        .SetErrorText(errorText)
        .Build();
    if (canceled.isJust())
        messageData->SetCanceled(std::move(canceled).takeJust());
    if (blockedReason.isJust())
        messageData->SetBlockedReason(std::move(blockedReason).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Network.loadingFailed", std::move(messageData)));
}

void Frontend::LoadingFinished(const String& requestId, double timestamp, double encodedDataLength, Maybe<bool> blockedCrossSiteDocument)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<LoadingFinishedNotification> messageData = LoadingFinishedNotification::Create()
        .SetRequestId(requestId)
        .SetTimestamp(timestamp)
        .SetEncodedDataLength(encodedDataLength)
        .Build();
    if (blockedCrossSiteDocument.isJust())
        messageData->SetBlockedCrossSiteDocument(std::move(blockedCrossSiteDocument).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Network.loadingFinished", std::move(messageData)));
}

void Frontend::RequestIntercepted(const String& interceptionId, std::unique_ptr<protocol::Network::Request> request, const String& frameId, const String& resourceType, bool isNavigationRequest, Maybe<bool> isDownload, Maybe<String> redirectUrl, Maybe<protocol::Network::AuthChallenge> authChallenge, Maybe<String> responseErrorReason, Maybe<int> responseStatusCode, Maybe<protocol::Network::Headers> responseHeaders)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<RequestInterceptedNotification> messageData = RequestInterceptedNotification::Create()
        .SetInterceptionId(interceptionId)
        .SetRequest(std::move(request))
        .SetFrameId(frameId)
        .SetResourceType(resourceType)
        .SetIsNavigationRequest(isNavigationRequest)
        .Build();
    if (isDownload.isJust())
        messageData->SetIsDownload(std::move(isDownload).takeJust());
    if (redirectUrl.isJust())
        messageData->SetRedirectUrl(std::move(redirectUrl).takeJust());
    if (authChallenge.isJust())
        messageData->SetAuthChallenge(std::move(authChallenge).takeJust());
    if (responseErrorReason.isJust())
        messageData->SetResponseErrorReason(std::move(responseErrorReason).takeJust());
    if (responseStatusCode.isJust())
        messageData->SetResponseStatusCode(std::move(responseStatusCode).takeJust());
    if (responseHeaders.isJust())
        messageData->SetResponseHeaders(std::move(responseHeaders).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Network.requestIntercepted", std::move(messageData)));
}

void Frontend::RequestWillBeSent(const String& requestId, const String& loaderId, const String& documentURL, std::unique_ptr<protocol::Network::Request> request, double timestamp, double wallTime, std::unique_ptr<protocol::Network::Initiator> initiator, Maybe<protocol::Network::Response> redirectResponse, Maybe<String> type, Maybe<String> frameId, Maybe<bool> hasUserGesture)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<RequestWillBeSentNotification> messageData = RequestWillBeSentNotification::Create()
        .SetRequestId(requestId)
        .SetLoaderId(loaderId)
        .SetDocumentURL(documentURL)
        .SetRequest(std::move(request))
        .SetTimestamp(timestamp)
        .SetWallTime(wallTime)
        .SetInitiator(std::move(initiator))
        .Build();
    if (redirectResponse.isJust())
        messageData->SetRedirectResponse(std::move(redirectResponse).takeJust());
    if (type.isJust())
        messageData->SetType(std::move(type).takeJust());
    if (frameId.isJust())
        messageData->SetFrameId(std::move(frameId).takeJust());
    if (hasUserGesture.isJust())
        messageData->SetHasUserGesture(std::move(hasUserGesture).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Network.requestWillBeSent", std::move(messageData)));
}

void Frontend::SignedExchangeReceived(const String& requestId, std::unique_ptr<protocol::Network::SignedExchangeInfo> info)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<SignedExchangeReceivedNotification> messageData = SignedExchangeReceivedNotification::Create()
        .SetRequestId(requestId)
        .SetInfo(std::move(info))
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Network.signedExchangeReceived", std::move(messageData)));
}

void Frontend::ResponseReceived(const String& requestId, const String& loaderId, double timestamp, const String& type, std::unique_ptr<protocol::Network::Response> response, Maybe<String> frameId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ResponseReceivedNotification> messageData = ResponseReceivedNotification::Create()
        .SetRequestId(requestId)
        .SetLoaderId(loaderId)
        .SetTimestamp(timestamp)
        .SetType(type)
        .SetResponse(std::move(response))
        .Build();
    if (frameId.isJust())
        messageData->SetFrameId(std::move(frameId).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Network.responseReceived", std::move(messageData)));
}

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawNotification(const String& notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::create(notification));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend, bool fallThroughForNotFound)
        : DispatcherBase(frontendChannel)
        , m_backend(backend)
        , m_fallThroughForNotFound(fallThroughForNotFound) {
        m_dispatchMap["Network.canEmulateNetworkConditions"] = &DispatcherImpl::canEmulateNetworkConditions;
        m_dispatchMap["Network.clearBrowserCache"] = &DispatcherImpl::clearBrowserCache;
        m_dispatchMap["Network.clearBrowserCookies"] = &DispatcherImpl::clearBrowserCookies;
        m_dispatchMap["Network.continueInterceptedRequest"] = &DispatcherImpl::continueInterceptedRequest;
        m_dispatchMap["Network.deleteCookies"] = &DispatcherImpl::deleteCookies;
        m_dispatchMap["Network.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Network.emulateNetworkConditions"] = &DispatcherImpl::emulateNetworkConditions;
        m_dispatchMap["Network.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Network.getAllCookies"] = &DispatcherImpl::getAllCookies;
        m_dispatchMap["Network.getCookies"] = &DispatcherImpl::getCookies;
        m_dispatchMap["Network.getResponseBodyForInterception"] = &DispatcherImpl::getResponseBodyForInterception;
        m_dispatchMap["Network.takeResponseBodyForInterceptionAsStream"] = &DispatcherImpl::takeResponseBodyForInterceptionAsStream;
        m_dispatchMap["Network.setBypassServiceWorker"] = &DispatcherImpl::setBypassServiceWorker;
        m_dispatchMap["Network.setCacheDisabled"] = &DispatcherImpl::setCacheDisabled;
        m_dispatchMap["Network.setCookie"] = &DispatcherImpl::setCookie;
        m_dispatchMap["Network.setCookies"] = &DispatcherImpl::setCookies;
        m_dispatchMap["Network.setExtraHTTPHeaders"] = &DispatcherImpl::setExtraHTTPHeaders;
        m_dispatchMap["Network.setRequestInterception"] = &DispatcherImpl::setRequestInterception;
        m_dispatchMap["Network.setUserAgentOverride"] = &DispatcherImpl::setUserAgentOverride;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status canEmulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status clearBrowserCache(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status clearBrowserCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status continueInterceptedRequest(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status deleteCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status emulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getAllCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getResponseBodyForInterception(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status takeResponseBodyForInterceptionAsStream(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setBypassServiceWorker(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setCacheDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setCookie(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setExtraHTTPHeaders(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setRequestInterception(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setUserAgentOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
    bool m_fallThroughForNotFound;
};

DispatchResponse::Status DispatcherImpl::dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        if (m_fallThroughForNotFound)
            return DispatchResponse::kFallThrough;
        reportProtocolError(callId, DispatchResponse::kMethodNotFound, "'" + method + "' wasn't found", nullptr);
        return DispatchResponse::kError;
    }

    protocol::ErrorSupport errors;
    return (this->*(it->second))(callId, std::move(messageObject), &errors);
}


DispatchResponse::Status DispatcherImpl::canEmulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    bool out_result;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->CanEmulateNetworkConditions(&out_result);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("result", ValueConversions<bool>::toValue(out_result));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

class ClearBrowserCacheCallbackImpl : public Backend::ClearBrowserCacheCallback, public DispatcherBase::Callback {
public:
    ClearBrowserCacheCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::clearBrowserCache(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<ClearBrowserCacheCallbackImpl> callback(new ClearBrowserCacheCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->ClearBrowserCache(std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class ClearBrowserCookiesCallbackImpl : public Backend::ClearBrowserCookiesCallback, public DispatcherBase::Callback {
public:
    ClearBrowserCookiesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::clearBrowserCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<ClearBrowserCookiesCallbackImpl> callback(new ClearBrowserCookiesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->ClearBrowserCookies(std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class ContinueInterceptedRequestCallbackImpl : public Backend::ContinueInterceptedRequestCallback, public DispatcherBase::Callback {
public:
    ContinueInterceptedRequestCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::continueInterceptedRequest(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* interceptionIdValue = object ? object->get("interceptionId") : nullptr;
    errors->setName("interceptionId");
    String in_interceptionId = ValueConversions<String>::fromValue(interceptionIdValue, errors);
    protocol::Value* errorReasonValue = object ? object->get("errorReason") : nullptr;
    Maybe<String> in_errorReason;
    if (errorReasonValue) {
        errors->setName("errorReason");
        in_errorReason = ValueConversions<String>::fromValue(errorReasonValue, errors);
    }
    protocol::Value* rawResponseValue = object ? object->get("rawResponse") : nullptr;
    Maybe<String> in_rawResponse;
    if (rawResponseValue) {
        errors->setName("rawResponse");
        in_rawResponse = ValueConversions<String>::fromValue(rawResponseValue, errors);
    }
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    Maybe<String> in_url;
    if (urlValue) {
        errors->setName("url");
        in_url = ValueConversions<String>::fromValue(urlValue, errors);
    }
    protocol::Value* methodValue = object ? object->get("method") : nullptr;
    Maybe<String> in_method;
    if (methodValue) {
        errors->setName("method");
        in_method = ValueConversions<String>::fromValue(methodValue, errors);
    }
    protocol::Value* postDataValue = object ? object->get("postData") : nullptr;
    Maybe<String> in_postData;
    if (postDataValue) {
        errors->setName("postData");
        in_postData = ValueConversions<String>::fromValue(postDataValue, errors);
    }
    protocol::Value* headersValue = object ? object->get("headers") : nullptr;
    Maybe<protocol::Network::Headers> in_headers;
    if (headersValue) {
        errors->setName("headers");
        in_headers = ValueConversions<protocol::Network::Headers>::fromValue(headersValue, errors);
    }
    protocol::Value* authChallengeResponseValue = object ? object->get("authChallengeResponse") : nullptr;
    Maybe<protocol::Network::AuthChallengeResponse> in_authChallengeResponse;
    if (authChallengeResponseValue) {
        errors->setName("authChallengeResponse");
        in_authChallengeResponse = ValueConversions<protocol::Network::AuthChallengeResponse>::fromValue(authChallengeResponseValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<ContinueInterceptedRequestCallbackImpl> callback(new ContinueInterceptedRequestCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->ContinueInterceptedRequest(in_interceptionId, std::move(in_errorReason), std::move(in_rawResponse), std::move(in_url), std::move(in_method), std::move(in_postData), std::move(in_headers), std::move(in_authChallengeResponse), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class DeleteCookiesCallbackImpl : public Backend::DeleteCookiesCallback, public DispatcherBase::Callback {
public:
    DeleteCookiesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::deleteCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nameValue = object ? object->get("name") : nullptr;
    errors->setName("name");
    String in_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    Maybe<String> in_url;
    if (urlValue) {
        errors->setName("url");
        in_url = ValueConversions<String>::fromValue(urlValue, errors);
    }
    protocol::Value* domainValue = object ? object->get("domain") : nullptr;
    Maybe<String> in_domain;
    if (domainValue) {
        errors->setName("domain");
        in_domain = ValueConversions<String>::fromValue(domainValue, errors);
    }
    protocol::Value* pathValue = object ? object->get("path") : nullptr;
    Maybe<String> in_path;
    if (pathValue) {
        errors->setName("path");
        in_path = ValueConversions<String>::fromValue(pathValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<DeleteCookiesCallbackImpl> callback(new DeleteCookiesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->DeleteCookies(in_name, std::move(in_url), std::move(in_domain), std::move(in_path), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Disable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::emulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* offlineValue = object ? object->get("offline") : nullptr;
    errors->setName("offline");
    bool in_offline = ValueConversions<bool>::fromValue(offlineValue, errors);
    protocol::Value* latencyValue = object ? object->get("latency") : nullptr;
    errors->setName("latency");
    double in_latency = ValueConversions<double>::fromValue(latencyValue, errors);
    protocol::Value* downloadThroughputValue = object ? object->get("downloadThroughput") : nullptr;
    errors->setName("downloadThroughput");
    double in_downloadThroughput = ValueConversions<double>::fromValue(downloadThroughputValue, errors);
    protocol::Value* uploadThroughputValue = object ? object->get("uploadThroughput") : nullptr;
    errors->setName("uploadThroughput");
    double in_uploadThroughput = ValueConversions<double>::fromValue(uploadThroughputValue, errors);
    protocol::Value* connectionTypeValue = object ? object->get("connectionType") : nullptr;
    Maybe<String> in_connectionType;
    if (connectionTypeValue) {
        errors->setName("connectionType");
        in_connectionType = ValueConversions<String>::fromValue(connectionTypeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->EmulateNetworkConditions(in_offline, in_latency, in_downloadThroughput, in_uploadThroughput, std::move(in_connectionType));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* maxTotalBufferSizeValue = object ? object->get("maxTotalBufferSize") : nullptr;
    Maybe<int> in_maxTotalBufferSize;
    if (maxTotalBufferSizeValue) {
        errors->setName("maxTotalBufferSize");
        in_maxTotalBufferSize = ValueConversions<int>::fromValue(maxTotalBufferSizeValue, errors);
    }
    protocol::Value* maxResourceBufferSizeValue = object ? object->get("maxResourceBufferSize") : nullptr;
    Maybe<int> in_maxResourceBufferSize;
    if (maxResourceBufferSizeValue) {
        errors->setName("maxResourceBufferSize");
        in_maxResourceBufferSize = ValueConversions<int>::fromValue(maxResourceBufferSizeValue, errors);
    }
    protocol::Value* maxPostDataSizeValue = object ? object->get("maxPostDataSize") : nullptr;
    Maybe<int> in_maxPostDataSize;
    if (maxPostDataSizeValue) {
        errors->setName("maxPostDataSize");
        in_maxPostDataSize = ValueConversions<int>::fromValue(maxPostDataSizeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Enable(std::move(in_maxTotalBufferSize), std::move(in_maxResourceBufferSize), std::move(in_maxPostDataSize));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

class GetAllCookiesCallbackImpl : public Backend::GetAllCookiesCallback, public DispatcherBase::Callback {
public:
    GetAllCookiesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::Network::Cookie>> cookies) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("cookies", ValueConversions<protocol::Array<protocol::Network::Cookie>>::toValue(cookies.get()));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::getAllCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<GetAllCookiesCallbackImpl> callback(new GetAllCookiesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->GetAllCookies(std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class GetCookiesCallbackImpl : public Backend::GetCookiesCallback, public DispatcherBase::Callback {
public:
    GetCookiesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::Network::Cookie>> cookies) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("cookies", ValueConversions<protocol::Array<protocol::Network::Cookie>>::toValue(cookies.get()));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::getCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlsValue = object ? object->get("urls") : nullptr;
    Maybe<protocol::Array<String>> in_urls;
    if (urlsValue) {
        errors->setName("urls");
        in_urls = ValueConversions<protocol::Array<String>>::fromValue(urlsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<GetCookiesCallbackImpl> callback(new GetCookiesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->GetCookies(std::move(in_urls), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class GetResponseBodyForInterceptionCallbackImpl : public Backend::GetResponseBodyForInterceptionCallback, public DispatcherBase::Callback {
public:
    GetResponseBodyForInterceptionCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(const String& body, bool base64Encoded) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("body", ValueConversions<String>::toValue(body));
        resultObject->setValue("base64Encoded", ValueConversions<bool>::toValue(base64Encoded));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::getResponseBodyForInterception(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* interceptionIdValue = object ? object->get("interceptionId") : nullptr;
    errors->setName("interceptionId");
    String in_interceptionId = ValueConversions<String>::fromValue(interceptionIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<GetResponseBodyForInterceptionCallbackImpl> callback(new GetResponseBodyForInterceptionCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->GetResponseBodyForInterception(in_interceptionId, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class TakeResponseBodyForInterceptionAsStreamCallbackImpl : public Backend::TakeResponseBodyForInterceptionAsStreamCallback, public DispatcherBase::Callback {
public:
    TakeResponseBodyForInterceptionAsStreamCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(const String& stream) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("stream", ValueConversions<String>::toValue(stream));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::takeResponseBodyForInterceptionAsStream(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* interceptionIdValue = object ? object->get("interceptionId") : nullptr;
    errors->setName("interceptionId");
    String in_interceptionId = ValueConversions<String>::fromValue(interceptionIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<TakeResponseBodyForInterceptionAsStreamCallbackImpl> callback(new TakeResponseBodyForInterceptionAsStreamCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->TakeResponseBodyForInterceptionAsStream(in_interceptionId, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::setBypassServiceWorker(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* bypassValue = object ? object->get("bypass") : nullptr;
    errors->setName("bypass");
    bool in_bypass = ValueConversions<bool>::fromValue(bypassValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetBypassServiceWorker(in_bypass);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setCacheDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* cacheDisabledValue = object ? object->get("cacheDisabled") : nullptr;
    errors->setName("cacheDisabled");
    bool in_cacheDisabled = ValueConversions<bool>::fromValue(cacheDisabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetCacheDisabled(in_cacheDisabled);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

class SetCookieCallbackImpl : public Backend::SetCookieCallback, public DispatcherBase::Callback {
public:
    SetCookieCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(bool success) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("success", ValueConversions<bool>::toValue(success));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::setCookie(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nameValue = object ? object->get("name") : nullptr;
    errors->setName("name");
    String in_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* valueValue = object ? object->get("value") : nullptr;
    errors->setName("value");
    String in_value = ValueConversions<String>::fromValue(valueValue, errors);
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    Maybe<String> in_url;
    if (urlValue) {
        errors->setName("url");
        in_url = ValueConversions<String>::fromValue(urlValue, errors);
    }
    protocol::Value* domainValue = object ? object->get("domain") : nullptr;
    Maybe<String> in_domain;
    if (domainValue) {
        errors->setName("domain");
        in_domain = ValueConversions<String>::fromValue(domainValue, errors);
    }
    protocol::Value* pathValue = object ? object->get("path") : nullptr;
    Maybe<String> in_path;
    if (pathValue) {
        errors->setName("path");
        in_path = ValueConversions<String>::fromValue(pathValue, errors);
    }
    protocol::Value* secureValue = object ? object->get("secure") : nullptr;
    Maybe<bool> in_secure;
    if (secureValue) {
        errors->setName("secure");
        in_secure = ValueConversions<bool>::fromValue(secureValue, errors);
    }
    protocol::Value* httpOnlyValue = object ? object->get("httpOnly") : nullptr;
    Maybe<bool> in_httpOnly;
    if (httpOnlyValue) {
        errors->setName("httpOnly");
        in_httpOnly = ValueConversions<bool>::fromValue(httpOnlyValue, errors);
    }
    protocol::Value* sameSiteValue = object ? object->get("sameSite") : nullptr;
    Maybe<String> in_sameSite;
    if (sameSiteValue) {
        errors->setName("sameSite");
        in_sameSite = ValueConversions<String>::fromValue(sameSiteValue, errors);
    }
    protocol::Value* expiresValue = object ? object->get("expires") : nullptr;
    Maybe<double> in_expires;
    if (expiresValue) {
        errors->setName("expires");
        in_expires = ValueConversions<double>::fromValue(expiresValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<SetCookieCallbackImpl> callback(new SetCookieCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->SetCookie(in_name, in_value, std::move(in_url), std::move(in_domain), std::move(in_path), std::move(in_secure), std::move(in_httpOnly), std::move(in_sameSite), std::move(in_expires), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class SetCookiesCallbackImpl : public Backend::SetCookiesCallback, public DispatcherBase::Callback {
public:
    SetCookiesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::setCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* cookiesValue = object ? object->get("cookies") : nullptr;
    errors->setName("cookies");
    std::unique_ptr<protocol::Array<protocol::Network::CookieParam>> in_cookies = ValueConversions<protocol::Array<protocol::Network::CookieParam>>::fromValue(cookiesValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<SetCookiesCallbackImpl> callback(new SetCookiesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->SetCookies(std::move(in_cookies), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::setExtraHTTPHeaders(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* headersValue = object ? object->get("headers") : nullptr;
    errors->setName("headers");
    std::unique_ptr<protocol::Network::Headers> in_headers = ValueConversions<protocol::Network::Headers>::fromValue(headersValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetExtraHTTPHeaders(std::move(in_headers));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setRequestInterception(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* patternsValue = object ? object->get("patterns") : nullptr;
    errors->setName("patterns");
    std::unique_ptr<protocol::Array<protocol::Network::RequestPattern>> in_patterns = ValueConversions<protocol::Array<protocol::Network::RequestPattern>>::fromValue(patternsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetRequestInterception(std::move(in_patterns));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setUserAgentOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* userAgentValue = object ? object->get("userAgent") : nullptr;
    errors->setName("userAgent");
    String in_userAgent = ValueConversions<String>::fromValue(userAgentValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetUserAgentOverride(in_userAgent);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Network", std::move(dispatcher));
}

} // Network
} // namespace content
} // namespace protocol