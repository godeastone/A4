// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_Network_h
#define headless_protocol_Network_h

#include "headless/public/headless_export.h"
#include "headless/lib/browser/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace headless {
namespace protocol {
namespace Network {

// ------------- Forward and enum declarations.
using ConnectionType = String;

namespace ConnectionTypeEnum {
HEADLESS_EXPORT extern const char None[];
HEADLESS_EXPORT extern const char Cellular2g[];
HEADLESS_EXPORT extern const char Cellular3g[];
HEADLESS_EXPORT extern const char Cellular4g[];
HEADLESS_EXPORT extern const char Bluetooth[];
HEADLESS_EXPORT extern const char Ethernet[];
HEADLESS_EXPORT extern const char Wifi[];
HEADLESS_EXPORT extern const char Wimax[];
HEADLESS_EXPORT extern const char Other[];
} // namespace ConnectionTypeEnum

// ------------- Type and builder declarations.

// ------------- Backend interface.

class HEADLESS_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse EmulateNetworkConditions(bool in_offline, double in_latency, double in_downloadThroughput, double in_uploadThroughput, Maybe<String> in_connectionType) = 0;

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

} // namespace Network
} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_Network_h)
