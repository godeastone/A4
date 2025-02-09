// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Tethering_h
#define content_protocol_Tethering_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Tethering {

// ------------- Forward and enum declarations.
class AcceptedNotification;

// ------------- Type and builder declarations.

class CONTENT_EXPORT AcceptedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(AcceptedNotification);
public:
    static std::unique_ptr<AcceptedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AcceptedNotification() override { }

    int GetPort() { return m_port; }
    void SetPort(int value) { m_port = value; }

    String GetConnectionId() { return m_connectionId; }
    void SetConnectionId(const String& value) { m_connectionId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<AcceptedNotification> clone() const;

    template<int STATE>
    class AcceptedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            PortSet = 1 << 1,
            ConnectionIdSet = 1 << 2,
            AllFieldsSet = (PortSet | ConnectionIdSet | 0)};


        AcceptedNotificationBuilder<STATE | PortSet>& SetPort(int value)
        {
            static_assert(!(STATE & PortSet), "property port should not be set yet");
            m_result->SetPort(value);
            return castState<PortSet>();
        }

        AcceptedNotificationBuilder<STATE | ConnectionIdSet>& SetConnectionId(const String& value)
        {
            static_assert(!(STATE & ConnectionIdSet), "property connectionId should not be set yet");
            m_result->SetConnectionId(value);
            return castState<ConnectionIdSet>();
        }

        std::unique_ptr<AcceptedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AcceptedNotification;
        AcceptedNotificationBuilder() : m_result(new AcceptedNotification()) { }

        template<int STEP> AcceptedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AcceptedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Tethering::AcceptedNotification> m_result;
    };

    static AcceptedNotificationBuilder<0> Create()
    {
        return AcceptedNotificationBuilder<0>();
    }

private:
    AcceptedNotification()
    {
          m_port = 0;
    }

    int m_port;
    String m_connectionId;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CONTENT_EXPORT BindCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~BindCallback() { }
    };
    virtual void Bind(int in_port, std::unique_ptr<BindCallback> callback) = 0;
    class CONTENT_EXPORT UnbindCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~UnbindCallback() { }
    };
    virtual void Unbind(int in_port, std::unique_ptr<UnbindCallback> callback) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void Accepted(int port, const String& connectionId);

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

} // namespace Tethering
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Tethering_h)
