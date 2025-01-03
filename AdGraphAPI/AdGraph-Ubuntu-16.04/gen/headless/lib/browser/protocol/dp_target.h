// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_Target_h
#define headless_protocol_Target_h

#include "headless/public/headless_export.h"
#include "headless/lib/browser/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace headless {
namespace protocol {
namespace Target {

// ------------- Forward and enum declarations.
using TargetID = String;
using BrowserContextID = String;

// ------------- Type and builder declarations.

// ------------- Backend interface.

class HEADLESS_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse CloseTarget(const String& in_targetId, bool* out_success) = 0;
    virtual DispatchResponse CreateBrowserContext(String* out_browserContextId) = 0;
    virtual DispatchResponse GetBrowserContexts(std::unique_ptr<protocol::Array<String>>* out_browserContextIds) = 0;
    virtual DispatchResponse CreateTarget(const String& in_url, Maybe<int> in_width, Maybe<int> in_height, Maybe<String> in_browserContextId, Maybe<bool> in_enableBeginFrameControl, String* out_targetId) = 0;
    virtual DispatchResponse DisposeBrowserContext(const String& in_browserContextId) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class HEADLESS_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class HEADLESS_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class HEADLESS_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Target
} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_Target_h)
