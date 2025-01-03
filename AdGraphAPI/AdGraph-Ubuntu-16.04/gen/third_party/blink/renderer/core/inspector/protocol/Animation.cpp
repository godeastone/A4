// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/Animation.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace Animation {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Animation";
const char Metainfo::commandPrefix[] = "Animation.";
const char Metainfo::version[] = "1.3";

const char* Animation::TypeEnum::CSSTransition = "CSSTransition";
const char* Animation::TypeEnum::CSSAnimation = "CSSAnimation";
const char* Animation::TypeEnum::WebAnimation = "WebAnimation";

std::unique_ptr<Animation> Animation::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Animation> result(new Animation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<String>::fromValue(idValue, errors);
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* pausedStateValue = object->get("pausedState");
    errors->setName("pausedState");
    result->m_pausedState = ValueConversions<bool>::fromValue(pausedStateValue, errors);
    protocol::Value* playStateValue = object->get("playState");
    errors->setName("playState");
    result->m_playState = ValueConversions<String>::fromValue(playStateValue, errors);
    protocol::Value* playbackRateValue = object->get("playbackRate");
    errors->setName("playbackRate");
    result->m_playbackRate = ValueConversions<double>::fromValue(playbackRateValue, errors);
    protocol::Value* startTimeValue = object->get("startTime");
    errors->setName("startTime");
    result->m_startTime = ValueConversions<double>::fromValue(startTimeValue, errors);
    protocol::Value* currentTimeValue = object->get("currentTime");
    errors->setName("currentTime");
    result->m_currentTime = ValueConversions<double>::fromValue(currentTimeValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* sourceValue = object->get("source");
    if (sourceValue) {
        errors->setName("source");
        result->m_source = ValueConversions<protocol::Animation::AnimationEffect>::fromValue(sourceValue, errors);
    }
    protocol::Value* cssIdValue = object->get("cssId");
    if (cssIdValue) {
        errors->setName("cssId");
        result->m_cssId = ValueConversions<String>::fromValue(cssIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Animation::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<String>::toValue(m_id));
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("pausedState", ValueConversions<bool>::toValue(m_pausedState));
    result->setValue("playState", ValueConversions<String>::toValue(m_playState));
    result->setValue("playbackRate", ValueConversions<double>::toValue(m_playbackRate));
    result->setValue("startTime", ValueConversions<double>::toValue(m_startTime));
    result->setValue("currentTime", ValueConversions<double>::toValue(m_currentTime));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    if (m_source.isJust())
        result->setValue("source", ValueConversions<protocol::Animation::AnimationEffect>::toValue(m_source.fromJust()));
    if (m_cssId.isJust())
        result->setValue("cssId", ValueConversions<String>::toValue(m_cssId.fromJust()));
    return result;
}

std::unique_ptr<Animation> Animation::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<AnimationEffect> AnimationEffect::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AnimationEffect> result(new AnimationEffect());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* delayValue = object->get("delay");
    errors->setName("delay");
    result->m_delay = ValueConversions<double>::fromValue(delayValue, errors);
    protocol::Value* endDelayValue = object->get("endDelay");
    errors->setName("endDelay");
    result->m_endDelay = ValueConversions<double>::fromValue(endDelayValue, errors);
    protocol::Value* iterationStartValue = object->get("iterationStart");
    errors->setName("iterationStart");
    result->m_iterationStart = ValueConversions<double>::fromValue(iterationStartValue, errors);
    protocol::Value* iterationsValue = object->get("iterations");
    errors->setName("iterations");
    result->m_iterations = ValueConversions<double>::fromValue(iterationsValue, errors);
    protocol::Value* durationValue = object->get("duration");
    errors->setName("duration");
    result->m_duration = ValueConversions<double>::fromValue(durationValue, errors);
    protocol::Value* directionValue = object->get("direction");
    errors->setName("direction");
    result->m_direction = ValueConversions<String>::fromValue(directionValue, errors);
    protocol::Value* fillValue = object->get("fill");
    errors->setName("fill");
    result->m_fill = ValueConversions<String>::fromValue(fillValue, errors);
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    if (backendNodeIdValue) {
        errors->setName("backendNodeId");
        result->m_backendNodeId = ValueConversions<int>::fromValue(backendNodeIdValue, errors);
    }
    protocol::Value* keyframesRuleValue = object->get("keyframesRule");
    if (keyframesRuleValue) {
        errors->setName("keyframesRule");
        result->m_keyframesRule = ValueConversions<protocol::Animation::KeyframesRule>::fromValue(keyframesRuleValue, errors);
    }
    protocol::Value* easingValue = object->get("easing");
    errors->setName("easing");
    result->m_easing = ValueConversions<String>::fromValue(easingValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AnimationEffect::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("delay", ValueConversions<double>::toValue(m_delay));
    result->setValue("endDelay", ValueConversions<double>::toValue(m_endDelay));
    result->setValue("iterationStart", ValueConversions<double>::toValue(m_iterationStart));
    result->setValue("iterations", ValueConversions<double>::toValue(m_iterations));
    result->setValue("duration", ValueConversions<double>::toValue(m_duration));
    result->setValue("direction", ValueConversions<String>::toValue(m_direction));
    result->setValue("fill", ValueConversions<String>::toValue(m_fill));
    if (m_backendNodeId.isJust())
        result->setValue("backendNodeId", ValueConversions<int>::toValue(m_backendNodeId.fromJust()));
    if (m_keyframesRule.isJust())
        result->setValue("keyframesRule", ValueConversions<protocol::Animation::KeyframesRule>::toValue(m_keyframesRule.fromJust()));
    result->setValue("easing", ValueConversions<String>::toValue(m_easing));
    return result;
}

std::unique_ptr<AnimationEffect> AnimationEffect::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<KeyframesRule> KeyframesRule::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyframesRule> result(new KeyframesRule());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    if (nameValue) {
        errors->setName("name");
        result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    }
    protocol::Value* keyframesValue = object->get("keyframes");
    errors->setName("keyframes");
    result->m_keyframes = ValueConversions<protocol::Array<protocol::Animation::KeyframeStyle>>::fromValue(keyframesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyframesRule::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_name.isJust())
        result->setValue("name", ValueConversions<String>::toValue(m_name.fromJust()));
    result->setValue("keyframes", ValueConversions<protocol::Array<protocol::Animation::KeyframeStyle>>::toValue(m_keyframes.get()));
    return result;
}

std::unique_ptr<KeyframesRule> KeyframesRule::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<KeyframeStyle> KeyframeStyle::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyframeStyle> result(new KeyframeStyle());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* offsetValue = object->get("offset");
    errors->setName("offset");
    result->m_offset = ValueConversions<String>::fromValue(offsetValue, errors);
    protocol::Value* easingValue = object->get("easing");
    errors->setName("easing");
    result->m_easing = ValueConversions<String>::fromValue(easingValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyframeStyle::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("offset", ValueConversions<String>::toValue(m_offset));
    result->setValue("easing", ValueConversions<String>::toValue(m_easing));
    return result;
}

std::unique_ptr<KeyframeStyle> KeyframeStyle::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<AnimationCanceledNotification> AnimationCanceledNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AnimationCanceledNotification> result(new AnimationCanceledNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<String>::fromValue(idValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AnimationCanceledNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<String>::toValue(m_id));
    return result;
}

std::unique_ptr<AnimationCanceledNotification> AnimationCanceledNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<AnimationCreatedNotification> AnimationCreatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AnimationCreatedNotification> result(new AnimationCreatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<String>::fromValue(idValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AnimationCreatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<String>::toValue(m_id));
    return result;
}

std::unique_ptr<AnimationCreatedNotification> AnimationCreatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<AnimationStartedNotification> AnimationStartedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AnimationStartedNotification> result(new AnimationStartedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* animationValue = object->get("animation");
    errors->setName("animation");
    result->m_animation = ValueConversions<protocol::Animation::Animation>::fromValue(animationValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AnimationStartedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("animation", ValueConversions<protocol::Animation::Animation>::toValue(m_animation.get()));
    return result;
}

std::unique_ptr<AnimationStartedNotification> AnimationStartedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::animationCanceled(const String& id)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<AnimationCanceledNotification> messageData = AnimationCanceledNotification::create()
        .setId(id)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Animation.animationCanceled", std::move(messageData)));
}

void Frontend::animationCreated(const String& id)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<AnimationCreatedNotification> messageData = AnimationCreatedNotification::create()
        .setId(id)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Animation.animationCreated", std::move(messageData)));
}

void Frontend::animationStarted(std::unique_ptr<protocol::Animation::Animation> animation)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<AnimationStartedNotification> messageData = AnimationStartedNotification::create()
        .setAnimation(std::move(animation))
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Animation.animationStarted", std::move(messageData)));
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
        m_dispatchMap["Animation.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Animation.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Animation.getCurrentTime"] = &DispatcherImpl::getCurrentTime;
        m_dispatchMap["Animation.getPlaybackRate"] = &DispatcherImpl::getPlaybackRate;
        m_dispatchMap["Animation.releaseAnimations"] = &DispatcherImpl::releaseAnimations;
        m_dispatchMap["Animation.resolveAnimation"] = &DispatcherImpl::resolveAnimation;
        m_dispatchMap["Animation.seekAnimations"] = &DispatcherImpl::seekAnimations;
        m_dispatchMap["Animation.setPaused"] = &DispatcherImpl::setPaused;
        m_dispatchMap["Animation.setPlaybackRate"] = &DispatcherImpl::setPlaybackRate;
        m_dispatchMap["Animation.setTiming"] = &DispatcherImpl::setTiming;
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
    DispatchResponse::Status getCurrentTime(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status releaseAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status resolveAnimation(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status seekAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setPaused(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setTiming(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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
    DispatchResponse response = m_backend->disable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getCurrentTime(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* idValue = object ? object->get("id") : nullptr;
    errors->setName("id");
    String in_id = ValueConversions<String>::fromValue(idValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    double out_currentTime;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getCurrentTime(in_id, &out_currentTime);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("currentTime", ValueConversions<double>::toValue(out_currentTime));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    double out_playbackRate;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getPlaybackRate(&out_playbackRate);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("playbackRate", ValueConversions<double>::toValue(out_playbackRate));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::releaseAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationsValue = object ? object->get("animations") : nullptr;
    errors->setName("animations");
    std::unique_ptr<protocol::Array<String>> in_animations = ValueConversions<protocol::Array<String>>::fromValue(animationsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->releaseAnimations(std::move(in_animations));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::resolveAnimation(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationIdValue = object ? object->get("animationId") : nullptr;
    errors->setName("animationId");
    String in_animationId = ValueConversions<String>::fromValue(animationIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<v8_inspector::protocol::Runtime::API::RemoteObject> out_remoteObject;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->resolveAnimation(in_animationId, &out_remoteObject);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("remoteObject", ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::toValue(out_remoteObject.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::seekAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationsValue = object ? object->get("animations") : nullptr;
    errors->setName("animations");
    std::unique_ptr<protocol::Array<String>> in_animations = ValueConversions<protocol::Array<String>>::fromValue(animationsValue, errors);
    protocol::Value* currentTimeValue = object ? object->get("currentTime") : nullptr;
    errors->setName("currentTime");
    double in_currentTime = ValueConversions<double>::fromValue(currentTimeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->seekAnimations(std::move(in_animations), in_currentTime);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setPaused(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationsValue = object ? object->get("animations") : nullptr;
    errors->setName("animations");
    std::unique_ptr<protocol::Array<String>> in_animations = ValueConversions<protocol::Array<String>>::fromValue(animationsValue, errors);
    protocol::Value* pausedValue = object ? object->get("paused") : nullptr;
    errors->setName("paused");
    bool in_paused = ValueConversions<bool>::fromValue(pausedValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setPaused(std::move(in_animations), in_paused);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* playbackRateValue = object ? object->get("playbackRate") : nullptr;
    errors->setName("playbackRate");
    double in_playbackRate = ValueConversions<double>::fromValue(playbackRateValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setPlaybackRate(in_playbackRate);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setTiming(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationIdValue = object ? object->get("animationId") : nullptr;
    errors->setName("animationId");
    String in_animationId = ValueConversions<String>::fromValue(animationIdValue, errors);
    protocol::Value* durationValue = object ? object->get("duration") : nullptr;
    errors->setName("duration");
    double in_duration = ValueConversions<double>::fromValue(durationValue, errors);
    protocol::Value* delayValue = object ? object->get("delay") : nullptr;
    errors->setName("delay");
    double in_delay = ValueConversions<double>::fromValue(delayValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setTiming(in_animationId, in_duration, in_delay);
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
    uber->registerBackend("Animation", std::move(dispatcher));
}

} // Animation
} // namespace blink
} // namespace protocol
