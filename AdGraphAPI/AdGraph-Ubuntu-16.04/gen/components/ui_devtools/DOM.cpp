// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/ui_devtools/DOM.h"

#include "components/ui_devtools/Protocol.h"

namespace ui_devtools {
namespace protocol {
namespace DOM {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "DOM";
const char Metainfo::commandPrefix[] = "DOM.";
const char Metainfo::version[] = "1.0";

std::unique_ptr<Node> Node::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Node> result(new Node());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nodeIdValue = object->get("nodeId");
    errors->setName("nodeId");
    result->m_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    errors->setName("backendNodeId");
    result->m_backendNodeId = ValueConversions<int>::fromValue(backendNodeIdValue, errors);
    protocol::Value* nodeTypeValue = object->get("nodeType");
    errors->setName("nodeType");
    result->m_nodeType = ValueConversions<int>::fromValue(nodeTypeValue, errors);
    protocol::Value* nodeNameValue = object->get("nodeName");
    errors->setName("nodeName");
    result->m_nodeName = ValueConversions<String>::fromValue(nodeNameValue, errors);
    protocol::Value* childNodeCountValue = object->get("childNodeCount");
    if (childNodeCountValue) {
        errors->setName("childNodeCount");
        result->m_childNodeCount = ValueConversions<int>::fromValue(childNodeCountValue, errors);
    }
    protocol::Value* childrenValue = object->get("children");
    if (childrenValue) {
        errors->setName("children");
        result->m_children = ValueConversions<protocol::Array<protocol::DOM::Node>>::fromValue(childrenValue, errors);
    }
    protocol::Value* attributesValue = object->get("attributes");
    if (attributesValue) {
        errors->setName("attributes");
        result->m_attributes = ValueConversions<protocol::Array<String>>::fromValue(attributesValue, errors);
    }
    protocol::Value* nameValue = object->get("name");
    if (nameValue) {
        errors->setName("name");
        result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    }
    protocol::Value* valueValue = object->get("value");
    if (valueValue) {
        errors->setName("value");
        result->m_value = ValueConversions<String>::fromValue(valueValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Node::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("nodeId", ValueConversions<int>::toValue(m_nodeId));
    result->setValue("backendNodeId", ValueConversions<int>::toValue(m_backendNodeId));
    result->setValue("nodeType", ValueConversions<int>::toValue(m_nodeType));
    result->setValue("nodeName", ValueConversions<String>::toValue(m_nodeName));
    if (m_childNodeCount.isJust())
        result->setValue("childNodeCount", ValueConversions<int>::toValue(m_childNodeCount.fromJust()));
    if (m_children.isJust())
        result->setValue("children", ValueConversions<protocol::Array<protocol::DOM::Node>>::toValue(m_children.fromJust()));
    if (m_attributes.isJust())
        result->setValue("attributes", ValueConversions<protocol::Array<String>>::toValue(m_attributes.fromJust()));
    if (m_name.isJust())
        result->setValue("name", ValueConversions<String>::toValue(m_name.fromJust()));
    if (m_value.isJust())
        result->setValue("value", ValueConversions<String>::toValue(m_value.fromJust()));
    return result;
}

std::unique_ptr<Node> Node::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<RGBA> RGBA::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<RGBA> result(new RGBA());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* rValue = object->get("r");
    errors->setName("r");
    result->m_r = ValueConversions<int>::fromValue(rValue, errors);
    protocol::Value* gValue = object->get("g");
    errors->setName("g");
    result->m_g = ValueConversions<int>::fromValue(gValue, errors);
    protocol::Value* bValue = object->get("b");
    errors->setName("b");
    result->m_b = ValueConversions<int>::fromValue(bValue, errors);
    protocol::Value* aValue = object->get("a");
    if (aValue) {
        errors->setName("a");
        result->m_a = ValueConversions<double>::fromValue(aValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> RGBA::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("r", ValueConversions<int>::toValue(m_r));
    result->setValue("g", ValueConversions<int>::toValue(m_g));
    result->setValue("b", ValueConversions<int>::toValue(m_b));
    if (m_a.isJust())
        result->setValue("a", ValueConversions<double>::toValue(m_a.fromJust()));
    return result;
}

std::unique_ptr<RGBA> RGBA::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

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

std::unique_ptr<ChildNodeInsertedNotification> ChildNodeInsertedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ChildNodeInsertedNotification> result(new ChildNodeInsertedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* parentNodeIdValue = object->get("parentNodeId");
    errors->setName("parentNodeId");
    result->m_parentNodeId = ValueConversions<int>::fromValue(parentNodeIdValue, errors);
    protocol::Value* previousNodeIdValue = object->get("previousNodeId");
    errors->setName("previousNodeId");
    result->m_previousNodeId = ValueConversions<int>::fromValue(previousNodeIdValue, errors);
    protocol::Value* nodeValue = object->get("node");
    errors->setName("node");
    result->m_node = ValueConversions<protocol::DOM::Node>::fromValue(nodeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ChildNodeInsertedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("parentNodeId", ValueConversions<int>::toValue(m_parentNodeId));
    result->setValue("previousNodeId", ValueConversions<int>::toValue(m_previousNodeId));
    result->setValue("node", ValueConversions<protocol::DOM::Node>::toValue(m_node.get()));
    return result;
}

std::unique_ptr<ChildNodeInsertedNotification> ChildNodeInsertedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ChildNodeRemovedNotification> ChildNodeRemovedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ChildNodeRemovedNotification> result(new ChildNodeRemovedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* parentNodeIdValue = object->get("parentNodeId");
    errors->setName("parentNodeId");
    result->m_parentNodeId = ValueConversions<int>::fromValue(parentNodeIdValue, errors);
    protocol::Value* nodeIdValue = object->get("nodeId");
    errors->setName("nodeId");
    result->m_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ChildNodeRemovedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("parentNodeId", ValueConversions<int>::toValue(m_parentNodeId));
    result->setValue("nodeId", ValueConversions<int>::toValue(m_nodeId));
    return result;
}

std::unique_ptr<ChildNodeRemovedNotification> ChildNodeRemovedNotification::clone() const
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
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("DOM.nodeHighlightRequested", std::move(messageData)));
}

void Frontend::childNodeInserted(int parentNodeId, int previousNodeId, std::unique_ptr<protocol::DOM::Node> node)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ChildNodeInsertedNotification> messageData = ChildNodeInsertedNotification::create()
        .setParentNodeId(parentNodeId)
        .setPreviousNodeId(previousNodeId)
        .setNode(std::move(node))
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("DOM.childNodeInserted", std::move(messageData)));
}

void Frontend::childNodeRemoved(int parentNodeId, int nodeId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ChildNodeRemovedNotification> messageData = ChildNodeRemovedNotification::create()
        .setParentNodeId(parentNodeId)
        .setNodeId(nodeId)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("DOM.childNodeRemoved", std::move(messageData)));
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
        m_dispatchMap["DOM.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["DOM.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["DOM.getDocument"] = &DispatcherImpl::getDocument;
      m_redirects["DOM.highlightNode"] = "Overlay.highlightNode";
        m_dispatchMap["DOM.hideHighlight"] = &DispatcherImpl::hideHighlight;
        m_dispatchMap["DOM.pushNodesByBackendIdsToFrontend"] = &DispatcherImpl::pushNodesByBackendIdsToFrontend;
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
    DispatchResponse::Status getDocument(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status hideHighlight(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status pushNodesByBackendIdsToFrontend(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

DispatchResponse::Status DispatcherImpl::getDocument(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DOM::Node> out_root;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getDocument(&out_root);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("root", ValueConversions<protocol::DOM::Node>::toValue(out_root.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
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

DispatchResponse::Status DispatcherImpl::pushNodesByBackendIdsToFrontend(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* backendNodeIdsValue = object ? object->get("backendNodeIds") : nullptr;
    errors->setName("backendNodeIds");
    std::unique_ptr<protocol::Array<int>> in_backendNodeIds = ValueConversions<protocol::Array<int>>::fromValue(backendNodeIdsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<int>> out_nodeIds;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->pushNodesByBackendIdsToFrontend(std::move(in_backendNodeIds), &out_nodeIds);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("nodeIds", ValueConversions<protocol::Array<int>>::toValue(out_nodeIds.get()));
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
    uber->registerBackend("DOM", std::move(dispatcher));
}

} // DOM
} // namespace ui_devtools
} // namespace protocol
