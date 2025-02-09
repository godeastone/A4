// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/devtools/protocol/page.h"

#include "chrome/browser/devtools/protocol/protocol.h"

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
        m_dispatchMap["Page.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Page.enable"] = &DispatcherImpl::enable;
      m_redirects["Page.getCookies"] = "Network.getCookies";
        m_dispatchMap["Page.setAdBlockingEnabled"] = &DispatcherImpl::setAdBlockingEnabled;
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

    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setAdBlockingEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Disable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Enable();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setAdBlockingEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::fromValue(enabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetAdBlockingEnabled(in_enabled);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Page", std::move(dispatcher));
}

} // Page
} // namespace protocol
