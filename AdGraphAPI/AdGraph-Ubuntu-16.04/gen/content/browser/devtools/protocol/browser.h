// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Browser_h
#define content_protocol_Browser_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Browser {

// ------------- Forward and enum declarations.
class Bucket;
class Histogram;

// ------------- Type and builder declarations.

class CONTENT_EXPORT Bucket : public Serializable{
    PROTOCOL_DISALLOW_COPY(Bucket);
public:
    static std::unique_ptr<Bucket> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Bucket() override { }

    int GetLow() { return m_low; }
    void SetLow(int value) { m_low = value; }

    int GetHigh() { return m_high; }
    void SetHigh(int value) { m_high = value; }

    int GetCount() { return m_count; }
    void SetCount(int value) { m_count = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Bucket> clone() const;

    template<int STATE>
    class BucketBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            LowSet = 1 << 1,
            HighSet = 1 << 2,
            CountSet = 1 << 3,
            AllFieldsSet = (LowSet | HighSet | CountSet | 0)};


        BucketBuilder<STATE | LowSet>& SetLow(int value)
        {
            static_assert(!(STATE & LowSet), "property low should not be set yet");
            m_result->SetLow(value);
            return castState<LowSet>();
        }

        BucketBuilder<STATE | HighSet>& SetHigh(int value)
        {
            static_assert(!(STATE & HighSet), "property high should not be set yet");
            m_result->SetHigh(value);
            return castState<HighSet>();
        }

        BucketBuilder<STATE | CountSet>& SetCount(int value)
        {
            static_assert(!(STATE & CountSet), "property count should not be set yet");
            m_result->SetCount(value);
            return castState<CountSet>();
        }

        std::unique_ptr<Bucket> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Bucket;
        BucketBuilder() : m_result(new Bucket()) { }

        template<int STEP> BucketBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<BucketBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Browser::Bucket> m_result;
    };

    static BucketBuilder<0> Create()
    {
        return BucketBuilder<0>();
    }

private:
    Bucket()
    {
          m_low = 0;
          m_high = 0;
          m_count = 0;
    }

    int m_low;
    int m_high;
    int m_count;
};


class CONTENT_EXPORT Histogram : public Serializable{
    PROTOCOL_DISALLOW_COPY(Histogram);
public:
    static std::unique_ptr<Histogram> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Histogram() override { }

    String GetName() { return m_name; }
    void SetName(const String& value) { m_name = value; }

    int GetSum() { return m_sum; }
    void SetSum(int value) { m_sum = value; }

    int GetCount() { return m_count; }
    void SetCount(int value) { m_count = value; }

    protocol::Array<protocol::Browser::Bucket>* GetBuckets() { return m_buckets.get(); }
    void SetBuckets(std::unique_ptr<protocol::Array<protocol::Browser::Bucket>> value) { m_buckets = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Histogram> clone() const;

    template<int STATE>
    class HistogramBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            SumSet = 1 << 2,
            CountSet = 1 << 3,
            BucketsSet = 1 << 4,
            AllFieldsSet = (NameSet | SumSet | CountSet | BucketsSet | 0)};


        HistogramBuilder<STATE | NameSet>& SetName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->SetName(value);
            return castState<NameSet>();
        }

        HistogramBuilder<STATE | SumSet>& SetSum(int value)
        {
            static_assert(!(STATE & SumSet), "property sum should not be set yet");
            m_result->SetSum(value);
            return castState<SumSet>();
        }

        HistogramBuilder<STATE | CountSet>& SetCount(int value)
        {
            static_assert(!(STATE & CountSet), "property count should not be set yet");
            m_result->SetCount(value);
            return castState<CountSet>();
        }

        HistogramBuilder<STATE | BucketsSet>& SetBuckets(std::unique_ptr<protocol::Array<protocol::Browser::Bucket>> value)
        {
            static_assert(!(STATE & BucketsSet), "property buckets should not be set yet");
            m_result->SetBuckets(std::move(value));
            return castState<BucketsSet>();
        }

        std::unique_ptr<Histogram> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Histogram;
        HistogramBuilder() : m_result(new Histogram()) { }

        template<int STEP> HistogramBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<HistogramBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Browser::Histogram> m_result;
    };

    static HistogramBuilder<0> Create()
    {
        return HistogramBuilder<0>();
    }

private:
    Histogram()
    {
          m_sum = 0;
          m_count = 0;
    }

    String m_name;
    int m_sum;
    int m_count;
    std::unique_ptr<protocol::Array<protocol::Browser::Bucket>> m_buckets;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse GetVersion(String* out_protocolVersion, String* out_product, String* out_revision, String* out_userAgent, String* out_jsVersion) = 0;
    virtual DispatchResponse GetBrowserCommandLine(std::unique_ptr<protocol::Array<String>>* out_arguments) = 0;
    virtual DispatchResponse GetHistograms(Maybe<String> in_query, std::unique_ptr<protocol::Array<protocol::Browser::Histogram>>* out_histograms) = 0;
    virtual DispatchResponse GetHistogram(const String& in_name, std::unique_ptr<protocol::Browser::Histogram>* out_histogram) = 0;

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

} // namespace Browser
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Browser_h)
