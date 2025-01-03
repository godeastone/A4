// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/Audits.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace Audits {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Audits";
const char Metainfo::commandPrefix[] = "Audits.";
const char Metainfo::version[] = "1.3";

// ------------- Enum values from params.


namespace GetEncodedResponse {
namespace EncodingEnum {
const char* Webp = "webp";
const char* Jpeg = "jpeg";
const char* Png = "png";
} // namespace EncodingEnum
} // namespace GetEncodedResponse

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
        m_dispatchMap["Audits.getEncodedResponse"] = &DispatcherImpl::getEncodedResponse;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status getEncodedResponse(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::getEncodedResponse(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* requestIdValue = object ? object->get("requestId") : nullptr;
    errors->setName("requestId");
    String in_requestId = ValueConversions<String>::fromValue(requestIdValue, errors);
    protocol::Value* encodingValue = object ? object->get("encoding") : nullptr;
    errors->setName("encoding");
    String in_encoding = ValueConversions<String>::fromValue(encodingValue, errors);
    protocol::Value* qualityValue = object ? object->get("quality") : nullptr;
    Maybe<double> in_quality;
    if (qualityValue) {
        errors->setName("quality");
        in_quality = ValueConversions<double>::fromValue(qualityValue, errors);
    }
    protocol::Value* sizeOnlyValue = object ? object->get("sizeOnly") : nullptr;
    Maybe<bool> in_sizeOnly;
    if (sizeOnlyValue) {
        errors->setName("sizeOnly");
        in_sizeOnly = ValueConversions<bool>::fromValue(sizeOnlyValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    Maybe<String> out_body;
    int out_originalSize;
    int out_encodedSize;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getEncodedResponse(in_requestId, in_encoding, std::move(in_quality), std::move(in_sizeOnly), &out_body, &out_originalSize, &out_encodedSize);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        if (out_body.isJust())
            result->setValue("body", ValueConversions<String>::toValue(out_body.fromJust()));
        result->setValue("originalSize", ValueConversions<int>::toValue(out_originalSize));
        result->setValue("encodedSize", ValueConversions<int>::toValue(out_encodedSize));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Audits", std::move(dispatcher));
}

} // Audits
} // namespace blink
} // namespace protocol
