// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_Emulation_h
#define blink_protocol_Emulation_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "third_party/blink/renderer/core/inspector/protocol/DOM.h"
#include "third_party/blink/renderer/core/inspector/protocol/Page.h"
#include "third_party/blink/renderer/core/inspector/protocol/Runtime.h"

namespace blink {
namespace protocol {
namespace Emulation {

// ------------- Forward and enum declarations.
class ScreenOrientation;
using VirtualTimePolicy = String;
class VirtualTimeAdvancedNotification;
using VirtualTimeBudgetExpiredNotification = Object;
class VirtualTimePausedNotification;

namespace VirtualTimePolicyEnum {
CORE_EXPORT extern const char Advance[];
CORE_EXPORT extern const char Pause[];
CORE_EXPORT extern const char PauseIfNetworkFetchesPending[];
} // namespace VirtualTimePolicyEnum

namespace SetEmitTouchEventsForMouse {
namespace ConfigurationEnum {
CORE_EXPORT extern const char* Mobile;
CORE_EXPORT extern const char* Desktop;
} // ConfigurationEnum
} // SetEmitTouchEventsForMouse

// ------------- Type and builder declarations.

class CORE_EXPORT ScreenOrientation : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreenOrientation);
public:
    static std::unique_ptr<ScreenOrientation> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreenOrientation() override { }

    struct CORE_EXPORT TypeEnum {
        static const char* PortraitPrimary;
        static const char* PortraitSecondary;
        static const char* LandscapePrimary;
        static const char* LandscapeSecondary;
    }; // TypeEnum

    String getType() { return m_type; }
    void setType(const String& value) { m_type = value; }

    int getAngle() { return m_angle; }
    void setAngle(int value) { m_angle = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ScreenOrientation> clone() const;

    template<int STATE>
    class ScreenOrientationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            TypeSet = 1 << 1,
            AngleSet = 1 << 2,
            AllFieldsSet = (TypeSet | AngleSet | 0)};


        ScreenOrientationBuilder<STATE | TypeSet>& setType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        ScreenOrientationBuilder<STATE | AngleSet>& setAngle(int value)
        {
            static_assert(!(STATE & AngleSet), "property angle should not be set yet");
            m_result->setAngle(value);
            return castState<AngleSet>();
        }

        std::unique_ptr<ScreenOrientation> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreenOrientation;
        ScreenOrientationBuilder() : m_result(new ScreenOrientation()) { }

        template<int STEP> ScreenOrientationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreenOrientationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Emulation::ScreenOrientation> m_result;
    };

    static ScreenOrientationBuilder<0> create()
    {
        return ScreenOrientationBuilder<0>();
    }

private:
    ScreenOrientation()
    {
          m_angle = 0;
    }

    String m_type;
    int m_angle;
};


class CORE_EXPORT VirtualTimeAdvancedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(VirtualTimeAdvancedNotification);
public:
    static std::unique_ptr<VirtualTimeAdvancedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~VirtualTimeAdvancedNotification() override { }

    double getVirtualTimeElapsed() { return m_virtualTimeElapsed; }
    void setVirtualTimeElapsed(double value) { m_virtualTimeElapsed = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<VirtualTimeAdvancedNotification> clone() const;

    template<int STATE>
    class VirtualTimeAdvancedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            VirtualTimeElapsedSet = 1 << 1,
            AllFieldsSet = (VirtualTimeElapsedSet | 0)};


        VirtualTimeAdvancedNotificationBuilder<STATE | VirtualTimeElapsedSet>& setVirtualTimeElapsed(double value)
        {
            static_assert(!(STATE & VirtualTimeElapsedSet), "property virtualTimeElapsed should not be set yet");
            m_result->setVirtualTimeElapsed(value);
            return castState<VirtualTimeElapsedSet>();
        }

        std::unique_ptr<VirtualTimeAdvancedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class VirtualTimeAdvancedNotification;
        VirtualTimeAdvancedNotificationBuilder() : m_result(new VirtualTimeAdvancedNotification()) { }

        template<int STEP> VirtualTimeAdvancedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<VirtualTimeAdvancedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Emulation::VirtualTimeAdvancedNotification> m_result;
    };

    static VirtualTimeAdvancedNotificationBuilder<0> create()
    {
        return VirtualTimeAdvancedNotificationBuilder<0>();
    }

private:
    VirtualTimeAdvancedNotification()
    {
          m_virtualTimeElapsed = 0;
    }

    double m_virtualTimeElapsed;
};


class CORE_EXPORT VirtualTimePausedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(VirtualTimePausedNotification);
public:
    static std::unique_ptr<VirtualTimePausedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~VirtualTimePausedNotification() override { }

    double getVirtualTimeElapsed() { return m_virtualTimeElapsed; }
    void setVirtualTimeElapsed(double value) { m_virtualTimeElapsed = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<VirtualTimePausedNotification> clone() const;

    template<int STATE>
    class VirtualTimePausedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            VirtualTimeElapsedSet = 1 << 1,
            AllFieldsSet = (VirtualTimeElapsedSet | 0)};


        VirtualTimePausedNotificationBuilder<STATE | VirtualTimeElapsedSet>& setVirtualTimeElapsed(double value)
        {
            static_assert(!(STATE & VirtualTimeElapsedSet), "property virtualTimeElapsed should not be set yet");
            m_result->setVirtualTimeElapsed(value);
            return castState<VirtualTimeElapsedSet>();
        }

        std::unique_ptr<VirtualTimePausedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class VirtualTimePausedNotification;
        VirtualTimePausedNotificationBuilder() : m_result(new VirtualTimePausedNotification()) { }

        template<int STEP> VirtualTimePausedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<VirtualTimePausedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Emulation::VirtualTimePausedNotification> m_result;
    };

    static VirtualTimePausedNotificationBuilder<0> create()
    {
        return VirtualTimePausedNotificationBuilder<0>();
    }

private:
    VirtualTimePausedNotification()
    {
          m_virtualTimeElapsed = 0;
    }

    double m_virtualTimeElapsed;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse clearDeviceMetricsOverride() = 0;
    virtual DispatchResponse resetPageScaleFactor() = 0;
    virtual DispatchResponse setCPUThrottlingRate(double in_rate) = 0;
    virtual DispatchResponse setDefaultBackgroundColorOverride(Maybe<protocol::DOM::RGBA> in_color) = 0;
    virtual DispatchResponse setDeviceMetricsOverride(int in_width, int in_height, double in_deviceScaleFactor, bool in_mobile, Maybe<double> in_scale, Maybe<int> in_screenWidth, Maybe<int> in_screenHeight, Maybe<int> in_positionX, Maybe<int> in_positionY, Maybe<bool> in_dontSetVisibleSize, Maybe<protocol::Emulation::ScreenOrientation> in_screenOrientation, Maybe<protocol::Page::Viewport> in_viewport) = 0;
    virtual DispatchResponse setEmulatedMedia(const String& in_media) = 0;
    virtual DispatchResponse setNavigatorOverrides(const String& in_platform) = 0;
    virtual DispatchResponse setPageScaleFactor(double in_pageScaleFactor) = 0;
    virtual DispatchResponse setScriptExecutionDisabled(bool in_value) = 0;
    virtual DispatchResponse setTouchEmulationEnabled(bool in_enabled, Maybe<int> in_maxTouchPoints) = 0;
    virtual DispatchResponse setVirtualTimePolicy(const String& in_policy, Maybe<double> in_budget, Maybe<int> in_maxVirtualTimeTaskStarvationCount, Maybe<bool> in_waitForNavigation, Maybe<double> in_initialVirtualTime, double* out_virtualTimeTicksBase) = 0;

    virtual DispatchResponse disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void virtualTimeAdvanced(double virtualTimeElapsed);
    void virtualTimeBudgetExpired();
    void virtualTimePaused(double virtualTimeElapsed);

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

} // namespace Emulation
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_Emulation_h)
