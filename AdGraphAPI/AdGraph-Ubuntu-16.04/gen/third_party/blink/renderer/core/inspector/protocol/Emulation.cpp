// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/Emulation.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace Emulation {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Emulation";
const char Metainfo::commandPrefix[] = "Emulation.";
const char Metainfo::version[] = "1.3";

const char* ScreenOrientation::TypeEnum::PortraitPrimary = "portraitPrimary";
const char* ScreenOrientation::TypeEnum::PortraitSecondary = "portraitSecondary";
const char* ScreenOrientation::TypeEnum::LandscapePrimary = "landscapePrimary";
const char* ScreenOrientation::TypeEnum::LandscapeSecondary = "landscapeSecondary";

std::unique_ptr<ScreenOrientation> ScreenOrientation::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreenOrientation> result(new ScreenOrientation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* angleValue = object->get("angle");
    errors->setName("angle");
    result->m_angle = ValueConversions<int>::fromValue(angleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreenOrientation::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    result->setValue("angle", ValueConversions<int>::toValue(m_angle));
    return result;
}

std::unique_ptr<ScreenOrientation> ScreenOrientation::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace VirtualTimePolicyEnum {
const char Advance[] = "advance";
const char Pause[] = "pause";
const char PauseIfNetworkFetchesPending[] = "pauseIfNetworkFetchesPending";
} // namespace VirtualTimePolicyEnum

std::unique_ptr<VirtualTimeAdvancedNotification> VirtualTimeAdvancedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<VirtualTimeAdvancedNotification> result(new VirtualTimeAdvancedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* virtualTimeElapsedValue = object->get("virtualTimeElapsed");
    errors->setName("virtualTimeElapsed");
    result->m_virtualTimeElapsed = ValueConversions<double>::fromValue(virtualTimeElapsedValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> VirtualTimeAdvancedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("virtualTimeElapsed", ValueConversions<double>::toValue(m_virtualTimeElapsed));
    return result;
}

std::unique_ptr<VirtualTimeAdvancedNotification> VirtualTimeAdvancedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<VirtualTimePausedNotification> VirtualTimePausedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<VirtualTimePausedNotification> result(new VirtualTimePausedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* virtualTimeElapsedValue = object->get("virtualTimeElapsed");
    errors->setName("virtualTimeElapsed");
    result->m_virtualTimeElapsed = ValueConversions<double>::fromValue(virtualTimeElapsedValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> VirtualTimePausedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("virtualTimeElapsed", ValueConversions<double>::toValue(m_virtualTimeElapsed));
    return result;
}

std::unique_ptr<VirtualTimePausedNotification> VirtualTimePausedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


namespace SetEmitTouchEventsForMouse {
namespace ConfigurationEnum {
const char* Mobile = "mobile";
const char* Desktop = "desktop";
} // namespace ConfigurationEnum
} // namespace SetEmitTouchEventsForMouse

// ------------- Frontend notifications.

void Frontend::virtualTimeAdvanced(double virtualTimeElapsed)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<VirtualTimeAdvancedNotification> messageData = VirtualTimeAdvancedNotification::create()
        .setVirtualTimeElapsed(virtualTimeElapsed)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Emulation.virtualTimeAdvanced", std::move(messageData)));
}

void Frontend::virtualTimeBudgetExpired()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Emulation.virtualTimeBudgetExpired"));
}

void Frontend::virtualTimePaused(double virtualTimeElapsed)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<VirtualTimePausedNotification> messageData = VirtualTimePausedNotification::create()
        .setVirtualTimeElapsed(virtualTimeElapsed)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Emulation.virtualTimePaused", std::move(messageData)));
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
        m_dispatchMap["Emulation.clearDeviceMetricsOverride"] = &DispatcherImpl::clearDeviceMetricsOverride;
        m_dispatchMap["Emulation.resetPageScaleFactor"] = &DispatcherImpl::resetPageScaleFactor;
        m_dispatchMap["Emulation.setCPUThrottlingRate"] = &DispatcherImpl::setCPUThrottlingRate;
        m_dispatchMap["Emulation.setDefaultBackgroundColorOverride"] = &DispatcherImpl::setDefaultBackgroundColorOverride;
        m_dispatchMap["Emulation.setDeviceMetricsOverride"] = &DispatcherImpl::setDeviceMetricsOverride;
        m_dispatchMap["Emulation.setEmulatedMedia"] = &DispatcherImpl::setEmulatedMedia;
        m_dispatchMap["Emulation.setNavigatorOverrides"] = &DispatcherImpl::setNavigatorOverrides;
        m_dispatchMap["Emulation.setPageScaleFactor"] = &DispatcherImpl::setPageScaleFactor;
        m_dispatchMap["Emulation.setScriptExecutionDisabled"] = &DispatcherImpl::setScriptExecutionDisabled;
        m_dispatchMap["Emulation.setTouchEmulationEnabled"] = &DispatcherImpl::setTouchEmulationEnabled;
        m_dispatchMap["Emulation.setVirtualTimePolicy"] = &DispatcherImpl::setVirtualTimePolicy;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status clearDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status resetPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setCPUThrottlingRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setDefaultBackgroundColorOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setEmulatedMedia(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setNavigatorOverrides(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setScriptExecutionDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setTouchEmulationEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setVirtualTimePolicy(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::clearDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->clearDeviceMetricsOverride();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::resetPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->resetPageScaleFactor();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setCPUThrottlingRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* rateValue = object ? object->get("rate") : nullptr;
    errors->setName("rate");
    double in_rate = ValueConversions<double>::fromValue(rateValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setCPUThrottlingRate(in_rate);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setDefaultBackgroundColorOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* colorValue = object ? object->get("color") : nullptr;
    Maybe<protocol::DOM::RGBA> in_color;
    if (colorValue) {
        errors->setName("color");
        in_color = ValueConversions<protocol::DOM::RGBA>::fromValue(colorValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setDefaultBackgroundColorOverride(std::move(in_color));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* widthValue = object ? object->get("width") : nullptr;
    errors->setName("width");
    int in_width = ValueConversions<int>::fromValue(widthValue, errors);
    protocol::Value* heightValue = object ? object->get("height") : nullptr;
    errors->setName("height");
    int in_height = ValueConversions<int>::fromValue(heightValue, errors);
    protocol::Value* deviceScaleFactorValue = object ? object->get("deviceScaleFactor") : nullptr;
    errors->setName("deviceScaleFactor");
    double in_deviceScaleFactor = ValueConversions<double>::fromValue(deviceScaleFactorValue, errors);
    protocol::Value* mobileValue = object ? object->get("mobile") : nullptr;
    errors->setName("mobile");
    bool in_mobile = ValueConversions<bool>::fromValue(mobileValue, errors);
    protocol::Value* scaleValue = object ? object->get("scale") : nullptr;
    Maybe<double> in_scale;
    if (scaleValue) {
        errors->setName("scale");
        in_scale = ValueConversions<double>::fromValue(scaleValue, errors);
    }
    protocol::Value* screenWidthValue = object ? object->get("screenWidth") : nullptr;
    Maybe<int> in_screenWidth;
    if (screenWidthValue) {
        errors->setName("screenWidth");
        in_screenWidth = ValueConversions<int>::fromValue(screenWidthValue, errors);
    }
    protocol::Value* screenHeightValue = object ? object->get("screenHeight") : nullptr;
    Maybe<int> in_screenHeight;
    if (screenHeightValue) {
        errors->setName("screenHeight");
        in_screenHeight = ValueConversions<int>::fromValue(screenHeightValue, errors);
    }
    protocol::Value* positionXValue = object ? object->get("positionX") : nullptr;
    Maybe<int> in_positionX;
    if (positionXValue) {
        errors->setName("positionX");
        in_positionX = ValueConversions<int>::fromValue(positionXValue, errors);
    }
    protocol::Value* positionYValue = object ? object->get("positionY") : nullptr;
    Maybe<int> in_positionY;
    if (positionYValue) {
        errors->setName("positionY");
        in_positionY = ValueConversions<int>::fromValue(positionYValue, errors);
    }
    protocol::Value* dontSetVisibleSizeValue = object ? object->get("dontSetVisibleSize") : nullptr;
    Maybe<bool> in_dontSetVisibleSize;
    if (dontSetVisibleSizeValue) {
        errors->setName("dontSetVisibleSize");
        in_dontSetVisibleSize = ValueConversions<bool>::fromValue(dontSetVisibleSizeValue, errors);
    }
    protocol::Value* screenOrientationValue = object ? object->get("screenOrientation") : nullptr;
    Maybe<protocol::Emulation::ScreenOrientation> in_screenOrientation;
    if (screenOrientationValue) {
        errors->setName("screenOrientation");
        in_screenOrientation = ValueConversions<protocol::Emulation::ScreenOrientation>::fromValue(screenOrientationValue, errors);
    }
    protocol::Value* viewportValue = object ? object->get("viewport") : nullptr;
    Maybe<protocol::Page::Viewport> in_viewport;
    if (viewportValue) {
        errors->setName("viewport");
        in_viewport = ValueConversions<protocol::Page::Viewport>::fromValue(viewportValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setDeviceMetricsOverride(in_width, in_height, in_deviceScaleFactor, in_mobile, std::move(in_scale), std::move(in_screenWidth), std::move(in_screenHeight), std::move(in_positionX), std::move(in_positionY), std::move(in_dontSetVisibleSize), std::move(in_screenOrientation), std::move(in_viewport));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setEmulatedMedia(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* mediaValue = object ? object->get("media") : nullptr;
    errors->setName("media");
    String in_media = ValueConversions<String>::fromValue(mediaValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setEmulatedMedia(in_media);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setNavigatorOverrides(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* platformValue = object ? object->get("platform") : nullptr;
    errors->setName("platform");
    String in_platform = ValueConversions<String>::fromValue(platformValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setNavigatorOverrides(in_platform);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* pageScaleFactorValue = object ? object->get("pageScaleFactor") : nullptr;
    errors->setName("pageScaleFactor");
    double in_pageScaleFactor = ValueConversions<double>::fromValue(pageScaleFactorValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setPageScaleFactor(in_pageScaleFactor);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setScriptExecutionDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* valueValue = object ? object->get("value") : nullptr;
    errors->setName("value");
    bool in_value = ValueConversions<bool>::fromValue(valueValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setScriptExecutionDisabled(in_value);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setTouchEmulationEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::fromValue(enabledValue, errors);
    protocol::Value* maxTouchPointsValue = object ? object->get("maxTouchPoints") : nullptr;
    Maybe<int> in_maxTouchPoints;
    if (maxTouchPointsValue) {
        errors->setName("maxTouchPoints");
        in_maxTouchPoints = ValueConversions<int>::fromValue(maxTouchPointsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setTouchEmulationEnabled(in_enabled, std::move(in_maxTouchPoints));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setVirtualTimePolicy(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* policyValue = object ? object->get("policy") : nullptr;
    errors->setName("policy");
    String in_policy = ValueConversions<String>::fromValue(policyValue, errors);
    protocol::Value* budgetValue = object ? object->get("budget") : nullptr;
    Maybe<double> in_budget;
    if (budgetValue) {
        errors->setName("budget");
        in_budget = ValueConversions<double>::fromValue(budgetValue, errors);
    }
    protocol::Value* maxVirtualTimeTaskStarvationCountValue = object ? object->get("maxVirtualTimeTaskStarvationCount") : nullptr;
    Maybe<int> in_maxVirtualTimeTaskStarvationCount;
    if (maxVirtualTimeTaskStarvationCountValue) {
        errors->setName("maxVirtualTimeTaskStarvationCount");
        in_maxVirtualTimeTaskStarvationCount = ValueConversions<int>::fromValue(maxVirtualTimeTaskStarvationCountValue, errors);
    }
    protocol::Value* waitForNavigationValue = object ? object->get("waitForNavigation") : nullptr;
    Maybe<bool> in_waitForNavigation;
    if (waitForNavigationValue) {
        errors->setName("waitForNavigation");
        in_waitForNavigation = ValueConversions<bool>::fromValue(waitForNavigationValue, errors);
    }
    protocol::Value* initialVirtualTimeValue = object ? object->get("initialVirtualTime") : nullptr;
    Maybe<double> in_initialVirtualTime;
    if (initialVirtualTimeValue) {
        errors->setName("initialVirtualTime");
        in_initialVirtualTime = ValueConversions<double>::fromValue(initialVirtualTimeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    double out_virtualTimeTicksBase;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setVirtualTimePolicy(in_policy, std::move(in_budget), std::move(in_maxVirtualTimeTaskStarvationCount), std::move(in_waitForNavigation), std::move(in_initialVirtualTime), &out_virtualTimeTicksBase);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("virtualTimeTicksBase", ValueConversions<double>::toValue(out_virtualTimeTicksBase));
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
    uber->registerBackend("Emulation", std::move(dispatcher));
}

} // Emulation
} // namespace blink
} // namespace protocol
