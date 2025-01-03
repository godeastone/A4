// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/devtools/protocol/browser.h"

#include "chrome/browser/devtools/protocol/protocol.h"

namespace protocol {
namespace Browser {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Browser";
const char Metainfo::commandPrefix[] = "Browser.";
const char Metainfo::version[] = "1.3";

namespace WindowStateEnum {
const char Normal[] = "normal";
const char Minimized[] = "minimized";
const char Maximized[] = "maximized";
const char Fullscreen[] = "fullscreen";
} // namespace WindowStateEnum

std::unique_ptr<Bounds> Bounds::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Bounds> result(new Bounds());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* leftValue = object->get("left");
    if (leftValue) {
        errors->setName("left");
        result->m_left = ValueConversions<int>::fromValue(leftValue, errors);
    }
    protocol::Value* topValue = object->get("top");
    if (topValue) {
        errors->setName("top");
        result->m_top = ValueConversions<int>::fromValue(topValue, errors);
    }
    protocol::Value* widthValue = object->get("width");
    if (widthValue) {
        errors->setName("width");
        result->m_width = ValueConversions<int>::fromValue(widthValue, errors);
    }
    protocol::Value* heightValue = object->get("height");
    if (heightValue) {
        errors->setName("height");
        result->m_height = ValueConversions<int>::fromValue(heightValue, errors);
    }
    protocol::Value* windowStateValue = object->get("windowState");
    if (windowStateValue) {
        errors->setName("windowState");
        result->m_windowState = ValueConversions<String>::fromValue(windowStateValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Bounds::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_left.isJust())
        result->setValue("left", ValueConversions<int>::toValue(m_left.fromJust()));
    if (m_top.isJust())
        result->setValue("top", ValueConversions<int>::toValue(m_top.fromJust()));
    if (m_width.isJust())
        result->setValue("width", ValueConversions<int>::toValue(m_width.fromJust()));
    if (m_height.isJust())
        result->setValue("height", ValueConversions<int>::toValue(m_height.fromJust()));
    if (m_windowState.isJust())
        result->setValue("windowState", ValueConversions<String>::toValue(m_windowState.fromJust()));
    return result;
}

std::unique_ptr<Bounds> Bounds::clone() const
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
        m_dispatchMap["Browser.close"] = &DispatcherImpl::close;
        m_dispatchMap["Browser.getWindowBounds"] = &DispatcherImpl::getWindowBounds;
        m_dispatchMap["Browser.getWindowForTarget"] = &DispatcherImpl::getWindowForTarget;
        m_dispatchMap["Browser.setWindowBounds"] = &DispatcherImpl::setWindowBounds;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status close(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getWindowBounds(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getWindowForTarget(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setWindowBounds(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::close(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Close();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getWindowBounds(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* windowIdValue = object ? object->get("windowId") : nullptr;
    errors->setName("windowId");
    int in_windowId = ValueConversions<int>::fromValue(windowIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Browser::Bounds> out_bounds;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetWindowBounds(in_windowId, &out_bounds);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("bounds", ValueConversions<protocol::Browser::Bounds>::toValue(out_bounds.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getWindowForTarget(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* targetIdValue = object ? object->get("targetId") : nullptr;
    errors->setName("targetId");
    String in_targetId = ValueConversions<String>::fromValue(targetIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    int out_windowId;
    std::unique_ptr<protocol::Browser::Bounds> out_bounds;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetWindowForTarget(in_targetId, &out_windowId, &out_bounds);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("windowId", ValueConversions<int>::toValue(out_windowId));
        result->setValue("bounds", ValueConversions<protocol::Browser::Bounds>::toValue(out_bounds.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setWindowBounds(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* windowIdValue = object ? object->get("windowId") : nullptr;
    errors->setName("windowId");
    int in_windowId = ValueConversions<int>::fromValue(windowIdValue, errors);
    protocol::Value* boundsValue = object ? object->get("bounds") : nullptr;
    errors->setName("bounds");
    std::unique_ptr<protocol::Browser::Bounds> in_bounds = ValueConversions<protocol::Browser::Bounds>::fromValue(boundsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetWindowBounds(in_windowId, std::move(in_bounds));
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
    uber->registerBackend("Browser", std::move(dispatcher));
}

} // Browser
} // namespace protocol
