// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Emulation_h
#define content_protocol_Emulation_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "content/browser/devtools/protocol/dom.h"
#include "content/browser/devtools/protocol/page.h"
#include "content/browser/devtools/protocol/runtime.h"

namespace content {
namespace protocol {
namespace Emulation {

// ------------- Forward and enum declarations.
class ScreenOrientation;
class VirtualTimeAdvancedNotification;
using VirtualTimeBudgetExpiredNotification = Object;
class VirtualTimePausedNotification;

namespace SetEmitTouchEventsForMouse {
namespace ConfigurationEnum {
CONTENT_EXPORT extern const char* Mobile;
CONTENT_EXPORT extern const char* Desktop;
} // ConfigurationEnum
} // SetEmitTouchEventsForMouse

// ------------- Type and builder declarations.

class CONTENT_EXPORT ScreenOrientation : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreenOrientation);
public:
    static std::unique_ptr<ScreenOrientation> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreenOrientation() override { }

    struct CONTENT_EXPORT TypeEnum {
        static const char* PortraitPrimary;
        static const char* PortraitSecondary;
        static const char* LandscapePrimary;
        static const char* LandscapeSecondary;
    }; // TypeEnum

    String GetType() { return m_type; }
    void SetType(const String& value) { m_type = value; }

    int GetAngle() { return m_angle; }
    void SetAngle(int value) { m_angle = value; }

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


        ScreenOrientationBuilder<STATE | TypeSet>& SetType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->SetType(value);
            return castState<TypeSet>();
        }

        ScreenOrientationBuilder<STATE | AngleSet>& SetAngle(int value)
        {
            static_assert(!(STATE & AngleSet), "property angle should not be set yet");
            m_result->SetAngle(value);
            return castState<AngleSet>();
        }

        std::unique_ptr<ScreenOrientation> Build()
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

    static ScreenOrientationBuilder<0> Create()
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


class CONTENT_EXPORT VirtualTimeAdvancedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(VirtualTimeAdvancedNotification);
public:
    static std::unique_ptr<VirtualTimeAdvancedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~VirtualTimeAdvancedNotification() override { }

    double GetVirtualTimeElapsed() { return m_virtualTimeElapsed; }
    void SetVirtualTimeElapsed(double value) { m_virtualTimeElapsed = value; }

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


        VirtualTimeAdvancedNotificationBuilder<STATE | VirtualTimeElapsedSet>& SetVirtualTimeElapsed(double value)
        {
            static_assert(!(STATE & VirtualTimeElapsedSet), "property virtualTimeElapsed should not be set yet");
            m_result->SetVirtualTimeElapsed(value);
            return castState<VirtualTimeElapsedSet>();
        }

        std::unique_ptr<VirtualTimeAdvancedNotification> Build()
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

    static VirtualTimeAdvancedNotificationBuilder<0> Create()
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


class CONTENT_EXPORT VirtualTimePausedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(VirtualTimePausedNotification);
public:
    static std::unique_ptr<VirtualTimePausedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~VirtualTimePausedNotification() override { }

    double GetVirtualTimeElapsed() { return m_virtualTimeElapsed; }
    void SetVirtualTimeElapsed(double value) { m_virtualTimeElapsed = value; }

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


        VirtualTimePausedNotificationBuilder<STATE | VirtualTimeElapsedSet>& SetVirtualTimeElapsed(double value)
        {
            static_assert(!(STATE & VirtualTimeElapsedSet), "property virtualTimeElapsed should not be set yet");
            m_result->SetVirtualTimeElapsed(value);
            return castState<VirtualTimeElapsedSet>();
        }

        std::unique_ptr<VirtualTimePausedNotification> Build()
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

    static VirtualTimePausedNotificationBuilder<0> Create()
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

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse CanEmulate(bool* out_result) = 0;
    virtual DispatchResponse ClearDeviceMetricsOverride() = 0;
    virtual DispatchResponse ClearGeolocationOverride() = 0;
    virtual DispatchResponse SetDeviceMetricsOverride(int in_width, int in_height, double in_deviceScaleFactor, bool in_mobile, Maybe<double> in_scale, Maybe<int> in_screenWidth, Maybe<int> in_screenHeight, Maybe<int> in_positionX, Maybe<int> in_positionY, Maybe<bool> in_dontSetVisibleSize, Maybe<protocol::Emulation::ScreenOrientation> in_screenOrientation, Maybe<protocol::Page::Viewport> in_viewport) = 0;
    virtual DispatchResponse SetEmitTouchEventsForMouse(bool in_enabled, Maybe<String> in_configuration) = 0;
    virtual DispatchResponse SetGeolocationOverride(Maybe<double> in_latitude, Maybe<double> in_longitude, Maybe<double> in_accuracy) = 0;
    virtual DispatchResponse SetVisibleSize(int in_width, int in_height) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void VirtualTimeAdvanced(double virtualTimeElapsed);
    void VirtualTimeBudgetExpired();
    void VirtualTimePaused(double virtualTimeElapsed);

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

} // namespace Emulation
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Emulation_h)
