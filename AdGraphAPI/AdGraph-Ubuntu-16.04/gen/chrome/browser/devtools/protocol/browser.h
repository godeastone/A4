// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Browser_h
#define protocol_Browser_h

#include "chrome/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace protocol {
namespace Browser {

// ------------- Forward and enum declarations.
using WindowID = int;
using WindowState = String;
class Bounds;

namespace WindowStateEnum {
 extern const char Normal[];
 extern const char Minimized[];
 extern const char Maximized[];
 extern const char Fullscreen[];
} // namespace WindowStateEnum

// ------------- Type and builder declarations.

class  Bounds : public Serializable{
    PROTOCOL_DISALLOW_COPY(Bounds);
public:
    static std::unique_ptr<Bounds> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Bounds() override { }

    bool HasLeft() { return m_left.isJust(); }
    int GetLeft(int defaultValue) { return m_left.isJust() ? m_left.fromJust() : defaultValue; }
    void SetLeft(int value) { m_left = value; }

    bool HasTop() { return m_top.isJust(); }
    int GetTop(int defaultValue) { return m_top.isJust() ? m_top.fromJust() : defaultValue; }
    void SetTop(int value) { m_top = value; }

    bool HasWidth() { return m_width.isJust(); }
    int GetWidth(int defaultValue) { return m_width.isJust() ? m_width.fromJust() : defaultValue; }
    void SetWidth(int value) { m_width = value; }

    bool HasHeight() { return m_height.isJust(); }
    int GetHeight(int defaultValue) { return m_height.isJust() ? m_height.fromJust() : defaultValue; }
    void SetHeight(int value) { m_height = value; }

    bool HasWindowState() { return m_windowState.isJust(); }
    String GetWindowState(const String& defaultValue) { return m_windowState.isJust() ? m_windowState.fromJust() : defaultValue; }
    void SetWindowState(const String& value) { m_windowState = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Bounds> clone() const;

    template<int STATE>
    class BoundsBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        BoundsBuilder<STATE>& SetLeft(int value)
        {
            m_result->SetLeft(value);
            return *this;
        }

        BoundsBuilder<STATE>& SetTop(int value)
        {
            m_result->SetTop(value);
            return *this;
        }

        BoundsBuilder<STATE>& SetWidth(int value)
        {
            m_result->SetWidth(value);
            return *this;
        }

        BoundsBuilder<STATE>& SetHeight(int value)
        {
            m_result->SetHeight(value);
            return *this;
        }

        BoundsBuilder<STATE>& SetWindowState(const String& value)
        {
            m_result->SetWindowState(value);
            return *this;
        }

        std::unique_ptr<Bounds> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Bounds;
        BoundsBuilder() : m_result(new Bounds()) { }

        template<int STEP> BoundsBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<BoundsBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Browser::Bounds> m_result;
    };

    static BoundsBuilder<0> Create()
    {
        return BoundsBuilder<0>();
    }

private:
    Bounds()
    {
    }

    Maybe<int> m_left;
    Maybe<int> m_top;
    Maybe<int> m_width;
    Maybe<int> m_height;
    Maybe<String> m_windowState;
};


// ------------- Backend interface.

class  Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse Close() = 0;
    virtual DispatchResponse GetWindowBounds(int in_windowId, std::unique_ptr<protocol::Browser::Bounds>* out_bounds) = 0;
    virtual DispatchResponse GetWindowForTarget(const String& in_targetId, int* out_windowId, std::unique_ptr<protocol::Browser::Bounds>* out_bounds) = 0;
    virtual DispatchResponse SetWindowBounds(int in_windowId, std::unique_ptr<protocol::Browser::Bounds> in_bounds) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class  Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class  Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class  Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Browser
} // namespace protocol

#endif // !defined(protocol_Browser_h)
