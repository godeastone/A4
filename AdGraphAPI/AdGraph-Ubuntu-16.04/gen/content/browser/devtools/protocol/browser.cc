// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/browser.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Browser {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Browser";
const char Metainfo::commandPrefix[] = "Browser.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<Bucket> Bucket::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Bucket> result(new Bucket());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* lowValue = object->get("low");
    errors->setName("low");
    result->m_low = ValueConversions<int>::fromValue(lowValue, errors);
    protocol::Value* highValue = object->get("high");
    errors->setName("high");
    result->m_high = ValueConversions<int>::fromValue(highValue, errors);
    protocol::Value* countValue = object->get("count");
    errors->setName("count");
    result->m_count = ValueConversions<int>::fromValue(countValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Bucket::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("low", ValueConversions<int>::toValue(m_low));
    result->setValue("high", ValueConversions<int>::toValue(m_high));
    result->setValue("count", ValueConversions<int>::toValue(m_count));
    return result;
}

std::unique_ptr<Bucket> Bucket::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<Histogram> Histogram::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Histogram> result(new Histogram());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* sumValue = object->get("sum");
    errors->setName("sum");
    result->m_sum = ValueConversions<int>::fromValue(sumValue, errors);
    protocol::Value* countValue = object->get("count");
    errors->setName("count");
    result->m_count = ValueConversions<int>::fromValue(countValue, errors);
    protocol::Value* bucketsValue = object->get("buckets");
    errors->setName("buckets");
    result->m_buckets = ValueConversions<protocol::Array<protocol::Browser::Bucket>>::fromValue(bucketsValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Histogram::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("sum", ValueConversions<int>::toValue(m_sum));
    result->setValue("count", ValueConversions<int>::toValue(m_count));
    result->setValue("buckets", ValueConversions<protocol::Array<protocol::Browser::Bucket>>::toValue(m_buckets.get()));
    return result;
}

std::unique_ptr<Histogram> Histogram::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

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
        m_dispatchMap["Browser.getVersion"] = &DispatcherImpl::getVersion;
        m_dispatchMap["Browser.getBrowserCommandLine"] = &DispatcherImpl::getBrowserCommandLine;
        m_dispatchMap["Browser.getHistograms"] = &DispatcherImpl::getHistograms;
        m_dispatchMap["Browser.getHistogram"] = &DispatcherImpl::getHistogram;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status getVersion(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getBrowserCommandLine(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getHistograms(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getHistogram(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::getVersion(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    String out_protocolVersion;
    String out_product;
    String out_revision;
    String out_userAgent;
    String out_jsVersion;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetVersion(&out_protocolVersion, &out_product, &out_revision, &out_userAgent, &out_jsVersion);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("protocolVersion", ValueConversions<String>::toValue(out_protocolVersion));
        result->setValue("product", ValueConversions<String>::toValue(out_product));
        result->setValue("revision", ValueConversions<String>::toValue(out_revision));
        result->setValue("userAgent", ValueConversions<String>::toValue(out_userAgent));
        result->setValue("jsVersion", ValueConversions<String>::toValue(out_jsVersion));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getBrowserCommandLine(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::Array<String>> out_arguments;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetBrowserCommandLine(&out_arguments);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("arguments", ValueConversions<protocol::Array<String>>::toValue(out_arguments.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getHistograms(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* queryValue = object ? object->get("query") : nullptr;
    Maybe<String> in_query;
    if (queryValue) {
        errors->setName("query");
        in_query = ValueConversions<String>::fromValue(queryValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::Browser::Histogram>> out_histograms;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetHistograms(std::move(in_query), &out_histograms);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("histograms", ValueConversions<protocol::Array<protocol::Browser::Histogram>>::toValue(out_histograms.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::getHistogram(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nameValue = object ? object->get("name") : nullptr;
    errors->setName("name");
    String in_name = ValueConversions<String>::fromValue(nameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Browser::Histogram> out_histogram;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetHistogram(in_name, &out_histogram);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("histogram", ValueConversions<protocol::Browser::Histogram>::toValue(out_histogram.get()));
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
    uber->registerBackend("Browser", std::move(dispatcher));
}

} // Browser
} // namespace content
} // namespace protocol
