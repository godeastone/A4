// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/security.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Security {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Security";
const char Metainfo::commandPrefix[] = "Security.";
const char Metainfo::version[] = "1.3";

namespace MixedContentTypeEnum {
const char Blockable[] = "blockable";
const char OptionallyBlockable[] = "optionally-blockable";
const char None[] = "none";
} // namespace MixedContentTypeEnum

namespace SecurityStateEnum {
const char Unknown[] = "unknown";
const char Neutral[] = "neutral";
const char Insecure[] = "insecure";
const char Secure[] = "secure";
const char Info[] = "info";
} // namespace SecurityStateEnum

std::unique_ptr<SecurityStateExplanation> SecurityStateExplanation::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SecurityStateExplanation> result(new SecurityStateExplanation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* securityStateValue = object->get("securityState");
    errors->setName("securityState");
    result->m_securityState = ValueConversions<String>::fromValue(securityStateValue, errors);
    protocol::Value* titleValue = object->get("title");
    errors->setName("title");
    result->m_title = ValueConversions<String>::fromValue(titleValue, errors);
    protocol::Value* summaryValue = object->get("summary");
    errors->setName("summary");
    result->m_summary = ValueConversions<String>::fromValue(summaryValue, errors);
    protocol::Value* descriptionValue = object->get("description");
    errors->setName("description");
    result->m_description = ValueConversions<String>::fromValue(descriptionValue, errors);
    protocol::Value* mixedContentTypeValue = object->get("mixedContentType");
    errors->setName("mixedContentType");
    result->m_mixedContentType = ValueConversions<String>::fromValue(mixedContentTypeValue, errors);
    protocol::Value* certificateValue = object->get("certificate");
    errors->setName("certificate");
    result->m_certificate = ValueConversions<protocol::Array<String>>::fromValue(certificateValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SecurityStateExplanation::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("securityState", ValueConversions<String>::toValue(m_securityState));
    result->setValue("title", ValueConversions<String>::toValue(m_title));
    result->setValue("summary", ValueConversions<String>::toValue(m_summary));
    result->setValue("description", ValueConversions<String>::toValue(m_description));
    result->setValue("mixedContentType", ValueConversions<String>::toValue(m_mixedContentType));
    result->setValue("certificate", ValueConversions<protocol::Array<String>>::toValue(m_certificate.get()));
    return result;
}

std::unique_ptr<SecurityStateExplanation> SecurityStateExplanation::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<InsecureContentStatus> InsecureContentStatus::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<InsecureContentStatus> result(new InsecureContentStatus());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* ranMixedContentValue = object->get("ranMixedContent");
    errors->setName("ranMixedContent");
    result->m_ranMixedContent = ValueConversions<bool>::fromValue(ranMixedContentValue, errors);
    protocol::Value* displayedMixedContentValue = object->get("displayedMixedContent");
    errors->setName("displayedMixedContent");
    result->m_displayedMixedContent = ValueConversions<bool>::fromValue(displayedMixedContentValue, errors);
    protocol::Value* containedMixedFormValue = object->get("containedMixedForm");
    errors->setName("containedMixedForm");
    result->m_containedMixedForm = ValueConversions<bool>::fromValue(containedMixedFormValue, errors);
    protocol::Value* ranContentWithCertErrorsValue = object->get("ranContentWithCertErrors");
    errors->setName("ranContentWithCertErrors");
    result->m_ranContentWithCertErrors = ValueConversions<bool>::fromValue(ranContentWithCertErrorsValue, errors);
    protocol::Value* displayedContentWithCertErrorsValue = object->get("displayedContentWithCertErrors");
    errors->setName("displayedContentWithCertErrors");
    result->m_displayedContentWithCertErrors = ValueConversions<bool>::fromValue(displayedContentWithCertErrorsValue, errors);
    protocol::Value* ranInsecureContentStyleValue = object->get("ranInsecureContentStyle");
    errors->setName("ranInsecureContentStyle");
    result->m_ranInsecureContentStyle = ValueConversions<String>::fromValue(ranInsecureContentStyleValue, errors);
    protocol::Value* displayedInsecureContentStyleValue = object->get("displayedInsecureContentStyle");
    errors->setName("displayedInsecureContentStyle");
    result->m_displayedInsecureContentStyle = ValueConversions<String>::fromValue(displayedInsecureContentStyleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> InsecureContentStatus::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("ranMixedContent", ValueConversions<bool>::toValue(m_ranMixedContent));
    result->setValue("displayedMixedContent", ValueConversions<bool>::toValue(m_displayedMixedContent));
    result->setValue("containedMixedForm", ValueConversions<bool>::toValue(m_containedMixedForm));
    result->setValue("ranContentWithCertErrors", ValueConversions<bool>::toValue(m_ranContentWithCertErrors));
    result->setValue("displayedContentWithCertErrors", ValueConversions<bool>::toValue(m_displayedContentWithCertErrors));
    result->setValue("ranInsecureContentStyle", ValueConversions<String>::toValue(m_ranInsecureContentStyle));
    result->setValue("displayedInsecureContentStyle", ValueConversions<String>::toValue(m_displayedInsecureContentStyle));
    return result;
}

std::unique_ptr<InsecureContentStatus> InsecureContentStatus::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace CertificateErrorActionEnum {
const char Continue[] = "continue";
const char Cancel[] = "cancel";
} // namespace CertificateErrorActionEnum

std::unique_ptr<CertificateErrorNotification> CertificateErrorNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CertificateErrorNotification> result(new CertificateErrorNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* eventIdValue = object->get("eventId");
    errors->setName("eventId");
    result->m_eventId = ValueConversions<int>::fromValue(eventIdValue, errors);
    protocol::Value* errorTypeValue = object->get("errorType");
    errors->setName("errorType");
    result->m_errorType = ValueConversions<String>::fromValue(errorTypeValue, errors);
    protocol::Value* requestURLValue = object->get("requestURL");
    errors->setName("requestURL");
    result->m_requestURL = ValueConversions<String>::fromValue(requestURLValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CertificateErrorNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("eventId", ValueConversions<int>::toValue(m_eventId));
    result->setValue("errorType", ValueConversions<String>::toValue(m_errorType));
    result->setValue("requestURL", ValueConversions<String>::toValue(m_requestURL));
    return result;
}

std::unique_ptr<CertificateErrorNotification> CertificateErrorNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SecurityStateChangedNotification> SecurityStateChangedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SecurityStateChangedNotification> result(new SecurityStateChangedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* securityStateValue = object->get("securityState");
    errors->setName("securityState");
    result->m_securityState = ValueConversions<String>::fromValue(securityStateValue, errors);
    protocol::Value* schemeIsCryptographicValue = object->get("schemeIsCryptographic");
    errors->setName("schemeIsCryptographic");
    result->m_schemeIsCryptographic = ValueConversions<bool>::fromValue(schemeIsCryptographicValue, errors);
    protocol::Value* explanationsValue = object->get("explanations");
    errors->setName("explanations");
    result->m_explanations = ValueConversions<protocol::Array<protocol::Security::SecurityStateExplanation>>::fromValue(explanationsValue, errors);
    protocol::Value* insecureContentStatusValue = object->get("insecureContentStatus");
    errors->setName("insecureContentStatus");
    result->m_insecureContentStatus = ValueConversions<protocol::Security::InsecureContentStatus>::fromValue(insecureContentStatusValue, errors);
    protocol::Value* summaryValue = object->get("summary");
    if (summaryValue) {
        errors->setName("summary");
        result->m_summary = ValueConversions<String>::fromValue(summaryValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SecurityStateChangedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("securityState", ValueConversions<String>::toValue(m_securityState));
    result->setValue("schemeIsCryptographic", ValueConversions<bool>::toValue(m_schemeIsCryptographic));
    result->setValue("explanations", ValueConversions<protocol::Array<protocol::Security::SecurityStateExplanation>>::toValue(m_explanations.get()));
    result->setValue("insecureContentStatus", ValueConversions<protocol::Security::InsecureContentStatus>::toValue(m_insecureContentStatus.get()));
    if (m_summary.isJust())
        result->setValue("summary", ValueConversions<String>::toValue(m_summary.fromJust()));
    return result;
}

std::unique_ptr<SecurityStateChangedNotification> SecurityStateChangedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::CertificateError(int eventId, const String& errorType, const String& requestURL)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<CertificateErrorNotification> messageData = CertificateErrorNotification::Create()
        .SetEventId(eventId)
        .SetErrorType(errorType)
        .SetRequestURL(requestURL)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Security.certificateError", std::move(messageData)));
}

void Frontend::SecurityStateChanged(const String& securityState, bool schemeIsCryptographic, std::unique_ptr<protocol::Array<protocol::Security::SecurityStateExplanation>> explanations, std::unique_ptr<protocol::Security::InsecureContentStatus> insecureContentStatus, Maybe<String> summary)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<SecurityStateChangedNotification> messageData = SecurityStateChangedNotification::Create()
        .SetSecurityState(securityState)
        .SetSchemeIsCryptographic(schemeIsCryptographic)
        .SetExplanations(std::move(explanations))
        .SetInsecureContentStatus(std::move(insecureContentStatus))
        .Build();
    if (summary.isJust())
        messageData->SetSummary(std::move(summary).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Security.securityStateChanged", std::move(messageData)));
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
        m_dispatchMap["Security.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Security.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Security.setIgnoreCertificateErrors"] = &DispatcherImpl::setIgnoreCertificateErrors;
        m_dispatchMap["Security.handleCertificateError"] = &DispatcherImpl::handleCertificateError;
        m_dispatchMap["Security.setOverrideCertificateErrors"] = &DispatcherImpl::setOverrideCertificateErrors;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setIgnoreCertificateErrors(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status handleCertificateError(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setOverrideCertificateErrors(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Enable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setIgnoreCertificateErrors(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* ignoreValue = object ? object->get("ignore") : nullptr;
    errors->setName("ignore");
    bool in_ignore = ValueConversions<bool>::fromValue(ignoreValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetIgnoreCertificateErrors(in_ignore);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::handleCertificateError(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* eventIdValue = object ? object->get("eventId") : nullptr;
    errors->setName("eventId");
    int in_eventId = ValueConversions<int>::fromValue(eventIdValue, errors);
    protocol::Value* actionValue = object ? object->get("action") : nullptr;
    errors->setName("action");
    String in_action = ValueConversions<String>::fromValue(actionValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->HandleCertificateError(in_eventId, in_action);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setOverrideCertificateErrors(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* overrideValue = object ? object->get("override") : nullptr;
    errors->setName("override");
    bool in_override = ValueConversions<bool>::fromValue(overrideValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetOverrideCertificateErrors(in_override);
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
    uber->registerBackend("Security", std::move(dispatcher));
}

} // Security
} // namespace content
} // namespace protocol
