// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/lib/browser/protocol/dp_network.h"

#include "headless/lib/browser/protocol/protocol.h"

namespace headless {
namespace protocol {
namespace Network {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Network";
const char Metainfo::commandPrefix[] = "Network.";
const char Metainfo::version[] = "1.3";

namespace ConnectionTypeEnum {
const char None[] = "none";
const char Cellular2g[] = "cellular2g";
const char Cellular3g[] = "cellular3g";
const char Cellular4g[] = "cellular4g";
const char Bluetooth[] = "bluetooth";
const char Ethernet[] = "ethernet";
const char Wifi[] = "wifi";
const char Wimax[] = "wimax";
const char Other[] = "other";
} // namespace ConnectionTypeEnum

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawNotification(const String& notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::create(notification));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend, bool fallThroughForNotFound)
        : DispatcherBase(frontendChannel)
        , m_backend(backend)
        , m_fallThroughForNotFound(fallThroughForNotFound) {
        m_dispatchMap["Network.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Network.emulateNetworkConditions"] = &DispatcherImpl::emulateNetworkConditions;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status emulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
    bool m_fallThroughForNotFound;
};

DispatchResponse::Status DispatcherImpl::dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        if (m_fallThroughForNotFound)
            return DispatchResponse::kFallThrough;
        reportProtocolError(callId, DispatchResponse::kMethodNotFound, "'" + method + "' wasn't found", nullptr);
        return DispatchResponse::kError;
    }

    protocol::ErrorSupport errors;
    return (this->*(it->second))(callId, std::move(messageObject), &errors);
}


DispatchResponse::Status DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Disable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::emulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* offlineValue = object ? object->get("offline") : nullptr;
    errors->setName("offline");
    bool in_offline = ValueConversions<bool>::fromValue(offlineValue, errors);
    protocol::Value* latencyValue = object ? object->get("latency") : nullptr;
    errors->setName("latency");
    double in_latency = ValueConversions<double>::fromValue(latencyValue, errors);
    protocol::Value* downloadThroughputValue = object ? object->get("downloadThroughput") : nullptr;
    errors->setName("downloadThroughput");
    double in_downloadThroughput = ValueConversions<double>::fromValue(downloadThroughputValue, errors);
    protocol::Value* uploadThroughputValue = object ? object->get("uploadThroughput") : nullptr;
    errors->setName("uploadThroughput");
    double in_uploadThroughput = ValueConversions<double>::fromValue(uploadThroughputValue, errors);
    protocol::Value* connectionTypeValue = object ? object->get("connectionType") : nullptr;
    Maybe<String> in_connectionType;
    if (connectionTypeValue) {
        errors->setName("connectionType");
        in_connectionType = ValueConversions<String>::fromValue(connectionTypeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->EmulateNetworkConditions(in_offline, in_latency, in_downloadThroughput, in_uploadThroughput, std::move(in_connectionType));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Network", std::move(dispatcher));
}

} // Network
} // namespace headless
} // namespace protocol
