// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Security_h
#define content_protocol_Security_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Security {

// ------------- Forward and enum declarations.
using CertificateId = int;
using MixedContentType = String;
using SecurityState = String;
class SecurityStateExplanation;
class InsecureContentStatus;
using CertificateErrorAction = String;
class CertificateErrorNotification;
class SecurityStateChangedNotification;

namespace MixedContentTypeEnum {
CONTENT_EXPORT extern const char Blockable[];
CONTENT_EXPORT extern const char OptionallyBlockable[];
CONTENT_EXPORT extern const char None[];
} // namespace MixedContentTypeEnum

namespace SecurityStateEnum {
CONTENT_EXPORT extern const char Unknown[];
CONTENT_EXPORT extern const char Neutral[];
CONTENT_EXPORT extern const char Insecure[];
CONTENT_EXPORT extern const char Secure[];
CONTENT_EXPORT extern const char Info[];
} // namespace SecurityStateEnum

namespace CertificateErrorActionEnum {
CONTENT_EXPORT extern const char Continue[];
CONTENT_EXPORT extern const char Cancel[];
} // namespace CertificateErrorActionEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT SecurityStateExplanation : public Serializable{
    PROTOCOL_DISALLOW_COPY(SecurityStateExplanation);
public:
    static std::unique_ptr<SecurityStateExplanation> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SecurityStateExplanation() override { }

    String GetSecurityState() { return m_securityState; }
    void SetSecurityState(const String& value) { m_securityState = value; }

    String GetTitle() { return m_title; }
    void SetTitle(const String& value) { m_title = value; }

    String GetSummary() { return m_summary; }
    void SetSummary(const String& value) { m_summary = value; }

    String GetDescription() { return m_description; }
    void SetDescription(const String& value) { m_description = value; }

    String GetMixedContentType() { return m_mixedContentType; }
    void SetMixedContentType(const String& value) { m_mixedContentType = value; }

    protocol::Array<String>* GetCertificate() { return m_certificate.get(); }
    void SetCertificate(std::unique_ptr<protocol::Array<String>> value) { m_certificate = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SecurityStateExplanation> clone() const;

    template<int STATE>
    class SecurityStateExplanationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SecurityStateSet = 1 << 1,
            TitleSet = 1 << 2,
            SummarySet = 1 << 3,
            DescriptionSet = 1 << 4,
            MixedContentTypeSet = 1 << 5,
            CertificateSet = 1 << 6,
            AllFieldsSet = (SecurityStateSet | TitleSet | SummarySet | DescriptionSet | MixedContentTypeSet | CertificateSet | 0)};


        SecurityStateExplanationBuilder<STATE | SecurityStateSet>& SetSecurityState(const String& value)
        {
            static_assert(!(STATE & SecurityStateSet), "property securityState should not be set yet");
            m_result->SetSecurityState(value);
            return castState<SecurityStateSet>();
        }

        SecurityStateExplanationBuilder<STATE | TitleSet>& SetTitle(const String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->SetTitle(value);
            return castState<TitleSet>();
        }

        SecurityStateExplanationBuilder<STATE | SummarySet>& SetSummary(const String& value)
        {
            static_assert(!(STATE & SummarySet), "property summary should not be set yet");
            m_result->SetSummary(value);
            return castState<SummarySet>();
        }

        SecurityStateExplanationBuilder<STATE | DescriptionSet>& SetDescription(const String& value)
        {
            static_assert(!(STATE & DescriptionSet), "property description should not be set yet");
            m_result->SetDescription(value);
            return castState<DescriptionSet>();
        }

        SecurityStateExplanationBuilder<STATE | MixedContentTypeSet>& SetMixedContentType(const String& value)
        {
            static_assert(!(STATE & MixedContentTypeSet), "property mixedContentType should not be set yet");
            m_result->SetMixedContentType(value);
            return castState<MixedContentTypeSet>();
        }

        SecurityStateExplanationBuilder<STATE | CertificateSet>& SetCertificate(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & CertificateSet), "property certificate should not be set yet");
            m_result->SetCertificate(std::move(value));
            return castState<CertificateSet>();
        }

        std::unique_ptr<SecurityStateExplanation> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SecurityStateExplanation;
        SecurityStateExplanationBuilder() : m_result(new SecurityStateExplanation()) { }

        template<int STEP> SecurityStateExplanationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SecurityStateExplanationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Security::SecurityStateExplanation> m_result;
    };

    static SecurityStateExplanationBuilder<0> Create()
    {
        return SecurityStateExplanationBuilder<0>();
    }

private:
    SecurityStateExplanation()
    {
    }

    String m_securityState;
    String m_title;
    String m_summary;
    String m_description;
    String m_mixedContentType;
    std::unique_ptr<protocol::Array<String>> m_certificate;
};


class CONTENT_EXPORT InsecureContentStatus : public Serializable{
    PROTOCOL_DISALLOW_COPY(InsecureContentStatus);
public:
    static std::unique_ptr<InsecureContentStatus> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~InsecureContentStatus() override { }

    bool GetRanMixedContent() { return m_ranMixedContent; }
    void SetRanMixedContent(bool value) { m_ranMixedContent = value; }

    bool GetDisplayedMixedContent() { return m_displayedMixedContent; }
    void SetDisplayedMixedContent(bool value) { m_displayedMixedContent = value; }

    bool GetContainedMixedForm() { return m_containedMixedForm; }
    void SetContainedMixedForm(bool value) { m_containedMixedForm = value; }

    bool GetRanContentWithCertErrors() { return m_ranContentWithCertErrors; }
    void SetRanContentWithCertErrors(bool value) { m_ranContentWithCertErrors = value; }

    bool GetDisplayedContentWithCertErrors() { return m_displayedContentWithCertErrors; }
    void SetDisplayedContentWithCertErrors(bool value) { m_displayedContentWithCertErrors = value; }

    String GetRanInsecureContentStyle() { return m_ranInsecureContentStyle; }
    void SetRanInsecureContentStyle(const String& value) { m_ranInsecureContentStyle = value; }

    String GetDisplayedInsecureContentStyle() { return m_displayedInsecureContentStyle; }
    void SetDisplayedInsecureContentStyle(const String& value) { m_displayedInsecureContentStyle = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<InsecureContentStatus> clone() const;

    template<int STATE>
    class InsecureContentStatusBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RanMixedContentSet = 1 << 1,
            DisplayedMixedContentSet = 1 << 2,
            ContainedMixedFormSet = 1 << 3,
            RanContentWithCertErrorsSet = 1 << 4,
            DisplayedContentWithCertErrorsSet = 1 << 5,
            RanInsecureContentStyleSet = 1 << 6,
            DisplayedInsecureContentStyleSet = 1 << 7,
            AllFieldsSet = (RanMixedContentSet | DisplayedMixedContentSet | ContainedMixedFormSet | RanContentWithCertErrorsSet | DisplayedContentWithCertErrorsSet | RanInsecureContentStyleSet | DisplayedInsecureContentStyleSet | 0)};


        InsecureContentStatusBuilder<STATE | RanMixedContentSet>& SetRanMixedContent(bool value)
        {
            static_assert(!(STATE & RanMixedContentSet), "property ranMixedContent should not be set yet");
            m_result->SetRanMixedContent(value);
            return castState<RanMixedContentSet>();
        }

        InsecureContentStatusBuilder<STATE | DisplayedMixedContentSet>& SetDisplayedMixedContent(bool value)
        {
            static_assert(!(STATE & DisplayedMixedContentSet), "property displayedMixedContent should not be set yet");
            m_result->SetDisplayedMixedContent(value);
            return castState<DisplayedMixedContentSet>();
        }

        InsecureContentStatusBuilder<STATE | ContainedMixedFormSet>& SetContainedMixedForm(bool value)
        {
            static_assert(!(STATE & ContainedMixedFormSet), "property containedMixedForm should not be set yet");
            m_result->SetContainedMixedForm(value);
            return castState<ContainedMixedFormSet>();
        }

        InsecureContentStatusBuilder<STATE | RanContentWithCertErrorsSet>& SetRanContentWithCertErrors(bool value)
        {
            static_assert(!(STATE & RanContentWithCertErrorsSet), "property ranContentWithCertErrors should not be set yet");
            m_result->SetRanContentWithCertErrors(value);
            return castState<RanContentWithCertErrorsSet>();
        }

        InsecureContentStatusBuilder<STATE | DisplayedContentWithCertErrorsSet>& SetDisplayedContentWithCertErrors(bool value)
        {
            static_assert(!(STATE & DisplayedContentWithCertErrorsSet), "property displayedContentWithCertErrors should not be set yet");
            m_result->SetDisplayedContentWithCertErrors(value);
            return castState<DisplayedContentWithCertErrorsSet>();
        }

        InsecureContentStatusBuilder<STATE | RanInsecureContentStyleSet>& SetRanInsecureContentStyle(const String& value)
        {
            static_assert(!(STATE & RanInsecureContentStyleSet), "property ranInsecureContentStyle should not be set yet");
            m_result->SetRanInsecureContentStyle(value);
            return castState<RanInsecureContentStyleSet>();
        }

        InsecureContentStatusBuilder<STATE | DisplayedInsecureContentStyleSet>& SetDisplayedInsecureContentStyle(const String& value)
        {
            static_assert(!(STATE & DisplayedInsecureContentStyleSet), "property displayedInsecureContentStyle should not be set yet");
            m_result->SetDisplayedInsecureContentStyle(value);
            return castState<DisplayedInsecureContentStyleSet>();
        }

        std::unique_ptr<InsecureContentStatus> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class InsecureContentStatus;
        InsecureContentStatusBuilder() : m_result(new InsecureContentStatus()) { }

        template<int STEP> InsecureContentStatusBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<InsecureContentStatusBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Security::InsecureContentStatus> m_result;
    };

    static InsecureContentStatusBuilder<0> Create()
    {
        return InsecureContentStatusBuilder<0>();
    }

private:
    InsecureContentStatus()
    {
          m_ranMixedContent = false;
          m_displayedMixedContent = false;
          m_containedMixedForm = false;
          m_ranContentWithCertErrors = false;
          m_displayedContentWithCertErrors = false;
    }

    bool m_ranMixedContent;
    bool m_displayedMixedContent;
    bool m_containedMixedForm;
    bool m_ranContentWithCertErrors;
    bool m_displayedContentWithCertErrors;
    String m_ranInsecureContentStyle;
    String m_displayedInsecureContentStyle;
};


class CONTENT_EXPORT CertificateErrorNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(CertificateErrorNotification);
public:
    static std::unique_ptr<CertificateErrorNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CertificateErrorNotification() override { }

    int GetEventId() { return m_eventId; }
    void SetEventId(int value) { m_eventId = value; }

    String GetErrorType() { return m_errorType; }
    void SetErrorType(const String& value) { m_errorType = value; }

    String GetRequestURL() { return m_requestURL; }
    void SetRequestURL(const String& value) { m_requestURL = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CertificateErrorNotification> clone() const;

    template<int STATE>
    class CertificateErrorNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            EventIdSet = 1 << 1,
            ErrorTypeSet = 1 << 2,
            RequestURLSet = 1 << 3,
            AllFieldsSet = (EventIdSet | ErrorTypeSet | RequestURLSet | 0)};


        CertificateErrorNotificationBuilder<STATE | EventIdSet>& SetEventId(int value)
        {
            static_assert(!(STATE & EventIdSet), "property eventId should not be set yet");
            m_result->SetEventId(value);
            return castState<EventIdSet>();
        }

        CertificateErrorNotificationBuilder<STATE | ErrorTypeSet>& SetErrorType(const String& value)
        {
            static_assert(!(STATE & ErrorTypeSet), "property errorType should not be set yet");
            m_result->SetErrorType(value);
            return castState<ErrorTypeSet>();
        }

        CertificateErrorNotificationBuilder<STATE | RequestURLSet>& SetRequestURL(const String& value)
        {
            static_assert(!(STATE & RequestURLSet), "property requestURL should not be set yet");
            m_result->SetRequestURL(value);
            return castState<RequestURLSet>();
        }

        std::unique_ptr<CertificateErrorNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CertificateErrorNotification;
        CertificateErrorNotificationBuilder() : m_result(new CertificateErrorNotification()) { }

        template<int STEP> CertificateErrorNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CertificateErrorNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Security::CertificateErrorNotification> m_result;
    };

    static CertificateErrorNotificationBuilder<0> Create()
    {
        return CertificateErrorNotificationBuilder<0>();
    }

private:
    CertificateErrorNotification()
    {
          m_eventId = 0;
    }

    int m_eventId;
    String m_errorType;
    String m_requestURL;
};


class CONTENT_EXPORT SecurityStateChangedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(SecurityStateChangedNotification);
public:
    static std::unique_ptr<SecurityStateChangedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SecurityStateChangedNotification() override { }

    String GetSecurityState() { return m_securityState; }
    void SetSecurityState(const String& value) { m_securityState = value; }

    bool GetSchemeIsCryptographic() { return m_schemeIsCryptographic; }
    void SetSchemeIsCryptographic(bool value) { m_schemeIsCryptographic = value; }

    protocol::Array<protocol::Security::SecurityStateExplanation>* GetExplanations() { return m_explanations.get(); }
    void SetExplanations(std::unique_ptr<protocol::Array<protocol::Security::SecurityStateExplanation>> value) { m_explanations = std::move(value); }

    protocol::Security::InsecureContentStatus* GetInsecureContentStatus() { return m_insecureContentStatus.get(); }
    void SetInsecureContentStatus(std::unique_ptr<protocol::Security::InsecureContentStatus> value) { m_insecureContentStatus = std::move(value); }

    bool HasSummary() { return m_summary.isJust(); }
    String GetSummary(const String& defaultValue) { return m_summary.isJust() ? m_summary.fromJust() : defaultValue; }
    void SetSummary(const String& value) { m_summary = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SecurityStateChangedNotification> clone() const;

    template<int STATE>
    class SecurityStateChangedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SecurityStateSet = 1 << 1,
            SchemeIsCryptographicSet = 1 << 2,
            ExplanationsSet = 1 << 3,
            InsecureContentStatusSet = 1 << 4,
            AllFieldsSet = (SecurityStateSet | SchemeIsCryptographicSet | ExplanationsSet | InsecureContentStatusSet | 0)};


        SecurityStateChangedNotificationBuilder<STATE | SecurityStateSet>& SetSecurityState(const String& value)
        {
            static_assert(!(STATE & SecurityStateSet), "property securityState should not be set yet");
            m_result->SetSecurityState(value);
            return castState<SecurityStateSet>();
        }

        SecurityStateChangedNotificationBuilder<STATE | SchemeIsCryptographicSet>& SetSchemeIsCryptographic(bool value)
        {
            static_assert(!(STATE & SchemeIsCryptographicSet), "property schemeIsCryptographic should not be set yet");
            m_result->SetSchemeIsCryptographic(value);
            return castState<SchemeIsCryptographicSet>();
        }

        SecurityStateChangedNotificationBuilder<STATE | ExplanationsSet>& SetExplanations(std::unique_ptr<protocol::Array<protocol::Security::SecurityStateExplanation>> value)
        {
            static_assert(!(STATE & ExplanationsSet), "property explanations should not be set yet");
            m_result->SetExplanations(std::move(value));
            return castState<ExplanationsSet>();
        }

        SecurityStateChangedNotificationBuilder<STATE | InsecureContentStatusSet>& SetInsecureContentStatus(std::unique_ptr<protocol::Security::InsecureContentStatus> value)
        {
            static_assert(!(STATE & InsecureContentStatusSet), "property insecureContentStatus should not be set yet");
            m_result->SetInsecureContentStatus(std::move(value));
            return castState<InsecureContentStatusSet>();
        }

        SecurityStateChangedNotificationBuilder<STATE>& SetSummary(const String& value)
        {
            m_result->SetSummary(value);
            return *this;
        }

        std::unique_ptr<SecurityStateChangedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SecurityStateChangedNotification;
        SecurityStateChangedNotificationBuilder() : m_result(new SecurityStateChangedNotification()) { }

        template<int STEP> SecurityStateChangedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SecurityStateChangedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Security::SecurityStateChangedNotification> m_result;
    };

    static SecurityStateChangedNotificationBuilder<0> Create()
    {
        return SecurityStateChangedNotificationBuilder<0>();
    }

private:
    SecurityStateChangedNotification()
    {
          m_schemeIsCryptographic = false;
    }

    String m_securityState;
    bool m_schemeIsCryptographic;
    std::unique_ptr<protocol::Array<protocol::Security::SecurityStateExplanation>> m_explanations;
    std::unique_ptr<protocol::Security::InsecureContentStatus> m_insecureContentStatus;
    Maybe<String> m_summary;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse Enable() = 0;
    virtual DispatchResponse SetIgnoreCertificateErrors(bool in_ignore) = 0;
    virtual DispatchResponse HandleCertificateError(int in_eventId, const String& in_action) = 0;
    virtual DispatchResponse SetOverrideCertificateErrors(bool in_override) = 0;

};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void CertificateError(int eventId, const String& errorType, const String& requestURL);
    void SecurityStateChanged(const String& securityState, bool schemeIsCryptographic, std::unique_ptr<protocol::Array<protocol::Security::SecurityStateExplanation>> explanations, std::unique_ptr<protocol::Security::InsecureContentStatus> insecureContentStatus, Maybe<String> summary = Maybe<String>());

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

} // namespace Security
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Security_h)
