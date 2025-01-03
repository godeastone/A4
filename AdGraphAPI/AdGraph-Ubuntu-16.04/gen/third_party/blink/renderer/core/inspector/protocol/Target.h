// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Target_h
#define blink_protocol_Target_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Target {

// ------------- Forward and enum declarations.
using TargetID = String;
using SessionID = String;
using BrowserContextID = String;
class TargetInfo;
class AttachedToTargetNotification;
class DetachedFromTargetNotification;
class ReceivedMessageFromTargetNotification;

// ------------- Type and builder declarations.

class CORE_EXPORT TargetInfo : public Serializable{
    PROTOCOL_DISALLOW_COPY(TargetInfo);
public:
    static std::unique_ptr<TargetInfo> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TargetInfo() override { }

    String getTargetId() { return m_targetId; }
    void setTargetId(const String& value) { m_targetId = value; }

    String getType() { return m_type; }
    void setType(const String& value) { m_type = value; }

    String getTitle() { return m_title; }
    void setTitle(const String& value) { m_title = value; }

    String getUrl() { return m_url; }
    void setUrl(const String& value) { m_url = value; }

    bool getAttached() { return m_attached; }
    void setAttached(bool value) { m_attached = value; }

    bool hasOpenerId() { return m_openerId.isJust(); }
    String getOpenerId(const String& defaultValue) { return m_openerId.isJust() ? m_openerId.fromJust() : defaultValue; }
    void setOpenerId(const String& value) { m_openerId = value; }

    bool hasBrowserContextId() { return m_browserContextId.isJust(); }
    String getBrowserContextId(const String& defaultValue) { return m_browserContextId.isJust() ? m_browserContextId.fromJust() : defaultValue; }
    void setBrowserContextId(const String& value) { m_browserContextId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<TargetInfo> clone() const;

    template<int STATE>
    class TargetInfoBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TargetIdSet = 1 << 1,
            TypeSet = 1 << 2,
            TitleSet = 1 << 3,
            UrlSet = 1 << 4,
            AttachedSet = 1 << 5,
            AllFieldsSet = (TargetIdSet | TypeSet | TitleSet | UrlSet | AttachedSet | 0)};


        TargetInfoBuilder<STATE | TargetIdSet>& setTargetId(const String& value)
        {
            static_assert(!(STATE & TargetIdSet), "property targetId should not be set yet");
            m_result->setTargetId(value);
            return castState<TargetIdSet>();
        }

        TargetInfoBuilder<STATE | TypeSet>& setType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        TargetInfoBuilder<STATE | TitleSet>& setTitle(const String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->setTitle(value);
            return castState<TitleSet>();
        }

        TargetInfoBuilder<STATE | UrlSet>& setUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        TargetInfoBuilder<STATE | AttachedSet>& setAttached(bool value)
        {
            static_assert(!(STATE & AttachedSet), "property attached should not be set yet");
            m_result->setAttached(value);
            return castState<AttachedSet>();
        }

        TargetInfoBuilder<STATE>& setOpenerId(const String& value)
        {
            m_result->setOpenerId(value);
            return *this;
        }

        TargetInfoBuilder<STATE>& setBrowserContextId(const String& value)
        {
            m_result->setBrowserContextId(value);
            return *this;
        }

        std::unique_ptr<TargetInfo> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TargetInfo;
        TargetInfoBuilder() : m_result(new TargetInfo()) { }

        template<int STEP> TargetInfoBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TargetInfoBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::TargetInfo> m_result;
    };

    static TargetInfoBuilder<0> create()
    {
        return TargetInfoBuilder<0>();
    }

private:
    TargetInfo()
    {
          m_attached = false;
    }

    String m_targetId;
    String m_type;
    String m_title;
    String m_url;
    bool m_attached;
    Maybe<String> m_openerId;
    Maybe<String> m_browserContextId;
};


class CORE_EXPORT AttachedToTargetNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(AttachedToTargetNotification);
public:
    static std::unique_ptr<AttachedToTargetNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AttachedToTargetNotification() override { }

    String getSessionId() { return m_sessionId; }
    void setSessionId(const String& value) { m_sessionId = value; }

    protocol::Target::TargetInfo* getTargetInfo() { return m_targetInfo.get(); }
    void setTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value) { m_targetInfo = std::move(value); }

    bool getWaitingForDebugger() { return m_waitingForDebugger; }
    void setWaitingForDebugger(bool value) { m_waitingForDebugger = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<AttachedToTargetNotification> clone() const;

    template<int STATE>
    class AttachedToTargetNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SessionIdSet = 1 << 1,
            TargetInfoSet = 1 << 2,
            WaitingForDebuggerSet = 1 << 3,
            AllFieldsSet = (SessionIdSet | TargetInfoSet | WaitingForDebuggerSet | 0)};


        AttachedToTargetNotificationBuilder<STATE | SessionIdSet>& setSessionId(const String& value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->setSessionId(value);
            return castState<SessionIdSet>();
        }

        AttachedToTargetNotificationBuilder<STATE | TargetInfoSet>& setTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value)
        {
            static_assert(!(STATE & TargetInfoSet), "property targetInfo should not be set yet");
            m_result->setTargetInfo(std::move(value));
            return castState<TargetInfoSet>();
        }

        AttachedToTargetNotificationBuilder<STATE | WaitingForDebuggerSet>& setWaitingForDebugger(bool value)
        {
            static_assert(!(STATE & WaitingForDebuggerSet), "property waitingForDebugger should not be set yet");
            m_result->setWaitingForDebugger(value);
            return castState<WaitingForDebuggerSet>();
        }

        std::unique_ptr<AttachedToTargetNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AttachedToTargetNotification;
        AttachedToTargetNotificationBuilder() : m_result(new AttachedToTargetNotification()) { }

        template<int STEP> AttachedToTargetNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AttachedToTargetNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::AttachedToTargetNotification> m_result;
    };

    static AttachedToTargetNotificationBuilder<0> create()
    {
        return AttachedToTargetNotificationBuilder<0>();
    }

private:
    AttachedToTargetNotification()
    {
          m_waitingForDebugger = false;
    }

    String m_sessionId;
    std::unique_ptr<protocol::Target::TargetInfo> m_targetInfo;
    bool m_waitingForDebugger;
};


class CORE_EXPORT DetachedFromTargetNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(DetachedFromTargetNotification);
public:
    static std::unique_ptr<DetachedFromTargetNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~DetachedFromTargetNotification() override { }

    String getSessionId() { return m_sessionId; }
    void setSessionId(const String& value) { m_sessionId = value; }

    bool hasTargetId() { return m_targetId.isJust(); }
    String getTargetId(const String& defaultValue) { return m_targetId.isJust() ? m_targetId.fromJust() : defaultValue; }
    void setTargetId(const String& value) { m_targetId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<DetachedFromTargetNotification> clone() const;

    template<int STATE>
    class DetachedFromTargetNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SessionIdSet = 1 << 1,
            AllFieldsSet = (SessionIdSet | 0)};


        DetachedFromTargetNotificationBuilder<STATE | SessionIdSet>& setSessionId(const String& value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->setSessionId(value);
            return castState<SessionIdSet>();
        }

        DetachedFromTargetNotificationBuilder<STATE>& setTargetId(const String& value)
        {
            m_result->setTargetId(value);
            return *this;
        }

        std::unique_ptr<DetachedFromTargetNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class DetachedFromTargetNotification;
        DetachedFromTargetNotificationBuilder() : m_result(new DetachedFromTargetNotification()) { }

        template<int STEP> DetachedFromTargetNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DetachedFromTargetNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::DetachedFromTargetNotification> m_result;
    };

    static DetachedFromTargetNotificationBuilder<0> create()
    {
        return DetachedFromTargetNotificationBuilder<0>();
    }

private:
    DetachedFromTargetNotification()
    {
    }

    String m_sessionId;
    Maybe<String> m_targetId;
};


class CORE_EXPORT ReceivedMessageFromTargetNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ReceivedMessageFromTargetNotification);
public:
    static std::unique_ptr<ReceivedMessageFromTargetNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ReceivedMessageFromTargetNotification() override { }

    String getSessionId() { return m_sessionId; }
    void setSessionId(const String& value) { m_sessionId = value; }

    String getMessage() { return m_message; }
    void setMessage(const String& value) { m_message = value; }

    bool hasTargetId() { return m_targetId.isJust(); }
    String getTargetId(const String& defaultValue) { return m_targetId.isJust() ? m_targetId.fromJust() : defaultValue; }
    void setTargetId(const String& value) { m_targetId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ReceivedMessageFromTargetNotification> clone() const;

    template<int STATE>
    class ReceivedMessageFromTargetNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SessionIdSet = 1 << 1,
            MessageSet = 1 << 2,
            AllFieldsSet = (SessionIdSet | MessageSet | 0)};


        ReceivedMessageFromTargetNotificationBuilder<STATE | SessionIdSet>& setSessionId(const String& value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->setSessionId(value);
            return castState<SessionIdSet>();
        }

        ReceivedMessageFromTargetNotificationBuilder<STATE | MessageSet>& setMessage(const String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->setMessage(value);
            return castState<MessageSet>();
        }

        ReceivedMessageFromTargetNotificationBuilder<STATE>& setTargetId(const String& value)
        {
            m_result->setTargetId(value);
            return *this;
        }

        std::unique_ptr<ReceivedMessageFromTargetNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ReceivedMessageFromTargetNotification;
        ReceivedMessageFromTargetNotificationBuilder() : m_result(new ReceivedMessageFromTargetNotification()) { }

        template<int STEP> ReceivedMessageFromTargetNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ReceivedMessageFromTargetNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::ReceivedMessageFromTargetNotification> m_result;
    };

    static ReceivedMessageFromTargetNotificationBuilder<0> create()
    {
        return ReceivedMessageFromTargetNotificationBuilder<0>();
    }

private:
    ReceivedMessageFromTargetNotification()
    {
    }

    String m_sessionId;
    String m_message;
    Maybe<String> m_targetId;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse sendMessageToTarget(const String& in_message, Maybe<String> in_sessionId, Maybe<String> in_targetId) = 0;
    virtual DispatchResponse setAutoAttach(bool in_autoAttach, bool in_waitForDebuggerOnStart) = 0;

    virtual DispatchResponse disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void attachedToTarget(const String& sessionId, std::unique_ptr<protocol::Target::TargetInfo> targetInfo, bool waitingForDebugger);
    void detachedFromTarget(const String& sessionId, Maybe<String> targetId = Maybe<String>());
    void receivedMessageFromTarget(const String& sessionId, const String& message, Maybe<String> targetId = Maybe<String>());

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

} // namespace Target
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Target_h)
