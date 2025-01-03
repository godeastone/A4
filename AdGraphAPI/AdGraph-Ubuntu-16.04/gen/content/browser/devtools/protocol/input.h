// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Input_h
#define content_protocol_Input_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Input {

// ------------- Forward and enum declarations.
class TouchPoint;
using GestureSourceType = String;
using TimeSinceEpoch = double;

namespace GestureSourceTypeEnum {
CONTENT_EXPORT extern const char Default[];
CONTENT_EXPORT extern const char Touch[];
CONTENT_EXPORT extern const char Mouse[];
} // namespace GestureSourceTypeEnum

namespace DispatchKeyEvent {
namespace TypeEnum {
CONTENT_EXPORT extern const char* KeyDown;
CONTENT_EXPORT extern const char* KeyUp;
CONTENT_EXPORT extern const char* RawKeyDown;
CONTENT_EXPORT extern const char* Char;
} // TypeEnum
} // DispatchKeyEvent

namespace DispatchMouseEvent {
namespace TypeEnum {
CONTENT_EXPORT extern const char* MousePressed;
CONTENT_EXPORT extern const char* MouseReleased;
CONTENT_EXPORT extern const char* MouseMoved;
CONTENT_EXPORT extern const char* MouseWheel;
} // TypeEnum
} // DispatchMouseEvent

namespace DispatchMouseEvent {
namespace ButtonEnum {
CONTENT_EXPORT extern const char* None;
CONTENT_EXPORT extern const char* Left;
CONTENT_EXPORT extern const char* Middle;
CONTENT_EXPORT extern const char* Right;
} // ButtonEnum
} // DispatchMouseEvent

namespace DispatchTouchEvent {
namespace TypeEnum {
CONTENT_EXPORT extern const char* TouchStart;
CONTENT_EXPORT extern const char* TouchEnd;
CONTENT_EXPORT extern const char* TouchMove;
CONTENT_EXPORT extern const char* TouchCancel;
} // TypeEnum
} // DispatchTouchEvent

namespace EmulateTouchFromMouseEvent {
namespace TypeEnum {
CONTENT_EXPORT extern const char* MousePressed;
CONTENT_EXPORT extern const char* MouseReleased;
CONTENT_EXPORT extern const char* MouseMoved;
CONTENT_EXPORT extern const char* MouseWheel;
} // TypeEnum
} // EmulateTouchFromMouseEvent

namespace EmulateTouchFromMouseEvent {
namespace ButtonEnum {
CONTENT_EXPORT extern const char* None;
CONTENT_EXPORT extern const char* Left;
CONTENT_EXPORT extern const char* Middle;
CONTENT_EXPORT extern const char* Right;
} // ButtonEnum
} // EmulateTouchFromMouseEvent

// ------------- Type and builder declarations.

class CONTENT_EXPORT TouchPoint : public Serializable{
    PROTOCOL_DISALLOW_COPY(TouchPoint);
public:
    static std::unique_ptr<TouchPoint> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~TouchPoint() override { }

    double GetX() { return m_x; }
    void SetX(double value) { m_x = value; }

    double GetY() { return m_y; }
    void SetY(double value) { m_y = value; }

    bool HasRadiusX() { return m_radiusX.isJust(); }
    double GetRadiusX(double defaultValue) { return m_radiusX.isJust() ? m_radiusX.fromJust() : defaultValue; }
    void SetRadiusX(double value) { m_radiusX = value; }

    bool HasRadiusY() { return m_radiusY.isJust(); }
    double GetRadiusY(double defaultValue) { return m_radiusY.isJust() ? m_radiusY.fromJust() : defaultValue; }
    void SetRadiusY(double value) { m_radiusY = value; }

    bool HasRotationAngle() { return m_rotationAngle.isJust(); }
    double GetRotationAngle(double defaultValue) { return m_rotationAngle.isJust() ? m_rotationAngle.fromJust() : defaultValue; }
    void SetRotationAngle(double value) { m_rotationAngle = value; }

    bool HasForce() { return m_force.isJust(); }
    double GetForce(double defaultValue) { return m_force.isJust() ? m_force.fromJust() : defaultValue; }
    void SetForce(double value) { m_force = value; }

    bool HasId() { return m_id.isJust(); }
    double GetId(double defaultValue) { return m_id.isJust() ? m_id.fromJust() : defaultValue; }
    void SetId(double value) { m_id = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<TouchPoint> clone() const;

    template<int STATE>
    class TouchPointBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            XSet = 1 << 1,
            YSet = 1 << 2,
            AllFieldsSet = (XSet | YSet | 0)};


        TouchPointBuilder<STATE | XSet>& SetX(double value)
        {
            static_assert(!(STATE & XSet), "property x should not be set yet");
            m_result->SetX(value);
            return castState<XSet>();
        }

        TouchPointBuilder<STATE | YSet>& SetY(double value)
        {
            static_assert(!(STATE & YSet), "property y should not be set yet");
            m_result->SetY(value);
            return castState<YSet>();
        }

        TouchPointBuilder<STATE>& SetRadiusX(double value)
        {
            m_result->SetRadiusX(value);
            return *this;
        }

        TouchPointBuilder<STATE>& SetRadiusY(double value)
        {
            m_result->SetRadiusY(value);
            return *this;
        }

        TouchPointBuilder<STATE>& SetRotationAngle(double value)
        {
            m_result->SetRotationAngle(value);
            return *this;
        }

        TouchPointBuilder<STATE>& SetForce(double value)
        {
            m_result->SetForce(value);
            return *this;
        }

        TouchPointBuilder<STATE>& SetId(double value)
        {
            m_result->SetId(value);
            return *this;
        }

        std::unique_ptr<TouchPoint> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TouchPoint;
        TouchPointBuilder() : m_result(new TouchPoint()) { }

        template<int STEP> TouchPointBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TouchPointBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Input::TouchPoint> m_result;
    };

    static TouchPointBuilder<0> Create()
    {
        return TouchPointBuilder<0>();
    }

private:
    TouchPoint()
    {
          m_x = 0;
          m_y = 0;
    }

    double m_x;
    double m_y;
    Maybe<double> m_radiusX;
    Maybe<double> m_radiusY;
    Maybe<double> m_rotationAngle;
    Maybe<double> m_force;
    Maybe<double> m_id;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CONTENT_EXPORT DispatchKeyEventCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DispatchKeyEventCallback() { }
    };
    virtual void DispatchKeyEvent(const String& in_type, Maybe<int> in_modifiers, Maybe<double> in_timestamp, Maybe<String> in_text, Maybe<String> in_unmodifiedText, Maybe<String> in_keyIdentifier, Maybe<String> in_code, Maybe<String> in_key, Maybe<int> in_windowsVirtualKeyCode, Maybe<int> in_nativeVirtualKeyCode, Maybe<bool> in_autoRepeat, Maybe<bool> in_isKeypad, Maybe<bool> in_isSystemKey, Maybe<int> in_location, std::unique_ptr<DispatchKeyEventCallback> callback) = 0;
    class CONTENT_EXPORT DispatchMouseEventCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DispatchMouseEventCallback() { }
    };
    virtual void DispatchMouseEvent(const String& in_type, double in_x, double in_y, Maybe<int> in_modifiers, Maybe<double> in_timestamp, Maybe<String> in_button, Maybe<int> in_clickCount, Maybe<double> in_deltaX, Maybe<double> in_deltaY, std::unique_ptr<DispatchMouseEventCallback> callback) = 0;
    class CONTENT_EXPORT DispatchTouchEventCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~DispatchTouchEventCallback() { }
    };
    virtual void DispatchTouchEvent(const String& in_type, std::unique_ptr<protocol::Array<protocol::Input::TouchPoint>> in_touchPoints, Maybe<int> in_modifiers, Maybe<double> in_timestamp, std::unique_ptr<DispatchTouchEventCallback> callback) = 0;
    virtual DispatchResponse EmulateTouchFromMouseEvent(const String& in_type, int in_x, int in_y, const String& in_button, Maybe<double> in_timestamp, Maybe<double> in_deltaX, Maybe<double> in_deltaY, Maybe<int> in_modifiers, Maybe<int> in_clickCount) = 0;
    virtual DispatchResponse SetIgnoreInputEvents(bool in_ignore) = 0;
    class CONTENT_EXPORT SynthesizePinchGestureCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~SynthesizePinchGestureCallback() { }
    };
    virtual void SynthesizePinchGesture(double in_x, double in_y, double in_scaleFactor, Maybe<int> in_relativeSpeed, Maybe<String> in_gestureSourceType, std::unique_ptr<SynthesizePinchGestureCallback> callback) = 0;
    class CONTENT_EXPORT SynthesizeScrollGestureCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~SynthesizeScrollGestureCallback() { }
    };
    virtual void SynthesizeScrollGesture(double in_x, double in_y, Maybe<double> in_xDistance, Maybe<double> in_yDistance, Maybe<double> in_xOverscroll, Maybe<double> in_yOverscroll, Maybe<bool> in_preventFling, Maybe<int> in_speed, Maybe<String> in_gestureSourceType, Maybe<int> in_repeatCount, Maybe<int> in_repeatDelayMs, Maybe<String> in_interactionMarkerName, std::unique_ptr<SynthesizeScrollGestureCallback> callback) = 0;
    class CONTENT_EXPORT SynthesizeTapGestureCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~SynthesizeTapGestureCallback() { }
    };
    virtual void SynthesizeTapGesture(double in_x, double in_y, Maybe<int> in_duration, Maybe<int> in_tapCount, Maybe<String> in_gestureSourceType, std::unique_ptr<SynthesizeTapGestureCallback> callback) = 0;

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

} // namespace Input
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Input_h)
