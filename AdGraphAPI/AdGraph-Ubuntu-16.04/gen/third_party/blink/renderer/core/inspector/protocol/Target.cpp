// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/Target.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace Target {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Target";
const char Metainfo::commandPrefix[] = "Target.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<TargetInfo> TargetInfo::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<TargetInfo> result(new TargetInfo());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* targetIdValue = object->get("targetId");
    errors->setName("targetId");
    result->m_targetId = ValueConversions<String>::fromValue(targetIdValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* titleValue = object->get("title");
    errors->setName("title");
    result->m_title = ValueConversions<String>::fromValue(titleValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* attachedValue = object->get("attached");
    errors->setName("attached");
    result->m_attached = ValueConversions<bool>::fromValue(attachedValue, errors);
    protocol::Value* openerIdValue = object->get("openerId");
    if (openerIdValue) {
        errors->setName("openerId");
        result->m_openerId = ValueConversions<String>::fromValue(openerIdValue, errors);
    }
    protocol::Value* browserContextIdValue = object->get("browserContextId");
    if (browserContextIdValue) {
        errors->setName("browserContextId");
        result->m_browserContextId = ValueConversions<String>::fromValue(browserContextIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> TargetInfo::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("targetId", ValueConversions<String>::toValue(m_targetId));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    result->setValue("title", ValueConversions<String>::toValue(m_title));
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("attached", ValueConversions<bool>::toValue(m_attached));
    if (m_openerId.isJust())
        result->setValue("openerId", ValueConversions<String>::toValue(m_openerId.fromJust()));
    if (m_browserContextId.isJust())
        result->setValue("browserContextId", ValueConversions<String>::toValue(m_browserContextId.fromJust()));
    return result;
}

std::unique_ptr<TargetInfo> TargetInfo::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<AttachedToTargetNotification> AttachedToTargetNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AttachedToTargetNotification> result(new AttachedToTargetNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sessionIdValue = object->get("sessionId");
    errors->setName("sessionId");
    result->m_sessionId = ValueConversions<String>::fromValue(sessionIdValue, errors);
    protocol::Value* targetInfoValue = object->get("targetInfo");
    errors->setName("targetInfo");
    result->m_targetInfo = ValueConversions<protocol::Target::TargetInfo>::fromValue(targetInfoValue, errors);
    protocol::Value* waitingForDebuggerValue = object->get("waitingForDebugger");
    errors->setName("waitingForDebugger");
    result->m_waitingForDebugger = ValueConversions<bool>::fromValue(waitingForDebuggerValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AttachedToTargetNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("sessionId", ValueConversions<String>::toValue(m_sessionId));
    result->setValue("targetInfo", ValueConversions<protocol::Target::TargetInfo>::toValue(m_targetInfo.get()));
    result->setValue("waitingForDebugger", ValueConversions<bool>::toValue(m_waitingForDebugger));
    return result;
}

std::unique_ptr<AttachedToTargetNotification> AttachedToTargetNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<DetachedFromTargetNotification> DetachedFromTargetNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DetachedFromTargetNotification> result(new DetachedFromTargetNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sessionIdValue = object->get("sessionId");
    errors->setName("sessionId");
    result->m_sessionId = ValueConversions<String>::fromValue(sessionIdValue, errors);
    protocol::Value* targetIdValue = object->get("targetId");
    if (targetIdValue) {
        errors->setName("targetId");
        result->m_targetId = ValueConversions<String>::fromValue(targetIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DetachedFromTargetNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("sessionId", ValueConversions<String>::toValue(m_sessionId));
    if (m_targetId.isJust())
        result->setValue("targetId", ValueConversions<String>::toValue(m_targetId.fromJust()));
    return result;
}

std::unique_ptr<DetachedFromTargetNotification> DetachedFromTargetNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ReceivedMessageFromTargetNotification> ReceivedMessageFromTargetNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ReceivedMessageFromTargetNotification> result(new ReceivedMessageFromTargetNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sessionIdValue = object->get("sessionId");
    errors->setName("sessionId");
    result->m_sessionId = ValueConversions<String>::fromValue(sessionIdValue, errors);
    protocol::Value* messageValue = object->get("message");
    errors->setName("message");
    result->m_message = ValueConversions<String>::fromValue(messageValue, errors);
    protocol::Value* targetIdValue = object->get("targetId");
    if (targetIdValue) {
        errors->setName("targetId");
        result->m_targetId = ValueConversions<String>::fromValue(targetIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ReceivedMessageFromTargetNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("sessionId", ValueConversions<String>::toValue(m_sessionId));
    result->setValue("message", ValueConversions<String>::toValue(m_message));
    if (m_targetId.isJust())
        result->setValue("targetId", ValueConversions<String>::toValue(m_targetId.fromJust()));
    return result;
}

std::unique_ptr<ReceivedMessageFromTargetNotification> ReceivedMessageFromTargetNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::attachedToTarget(const String& sessionId, std::unique_ptr<protocol::Target::TargetInfo> targetInfo, bool waitingForDebugger)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<AttachedToTargetNotification> messageData = AttachedToTargetNotification::create()
        .setSessionId(sessionId)
        .setTargetInfo(std::move(targetInfo))
        .setWaitingForDebugger(waitingForDebugger)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Target.attachedToTarget", std::move(messageData)));
}

void Frontend::detachedFromTarget(const String& sessionId, Maybe<String> targetId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<DetachedFromTargetNotification> messageData = DetachedFromTargetNotification::create()
        .setSessionId(sessionId)
        .build();
    if (targetId.isJust())
        messageData->setTargetId(std::move(targetId).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Target.detachedFromTarget", std::move(messageData)));
}

void Frontend::receivedMessageFromTarget(const String& sessionId, const String& message, Maybe<String> targetId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ReceivedMessageFromTargetNotification> messageData = ReceivedMessageFromTargetNotification::create()
        .setSessionId(sessionId)
        .setMessage(message)
        .build();
    if (targetId.isJust())
        messageData->setTargetId(std::move(targetId).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Target.receivedMessageFromTarget", std::move(messageData)));
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
        m_dispatchMap["Target.sendMessageToTarget"] = &DispatcherImpl::sendMessageToTarget;
        m_dispatchMap["Target.setAutoAttach"] = &DispatcherImpl::setAutoAttach;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status sendMessageToTarget(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setAutoAttach(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::sendMessageToTarget(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* messageValue = object ? object->get("message") : nullptr;
    errors->setName("message");
    String in_message = ValueConversions<String>::fromValue(messageValue, errors);
    protocol::Value* sessionIdValue = object ? object->get("sessionId") : nullptr;
    Maybe<String> in_sessionId;
    if (sessionIdValue) {
        errors->setName("sessionId");
        in_sessionId = ValueConversions<String>::fromValue(sessionIdValue, errors);
    }
    protocol::Value* targetIdValue = object ? object->get("targetId") : nullptr;
    Maybe<String> in_targetId;
    if (targetIdValue) {
        errors->setName("targetId");
        in_targetId = ValueConversions<String>::fromValue(targetIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->sendMessageToTarget(in_message, std::move(in_sessionId), std::move(in_targetId));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setAutoAttach(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* autoAttachValue = object ? object->get("autoAttach") : nullptr;
    errors->setName("autoAttach");
    bool in_autoAttach = ValueConversions<bool>::fromValue(autoAttachValue, errors);
    protocol::Value* waitForDebuggerOnStartValue = object ? object->get("waitForDebuggerOnStart") : nullptr;
    errors->setName("waitForDebuggerOnStart");
    bool in_waitForDebuggerOnStart = ValueConversions<bool>::fromValue(waitForDebuggerOnStartValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setAutoAttach(in_autoAttach, in_waitForDebuggerOnStart);
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
    uber->registerBackend("Target", std::move(dispatcher));
}

} // Target
} // namespace blink
} // namespace protocol
