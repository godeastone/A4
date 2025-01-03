// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/IndexedDB.h"

#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"

namespace blink {
namespace protocol {
namespace IndexedDB {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "IndexedDB";
const char Metainfo::commandPrefix[] = "IndexedDB.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<DatabaseWithObjectStores> DatabaseWithObjectStores::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DatabaseWithObjectStores> result(new DatabaseWithObjectStores());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* versionValue = object->get("version");
    errors->setName("version");
    result->m_version = ValueConversions<int>::fromValue(versionValue, errors);
    protocol::Value* objectStoresValue = object->get("objectStores");
    errors->setName("objectStores");
    result->m_objectStores = ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStore>>::fromValue(objectStoresValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DatabaseWithObjectStores::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("version", ValueConversions<int>::toValue(m_version));
    result->setValue("objectStores", ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStore>>::toValue(m_objectStores.get()));
    return result;
}

std::unique_ptr<DatabaseWithObjectStores> DatabaseWithObjectStores::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ObjectStore> ObjectStore::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ObjectStore> result(new ObjectStore());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* keyPathValue = object->get("keyPath");
    errors->setName("keyPath");
    result->m_keyPath = ValueConversions<protocol::IndexedDB::KeyPath>::fromValue(keyPathValue, errors);
    protocol::Value* autoIncrementValue = object->get("autoIncrement");
    errors->setName("autoIncrement");
    result->m_autoIncrement = ValueConversions<bool>::fromValue(autoIncrementValue, errors);
    protocol::Value* indexesValue = object->get("indexes");
    errors->setName("indexes");
    result->m_indexes = ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStoreIndex>>::fromValue(indexesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ObjectStore::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("keyPath", ValueConversions<protocol::IndexedDB::KeyPath>::toValue(m_keyPath.get()));
    result->setValue("autoIncrement", ValueConversions<bool>::toValue(m_autoIncrement));
    result->setValue("indexes", ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStoreIndex>>::toValue(m_indexes.get()));
    return result;
}

std::unique_ptr<ObjectStore> ObjectStore::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ObjectStoreIndex> ObjectStoreIndex::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ObjectStoreIndex> result(new ObjectStoreIndex());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<String>::fromValue(nameValue, errors);
    protocol::Value* keyPathValue = object->get("keyPath");
    errors->setName("keyPath");
    result->m_keyPath = ValueConversions<protocol::IndexedDB::KeyPath>::fromValue(keyPathValue, errors);
    protocol::Value* uniqueValue = object->get("unique");
    errors->setName("unique");
    result->m_unique = ValueConversions<bool>::fromValue(uniqueValue, errors);
    protocol::Value* multiEntryValue = object->get("multiEntry");
    errors->setName("multiEntry");
    result->m_multiEntry = ValueConversions<bool>::fromValue(multiEntryValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ObjectStoreIndex::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<String>::toValue(m_name));
    result->setValue("keyPath", ValueConversions<protocol::IndexedDB::KeyPath>::toValue(m_keyPath.get()));
    result->setValue("unique", ValueConversions<bool>::toValue(m_unique));
    result->setValue("multiEntry", ValueConversions<bool>::toValue(m_multiEntry));
    return result;
}

std::unique_ptr<ObjectStoreIndex> ObjectStoreIndex::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

const char* Key::TypeEnum::Number = "number";
const char* Key::TypeEnum::String = "string";
const char* Key::TypeEnum::Date = "date";
const char* Key::TypeEnum::Array = "array";

std::unique_ptr<Key> Key::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Key> result(new Key());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* numberValue = object->get("number");
    if (numberValue) {
        errors->setName("number");
        result->m_number = ValueConversions<double>::fromValue(numberValue, errors);
    }
    protocol::Value* stringValue = object->get("string");
    if (stringValue) {
        errors->setName("string");
        result->m_string = ValueConversions<String>::fromValue(stringValue, errors);
    }
    protocol::Value* dateValue = object->get("date");
    if (dateValue) {
        errors->setName("date");
        result->m_date = ValueConversions<double>::fromValue(dateValue, errors);
    }
    protocol::Value* arrayValue = object->get("array");
    if (arrayValue) {
        errors->setName("array");
        result->m_array = ValueConversions<protocol::Array<protocol::IndexedDB::Key>>::fromValue(arrayValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Key::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    if (m_number.isJust())
        result->setValue("number", ValueConversions<double>::toValue(m_number.fromJust()));
    if (m_string.isJust())
        result->setValue("string", ValueConversions<String>::toValue(m_string.fromJust()));
    if (m_date.isJust())
        result->setValue("date", ValueConversions<double>::toValue(m_date.fromJust()));
    if (m_array.isJust())
        result->setValue("array", ValueConversions<protocol::Array<protocol::IndexedDB::Key>>::toValue(m_array.fromJust()));
    return result;
}

std::unique_ptr<Key> Key::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<KeyRange> KeyRange::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyRange> result(new KeyRange());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* lowerValue = object->get("lower");
    if (lowerValue) {
        errors->setName("lower");
        result->m_lower = ValueConversions<protocol::IndexedDB::Key>::fromValue(lowerValue, errors);
    }
    protocol::Value* upperValue = object->get("upper");
    if (upperValue) {
        errors->setName("upper");
        result->m_upper = ValueConversions<protocol::IndexedDB::Key>::fromValue(upperValue, errors);
    }
    protocol::Value* lowerOpenValue = object->get("lowerOpen");
    errors->setName("lowerOpen");
    result->m_lowerOpen = ValueConversions<bool>::fromValue(lowerOpenValue, errors);
    protocol::Value* upperOpenValue = object->get("upperOpen");
    errors->setName("upperOpen");
    result->m_upperOpen = ValueConversions<bool>::fromValue(upperOpenValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyRange::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_lower.isJust())
        result->setValue("lower", ValueConversions<protocol::IndexedDB::Key>::toValue(m_lower.fromJust()));
    if (m_upper.isJust())
        result->setValue("upper", ValueConversions<protocol::IndexedDB::Key>::toValue(m_upper.fromJust()));
    result->setValue("lowerOpen", ValueConversions<bool>::toValue(m_lowerOpen));
    result->setValue("upperOpen", ValueConversions<bool>::toValue(m_upperOpen));
    return result;
}

std::unique_ptr<KeyRange> KeyRange::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<DataEntry> DataEntry::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DataEntry> result(new DataEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* keyValue = object->get("key");
    errors->setName("key");
    result->m_key = ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::fromValue(keyValue, errors);
    protocol::Value* primaryKeyValue = object->get("primaryKey");
    errors->setName("primaryKey");
    result->m_primaryKey = ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::fromValue(primaryKeyValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::fromValue(valueValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DataEntry::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("key", ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::toValue(m_key.get()));
    result->setValue("primaryKey", ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::toValue(m_primaryKey.get()));
    result->setValue("value", ValueConversions<v8_inspector::protocol::Runtime::API::RemoteObject>::toValue(m_value.get()));
    return result;
}

std::unique_ptr<DataEntry> DataEntry::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

const char* KeyPath::TypeEnum::Null = "null";
const char* KeyPath::TypeEnum::String = "string";
const char* KeyPath::TypeEnum::Array = "array";

std::unique_ptr<KeyPath> KeyPath::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyPath> result(new KeyPath());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* stringValue = object->get("string");
    if (stringValue) {
        errors->setName("string");
        result->m_string = ValueConversions<String>::fromValue(stringValue, errors);
    }
    protocol::Value* arrayValue = object->get("array");
    if (arrayValue) {
        errors->setName("array");
        result->m_array = ValueConversions<protocol::Array<String>>::fromValue(arrayValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyPath::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    if (m_string.isJust())
        result->setValue("string", ValueConversions<String>::toValue(m_string.fromJust()));
    if (m_array.isJust())
        result->setValue("array", ValueConversions<protocol::Array<String>>::toValue(m_array.fromJust()));
    return result;
}

std::unique_ptr<KeyPath> KeyPath::clone() const
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
        m_dispatchMap["IndexedDB.clearObjectStore"] = &DispatcherImpl::clearObjectStore;
        m_dispatchMap["IndexedDB.deleteDatabase"] = &DispatcherImpl::deleteDatabase;
        m_dispatchMap["IndexedDB.deleteObjectStoreEntries"] = &DispatcherImpl::deleteObjectStoreEntries;
        m_dispatchMap["IndexedDB.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["IndexedDB.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["IndexedDB.requestData"] = &DispatcherImpl::requestData;
        m_dispatchMap["IndexedDB.requestDatabase"] = &DispatcherImpl::requestDatabase;
        m_dispatchMap["IndexedDB.requestDatabaseNames"] = &DispatcherImpl::requestDatabaseNames;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status clearObjectStore(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status deleteDatabase(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status deleteObjectStoreEntries(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status requestData(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status requestDatabase(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status requestDatabaseNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


class ClearObjectStoreCallbackImpl : public Backend::ClearObjectStoreCallback, public DispatcherBase::Callback {
public:
    ClearObjectStoreCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
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

DispatchResponse::Status DispatcherImpl::clearObjectStore(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    String in_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    String in_databaseName = ValueConversions<String>::fromValue(databaseNameValue, errors);
    protocol::Value* objectStoreNameValue = object ? object->get("objectStoreName") : nullptr;
    errors->setName("objectStoreName");
    String in_objectStoreName = ValueConversions<String>::fromValue(objectStoreNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<ClearObjectStoreCallbackImpl> callback(new ClearObjectStoreCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->clearObjectStore(in_securityOrigin, in_databaseName, in_objectStoreName, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class DeleteDatabaseCallbackImpl : public Backend::DeleteDatabaseCallback, public DispatcherBase::Callback {
public:
    DeleteDatabaseCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
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

DispatchResponse::Status DispatcherImpl::deleteDatabase(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    String in_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    String in_databaseName = ValueConversions<String>::fromValue(databaseNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<DeleteDatabaseCallbackImpl> callback(new DeleteDatabaseCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->deleteDatabase(in_securityOrigin, in_databaseName, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class DeleteObjectStoreEntriesCallbackImpl : public Backend::DeleteObjectStoreEntriesCallback, public DispatcherBase::Callback {
public:
    DeleteObjectStoreEntriesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
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

DispatchResponse::Status DispatcherImpl::deleteObjectStoreEntries(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    String in_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    String in_databaseName = ValueConversions<String>::fromValue(databaseNameValue, errors);
    protocol::Value* objectStoreNameValue = object ? object->get("objectStoreName") : nullptr;
    errors->setName("objectStoreName");
    String in_objectStoreName = ValueConversions<String>::fromValue(objectStoreNameValue, errors);
    protocol::Value* keyRangeValue = object ? object->get("keyRange") : nullptr;
    errors->setName("keyRange");
    std::unique_ptr<protocol::IndexedDB::KeyRange> in_keyRange = ValueConversions<protocol::IndexedDB::KeyRange>::fromValue(keyRangeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<DeleteObjectStoreEntriesCallbackImpl> callback(new DeleteObjectStoreEntriesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->deleteObjectStoreEntries(in_securityOrigin, in_databaseName, in_objectStoreName, std::move(in_keyRange), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->disable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

class RequestDataCallbackImpl : public Backend::RequestDataCallback, public DispatcherBase::Callback {
public:
    RequestDataCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::IndexedDB::DataEntry>> objectStoreDataEntries, bool hasMore) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("objectStoreDataEntries", ValueConversions<protocol::Array<protocol::IndexedDB::DataEntry>>::toValue(objectStoreDataEntries.get()));
        resultObject->setValue("hasMore", ValueConversions<bool>::toValue(hasMore));
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

DispatchResponse::Status DispatcherImpl::requestData(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    String in_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    String in_databaseName = ValueConversions<String>::fromValue(databaseNameValue, errors);
    protocol::Value* objectStoreNameValue = object ? object->get("objectStoreName") : nullptr;
    errors->setName("objectStoreName");
    String in_objectStoreName = ValueConversions<String>::fromValue(objectStoreNameValue, errors);
    protocol::Value* indexNameValue = object ? object->get("indexName") : nullptr;
    errors->setName("indexName");
    String in_indexName = ValueConversions<String>::fromValue(indexNameValue, errors);
    protocol::Value* skipCountValue = object ? object->get("skipCount") : nullptr;
    errors->setName("skipCount");
    int in_skipCount = ValueConversions<int>::fromValue(skipCountValue, errors);
    protocol::Value* pageSizeValue = object ? object->get("pageSize") : nullptr;
    errors->setName("pageSize");
    int in_pageSize = ValueConversions<int>::fromValue(pageSizeValue, errors);
    protocol::Value* keyRangeValue = object ? object->get("keyRange") : nullptr;
    Maybe<protocol::IndexedDB::KeyRange> in_keyRange;
    if (keyRangeValue) {
        errors->setName("keyRange");
        in_keyRange = ValueConversions<protocol::IndexedDB::KeyRange>::fromValue(keyRangeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<RequestDataCallbackImpl> callback(new RequestDataCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->requestData(in_securityOrigin, in_databaseName, in_objectStoreName, in_indexName, in_skipCount, in_pageSize, std::move(in_keyRange), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class RequestDatabaseCallbackImpl : public Backend::RequestDatabaseCallback, public DispatcherBase::Callback {
public:
    RequestDatabaseCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(std::unique_ptr<protocol::IndexedDB::DatabaseWithObjectStores> databaseWithObjectStores) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("databaseWithObjectStores", ValueConversions<protocol::IndexedDB::DatabaseWithObjectStores>::toValue(databaseWithObjectStores.get()));
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

DispatchResponse::Status DispatcherImpl::requestDatabase(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    String in_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    String in_databaseName = ValueConversions<String>::fromValue(databaseNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<RequestDatabaseCallbackImpl> callback(new RequestDatabaseCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->requestDatabase(in_securityOrigin, in_databaseName, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

class RequestDatabaseNamesCallbackImpl : public Backend::RequestDatabaseNamesCallback, public DispatcherBase::Callback {
public:
    RequestDatabaseNamesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<String>> databaseNames) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("databaseNames", ValueConversions<protocol::Array<String>>::toValue(databaseNames.get()));
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

DispatchResponse::Status DispatcherImpl::requestDatabaseNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    String in_securityOrigin = ValueConversions<String>::fromValue(securityOriginValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<RequestDatabaseNamesCallbackImpl> callback(new RequestDatabaseNamesCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->requestDatabaseNames(in_securityOrigin, std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("IndexedDB", std::move(dispatcher));
}

} // IndexedDB
} // namespace blink
} // namespace protocol
