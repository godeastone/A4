// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_HeadlessExperimental_h
#define headless_protocol_HeadlessExperimental_h

#include "headless/public/headless_export.h"
#include "headless/lib/browser/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "headless/lib/browser/protocol/dp_page.h"

namespace headless {
namespace protocol {
namespace HeadlessExperimental {

// ------------- Forward and enum declarations.
class ScreenshotParams;
class NeedsBeginFramesChangedNotification;

// ------------- Type and builder declarations.

class HEADLESS_EXPORT ScreenshotParams : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreenshotParams);
public:
    static std::unique_ptr<ScreenshotParams> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreenshotParams() override { }

    struct HEADLESS_EXPORT FormatEnum {
        static const char* Jpeg;
        static const char* Png;
    }; // FormatEnum

    bool HasFormat() { return m_format.isJust(); }
    String GetFormat(const String& defaultValue) { return m_format.isJust() ? m_format.fromJust() : defaultValue; }
    void SetFormat(const String& value) { m_format = value; }

    bool HasQuality() { return m_quality.isJust(); }
    int GetQuality(int defaultValue) { return m_quality.isJust() ? m_quality.fromJust() : defaultValue; }
    void SetQuality(int value) { m_quality = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ScreenshotParams> clone() const;

    template<int STATE>
    class ScreenshotParamsBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        ScreenshotParamsBuilder<STATE>& SetFormat(const String& value)
        {
            m_result->SetFormat(value);
            return *this;
        }

        ScreenshotParamsBuilder<STATE>& SetQuality(int value)
        {
            m_result->SetQuality(value);
            return *this;
        }

        std::unique_ptr<ScreenshotParams> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreenshotParams;
        ScreenshotParamsBuilder() : m_result(new ScreenshotParams()) { }

        template<int STEP> ScreenshotParamsBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreenshotParamsBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeadlessExperimental::ScreenshotParams> m_result;
    };

    static ScreenshotParamsBuilder<0> Create()
    {
        return ScreenshotParamsBuilder<0>();
    }

private:
    ScreenshotParams()
    {
    }

    Maybe<String> m_format;
    Maybe<int> m_quality;
};


class HEADLESS_EXPORT NeedsBeginFramesChangedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(NeedsBeginFramesChangedNotification);
public:
    static std::unique_ptr<NeedsBeginFramesChangedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~NeedsBeginFramesChangedNotification() override { }

    bool GetNeedsBeginFrames() { return m_needsBeginFrames; }
    void SetNeedsBeginFrames(bool value) { m_needsBeginFrames = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<NeedsBeginFramesChangedNotification> clone() const;

    template<int STATE>
    class NeedsBeginFramesChangedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NeedsBeginFramesSet = 1 << 1,
            AllFieldsSet = (NeedsBeginFramesSet | 0)};


        NeedsBeginFramesChangedNotificationBuilder<STATE | NeedsBeginFramesSet>& SetNeedsBeginFrames(bool value)
        {
            static_assert(!(STATE & NeedsBeginFramesSet), "property needsBeginFrames should not be set yet");
            m_result->SetNeedsBeginFrames(value);
            return castState<NeedsBeginFramesSet>();
        }

        std::unique_ptr<NeedsBeginFramesChangedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NeedsBeginFramesChangedNotification;
        NeedsBeginFramesChangedNotificationBuilder() : m_result(new NeedsBeginFramesChangedNotification()) { }

        template<int STEP> NeedsBeginFramesChangedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NeedsBeginFramesChangedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeadlessExperimental::NeedsBeginFramesChangedNotification> m_result;
    };

    static NeedsBeginFramesChangedNotificationBuilder<0> Create()
    {
        return NeedsBeginFramesChangedNotificationBuilder<0>();
    }

private:
    NeedsBeginFramesChangedNotification()
    {
          m_needsBeginFrames = false;
    }

    bool m_needsBeginFrames;
};


// ------------- Backend interface.

class HEADLESS_EXPORT Backend {
public:
    virtual ~Backend() { }

    class HEADLESS_EXPORT BeginFrameCallback {
    public:
        virtual void sendSuccess(bool hasDamage, Maybe<String> screenshotData) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~BeginFrameCallback() { }
    };
    virtual void BeginFrame(Maybe<double> in_frameTimeTicks, Maybe<double> in_interval, Maybe<bool> in_noDisplayUpdates, Maybe<protocol::HeadlessExperimental::ScreenshotParams> in_screenshot, std::unique_ptr<BeginFrameCallback> callback) = 0;
    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse Enable() = 0;

};

// ------------- Frontend interface.

class HEADLESS_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void NeedsBeginFramesChanged(bool needsBeginFrames);

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class HEADLESS_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class HEADLESS_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace HeadlessExperimental
} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_HeadlessExperimental_h)
