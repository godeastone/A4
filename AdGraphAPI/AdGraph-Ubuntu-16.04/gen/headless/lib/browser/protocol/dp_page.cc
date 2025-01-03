// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/lib/browser/protocol/dp_page.h"

#include "headless/lib/browser/protocol/protocol.h"

namespace headless {
namespace protocol {
namespace Page {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Page";
const char Metainfo::commandPrefix[] = "Page.";
const char Metainfo::version[] = "1.3";

// ------------- Enum values from params.


namespace CaptureScreenshot {
namespace FormatEnum {
const char* Jpeg = "jpeg";
const char* Png = "png";
} // namespace FormatEnum
} // namespace CaptureScreenshot

namespace SetDownloadBehavior {
namespace BehaviorEnum {
const char* Deny = "deny";
const char* Allow = "allow";
const char* Default = "default";
} // namespace BehaviorEnum
} // namespace SetDownloadBehavior

namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
const char* Mobile = "mobile";
const char* Desktop = "desktop";
} // namespace ConfigurationEnum
} // namespace SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
const char* Jpeg = "jpeg";
const char* Png = "png";
} // namespace FormatEnum
} // namespace StartScreencast

namespace SetWebLifecycleState {
namespace StateEnum {
const char* Frozen = "frozen";
const char* Active = "active";
} // namespace StateEnum
} // namespace SetWebLifecycleState

namespace FrameScheduledNavigation {
namespace ReasonEnum {
const char* FormSubmissionGet = "formSubmissionGet";
const char* FormSubmissionPost = "formSubmissionPost";
const char* HttpHeaderRefresh = "httpHeaderRefresh";
const char* ScriptInitiated = "scriptInitiated";
const char* MetaTagRefresh = "metaTagRefresh";
const char* PageBlockInterstitial = "pageBlockInterstitial";
const char* Reload = "reload";
} // namespace ReasonEnum
} // namespace FrameScheduledNavigation

// ------------- Frontend notifications.

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawNotification(const String& notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::create(notification));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend, bool fallThroughForNotFound)
        : DispatcherBase(frontendChannel)
        , m_backend(backend)
        , m_fallThroughForNotFound(fallThroughForNotFound) {
      m_redirects["Page.clearDeviceMetricsOverride"] = "Emulation.clearDeviceMetricsOverride";
      m_redirects["Page.clearDeviceOrientationOverride"] = "DeviceOrientation.clearDeviceOrientationOverride";
      m_redirects["Page.clearGeolocationOverride"] = "Emulation.clearGeolocationOverride";
      m_redirects["Page.deleteCookie"] = "Network.deleteCookie";
      m_redirects["Page.getCookies"] = "Network.getCookies";
        m_dispatchMap["Page.printToPDF"] = &DispatcherImpl::printToPDF;
      m_redirects["Page.setDeviceMetricsOverride"] = "Emulation.setDeviceMetricsOverride";
      m_redirects["Page.setDeviceOrientationOverride"] = "DeviceOrientation.setDeviceOrientationOverride";
      m_redirects["Page.setGeolocationOverride"] = "Emulation.setGeolocationOverride";
      m_redirects["Page.setTouchEmulationEnabled"] = "Emulation.setTouchEmulationEnabled";
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status printToPDF(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
    bool m_fallThroughForNotFound;
};

DispatchResponse::Status DispatcherImpl::dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        if (m_fallThroughForNotFound)
            return DispatchResponse::kFallThrough;
        reportProtocolError(callId, DispatchResponse::kMethodNotFound, "'" + method + "' wasn't found", nullptr);
        return DispatchResponse::kError;
    }

    protocol::ErrorSupport errors;
    return (this->*(it->second))(callId, std::move(messageObject), &errors);
}


class PrintToPDFCallbackImpl : public Backend::PrintToPDFCallback, public DispatcherBase::Callback {
public:
    PrintToPDFCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(const String& data) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("data", ValueConversions<String>::toValue(data));
        sendIfActive(std::move(resultObject), DispatchResponse::OK());
    }

    void fallThrough() override
    {
        fallThroughIfActive();
    }

    void sendFailure(const DispatchResponse& response) override
    {
        DCHECK(response.status() == DispatchResponse::kError);
        sendIfActive(nullptr, response);
    }
};

DispatchResponse::Status DispatcherImpl::printToPDF(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* landscapeValue = object ? object->get("landscape") : nullptr;
    Maybe<bool> in_landscape;
    if (landscapeValue) {
        errors->setName("landscape");
        in_landscape = ValueConversions<bool>::fromValue(landscapeValue, errors);
    }
    protocol::Value* displayHeaderFooterValue = object ? object->get("displayHeaderFooter") : nullptr;
    Maybe<bool> in_displayHeaderFooter;
    if (displayHeaderFooterValue) {
        errors->setName("displayHeaderFooter");
        in_displayHeaderFooter = ValueConversions<bool>::fromValue(displayHeaderFooterValue, errors);
    }
    protocol::Value* printBackgroundValue = object ? object->get("printBackground") : nullptr;
    Maybe<bool> in_printBackground;
    if (printBackgroundValue) {
        errors->setName("printBackground");
        in_printBackground = ValueConversions<bool>::fromValue(printBackgroundValue, errors);
    }
    protocol::Value* scaleValue = object ? object->get("scale") : nullptr;
    Maybe<double> in_scale;
    if (scaleValue) {
        errors->setName("scale");
        in_scale = ValueConversions<double>::fromValue(scaleValue, errors);
    }
    protocol::Value* paperWidthValue = object ? object->get("paperWidth") : nullptr;
    Maybe<double> in_paperWidth;
    if (paperWidthValue) {
        errors->setName("paperWidth");
        in_paperWidth = ValueConversions<double>::fromValue(paperWidthValue, errors);
    }
    protocol::Value* paperHeightValue = object ? object->get("paperHeight") : nullptr;
    Maybe<double> in_paperHeight;
    if (paperHeightValue) {
        errors->setName("paperHeight");
        in_paperHeight = ValueConversions<double>::fromValue(paperHeightValue, errors);
    }
    protocol::Value* marginTopValue = object ? object->get("marginTop") : nullptr;
    Maybe<double> in_marginTop;
    if (marginTopValue) {
        errors->setName("marginTop");
        in_marginTop = ValueConversions<double>::fromValue(marginTopValue, errors);
    }
    protocol::Value* marginBottomValue = object ? object->get("marginBottom") : nullptr;
    Maybe<double> in_marginBottom;
    if (marginBottomValue) {
        errors->setName("marginBottom");
        in_marginBottom = ValueConversions<double>::fromValue(marginBottomValue, errors);
    }
    protocol::Value* marginLeftValue = object ? object->get("marginLeft") : nullptr;
    Maybe<double> in_marginLeft;
    if (marginLeftValue) {
        errors->setName("marginLeft");
        in_marginLeft = ValueConversions<double>::fromValue(marginLeftValue, errors);
    }
    protocol::Value* marginRightValue = object ? object->get("marginRight") : nullptr;
    Maybe<double> in_marginRight;
    if (marginRightValue) {
        errors->setName("marginRight");
        in_marginRight = ValueConversions<double>::fromValue(marginRightValue, errors);
    }
    protocol::Value* pageRangesValue = object ? object->get("pageRanges") : nullptr;
    Maybe<String> in_pageRanges;
    if (pageRangesValue) {
        errors->setName("pageRanges");
        in_pageRanges = ValueConversions<String>::fromValue(pageRangesValue, errors);
    }
    protocol::Value* ignoreInvalidPageRangesValue = object ? object->get("ignoreInvalidPageRanges") : nullptr;
    Maybe<bool> in_ignoreInvalidPageRanges;
    if (ignoreInvalidPageRangesValue) {
        errors->setName("ignoreInvalidPageRanges");
        in_ignoreInvalidPageRanges = ValueConversions<bool>::fromValue(ignoreInvalidPageRangesValue, errors);
    }
    protocol::Value* headerTemplateValue = object ? object->get("headerTemplate") : nullptr;
    Maybe<String> in_headerTemplate;
    if (headerTemplateValue) {
        errors->setName("headerTemplate");
        in_headerTemplate = ValueConversions<String>::fromValue(headerTemplateValue, errors);
    }
    protocol::Value* footerTemplateValue = object ? object->get("footerTemplate") : nullptr;
    Maybe<String> in_footerTemplate;
    if (footerTemplateValue) {
        errors->setName("footerTemplate");
        in_footerTemplate = ValueConversions<String>::fromValue(footerTemplateValue, errors);
    }
    protocol::Value* preferCSSPageSizeValue = object ? object->get("preferCSSPageSize") : nullptr;
    Maybe<bool> in_preferCSSPageSize;
    if (preferCSSPageSizeValue) {
        errors->setName("preferCSSPageSize");
        in_preferCSSPageSize = ValueConversions<bool>::fromValue(preferCSSPageSizeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<PrintToPDFCallbackImpl> callback(new PrintToPDFCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->PrintToPDF(std::move(in_landscape), std::move(in_displayHeaderFooter), std::move(in_printBackground), std::move(in_scale), std::move(in_paperWidth), std::move(in_paperHeight), std::move(in_marginTop), std::move(in_marginBottom), std::move(in_marginLeft), std::move(in_marginRight), std::move(in_pageRanges), std::move(in_ignoreInvalidPageRanges), std::move(in_headerTemplate), std::move(in_footerTemplate), std::move(in_preferCSSPageSize), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Page", std::move(dispatcher));
}

} // Page
} // namespace headless
} // namespace protocol
