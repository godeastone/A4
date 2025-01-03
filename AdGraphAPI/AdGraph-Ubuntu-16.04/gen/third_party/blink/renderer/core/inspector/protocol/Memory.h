// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Memory_h
#define blink_protocol_Memory_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Memory {

// ------------- Forward and enum declarations.
class SamplingProfileNode;
class SamplingProfile;

// ------------- Type and builder declarations.

class CORE_EXPORT SamplingProfileNode : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingProfileNode);
public:
    static std::unique_ptr<SamplingProfileNode> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingProfileNode() override { }

    double getSize() { return m_size; }
    void setSize(double value) { m_size = value; }

    double getTotal() { return m_total; }
    void setTotal(double value) { m_total = value; }

    protocol::Array<String>* getStack() { return m_stack.get(); }
    void setStack(std::unique_ptr<protocol::Array<String>> value) { m_stack = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SamplingProfileNode> clone() const;

    template<int STATE>
    class SamplingProfileNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SizeSet = 1 << 1,
            TotalSet = 1 << 2,
            StackSet = 1 << 3,
            AllFieldsSet = (SizeSet | TotalSet | StackSet | 0)};


        SamplingProfileNodeBuilder<STATE | SizeSet>& setSize(double value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->setSize(value);
            return castState<SizeSet>();
        }

        SamplingProfileNodeBuilder<STATE | TotalSet>& setTotal(double value)
        {
            static_assert(!(STATE & TotalSet), "property total should not be set yet");
            m_result->setTotal(value);
            return castState<TotalSet>();
        }

        SamplingProfileNodeBuilder<STATE | StackSet>& setStack(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & StackSet), "property stack should not be set yet");
            m_result->setStack(std::move(value));
            return castState<StackSet>();
        }

        std::unique_ptr<SamplingProfileNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingProfileNode;
        SamplingProfileNodeBuilder() : m_result(new SamplingProfileNode()) { }

        template<int STEP> SamplingProfileNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingProfileNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Memory::SamplingProfileNode> m_result;
    };

    static SamplingProfileNodeBuilder<0> create()
    {
        return SamplingProfileNodeBuilder<0>();
    }

private:
    SamplingProfileNode()
    {
          m_size = 0;
          m_total = 0;
    }

    double m_size;
    double m_total;
    std::unique_ptr<protocol::Array<String>> m_stack;
};


class CORE_EXPORT SamplingProfile : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingProfile);
public:
    static std::unique_ptr<SamplingProfile> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingProfile() override { }

    protocol::Array<protocol::Memory::SamplingProfileNode>* getSamples() { return m_samples.get(); }
    void setSamples(std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> value) { m_samples = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SamplingProfile> clone() const;

    template<int STATE>
    class SamplingProfileBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SamplesSet = 1 << 1,
            AllFieldsSet = (SamplesSet | 0)};


        SamplingProfileBuilder<STATE | SamplesSet>& setSamples(std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> value)
        {
            static_assert(!(STATE & SamplesSet), "property samples should not be set yet");
            m_result->setSamples(std::move(value));
            return castState<SamplesSet>();
        }

        std::unique_ptr<SamplingProfile> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingProfile;
        SamplingProfileBuilder() : m_result(new SamplingProfile()) { }

        template<int STEP> SamplingProfileBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingProfileBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Memory::SamplingProfile> m_result;
    };

    static SamplingProfileBuilder<0> create()
    {
        return SamplingProfileBuilder<0>();
    }

private:
    SamplingProfile()
    {
    }

    std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> m_samples;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse getDOMCounters(int* out_documents, int* out_nodes, int* out_jsEventListeners) = 0;
    virtual DispatchResponse startSampling(Maybe<int> in_samplingInterval, Maybe<bool> in_suppressRandomness) = 0;
    virtual DispatchResponse stopSampling() = 0;
    virtual DispatchResponse getAllTimeSamplingProfile(std::unique_ptr<protocol::Memory::SamplingProfile>* out_profile) = 0;
    virtual DispatchResponse getSamplingProfile(std::unique_ptr<protocol::Memory::SamplingProfile>* out_profile) = 0;

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

} // namespace Memory
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Memory_h)
