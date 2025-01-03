// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/ui_devtools/Overlay.h"

#include "components/ui_devtools/Protocol.h"

namespace ui_devtools {
namespace protocol {
namespace Overlay {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Overlay";
const char Metainfo::commandPrefix[] = "Overlay.";
const char Metainfo::version[] = "1.0";

std::unique_ptr<HighlightConfig> HighlightConfig::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<HighlightConfig> result(new HighlightConfig());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* showInfoValue = object->get("showInfo");
    if (showInfoValue) {
        errors->setName("showInfo");
        result->m_showInfo = ValueConversions<bool>::fromValue(showInfoValue, errors);
    }
    protocol::Value* showRulersValue = object->get("showRulers");
    if (showRulersValue) {
        errors->setName("showRulers");
        result->m_showRulers = ValueConversions<bool>::fromValue(showRulersValue, errors);
    }
    protocol::Value* showExtensionLinesValue = object->get("showExtensionLines");
    if (showExtensionLinesValue) {
        errors->setName("showExtensionLines");
        result->m_showExtensionLines = ValueConversions<bool>::fromValue(showExtensionLinesValue, errors);
    }
    protocol::Value* displayAsMaterialValue = object->get("displayAsMaterial");
    if (displayAsMaterialValue) {
        errors->setName("displayAsMaterial");
        result->m_displayAsMaterial = ValueConversions<bool>::fromValue(displayAsMaterialValue, errors);
    }
    protocol::Value* contentColorValue = object->get("contentColor");
    if (contentColorValue) {
        errors->setName("contentColor");
        result->m_contentColor = ValueConversions<protocol::DOM::RGBA>::fromValue(contentColorValue, errors);
    }
    protocol::Value* paddingColorValue = object->get("paddingColor");
    if (paddingColorValue) {
        errors->setName("paddingColor");
        result->m_paddingColor = ValueConversions<protocol::DOM::RGBA>::fromValue(paddingColorValue, errors);
    }
    protocol::Value* borderColorValue = object->get("borderColor");
    if (borderColorValue) {
        errors->setName("borderColor");
        result->m_borderColor = ValueConversions<protocol::DOM::RGBA>::fromValue(borderColorValue, errors);
    }
    protocol::Value* marginColorValue = object->get("marginColor");
    if (marginColorValue) {
        errors->setName("marginColor");
        result->m_marginColor = ValueConversions<protocol::DOM::RGBA>::fromValue(marginColorValue, errors);
    }
    protocol::Value* eventTargetColorValue = object->get("eventTargetColor");
    if (eventTargetColorValue) {
        errors->setName("eventTargetColor");
        result->m_eventTargetColor = ValueConversions<protocol::DOM::RGBA>::fromValue(eventTargetColorValue, errors);
    }
    protocol::Value* shapeColorValue = object->get("shapeColor");
    if (shapeColorValue) {
        errors->setName("shapeColor");
        result->m_shapeColor = ValueConversions<protocol::DOM::RGBA>::fromValue(shapeColorValue, errors);
    }
    protocol::Value* shapeMarginColorValue = object->get("shapeMarginColor");
    if (shapeMarginColorValue) {
        errors->setName("shapeMarginColor");
        result->m_shapeMarginColor = ValueConversions<protocol::DOM::RGBA>::fromValue(shapeMarginColorValue, errors);
    }
    protocol::Value* selectorListValue = object->get("selectorList");
    if (selectorListValue) {
        errors->setName("selectorList");
        result->m_selectorList = ValueConversions<String>::fromValue(selectorListValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> HighlightConfig::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_showInfo.isJust())
        result->setValue("showInfo", ValueConversions<bool>::toValue(m_showInfo.fromJust()));
    if (m_showRulers.isJust())
        result->setValue("showRulers", ValueConversions<bool>::toValue(m_showRulers.fromJust()));
    if (m_showExtensionLines.isJust())
        result->setValue("showExtensionLines", ValueConversions<bool>::toValue(m_showExtensionLines.fromJust()));
    if (m_displayAsMaterial.isJust())
        result->setValue("displayAsMaterial", ValueConversions<bool>::toValue(m_displayAsMaterial.fromJust()));
    if (m_contentColor.isJust())
        result->setValue("contentColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_contentColor.fromJust()));
    if (m_paddingColor.isJust())
        result->setValue("paddingColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_paddingColor.fromJust()));
    if (m_borderColor.isJust())
        result->setValue("borderColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_borderColor.fromJust()));
    if (m_marginColor.isJust())
        result->setValue("marginColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_marginColor.fromJust()));
    if (m_eventTargetColor.isJust())
        result->setValue("eventTargetColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_eventTargetColor.fromJust()));
    if (m_shapeColor.isJust())
        result->setValue("shapeColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_shapeColor.fromJust()));
    if (m_shapeMarginColor.isJust())
        result->setValue("shapeMarginColor", ValueConversions<protocol::DOM::RGBA>::toValue(m_shapeMarginColor.fromJust()));
    if (m_selectorList.isJust())
        result->setValue("selectorList", ValueConversions<String>::toValue(m_selectorList.fromJust()));
    return result;
}

std::unique_ptr<HighlightConfig> HighlightConfig::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace InspectModeEnum {
const char SearchForNode[] = "searchForNode";
const char SearchForUAShadowDOM[] = "searchForUAShadowDOM";
const char None[] = "none";
} // namespace InspectModeEnum

std::unique_ptr<NodeHighlightRequestedNotification> NodeHighlightRequestedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NodeHighlightRequestedNotification> result(new NodeHighlightRequestedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nodeIdValue = object->get("nodeId");
    errors->setName("nodeId");
    result->m_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NodeHighlightRequestedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("nodeId", ValueConversions<int>::toValue(m_nodeId));
    return result;
}

std::unique_ptr<NodeHighlightRequestedNotification> NodeHighlightRequestedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<InspectNodeRequestedNotification> InspectNodeRequestedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<InspectNodeRequestedNotification> result(new InspectNodeRequestedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    errors->setName("backendNodeId");
    result->m_backendNodeId = ValueConversions<int>::fromValue(backendNodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> InspectNodeRequestedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("backendNodeId", ValueConversions<int>::toValue(m_backendNodeId));
    return result;
}

std::unique_ptr<InspectNodeRequestedNotification> InspectNodeRequestedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::nodeHighlightRequested(int nodeId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<NodeHighlightRequestedNotification> messageData = NodeHighlightRequestedNotification::create()
        .setNodeId(nodeId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Overlay.nodeHighlightRequested", std::move(messageData)));
}

void Frontend::inspectNodeRequested(int backendNodeId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<InspectNodeRequestedNotification> messageData = InspectNodeRequestedNotification::create()
        .setBackendNodeId(backendNodeId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Overlay.inspectNodeRequested", std::move(messageData)));
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
        m_dispatchMap["Overlay.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Overlay.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Overlay.highlightNode"] = &DispatcherImpl::highlightNode;
        m_dispatchMap["Overlay.hideHighlight"] = &DispatcherImpl::hideHighlight;
        m_dispatchMap["Overlay.setInspectMode"] = &DispatcherImpl::setInspectMode;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status highlightNode(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status hideHighlight(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setInspectMode(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

DispatchResponse::Status DispatcherImpl::highlightNode(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* highlightConfigValue = object ? object->get("highlightConfig") : nullptr;
    errors->setName("highlightConfig");
    std::unique_ptr<protocol::Overlay::HighlightConfig> in_highlightConfig = ValueConversions<protocol::Overlay::HighlightConfig>::fromValue(highlightConfigValue, errors);
    protocol::Value* nodeIdValue = object ? object->get("nodeId") : nullptr;
    Maybe<int> in_nodeId;
    if (nodeIdValue) {
        errors->setName("nodeId");
        in_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->highlightNode(std::move(in_highlightConfig), std::move(in_nodeId));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::hideHighlight(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->hideHighlight();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setInspectMode(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* modeValue = object ? object->get("mode") : nullptr;
    errors->setName("mode");
    String in_mode = ValueConversions<String>::fromValue(modeValue, errors);
    protocol::Value* highlightConfigValue = object ? object->get("highlightConfig") : nullptr;
    Maybe<protocol::Overlay::HighlightConfig> in_highlightConfig;
    if (highlightConfigValue) {
        errors->setName("highlightConfig");
        in_highlightConfig = ValueConversions<protocol::Overlay::HighlightConfig>::fromValue(highlightConfigValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->setInspectMode(in_mode, std::move(in_highlightConfig));
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
    uber->registerBackend("Overlay", std::move(dispatcher));
}

} // Overlay
} // namespace ui_devtools
} // namespace protocol
