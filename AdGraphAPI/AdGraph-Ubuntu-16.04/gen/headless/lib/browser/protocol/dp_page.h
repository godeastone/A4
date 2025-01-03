// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_Page_h
#define headless_protocol_Page_h

#include "headless/public/headless_export.h"
#include "headless/lib/browser/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "headless/lib/browser/protocol/dp_network.h"

namespace headless {
namespace protocol {
namespace Page {

// ------------- Forward and enum declarations.

namespace CaptureScreenshot {
namespace FormatEnum {
HEADLESS_EXPORT extern const char* Jpeg;
HEADLESS_EXPORT extern const char* Png;
} // FormatEnum
} // CaptureScreenshot

namespace SetDownloadBehavior {
namespace BehaviorEnum {
HEADLESS_EXPORT extern const char* Deny;
HEADLESS_EXPORT extern const char* Allow;
HEADLESS_EXPORT extern const char* Default;
} // BehaviorEnum
} // SetDownloadBehavior

namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
HEADLESS_EXPORT extern const char* Mobile;
HEADLESS_EXPORT extern const char* Desktop;
} // ConfigurationEnum
} // SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
HEADLESS_EXPORT extern const char* Jpeg;
HEADLESS_EXPORT extern const char* Png;
} // FormatEnum
} // StartScreencast

namespace SetWebLifecycleState {
namespace StateEnum {
HEADLESS_EXPORT extern const char* Frozen;
HEADLESS_EXPORT extern const char* Active;
} // StateEnum
} // SetWebLifecycleState

namespace FrameScheduledNavigation {
namespace ReasonEnum {
HEADLESS_EXPORT extern const char* FormSubmissionGet;
HEADLESS_EXPORT extern const char* FormSubmissionPost;
HEADLESS_EXPORT extern const char* HttpHeaderRefresh;
HEADLESS_EXPORT extern const char* ScriptInitiated;
HEADLESS_EXPORT extern const char* MetaTagRefresh;
HEADLESS_EXPORT extern const char* PageBlockInterstitial;
HEADLESS_EXPORT extern const char* Reload;
} // ReasonEnum
} // FrameScheduledNavigation

// ------------- Type and builder declarations.

// ------------- Backend interface.

class HEADLESS_EXPORT Backend {
public:
    virtual ~Backend() { }

    class HEADLESS_EXPORT PrintToPDFCallback {
    public:
        virtual void sendSuccess(const String& data) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~PrintToPDFCallback() { }
    };
    virtual void PrintToPDF(Maybe<bool> in_landscape, Maybe<bool> in_displayHeaderFooter, Maybe<bool> in_printBackground, Maybe<double> in_scale, Maybe<double> in_paperWidth, Maybe<double> in_paperHeight, Maybe<double> in_marginTop, Maybe<double> in_marginBottom, Maybe<double> in_marginLeft, Maybe<double> in_marginRight, Maybe<String> in_pageRanges, Maybe<bool> in_ignoreInvalidPageRanges, Maybe<String> in_headerTemplate, Maybe<String> in_footerTemplate, Maybe<bool> in_preferCSSPageSize, std::unique_ptr<PrintToPDFCallback> callback) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class HEADLESS_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

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

} // namespace Page
} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_Page_h)
