// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/lib/browser/protocol/dp_headless_experimental.h"

#include "headless/lib/browser/protocol/protocol.h"

namespace headless {
namespace protocol {
namespace HeadlessExperimental {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "HeadlessExperimental";
const char Metainfo::commandPrefix[] = "HeadlessExperimental.";
const char Metainfo::version[] = "1.3";

const char* ScreenshotParams::FormatEnum::Jpeg = "jpeg";
const char* ScreenshotParams::FormatEnum::Png = "png";

std::unique_ptr<ScreenshotParams> ScreenshotParams::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreenshotParams> result(new ScreenshotParams());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* formatValue = object->get("format");
    if (formatValue) {
        errors->setName("format");
        result->m_format = ValueConversions<String>::fromValue(formatValue, errors);
    }
    protocol::Value* qualityValue = object->get("quality");
    if (qualityValue) {
        errors->setName("quality");
        result->m_quality = ValueConversions<int>::fromValue(qualityValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreenshotParams::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_format.isJust())
        result->setValue("format", ValueConversions<String>::toValue(m_format.fromJust()));
    if (m_quality.isJust())
        result->setValue("quality", ValueConversions<int>::toValue(m_quality.fromJust()));
    return result;
}

std::unique_ptr<ScreenshotParams> ScreenshotParams::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<NeedsBeginFramesChangedNotification> NeedsBeginFramesChangedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NeedsBeginFramesChangedNotification> result(new NeedsBeginFramesChangedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* needsBeginFramesValue = object->get("needsBeginFrames");
    errors->setName("needsBeginFrames");
    result->m_needsBeginFrames = ValueConversions<bool>::fromValue(needsBeginFramesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NeedsBeginFramesChangedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("needsBeginFrames", ValueConversions<bool>::toValue(m_needsBeginFrames));
    return result;
}

std::unique_ptr<NeedsBeginFramesChangedNotification> NeedsBeginFramesChangedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::NeedsBeginFramesChanged(bool needsBeginFrames)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<NeedsBeginFramesChangedNotification> messageData = NeedsBeginFramesChangedNotification::Create()
        .SetNeedsBeginFrames(needsBeginFrames)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("HeadlessExperimental.needsBeginFramesChanged", std::move(messageData)));
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
        m_dispatchMap["HeadlessExperimental.beginFrame"] = &DispatcherImpl::beginFrame;
        m_dispatchMap["HeadlessExperimental.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["HeadlessExperimental.enable"] = &DispatcherImpl::enable;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status beginFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


class BeginFrameCallbackImpl : public Backend::BeginFrameCallback, public DispatcherBase::Callback {
public:
    BeginFrameCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(bool hasDamage, Maybe<String> screenshotData) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("hasDamage", ValueConversions<bool>::toValue(hasDamage));
        if (screenshotData.isJust())
            resultObject->setValue("screenshotData", ValueConversions<String>::toValue(screenshotData.fromJust()));
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

DispatchResponse::Status DispatcherImpl::beginFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameTimeTicksValue = object ? object->get("frameTimeTicks") : nullptr;
    Maybe<double> in_frameTimeTicks;
    if (frameTimeTicksValue) {
        errors->setName("frameTimeTicks");
        in_frameTimeTicks = ValueConversions<double>::fromValue(frameTimeTicksValue, errors);
    }
    protocol::Value* intervalValue = object ? object->get("interval") : nullptr;
    Maybe<double> in_interval;
    if (intervalValue) {
        errors->setName("interval");
        in_interval = ValueConversions<double>::fromValue(intervalValue, errors);
    }
    protocol::Value* noDisplayUpdatesValue = object ? object->get("noDisplayUpdates") : nullptr;
    Maybe<bool> in_noDisplayUpdates;
    if (noDisplayUpdatesValue) {
        errors->setName("noDisplayUpdates");
        in_noDisplayUpdates = ValueConversions<bool>::fromValue(noDisplayUpdatesValue, errors);
    }
    protocol::Value* screenshotValue = object ? object->get("screenshot") : nullptr;
    Maybe<protocol::HeadlessExperimental::ScreenshotParams> in_screenshot;
    if (screenshotValue) {
        errors->setName("screenshot");
        in_screenshot = ValueConversions<protocol::HeadlessExperimental::ScreenshotParams>::fromValue(screenshotValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<BeginFrameCallbackImpl> callback(new BeginFrameCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->BeginFrame(std::move(in_frameTimeTicks), std::move(in_interval), std::move(in_noDisplayUpdates), std::move(in_screenshot), std::move(callback));
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

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("HeadlessExperimental", std::move(dispatcher));
}

} // HeadlessExperimental
} // namespace headless
} // namespace protocol
