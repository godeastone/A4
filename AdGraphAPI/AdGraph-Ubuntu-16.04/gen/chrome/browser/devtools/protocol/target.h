// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Target_h
#define protocol_Target_h

#include "chrome/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace protocol {
namespace Target {

// ------------- Forward and enum declarations.
using TargetID = String;
using BrowserContextID = String;
class RemoteLocation;

// ------------- Type and builder declarations.

class  RemoteLocation : public Serializable{
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


// ------------- Backend interface.

class  Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse CreateBrowserContext(String* out_browserContextId) = 0;
    virtual DispatchResponse GetBrowserContexts(std::unique_ptr<protocol::Array<String>>* out_browserContextIds) = 0;
    virtual DispatchResponse CreateTarget(const String& in_url, Maybe<int> in_width, Maybe<int> in_height, Maybe<String> in_browserContextId, Maybe<bool> in_enableBeginFrameControl, String* out_targetId) = 0;
    class  DisposeBrowserContextCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DisposeBrowserContextCallback() { }
    };
    virtual void DisposeBrowserContext(const String& in_browserContextId, std::unique_ptr<DisposeBrowserContextCallback> callback) = 0;
    virtual DispatchResponse SetRemoteLocations(std::unique_ptr<protocol::Array<protocol::Target::RemoteLocation>> in_locations) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class  Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class  Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class  Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Target
} // namespace protocol

#endif // !defined(protocol_Target_h)
