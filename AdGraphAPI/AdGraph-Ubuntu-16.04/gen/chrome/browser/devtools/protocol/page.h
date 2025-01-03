// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Page_h
#define protocol_Page_h

#include "chrome/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace protocol {
namespace Page {

// ------------- Forward and enum declarations.

namespace CaptureScreenshot {
namespace FormatEnum {
 extern const char* Jpeg;
 extern const char* Png;
} // FormatEnum
} // CaptureScreenshot

namespace SetDownloadBehavior {
namespace BehaviorEnum {
 extern const char* Deny;
 extern const char* Allow;
 extern const char* Default;
} // BehaviorEnum
} // SetDownloadBehavior

namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
 extern const char* Mobile;
 extern const char* Desktop;
} // ConfigurationEnum
} // SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
 extern const char* Jpeg;
 extern const char* Png;
} // FormatEnum
} // StartScreencast

namespace SetWebLifecycleState {
namespace StateEnum {
 extern const char* Frozen;
 extern const char* Active;
} // StateEnum
} // SetWebLifecycleState

namespace FrameScheduledNavigation {
namespace ReasonEnum {
 extern const char* FormSubmissionGet;
 extern const char* FormSubmissionPost;
 extern const char* HttpHeaderRefresh;
 extern const char* ScriptInitiated;
 extern const char* MetaTagRefresh;
 extern const char* PageBlockInterstitial;
 extern const char* Reload;
} // ReasonEnum
} // FrameScheduledNavigation

// ------------- Type and builder declarations.

// ------------- Backend interface.

class  Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse Enable() = 0;
    virtual DispatchResponse SetAdBlockingEnabled(bool in_enabled) = 0;

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

} // namespace Page
} // namespace protocol

#endif // !defined(protocol_Page_h)
