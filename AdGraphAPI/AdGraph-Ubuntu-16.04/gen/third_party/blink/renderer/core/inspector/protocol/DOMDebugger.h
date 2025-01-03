// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_DOMDebugger_h
#define blink_protocol_DOMDebugger_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "third_party/blink/renderer/core/inspector/protocol/DOM.h"
#include "third_party/blink/renderer/core/inspector/protocol/Debugger.h"

namespace blink {
namespace protocol {
namespace DOMDebugger {

// ------------- Forward and enum declarations.
using DOMBreakpointType = String;
class EventListener;

namespace DOMBreakpointTypeEnum {
CORE_EXPORT extern const char SubtreeModified[];
CORE_EXPORT extern const char AttributeModified[];
CORE_EXPORT extern const char NodeRemoved[];
} // namespace DOMBreakpointTypeEnum

// ------------- Type and builder declarations.

class CORE_EXPORT EventListener : public Serializable{
    PROTOCOL_DISALLOW_COPY(EventListener);
public:
    static std::unique_ptr<EventListener> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~EventListener() override { }

    String getType() { return m_type; }
    void setType(const String& value) { m_type = value; }

    bool getUseCapture() { return m_useCapture; }
    void setUseCapture(bool value) { m_useCapture = value; }

    bool getPassive() { return m_passive; }
    void setPassive(bool value) { m_passive = value; }

    bool getOnce() { return m_once; }
    void setOnce(bool value) { m_once = value; }

    String getScriptId() { return m_scriptId; }
    void setScriptId(const String& value) { m_scriptId = value; }

    int getLineNumber() { return m_lineNumber; }
    void setLineNumber(int value) { m_lineNumber = value; }

    int getColumnNumber() { return m_columnNumber; }
    void setColumnNumber(int value) { m_columnNumber = value; }

    bool hasHandler() { return m_handler.isJust(); }
    v8_inspector::protocol::Runtime::API::RemoteObject* getHandler(v8_inspector::protocol::Runtime::API::RemoteObject* defaultValue) { return m_handler.isJust() ? m_handler.fromJust() : defaultValue; }
    void setHandler(std::unique_ptr<v8_inspector::protocol::Runtime::API::RemoteObject> value) { m_handler = std::move(value); }

    bool hasOriginalHandler() { return m_originalHandler.isJust(); }
    v8_inspector::protocol::Runtime::API::RemoteObject* getOriginalHandler(v8_inspector::protocol::Runtime::API::RemoteObject* defaultValue) { return m_originalHandler.isJust() ? m_originalHandler.fromJust() : defaultValue; }
    void setOriginalHandler(std::unique_ptr<v8_inspector::protocol::Runtime::API::RemoteObject> value) { m_originalHandler = std::move(value); }

    bool hasBackendNodeId() { return m_backendNodeId.isJust(); }
    int getBackendNodeId(int defaultValue) { return m_backendNodeId.isJust() ? m_backendNodeId.fromJust() : defaultValue; }
    void setBackendNodeId(int value) { m_backendNodeId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<EventListener> clone() const;

    template<int STATE>
    class EventListenerBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TypeSet = 1 << 1,
            UseCaptureSet = 1 << 2,
            PassiveSet = 1 << 3,
            OnceSet = 1 << 4,
            ScriptIdSet = 1 << 5,
            LineNumberSet = 1 << 6,
            ColumnNumberSet = 1 << 7,
            AllFieldsSet = (TypeSet | UseCaptureSet | PassiveSet | OnceSet | ScriptIdSet | LineNumberSet | ColumnNumberSet | 0)};


        EventListenerBuilder<STATE | TypeSet>& setType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        EventListenerBuilder<STATE | UseCaptureSet>& setUseCapture(bool value)
        {
            static_assert(!(STATE & UseCaptureSet), "property useCapture should not be set yet");
            m_result->setUseCapture(value);
            return castState<UseCaptureSet>();
        }

        EventListenerBuilder<STATE | PassiveSet>& setPassive(bool value)
        {
            static_assert(!(STATE & PassiveSet), "property passive should not be set yet");
            m_result->setPassive(value);
            return castState<PassiveSet>();
        }

        EventListenerBuilder<STATE | OnceSet>& setOnce(bool value)
        {
            static_assert(!(STATE & OnceSet), "property once should not be set yet");
            m_result->setOnce(value);
            return castState<OnceSet>();
        }

        EventListenerBuilder<STATE | ScriptIdSet>& setScriptId(const String& value)
        {
            static_assert(!(STATE & ScriptIdSet), "property scriptId should not be set yet");
            m_result->setScriptId(value);
            return castState<ScriptIdSet>();
        }

        EventListenerBuilder<STATE | LineNumberSet>& setLineNumber(int value)
        {
            static_assert(!(STATE & LineNumberSet), "property lineNumber should not be set yet");
            m_result->setLineNumber(value);
            return castState<LineNumberSet>();
        }

        EventListenerBuilder<STATE | ColumnNumberSet>& setColumnNumber(int value)
        {
            static_assert(!(STATE & ColumnNumberSet), "property columnNumber should not be set yet");
            m_result->setColumnNumber(value);
            return castState<ColumnNumberSet>();
        }

        EventListenerBuilder<STATE>& setHandler(std::unique_ptr<v8_inspector::protocol::Runtime::API::RemoteObject> value)
        {
            m_result->setHandler(std::move(value));
            return *this;
        }

        EventListenerBuilder<STATE>& setOriginalHandler(std::unique_ptr<v8_inspector::protocol::Runtime::API::RemoteObject> value)
        {
            m_result->setOriginalHandler(std::move(value));
            return *this;
        }

        EventListenerBuilder<STATE>& setBackendNodeId(int value)
        {
            m_result->setBackendNodeId(value);
            return *this;
        }

        std::unique_ptr<EventListener> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class EventListener;
        EventListenerBuilder() : m_result(new EventListener()) { }

        template<int STEP> EventListenerBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<EventListenerBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMDebugger::EventListener> m_result;
    };

    static EventListenerBuilder<0> create()
    {
        return EventListenerBuilder<0>();
    }

private:
    EventListener()
    {
          m_useCapture = false;
          m_passive = false;
          m_once = false;
          m_lineNumber = 0;
          m_columnNumber = 0;
    }

    String m_type;
    bool m_useCapture;
    bool m_passive;
    bool m_once;
    String m_scriptId;
    int m_lineNumber;
    int m_columnNumber;
    Maybe<v8_inspector::protocol::Runtime::API::RemoteObject> m_handler;
    Maybe<v8_inspector::protocol::Runtime::API::RemoteObject> m_originalHandler;
    Maybe<int> m_backendNodeId;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse getEventListeners(const String& in_objectId, Maybe<int> in_depth, Maybe<bool> in_pierce, std::unique_ptr<protocol::Array<protocol::DOMDebugger::EventListener>>* out_listeners) = 0;
    virtual DispatchResponse removeDOMBreakpoint(int in_nodeId, const String& in_type) = 0;
    virtual DispatchResponse removeEventListenerBreakpoint(const String& in_eventName, Maybe<String> in_targetName) = 0;
    virtual DispatchResponse removeInstrumentationBreakpoint(const String& in_eventName) = 0;
    virtual DispatchResponse removeXHRBreakpoint(const String& in_url) = 0;
    virtual DispatchResponse setDOMBreakpoint(int in_nodeId, const String& in_type) = 0;
    virtual DispatchResponse setEventListenerBreakpoint(const String& in_eventName, Maybe<String> in_targetName) = 0;
    virtual DispatchResponse setInstrumentationBreakpoint(const String& in_eventName) = 0;
    virtual DispatchResponse setXHRBreakpoint(const String& in_url) = 0;

    virtual DispatchResponse disable()
    {
        return DispatchResponse::OK();
    }
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

} // namespace DOMDebugger
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_DOMDebugger_h)