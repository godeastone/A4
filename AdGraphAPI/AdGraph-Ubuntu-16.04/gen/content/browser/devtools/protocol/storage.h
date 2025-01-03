// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Storage_h
#define content_protocol_Storage_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Storage {

// ------------- Forward and enum declarations.
using StorageType = String;
class UsageForType;
class CacheStorageContentUpdatedNotification;
class CacheStorageListUpdatedNotification;
class IndexedDBContentUpdatedNotification;
class IndexedDBListUpdatedNotification;

namespace StorageTypeEnum {
CONTENT_EXPORT extern const char Appcache[];
CONTENT_EXPORT extern const char Cookies[];
CONTENT_EXPORT extern const char File_systems[];
CONTENT_EXPORT extern const char Indexeddb[];
CONTENT_EXPORT extern const char Local_storage[];
CONTENT_EXPORT extern const char Shader_cache[];
CONTENT_EXPORT extern const char Websql[];
CONTENT_EXPORT extern const char Service_workers[];
CONTENT_EXPORT extern const char Cache_storage[];
CONTENT_EXPORT extern const char All[];
CONTENT_EXPORT extern const char Other[];
} // namespace StorageTypeEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT UsageForType : public Serializable{
    PROTOCOL_DISALLOW_COPY(UsageForType);
public:
    static std::unique_ptr<UsageForType> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~UsageForType() override { }

    String GetStorageType() { return m_storageType; }
    void SetStorageType(const String& value) { m_storageType = value; }

    double GetUsage() { return m_usage; }
    void SetUsage(double value) { m_usage = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<UsageForType> clone() const;

    template<int STATE>
    class UsageForTypeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StorageTypeSet = 1 << 1,
            UsageSet = 1 << 2,
            AllFieldsSet = (StorageTypeSet | UsageSet | 0)};


        UsageForTypeBuilder<STATE | StorageTypeSet>& SetStorageType(const String& value)
        {
            static_assert(!(STATE & StorageTypeSet), "property storageType should not be set yet");
            m_result->SetStorageType(value);
            return castState<StorageTypeSet>();
        }

        UsageForTypeBuilder<STATE | UsageSet>& SetUsage(double value)
        {
            static_assert(!(STATE & UsageSet), "property usage should not be set yet");
            m_result->SetUsage(value);
            return castState<UsageSet>();
        }

        std::unique_ptr<UsageForType> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class UsageForType;
        UsageForTypeBuilder() : m_result(new UsageForType()) { }

        template<int STEP> UsageForTypeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<UsageForTypeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Storage::UsageForType> m_result;
    };

    static UsageForTypeBuilder<0> Create()
    {
        return UsageForTypeBuilder<0>();
    }

private:
    UsageForType()
    {
          m_usage = 0;
    }

    String m_storageType;
    double m_usage;
};


class CONTENT_EXPORT CacheStorageContentUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(CacheStorageContentUpdatedNotification);
public:
    static std::unique_ptr<CacheStorageContentUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CacheStorageContentUpdatedNotification() override { }

    String GetOrigin() { return m_origin; }
    void SetOrigin(const String& value) { m_origin = value; }

    String GetCacheName() { return m_cacheName; }
    void SetCacheName(const String& value) { m_cacheName = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CacheStorageContentUpdatedNotification> clone() const;

    template<int STATE>
    class CacheStorageContentUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OriginSet = 1 << 1,
            CacheNameSet = 1 << 2,
            AllFieldsSet = (OriginSet | CacheNameSet | 0)};


        CacheStorageContentUpdatedNotificationBuilder<STATE | OriginSet>& SetOrigin(const String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->SetOrigin(value);
            return castState<OriginSet>();
        }

        CacheStorageContentUpdatedNotificationBuilder<STATE | CacheNameSet>& SetCacheName(const String& value)
        {
            static_assert(!(STATE & CacheNameSet), "property cacheName should not be set yet");
            m_result->SetCacheName(value);
            return castState<CacheNameSet>();
        }

        std::unique_ptr<CacheStorageContentUpdatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CacheStorageContentUpdatedNotification;
        CacheStorageContentUpdatedNotificationBuilder() : m_result(new CacheStorageContentUpdatedNotification()) { }

        template<int STEP> CacheStorageContentUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CacheStorageContentUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Storage::CacheStorageContentUpdatedNotification> m_result;
    };

    static CacheStorageContentUpdatedNotificationBuilder<0> Create()
    {
        return CacheStorageContentUpdatedNotificationBuilder<0>();
    }

private:
    CacheStorageContentUpdatedNotification()
    {
    }

    String m_origin;
    String m_cacheName;
};


class CONTENT_EXPORT CacheStorageListUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(CacheStorageListUpdatedNotification);
public:
    static std::unique_ptr<CacheStorageListUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CacheStorageListUpdatedNotification() override { }

    String GetOrigin() { return m_origin; }
    void SetOrigin(const String& value) { m_origin = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CacheStorageListUpdatedNotification> clone() const;

    template<int STATE>
    class CacheStorageListUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OriginSet = 1 << 1,
            AllFieldsSet = (OriginSet | 0)};


        CacheStorageListUpdatedNotificationBuilder<STATE | OriginSet>& SetOrigin(const String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->SetOrigin(value);
            return castState<OriginSet>();
        }

        std::unique_ptr<CacheStorageListUpdatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CacheStorageListUpdatedNotification;
        CacheStorageListUpdatedNotificationBuilder() : m_result(new CacheStorageListUpdatedNotification()) { }

        template<int STEP> CacheStorageListUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CacheStorageListUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Storage::CacheStorageListUpdatedNotification> m_result;
    };

    static CacheStorageListUpdatedNotificationBuilder<0> Create()
    {
        return CacheStorageListUpdatedNotificationBuilder<0>();
    }

private:
    CacheStorageListUpdatedNotification()
    {
    }

    String m_origin;
};


class CONTENT_EXPORT IndexedDBContentUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(IndexedDBContentUpdatedNotification);
public:
    static std::unique_ptr<IndexedDBContentUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~IndexedDBContentUpdatedNotification() override { }

    String GetOrigin() { return m_origin; }
    void SetOrigin(const String& value) { m_origin = value; }

    String GetDatabaseName() { return m_databaseName; }
    void SetDatabaseName(const String& value) { m_databaseName = value; }

    String GetObjectStoreName() { return m_objectStoreName; }
    void SetObjectStoreName(const String& value) { m_objectStoreName = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<IndexedDBContentUpdatedNotification> clone() const;

    template<int STATE>
    class IndexedDBContentUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OriginSet = 1 << 1,
            DatabaseNameSet = 1 << 2,
            ObjectStoreNameSet = 1 << 3,
            AllFieldsSet = (OriginSet | DatabaseNameSet | ObjectStoreNameSet | 0)};


        IndexedDBContentUpdatedNotificationBuilder<STATE | OriginSet>& SetOrigin(const String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->SetOrigin(value);
            return castState<OriginSet>();
        }

        IndexedDBContentUpdatedNotificationBuilder<STATE | DatabaseNameSet>& SetDatabaseName(const String& value)
        {
            static_assert(!(STATE & DatabaseNameSet), "property databaseName should not be set yet");
            m_result->SetDatabaseName(value);
            return castState<DatabaseNameSet>();
        }

        IndexedDBContentUpdatedNotificationBuilder<STATE | ObjectStoreNameSet>& SetObjectStoreName(const String& value)
        {
            static_assert(!(STATE & ObjectStoreNameSet), "property objectStoreName should not be set yet");
            m_result->SetObjectStoreName(value);
            return castState<ObjectStoreNameSet>();
        }

        std::unique_ptr<IndexedDBContentUpdatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class IndexedDBContentUpdatedNotification;
        IndexedDBContentUpdatedNotificationBuilder() : m_result(new IndexedDBContentUpdatedNotification()) { }

        template<int STEP> IndexedDBContentUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<IndexedDBContentUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Storage::IndexedDBContentUpdatedNotification> m_result;
    };

    static IndexedDBContentUpdatedNotificationBuilder<0> Create()
    {
        return IndexedDBContentUpdatedNotificationBuilder<0>();
    }

private:
    IndexedDBContentUpdatedNotification()
    {
    }

    String m_origin;
    String m_databaseName;
    String m_objectStoreName;
};


class CONTENT_EXPORT IndexedDBListUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(IndexedDBListUpdatedNotification);
public:
    static std::unique_ptr<IndexedDBListUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~IndexedDBListUpdatedNotification() override { }

    String GetOrigin() { return m_origin; }
    void SetOrigin(const String& value) { m_origin = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<IndexedDBListUpdatedNotification> clone() const;

    template<int STATE>
    class IndexedDBListUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OriginSet = 1 << 1,
            AllFieldsSet = (OriginSet | 0)};


        IndexedDBListUpdatedNotificationBuilder<STATE | OriginSet>& SetOrigin(const String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->SetOrigin(value);
            return castState<OriginSet>();
        }

        std::unique_ptr<IndexedDBListUpdatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class IndexedDBListUpdatedNotification;
        IndexedDBListUpdatedNotificationBuilder() : m_result(new IndexedDBListUpdatedNotification()) { }

        template<int STEP> IndexedDBListUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<IndexedDBListUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Storage::IndexedDBListUpdatedNotification> m_result;
    };

    static IndexedDBListUpdatedNotificationBuilder<0> Create()
    {
        return IndexedDBListUpdatedNotificationBuilder<0>();
    }

private:
    IndexedDBListUpdatedNotification()
    {
    }

    String m_origin;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CONTENT_EXPORT ClearDataForOriginCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~ClearDataForOriginCallback() { }
    };
    virtual void ClearDataForOrigin(const String& in_origin, const String& in_storageTypes, std::unique_ptr<ClearDataForOriginCallback> callback) = 0;
    class CONTENT_EXPORT GetUsageAndQuotaCallback {
    public:
        virtual void sendSuccess(double usage, double quota, std::unique_ptr<protocol::Array<protocol::Storage::UsageForType>> usageBreakdown) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetUsageAndQuotaCallback() { }
    };
    virtual void GetUsageAndQuota(const String& in_origin, std::unique_ptr<GetUsageAndQuotaCallback> callback) = 0;
    virtual DispatchResponse TrackCacheStorageForOrigin(const String& in_origin) = 0;
    virtual DispatchResponse TrackIndexedDBForOrigin(const String& in_origin) = 0;
    virtual DispatchResponse UntrackCacheStorageForOrigin(const String& in_origin) = 0;
    virtual DispatchResponse UntrackIndexedDBForOrigin(const String& in_origin) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void CacheStorageContentUpdated(const String& origin, const String& cacheName);
    void CacheStorageListUpdated(const String& origin);
    void IndexedDBContentUpdated(const String& origin, const String& databaseName, const String& objectStoreName);
    void IndexedDBListUpdated(const String& origin);

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

} // namespace Storage
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Storage_h)
