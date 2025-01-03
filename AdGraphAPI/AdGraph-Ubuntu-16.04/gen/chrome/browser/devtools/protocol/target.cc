// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/devtools/protocol/target.h"

#include "chrome/browser/devtools/protocol/protocol.h"

namespace protocol {
namespace Target {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Target";
const char Metainfo::commandPrefix[] = "Target.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<RemoteLocation> RemoteLocation::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<RemoteLocation> result(new RemoteLocation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* hostValue = object->get("host");
    errors->setName("host");
    result->m_host = ValueConversions<String>::fromValue(hostValue, errors);
    protocol::Value* portValue = object->get("port");
    errors->setName("port");
    result->m_port = ValueConversions<int>::fromValue(portValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> RemoteLocation::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("host", ValueConversions<String>::toValue(m_host));
    result->setValue("port", ValueConversions<int>::toValue(m_port));
    return result;
}

std::unique_ptr<RemoteLocation> RemoteLocation::clone() const
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
        m_dispatchMap["Target.createBrowserContext"] = &DispatcherImpl::createBrowserContext;
        m_dispatchMap["Target.getBrowserContexts"] = &DispatcherImpl::getBrowserContexts;
        m_dispatchMap["Target.createTarget"] = &DispatcherImpl::createTarget;
        m_dispatchMap["Target.disposeBrowserContext"] = &DispatcherImpl::disposeBrowserContext;
        m_dispatchMap["Target.setRemoteLocations"] = &DispatcherImpl::setRemoteLocations;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status createBrowserContext(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getBrowserContexts(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status createTarget(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disposeBrowserContext(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setRemoteLocations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::createBrowserContext(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    String out_browserContextId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->CreateBrowserContext(&out_browserContextId);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("browserContextId", ValueConversions<String>::toValue(out_browserContextId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getBrowserContexts(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Array<String>> out_browserContextIds;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetBrowserContexts(&out_browserContextIds);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("browserContextIds", ValueConversions<protocol::Array<String>>::toValue(out_browserContextIds.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::createTarget(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    String in_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* widthValue = object ? object->get("width") : nullptr;
    Maybe<int> in_width;
    if (widthValue) {
        errors->setName("width");
        in_width = ValueConversions<int>::fromValue(widthValue, errors);
    }
    protocol::Value* heightValue = object ? object->get("height") : nullptr;
    Maybe<int> in_height;
    if (heightValue) {
        errors->setName("height");
        in_height = ValueConversions<int>::fromValue(heightValue, errors);
    }
    protocol::Value* browserContextIdValue = object ? object->get("browserContextId") : nullptr;
    Maybe<String> in_browserContextId;
    if (browserContextIdValue) {
        errors->setName("browserContextId");
        in_browserContextId = ValueConversions<String>::fromValue(browserContextIdValue, errors);
    }
    protocol::Value* enableBeginFrameControlValue = object ? object->get("enableBeginFrameControl") : nullptr;
    Maybe<bool> in_enableBeginFrameControl;
    if (enableBeginFrameControlValue) {
        errors->setName("enableBeginFrameControl");
        in_enableBeginFrameControl = ValueConversions<bool>::fromValue(enableBeginFrameControlValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    String out_targetId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->CreateTarget(in_url, std::move(in_width), std::move(in_height), std::move(in_browserContextId), std::move(in_enableBeginFrameControl), &out_targetId);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("targetId", ValueConversions<String>::toValue(out_targetId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

class DisposeBrowserContextCallbackImpl : public Backend::DisposeBrowserContextCallback, public DispatcherBase::Callback {
public:
    DisposeBrowserContextCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
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

DispatchResponse::Status DispatcherImpl::disposeBrowserContext(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* browserContextIdValue = object ? object->get("browserContextId") : nullptr;
    errors->setName("browserContextId");
    String in_browserContextId = ValueConversions<String>::fromValue(browserContextIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<DisposeBrowserContextCallbackImpl> callback(new DisposeBrowserContextCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->DisposeBrowserContext(in_browserContextId, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::setRemoteLocations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* locationsValue = object ? object->get("locations") : nullptr;
    errors->setName("locations");
    std::unique_ptr<protocol::Array<protocol::Target::RemoteLocation>> in_locations = ValueConversions<protocol::Array<protocol::Target::RemoteLocation>>::fromValue(locationsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetRemoteLocations(std::move(in_locations));
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
} // namespace protocol
