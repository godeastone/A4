// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/emulation.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
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

void Frontend::VirtualTimeAdvanced(double virtualTimeElapsed)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<VirtualTimeAdvancedNotification> messageData = VirtualTimeAdvancedNotification::Create()
        .SetVirtualTimeElapsed(virtualTimeElapsed)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Emulation.virtualTimeAdvanced", std::move(messageData)));
}

void Frontend::VirtualTimeBudgetExpired()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Emulation.virtualTimeBudgetExpired"));
}

void Frontend::VirtualTimePaused(double virtualTimeElapsed)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<VirtualTimePausedNotification> messageData = VirtualTimePausedNotification::Create()
        .SetVirtualTimeElapsed(virtualTimeElapsed)
        .Build();
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
        m_dispatchMap["Emulation.canEmulate"] = &DispatcherImpl::canEmulate;
        m_dispatchMap["Emulation.clearDeviceMetricsOverride"] = &DispatcherImpl::clearDeviceMetricsOverride;
        m_dispatchMap["Emulation.clearGeolocationOverride"] = &DispatcherImpl::clearGeolocationOverride;
        m_dispatchMap["Emulation.setDeviceMetricsOverride"] = &DispatcherImpl::setDeviceMetricsOverride;
        m_dispatchMap["Emulation.setEmitTouchEventsForMouse"] = &DispatcherImpl::setEmitTouchEventsForMouse;
        m_dispatchMap["Emulation.setGeolocationOverride"] = &DispatcherImpl::setGeolocationOverride;
        m_dispatchMap["Emulation.setVisibleSize"] = &DispatcherImpl::setVisibleSize;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status canEmulate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status clearDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status clearGeolocationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setEmitTouchEventsForMouse(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setGeolocationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setVisibleSize(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::canEmulate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    bool out_result;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->CanEmulate(&out_result);
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

DispatchResponse::Status DispatcherImpl::clearDeviceMetricsOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->ClearDeviceMetricsOverride();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::clearGeolocationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->ClearGeolocationOverride();
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
    DispatchResponse response = m_backend->SetDeviceMetricsOverride(in_width, in_height, in_deviceScaleFactor, in_mobile, std::move(in_scale), std::move(in_screenWidth), std::move(in_screenHeight), std::move(in_positionX), std::move(in_positionY), std::move(in_dontSetVisibleSize), std::move(in_screenOrientation), std::move(in_viewport));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setEmitTouchEventsForMouse(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::fromValue(enabledValue, errors);
    protocol::Value* configurationValue = object ? object->get("configuration") : nullptr;
    Maybe<String> in_configuration;
    if (configurationValue) {
        errors->setName("configuration");
        in_configuration = ValueConversions<String>::fromValue(configurationValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetEmitTouchEventsForMouse(in_enabled, std::move(in_configuration));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setGeolocationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* latitudeValue = object ? object->get("latitude") : nullptr;
    Maybe<double> in_latitude;
    if (latitudeValue) {
        errors->setName("latitude");
        in_latitude = ValueConversions<double>::fromValue(latitudeValue, errors);
    }
    protocol::Value* longitudeValue = object ? object->get("longitude") : nullptr;
    Maybe<double> in_longitude;
    if (longitudeValue) {
        errors->setName("longitude");
        in_longitude = ValueConversions<double>::fromValue(longitudeValue, errors);
    }
    protocol::Value* accuracyValue = object ? object->get("accuracy") : nullptr;
    Maybe<double> in_accuracy;
    if (accuracyValue) {
        errors->setName("accuracy");
        in_accuracy = ValueConversions<double>::fromValue(accuracyValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetGeolocationOverride(std::move(in_latitude), std::move(in_longitude), std::move(in_accuracy));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setVisibleSize(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
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
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetVisibleSize(in_width, in_height);
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
    uber->registerBackend("Emulation", std::move(dispatcher));
}

} // Emulation
} // namespace content
} // namespace protocol
