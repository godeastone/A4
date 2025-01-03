// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Target_h
#define content_protocol_Target_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Target {

// ------------- Forward and enum declarations.
using TargetID = String;
using SessionID = String;
using BrowserContextID = String;
class TargetInfo;
class RemoteLocation;
class AttachedToTargetNotification;
class DetachedFromTargetNotification;
class ReceivedMessageFromTargetNotification;
class TargetCreatedNotification;
class TargetDestroyedNotification;
class TargetInfoChangedNotification;

// ------------- Type and builder declarations.

class CONTENT_EXPORT TargetInfo : public Serializable{
    PROTOCOL_DISALLOW_COPY(TargetInfo);
public:
    static std::unique_ptr<TargetInfo> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TargetInfo() override { }

    String GetTargetId() { return m_targetId; }
    void SetTargetId(const String& value) { m_targetId = value; }

    String GetType() { return m_type; }
    void SetType(const String& value) { m_type = value; }

    String GetTitle() { return m_title; }
    void SetTitle(const String& value) { m_title = value; }

    String GetUrl() { return m_url; }
    void SetUrl(const String& value) { m_url = value; }

    bool GetAttached() { return m_attached; }
    void SetAttached(bool value) { m_attached = value; }

    bool HasOpenerId() { return m_openerId.isJust(); }
    String GetOpenerId(const String& defaultValue) { return m_openerId.isJust() ? m_openerId.fromJust() : defaultValue; }
    void SetOpenerId(const String& value) { m_openerId = value; }

    bool HasBrowserContextId() { return m_browserContextId.isJust(); }
    String GetBrowserContextId(const String& defaultValue) { return m_browserContextId.isJust() ? m_browserContextId.fromJust() : defaultValue; }
    void SetBrowserContextId(const String& value) { m_browserContextId = value; }

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


        TargetInfoBuilder<STATE | TargetIdSet>& SetTargetId(const String& value)
        {
            static_assert(!(STATE & TargetIdSet), "property targetId should not be set yet");
            m_result->SetTargetId(value);
            return castState<TargetIdSet>();
        }

        TargetInfoBuilder<STATE | TypeSet>& SetType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->SetType(value);
            return castState<TypeSet>();
        }

        TargetInfoBuilder<STATE | TitleSet>& SetTitle(const String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->SetTitle(value);
            return castState<TitleSet>();
        }

        TargetInfoBuilder<STATE | UrlSet>& SetUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->SetUrl(value);
            return castState<UrlSet>();
        }

        TargetInfoBuilder<STATE | AttachedSet>& SetAttached(bool value)
        {
            static_assert(!(STATE & AttachedSet), "property attached should not be set yet");
            m_result->SetAttached(value);
            return castState<AttachedSet>();
        }

        TargetInfoBuilder<STATE>& SetOpenerId(const String& value)
        {
            m_result->SetOpenerId(value);
            return *this;
        }

        TargetInfoBuilder<STATE>& SetBrowserContextId(const String& value)
        {
            m_result->SetBrowserContextId(value);
            return *this;
        }

        std::unique_ptr<TargetInfo> Build()
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

    static TargetInfoBuilder<0> Create()
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


class CONTENT_EXPORT RemoteLocation : public Serializable{
    PROTOCOL_DISALLOW_COPY(RemoteLocation);
public:
    static std::unique_ptr<RemoteLocation> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~RemoteLocation() override { }

    String GetHost() { return m_host; }
    void SetHost(const String& value) { m_host = value; }

    int GetPort() { return m_port; }
    void SetPort(int value) { m_port = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<RemoteLocation> clone() const;

    template<int STATE>
    class RemoteLocationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            HostSet = 1 << 1,
            PortSet = 1 << 2,
            AllFieldsSet = (HostSet | PortSet | 0)};


        RemoteLocationBuilder<STATE | HostSet>& SetHost(const String& value)
        {
            static_assert(!(STATE & HostSet), "property host should not be set yet");
            m_result->SetHost(value);
            return castState<HostSet>();
        }

        RemoteLocationBuilder<STATE | PortSet>& SetPort(int value)
        {
            static_assert(!(STATE & PortSet), "property port should not be set yet");
            m_result->SetPort(value);
            return castState<PortSet>();
        }

        std::unique_ptr<RemoteLocation> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class RemoteLocation;
        RemoteLocationBuilder() : m_result(new RemoteLocation()) { }

        template<int STEP> RemoteLocationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RemoteLocationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::RemoteLocation> m_result;
    };

    static RemoteLocationBuilder<0> Create()
    {
        return RemoteLocationBuilder<0>();
    }

private:
    RemoteLocation()
    {
          m_port = 0;
    }

    String m_host;
    int m_port;
};


class CONTENT_EXPORT AttachedToTargetNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(AttachedToTargetNotification);
public:
    static std::unique_ptr<AttachedToTargetNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AttachedToTargetNotification() override { }

    String GetSessionId() { return m_sessionId; }
    void SetSessionId(const String& value) { m_sessionId = value; }

    protocol::Target::TargetInfo* GetTargetInfo() { return m_targetInfo.get(); }
    void SetTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value) { m_targetInfo = std::move(value); }

    bool GetWaitingForDebugger() { return m_waitingForDebugger; }
    void SetWaitingForDebugger(bool value) { m_waitingForDebugger = value; }

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


        AttachedToTargetNotificationBuilder<STATE | SessionIdSet>& SetSessionId(const String& value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->SetSessionId(value);
            return castState<SessionIdSet>();
        }

        AttachedToTargetNotificationBuilder<STATE | TargetInfoSet>& SetTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value)
        {
            static_assert(!(STATE & TargetInfoSet), "property targetInfo should not be set yet");
            m_result->SetTargetInfo(std::move(value));
            return castState<TargetInfoSet>();
        }

        AttachedToTargetNotificationBuilder<STATE | WaitingForDebuggerSet>& SetWaitingForDebugger(bool value)
        {
            static_assert(!(STATE & WaitingForDebuggerSet), "property waitingForDebugger should not be set yet");
            m_result->SetWaitingForDebugger(value);
            return castState<WaitingForDebuggerSet>();
        }

        std::unique_ptr<AttachedToTargetNotification> Build()
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

    static AttachedToTargetNotificationBuilder<0> Create()
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


class CONTENT_EXPORT DetachedFromTargetNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(DetachedFromTargetNotification);
public:
    static std::unique_ptr<DetachedFromTargetNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~DetachedFromTargetNotification() override { }

    String GetSessionId() { return m_sessionId; }
    void SetSessionId(const String& value) { m_sessionId = value; }

    bool HasTargetId() { return m_targetId.isJust(); }
    String GetTargetId(const String& defaultValue) { return m_targetId.isJust() ? m_targetId.fromJust() : defaultValue; }
    void SetTargetId(const String& value) { m_targetId = value; }

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


        DetachedFromTargetNotificationBuilder<STATE | SessionIdSet>& SetSessionId(const String& value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->SetSessionId(value);
            return castState<SessionIdSet>();
        }

        DetachedFromTargetNotificationBuilder<STATE>& SetTargetId(const String& value)
        {
            m_result->SetTargetId(value);
            return *this;
        }

        std::unique_ptr<DetachedFromTargetNotification> Build()
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

    static DetachedFromTargetNotificationBuilder<0> Create()
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


class CONTENT_EXPORT ReceivedMessageFromTargetNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ReceivedMessageFromTargetNotification);
public:
    static std::unique_ptr<ReceivedMessageFromTargetNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ReceivedMessageFromTargetNotification() override { }

    String GetSessionId() { return m_sessionId; }
    void SetSessionId(const String& value) { m_sessionId = value; }

    String GetMessage() { return m_message; }
    void SetMessage(const String& value) { m_message = value; }

    bool HasTargetId() { return m_targetId.isJust(); }
    String GetTargetId(const String& defaultValue) { return m_targetId.isJust() ? m_targetId.fromJust() : defaultValue; }
    void SetTargetId(const String& value) { m_targetId = value; }

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


        ReceivedMessageFromTargetNotificationBuilder<STATE | SessionIdSet>& SetSessionId(const String& value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->SetSessionId(value);
            return castState<SessionIdSet>();
        }

        ReceivedMessageFromTargetNotificationBuilder<STATE | MessageSet>& SetMessage(const String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->SetMessage(value);
            return castState<MessageSet>();
        }

        ReceivedMessageFromTargetNotificationBuilder<STATE>& SetTargetId(const String& value)
        {
            m_result->SetTargetId(value);
            return *this;
        }

        std::unique_ptr<ReceivedMessageFromTargetNotification> Build()
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

    static ReceivedMessageFromTargetNotificationBuilder<0> Create()
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


class CONTENT_EXPORT TargetCreatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(TargetCreatedNotification);
public:
    static std::unique_ptr<TargetCreatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TargetCreatedNotification() override { }

    protocol::Target::TargetInfo* GetTargetInfo() { return m_targetInfo.get(); }
    void SetTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value) { m_targetInfo = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<TargetCreatedNotification> clone() const;

    template<int STATE>
    class TargetCreatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TargetInfoSet = 1 << 1,
            AllFieldsSet = (TargetInfoSet | 0)};


        TargetCreatedNotificationBuilder<STATE | TargetInfoSet>& SetTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value)
        {
            static_assert(!(STATE & TargetInfoSet), "property targetInfo should not be set yet");
            m_result->SetTargetInfo(std::move(value));
            return castState<TargetInfoSet>();
        }

        std::unique_ptr<TargetCreatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TargetCreatedNotification;
        TargetCreatedNotificationBuilder() : m_result(new TargetCreatedNotification()) { }

        template<int STEP> TargetCreatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TargetCreatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::TargetCreatedNotification> m_result;
    };

    static TargetCreatedNotificationBuilder<0> Create()
    {
        return TargetCreatedNotificationBuilder<0>();
    }

private:
    TargetCreatedNotification()
    {
    }

    std::unique_ptr<protocol::Target::TargetInfo> m_targetInfo;
};


class CONTENT_EXPORT TargetDestroyedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(TargetDestroyedNotification);
public:
    static std::unique_ptr<TargetDestroyedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TargetDestroyedNotification() override { }

    String GetTargetId() { return m_targetId; }
    void SetTargetId(const String& value) { m_targetId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<TargetDestroyedNotification> clone() const;

    template<int STATE>
    class TargetDestroyedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TargetIdSet = 1 << 1,
            AllFieldsSet = (TargetIdSet | 0)};


        TargetDestroyedNotificationBuilder<STATE | TargetIdSet>& SetTargetId(const String& value)
        {
            static_assert(!(STATE & TargetIdSet), "property targetId should not be set yet");
            m_result->SetTargetId(value);
            return castState<TargetIdSet>();
        }

        std::unique_ptr<TargetDestroyedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TargetDestroyedNotification;
        TargetDestroyedNotificationBuilder() : m_result(new TargetDestroyedNotification()) { }

        template<int STEP> TargetDestroyedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TargetDestroyedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::TargetDestroyedNotification> m_result;
    };

    static TargetDestroyedNotificationBuilder<0> Create()
    {
        return TargetDestroyedNotificationBuilder<0>();
    }

private:
    TargetDestroyedNotification()
    {
    }

    String m_targetId;
};


class CONTENT_EXPORT TargetInfoChangedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(TargetInfoChangedNotification);
public:
    static std::unique_ptr<TargetInfoChangedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TargetInfoChangedNotification() override { }

    protocol::Target::TargetInfo* GetTargetInfo() { return m_targetInfo.get(); }
    void SetTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value) { m_targetInfo = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<TargetInfoChangedNotification> clone() const;

    template<int STATE>
    class TargetInfoChangedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TargetInfoSet = 1 << 1,
            AllFieldsSet = (TargetInfoSet | 0)};


        TargetInfoChangedNotificationBuilder<STATE | TargetInfoSet>& SetTargetInfo(std::unique_ptr<protocol::Target::TargetInfo> value)
        {
            static_assert(!(STATE & TargetInfoSet), "property targetInfo should not be set yet");
            m_result->SetTargetInfo(std::move(value));
            return castState<TargetInfoSet>();
        }

        std::unique_ptr<TargetInfoChangedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TargetInfoChangedNotification;
        TargetInfoChangedNotificationBuilder() : m_result(new TargetInfoChangedNotification()) { }

        template<int STEP> TargetInfoChangedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TargetInfoChangedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Target::TargetInfoChangedNotification> m_result;
    };

    static TargetInfoChangedNotificationBuilder<0> Create()
    {
        return TargetInfoChangedNotificationBuilder<0>();
    }

private:
    TargetInfoChangedNotification()
    {
    }

    std::unique_ptr<protocol::Target::TargetInfo> m_targetInfo;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse ActivateTarget(const String& in_targetId) = 0;
    virtual DispatchResponse AttachToTarget(const String& in_targetId, String* out_sessionId) = 0;
    virtual DispatchResponse CloseTarget(const String& in_targetId, bool* out_success) = 0;
    virtual DispatchResponse CreateBrowserContext(String* out_browserContextId) = 0;
    virtual DispatchResponse GetBrowserContexts(std::unique_ptr<protocol::Array<String>>* out_browserContextIds) = 0;
    virtual DispatchResponse CreateTarget(const String& in_url, Maybe<int> in_width, Maybe<int> in_height, Maybe<String> in_browserContextId, Maybe<bool> in_enableBeginFrameControl, String* out_targetId) = 0;
    virtual DispatchResponse DetachFromTarget(Maybe<String> in_sessionId, Maybe<String> in_targetId) = 0;
    virtual DispatchResponse DisposeBrowserContext(const String& in_browserContextId) = 0;
    virtual DispatchResponse GetTargetInfo(const String& in_targetId, std::unique_ptr<protocol::Target::TargetInfo>* out_targetInfo) = 0;
    virtual DispatchResponse GetTargets(std::unique_ptr<protocol::Array<protocol::Target::TargetInfo>>* out_targetInfos) = 0;
    virtual DispatchResponse SendMessageToTarget(const String& in_message, Maybe<String> in_sessionId, Maybe<String> in_targetId) = 0;
    virtual DispatchResponse SetAutoAttach(bool in_autoAttach, bool in_waitForDebuggerOnStart) = 0;
    virtual DispatchResponse SetDiscoverTargets(bool in_discover) = 0;
    virtual DispatchResponse SetRemoteLocations(std::unique_ptr<protocol::Array<protocol::Target::RemoteLocation>> in_locations) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void AttachedToTarget(const String& sessionId, std::unique_ptr<protocol::Target::TargetInfo> targetInfo, bool waitingForDebugger);
    void DetachedFromTarget(const String& sessionId, Maybe<String> targetId = Maybe<String>());
    void ReceivedMessageFromTarget(const String& sessionId, const String& message, Maybe<String> targetId = Maybe<String>());
    void TargetCreated(std::unique_ptr<protocol::Target::TargetInfo> targetInfo);
    void TargetDestroyed(const String& targetId);
    void TargetInfoChanged(std::unique_ptr<protocol::Target::TargetInfo> targetInfo);

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CONTENT_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CONTENT_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Target
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Target_h)
