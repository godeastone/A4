// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_IO_h
#define content_protocol_IO_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace IO {

// ------------- Forward and enum declarations.
using StreamHandle = String;

// ------------- Type and builder declarations.

// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse Close(const String& in_handle) = 0;
    class CONTENT_EXPORT ReadCallback {
    public:
        virtual void sendSuccess(Maybe<bool> base64Encoded, const String& data, bool eof) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~ReadCallback() { }
    };
    virtual void Read(const String& in_handle, Maybe<int> in_offset, Maybe<int> in_size, std::unique_ptr<ReadCallback> callback) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

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

} // namespace IO
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_IO_h)
