// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ui_devtools_protocol_DOM_h
#define ui_devtools_protocol_DOM_h

#include "components/ui_devtools/devtools_export.h"
#include "components/ui_devtools/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace ui_devtools {
namespace protocol {
namespace DOM {

// ------------- Forward and enum declarations.
using NodeId = int;
using BackendNodeId = int;
class Node;
class RGBA;
class NodeHighlightRequestedNotification;
class ChildNodeInsertedNotification;
class ChildNodeRemovedNotification;

// ------------- Type and builder declarations.

class UI_DEVTOOLS_EXPORT Node : public Serializable{
    PROTOCOL_DISALLOW_COPY(Node);
public:
    static std::unique_ptr<Node> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Node() override { }

    int getNodeId() { return m_nodeId; }
    void setNodeId(int value) { m_nodeId = value; }

    int getBackendNodeId() { return m_backendNodeId; }
    void setBackendNodeId(int value) { m_backendNodeId = value; }

    int getNodeType() { return m_nodeType; }
    void setNodeType(int value) { m_nodeType = value; }

    String getNodeName() { return m_nodeName; }
    void setNodeName(const String& value) { m_nodeName = value; }

    bool hasChildNodeCount() { return m_childNodeCount.isJust(); }
    int getChildNodeCount(int defaultValue) { return m_childNodeCount.isJust() ? m_childNodeCount.fromJust() : defaultValue; }
    void setChildNodeCount(int value) { m_childNodeCount = value; }

    bool hasChildren() { return m_children.isJust(); }
    protocol::Array<protocol::DOM::Node>* getChildren(protocol::Array<protocol::DOM::Node>* defaultValue) { return m_children.isJust() ? m_children.fromJust() : defaultValue; }
    void setChildren(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value) { m_children = std::move(value); }

    bool hasAttributes() { return m_attributes.isJust(); }
    protocol::Array<String>* getAttributes(protocol::Array<String>* defaultValue) { return m_attributes.isJust() ? m_attributes.fromJust() : defaultValue; }
    void setAttributes(std::unique_ptr<protocol::Array<String>> value) { m_attributes = std::move(value); }

    bool hasName() { return m_name.isJust(); }
    String getName(const String& defaultValue) { return m_name.isJust() ? m_name.fromJust() : defaultValue; }
    void setName(const String& value) { m_name = value; }

    bool hasValue() { return m_value.isJust(); }
    String getValue(const String& defaultValue) { return m_value.isJust() ? m_value.fromJust() : defaultValue; }
    void setValue(const String& value) { m_value = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Node> clone() const;

    template<int STATE>
    class NodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NodeIdSet = 1 << 1,
            BackendNodeIdSet = 1 << 2,
            NodeTypeSet = 1 << 3,
            NodeNameSet = 1 << 4,
            AllFieldsSet = (NodeIdSet | BackendNodeIdSet | NodeTypeSet | NodeNameSet | 0)};


        NodeBuilder<STATE | NodeIdSet>& setNodeId(int value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->setNodeId(value);
            return castState<NodeIdSet>();
        }

        NodeBuilder<STATE | BackendNodeIdSet>& setBackendNodeId(int value)
        {
            static_assert(!(STATE & BackendNodeIdSet), "property backendNodeId should not be set yet");
            m_result->setBackendNodeId(value);
            return castState<BackendNodeIdSet>();
        }

        NodeBuilder<STATE | NodeTypeSet>& setNodeType(int value)
        {
            static_assert(!(STATE & NodeTypeSet), "property nodeType should not be set yet");
            m_result->setNodeType(value);
            return castState<NodeTypeSet>();
        }

        NodeBuilder<STATE | NodeNameSet>& setNodeName(const String& value)
        {
            static_assert(!(STATE & NodeNameSet), "property nodeName should not be set yet");
            m_result->setNodeName(value);
            return castState<NodeNameSet>();
        }

        NodeBuilder<STATE>& setChildNodeCount(int value)
        {
            m_result->setChildNodeCount(value);
            return *this;
        }

        NodeBuilder<STATE>& setChildren(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value)
        {
            m_result->setChildren(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setAttributes(std::unique_ptr<protocol::Array<String>> value)
        {
            m_result->setAttributes(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setName(const String& value)
        {
            m_result->setName(value);
            return *this;
        }

        NodeBuilder<STATE>& setValue(const String& value)
        {
            m_result->setValue(value);
            return *this;
        }

        std::unique_ptr<Node> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Node;
        NodeBuilder() : m_result(new Node()) { }

        template<int STEP> NodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::Node> m_result;
    };

    static NodeBuilder<0> create()
    {
        return NodeBuilder<0>();
    }

private:
    Node()
    {
          m_nodeId = 0;
          m_backendNodeId = 0;
          m_nodeType = 0;
    }

    int m_nodeId;
    int m_backendNodeId;
    int m_nodeType;
    String m_nodeName;
    Maybe<int> m_childNodeCount;
    Maybe<protocol::Array<protocol::DOM::Node>> m_children;
    Maybe<protocol::Array<String>> m_attributes;
    Maybe<String> m_name;
    Maybe<String> m_value;
};


class UI_DEVTOOLS_EXPORT RGBA : public Serializable{
    PROTOCOL_DISALLOW_COPY(RGBA);
public:
    static std::unique_ptr<RGBA> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~RGBA() override { }

    int getR() { return m_r; }
    void setR(int value) { m_r = value; }

    int getG() { return m_g; }
    void setG(int value) { m_g = value; }

    int getB() { return m_b; }
    void setB(int value) { m_b = value; }

    bool hasA() { return m_a.isJust(); }
    double getA(double defaultValue) { return m_a.isJust() ? m_a.fromJust() : defaultValue; }
    void setA(double value) { m_a = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<RGBA> clone() const;

    template<int STATE>
    class RGBABuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RSet = 1 << 1,
            GSet = 1 << 2,
            BSet = 1 << 3,
            AllFieldsSet = (RSet | GSet | BSet | 0)};


        RGBABuilder<STATE | RSet>& setR(int value)
        {
            static_assert(!(STATE & RSet), "property r should not be set yet");
            m_result->setR(value);
            return castState<RSet>();
        }

        RGBABuilder<STATE | GSet>& setG(int value)
        {
            static_assert(!(STATE & GSet), "property g should not be set yet");
            m_result->setG(value);
            return castState<GSet>();
        }

        RGBABuilder<STATE | BSet>& setB(int value)
        {
            static_assert(!(STATE & BSet), "property b should not be set yet");
            m_result->setB(value);
            return castState<BSet>();
        }

        RGBABuilder<STATE>& setA(double value)
        {
            m_result->setA(value);
            return *this;
        }

        std::unique_ptr<RGBA> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class RGBA;
        RGBABuilder() : m_result(new RGBA()) { }

        template<int STEP> RGBABuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RGBABuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::RGBA> m_result;
    };

    static RGBABuilder<0> create()
    {
        return RGBABuilder<0>();
    }

private:
    RGBA()
    {
          m_r = 0;
          m_g = 0;
          m_b = 0;
    }

    int m_r;
    int m_g;
    int m_b;
    Maybe<double> m_a;
};


class UI_DEVTOOLS_EXPORT NodeHighlightRequestedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(NodeHighlightRequestedNotification);
public:
    static std::unique_ptr<NodeHighlightRequestedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~NodeHighlightRequestedNotification() override { }

    int getNodeId() { return m_nodeId; }
    void setNodeId(int value) { m_nodeId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<NodeHighlightRequestedNotification> clone() const;

    template<int STATE>
    class NodeHighlightRequestedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NodeIdSet = 1 << 1,
            AllFieldsSet = (NodeIdSet | 0)};


        NodeHighlightRequestedNotificationBuilder<STATE | NodeIdSet>& setNodeId(int value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->setNodeId(value);
            return castState<NodeIdSet>();
        }

        std::unique_ptr<NodeHighlightRequestedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NodeHighlightRequestedNotification;
        NodeHighlightRequestedNotificationBuilder() : m_result(new NodeHighlightRequestedNotification()) { }

        template<int STEP> NodeHighlightRequestedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NodeHighlightRequestedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::NodeHighlightRequestedNotification> m_result;
    };

    static NodeHighlightRequestedNotificationBuilder<0> create()
    {
        return NodeHighlightRequestedNotificationBuilder<0>();
    }

private:
    NodeHighlightRequestedNotification()
    {
          m_nodeId = 0;
    }

    int m_nodeId;
};


class UI_DEVTOOLS_EXPORT ChildNodeInsertedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ChildNodeInsertedNotification);
public:
    static std::unique_ptr<ChildNodeInsertedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ChildNodeInsertedNotification() override { }

    int getParentNodeId() { return m_parentNodeId; }
    void setParentNodeId(int value) { m_parentNodeId = value; }

    int getPreviousNodeId() { return m_previousNodeId; }
    void setPreviousNodeId(int value) { m_previousNodeId = value; }

    protocol::DOM::Node* getNode() { return m_node.get(); }
    void setNode(std::unique_ptr<protocol::DOM::Node> value) { m_node = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ChildNodeInsertedNotification> clone() const;

    template<int STATE>
    class ChildNodeInsertedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ParentNodeIdSet = 1 << 1,
            PreviousNodeIdSet = 1 << 2,
            NodeSet = 1 << 3,
            AllFieldsSet = (ParentNodeIdSet | PreviousNodeIdSet | NodeSet | 0)};


        ChildNodeInsertedNotificationBuilder<STATE | ParentNodeIdSet>& setParentNodeId(int value)
        {
            static_assert(!(STATE & ParentNodeIdSet), "property parentNodeId should not be set yet");
            m_result->setParentNodeId(value);
            return castState<ParentNodeIdSet>();
        }

        ChildNodeInsertedNotificationBuilder<STATE | PreviousNodeIdSet>& setPreviousNodeId(int value)
        {
            static_assert(!(STATE & PreviousNodeIdSet), "property previousNodeId should not be set yet");
            m_result->setPreviousNodeId(value);
            return castState<PreviousNodeIdSet>();
        }

        ChildNodeInsertedNotificationBuilder<STATE | NodeSet>& setNode(std::unique_ptr<protocol::DOM::Node> value)
        {
            static_assert(!(STATE & NodeSet), "property node should not be set yet");
            m_result->setNode(std::move(value));
            return castState<NodeSet>();
        }

        std::unique_ptr<ChildNodeInsertedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ChildNodeInsertedNotification;
        ChildNodeInsertedNotificationBuilder() : m_result(new ChildNodeInsertedNotification()) { }

        template<int STEP> ChildNodeInsertedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ChildNodeInsertedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::ChildNodeInsertedNotification> m_result;
    };

    static ChildNodeInsertedNotificationBuilder<0> create()
    {
        return ChildNodeInsertedNotificationBuilder<0>();
    }

private:
    ChildNodeInsertedNotification()
    {
          m_parentNodeId = 0;
          m_previousNodeId = 0;
    }

    int m_parentNodeId;
    int m_previousNodeId;
    std::unique_ptr<protocol::DOM::Node> m_node;
};


class UI_DEVTOOLS_EXPORT ChildNodeRemovedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ChildNodeRemovedNotification);
public:
    static std::unique_ptr<ChildNodeRemovedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ChildNodeRemovedNotification() override { }

    int getParentNodeId() { return m_parentNodeId; }
    void setParentNodeId(int value) { m_parentNodeId = value; }

    int getNodeId() { return m_nodeId; }
    void setNodeId(int value) { m_nodeId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ChildNodeRemovedNotification> clone() const;

    template<int STATE>
    class ChildNodeRemovedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ParentNodeIdSet = 1 << 1,
            NodeIdSet = 1 << 2,
            AllFieldsSet = (ParentNodeIdSet | NodeIdSet | 0)};


        ChildNodeRemovedNotificationBuilder<STATE | ParentNodeIdSet>& setParentNodeId(int value)
        {
            static_assert(!(STATE & ParentNodeIdSet), "property parentNodeId should not be set yet");
            m_result->setParentNodeId(value);
            return castState<ParentNodeIdSet>();
        }

        ChildNodeRemovedNotificationBuilder<STATE | NodeIdSet>& setNodeId(int value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->setNodeId(value);
            return castState<NodeIdSet>();
        }

        std::unique_ptr<ChildNodeRemovedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ChildNodeRemovedNotification;
        ChildNodeRemovedNotificationBuilder() : m_result(new ChildNodeRemovedNotification()) { }

        template<int STEP> ChildNodeRemovedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ChildNodeRemovedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::ChildNodeRemovedNotification> m_result;
    };

    static ChildNodeRemovedNotificationBuilder<0> create()
    {
        return ChildNodeRemovedNotificationBuilder<0>();
    }

private:
    ChildNodeRemovedNotification()
    {
          m_parentNodeId = 0;
          m_nodeId = 0;
    }

    int m_parentNodeId;
    int m_nodeId;
};


// ------------- Backend interface.

class UI_DEVTOOLS_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse getDocument(std::unique_ptr<protocol::DOM::Node>* out_root) = 0;
    virtual DispatchResponse hideHighlight() = 0;
    virtual DispatchResponse pushNodesByBackendIdsToFrontend(std::unique_ptr<protocol::Array<int>> in_backendNodeIds, std::unique_ptr<protocol::Array<int>>* out_nodeIds) = 0;

};

// ------------- Frontend interface.

class UI_DEVTOOLS_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void nodeHighlightRequested(int nodeId);
    void childNodeInserted(int parentNodeId, int previousNodeId, std::unique_ptr<protocol::DOM::Node> node);
    void childNodeRemoved(int parentNodeId, int nodeId);

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class UI_DEVTOOLS_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class UI_DEVTOOLS_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace DOM
} // namespace ui_devtools
} // namespace protocol

#endif // !defined(ui_devtools_protocol_DOM_h)
