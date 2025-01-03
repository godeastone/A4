// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_CacheStorage_h
#define blink_protocol_CacheStorage_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace CacheStorage {

// ------------- Forward and enum declarations.
using CacheId = String;
class DataEntry;
class Cache;
class Header;
class CachedResponse;

// ------------- Type and builder declarations.

class CORE_EXPORT DataEntry : public Serializable{
    PROTOCOL_DISALLOW_COPY(DataEntry);
public:
    static std::unique_ptr<DataEntry> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~DataEntry() override { }

    String getRequestURL() { return m_requestURL; }
    void setRequestURL(const String& value) { m_requestURL = value; }

    String getRequestMethod() { return m_requestMethod; }
    void setRequestMethod(const String& value) { m_requestMethod = value; }

    protocol::Array<protocol::CacheStorage::Header>* getRequestHeaders() { return m_requestHeaders.get(); }
    void setRequestHeaders(std::unique_ptr<protocol::Array<protocol::CacheStorage::Header>> value) { m_requestHeaders = std::move(value); }

    double getResponseTime() { return m_responseTime; }
    void setResponseTime(double value) { m_responseTime = value; }

    int getResponseStatus() { return m_responseStatus; }
    void setResponseStatus(int value) { m_responseStatus = value; }

    String getResponseStatusText() { return m_responseStatusText; }
    void setResponseStatusText(const String& value) { m_responseStatusText = value; }

    protocol::Array<protocol::CacheStorage::Header>* getResponseHeaders() { return m_responseHeaders.get(); }
    void setResponseHeaders(std::unique_ptr<protocol::Array<protocol::CacheStorage::Header>> value) { m_responseHeaders = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<DataEntry> clone() const;

    template<int STATE>
    class DataEntryBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RequestURLSet = 1 << 1,
            RequestMethodSet = 1 << 2,
            RequestHeadersSet = 1 << 3,
            ResponseTimeSet = 1 << 4,
            ResponseStatusSet = 1 << 5,
            ResponseStatusTextSet = 1 << 6,
            ResponseHeadersSet = 1 << 7,
            AllFieldsSet = (RequestURLSet | RequestMethodSet | RequestHeadersSet | ResponseTimeSet | ResponseStatusSet | ResponseStatusTextSet | ResponseHeadersSet | 0)};


        DataEntryBuilder<STATE | RequestURLSet>& setRequestURL(const String& value)
        {
            static_assert(!(STATE & RequestURLSet), "property requestURL should not be set yet");
            m_result->setRequestURL(value);
            return castState<RequestURLSet>();
        }

        DataEntryBuilder<STATE | RequestMethodSet>& setRequestMethod(const String& value)
        {
            static_assert(!(STATE & RequestMethodSet), "property requestMethod should not be set yet");
            m_result->setRequestMethod(value);
            return castState<RequestMethodSet>();
        }

        DataEntryBuilder<STATE | RequestHeadersSet>& setRequestHeaders(std::unique_ptr<protocol::Array<protocol::CacheStorage::Header>> value)
        {
            static_assert(!(STATE & RequestHeadersSet), "property requestHeaders should not be set yet");
            m_result->setRequestHeaders(std::move(value));
            return castState<RequestHeadersSet>();
        }

        DataEntryBuilder<STATE | ResponseTimeSet>& setResponseTime(double value)
        {
            static_assert(!(STATE & ResponseTimeSet), "property responseTime should not be set yet");
            m_result->setResponseTime(value);
            return castState<ResponseTimeSet>();
        }

        DataEntryBuilder<STATE | ResponseStatusSet>& setResponseStatus(int value)
        {
            static_assert(!(STATE & ResponseStatusSet), "property responseStatus should not be set yet");
            m_result->setResponseStatus(value);
            return castState<ResponseStatusSet>();
        }

        DataEntryBuilder<STATE | ResponseStatusTextSet>& setResponseStatusText(const String& value)
        {
            static_assert(!(STATE & ResponseStatusTextSet), "property responseStatusText should not be set yet");
            m_result->setResponseStatusText(value);
            return castState<ResponseStatusTextSet>();
        }

        DataEntryBuilder<STATE | ResponseHeadersSet>& setResponseHeaders(std::unique_ptr<protocol::Array<protocol::CacheStorage::Header>> value)
        {
            static_assert(!(STATE & ResponseHeadersSet), "property responseHeaders should not be set yet");
            m_result->setResponseHeaders(std::move(value));
            return castState<ResponseHeadersSet>();
        }

        std::unique_ptr<DataEntry> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class DataEntry;
        DataEntryBuilder() : m_result(new DataEntry()) { }

        template<int STEP> DataEntryBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DataEntryBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CacheStorage::DataEntry> m_result;
    };

    static DataEntryBuilder<0> create()
    {
        return DataEntryBuilder<0>();
    }

private:
    DataEntry()
    {
          m_responseTime = 0;
          m_responseStatus = 0;
    }

    String m_requestURL;
    String m_requestMethod;
    std::unique_ptr<protocol::Array<protocol::CacheStorage::Header>> m_requestHeaders;
    double m_responseTime;
    int m_responseStatus;
    String m_responseStatusText;
    std::unique_ptr<protocol::Array<protocol::CacheStorage::Header>> m_responseHeaders;
};


class CORE_EXPORT Cache : public Serializable{
    PROTOCOL_DISALLOW_COPY(Cache);
public:
    static std::unique_ptr<Cache> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Cache() override { }

    String getCacheId() { return m_cacheId; }
    void setCacheId(const String& value) { m_cacheId = value; }

    String getSecurityOrigin() { return m_securityOrigin; }
    void setSecurityOrigin(const String& value) { m_securityOrigin = value; }

    String getCacheName() { return m_cacheName; }
    void setCacheName(const String& value) { m_cacheName = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Cache> clone() const;

    template<int STATE>
    class CacheBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            CacheIdSet = 1 << 1,
            SecurityOriginSet = 1 << 2,
            CacheNameSet = 1 << 3,
            AllFieldsSet = (CacheIdSet | SecurityOriginSet | CacheNameSet | 0)};


        CacheBuilder<STATE | CacheIdSet>& setCacheId(const String& value)
        {
            static_assert(!(STATE & CacheIdSet), "property cacheId should not be set yet");
            m_result->setCacheId(value);
            return castState<CacheIdSet>();
        }

        CacheBuilder<STATE | SecurityOriginSet>& setSecurityOrigin(const String& value)
        {
            static_assert(!(STATE & SecurityOriginSet), "property securityOrigin should not be set yet");
            m_result->setSecurityOrigin(value);
            return castState<SecurityOriginSet>();
        }

        CacheBuilder<STATE | CacheNameSet>& setCacheName(const String& value)
        {
            static_assert(!(STATE & CacheNameSet), "property cacheName should not be set yet");
            m_result->setCacheName(value);
            return castState<CacheNameSet>();
        }

        std::unique_ptr<Cache> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Cache;
        CacheBuilder() : m_result(new Cache()) { }

        template<int STEP> CacheBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CacheBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CacheStorage::Cache> m_result;
    };

    static CacheBuilder<0> create()
    {
        return CacheBuilder<0>();
    }

private:
    Cache()
    {
    }

    String m_cacheId;
    String m_securityOrigin;
    String m_cacheName;
};


class CORE_EXPORT Header : public Serializable{
    PROTOCOL_DISALLOW_COPY(Header);
public:
    static std::unique_ptr<Header> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Header() override { }

    String getName() { return m_name; }
    void setName(const String& value) { m_name = value; }

    String getValue() { return m_value; }
    void setValue(const String& value) { m_value = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Header> clone() const;

    template<int STATE>
    class HeaderBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            ValueSet = 1 << 2,
            AllFieldsSet = (NameSet | ValueSet | 0)};


        HeaderBuilder<STATE | NameSet>& setName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        HeaderBuilder<STATE | ValueSet>& setValue(const String& value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->setValue(value);
            return castState<ValueSet>();
        }

        std::unique_ptr<Header> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Header;
        HeaderBuilder() : m_result(new Header()) { }

        template<int STEP> HeaderBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<HeaderBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CacheStorage::Header> m_result;
    };

    static HeaderBuilder<0> create()
    {
        return HeaderBuilder<0>();
    }

private:
    Header()
    {
    }

    String m_name;
    String m_value;
};


class CORE_EXPORT CachedResponse : public Serializable{
    PROTOCOL_DISALLOW_COPY(CachedResponse);
public:
    static std::unique_ptr<CachedResponse> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CachedResponse() override { }

    String getBody() { return m_body; }
    void setBody(const String& value) { m_body = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CachedResponse> clone() const;

    template<int STATE>
    class CachedResponseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            BodySet = 1 << 1,
            AllFieldsSet = (BodySet | 0)};


        CachedResponseBuilder<STATE | BodySet>& setBody(const String& value)
        {
            static_assert(!(STATE & BodySet), "property body should not be set yet");
            m_result->setBody(value);
            return castState<BodySet>();
        }

        std::unique_ptr<CachedResponse> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CachedResponse;
        CachedResponseBuilder() : m_result(new CachedResponse()) { }

        template<int STEP> CachedResponseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CachedResponseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CacheStorage::CachedResponse> m_result;
    };

    static CachedResponseBuilder<0> create()
    {
        return CachedResponseBuilder<0>();
    }

private:
    CachedResponse()
    {
    }

    String m_body;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CORE_EXPORT DeleteCacheCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DeleteCacheCallback() { }
    };
    virtual void deleteCache(const String& in_cacheId, std::unique_ptr<DeleteCacheCallback> callback) = 0;
    class CORE_EXPORT DeleteEntryCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DeleteEntryCallback() { }
    };
    virtual void deleteEntry(const String& in_cacheId, const String& in_request, std::unique_ptr<DeleteEntryCallback> callback) = 0;
    class CORE_EXPORT RequestCacheNamesCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::CacheStorage::Cache>> caches) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~RequestCacheNamesCallback() { }
    };
    virtual void requestCacheNames(const String& in_securityOrigin, std::unique_ptr<RequestCacheNamesCallback> callback) = 0;
    class CORE_EXPORT RequestCachedResponseCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::CacheStorage::CachedResponse> response) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~RequestCachedResponseCallback() { }
    };
    virtual void requestCachedResponse(const String& in_cacheId, const String& in_requestURL, std::unique_ptr<RequestCachedResponseCallback> callback) = 0;
    class CORE_EXPORT RequestEntriesCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::CacheStorage::DataEntry>> cacheDataEntries, bool hasMore) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~RequestEntriesCallback() { }
    };
    virtual void requestEntries(const String& in_cacheId, int in_skipCount, int in_pageSize, std::unique_ptr<RequestEntriesCallback> callback) = 0;

    virtual DispatchResponse disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace CacheStorage
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_CacheStorage_h)
