// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/memory.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Memory {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Memory";
const char Metainfo::commandPrefix[] = "Memory.";
const char Metainfo::version[] = "1.3";

namespace PressureLevelEnum {
const char Moderate[] = "moderate";
const char Critical[] = "critical";
} // namespace PressureLevelEnum

std::unique_ptr<SamplingProfileNode> SamplingProfileNode::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingProfileNode> result(new SamplingProfileNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<double>::fromValue(sizeValue, errors);
    protocol::Value* totalValue = object->get("total");
    errors->setName("total");
    result->m_total = ValueConversions<double>::fromValue(totalValue, errors);
    protocol::Value* stackValue = object->get("stack");
    errors->setName("stack");
    result->m_stack = ValueConversions<protocol::Array<String>>::fromValue(stackValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingProfileNode::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("size", ValueConversions<double>::toValue(m_size));
    result->setValue("total", ValueConversions<double>::toValue(m_total));
    result->setValue("stack", ValueConversions<protocol::Array<String>>::toValue(m_stack.get()));
    return result;
}

std::unique_ptr<SamplingProfileNode> SamplingProfileNode::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SamplingProfile> SamplingProfile::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingProfile> result(new SamplingProfile());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* samplesValue = object->get("samples");
    errors->setName("samples");
    result->m_samples = ValueConversions<protocol::Array<protocol::Memory::SamplingProfileNode>>::fromValue(samplesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingProfile::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("samples", ValueConversions<protocol::Array<protocol::Memory::SamplingProfileNode>>::toValue(m_samples.get()));
    return result;
}

std::unique_ptr<SamplingProfile> SamplingProfile::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

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
        m_dispatchMap["Memory.prepareForLeakDetection"] = &DispatcherImpl::prepareForLeakDetection;
        m_dispatchMap["Memory.setPressureNotificationsSuppressed"] = &DispatcherImpl::setPressureNotificationsSuppressed;
        m_dispatchMap["Memory.simulatePressureNotification"] = &DispatcherImpl::simulatePressureNotification;
        m_dispatchMap["Memory.getBrowserSamplingProfile"] = &DispatcherImpl::getBrowserSamplingProfile;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status prepareForLeakDetection(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setPressureNotificationsSuppressed(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status simulatePressureNotification(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getBrowserSamplingProfile(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


class PrepareForLeakDetectionCallbackImpl : public Backend::PrepareForLeakDetectionCallback, public DispatcherBase::Callback {
public:
    PrepareForLeakDetectionCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
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

DispatchResponse::Status DispatcherImpl::prepareForLeakDetection(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<PrepareForLeakDetectionCallbackImpl> callback(new PrepareForLeakDetectionCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->PrepareForLeakDetection(std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::setPressureNotificationsSuppressed(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* suppressedValue = object ? object->get("suppressed") : nullptr;
    errors->setName("suppressed");
    bool in_suppressed = ValueConversions<bool>::fromValue(suppressedValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetPressureNotificationsSuppressed(in_suppressed);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::simulatePressureNotification(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* levelValue = object ? object->get("level") : nullptr;
    errors->setName("level");
    String in_level = ValueConversions<String>::fromValue(levelValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SimulatePressureNotification(in_level);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getBrowserSamplingProfile(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Memory::SamplingProfile> out_profile;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetBrowserSamplingProfile(&out_profile);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("profile", ValueConversions<protocol::Memory::SamplingProfile>::toValue(out_profile.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Memory", std::move(dispatcher));
}

} // Memory
} // namespace content
} // namespace protocol
