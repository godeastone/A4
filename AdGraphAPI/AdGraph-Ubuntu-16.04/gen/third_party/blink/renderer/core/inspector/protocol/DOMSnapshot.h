// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_DOMSnapshot_h
#define blink_protocol_DOMSnapshot_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "third_party/blink/renderer/core/inspector/protocol/CSS.h"
#include "third_party/blink/renderer/core/inspector/protocol/DOM.h"
#include "third_party/blink/renderer/core/inspector/protocol/DOMDebugger.h"
#include "third_party/blink/renderer/core/inspector/protocol/Page.h"

namespace blink {
namespace protocol {
namespace DOMSnapshot {

// ------------- Forward and enum declarations.
class DOMNode;
class InlineTextBox;
class LayoutTreeNode;
class ComputedStyle;
class NameValue;

// ------------- Type and builder declarations.

class CORE_EXPORT DOMNode : public Serializable{
    PROTOCOL_DISALLOW_COPY(DOMNode);
public:
    static std::unique_ptr<DOMNode> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~DOMNode() override { }

    int getNodeType() { return m_nodeType; }
    void setNodeType(int value) { m_nodeType = value; }

    String getNodeName() { return m_nodeName; }
    void setNodeName(const String& value) { m_nodeName = value; }

    String getNodeValue() { return m_nodeValue; }
    void setNodeValue(const String& value) { m_nodeValue = value; }

    bool hasTextValue() { return m_textValue.isJust(); }
    String getTextValue(const String& defaultValue) { return m_textValue.isJust() ? m_textValue.fromJust() : defaultValue; }
    void setTextValue(const String& value) { m_textValue = value; }

    bool hasInputValue() { return m_inputValue.isJust(); }
    String getInputValue(const String& defaultValue) { return m_inputValue.isJust() ? m_inputValue.fromJust() : defaultValue; }
    void setInputValue(const String& value) { m_inputValue = value; }

    bool hasInputChecked() { return m_inputChecked.isJust(); }
    bool getInputChecked(bool defaultValue) { return m_inputChecked.isJust() ? m_inputChecked.fromJust() : defaultValue; }
    void setInputChecked(bool value) { m_inputChecked = value; }

    bool hasOptionSelected() { return m_optionSelected.isJust(); }
    bool getOptionSelected(bool defaultValue) { return m_optionSelected.isJust() ? m_optionSelected.fromJust() : defaultValue; }
    void setOptionSelected(bool value) { m_optionSelected = value; }

    int getBackendNodeId() { return m_backendNodeId; }
    void setBackendNodeId(int value) { m_backendNodeId = value; }

    bool hasChildNodeIndexes() { return m_childNodeIndexes.isJust(); }
    protocol::Array<int>* getChildNodeIndexes(protocol::Array<int>* defaultValue) { return m_childNodeIndexes.isJust() ? m_childNodeIndexes.fromJust() : defaultValue; }
    void setChildNodeIndexes(std::unique_ptr<protocol::Array<int>> value) { m_childNodeIndexes = std::move(value); }

    bool hasAttributes() { return m_attributes.isJust(); }
    protocol::Array<protocol::DOMSnapshot::NameValue>* getAttributes(protocol::Array<protocol::DOMSnapshot::NameValue>* defaultValue) { return m_attributes.isJust() ? m_attributes.fromJust() : defaultValue; }
    void setAttributes(std::unique_ptr<protocol::Array<protocol::DOMSnapshot::NameValue>> value) { m_attributes = std::move(value); }

    bool hasPseudoElementIndexes() { return m_pseudoElementIndexes.isJust(); }
    protocol::Array<int>* getPseudoElementIndexes(protocol::Array<int>* defaultValue) { return m_pseudoElementIndexes.isJust() ? m_pseudoElementIndexes.fromJust() : defaultValue; }
    void setPseudoElementIndexes(std::unique_ptr<protocol::Array<int>> value) { m_pseudoElementIndexes = std::move(value); }

    bool hasLayoutNodeIndex() { return m_layoutNodeIndex.isJust(); }
    int getLayoutNodeIndex(int defaultValue) { return m_layoutNodeIndex.isJust() ? m_layoutNodeIndex.fromJust() : defaultValue; }
    void setLayoutNodeIndex(int value) { m_layoutNodeIndex = value; }

    bool hasDocumentURL() { return m_documentURL.isJust(); }
    String getDocumentURL(const String& defaultValue) { return m_documentURL.isJust() ? m_documentURL.fromJust() : defaultValue; }
    void setDocumentURL(const String& value) { m_documentURL = value; }

    bool hasBaseURL() { return m_baseURL.isJust(); }
    String getBaseURL(const String& defaultValue) { return m_baseURL.isJust() ? m_baseURL.fromJust() : defaultValue; }
    void setBaseURL(const String& value) { m_baseURL = value; }

    bool hasContentLanguage() { return m_contentLanguage.isJust(); }
    String getContentLanguage(const String& defaultValue) { return m_contentLanguage.isJust() ? m_contentLanguage.fromJust() : defaultValue; }
    void setContentLanguage(const String& value) { m_contentLanguage = value; }

    bool hasDocumentEncoding() { return m_documentEncoding.isJust(); }
    String getDocumentEncoding(const String& defaultValue) { return m_documentEncoding.isJust() ? m_documentEncoding.fromJust() : defaultValue; }
    void setDocumentEncoding(const String& value) { m_documentEncoding = value; }

    bool hasPublicId() { return m_publicId.isJust(); }
    String getPublicId(const String& defaultValue) { return m_publicId.isJust() ? m_publicId.fromJust() : defaultValue; }
    void setPublicId(const String& value) { m_publicId = value; }

    bool hasSystemId() { return m_systemId.isJust(); }
    String getSystemId(const String& defaultValue) { return m_systemId.isJust() ? m_systemId.fromJust() : defaultValue; }
    void setSystemId(const String& value) { m_systemId = value; }

    bool hasFrameId() { return m_frameId.isJust(); }
    String getFrameId(const String& defaultValue) { return m_frameId.isJust() ? m_frameId.fromJust() : defaultValue; }
    void setFrameId(const String& value) { m_frameId = value; }

    bool hasContentDocumentIndex() { return m_contentDocumentIndex.isJust(); }
    int getContentDocumentIndex(int defaultValue) { return m_contentDocumentIndex.isJust() ? m_contentDocumentIndex.fromJust() : defaultValue; }
    void setContentDocumentIndex(int value) { m_contentDocumentIndex = value; }

    bool hasImportedDocumentIndex() { return m_importedDocumentIndex.isJust(); }
    int getImportedDocumentIndex(int defaultValue) { return m_importedDocumentIndex.isJust() ? m_importedDocumentIndex.fromJust() : defaultValue; }
    void setImportedDocumentIndex(int value) { m_importedDocumentIndex = value; }

    bool hasTemplateContentIndex() { return m_templateContentIndex.isJust(); }
    int getTemplateContentIndex(int defaultValue) { return m_templateContentIndex.isJust() ? m_templateContentIndex.fromJust() : defaultValue; }
    void setTemplateContentIndex(int value) { m_templateContentIndex = value; }

    bool hasPseudoType() { return m_pseudoType.isJust(); }
    String getPseudoType(const String& defaultValue) { return m_pseudoType.isJust() ? m_pseudoType.fromJust() : defaultValue; }
    void setPseudoType(const String& value) { m_pseudoType = value; }

    bool hasShadowRootType() { return m_shadowRootType.isJust(); }
    String getShadowRootType(const String& defaultValue) { return m_shadowRootType.isJust() ? m_shadowRootType.fromJust() : defaultValue; }
    void setShadowRootType(const String& value) { m_shadowRootType = value; }

    bool hasIsClickable() { return m_isClickable.isJust(); }
    bool getIsClickable(bool defaultValue) { return m_isClickable.isJust() ? m_isClickable.fromJust() : defaultValue; }
    void setIsClickable(bool value) { m_isClickable = value; }

    bool hasEventListeners() { return m_eventListeners.isJust(); }
    protocol::Array<protocol::DOMDebugger::EventListener>* getEventListeners(protocol::Array<protocol::DOMDebugger::EventListener>* defaultValue) { return m_eventListeners.isJust() ? m_eventListeners.fromJust() : defaultValue; }
    void setEventListeners(std::unique_ptr<protocol::Array<protocol::DOMDebugger::EventListener>> value) { m_eventListeners = std::move(value); }

    bool hasCurrentSourceURL() { return m_currentSourceURL.isJust(); }
    String getCurrentSourceURL(const String& defaultValue) { return m_currentSourceURL.isJust() ? m_currentSourceURL.fromJust() : defaultValue; }
    void setCurrentSourceURL(const String& value) { m_currentSourceURL = value; }

    bool hasOriginURL() { return m_originURL.isJust(); }
    String getOriginURL(const String& defaultValue) { return m_originURL.isJust() ? m_originURL.fromJust() : defaultValue; }
    void setOriginURL(const String& value) { m_originURL = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<DOMNode> clone() const;

    template<int STATE>
    class DOMNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NodeTypeSet = 1 << 1,
            NodeNameSet = 1 << 2,
            NodeValueSet = 1 << 3,
            BackendNodeIdSet = 1 << 4,
            AllFieldsSet = (NodeTypeSet | NodeNameSet | NodeValueSet | BackendNodeIdSet | 0)};


        DOMNodeBuilder<STATE | NodeTypeSet>& setNodeType(int value)
        {
            static_assert(!(STATE & NodeTypeSet), "property nodeType should not be set yet");
            m_result->setNodeType(value);
            return castState<NodeTypeSet>();
        }

        DOMNodeBuilder<STATE | NodeNameSet>& setNodeName(const String& value)
        {
            static_assert(!(STATE & NodeNameSet), "property nodeName should not be set yet");
            m_result->setNodeName(value);
            return castState<NodeNameSet>();
        }

        DOMNodeBuilder<STATE | NodeValueSet>& setNodeValue(const String& value)
        {
            static_assert(!(STATE & NodeValueSet), "property nodeValue should not be set yet");
            m_result->setNodeValue(value);
            return castState<NodeValueSet>();
        }

        DOMNodeBuilder<STATE>& setTextValue(const String& value)
        {
            m_result->setTextValue(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setInputValue(const String& value)
        {
            m_result->setInputValue(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setInputChecked(bool value)
        {
            m_result->setInputChecked(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setOptionSelected(bool value)
        {
            m_result->setOptionSelected(value);
            return *this;
        }

        DOMNodeBuilder<STATE | BackendNodeIdSet>& setBackendNodeId(int value)
        {
            static_assert(!(STATE & BackendNodeIdSet), "property backendNodeId should not be set yet");
            m_result->setBackendNodeId(value);
            return castState<BackendNodeIdSet>();
        }

        DOMNodeBuilder<STATE>& setChildNodeIndexes(std::unique_ptr<protocol::Array<int>> value)
        {
            m_result->setChildNodeIndexes(std::move(value));
            return *this;
        }

        DOMNodeBuilder<STATE>& setAttributes(std::unique_ptr<protocol::Array<protocol::DOMSnapshot::NameValue>> value)
        {
            m_result->setAttributes(std::move(value));
            return *this;
        }

        DOMNodeBuilder<STATE>& setPseudoElementIndexes(std::unique_ptr<protocol::Array<int>> value)
        {
            m_result->setPseudoElementIndexes(std::move(value));
            return *this;
        }

        DOMNodeBuilder<STATE>& setLayoutNodeIndex(int value)
        {
            m_result->setLayoutNodeIndex(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setDocumentURL(const String& value)
        {
            m_result->setDocumentURL(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setBaseURL(const String& value)
        {
            m_result->setBaseURL(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setContentLanguage(const String& value)
        {
            m_result->setContentLanguage(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setDocumentEncoding(const String& value)
        {
            m_result->setDocumentEncoding(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setPublicId(const String& value)
        {
            m_result->setPublicId(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setSystemId(const String& value)
        {
            m_result->setSystemId(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setFrameId(const String& value)
        {
            m_result->setFrameId(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setContentDocumentIndex(int value)
        {
            m_result->setContentDocumentIndex(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setImportedDocumentIndex(int value)
        {
            m_result->setImportedDocumentIndex(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setTemplateContentIndex(int value)
        {
            m_result->setTemplateContentIndex(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setPseudoType(const String& value)
        {
            m_result->setPseudoType(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setShadowRootType(const String& value)
        {
            m_result->setShadowRootType(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setIsClickable(bool value)
        {
            m_result->setIsClickable(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setEventListeners(std::unique_ptr<protocol::Array<protocol::DOMDebugger::EventListener>> value)
        {
            m_result->setEventListeners(std::move(value));
            return *this;
        }

        DOMNodeBuilder<STATE>& setCurrentSourceURL(const String& value)
        {
            m_result->setCurrentSourceURL(value);
            return *this;
        }

        DOMNodeBuilder<STATE>& setOriginURL(const String& value)
        {
            m_result->setOriginURL(value);
            return *this;
        }

        std::unique_ptr<DOMNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class DOMNode;
        DOMNodeBuilder() : m_result(new DOMNode()) { }

        template<int STEP> DOMNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DOMNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMSnapshot::DOMNode> m_result;
    };

    static DOMNodeBuilder<0> create()
    {
        return DOMNodeBuilder<0>();
    }

private:
    DOMNode()
    {
          m_nodeType = 0;
          m_backendNodeId = 0;
    }

    int m_nodeType;
    String m_nodeName;
    String m_nodeValue;
    Maybe<String> m_textValue;
    Maybe<String> m_inputValue;
    Maybe<bool> m_inputChecked;
    Maybe<bool> m_optionSelected;
    int m_backendNodeId;
    Maybe<protocol::Array<int>> m_childNodeIndexes;
    Maybe<protocol::Array<protocol::DOMSnapshot::NameValue>> m_attributes;
    Maybe<protocol::Array<int>> m_pseudoElementIndexes;
    Maybe<int> m_layoutNodeIndex;
    Maybe<String> m_documentURL;
    Maybe<String> m_baseURL;
    Maybe<String> m_contentLanguage;
    Maybe<String> m_documentEncoding;
    Maybe<String> m_publicId;
    Maybe<String> m_systemId;
    Maybe<String> m_frameId;
    Maybe<int> m_contentDocumentIndex;
    Maybe<int> m_importedDocumentIndex;
    Maybe<int> m_templateContentIndex;
    Maybe<String> m_pseudoType;
    Maybe<String> m_shadowRootType;
    Maybe<bool> m_isClickable;
    Maybe<protocol::Array<protocol::DOMDebugger::EventListener>> m_eventListeners;
    Maybe<String> m_currentSourceURL;
    Maybe<String> m_originURL;
};


class CORE_EXPORT InlineTextBox : public Serializable{
    PROTOCOL_DISALLOW_COPY(InlineTextBox);
public:
    static std::unique_ptr<InlineTextBox> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~InlineTextBox() override { }

    protocol::DOM::Rect* getBoundingBox() { return m_boundingBox.get(); }
    void setBoundingBox(std::unique_ptr<protocol::DOM::Rect> value) { m_boundingBox = std::move(value); }

    int getStartCharacterIndex() { return m_startCharacterIndex; }
    void setStartCharacterIndex(int value) { m_startCharacterIndex = value; }

    int getNumCharacters() { return m_numCharacters; }
    void setNumCharacters(int value) { m_numCharacters = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<InlineTextBox> clone() const;

    template<int STATE>
    class InlineTextBoxBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            BoundingBoxSet = 1 << 1,
            StartCharacterIndexSet = 1 << 2,
            NumCharactersSet = 1 << 3,
            AllFieldsSet = (BoundingBoxSet | StartCharacterIndexSet | NumCharactersSet | 0)};


        InlineTextBoxBuilder<STATE | BoundingBoxSet>& setBoundingBox(std::unique_ptr<protocol::DOM::Rect> value)
        {
            static_assert(!(STATE & BoundingBoxSet), "property boundingBox should not be set yet");
            m_result->setBoundingBox(std::move(value));
            return castState<BoundingBoxSet>();
        }

        InlineTextBoxBuilder<STATE | StartCharacterIndexSet>& setStartCharacterIndex(int value)
        {
            static_assert(!(STATE & StartCharacterIndexSet), "property startCharacterIndex should not be set yet");
            m_result->setStartCharacterIndex(value);
            return castState<StartCharacterIndexSet>();
        }

        InlineTextBoxBuilder<STATE | NumCharactersSet>& setNumCharacters(int value)
        {
            static_assert(!(STATE & NumCharactersSet), "property numCharacters should not be set yet");
            m_result->setNumCharacters(value);
            return castState<NumCharactersSet>();
        }

        std::unique_ptr<InlineTextBox> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class InlineTextBox;
        InlineTextBoxBuilder() : m_result(new InlineTextBox()) { }

        template<int STEP> InlineTextBoxBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<InlineTextBoxBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMSnapshot::InlineTextBox> m_result;
    };

    static InlineTextBoxBuilder<0> create()
    {
        return InlineTextBoxBuilder<0>();
    }

private:
    InlineTextBox()
    {
          m_startCharacterIndex = 0;
          m_numCharacters = 0;
    }

    std::unique_ptr<protocol::DOM::Rect> m_boundingBox;
    int m_startCharacterIndex;
    int m_numCharacters;
};


class CORE_EXPORT LayoutTreeNode : public Serializable{
    PROTOCOL_DISALLOW_COPY(LayoutTreeNode);
public:
    static std::unique_ptr<LayoutTreeNode> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~LayoutTreeNode() override { }

    int getDomNodeIndex() { return m_domNodeIndex; }
    void setDomNodeIndex(int value) { m_domNodeIndex = value; }

    protocol::DOM::Rect* getBoundingBox() { return m_boundingBox.get(); }
    void setBoundingBox(std::unique_ptr<protocol::DOM::Rect> value) { m_boundingBox = std::move(value); }

    bool hasLayoutText() { return m_layoutText.isJust(); }
    String getLayoutText(const String& defaultValue) { return m_layoutText.isJust() ? m_layoutText.fromJust() : defaultValue; }
    void setLayoutText(const String& value) { m_layoutText = value; }

    bool hasInlineTextNodes() { return m_inlineTextNodes.isJust(); }
    protocol::Array<protocol::DOMSnapshot::InlineTextBox>* getInlineTextNodes(protocol::Array<protocol::DOMSnapshot::InlineTextBox>* defaultValue) { return m_inlineTextNodes.isJust() ? m_inlineTextNodes.fromJust() : defaultValue; }
    void setInlineTextNodes(std::unique_ptr<protocol::Array<protocol::DOMSnapshot::InlineTextBox>> value) { m_inlineTextNodes = std::move(value); }

    bool hasStyleIndex() { return m_styleIndex.isJust(); }
    int getStyleIndex(int defaultValue) { return m_styleIndex.isJust() ? m_styleIndex.fromJust() : defaultValue; }
    void setStyleIndex(int value) { m_styleIndex = value; }

    bool hasPaintOrder() { return m_paintOrder.isJust(); }
    int getPaintOrder(int defaultValue) { return m_paintOrder.isJust() ? m_paintOrder.fromJust() : defaultValue; }
    void setPaintOrder(int value) { m_paintOrder = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<LayoutTreeNode> clone() const;

    template<int STATE>
    class LayoutTreeNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            DomNodeIndexSet = 1 << 1,
            BoundingBoxSet = 1 << 2,
            AllFieldsSet = (DomNodeIndexSet | BoundingBoxSet | 0)};


        LayoutTreeNodeBuilder<STATE | DomNodeIndexSet>& setDomNodeIndex(int value)
        {
            static_assert(!(STATE & DomNodeIndexSet), "property domNodeIndex should not be set yet");
            m_result->setDomNodeIndex(value);
            return castState<DomNodeIndexSet>();
        }

        LayoutTreeNodeBuilder<STATE | BoundingBoxSet>& setBoundingBox(std::unique_ptr<protocol::DOM::Rect> value)
        {
            static_assert(!(STATE & BoundingBoxSet), "property boundingBox should not be set yet");
            m_result->setBoundingBox(std::move(value));
            return castState<BoundingBoxSet>();
        }

        LayoutTreeNodeBuilder<STATE>& setLayoutText(const String& value)
        {
            m_result->setLayoutText(value);
            return *this;
        }

        LayoutTreeNodeBuilder<STATE>& setInlineTextNodes(std::unique_ptr<protocol::Array<protocol::DOMSnapshot::InlineTextBox>> value)
        {
            m_result->setInlineTextNodes(std::move(value));
            return *this;
        }

        LayoutTreeNodeBuilder<STATE>& setStyleIndex(int value)
        {
            m_result->setStyleIndex(value);
            return *this;
        }

        LayoutTreeNodeBuilder<STATE>& setPaintOrder(int value)
        {
            m_result->setPaintOrder(value);
            return *this;
        }

        std::unique_ptr<LayoutTreeNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class LayoutTreeNode;
        LayoutTreeNodeBuilder() : m_result(new LayoutTreeNode()) { }

        template<int STEP> LayoutTreeNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<LayoutTreeNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMSnapshot::LayoutTreeNode> m_result;
    };

    static LayoutTreeNodeBuilder<0> create()
    {
        return LayoutTreeNodeBuilder<0>();
    }

private:
    LayoutTreeNode()
    {
          m_domNodeIndex = 0;
    }

    int m_domNodeIndex;
    std::unique_ptr<protocol::DOM::Rect> m_boundingBox;
    Maybe<String> m_layoutText;
    Maybe<protocol::Array<protocol::DOMSnapshot::InlineTextBox>> m_inlineTextNodes;
    Maybe<int> m_styleIndex;
    Maybe<int> m_paintOrder;
};


class CORE_EXPORT ComputedStyle : public Serializable{
    PROTOCOL_DISALLOW_COPY(ComputedStyle);
public:
    static std::unique_ptr<ComputedStyle> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ComputedStyle() override { }

    protocol::Array<protocol::DOMSnapshot::NameValue>* getProperties() { return m_properties.get(); }
    void setProperties(std::unique_ptr<protocol::Array<protocol::DOMSnapshot::NameValue>> value) { m_properties = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ComputedStyle> clone() const;

    template<int STATE>
    class ComputedStyleBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            PropertiesSet = 1 << 1,
            AllFieldsSet = (PropertiesSet | 0)};


        ComputedStyleBuilder<STATE | PropertiesSet>& setProperties(std::unique_ptr<protocol::Array<protocol::DOMSnapshot::NameValue>> value)
        {
            static_assert(!(STATE & PropertiesSet), "property properties should not be set yet");
            m_result->setProperties(std::move(value));
            return castState<PropertiesSet>();
        }

        std::unique_ptr<ComputedStyle> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ComputedStyle;
        ComputedStyleBuilder() : m_result(new ComputedStyle()) { }

        template<int STEP> ComputedStyleBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ComputedStyleBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMSnapshot::ComputedStyle> m_result;
    };

    static ComputedStyleBuilder<0> create()
    {
        return ComputedStyleBuilder<0>();
    }

private:
    ComputedStyle()
    {
    }

    std::unique_ptr<protocol::Array<protocol::DOMSnapshot::NameValue>> m_properties;
};


class CORE_EXPORT NameValue : public Serializable{
    PROTOCOL_DISALLOW_COPY(NameValue);
public:
    static std::unique_ptr<NameValue> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~NameValue() override { }

    String getName() { return m_name; }
    void setName(const String& value) { m_name = value; }

    String getValue() { return m_value; }
    void setValue(const String& value) { m_value = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<NameValue> clone() const;

    template<int STATE>
    class NameValueBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            ValueSet = 1 << 2,
            AllFieldsSet = (NameSet | ValueSet | 0)};


        NameValueBuilder<STATE | NameSet>& setName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        NameValueBuilder<STATE | ValueSet>& setValue(const String& value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->setValue(value);
            return castState<ValueSet>();
        }

        std::unique_ptr<NameValue> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NameValue;
        NameValueBuilder() : m_result(new NameValue()) { }

        template<int STEP> NameValueBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NameValueBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMSnapshot::NameValue> m_result;
    };

    static NameValueBuilder<0> create()
    {
        return NameValueBuilder<0>();
    }

private:
    NameValue()
    {
    }

    String m_name;
    String m_value;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse getSnapshot(std::unique_ptr<protocol::Array<String>> in_computedStyleWhitelist, Maybe<bool> in_includeEventListeners, Maybe<bool> in_includePaintOrder, Maybe<bool> in_includeUserAgentShadowTree, std::unique_ptr<protocol::Array<protocol::DOMSnapshot::DOMNode>>* out_domNodes, std::unique_ptr<protocol::Array<protocol::DOMSnapshot::LayoutTreeNode>>* out_layoutTreeNodes, std::unique_ptr<protocol::Array<protocol::DOMSnapshot::ComputedStyle>>* out_computedStyles) = 0;

};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace DOMSnapshot
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_DOMSnapshot_h)
