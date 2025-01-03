// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/storage.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Storage {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Storage";
const char Metainfo::commandPrefix[] = "Storage.";
const char Metainfo::version[] = "1.3";

namespace StorageTypeEnum {
const char Appcache[] = "appcache";
const char Cookies[] = "cookies";
const char File_systems[] = "file_systems";
const char Indexeddb[] = "indexeddb";
const char Local_storage[] = "local_storage";
const char Shader_cache[] = "shader_cache";
const char Websql[] = "websql";
const char Service_workers[] = "service_workers";
const char Cache_storage[] = "cache_storage";
const char All[] = "all";
const char Other[] = "other";
} // namespace StorageTypeEnum

std::unique_ptr<UsageForType> UsageForType::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<UsageForType> result(new UsageForType());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* storageTypeValue = object->get("storageType");
    errors->setName("storageType");
    result->m_storageType = ValueConversions<String>::fromValue(storageTypeValue, errors);
    protocol::Value* usageValue = object->get("usage");
    errors->setName("usage");
    result->m_usage = ValueConversions<double>::fromValue(usageValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> UsageForType::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("storageType", ValueConversions<String>::toValue(m_storageType));
    result->setValue("usage", ValueConversions<double>::toValue(m_usage));
    return result;
}

std::unique_ptr<UsageForType> UsageForType::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<CacheStorageContentUpdatedNotification> CacheStorageContentUpdatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CacheStorageContentUpdatedNotification> result(new CacheStorageContentUpdatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<String>::fromValue(originValue, errors);
    protocol::Value* cacheNameValue = object->get("cacheName");
    errors->setName("cacheName");
    result->m_cacheName = ValueConversions<String>::fromValue(cacheNameValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CacheStorageContentUpdatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("origin", ValueConversions<String>::toValue(m_origin));
    result->setValue("cacheName", ValueConversions<String>::toValue(m_cacheName));
    return result;
}

std::unique_ptr<CacheStorageContentUpdatedNotification> CacheStorageContentUpdatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<CacheStorageListUpdatedNotification> CacheStorageListUpdatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CacheStorageListUpdatedNotification> result(new CacheStorageListUpdatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CacheStorageListUpdatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("origin", ValueConversions<String>::toValue(m_origin));
    return result;
}

std::unique_ptr<CacheStorageListUpdatedNotification> CacheStorageListUpdatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<IndexedDBContentUpdatedNotification> IndexedDBContentUpdatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<IndexedDBContentUpdatedNotification> result(new IndexedDBContentUpdatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<String>::fromValue(originValue, errors);
    protocol::Value* databaseNameValue = object->get("databaseName");
    errors->setName("databaseName");
    result->m_databaseName = ValueConversions<String>::fromValue(databaseNameValue, errors);
    protocol::Value* objectStoreNameValue = object->get("objectStoreName");
    errors->setName("objectStoreName");
    result->m_objectStoreName = ValueConversions<String>::fromValue(objectStoreNameValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> IndexedDBContentUpdatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("origin", ValueConversions<String>::toValue(m_origin));
    result->setValue("databaseName", ValueConversions<String>::toValue(m_databaseName));
    result->setValue("objectStoreName", ValueConversions<String>::toValue(m_objectStoreName));
    return result;
}

std::unique_ptr<IndexedDBContentUpdatedNotification> IndexedDBContentUpdatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<IndexedDBListUpdatedNotification> IndexedDBListUpdatedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<IndexedDBListUpdatedNotification> result(new IndexedDBListUpdatedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> IndexedDBListUpdatedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("origin", ValueConversions<String>::toValue(m_origin));
    return result;
}

std::unique_ptr<IndexedDBListUpdatedNotification> IndexedDBListUpdatedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::CacheStorageContentUpdated(const String& origin, const String& cacheName)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<CacheStorageContentUpdatedNotification> messageData = CacheStorageContentUpdatedNotification::Create()
        .SetOrigin(origin)
        .SetCacheName(cacheName)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Storage.cacheStorageContentUpdated", std::move(messageData)));
}

void Frontend::CacheStorageListUpdated(const String& origin)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<CacheStorageListUpdatedNotification> messageData = CacheStorageListUpdatedNotification::Create()
        .SetOrigin(origin)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Storage.cacheStorageListUpdated", std::move(messageData)));
}

void Frontend::IndexedDBContentUpdated(const String& origin, const String& databaseName, const String& objectStoreName)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<IndexedDBContentUpdatedNotification> messageData = IndexedDBContentUpdatedNotification::Create()
        .SetOrigin(origin)
        .SetDatabaseName(databaseName)
        .SetObjectStoreName(objectStoreName)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Storage.indexedDBContentUpdated", std::move(messageData)));
}

void Frontend::IndexedDBListUpdated(const String& origin)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<IndexedDBListUpdatedNotification> messageData = IndexedDBListUpdatedNotification::Create()
        .SetOrigin(origin)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Storage.indexedDBListUpdated", std::move(messageData)));
}

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
        m_dispatchMap["Storage.clearDataForOrigin"] = &DispatcherImpl::clearDataForOrigin;
        m_dispatchMap["Storage.getUsageAndQuota"] = &DispatcherImpl::getUsageAndQuota;
        m_dispatchMap["Storage.trackCacheStorageForOrigin"] = &DispatcherImpl::trackCacheStorageForOrigin;
        m_dispatchMap["Storage.trackIndexedDBForOrigin"] = &DispatcherImpl::trackIndexedDBForOrigin;
        m_dispatchMap["Storage.untrackCacheStorageForOrigin"] = &DispatcherImpl::untrackCacheStorageForOrigin;
        m_dispatchMap["Storage.untrackIndexedDBForOrigin"] = &DispatcherImpl::untrackIndexedDBForOrigin;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status clearDataForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getUsageAndQuota(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status trackCacheStorageForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status trackIndexedDBForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status untrackCacheStorageForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status untrackIndexedDBForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


class ClearDataForOriginCallbackImpl : public Backend::ClearDataForOriginCallback, public DispatcherBase::Callback {
public:
    ClearDataForOriginCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::clearDataForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* originValue = object ? object->get("origin") : nullptr;
    errors->setName("origin");
    String in_origin = ValueConversions<String>::fromValue(originValue, errors);
    protocol::Value* storageTypesValue = object ? object->get("storageTypes") : nullptr;
    errors->setName("storageTypes");
    String in_storageTypes = ValueConversions<String>::fromValue(storageTypesValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<ClearDataForOriginCallbackImpl> callback(new ClearDataForOriginCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->ClearDataForOrigin(in_origin, in_storageTypes, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class GetUsageAndQuotaCallbackImpl : public Backend::GetUsageAndQuotaCallback, public DispatcherBase::Callback {
public:
    GetUsageAndQuotaCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(double usage, double quota, std::unique_ptr<protocol::Array<protocol::Storage::UsageForType>> usageBreakdown) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("usage", ValueConversions<double>::toValue(usage));
        resultObject->setValue("quota", ValueConversions<double>::toValue(quota));
        resultObject->setValue("usageBreakdown", ValueConversions<protocol::Array<protocol::Storage::UsageForType>>::toValue(usageBreakdown.get()));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::getUsageAndQuota(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* originValue = object ? object->get("origin") : nullptr;
    errors->setName("origin");
    String in_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<GetUsageAndQuotaCallbackImpl> callback(new GetUsageAndQuotaCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->GetUsageAndQuota(in_origin, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::trackCacheStorageForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* originValue = object ? object->get("origin") : nullptr;
    errors->setName("origin");
    String in_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->TrackCacheStorageForOrigin(in_origin);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::trackIndexedDBForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* originValue = object ? object->get("origin") : nullptr;
    errors->setName("origin");
    String in_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->TrackIndexedDBForOrigin(in_origin);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::untrackCacheStorageForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* originValue = object ? object->get("origin") : nullptr;
    errors->setName("origin");
    String in_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->UntrackCacheStorageForOrigin(in_origin);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::untrackIndexedDBForOrigin(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* originValue = object ? object->get("origin") : nullptr;
    errors->setName("origin");
    String in_origin = ValueConversions<String>::fromValue(originValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->UntrackIndexedDBForOrigin(in_origin);
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
    uber->registerBackend("Storage", std::move(dispatcher));
}

} // Storage
} // namespace content
} // namespace protocol