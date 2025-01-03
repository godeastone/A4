// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Memory_h
#define content_protocol_Memory_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Memory {

// ------------- Forward and enum declarations.
using PressureLevel = String;
class SamplingProfileNode;
class SamplingProfile;

namespace PressureLevelEnum {
CONTENT_EXPORT extern const char Moderate[];
CONTENT_EXPORT extern const char Critical[];
} // namespace PressureLevelEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT SamplingProfileNode : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingProfileNode);
public:
    static std::unique_ptr<SamplingProfileNode> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingProfileNode() override { }

    double GetSize() { return m_size; }
    void SetSize(double value) { m_size = value; }

    double GetTotal() { return m_total; }
    void SetTotal(double value) { m_total = value; }

    protocol::Array<String>* GetStack() { return m_stack.get(); }
    void SetStack(std::unique_ptr<protocol::Array<String>> value) { m_stack = std::move(value); }

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


        SamplingProfileNodeBuilder<STATE | SizeSet>& SetSize(double value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->SetSize(value);
            return castState<SizeSet>();
        }

        SamplingProfileNodeBuilder<STATE | TotalSet>& SetTotal(double value)
        {
            static_assert(!(STATE & TotalSet), "property total should not be set yet");
            m_result->SetTotal(value);
            return castState<TotalSet>();
        }

        SamplingProfileNodeBuilder<STATE | StackSet>& SetStack(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & StackSet), "property stack should not be set yet");
            m_result->SetStack(std::move(value));
            return castState<StackSet>();
        }

        std::unique_ptr<SamplingProfileNode> Build()
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

    static SamplingProfileNodeBuilder<0> Create()
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


class CONTENT_EXPORT SamplingProfile : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingProfile);
public:
    static std::unique_ptr<SamplingProfile> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingProfile() override { }

    protocol::Array<protocol::Memory::SamplingProfileNode>* GetSamples() { return m_samples.get(); }
    void SetSamples(std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> value) { m_samples = std::move(value); }

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


        SamplingProfileBuilder<STATE | SamplesSet>& SetSamples(std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> value)
        {
            static_assert(!(STATE & SamplesSet), "property samples should not be set yet");
            m_result->SetSamples(std::move(value));
            return castState<SamplesSet>();
        }

        std::unique_ptr<SamplingProfile> Build()
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

    static SamplingProfileBuilder<0> Create()
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

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CONTENT_EXPORT PrepareForLeakDetectionCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~PrepareForLeakDetectionCallback() { }
    };
    virtual void PrepareForLeakDetection(std::unique_ptr<PrepareForLeakDetectionCallback> callback) = 0;
    virtual DispatchResponse SetPressureNotificationsSuppressed(bool in_suppressed) = 0;
    virtual DispatchResponse SimulatePressureNotification(const String& in_level) = 0;
    virtual DispatchResponse GetBrowserSamplingProfile(std::unique_ptr<protocol::Memory::SamplingProfile>* out_profile) = 0;

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

} // namespace Memory
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Memory_h)
