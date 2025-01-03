// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/DOMSnapshot.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace DOMSnapshot {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "DOMSnapshot";
const char Metainfo::commandPrefix[] = "DOMSnapshot.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<DOMNode> DOMNode::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DOMNode> result(new DOMNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nodeTypeValue = object->get("nodeType");
    errors->setName("nodeType");
    result->m_nodeType = ValueConversions<int>::fromValue(nodeTypeValue, errors);
    protocol::Value* nodeNameValue = object->get("nodeName");
    errors->setName("nodeName");
    result->m_nodeName = ValueConversions<String>::fromValue(nodeNameValue, errors);
    protocol::Value* nodeValueValue = object->get("nodeValue");
    errors->setName("nodeValue");
    result->m_nodeValue = ValueConversions<String>::fromValue(nodeValueValue, errors);
    protocol::Value* textValueValue = object->get("textValue");
    if (textValueValue) {
        errors->setName("textValue");
        result->m_textValue = ValueConversions<String>::fromValue(textValueValue, errors);
    }
    protocol::Value* inputValueValue = object->get("inputValue");
    if (inputValueValue) {
        errors->setName("inputValue");
        result->m_inputValue = ValueConversions<String>::fromValue(inputValueValue, errors);
    }
    protocol::Value* inputCheckedValue = object->get("inputChecked");
    if (inputCheckedValue) {
        errors->setName("inputChecked");
        result->m_inputChecked = ValueConversions<bool>::fromValue(inputCheckedValue, errors);
    }
    protocol::Value* optionSelectedValue = object->get("optionSelected");
    if (optionSelectedValue) {
        errors->setName("optionSelected");
        result->m_optionSelected = ValueConversions<bool>::fromValue(optionSelectedValue, errors);
    }
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    errors->setName("backendNodeId");
    result->m_backendNodeId = ValueConversions<int>::fromValue(backendNodeIdValue, errors);
    protocol::Value* childNodeIndexesValue = object->get("childNodeIndexes");
    if (childNodeIndexesValue) {
        errors->setName("childNodeIndexes");
        result->m_childNodeIndexes = ValueConversions<protocol::Array<int>>::fromValue(childNodeIndexesValue, errors);
    }
    protocol::Value* attributesValue = object->get("attributes");
    if (attributesValue) {
        errors->setName("attributes");
        result->m_attributes = ValueConversions<protocol::Array<protocol::DOMSnapshot::NameValue>>::fromValue(attributesValue, errors);
    }
    protocol::Value* pseudoElementIndexesValue = object->get("pseudoElementIndexes");
    if (pseudoElementIndexesValue) {
        errors->setName("pseudoElementIndexes");
        result->m_pseudoElementIndexes = ValueConversions<protocol::Array<int>>::fromValue(pseudoElementIndexesValue, errors);
    }
    protocol::Value* layoutNodeIndexValue = object->get("layoutNodeIndex");
    if (layoutNodeIndexValue) {
        errors->setName("layoutNodeIndex");
        result->m_layoutNodeIndex = ValueConversions<int>::fromValue(layoutNodeIndexValue, errors);
    }
    protocol::Value* documentURLValue = object->get("documentURL");
    if (documentURLValue) {
        errors->setName("documentURL");
        result->m_documentURL = ValueConversions<String>::fromValue(documentURLValue, errors);
    }
    protocol::Value* baseURLValue = object->get("baseURL");
    if (baseURLValue) {
        errors->setName("baseURL");
        result->m_baseURL = ValueConversions<String>::fromValue(baseURLValue, errors);
    }
    protocol::Value* contentLanguageValue = object->get("contentLanguage");
    if (contentLanguageValue) {
        errors->setName("contentLanguage");
        result->m_contentLanguage = ValueConversions<String>::fromValue(contentLanguageValue, errors);
    }
    protocol::Value* documentEncodingValue = object->get("documentEncoding");
    if (documentEncodingValue) {
        errors->setName("documentEncoding");
        result->m_documentEncoding = ValueConversions<String>::fromValue(documentEncodingValue, errors);
    }
    protocol::Value* publicIdValue = object->get("publicId");
    if (publicIdValue) {
        errors->setName("publicId");
        result->m_publicId = ValueConversions<String>::fromValue(publicIdValue, errors);
    }
    protocol::Value* systemIdValue = object->get("systemId");
    if (systemIdValue) {
        errors->setName("systemId");
        result->m_systemId = ValueConversions<String>::fromValue(systemIdValue, errors);
    }
    protocol::Value* frameIdValue = object->get("frameId");
    if (frameIdValue) {
        errors->setName("frameId");
        result->m_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    }
    protocol::Value* contentDocumentIndexValue = object->get("contentDocumentIndex");
    if (contentDocumentIndexValue) {
        errors->setName("contentDocumentIndex");
        result->m_contentDocumentIndex = ValueConversions<int>::fromValue(contentDocumentIndexValue, errors);
    }
    protocol::Value* importedDocumentIndexValue = object->get("importedDocumentIndex");
    if (importedDocumentIndexValue) {
        errors->setName("importedDocumentIndex");
        result->m_importedDocumentIndex = ValueConversions<int>::fromValue(importedDocumentIndexValue, errors);
    }
    protocol::Value* templateContentIndexValue = object->get("templateContentIndex");
    if (templateContentIndexValue) {
        errors->setName("templateContentIndex");
        result->m_templateContentIndex = ValueConversions<int>::fromValue(templateContentIndexValue, errors);
    }
    protocol::Value* pseudoTypeValue = object->get("pseudoType");
    if (pseudoTypeValue) {
        errors->setName("pseudoType");
        result->m_pseudoType = ValueConversions<String>::fromValue(pseudoTypeValue, errors);
    }
    protocol::Value* shadowRootTypeValue = object->get("shadowRootType");
    if (shadowRootTypeValue) {
        errors->setName("shadowRootType");
        result->m_shadowRootType = ValueConversions<String>::fromValue(shadowRootTypeValue, errors);
    }
    protocol::Value* isClickableValue = object->get("isClickable");
    if (isClickableValue) {
        errors->setName("isClickable");
        result->m_isClickable = ValueConversions<bool>::fromValue(isClickableValue, errors);
    }
    protocol::Value* eventListenersValue = object->get("eventListeners");
    if (eventListenersValue) {
        errors->setName("eventListeners");
        result->m_eventListeners = ValueConversions<protocol::Array<protocol::DOMDebugger::EventListener>>::fromValue(eventListenersValue, errors);
    }
    protocol::Value* currentSourceURLValue = object->get("currentSourceURL");
    if (currentSourceURLValue) {
        errors->setName("currentSourceURL");
        result->m_currentSourceURL = ValueConversions<String>::fromValue(currentSourceURLValue, errors);
    }
    protocol::Value* originURLValue = object->get("originURL");
    if (originURLValue) {
        errors->setName("originURL");
        result->m_originURL = ValueConversions<String>::fromValue(originURLValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DOMNode::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("nodeType", ValueConversions<int>::toValue(m_nodeType));
    result->setValue("nodeName", ValueConversions<String>::toValue(m_nodeName));
    result->setValue("nodeValue", ValueConversions<String>::toValue(m_nodeValue));
    if (m_textValue.isJust())
        result->setValue("textValue", ValueConversions<String>::toValue(m_textValue.fromJust()));
    if (m_inputValue.isJust())
        result->setValue("inputValue", ValueConversions<String>::toValue(m_inputValue.fromJust()));
    if (m_inputChecked.isJust())
        result->setValue("inputChecked", ValueConversions<bool>::toValue(m_inputChecked.fromJust()));
    if (m_optionSelected.isJust())
        result->setValue("optionSelected", ValueConversions<bool>::toValue(m_optionSelected.fromJust()));
    result->setValue("backendNodeId", ValueConversions<int>::toValue(m_backendNodeId));
    if (m_childNodeIndexes.isJust())
        result->setValue("childNodeIndexes", ValueConversions<protocol::Array<int>>::toValue(m_childNodeIndexes.fromJust()));
    if (m_attributes.isJust())
        result->setValue("attributes", ValueConversions<protocol::Array<protocol::DOMSnapshot::NameValue>>::toValue(m_attributes.fromJust()));
    if (m_pseudoElementIndexes.isJust())
        result->setValue("pseudoElementIndexes", ValueConversions<protocol::Array<int>>::toValue(m_pseudoElementIndexes.fromJust()));
    if (m_layoutNodeIndex.isJust())
        result->setValue("layoutNodeIndex", ValueConversions<int>::toValue(m_layoutNodeIndex.fromJust()));
    if (m_documentURL.isJust())
        result->setValue("documentURL", ValueConversions<String>::toValue(m_documentURL.fromJust()));
    if (m_baseURL.isJust())
        result->setValue("baseURL", ValueConversions<String>::toValue(m_baseURL.fromJust()));
    if (m_contentLanguage.isJust())
        result->setValue("contentLanguage", ValueConversions<String>::toValue(m_contentLanguage.fromJust()));
    if (m_documentEncoding.isJust())
        result->setValue("documentEncoding", ValueConversions<String>::toValue(m_documentEncoding.fromJust()));
    if (m_publicId.isJust())
        result->setValue("publicId", ValueConversions<String>::toValue(m_publicId.fromJust()));
    if (m_systemId.isJust())
        result->setValue("systemId", ValueConversions<String>::toValue(m_systemId.fromJust()));
    if (m_frameId.isJust())
        result->setValue("frameId", ValueConversions<String>::toValue(m_frameId.fromJust()));
    if (m_contentDocumentIndex.isJust())
        result->setValue("contentDocumentIndex", ValueConversions<int>::toValue(m_contentDocumentIndex.fromJust()));
    if (m_importedDocumentIndex.isJust())
        result->setValue("importedDocumentIndex", ValueConversions<int>::toValue(m_importedDocumentIndex.fromJust()));
    if (m_templateContentIndex.isJust())
        result->setValue("templateContentIndex", ValueConversions<int>::toValue(m_templateContentIndex.fromJust()));
    if (m_pseudoType.isJust())
        result->setValue("pseudoType", ValueConversions<String>::toValue(m_pseudoType.fromJust()));
    if (m_shadowRootType.isJust())
        result->setValue("shadowRootType", ValueConversions<String>::toValue(m_shadowRootType.fromJust()));
    if (m_isClickable.isJust())
        result->setValue("isClickable", ValueConversions<bool>::toValue(m_isClickable.fromJust()));
    if (m_eventListeners.isJust())
        result->setValue("eventListeners", ValueConversions<protocol::Array<protocol::DOMDebugger::EventListener>>::toValue(m_eventListeners.fromJust()));
    if (m_currentSourceURL.isJust())
        result->setValue("currentSourceURL", ValueConversions<String>::toValue(m_currentSourceURL.fromJust()));
    if (m_originURL.isJust())
        result->setValue("originURL", ValueConversions<String>::toValue(m_originURL.fromJust()));
    return result;
}

std::unique_ptr<DOMNode> DOMNode::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<InlineTextBox> InlineTextBox::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<InlineTextBox> result(new InlineTextBox());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* boundingBoxValue = object->get("boundingBox");
    errors->setName("boundingBox");
    result->m_boundingBox = ValueConversions<protocol::DOM::Rect>::fromValue(boundingBoxValue, errors);
    protocol::Value* startCharacterIndexValue = object->get("startCharacterIndex");
    errors->setName("startCharacterIndex");
    result->m_startCharacterIndex = ValueConversions<int>::fromValue(startCharacterIndexValue, errors);
    protocol::Value* numCharactersValue = object->get("numCharacters");
    errors->setName("numCharacters");
    result->m_numCharacters = ValueConversions<int>::fromValue(numCharactersValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> InlineTextBox::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("boundingBox", ValueConversions<protocol::DOM::Rect>::toValue(m_boundingBox.get()));
    result->setValue("startCharacterIndex", ValueConversions<int>::toValue(m_startCharacterIndex));
    result->setValue("numCharacters", ValueConversions<int>::toValue(m_numCharacters));
    return result;
}

std::unique_ptr<InlineTextBox> InlineTextBox::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LayoutTreeNode> LayoutTreeNode::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LayoutTreeNode> result(new LayoutTreeNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* domNodeIndexValue = object->get("domNodeIndex");
    errors->setName("domNodeIndex");
    result->m_domNodeIndex = ValueConversions<int>::fromValue(domNodeIndexValue, errors);
    protocol::Value* boundingBoxValue = object->get("boundingBox");
    errors->setName("boundingBox");
    result->m_boundingBox = ValueConversions<protocol::DOM::Rect>::fromValue(boundingBoxValue, errors);
    protocol::Value* layoutTextValue = object->get("layoutText");
    if (layoutTextValue) {
        errors->setName("layoutText");
        result->m_layoutText = ValueConversions<String>::fromValue(layoutTextValue, errors);
    }
    protocol::Value* inlineTextNodesValue = object->get("inlineTextNodes");
    if (inlineTextNodesValue) {
        errors->setName("inlineTextNodes");
        result->m_inlineTextNodes = ValueConversions<protocol::Array<protocol::DOMSnapshot::InlineTextBox>>::fromValue(inlineTextNodesValue, errors);
    }
    protocol::Value* styleIndexValue = object->get("styleIndex");
    if (styleIndexValue) {
        errors->setName("styleIndex");
        result->m_styleIndex = ValueConversions<int>::fromValue(styleIndexValue, errors);
    }
    protocol::Value* paintOrderValue = object->get("paintOrder");
    if (paintOrderValue) {
        errors->setName("paintOrder");
        result->m_paintOrder = ValueConversions<int>::fromValue(paintOrderValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LayoutTreeNode::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("domNodeIndex", ValueConversions<int>::toValue(m_domNodeIndex));
    result->setValue("boundingBox", ValueConversions<protocol::DOM::Rect>::toValue(m_boundingBox.get()));
    if (m_layoutText.isJust())
        result->setValue("layoutText", ValueConversions<String>::toValue(m_layoutText.fromJust()));
    if (m_inlineTextNodes.isJust())
        result->setValue("inlineTextNodes", ValueConversions<protocol::Array<protocol::DOMSnapshot::InlineTextBox>>::toValue(m_inlineTextNodes.fromJust()));
    if (m_styleIndex.isJust())
        result->setValue("styleIndex", ValueConversions<int>::toValue(m_styleIndex.fromJust()));
    if (m_paintOrder.isJust())
        result->setValue("paintOrder", ValueConversions<int>::toValue(m_paintOrder.fromJust()));
    return result;
}

std::unique_ptr<LayoutTreeNode> LayoutTreeNode::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ComputedStyle> ComputedStyle::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ComputedStyle> result(new ComputedStyle());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* propertiesValue = object->get("properties");
    errors->setName("properties");
    result->m_properties = ValueConversions<protocol::Array<protocol::DOMSnapshot::NameValue>>::fromValue(propertiesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ComputedStyle::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("properties", ValueConversions<protocol::Array<protocol::DOMSnapshot::NameValue>>::toValue(m_properties.get()));
    return result;
}

std::unique_ptr<ComputedStyle> ComputedStyle::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<NameValue> NameValue::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NameValue> result(new NameValue());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<String>::fromValue(valueValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NameValue::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("value", ValueConversions<String>::toValue(m_value));
    return result;
}

std::unique_ptr<NameValue> NameValue::clone() const
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
        m_dispatchMap["DOMSnapshot.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["DOMSnapshot.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["DOMSnapshot.getSnapshot"] = &DispatcherImpl::getSnapshot;
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
    DispatchResponse::Status getSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

DispatchResponse::Status DispatcherImpl::getSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* computedStyleWhitelistValue = object ? object->get("computedStyleWhitelist") : nullptr;
    errors->setName("computedStyleWhitelist");
    std::unique_ptr<protocol::Array<String>> in_computedStyleWhitelist = ValueConversions<protocol::Array<String>>::fromValue(computedStyleWhitelistValue, errors);
    protocol::Value* includeEventListenersValue = object ? object->get("includeEventListeners") : nullptr;
    Maybe<bool> in_includeEventListeners;
    if (includeEventListenersValue) {
        errors->setName("includeEventListeners");
        in_includeEventListeners = ValueConversions<bool>::fromValue(includeEventListenersValue, errors);
    }
    protocol::Value* includePaintOrderValue = object ? object->get("includePaintOrder") : nullptr;
    Maybe<bool> in_includePaintOrder;
    if (includePaintOrderValue) {
        errors->setName("includePaintOrder");
        in_includePaintOrder = ValueConversions<bool>::fromValue(includePaintOrderValue, errors);
    }
    protocol::Value* includeUserAgentShadowTreeValue = object ? object->get("includeUserAgentShadowTree") : nullptr;
    Maybe<bool> in_includeUserAgentShadowTree;
    if (includeUserAgentShadowTreeValue) {
        errors->setName("includeUserAgentShadowTree");
        in_includeUserAgentShadowTree = ValueConversions<bool>::fromValue(includeUserAgentShadowTreeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::DOMSnapshot::DOMNode>> out_domNodes;
    std::unique_ptr<protocol::Array<protocol::DOMSnapshot::LayoutTreeNode>> out_layoutTreeNodes;
    std::unique_ptr<protocol::Array<protocol::DOMSnapshot::ComputedStyle>> out_computedStyles;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getSnapshot(std::move(in_computedStyleWhitelist), std::move(in_includeEventListeners), std::move(in_includePaintOrder), std::move(in_includeUserAgentShadowTree), &out_domNodes, &out_layoutTreeNodes, &out_computedStyles);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("domNodes", ValueConversions<protocol::Array<protocol::DOMSnapshot::DOMNode>>::toValue(out_domNodes.get()));
        result->setValue("layoutTreeNodes", ValueConversions<protocol::Array<protocol::DOMSnapshot::LayoutTreeNode>>::toValue(out_layoutTreeNodes.get()));
        result->setValue("computedStyles", ValueConversions<protocol::Array<protocol::DOMSnapshot::ComputedStyle>>::toValue(out_computedStyles.get()));
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
    uber->registerBackend("DOMSnapshot", std::move(dispatcher));
}

} // DOMSnapshot
} // namespace blink
} // namespace protocol
