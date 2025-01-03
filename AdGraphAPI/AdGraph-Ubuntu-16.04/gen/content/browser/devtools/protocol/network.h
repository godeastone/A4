// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Network_h
#define content_protocol_Network_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "content/browser/devtools/protocol/runtime.h"
#include "content/browser/devtools/protocol/security.h"

namespace content {
namespace protocol {
namespace Network {

// ------------- Forward and enum declarations.
using LoaderId = String;
using RequestId = String;
using InterceptionId = String;
using ErrorReason = String;
using TimeSinceEpoch = double;
using MonotonicTime = double;
using Headers = Object;
using ConnectionType = String;
using CookieSameSite = String;
class ResourceTiming;
using ResourcePriority = String;
class Request;
class SignedCertificateTimestamp;
class SecurityDetails;
using CertificateTransparencyCompliance = String;
using BlockedReason = String;
class Response;
class Initiator;
class Cookie;
class CookieParam;
class AuthChallenge;
class AuthChallengeResponse;
using InterceptionStage = String;
class RequestPattern;
class SignedExchangeSignature;
class SignedExchangeHeader;
class SignedExchangeInfo;
class LoadingFailedNotification;
class LoadingFinishedNotification;
class RequestInterceptedNotification;
class RequestWillBeSentNotification;
class SignedExchangeReceivedNotification;
class ResponseReceivedNotification;

namespace ErrorReasonEnum {
CONTENT_EXPORT extern const char Failed[];
CONTENT_EXPORT extern const char Aborted[];
CONTENT_EXPORT extern const char TimedOut[];
CONTENT_EXPORT extern const char AccessDenied[];
CONTENT_EXPORT extern const char ConnectionClosed[];
CONTENT_EXPORT extern const char ConnectionReset[];
CONTENT_EXPORT extern const char ConnectionRefused[];
CONTENT_EXPORT extern const char ConnectionAborted[];
CONTENT_EXPORT extern const char ConnectionFailed[];
CONTENT_EXPORT extern const char NameNotResolved[];
CONTENT_EXPORT extern const char InternetDisconnected[];
CONTENT_EXPORT extern const char AddressUnreachable[];
CONTENT_EXPORT extern const char BlockedByClient[];
CONTENT_EXPORT extern const char BlockedByResponse[];
} // namespace ErrorReasonEnum

namespace ConnectionTypeEnum {
CONTENT_EXPORT extern const char None[];
CONTENT_EXPORT extern const char Cellular2g[];
CONTENT_EXPORT extern const char Cellular3g[];
CONTENT_EXPORT extern const char Cellular4g[];
CONTENT_EXPORT extern const char Bluetooth[];
CONTENT_EXPORT extern const char Ethernet[];
CONTENT_EXPORT extern const char Wifi[];
CONTENT_EXPORT extern const char Wimax[];
CONTENT_EXPORT extern const char Other[];
} // namespace ConnectionTypeEnum

namespace CookieSameSiteEnum {
CONTENT_EXPORT extern const char Strict[];
CONTENT_EXPORT extern const char Lax[];
} // namespace CookieSameSiteEnum

namespace ResourcePriorityEnum {
CONTENT_EXPORT extern const char VeryLow[];
CONTENT_EXPORT extern const char Low[];
CONTENT_EXPORT extern const char Medium[];
CONTENT_EXPORT extern const char High[];
CONTENT_EXPORT extern const char VeryHigh[];
} // namespace ResourcePriorityEnum

namespace CertificateTransparencyComplianceEnum {
CONTENT_EXPORT extern const char Unknown[];
CONTENT_EXPORT extern const char NotCompliant[];
CONTENT_EXPORT extern const char Compliant[];
} // namespace CertificateTransparencyComplianceEnum

namespace BlockedReasonEnum {
CONTENT_EXPORT extern const char Other[];
CONTENT_EXPORT extern const char Csp[];
CONTENT_EXPORT extern const char MixedContent[];
CONTENT_EXPORT extern const char Origin[];
CONTENT_EXPORT extern const char Inspector[];
CONTENT_EXPORT extern const char SubresourceFilter[];
CONTENT_EXPORT extern const char ContentType[];
} // namespace BlockedReasonEnum

namespace InterceptionStageEnum {
CONTENT_EXPORT extern const char Request[];
CONTENT_EXPORT extern const char HeadersReceived[];
} // namespace InterceptionStageEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT ResourceTiming : public Serializable{
    PROTOCOL_DISALLOW_COPY(ResourceTiming);
public:
    static std::unique_ptr<ResourceTiming> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ResourceTiming() override { }

    double GetRequestTime() { return m_requestTime; }
    void SetRequestTime(double value) { m_requestTime = value; }

    double GetProxyStart() { return m_proxyStart; }
    void SetProxyStart(double value) { m_proxyStart = value; }

    double GetProxyEnd() { return m_proxyEnd; }
    void SetProxyEnd(double value) { m_proxyEnd = value; }

    double GetDnsStart() { return m_dnsStart; }
    void SetDnsStart(double value) { m_dnsStart = value; }

    double GetDnsEnd() { return m_dnsEnd; }
    void SetDnsEnd(double value) { m_dnsEnd = value; }

    double GetConnectStart() { return m_connectStart; }
    void SetConnectStart(double value) { m_connectStart = value; }

    double GetConnectEnd() { return m_connectEnd; }
    void SetConnectEnd(double value) { m_connectEnd = value; }

    double GetSslStart() { return m_sslStart; }
    void SetSslStart(double value) { m_sslStart = value; }

    double GetSslEnd() { return m_sslEnd; }
    void SetSslEnd(double value) { m_sslEnd = value; }

    double GetWorkerStart() { return m_workerStart; }
    void SetWorkerStart(double value) { m_workerStart = value; }

    double GetWorkerReady() { return m_workerReady; }
    void SetWorkerReady(double value) { m_workerReady = value; }

    double GetSendStart() { return m_sendStart; }
    void SetSendStart(double value) { m_sendStart = value; }

    double GetSendEnd() { return m_sendEnd; }
    void SetSendEnd(double value) { m_sendEnd = value; }

    double GetPushStart() { return m_pushStart; }
    void SetPushStart(double value) { m_pushStart = value; }

    double GetPushEnd() { return m_pushEnd; }
    void SetPushEnd(double value) { m_pushEnd = value; }

    double GetReceiveHeadersEnd() { return m_receiveHeadersEnd; }
    void SetReceiveHeadersEnd(double value) { m_receiveHeadersEnd = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ResourceTiming> clone() const;

    template<int STATE>
    class ResourceTimingBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestTimeSet = 1 << 1,
            ProxyStartSet = 1 << 2,
            ProxyEndSet = 1 << 3,
            DnsStartSet = 1 << 4,
            DnsEndSet = 1 << 5,
            ConnectStartSet = 1 << 6,
            ConnectEndSet = 1 << 7,
            SslStartSet = 1 << 8,
            SslEndSet = 1 << 9,
            WorkerStartSet = 1 << 10,
            WorkerReadySet = 1 << 11,
            SendStartSet = 1 << 12,
            SendEndSet = 1 << 13,
            PushStartSet = 1 << 14,
            PushEndSet = 1 << 15,
            ReceiveHeadersEndSet = 1 << 16,
            AllFieldsSet = (RequestTimeSet | ProxyStartSet | ProxyEndSet | DnsStartSet | DnsEndSet | ConnectStartSet | ConnectEndSet | SslStartSet | SslEndSet | WorkerStartSet | WorkerReadySet | SendStartSet | SendEndSet | PushStartSet | PushEndSet | ReceiveHeadersEndSet | 0)};


        ResourceTimingBuilder<STATE | RequestTimeSet>& SetRequestTime(double value)
        {
            static_assert(!(STATE & RequestTimeSet), "property requestTime should not be set yet");
            m_result->SetRequestTime(value);
            return castState<RequestTimeSet>();
        }

        ResourceTimingBuilder<STATE | ProxyStartSet>& SetProxyStart(double value)
        {
            static_assert(!(STATE & ProxyStartSet), "property proxyStart should not be set yet");
            m_result->SetProxyStart(value);
            return castState<ProxyStartSet>();
        }

        ResourceTimingBuilder<STATE | ProxyEndSet>& SetProxyEnd(double value)
        {
            static_assert(!(STATE & ProxyEndSet), "property proxyEnd should not be set yet");
            m_result->SetProxyEnd(value);
            return castState<ProxyEndSet>();
        }

        ResourceTimingBuilder<STATE | DnsStartSet>& SetDnsStart(double value)
        {
            static_assert(!(STATE & DnsStartSet), "property dnsStart should not be set yet");
            m_result->SetDnsStart(value);
            return castState<DnsStartSet>();
        }

        ResourceTimingBuilder<STATE | DnsEndSet>& SetDnsEnd(double value)
        {
            static_assert(!(STATE & DnsEndSet), "property dnsEnd should not be set yet");
            m_result->SetDnsEnd(value);
            return castState<DnsEndSet>();
        }

        ResourceTimingBuilder<STATE | ConnectStartSet>& SetConnectStart(double value)
        {
            static_assert(!(STATE & ConnectStartSet), "property connectStart should not be set yet");
            m_result->SetConnectStart(value);
            return castState<ConnectStartSet>();
        }

        ResourceTimingBuilder<STATE | ConnectEndSet>& SetConnectEnd(double value)
        {
            static_assert(!(STATE & ConnectEndSet), "property connectEnd should not be set yet");
            m_result->SetConnectEnd(value);
            return castState<ConnectEndSet>();
        }

        ResourceTimingBuilder<STATE | SslStartSet>& SetSslStart(double value)
        {
            static_assert(!(STATE & SslStartSet), "property sslStart should not be set yet");
            m_result->SetSslStart(value);
            return castState<SslStartSet>();
        }

        ResourceTimingBuilder<STATE | SslEndSet>& SetSslEnd(double value)
        {
            static_assert(!(STATE & SslEndSet), "property sslEnd should not be set yet");
            m_result->SetSslEnd(value);
            return castState<SslEndSet>();
        }

        ResourceTimingBuilder<STATE | WorkerStartSet>& SetWorkerStart(double value)
        {
            static_assert(!(STATE & WorkerStartSet), "property workerStart should not be set yet");
            m_result->SetWorkerStart(value);
            return castState<WorkerStartSet>();
        }

        ResourceTimingBuilder<STATE | WorkerReadySet>& SetWorkerReady(double value)
        {
            static_assert(!(STATE & WorkerReadySet), "property workerReady should not be set yet");
            m_result->SetWorkerReady(value);
            return castState<WorkerReadySet>();
        }

        ResourceTimingBuilder<STATE | SendStartSet>& SetSendStart(double value)
        {
            static_assert(!(STATE & SendStartSet), "property sendStart should not be set yet");
            m_result->SetSendStart(value);
            return castState<SendStartSet>();
        }

        ResourceTimingBuilder<STATE | SendEndSet>& SetSendEnd(double value)
        {
            static_assert(!(STATE & SendEndSet), "property sendEnd should not be set yet");
            m_result->SetSendEnd(value);
            return castState<SendEndSet>();
        }

        ResourceTimingBuilder<STATE | PushStartSet>& SetPushStart(double value)
        {
            static_assert(!(STATE & PushStartSet), "property pushStart should not be set yet");
            m_result->SetPushStart(value);
            return castState<PushStartSet>();
        }

        ResourceTimingBuilder<STATE | PushEndSet>& SetPushEnd(double value)
        {
            static_assert(!(STATE & PushEndSet), "property pushEnd should not be set yet");
            m_result->SetPushEnd(value);
            return castState<PushEndSet>();
        }

        ResourceTimingBuilder<STATE | ReceiveHeadersEndSet>& SetReceiveHeadersEnd(double value)
        {
            static_assert(!(STATE & ReceiveHeadersEndSet), "property receiveHeadersEnd should not be set yet");
            m_result->SetReceiveHeadersEnd(value);
            return castState<ReceiveHeadersEndSet>();
        }

        std::unique_ptr<ResourceTiming> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ResourceTiming;
        ResourceTimingBuilder() : m_result(new ResourceTiming()) { }

        template<int STEP> ResourceTimingBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ResourceTimingBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::ResourceTiming> m_result;
    };

    static ResourceTimingBuilder<0> Create()
    {
        return ResourceTimingBuilder<0>();
    }

private:
    ResourceTiming()
    {
          m_requestTime = 0;
          m_proxyStart = 0;
          m_proxyEnd = 0;
          m_dnsStart = 0;
          m_dnsEnd = 0;
          m_connectStart = 0;
          m_connectEnd = 0;
          m_sslStart = 0;
          m_sslEnd = 0;
          m_workerStart = 0;
          m_workerReady = 0;
          m_sendStart = 0;
          m_sendEnd = 0;
          m_pushStart = 0;
          m_pushEnd = 0;
          m_receiveHeadersEnd = 0;
    }

    double m_requestTime;
    double m_proxyStart;
    double m_proxyEnd;
    double m_dnsStart;
    double m_dnsEnd;
    double m_connectStart;
    double m_connectEnd;
    double m_sslStart;
    double m_sslEnd;
    double m_workerStart;
    double m_workerReady;
    double m_sendStart;
    double m_sendEnd;
    double m_pushStart;
    double m_pushEnd;
    double m_receiveHeadersEnd;
};


class CONTENT_EXPORT Request : public Serializable{
    PROTOCOL_DISALLOW_COPY(Request);
public:
    static std::unique_ptr<Request> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Request() override { }

    String GetUrl() { return m_url; }
    void SetUrl(const String& value) { m_url = value; }

    String GetMethod() { return m_method; }
    void SetMethod(const String& value) { m_method = value; }

    protocol::Network::Headers* GetHeaders() { return m_headers.get(); }
    void SetHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_headers = std::move(value); }

    bool HasPostData() { return m_postData.isJust(); }
    String GetPostData(const String& defaultValue) { return m_postData.isJust() ? m_postData.fromJust() : defaultValue; }
    void SetPostData(const String& value) { m_postData = value; }

    bool HasHasPostData() { return m_hasPostData.isJust(); }
    bool GetHasPostData(bool defaultValue) { return m_hasPostData.isJust() ? m_hasPostData.fromJust() : defaultValue; }
    void SetHasPostData(bool value) { m_hasPostData = value; }

    bool HasMixedContentType() { return m_mixedContentType.isJust(); }
    String GetMixedContentType(const String& defaultValue) { return m_mixedContentType.isJust() ? m_mixedContentType.fromJust() : defaultValue; }
    void SetMixedContentType(const String& value) { m_mixedContentType = value; }

    String GetInitialPriority() { return m_initialPriority; }
    void SetInitialPriority(const String& value) { m_initialPriority = value; }

    struct CONTENT_EXPORT ReferrerPolicyEnum {
        static const char* UnsafeUrl;
        static const char* NoReferrerWhenDowngrade;
        static const char* NoReferrer;
        static const char* Origin;
        static const char* OriginWhenCrossOrigin;
        static const char* SameOrigin;
        static const char* StrictOrigin;
        static const char* StrictOriginWhenCrossOrigin;
    }; // ReferrerPolicyEnum

    String GetReferrerPolicy() { return m_referrerPolicy; }
    void SetReferrerPolicy(const String& value) { m_referrerPolicy = value; }

    bool HasIsLinkPreload() { return m_isLinkPreload.isJust(); }
    bool GetIsLinkPreload(bool defaultValue) { return m_isLinkPreload.isJust() ? m_isLinkPreload.fromJust() : defaultValue; }
    void SetIsLinkPreload(bool value) { m_isLinkPreload = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Request> clone() const;

    template<int STATE>
    class RequestBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            UrlSet = 1 << 1,
            MethodSet = 1 << 2,
            HeadersSet = 1 << 3,
            InitialPrioritySet = 1 << 4,
            ReferrerPolicySet = 1 << 5,
            AllFieldsSet = (UrlSet | MethodSet | HeadersSet | InitialPrioritySet | ReferrerPolicySet | 0)};


        RequestBuilder<STATE | UrlSet>& SetUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->SetUrl(value);
            return castState<UrlSet>();
        }

        RequestBuilder<STATE | MethodSet>& SetMethod(const String& value)
        {
            static_assert(!(STATE & MethodSet), "property method should not be set yet");
            m_result->SetMethod(value);
            return castState<MethodSet>();
        }

        RequestBuilder<STATE | HeadersSet>& SetHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & HeadersSet), "property headers should not be set yet");
            m_result->SetHeaders(std::move(value));
            return castState<HeadersSet>();
        }

        RequestBuilder<STATE>& SetPostData(const String& value)
        {
            m_result->SetPostData(value);
            return *this;
        }

        RequestBuilder<STATE>& SetHasPostData(bool value)
        {
            m_result->SetHasPostData(value);
            return *this;
        }

        RequestBuilder<STATE>& SetMixedContentType(const String& value)
        {
            m_result->SetMixedContentType(value);
            return *this;
        }

        RequestBuilder<STATE | InitialPrioritySet>& SetInitialPriority(const String& value)
        {
            static_assert(!(STATE & InitialPrioritySet), "property initialPriority should not be set yet");
            m_result->SetInitialPriority(value);
            return castState<InitialPrioritySet>();
        }

        RequestBuilder<STATE | ReferrerPolicySet>& SetReferrerPolicy(const String& value)
        {
            static_assert(!(STATE & ReferrerPolicySet), "property referrerPolicy should not be set yet");
            m_result->SetReferrerPolicy(value);
            return castState<ReferrerPolicySet>();
        }

        RequestBuilder<STATE>& SetIsLinkPreload(bool value)
        {
            m_result->SetIsLinkPreload(value);
            return *this;
        }

        std::unique_ptr<Request> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Request;
        RequestBuilder() : m_result(new Request()) { }

        template<int STEP> RequestBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RequestBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Request> m_result;
    };

    static RequestBuilder<0> Create()
    {
        return RequestBuilder<0>();
    }

private:
    Request()
    {
    }

    String m_url;
    String m_method;
    std::unique_ptr<protocol::Network::Headers> m_headers;
    Maybe<String> m_postData;
    Maybe<bool> m_hasPostData;
    Maybe<String> m_mixedContentType;
    String m_initialPriority;
    String m_referrerPolicy;
    Maybe<bool> m_isLinkPreload;
};


class CONTENT_EXPORT SignedCertificateTimestamp : public Serializable{
    PROTOCOL_DISALLOW_COPY(SignedCertificateTimestamp);
public:
    static std::unique_ptr<SignedCertificateTimestamp> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SignedCertificateTimestamp() override { }

    String GetStatus() { return m_status; }
    void SetStatus(const String& value) { m_status = value; }

    String GetOrigin() { return m_origin; }
    void SetOrigin(const String& value) { m_origin = value; }

    String GetLogDescription() { return m_logDescription; }
    void SetLogDescription(const String& value) { m_logDescription = value; }

    String GetLogId() { return m_logId; }
    void SetLogId(const String& value) { m_logId = value; }

    double GetTimestamp() { return m_timestamp; }
    void SetTimestamp(double value) { m_timestamp = value; }

    String GetHashAlgorithm() { return m_hashAlgorithm; }
    void SetHashAlgorithm(const String& value) { m_hashAlgorithm = value; }

    String GetSignatureAlgorithm() { return m_signatureAlgorithm; }
    void SetSignatureAlgorithm(const String& value) { m_signatureAlgorithm = value; }

    String GetSignatureData() { return m_signatureData; }
    void SetSignatureData(const String& value) { m_signatureData = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SignedCertificateTimestamp> clone() const;

    template<int STATE>
    class SignedCertificateTimestampBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StatusSet = 1 << 1,
            OriginSet = 1 << 2,
            LogDescriptionSet = 1 << 3,
            LogIdSet = 1 << 4,
            TimestampSet = 1 << 5,
            HashAlgorithmSet = 1 << 6,
            SignatureAlgorithmSet = 1 << 7,
            SignatureDataSet = 1 << 8,
            AllFieldsSet = (StatusSet | OriginSet | LogDescriptionSet | LogIdSet | TimestampSet | HashAlgorithmSet | SignatureAlgorithmSet | SignatureDataSet | 0)};


        SignedCertificateTimestampBuilder<STATE | StatusSet>& SetStatus(const String& value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->SetStatus(value);
            return castState<StatusSet>();
        }

        SignedCertificateTimestampBuilder<STATE | OriginSet>& SetOrigin(const String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->SetOrigin(value);
            return castState<OriginSet>();
        }

        SignedCertificateTimestampBuilder<STATE | LogDescriptionSet>& SetLogDescription(const String& value)
        {
            static_assert(!(STATE & LogDescriptionSet), "property logDescription should not be set yet");
            m_result->SetLogDescription(value);
            return castState<LogDescriptionSet>();
        }

        SignedCertificateTimestampBuilder<STATE | LogIdSet>& SetLogId(const String& value)
        {
            static_assert(!(STATE & LogIdSet), "property logId should not be set yet");
            m_result->SetLogId(value);
            return castState<LogIdSet>();
        }

        SignedCertificateTimestampBuilder<STATE | TimestampSet>& SetTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->SetTimestamp(value);
            return castState<TimestampSet>();
        }

        SignedCertificateTimestampBuilder<STATE | HashAlgorithmSet>& SetHashAlgorithm(const String& value)
        {
            static_assert(!(STATE & HashAlgorithmSet), "property hashAlgorithm should not be set yet");
            m_result->SetHashAlgorithm(value);
            return castState<HashAlgorithmSet>();
        }

        SignedCertificateTimestampBuilder<STATE | SignatureAlgorithmSet>& SetSignatureAlgorithm(const String& value)
        {
            static_assert(!(STATE & SignatureAlgorithmSet), "property signatureAlgorithm should not be set yet");
            m_result->SetSignatureAlgorithm(value);
            return castState<SignatureAlgorithmSet>();
        }

        SignedCertificateTimestampBuilder<STATE | SignatureDataSet>& SetSignatureData(const String& value)
        {
            static_assert(!(STATE & SignatureDataSet), "property signatureData should not be set yet");
            m_result->SetSignatureData(value);
            return castState<SignatureDataSet>();
        }

        std::unique_ptr<SignedCertificateTimestamp> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SignedCertificateTimestamp;
        SignedCertificateTimestampBuilder() : m_result(new SignedCertificateTimestamp()) { }

        template<int STEP> SignedCertificateTimestampBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SignedCertificateTimestampBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SignedCertificateTimestamp> m_result;
    };

    static SignedCertificateTimestampBuilder<0> Create()
    {
        return SignedCertificateTimestampBuilder<0>();
    }

private:
    SignedCertificateTimestamp()
    {
          m_timestamp = 0;
    }

    String m_status;
    String m_origin;
    String m_logDescription;
    String m_logId;
    double m_timestamp;
    String m_hashAlgorithm;
    String m_signatureAlgorithm;
    String m_signatureData;
};


class CONTENT_EXPORT SecurityDetails : public Serializable{
    PROTOCOL_DISALLOW_COPY(SecurityDetails);
public:
    static std::unique_ptr<SecurityDetails> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SecurityDetails() override { }

    String GetProtocol() { return m_protocol; }
    void SetProtocol(const String& value) { m_protocol = value; }

    String GetKeyExchange() { return m_keyExchange; }
    void SetKeyExchange(const String& value) { m_keyExchange = value; }

    bool HasKeyExchangeGroup() { return m_keyExchangeGroup.isJust(); }
    String GetKeyExchangeGroup(const String& defaultValue) { return m_keyExchangeGroup.isJust() ? m_keyExchangeGroup.fromJust() : defaultValue; }
    void SetKeyExchangeGroup(const String& value) { m_keyExchangeGroup = value; }

    String GetCipher() { return m_cipher; }
    void SetCipher(const String& value) { m_cipher = value; }

    bool HasMac() { return m_mac.isJust(); }
    String GetMac(const String& defaultValue) { return m_mac.isJust() ? m_mac.fromJust() : defaultValue; }
    void SetMac(const String& value) { m_mac = value; }

    int GetCertificateId() { return m_certificateId; }
    void SetCertificateId(int value) { m_certificateId = value; }

    String GetSubjectName() { return m_subjectName; }
    void SetSubjectName(const String& value) { m_subjectName = value; }

    protocol::Array<String>* GetSanList() { return m_sanList.get(); }
    void SetSanList(std::unique_ptr<protocol::Array<String>> value) { m_sanList = std::move(value); }

    String GetIssuer() { return m_issuer; }
    void SetIssuer(const String& value) { m_issuer = value; }

    double GetValidFrom() { return m_validFrom; }
    void SetValidFrom(double value) { m_validFrom = value; }

    double GetValidTo() { return m_validTo; }
    void SetValidTo(double value) { m_validTo = value; }

    protocol::Array<protocol::Network::SignedCertificateTimestamp>* GetSignedCertificateTimestampList() { return m_signedCertificateTimestampList.get(); }
    void SetSignedCertificateTimestampList(std::unique_ptr<protocol::Array<protocol::Network::SignedCertificateTimestamp>> value) { m_signedCertificateTimestampList = std::move(value); }

    String GetCertificateTransparencyCompliance() { return m_certificateTransparencyCompliance; }
    void SetCertificateTransparencyCompliance(const String& value) { m_certificateTransparencyCompliance = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SecurityDetails> clone() const;

    template<int STATE>
    class SecurityDetailsBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ProtocolSet = 1 << 1,
            KeyExchangeSet = 1 << 2,
            CipherSet = 1 << 3,
            CertificateIdSet = 1 << 4,
            SubjectNameSet = 1 << 5,
            SanListSet = 1 << 6,
            IssuerSet = 1 << 7,
            ValidFromSet = 1 << 8,
            ValidToSet = 1 << 9,
            SignedCertificateTimestampListSet = 1 << 10,
            CertificateTransparencyComplianceSet = 1 << 11,
            AllFieldsSet = (ProtocolSet | KeyExchangeSet | CipherSet | CertificateIdSet | SubjectNameSet | SanListSet | IssuerSet | ValidFromSet | ValidToSet | SignedCertificateTimestampListSet | CertificateTransparencyComplianceSet | 0)};


        SecurityDetailsBuilder<STATE | ProtocolSet>& SetProtocol(const String& value)
        {
            static_assert(!(STATE & ProtocolSet), "property protocol should not be set yet");
            m_result->SetProtocol(value);
            return castState<ProtocolSet>();
        }

        SecurityDetailsBuilder<STATE | KeyExchangeSet>& SetKeyExchange(const String& value)
        {
            static_assert(!(STATE & KeyExchangeSet), "property keyExchange should not be set yet");
            m_result->SetKeyExchange(value);
            return castState<KeyExchangeSet>();
        }

        SecurityDetailsBuilder<STATE>& SetKeyExchangeGroup(const String& value)
        {
            m_result->SetKeyExchangeGroup(value);
            return *this;
        }

        SecurityDetailsBuilder<STATE | CipherSet>& SetCipher(const String& value)
        {
            static_assert(!(STATE & CipherSet), "property cipher should not be set yet");
            m_result->SetCipher(value);
            return castState<CipherSet>();
        }

        SecurityDetailsBuilder<STATE>& SetMac(const String& value)
        {
            m_result->SetMac(value);
            return *this;
        }

        SecurityDetailsBuilder<STATE | CertificateIdSet>& SetCertificateId(int value)
        {
            static_assert(!(STATE & CertificateIdSet), "property certificateId should not be set yet");
            m_result->SetCertificateId(value);
            return castState<CertificateIdSet>();
        }

        SecurityDetailsBuilder<STATE | SubjectNameSet>& SetSubjectName(const String& value)
        {
            static_assert(!(STATE & SubjectNameSet), "property subjectName should not be set yet");
            m_result->SetSubjectName(value);
            return castState<SubjectNameSet>();
        }

        SecurityDetailsBuilder<STATE | SanListSet>& SetSanList(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & SanListSet), "property sanList should not be set yet");
            m_result->SetSanList(std::move(value));
            return castState<SanListSet>();
        }

        SecurityDetailsBuilder<STATE | IssuerSet>& SetIssuer(const String& value)
        {
            static_assert(!(STATE & IssuerSet), "property issuer should not be set yet");
            m_result->SetIssuer(value);
            return castState<IssuerSet>();
        }

        SecurityDetailsBuilder<STATE | ValidFromSet>& SetValidFrom(double value)
        {
            static_assert(!(STATE & ValidFromSet), "property validFrom should not be set yet");
            m_result->SetValidFrom(value);
            return castState<ValidFromSet>();
        }

        SecurityDetailsBuilder<STATE | ValidToSet>& SetValidTo(double value)
        {
            static_assert(!(STATE & ValidToSet), "property validTo should not be set yet");
            m_result->SetValidTo(value);
            return castState<ValidToSet>();
        }

        SecurityDetailsBuilder<STATE | SignedCertificateTimestampListSet>& SetSignedCertificateTimestampList(std::unique_ptr<protocol::Array<protocol::Network::SignedCertificateTimestamp>> value)
        {
            static_assert(!(STATE & SignedCertificateTimestampListSet), "property signedCertificateTimestampList should not be set yet");
            m_result->SetSignedCertificateTimestampList(std::move(value));
            return castState<SignedCertificateTimestampListSet>();
        }

        SecurityDetailsBuilder<STATE | CertificateTransparencyComplianceSet>& SetCertificateTransparencyCompliance(const String& value)
        {
            static_assert(!(STATE & CertificateTransparencyComplianceSet), "property certificateTransparencyCompliance should not be set yet");
            m_result->SetCertificateTransparencyCompliance(value);
            return castState<CertificateTransparencyComplianceSet>();
        }

        std::unique_ptr<SecurityDetails> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SecurityDetails;
        SecurityDetailsBuilder() : m_result(new SecurityDetails()) { }

        template<int STEP> SecurityDetailsBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SecurityDetailsBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SecurityDetails> m_result;
    };

    static SecurityDetailsBuilder<0> Create()
    {
        return SecurityDetailsBuilder<0>();
    }

private:
    SecurityDetails()
    {
          m_certificateId = 0;
          m_validFrom = 0;
          m_validTo = 0;
    }

    String m_protocol;
    String m_keyExchange;
    Maybe<String> m_keyExchangeGroup;
    String m_cipher;
    Maybe<String> m_mac;
    int m_certificateId;
    String m_subjectName;
    std::unique_ptr<protocol::Array<String>> m_sanList;
    String m_issuer;
    double m_validFrom;
    double m_validTo;
    std::unique_ptr<protocol::Array<protocol::Network::SignedCertificateTimestamp>> m_signedCertificateTimestampList;
    String m_certificateTransparencyCompliance;
};


class CONTENT_EXPORT Response : public Serializable{
    PROTOCOL_DISALLOW_COPY(Response);
public:
    static std::unique_ptr<Response> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Response() override { }

    String GetUrl() { return m_url; }
    void SetUrl(const String& value) { m_url = value; }

    int GetStatus() { return m_status; }
    void SetStatus(int value) { m_status = value; }

    String GetStatusText() { return m_statusText; }
    void SetStatusText(const String& value) { m_statusText = value; }

    protocol::Network::Headers* GetHeaders() { return m_headers.get(); }
    void SetHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_headers = std::move(value); }

    bool HasHeadersText() { return m_headersText.isJust(); }
    String GetHeadersText(const String& defaultValue) { return m_headersText.isJust() ? m_headersText.fromJust() : defaultValue; }
    void SetHeadersText(const String& value) { m_headersText = value; }

    String GetMimeType() { return m_mimeType; }
    void SetMimeType(const String& value) { m_mimeType = value; }

    bool HasRequestHeaders() { return m_requestHeaders.isJust(); }
    protocol::Network::Headers* GetRequestHeaders(protocol::Network::Headers* defaultValue) { return m_requestHeaders.isJust() ? m_requestHeaders.fromJust() : defaultValue; }
    void SetRequestHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_requestHeaders = std::move(value); }

    bool HasRequestHeadersText() { return m_requestHeadersText.isJust(); }
    String GetRequestHeadersText(const String& defaultValue) { return m_requestHeadersText.isJust() ? m_requestHeadersText.fromJust() : defaultValue; }
    void SetRequestHeadersText(const String& value) { m_requestHeadersText = value; }

    bool GetConnectionReused() { return m_connectionReused; }
    void SetConnectionReused(bool value) { m_connectionReused = value; }

    double GetConnectionId() { return m_connectionId; }
    void SetConnectionId(double value) { m_connectionId = value; }

    bool HasRemoteIPAddress() { return m_remoteIPAddress.isJust(); }
    String GetRemoteIPAddress(const String& defaultValue) { return m_remoteIPAddress.isJust() ? m_remoteIPAddress.fromJust() : defaultValue; }
    void SetRemoteIPAddress(const String& value) { m_remoteIPAddress = value; }

    bool HasRemotePort() { return m_remotePort.isJust(); }
    int GetRemotePort(int defaultValue) { return m_remotePort.isJust() ? m_remotePort.fromJust() : defaultValue; }
    void SetRemotePort(int value) { m_remotePort = value; }

    bool HasFromDiskCache() { return m_fromDiskCache.isJust(); }
    bool GetFromDiskCache(bool defaultValue) { return m_fromDiskCache.isJust() ? m_fromDiskCache.fromJust() : defaultValue; }
    void SetFromDiskCache(bool value) { m_fromDiskCache = value; }

    bool HasFromServiceWorker() { return m_fromServiceWorker.isJust(); }
    bool GetFromServiceWorker(bool defaultValue) { return m_fromServiceWorker.isJust() ? m_fromServiceWorker.fromJust() : defaultValue; }
    void SetFromServiceWorker(bool value) { m_fromServiceWorker = value; }

    double GetEncodedDataLength() { return m_encodedDataLength; }
    void SetEncodedDataLength(double value) { m_encodedDataLength = value; }

    bool HasTiming() { return m_timing.isJust(); }
    protocol::Network::ResourceTiming* GetTiming(protocol::Network::ResourceTiming* defaultValue) { return m_timing.isJust() ? m_timing.fromJust() : defaultValue; }
    void SetTiming(std::unique_ptr<protocol::Network::ResourceTiming> value) { m_timing = std::move(value); }

    bool HasProtocol() { return m_protocol.isJust(); }
    String GetProtocol(const String& defaultValue) { return m_protocol.isJust() ? m_protocol.fromJust() : defaultValue; }
    void SetProtocol(const String& value) { m_protocol = value; }

    String GetSecurityState() { return m_securityState; }
    void SetSecurityState(const String& value) { m_securityState = value; }

    bool HasSecurityDetails() { return m_securityDetails.isJust(); }
    protocol::Network::SecurityDetails* GetSecurityDetails(protocol::Network::SecurityDetails* defaultValue) { return m_securityDetails.isJust() ? m_securityDetails.fromJust() : defaultValue; }
    void SetSecurityDetails(std::unique_ptr<protocol::Network::SecurityDetails> value) { m_securityDetails = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Response> clone() const;

    template<int STATE>
    class ResponseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            UrlSet = 1 << 1,
            StatusSet = 1 << 2,
            StatusTextSet = 1 << 3,
            HeadersSet = 1 << 4,
            MimeTypeSet = 1 << 5,
            ConnectionReusedSet = 1 << 6,
            ConnectionIdSet = 1 << 7,
            EncodedDataLengthSet = 1 << 8,
            SecurityStateSet = 1 << 9,
            AllFieldsSet = (UrlSet | StatusSet | StatusTextSet | HeadersSet | MimeTypeSet | ConnectionReusedSet | ConnectionIdSet | EncodedDataLengthSet | SecurityStateSet | 0)};


        ResponseBuilder<STATE | UrlSet>& SetUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->SetUrl(value);
            return castState<UrlSet>();
        }

        ResponseBuilder<STATE | StatusSet>& SetStatus(int value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->SetStatus(value);
            return castState<StatusSet>();
        }

        ResponseBuilder<STATE | StatusTextSet>& SetStatusText(const String& value)
        {
            static_assert(!(STATE & StatusTextSet), "property statusText should not be set yet");
            m_result->SetStatusText(value);
            return castState<StatusTextSet>();
        }

        ResponseBuilder<STATE | HeadersSet>& SetHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & HeadersSet), "property headers should not be set yet");
            m_result->SetHeaders(std::move(value));
            return castState<HeadersSet>();
        }

        ResponseBuilder<STATE>& SetHeadersText(const String& value)
        {
            m_result->SetHeadersText(value);
            return *this;
        }

        ResponseBuilder<STATE | MimeTypeSet>& SetMimeType(const String& value)
        {
            static_assert(!(STATE & MimeTypeSet), "property mimeType should not be set yet");
            m_result->SetMimeType(value);
            return castState<MimeTypeSet>();
        }

        ResponseBuilder<STATE>& SetRequestHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            m_result->SetRequestHeaders(std::move(value));
            return *this;
        }

        ResponseBuilder<STATE>& SetRequestHeadersText(const String& value)
        {
            m_result->SetRequestHeadersText(value);
            return *this;
        }

        ResponseBuilder<STATE | ConnectionReusedSet>& SetConnectionReused(bool value)
        {
            static_assert(!(STATE & ConnectionReusedSet), "property connectionReused should not be set yet");
            m_result->SetConnectionReused(value);
            return castState<ConnectionReusedSet>();
        }

        ResponseBuilder<STATE | ConnectionIdSet>& SetConnectionId(double value)
        {
            static_assert(!(STATE & ConnectionIdSet), "property connectionId should not be set yet");
            m_result->SetConnectionId(value);
            return castState<ConnectionIdSet>();
        }

        ResponseBuilder<STATE>& SetRemoteIPAddress(const String& value)
        {
            m_result->SetRemoteIPAddress(value);
            return *this;
        }

        ResponseBuilder<STATE>& SetRemotePort(int value)
        {
            m_result->SetRemotePort(value);
            return *this;
        }

        ResponseBuilder<STATE>& SetFromDiskCache(bool value)
        {
            m_result->SetFromDiskCache(value);
            return *this;
        }

        ResponseBuilder<STATE>& SetFromServiceWorker(bool value)
        {
            m_result->SetFromServiceWorker(value);
            return *this;
        }

        ResponseBuilder<STATE | EncodedDataLengthSet>& SetEncodedDataLength(double value)
        {
            static_assert(!(STATE & EncodedDataLengthSet), "property encodedDataLength should not be set yet");
            m_result->SetEncodedDataLength(value);
            return castState<EncodedDataLengthSet>();
        }

        ResponseBuilder<STATE>& SetTiming(std::unique_ptr<protocol::Network::ResourceTiming> value)
        {
            m_result->SetTiming(std::move(value));
            return *this;
        }

        ResponseBuilder<STATE>& SetProtocol(const String& value)
        {
            m_result->SetProtocol(value);
            return *this;
        }

        ResponseBuilder<STATE | SecurityStateSet>& SetSecurityState(const String& value)
        {
            static_assert(!(STATE & SecurityStateSet), "property securityState should not be set yet");
            m_result->SetSecurityState(value);
            return castState<SecurityStateSet>();
        }

        ResponseBuilder<STATE>& SetSecurityDetails(std::unique_ptr<protocol::Network::SecurityDetails> value)
        {
            m_result->SetSecurityDetails(std::move(value));
            return *this;
        }

        std::unique_ptr<Response> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Response;
        ResponseBuilder() : m_result(new Response()) { }

        template<int STEP> ResponseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ResponseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Response> m_result;
    };

    static ResponseBuilder<0> Create()
    {
        return ResponseBuilder<0>();
    }

private:
    Response()
    {
          m_status = 0;
          m_connectionReused = false;
          m_connectionId = 0;
          m_encodedDataLength = 0;
    }

    String m_url;
    int m_status;
    String m_statusText;
    std::unique_ptr<protocol::Network::Headers> m_headers;
    Maybe<String> m_headersText;
    String m_mimeType;
    Maybe<protocol::Network::Headers> m_requestHeaders;
    Maybe<String> m_requestHeadersText;
    bool m_connectionReused;
    double m_connectionId;
    Maybe<String> m_remoteIPAddress;
    Maybe<int> m_remotePort;
    Maybe<bool> m_fromDiskCache;
    Maybe<bool> m_fromServiceWorker;
    double m_encodedDataLength;
    Maybe<protocol::Network::ResourceTiming> m_timing;
    Maybe<String> m_protocol;
    String m_securityState;
    Maybe<protocol::Network::SecurityDetails> m_securityDetails;
};


class CONTENT_EXPORT Initiator : public Serializable{
    PROTOCOL_DISALLOW_COPY(Initiator);
public:
    static std::unique_ptr<Initiator> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Initiator() override { }

    struct CONTENT_EXPORT TypeEnum {
        static const char* Parser;
        static const char* Script;
        static const char* Preload;
        static const char* SignedExchange;
        static const char* Other;
    }; // TypeEnum

    String GetType() { return m_type; }
    void SetType(const String& value) { m_type = value; }

    bool HasStack() { return m_stack.isJust(); }
    protocol::Runtime::StackTrace* GetStack(protocol::Runtime::StackTrace* defaultValue) { return m_stack.isJust() ? m_stack.fromJust() : defaultValue; }
    void SetStack(std::unique_ptr<protocol::Runtime::StackTrace> value) { m_stack = std::move(value); }

    bool HasUrl() { return m_url.isJust(); }
    String GetUrl(const String& defaultValue) { return m_url.isJust() ? m_url.fromJust() : defaultValue; }
    void SetUrl(const String& value) { m_url = value; }

    bool HasLineNumber() { return m_lineNumber.isJust(); }
    double GetLineNumber(double defaultValue) { return m_lineNumber.isJust() ? m_lineNumber.fromJust() : defaultValue; }
    void SetLineNumber(double value) { m_lineNumber = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Initiator> clone() const;

    template<int STATE>
    class InitiatorBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TypeSet = 1 << 1,
            AllFieldsSet = (TypeSet | 0)};


        InitiatorBuilder<STATE | TypeSet>& SetType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->SetType(value);
            return castState<TypeSet>();
        }

        InitiatorBuilder<STATE>& SetStack(std::unique_ptr<protocol::Runtime::StackTrace> value)
        {
            m_result->SetStack(std::move(value));
            return *this;
        }

        InitiatorBuilder<STATE>& SetUrl(const String& value)
        {
            m_result->SetUrl(value);
            return *this;
        }

        InitiatorBuilder<STATE>& SetLineNumber(double value)
        {
            m_result->SetLineNumber(value);
            return *this;
        }

        std::unique_ptr<Initiator> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Initiator;
        InitiatorBuilder() : m_result(new Initiator()) { }

        template<int STEP> InitiatorBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<InitiatorBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Initiator> m_result;
    };

    static InitiatorBuilder<0> Create()
    {
        return InitiatorBuilder<0>();
    }

private:
    Initiator()
    {
    }

    String m_type;
    Maybe<protocol::Runtime::StackTrace> m_stack;
    Maybe<String> m_url;
    Maybe<double> m_lineNumber;
};


class CONTENT_EXPORT Cookie : public Serializable{
    PROTOCOL_DISALLOW_COPY(Cookie);
public:
    static std::unique_ptr<Cookie> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Cookie() override { }

    String GetName() { return m_name; }
    void SetName(const String& value) { m_name = value; }

    String GetValue() { return m_value; }
    void SetValue(const String& value) { m_value = value; }

    String GetDomain() { return m_domain; }
    void SetDomain(const String& value) { m_domain = value; }

    String GetPath() { return m_path; }
    void SetPath(const String& value) { m_path = value; }

    double GetExpires() { return m_expires; }
    void SetExpires(double value) { m_expires = value; }

    int GetSize() { return m_size; }
    void SetSize(int value) { m_size = value; }

    bool GetHttpOnly() { return m_httpOnly; }
    void SetHttpOnly(bool value) { m_httpOnly = value; }

    bool GetSecure() { return m_secure; }
    void SetSecure(bool value) { m_secure = value; }

    bool GetSession() { return m_session; }
    void SetSession(bool value) { m_session = value; }

    bool HasSameSite() { return m_sameSite.isJust(); }
    String GetSameSite(const String& defaultValue) { return m_sameSite.isJust() ? m_sameSite.fromJust() : defaultValue; }
    void SetSameSite(const String& value) { m_sameSite = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Cookie> clone() const;

    template<int STATE>
    class CookieBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            ValueSet = 1 << 2,
            DomainSet = 1 << 3,
            PathSet = 1 << 4,
            ExpiresSet = 1 << 5,
            SizeSet = 1 << 6,
            HttpOnlySet = 1 << 7,
            SecureSet = 1 << 8,
            SessionSet = 1 << 9,
            AllFieldsSet = (NameSet | ValueSet | DomainSet | PathSet | ExpiresSet | SizeSet | HttpOnlySet | SecureSet | SessionSet | 0)};


        CookieBuilder<STATE | NameSet>& SetName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->SetName(value);
            return castState<NameSet>();
        }

        CookieBuilder<STATE | ValueSet>& SetValue(const String& value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->SetValue(value);
            return castState<ValueSet>();
        }

        CookieBuilder<STATE | DomainSet>& SetDomain(const String& value)
        {
            static_assert(!(STATE & DomainSet), "property domain should not be set yet");
            m_result->SetDomain(value);
            return castState<DomainSet>();
        }

        CookieBuilder<STATE | PathSet>& SetPath(const String& value)
        {
            static_assert(!(STATE & PathSet), "property path should not be set yet");
            m_result->SetPath(value);
            return castState<PathSet>();
        }

        CookieBuilder<STATE | ExpiresSet>& SetExpires(double value)
        {
            static_assert(!(STATE & ExpiresSet), "property expires should not be set yet");
            m_result->SetExpires(value);
            return castState<ExpiresSet>();
        }

        CookieBuilder<STATE | SizeSet>& SetSize(int value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->SetSize(value);
            return castState<SizeSet>();
        }

        CookieBuilder<STATE | HttpOnlySet>& SetHttpOnly(bool value)
        {
            static_assert(!(STATE & HttpOnlySet), "property httpOnly should not be set yet");
            m_result->SetHttpOnly(value);
            return castState<HttpOnlySet>();
        }

        CookieBuilder<STATE | SecureSet>& SetSecure(bool value)
        {
            static_assert(!(STATE & SecureSet), "property secure should not be set yet");
            m_result->SetSecure(value);
            return castState<SecureSet>();
        }

        CookieBuilder<STATE | SessionSet>& SetSession(bool value)
        {
            static_assert(!(STATE & SessionSet), "property session should not be set yet");
            m_result->SetSession(value);
            return castState<SessionSet>();
        }

        CookieBuilder<STATE>& SetSameSite(const String& value)
        {
            m_result->SetSameSite(value);
            return *this;
        }

        std::unique_ptr<Cookie> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Cookie;
        CookieBuilder() : m_result(new Cookie()) { }

        template<int STEP> CookieBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CookieBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Cookie> m_result;
    };

    static CookieBuilder<0> Create()
    {
        return CookieBuilder<0>();
    }

private:
    Cookie()
    {
          m_expires = 0;
          m_size = 0;
          m_httpOnly = false;
          m_secure = false;
          m_session = false;
    }

    String m_name;
    String m_value;
    String m_domain;
    String m_path;
    double m_expires;
    int m_size;
    bool m_httpOnly;
    bool m_secure;
    bool m_session;
    Maybe<String> m_sameSite;
};


class CONTENT_EXPORT CookieParam : public Serializable{
    PROTOCOL_DISALLOW_COPY(CookieParam);
public:
    static std::unique_ptr<CookieParam> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CookieParam() override { }

    String GetName() { return m_name; }
    void SetName(const String& value) { m_name = value; }

    String GetValue() { return m_value; }
    void SetValue(const String& value) { m_value = value; }

    bool HasUrl() { return m_url.isJust(); }
    String GetUrl(const String& defaultValue) { return m_url.isJust() ? m_url.fromJust() : defaultValue; }
    void SetUrl(const String& value) { m_url = value; }

    bool HasDomain() { return m_domain.isJust(); }
    String GetDomain(const String& defaultValue) { return m_domain.isJust() ? m_domain.fromJust() : defaultValue; }
    void SetDomain(const String& value) { m_domain = value; }

    bool HasPath() { return m_path.isJust(); }
    String GetPath(const String& defaultValue) { return m_path.isJust() ? m_path.fromJust() : defaultValue; }
    void SetPath(const String& value) { m_path = value; }

    bool HasSecure() { return m_secure.isJust(); }
    bool GetSecure(bool defaultValue) { return m_secure.isJust() ? m_secure.fromJust() : defaultValue; }
    void SetSecure(bool value) { m_secure = value; }

    bool HasHttpOnly() { return m_httpOnly.isJust(); }
    bool GetHttpOnly(bool defaultValue) { return m_httpOnly.isJust() ? m_httpOnly.fromJust() : defaultValue; }
    void SetHttpOnly(bool value) { m_httpOnly = value; }

    bool HasSameSite() { return m_sameSite.isJust(); }
    String GetSameSite(const String& defaultValue) { return m_sameSite.isJust() ? m_sameSite.fromJust() : defaultValue; }
    void SetSameSite(const String& value) { m_sameSite = value; }

    bool HasExpires() { return m_expires.isJust(); }
    double GetExpires(double defaultValue) { return m_expires.isJust() ? m_expires.fromJust() : defaultValue; }
    void SetExpires(double value) { m_expires = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CookieParam> clone() const;

    template<int STATE>
    class CookieParamBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            ValueSet = 1 << 2,
            AllFieldsSet = (NameSet | ValueSet | 0)};


        CookieParamBuilder<STATE | NameSet>& SetName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->SetName(value);
            return castState<NameSet>();
        }

        CookieParamBuilder<STATE | ValueSet>& SetValue(const String& value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->SetValue(value);
            return castState<ValueSet>();
        }

        CookieParamBuilder<STATE>& SetUrl(const String& value)
        {
            m_result->SetUrl(value);
            return *this;
        }

        CookieParamBuilder<STATE>& SetDomain(const String& value)
        {
            m_result->SetDomain(value);
            return *this;
        }

        CookieParamBuilder<STATE>& SetPath(const String& value)
        {
            m_result->SetPath(value);
            return *this;
        }

        CookieParamBuilder<STATE>& SetSecure(bool value)
        {
            m_result->SetSecure(value);
            return *this;
        }

        CookieParamBuilder<STATE>& SetHttpOnly(bool value)
        {
            m_result->SetHttpOnly(value);
            return *this;
        }

        CookieParamBuilder<STATE>& SetSameSite(const String& value)
        {
            m_result->SetSameSite(value);
            return *this;
        }

        CookieParamBuilder<STATE>& SetExpires(double value)
        {
            m_result->SetExpires(value);
            return *this;
        }

        std::unique_ptr<CookieParam> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CookieParam;
        CookieParamBuilder() : m_result(new CookieParam()) { }

        template<int STEP> CookieParamBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CookieParamBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::CookieParam> m_result;
    };

    static CookieParamBuilder<0> Create()
    {
        return CookieParamBuilder<0>();
    }

private:
    CookieParam()
    {
    }

    String m_name;
    String m_value;
    Maybe<String> m_url;
    Maybe<String> m_domain;
    Maybe<String> m_path;
    Maybe<bool> m_secure;
    Maybe<bool> m_httpOnly;
    Maybe<String> m_sameSite;
    Maybe<double> m_expires;
};


class CONTENT_EXPORT AuthChallenge : public Serializable{
    PROTOCOL_DISALLOW_COPY(AuthChallenge);
public:
    static std::unique_ptr<AuthChallenge> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AuthChallenge() override { }

    struct CONTENT_EXPORT SourceEnum {
        static const char* Server;
        static const char* Proxy;
    }; // SourceEnum

    bool HasSource() { return m_source.isJust(); }
    String GetSource(const String& defaultValue) { return m_source.isJust() ? m_source.fromJust() : defaultValue; }
    void SetSource(const String& value) { m_source = value; }

    String GetOrigin() { return m_origin; }
    void SetOrigin(const String& value) { m_origin = value; }

    String GetScheme() { return m_scheme; }
    void SetScheme(const String& value) { m_scheme = value; }

    String GetRealm() { return m_realm; }
    void SetRealm(const String& value) { m_realm = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<AuthChallenge> clone() const;

    template<int STATE>
    class AuthChallengeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OriginSet = 1 << 1,
            SchemeSet = 1 << 2,
            RealmSet = 1 << 3,
            AllFieldsSet = (OriginSet | SchemeSet | RealmSet | 0)};


        AuthChallengeBuilder<STATE>& SetSource(const String& value)
        {
            m_result->SetSource(value);
            return *this;
        }

        AuthChallengeBuilder<STATE | OriginSet>& SetOrigin(const String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->SetOrigin(value);
            return castState<OriginSet>();
        }

        AuthChallengeBuilder<STATE | SchemeSet>& SetScheme(const String& value)
        {
            static_assert(!(STATE & SchemeSet), "property scheme should not be set yet");
            m_result->SetScheme(value);
            return castState<SchemeSet>();
        }

        AuthChallengeBuilder<STATE | RealmSet>& SetRealm(const String& value)
        {
            static_assert(!(STATE & RealmSet), "property realm should not be set yet");
            m_result->SetRealm(value);
            return castState<RealmSet>();
        }

        std::unique_ptr<AuthChallenge> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AuthChallenge;
        AuthChallengeBuilder() : m_result(new AuthChallenge()) { }

        template<int STEP> AuthChallengeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AuthChallengeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::AuthChallenge> m_result;
    };

    static AuthChallengeBuilder<0> Create()
    {
        return AuthChallengeBuilder<0>();
    }

private:
    AuthChallenge()
    {
    }

    Maybe<String> m_source;
    String m_origin;
    String m_scheme;
    String m_realm;
};


class CONTENT_EXPORT AuthChallengeResponse : public Serializable{
    PROTOCOL_DISALLOW_COPY(AuthChallengeResponse);
public:
    static std::unique_ptr<AuthChallengeResponse> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AuthChallengeResponse() override { }

    struct CONTENT_EXPORT ResponseEnum {
        static const char* Default;
        static const char* CancelAuth;
        static const char* ProvideCredentials;
    }; // ResponseEnum

    String GetResponse() { return m_response; }
    void SetResponse(const String& value) { m_response = value; }

    bool HasUsername() { return m_username.isJust(); }
    String GetUsername(const String& defaultValue) { return m_username.isJust() ? m_username.fromJust() : defaultValue; }
    void SetUsername(const String& value) { m_username = value; }

    bool HasPassword() { return m_password.isJust(); }
    String GetPassword(const String& defaultValue) { return m_password.isJust() ? m_password.fromJust() : defaultValue; }
    void SetPassword(const String& value) { m_password = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<AuthChallengeResponse> clone() const;

    template<int STATE>
    class AuthChallengeResponseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ResponseSet = 1 << 1,
            AllFieldsSet = (ResponseSet | 0)};


        AuthChallengeResponseBuilder<STATE | ResponseSet>& SetResponse(const String& value)
        {
            static_assert(!(STATE & ResponseSet), "property response should not be set yet");
            m_result->SetResponse(value);
            return castState<ResponseSet>();
        }

        AuthChallengeResponseBuilder<STATE>& SetUsername(const String& value)
        {
            m_result->SetUsername(value);
            return *this;
        }

        AuthChallengeResponseBuilder<STATE>& SetPassword(const String& value)
        {
            m_result->SetPassword(value);
            return *this;
        }

        std::unique_ptr<AuthChallengeResponse> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AuthChallengeResponse;
        AuthChallengeResponseBuilder() : m_result(new AuthChallengeResponse()) { }

        template<int STEP> AuthChallengeResponseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AuthChallengeResponseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::AuthChallengeResponse> m_result;
    };

    static AuthChallengeResponseBuilder<0> Create()
    {
        return AuthChallengeResponseBuilder<0>();
    }

private:
    AuthChallengeResponse()
    {
    }

    String m_response;
    Maybe<String> m_username;
    Maybe<String> m_password;
};


class CONTENT_EXPORT RequestPattern : public Serializable{
    PROTOCOL_DISALLOW_COPY(RequestPattern);
public:
    static std::unique_ptr<RequestPattern> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~RequestPattern() override { }

    bool HasUrlPattern() { return m_urlPattern.isJust(); }
    String GetUrlPattern(const String& defaultValue) { return m_urlPattern.isJust() ? m_urlPattern.fromJust() : defaultValue; }
    void SetUrlPattern(const String& value) { m_urlPattern = value; }

    bool HasResourceType() { return m_resourceType.isJust(); }
    String GetResourceType(const String& defaultValue) { return m_resourceType.isJust() ? m_resourceType.fromJust() : defaultValue; }
    void SetResourceType(const String& value) { m_resourceType = value; }

    bool HasInterceptionStage() { return m_interceptionStage.isJust(); }
    String GetInterceptionStage(const String& defaultValue) { return m_interceptionStage.isJust() ? m_interceptionStage.fromJust() : defaultValue; }
    void SetInterceptionStage(const String& value) { m_interceptionStage = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<RequestPattern> clone() const;

    template<int STATE>
    class RequestPatternBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        RequestPatternBuilder<STATE>& SetUrlPattern(const String& value)
        {
            m_result->SetUrlPattern(value);
            return *this;
        }

        RequestPatternBuilder<STATE>& SetResourceType(const String& value)
        {
            m_result->SetResourceType(value);
            return *this;
        }

        RequestPatternBuilder<STATE>& SetInterceptionStage(const String& value)
        {
            m_result->SetInterceptionStage(value);
            return *this;
        }

        std::unique_ptr<RequestPattern> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class RequestPattern;
        RequestPatternBuilder() : m_result(new RequestPattern()) { }

        template<int STEP> RequestPatternBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RequestPatternBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::RequestPattern> m_result;
    };

    static RequestPatternBuilder<0> Create()
    {
        return RequestPatternBuilder<0>();
    }

private:
    RequestPattern()
    {
    }

    Maybe<String> m_urlPattern;
    Maybe<String> m_resourceType;
    Maybe<String> m_interceptionStage;
};


class CONTENT_EXPORT SignedExchangeSignature : public Serializable{
    PROTOCOL_DISALLOW_COPY(SignedExchangeSignature);
public:
    static std::unique_ptr<SignedExchangeSignature> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SignedExchangeSignature() override { }

    String GetLabel() { return m_label; }
    void SetLabel(const String& value) { m_label = value; }

    String GetIntegrity() { return m_integrity; }
    void SetIntegrity(const String& value) { m_integrity = value; }

    String GetCertUrl() { return m_certUrl; }
    void SetCertUrl(const String& value) { m_certUrl = value; }

    String GetValidityUrl() { return m_validityUrl; }
    void SetValidityUrl(const String& value) { m_validityUrl = value; }

    int GetDate() { return m_date; }
    void SetDate(int value) { m_date = value; }

    int GetExpires() { return m_expires; }
    void SetExpires(int value) { m_expires = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SignedExchangeSignature> clone() const;

    template<int STATE>
    class SignedExchangeSignatureBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            LabelSet = 1 << 1,
            IntegritySet = 1 << 2,
            CertUrlSet = 1 << 3,
            ValidityUrlSet = 1 << 4,
            DateSet = 1 << 5,
            ExpiresSet = 1 << 6,
            AllFieldsSet = (LabelSet | IntegritySet | CertUrlSet | ValidityUrlSet | DateSet | ExpiresSet | 0)};


        SignedExchangeSignatureBuilder<STATE | LabelSet>& SetLabel(const String& value)
        {
            static_assert(!(STATE & LabelSet), "property label should not be set yet");
            m_result->SetLabel(value);
            return castState<LabelSet>();
        }

        SignedExchangeSignatureBuilder<STATE | IntegritySet>& SetIntegrity(const String& value)
        {
            static_assert(!(STATE & IntegritySet), "property integrity should not be set yet");
            m_result->SetIntegrity(value);
            return castState<IntegritySet>();
        }

        SignedExchangeSignatureBuilder<STATE | CertUrlSet>& SetCertUrl(const String& value)
        {
            static_assert(!(STATE & CertUrlSet), "property certUrl should not be set yet");
            m_result->SetCertUrl(value);
            return castState<CertUrlSet>();
        }

        SignedExchangeSignatureBuilder<STATE | ValidityUrlSet>& SetValidityUrl(const String& value)
        {
            static_assert(!(STATE & ValidityUrlSet), "property validityUrl should not be set yet");
            m_result->SetValidityUrl(value);
            return castState<ValidityUrlSet>();
        }

        SignedExchangeSignatureBuilder<STATE | DateSet>& SetDate(int value)
        {
            static_assert(!(STATE & DateSet), "property date should not be set yet");
            m_result->SetDate(value);
            return castState<DateSet>();
        }

        SignedExchangeSignatureBuilder<STATE | ExpiresSet>& SetExpires(int value)
        {
            static_assert(!(STATE & ExpiresSet), "property expires should not be set yet");
            m_result->SetExpires(value);
            return castState<ExpiresSet>();
        }

        std::unique_ptr<SignedExchangeSignature> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SignedExchangeSignature;
        SignedExchangeSignatureBuilder() : m_result(new SignedExchangeSignature()) { }

        template<int STEP> SignedExchangeSignatureBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SignedExchangeSignatureBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SignedExchangeSignature> m_result;
    };

    static SignedExchangeSignatureBuilder<0> Create()
    {
        return SignedExchangeSignatureBuilder<0>();
    }

private:
    SignedExchangeSignature()
    {
          m_date = 0;
          m_expires = 0;
    }

    String m_label;
    String m_integrity;
    String m_certUrl;
    String m_validityUrl;
    int m_date;
    int m_expires;
};


class CONTENT_EXPORT SignedExchangeHeader : public Serializable{
    PROTOCOL_DISALLOW_COPY(SignedExchangeHeader);
public:
    static std::unique_ptr<SignedExchangeHeader> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SignedExchangeHeader() override { }

    String GetRequestUrl() { return m_requestUrl; }
    void SetRequestUrl(const String& value) { m_requestUrl = value; }

    String GetRequestMethod() { return m_requestMethod; }
    void SetRequestMethod(const String& value) { m_requestMethod = value; }

    int GetResponseCode() { return m_responseCode; }
    void SetResponseCode(int value) { m_responseCode = value; }

    protocol::Network::Headers* GetResponseHeaders() { return m_responseHeaders.get(); }
    void SetResponseHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_responseHeaders = std::move(value); }

    protocol::Array<protocol::Network::SignedExchangeSignature>* GetSignatures() { return m_signatures.get(); }
    void SetSignatures(std::unique_ptr<protocol::Array<protocol::Network::SignedExchangeSignature>> value) { m_signatures = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SignedExchangeHeader> clone() const;

    template<int STATE>
    class SignedExchangeHeaderBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestUrlSet = 1 << 1,
            RequestMethodSet = 1 << 2,
            ResponseCodeSet = 1 << 3,
            ResponseHeadersSet = 1 << 4,
            SignaturesSet = 1 << 5,
            AllFieldsSet = (RequestUrlSet | RequestMethodSet | ResponseCodeSet | ResponseHeadersSet | SignaturesSet | 0)};


        SignedExchangeHeaderBuilder<STATE | RequestUrlSet>& SetRequestUrl(const String& value)
        {
            static_assert(!(STATE & RequestUrlSet), "property requestUrl should not be set yet");
            m_result->SetRequestUrl(value);
            return castState<RequestUrlSet>();
        }

        SignedExchangeHeaderBuilder<STATE | RequestMethodSet>& SetRequestMethod(const String& value)
        {
            static_assert(!(STATE & RequestMethodSet), "property requestMethod should not be set yet");
            m_result->SetRequestMethod(value);
            return castState<RequestMethodSet>();
        }

        SignedExchangeHeaderBuilder<STATE | ResponseCodeSet>& SetResponseCode(int value)
        {
            static_assert(!(STATE & ResponseCodeSet), "property responseCode should not be set yet");
            m_result->SetResponseCode(value);
            return castState<ResponseCodeSet>();
        }

        SignedExchangeHeaderBuilder<STATE | ResponseHeadersSet>& SetResponseHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & ResponseHeadersSet), "property responseHeaders should not be set yet");
            m_result->SetResponseHeaders(std::move(value));
            return castState<ResponseHeadersSet>();
        }

        SignedExchangeHeaderBuilder<STATE | SignaturesSet>& SetSignatures(std::unique_ptr<protocol::Array<protocol::Network::SignedExchangeSignature>> value)
        {
            static_assert(!(STATE & SignaturesSet), "property signatures should not be set yet");
            m_result->SetSignatures(std::move(value));
            return castState<SignaturesSet>();
        }

        std::unique_ptr<SignedExchangeHeader> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SignedExchangeHeader;
        SignedExchangeHeaderBuilder() : m_result(new SignedExchangeHeader()) { }

        template<int STEP> SignedExchangeHeaderBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SignedExchangeHeaderBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SignedExchangeHeader> m_result;
    };

    static SignedExchangeHeaderBuilder<0> Create()
    {
        return SignedExchangeHeaderBuilder<0>();
    }

private:
    SignedExchangeHeader()
    {
          m_responseCode = 0;
    }

    String m_requestUrl;
    String m_requestMethod;
    int m_responseCode;
    std::unique_ptr<protocol::Network::Headers> m_responseHeaders;
    std::unique_ptr<protocol::Array<protocol::Network::SignedExchangeSignature>> m_signatures;
};


class CONTENT_EXPORT SignedExchangeInfo : public Serializable{
    PROTOCOL_DISALLOW_COPY(SignedExchangeInfo);
public:
    static std::unique_ptr<SignedExchangeInfo> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SignedExchangeInfo() override { }

    protocol::Network::Response* GetOuterResponse() { return m_outerResponse.get(); }
    void SetOuterResponse(std::unique_ptr<protocol::Network::Response> value) { m_outerResponse = std::move(value); }

    bool HasHeader() { return m_header.isJust(); }
    protocol::Network::SignedExchangeHeader* GetHeader(protocol::Network::SignedExchangeHeader* defaultValue) { return m_header.isJust() ? m_header.fromJust() : defaultValue; }
    void SetHeader(std::unique_ptr<protocol::Network::SignedExchangeHeader> value) { m_header = std::move(value); }

    bool HasSecurityDetails() { return m_securityDetails.isJust(); }
    protocol::Network::SecurityDetails* GetSecurityDetails(protocol::Network::SecurityDetails* defaultValue) { return m_securityDetails.isJust() ? m_securityDetails.fromJust() : defaultValue; }
    void SetSecurityDetails(std::unique_ptr<protocol::Network::SecurityDetails> value) { m_securityDetails = std::move(value); }

    bool HasErrors() { return m_errors.isJust(); }
    protocol::Array<String>* GetErrors(protocol::Array<String>* defaultValue) { return m_errors.isJust() ? m_errors.fromJust() : defaultValue; }
    void SetErrors(std::unique_ptr<protocol::Array<String>> value) { m_errors = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SignedExchangeInfo> clone() const;

    template<int STATE>
    class SignedExchangeInfoBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OuterResponseSet = 1 << 1,
            AllFieldsSet = (OuterResponseSet | 0)};


        SignedExchangeInfoBuilder<STATE | OuterResponseSet>& SetOuterResponse(std::unique_ptr<protocol::Network::Response> value)
        {
            static_assert(!(STATE & OuterResponseSet), "property outerResponse should not be set yet");
            m_result->SetOuterResponse(std::move(value));
            return castState<OuterResponseSet>();
        }

        SignedExchangeInfoBuilder<STATE>& SetHeader(std::unique_ptr<protocol::Network::SignedExchangeHeader> value)
        {
            m_result->SetHeader(std::move(value));
            return *this;
        }

        SignedExchangeInfoBuilder<STATE>& SetSecurityDetails(std::unique_ptr<protocol::Network::SecurityDetails> value)
        {
            m_result->SetSecurityDetails(std::move(value));
            return *this;
        }

        SignedExchangeInfoBuilder<STATE>& SetErrors(std::unique_ptr<protocol::Array<String>> value)
        {
            m_result->SetErrors(std::move(value));
            return *this;
        }

        std::unique_ptr<SignedExchangeInfo> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SignedExchangeInfo;
        SignedExchangeInfoBuilder() : m_result(new SignedExchangeInfo()) { }

        template<int STEP> SignedExchangeInfoBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SignedExchangeInfoBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SignedExchangeInfo> m_result;
    };

    static SignedExchangeInfoBuilder<0> Create()
    {
        return SignedExchangeInfoBuilder<0>();
    }

private:
    SignedExchangeInfo()
    {
    }

    std::unique_ptr<protocol::Network::Response> m_outerResponse;
    Maybe<protocol::Network::SignedExchangeHeader> m_header;
    Maybe<protocol::Network::SecurityDetails> m_securityDetails;
    Maybe<protocol::Array<String>> m_errors;
};


class CONTENT_EXPORT LoadingFailedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(LoadingFailedNotification);
public:
    static std::unique_ptr<LoadingFailedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~LoadingFailedNotification() override { }

    String GetRequestId() { return m_requestId; }
    void SetRequestId(const String& value) { m_requestId = value; }

    double GetTimestamp() { return m_timestamp; }
    void SetTimestamp(double value) { m_timestamp = value; }

    String GetType() { return m_type; }
    void SetType(const String& value) { m_type = value; }

    String GetErrorText() { return m_errorText; }
    void SetErrorText(const String& value) { m_errorText = value; }

    bool HasCanceled() { return m_canceled.isJust(); }
    bool GetCanceled(bool defaultValue) { return m_canceled.isJust() ? m_canceled.fromJust() : defaultValue; }
    void SetCanceled(bool value) { m_canceled = value; }

    bool HasBlockedReason() { return m_blockedReason.isJust(); }
    String GetBlockedReason(const String& defaultValue) { return m_blockedReason.isJust() ? m_blockedReason.fromJust() : defaultValue; }
    void SetBlockedReason(const String& value) { m_blockedReason = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<LoadingFailedNotification> clone() const;

    template<int STATE>
    class LoadingFailedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestIdSet = 1 << 1,
            TimestampSet = 1 << 2,
            TypeSet = 1 << 3,
            ErrorTextSet = 1 << 4,
            AllFieldsSet = (RequestIdSet | TimestampSet | TypeSet | ErrorTextSet | 0)};


        LoadingFailedNotificationBuilder<STATE | RequestIdSet>& SetRequestId(const String& value)
        {
            static_assert(!(STATE & RequestIdSet), "property requestId should not be set yet");
            m_result->SetRequestId(value);
            return castState<RequestIdSet>();
        }

        LoadingFailedNotificationBuilder<STATE | TimestampSet>& SetTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->SetTimestamp(value);
            return castState<TimestampSet>();
        }

        LoadingFailedNotificationBuilder<STATE | TypeSet>& SetType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->SetType(value);
            return castState<TypeSet>();
        }

        LoadingFailedNotificationBuilder<STATE | ErrorTextSet>& SetErrorText(const String& value)
        {
            static_assert(!(STATE & ErrorTextSet), "property errorText should not be set yet");
            m_result->SetErrorText(value);
            return castState<ErrorTextSet>();
        }

        LoadingFailedNotificationBuilder<STATE>& SetCanceled(bool value)
        {
            m_result->SetCanceled(value);
            return *this;
        }

        LoadingFailedNotificationBuilder<STATE>& SetBlockedReason(const String& value)
        {
            m_result->SetBlockedReason(value);
            return *this;
        }

        std::unique_ptr<LoadingFailedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class LoadingFailedNotification;
        LoadingFailedNotificationBuilder() : m_result(new LoadingFailedNotification()) { }

        template<int STEP> LoadingFailedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<LoadingFailedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::LoadingFailedNotification> m_result;
    };

    static LoadingFailedNotificationBuilder<0> Create()
    {
        return LoadingFailedNotificationBuilder<0>();
    }

private:
    LoadingFailedNotification()
    {
          m_timestamp = 0;
    }

    String m_requestId;
    double m_timestamp;
    String m_type;
    String m_errorText;
    Maybe<bool> m_canceled;
    Maybe<String> m_blockedReason;
};


class CONTENT_EXPORT LoadingFinishedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(LoadingFinishedNotification);
public:
    static std::unique_ptr<LoadingFinishedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~LoadingFinishedNotification() override { }

    String GetRequestId() { return m_requestId; }
    void SetRequestId(const String& value) { m_requestId = value; }

    double GetTimestamp() { return m_timestamp; }
    void SetTimestamp(double value) { m_timestamp = value; }

    double GetEncodedDataLength() { return m_encodedDataLength; }
    void SetEncodedDataLength(double value) { m_encodedDataLength = value; }

    bool HasBlockedCrossSiteDocument() { return m_blockedCrossSiteDocument.isJust(); }
    bool GetBlockedCrossSiteDocument(bool defaultValue) { return m_blockedCrossSiteDocument.isJust() ? m_blockedCrossSiteDocument.fromJust() : defaultValue; }
    void SetBlockedCrossSiteDocument(bool value) { m_blockedCrossSiteDocument = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<LoadingFinishedNotification> clone() const;

    template<int STATE>
    class LoadingFinishedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestIdSet = 1 << 1,
            TimestampSet = 1 << 2,
            EncodedDataLengthSet = 1 << 3,
            AllFieldsSet = (RequestIdSet | TimestampSet | EncodedDataLengthSet | 0)};


        LoadingFinishedNotificationBuilder<STATE | RequestIdSet>& SetRequestId(const String& value)
        {
            static_assert(!(STATE & RequestIdSet), "property requestId should not be set yet");
            m_result->SetRequestId(value);
            return castState<RequestIdSet>();
        }

        LoadingFinishedNotificationBuilder<STATE | TimestampSet>& SetTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->SetTimestamp(value);
            return castState<TimestampSet>();
        }

        LoadingFinishedNotificationBuilder<STATE | EncodedDataLengthSet>& SetEncodedDataLength(double value)
        {
            static_assert(!(STATE & EncodedDataLengthSet), "property encodedDataLength should not be set yet");
            m_result->SetEncodedDataLength(value);
            return castState<EncodedDataLengthSet>();
        }

        LoadingFinishedNotificationBuilder<STATE>& SetBlockedCrossSiteDocument(bool value)
        {
            m_result->SetBlockedCrossSiteDocument(value);
            return *this;
        }

        std::unique_ptr<LoadingFinishedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class LoadingFinishedNotification;
        LoadingFinishedNotificationBuilder() : m_result(new LoadingFinishedNotification()) { }

        template<int STEP> LoadingFinishedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<LoadingFinishedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::LoadingFinishedNotification> m_result;
    };

    static LoadingFinishedNotificationBuilder<0> Create()
    {
        return LoadingFinishedNotificationBuilder<0>();
    }

private:
    LoadingFinishedNotification()
    {
          m_timestamp = 0;
          m_encodedDataLength = 0;
    }

    String m_requestId;
    double m_timestamp;
    double m_encodedDataLength;
    Maybe<bool> m_blockedCrossSiteDocument;
};


class CONTENT_EXPORT RequestInterceptedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(RequestInterceptedNotification);
public:
    static std::unique_ptr<RequestInterceptedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~RequestInterceptedNotification() override { }

    String GetInterceptionId() { return m_interceptionId; }
    void SetInterceptionId(const String& value) { m_interceptionId = value; }

    protocol::Network::Request* GetRequest() { return m_request.get(); }
    void SetRequest(std::unique_ptr<protocol::Network::Request> value) { m_request = std::move(value); }

    String GetFrameId() { return m_frameId; }
    void SetFrameId(const String& value) { m_frameId = value; }

    String GetResourceType() { return m_resourceType; }
    void SetResourceType(const String& value) { m_resourceType = value; }

    bool GetIsNavigationRequest() { return m_isNavigationRequest; }
    void SetIsNavigationRequest(bool value) { m_isNavigationRequest = value; }

    bool HasIsDownload() { return m_isDownload.isJust(); }
    bool GetIsDownload(bool defaultValue) { return m_isDownload.isJust() ? m_isDownload.fromJust() : defaultValue; }
    void SetIsDownload(bool value) { m_isDownload = value; }

    bool HasRedirectUrl() { return m_redirectUrl.isJust(); }
    String GetRedirectUrl(const String& defaultValue) { return m_redirectUrl.isJust() ? m_redirectUrl.fromJust() : defaultValue; }
    void SetRedirectUrl(const String& value) { m_redirectUrl = value; }

    bool HasAuthChallenge() { return m_authChallenge.isJust(); }
    protocol::Network::AuthChallenge* GetAuthChallenge(protocol::Network::AuthChallenge* defaultValue) { return m_authChallenge.isJust() ? m_authChallenge.fromJust() : defaultValue; }
    void SetAuthChallenge(std::unique_ptr<protocol::Network::AuthChallenge> value) { m_authChallenge = std::move(value); }

    bool HasResponseErrorReason() { return m_responseErrorReason.isJust(); }
    String GetResponseErrorReason(const String& defaultValue) { return m_responseErrorReason.isJust() ? m_responseErrorReason.fromJust() : defaultValue; }
    void SetResponseErrorReason(const String& value) { m_responseErrorReason = value; }

    bool HasResponseStatusCode() { return m_responseStatusCode.isJust(); }
    int GetResponseStatusCode(int defaultValue) { return m_responseStatusCode.isJust() ? m_responseStatusCode.fromJust() : defaultValue; }
    void SetResponseStatusCode(int value) { m_responseStatusCode = value; }

    bool HasResponseHeaders() { return m_responseHeaders.isJust(); }
    protocol::Network::Headers* GetResponseHeaders(protocol::Network::Headers* defaultValue) { return m_responseHeaders.isJust() ? m_responseHeaders.fromJust() : defaultValue; }
    void SetResponseHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_responseHeaders = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<RequestInterceptedNotification> clone() const;

    template<int STATE>
    class RequestInterceptedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            InterceptionIdSet = 1 << 1,
            RequestSet = 1 << 2,
            FrameIdSet = 1 << 3,
            ResourceTypeSet = 1 << 4,
            IsNavigationRequestSet = 1 << 5,
            AllFieldsSet = (InterceptionIdSet | RequestSet | FrameIdSet | ResourceTypeSet | IsNavigationRequestSet | 0)};


        RequestInterceptedNotificationBuilder<STATE | InterceptionIdSet>& SetInterceptionId(const String& value)
        {
            static_assert(!(STATE & InterceptionIdSet), "property interceptionId should not be set yet");
            m_result->SetInterceptionId(value);
            return castState<InterceptionIdSet>();
        }

        RequestInterceptedNotificationBuilder<STATE | RequestSet>& SetRequest(std::unique_ptr<protocol::Network::Request> value)
        {
            static_assert(!(STATE & RequestSet), "property request should not be set yet");
            m_result->SetRequest(std::move(value));
            return castState<RequestSet>();
        }

        RequestInterceptedNotificationBuilder<STATE | FrameIdSet>& SetFrameId(const String& value)
        {
            static_assert(!(STATE & FrameIdSet), "property frameId should not be set yet");
            m_result->SetFrameId(value);
            return castState<FrameIdSet>();
        }

        RequestInterceptedNotificationBuilder<STATE | ResourceTypeSet>& SetResourceType(const String& value)
        {
            static_assert(!(STATE & ResourceTypeSet), "property resourceType should not be set yet");
            m_result->SetResourceType(value);
            return castState<ResourceTypeSet>();
        }

        RequestInterceptedNotificationBuilder<STATE | IsNavigationRequestSet>& SetIsNavigationRequest(bool value)
        {
            static_assert(!(STATE & IsNavigationRequestSet), "property isNavigationRequest should not be set yet");
            m_result->SetIsNavigationRequest(value);
            return castState<IsNavigationRequestSet>();
        }

        RequestInterceptedNotificationBuilder<STATE>& SetIsDownload(bool value)
        {
            m_result->SetIsDownload(value);
            return *this;
        }

        RequestInterceptedNotificationBuilder<STATE>& SetRedirectUrl(const String& value)
        {
            m_result->SetRedirectUrl(value);
            return *this;
        }

        RequestInterceptedNotificationBuilder<STATE>& SetAuthChallenge(std::unique_ptr<protocol::Network::AuthChallenge> value)
        {
            m_result->SetAuthChallenge(std::move(value));
            return *this;
        }

        RequestInterceptedNotificationBuilder<STATE>& SetResponseErrorReason(const String& value)
        {
            m_result->SetResponseErrorReason(value);
            return *this;
        }

        RequestInterceptedNotificationBuilder<STATE>& SetResponseStatusCode(int value)
        {
            m_result->SetResponseStatusCode(value);
            return *this;
        }

        RequestInterceptedNotificationBuilder<STATE>& SetResponseHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            m_result->SetResponseHeaders(std::move(value));
            return *this;
        }

        std::unique_ptr<RequestInterceptedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class RequestInterceptedNotification;
        RequestInterceptedNotificationBuilder() : m_result(new RequestInterceptedNotification()) { }

        template<int STEP> RequestInterceptedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RequestInterceptedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::RequestInterceptedNotification> m_result;
    };

    static RequestInterceptedNotificationBuilder<0> Create()
    {
        return RequestInterceptedNotificationBuilder<0>();
    }

private:
    RequestInterceptedNotification()
    {
          m_isNavigationRequest = false;
    }

    String m_interceptionId;
    std::unique_ptr<protocol::Network::Request> m_request;
    String m_frameId;
    String m_resourceType;
    bool m_isNavigationRequest;
    Maybe<bool> m_isDownload;
    Maybe<String> m_redirectUrl;
    Maybe<protocol::Network::AuthChallenge> m_authChallenge;
    Maybe<String> m_responseErrorReason;
    Maybe<int> m_responseStatusCode;
    Maybe<protocol::Network::Headers> m_responseHeaders;
};


class CONTENT_EXPORT RequestWillBeSentNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(RequestWillBeSentNotification);
public:
    static std::unique_ptr<RequestWillBeSentNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~RequestWillBeSentNotification() override { }

    String GetRequestId() { return m_requestId; }
    void SetRequestId(const String& value) { m_requestId = value; }

    String GetLoaderId() { return m_loaderId; }
    void SetLoaderId(const String& value) { m_loaderId = value; }

    String GetDocumentURL() { return m_documentURL; }
    void SetDocumentURL(const String& value) { m_documentURL = value; }

    protocol::Network::Request* GetRequest() { return m_request.get(); }
    void SetRequest(std::unique_ptr<protocol::Network::Request> value) { m_request = std::move(value); }

    double GetTimestamp() { return m_timestamp; }
    void SetTimestamp(double value) { m_timestamp = value; }

    double GetWallTime() { return m_wallTime; }
    void SetWallTime(double value) { m_wallTime = value; }

    protocol::Network::Initiator* GetInitiator() { return m_initiator.get(); }
    void SetInitiator(std::unique_ptr<protocol::Network::Initiator> value) { m_initiator = std::move(value); }

    bool HasRedirectResponse() { return m_redirectResponse.isJust(); }
    protocol::Network::Response* GetRedirectResponse(protocol::Network::Response* defaultValue) { return m_redirectResponse.isJust() ? m_redirectResponse.fromJust() : defaultValue; }
    void SetRedirectResponse(std::unique_ptr<protocol::Network::Response> value) { m_redirectResponse = std::move(value); }

    bool HasType() { return m_type.isJust(); }
    String GetType(const String& defaultValue) { return m_type.isJust() ? m_type.fromJust() : defaultValue; }
    void SetType(const String& value) { m_type = value; }

    bool HasFrameId() { return m_frameId.isJust(); }
    String GetFrameId(const String& defaultValue) { return m_frameId.isJust() ? m_frameId.fromJust() : defaultValue; }
    void SetFrameId(const String& value) { m_frameId = value; }

    bool HasHasUserGesture() { return m_hasUserGesture.isJust(); }
    bool GetHasUserGesture(bool defaultValue) { return m_hasUserGesture.isJust() ? m_hasUserGesture.fromJust() : defaultValue; }
    void SetHasUserGesture(bool value) { m_hasUserGesture = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<RequestWillBeSentNotification> clone() const;

    template<int STATE>
    class RequestWillBeSentNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestIdSet = 1 << 1,
            LoaderIdSet = 1 << 2,
            DocumentURLSet = 1 << 3,
            RequestSet = 1 << 4,
            TimestampSet = 1 << 5,
            WallTimeSet = 1 << 6,
            InitiatorSet = 1 << 7,
            AllFieldsSet = (RequestIdSet | LoaderIdSet | DocumentURLSet | RequestSet | TimestampSet | WallTimeSet | InitiatorSet | 0)};


        RequestWillBeSentNotificationBuilder<STATE | RequestIdSet>& SetRequestId(const String& value)
        {
            static_assert(!(STATE & RequestIdSet), "property requestId should not be set yet");
            m_result->SetRequestId(value);
            return castState<RequestIdSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE | LoaderIdSet>& SetLoaderId(const String& value)
        {
            static_assert(!(STATE & LoaderIdSet), "property loaderId should not be set yet");
            m_result->SetLoaderId(value);
            return castState<LoaderIdSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE | DocumentURLSet>& SetDocumentURL(const String& value)
        {
            static_assert(!(STATE & DocumentURLSet), "property documentURL should not be set yet");
            m_result->SetDocumentURL(value);
            return castState<DocumentURLSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE | RequestSet>& SetRequest(std::unique_ptr<protocol::Network::Request> value)
        {
            static_assert(!(STATE & RequestSet), "property request should not be set yet");
            m_result->SetRequest(std::move(value));
            return castState<RequestSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE | TimestampSet>& SetTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->SetTimestamp(value);
            return castState<TimestampSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE | WallTimeSet>& SetWallTime(double value)
        {
            static_assert(!(STATE & WallTimeSet), "property wallTime should not be set yet");
            m_result->SetWallTime(value);
            return castState<WallTimeSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE | InitiatorSet>& SetInitiator(std::unique_ptr<protocol::Network::Initiator> value)
        {
            static_assert(!(STATE & InitiatorSet), "property initiator should not be set yet");
            m_result->SetInitiator(std::move(value));
            return castState<InitiatorSet>();
        }

        RequestWillBeSentNotificationBuilder<STATE>& SetRedirectResponse(std::unique_ptr<protocol::Network::Response> value)
        {
            m_result->SetRedirectResponse(std::move(value));
            return *this;
        }

        RequestWillBeSentNotificationBuilder<STATE>& SetType(const String& value)
        {
            m_result->SetType(value);
            return *this;
        }

        RequestWillBeSentNotificationBuilder<STATE>& SetFrameId(const String& value)
        {
            m_result->SetFrameId(value);
            return *this;
        }

        RequestWillBeSentNotificationBuilder<STATE>& SetHasUserGesture(bool value)
        {
            m_result->SetHasUserGesture(value);
            return *this;
        }

        std::unique_ptr<RequestWillBeSentNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class RequestWillBeSentNotification;
        RequestWillBeSentNotificationBuilder() : m_result(new RequestWillBeSentNotification()) { }

        template<int STEP> RequestWillBeSentNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RequestWillBeSentNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::RequestWillBeSentNotification> m_result;
    };

    static RequestWillBeSentNotificationBuilder<0> Create()
    {
        return RequestWillBeSentNotificationBuilder<0>();
    }

private:
    RequestWillBeSentNotification()
    {
          m_timestamp = 0;
          m_wallTime = 0;
    }

    String m_requestId;
    String m_loaderId;
    String m_documentURL;
    std::unique_ptr<protocol::Network::Request> m_request;
    double m_timestamp;
    double m_wallTime;
    std::unique_ptr<protocol::Network::Initiator> m_initiator;
    Maybe<protocol::Network::Response> m_redirectResponse;
    Maybe<String> m_type;
    Maybe<String> m_frameId;
    Maybe<bool> m_hasUserGesture;
};


class CONTENT_EXPORT SignedExchangeReceivedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(SignedExchangeReceivedNotification);
public:
    static std::unique_ptr<SignedExchangeReceivedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SignedExchangeReceivedNotification() override { }

    String GetRequestId() { return m_requestId; }
    void SetRequestId(const String& value) { m_requestId = value; }

    protocol::Network::SignedExchangeInfo* GetInfo() { return m_info.get(); }
    void SetInfo(std::unique_ptr<protocol::Network::SignedExchangeInfo> value) { m_info = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SignedExchangeReceivedNotification> clone() const;

    template<int STATE>
    class SignedExchangeReceivedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestIdSet = 1 << 1,
            InfoSet = 1 << 2,
            AllFieldsSet = (RequestIdSet | InfoSet | 0)};


        SignedExchangeReceivedNotificationBuilder<STATE | RequestIdSet>& SetRequestId(const String& value)
        {
            static_assert(!(STATE & RequestIdSet), "property requestId should not be set yet");
            m_result->SetRequestId(value);
            return castState<RequestIdSet>();
        }

        SignedExchangeReceivedNotificationBuilder<STATE | InfoSet>& SetInfo(std::unique_ptr<protocol::Network::SignedExchangeInfo> value)
        {
            static_assert(!(STATE & InfoSet), "property info should not be set yet");
            m_result->SetInfo(std::move(value));
            return castState<InfoSet>();
        }

        std::unique_ptr<SignedExchangeReceivedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SignedExchangeReceivedNotification;
        SignedExchangeReceivedNotificationBuilder() : m_result(new SignedExchangeReceivedNotification()) { }

        template<int STEP> SignedExchangeReceivedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SignedExchangeReceivedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SignedExchangeReceivedNotification> m_result;
    };

    static SignedExchangeReceivedNotificationBuilder<0> Create()
    {
        return SignedExchangeReceivedNotificationBuilder<0>();
    }

private:
    SignedExchangeReceivedNotification()
    {
    }

    String m_requestId;
    std::unique_ptr<protocol::Network::SignedExchangeInfo> m_info;
};


class CONTENT_EXPORT ResponseReceivedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ResponseReceivedNotification);
public:
    static std::unique_ptr<ResponseReceivedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ResponseReceivedNotification() override { }

    String GetRequestId() { return m_requestId; }
    void SetRequestId(const String& value) { m_requestId = value; }

    String GetLoaderId() { return m_loaderId; }
    void SetLoaderId(const String& value) { m_loaderId = value; }

    double GetTimestamp() { return m_timestamp; }
    void SetTimestamp(double value) { m_timestamp = value; }

    String GetType() { return m_type; }
    void SetType(const String& value) { m_type = value; }

    protocol::Network::Response* GetResponse() { return m_response.get(); }
    void SetResponse(std::unique_ptr<protocol::Network::Response> value) { m_response = std::move(value); }

    bool HasFrameId() { return m_frameId.isJust(); }
    String GetFrameId(const String& defaultValue) { return m_frameId.isJust() ? m_frameId.fromJust() : defaultValue; }
    void SetFrameId(const String& value) { m_frameId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ResponseReceivedNotification> clone() const;

    template<int STATE>
    class ResponseReceivedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestIdSet = 1 << 1,
            LoaderIdSet = 1 << 2,
            TimestampSet = 1 << 3,
            TypeSet = 1 << 4,
            ResponseSet = 1 << 5,
            AllFieldsSet = (RequestIdSet | LoaderIdSet | TimestampSet | TypeSet | ResponseSet | 0)};


        ResponseReceivedNotificationBuilder<STATE | RequestIdSet>& SetRequestId(const String& value)
        {
            static_assert(!(STATE & RequestIdSet), "property requestId should not be set yet");
            m_result->SetRequestId(value);
            return castState<RequestIdSet>();
        }

        ResponseReceivedNotificationBuilder<STATE | LoaderIdSet>& SetLoaderId(const String& value)
        {
            static_assert(!(STATE & LoaderIdSet), "property loaderId should not be set yet");
            m_result->SetLoaderId(value);
            return castState<LoaderIdSet>();
        }

        ResponseReceivedNotificationBuilder<STATE | TimestampSet>& SetTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->SetTimestamp(value);
            return castState<TimestampSet>();
        }

        ResponseReceivedNotificationBuilder<STATE | TypeSet>& SetType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->SetType(value);
            return castState<TypeSet>();
        }

        ResponseReceivedNotificationBuilder<STATE | ResponseSet>& SetResponse(std::unique_ptr<protocol::Network::Response> value)
        {
            static_assert(!(STATE & ResponseSet), "property response should not be set yet");
            m_result->SetResponse(std::move(value));
            return castState<ResponseSet>();
        }

        ResponseReceivedNotificationBuilder<STATE>& SetFrameId(const String& value)
        {
            m_result->SetFrameId(value);
            return *this;
        }

        std::unique_ptr<ResponseReceivedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ResponseReceivedNotification;
        ResponseReceivedNotificationBuilder() : m_result(new ResponseReceivedNotification()) { }

        template<int STEP> ResponseReceivedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ResponseReceivedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::ResponseReceivedNotification> m_result;
    };

    static ResponseReceivedNotificationBuilder<0> Create()
    {
        return ResponseReceivedNotificationBuilder<0>();
    }

private:
    ResponseReceivedNotification()
    {
          m_timestamp = 0;
    }

    String m_requestId;
    String m_loaderId;
    double m_timestamp;
    String m_type;
    std::unique_ptr<protocol::Network::Response> m_response;
    Maybe<String> m_frameId;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse CanEmulateNetworkConditions(bool* out_result) = 0;
    class CONTENT_EXPORT ClearBrowserCacheCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~ClearBrowserCacheCallback() { }
    };
    virtual void ClearBrowserCache(std::unique_ptr<ClearBrowserCacheCallback> callback) = 0;
    class CONTENT_EXPORT ClearBrowserCookiesCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~ClearBrowserCookiesCallback() { }
    };
    virtual void ClearBrowserCookies(std::unique_ptr<ClearBrowserCookiesCallback> callback) = 0;
    class CONTENT_EXPORT ContinueInterceptedRequestCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~ContinueInterceptedRequestCallback() { }
    };
    virtual void ContinueInterceptedRequest(const String& in_interceptionId, Maybe<String> in_errorReason, Maybe<String> in_rawResponse, Maybe<String> in_url, Maybe<String> in_method, Maybe<String> in_postData, Maybe<protocol::Network::Headers> in_headers, Maybe<protocol::Network::AuthChallengeResponse> in_authChallengeResponse, std::unique_ptr<ContinueInterceptedRequestCallback> callback) = 0;
    class CONTENT_EXPORT DeleteCookiesCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DeleteCookiesCallback() { }
    };
    virtual void DeleteCookies(const String& in_name, Maybe<String> in_url, Maybe<String> in_domain, Maybe<String> in_path, std::unique_ptr<DeleteCookiesCallback> callback) = 0;
    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse EmulateNetworkConditions(bool in_offline, double in_latency, double in_downloadThroughput, double in_uploadThroughput, Maybe<String> in_connectionType) = 0;
    virtual DispatchResponse Enable(Maybe<int> in_maxTotalBufferSize, Maybe<int> in_maxResourceBufferSize, Maybe<int> in_maxPostDataSize) = 0;
    class CONTENT_EXPORT GetAllCookiesCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::Network::Cookie>> cookies) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetAllCookiesCallback() { }
    };
    virtual void GetAllCookies(std::unique_ptr<GetAllCookiesCallback> callback) = 0;
    class CONTENT_EXPORT GetCookiesCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::Network::Cookie>> cookies) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetCookiesCallback() { }
    };
    virtual void GetCookies(Maybe<protocol::Array<String>> in_urls, std::unique_ptr<GetCookiesCallback> callback) = 0;
    class CONTENT_EXPORT GetResponseBodyForInterceptionCallback {
    public:
        virtual void sendSuccess(const String& body, bool base64Encoded) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetResponseBodyForInterceptionCallback() { }
    };
    virtual void GetResponseBodyForInterception(const String& in_interceptionId, std::unique_ptr<GetResponseBodyForInterceptionCallback> callback) = 0;
    class CONTENT_EXPORT TakeResponseBodyForInterceptionAsStreamCallback {
    public:
        virtual void sendSuccess(const String& stream) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~TakeResponseBodyForInterceptionAsStreamCallback() { }
    };
    virtual void TakeResponseBodyForInterceptionAsStream(const String& in_interceptionId, std::unique_ptr<TakeResponseBodyForInterceptionAsStreamCallback> callback) = 0;
    virtual DispatchResponse SetBypassServiceWorker(bool in_bypass) = 0;
    virtual DispatchResponse SetCacheDisabled(bool in_cacheDisabled) = 0;
    class CONTENT_EXPORT SetCookieCallback {
    public:
        virtual void sendSuccess(bool success) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~SetCookieCallback() { }
    };
    virtual void SetCookie(const String& in_name, const String& in_value, Maybe<String> in_url, Maybe<String> in_domain, Maybe<String> in_path, Maybe<bool> in_secure, Maybe<bool> in_httpOnly, Maybe<String> in_sameSite, Maybe<double> in_expires, std::unique_ptr<SetCookieCallback> callback) = 0;
    class CONTENT_EXPORT SetCookiesCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~SetCookiesCallback() { }
    };
    virtual void SetCookies(std::unique_ptr<protocol::Array<protocol::Network::CookieParam>> in_cookies, std::unique_ptr<SetCookiesCallback> callback) = 0;
    virtual DispatchResponse SetExtraHTTPHeaders(std::unique_ptr<protocol::Network::Headers> in_headers) = 0;
    virtual DispatchResponse SetRequestInterception(std::unique_ptr<protocol::Array<protocol::Network::RequestPattern>> in_patterns) = 0;
    virtual DispatchResponse SetUserAgentOverride(const String& in_userAgent) = 0;

};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void LoadingFailed(const String& requestId, double timestamp, const String& type, const String& errorText, Maybe<bool> canceled = Maybe<bool>(), Maybe<String> blockedReason = Maybe<String>());
    void LoadingFinished(const String& requestId, double timestamp, double encodedDataLength, Maybe<bool> blockedCrossSiteDocument = Maybe<bool>());
    void RequestIntercepted(const String& interceptionId, std::unique_ptr<protocol::Network::Request> request, const String& frameId, const String& resourceType, bool isNavigationRequest, Maybe<bool> isDownload = Maybe<bool>(), Maybe<String> redirectUrl = Maybe<String>(), Maybe<protocol::Network::AuthChallenge> authChallenge = Maybe<protocol::Network::AuthChallenge>(), Maybe<String> responseErrorReason = Maybe<String>(), Maybe<int> responseStatusCode = Maybe<int>(), Maybe<protocol::Network::Headers> responseHeaders = Maybe<protocol::Network::Headers>());
    void RequestWillBeSent(const String& requestId, const String& loaderId, const String& documentURL, std::unique_ptr<protocol::Network::Request> request, double timestamp, double wallTime, std::unique_ptr<protocol::Network::Initiator> initiator, Maybe<protocol::Network::Response> redirectResponse = Maybe<protocol::Network::Response>(), Maybe<String> type = Maybe<String>(), Maybe<String> frameId = Maybe<String>(), Maybe<bool> hasUserGesture = Maybe<bool>());
    void SignedExchangeReceived(const String& requestId, std::unique_ptr<protocol::Network::SignedExchangeInfo> info);
    void ResponseReceived(const String& requestId, const String& loaderId, double timestamp, const String& type, std::unique_ptr<protocol::Network::Response> response, Maybe<String> frameId = Maybe<String>());

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CONTENT_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CONTENT_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Network
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Network_h)
