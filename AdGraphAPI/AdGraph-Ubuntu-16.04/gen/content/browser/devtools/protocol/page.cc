// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/page.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Page {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Page";
const char Metainfo::commandPrefix[] = "Page.";
const char Metainfo::version[] = "1.3";

namespace ResourceTypeEnum {
const char Document[] = "Document";
const char Stylesheet[] = "Stylesheet";
const char Image[] = "Image";
const char Media[] = "Media";
const char Font[] = "Font";
const char Script[] = "Script";
const char TextTrack[] = "TextTrack";
const char XHR[] = "XHR";
const char Fetch[] = "Fetch";
const char EventSource[] = "EventSource";
const char WebSocket[] = "WebSocket";
const char Manifest[] = "Manifest";
const char SignedExchange[] = "SignedExchange";
const char Other[] = "Other";
} // namespace ResourceTypeEnum

namespace TransitionTypeEnum {
const char Link[] = "link";
const char Typed[] = "typed";
const char Auto_bookmark[] = "auto_bookmark";
const char Auto_subframe[] = "auto_subframe";
const char Manual_subframe[] = "manual_subframe";
const char Generated[] = "generated";
const char Auto_toplevel[] = "auto_toplevel";
const char Form_submit[] = "form_submit";
const char Reload[] = "reload";
const char Keyword[] = "keyword";
const char Keyword_generated[] = "keyword_generated";
const char Other[] = "other";
} // namespace TransitionTypeEnum

std::unique_ptr<NavigationEntry> NavigationEntry::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NavigationEntry> result(new NavigationEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<int>::fromValue(idValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* userTypedURLValue = object->get("userTypedURL");
    errors->setName("userTypedURL");
    result->m_userTypedURL = ValueConversions<String>::fromValue(userTypedURLValue, errors);
    protocol::Value* titleValue = object->get("title");
    errors->setName("title");
    result->m_title = ValueConversions<String>::fromValue(titleValue, errors);
    protocol::Value* transitionTypeValue = object->get("transitionType");
    errors->setName("transitionType");
    result->m_transitionType = ValueConversions<String>::fromValue(transitionTypeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NavigationEntry::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<int>::toValue(m_id));
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("userTypedURL", ValueConversions<String>::toValue(m_userTypedURL));
    result->setValue("title", ValueConversions<String>::toValue(m_title));
    result->setValue("transitionType", ValueConversions<String>::toValue(m_transitionType));
    return result;
}

std::unique_ptr<NavigationEntry> NavigationEntry::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ScreencastFrameMetadata> ScreencastFrameMetadata::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreencastFrameMetadata> result(new ScreencastFrameMetadata());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* offsetTopValue = object->get("offsetTop");
    errors->setName("offsetTop");
    result->m_offsetTop = ValueConversions<double>::fromValue(offsetTopValue, errors);
    protocol::Value* pageScaleFactorValue = object->get("pageScaleFactor");
    errors->setName("pageScaleFactor");
    result->m_pageScaleFactor = ValueConversions<double>::fromValue(pageScaleFactorValue, errors);
    protocol::Value* deviceWidthValue = object->get("deviceWidth");
    errors->setName("deviceWidth");
    result->m_deviceWidth = ValueConversions<double>::fromValue(deviceWidthValue, errors);
    protocol::Value* deviceHeightValue = object->get("deviceHeight");
    errors->setName("deviceHeight");
    result->m_deviceHeight = ValueConversions<double>::fromValue(deviceHeightValue, errors);
    protocol::Value* scrollOffsetXValue = object->get("scrollOffsetX");
    errors->setName("scrollOffsetX");
    result->m_scrollOffsetX = ValueConversions<double>::fromValue(scrollOffsetXValue, errors);
    protocol::Value* scrollOffsetYValue = object->get("scrollOffsetY");
    errors->setName("scrollOffsetY");
    result->m_scrollOffsetY = ValueConversions<double>::fromValue(scrollOffsetYValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    if (timestampValue) {
        errors->setName("timestamp");
        result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreencastFrameMetadata::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("offsetTop", ValueConversions<double>::toValue(m_offsetTop));
    result->setValue("pageScaleFactor", ValueConversions<double>::toValue(m_pageScaleFactor));
    result->setValue("deviceWidth", ValueConversions<double>::toValue(m_deviceWidth));
    result->setValue("deviceHeight", ValueConversions<double>::toValue(m_deviceHeight));
    result->setValue("scrollOffsetX", ValueConversions<double>::toValue(m_scrollOffsetX));
    result->setValue("scrollOffsetY", ValueConversions<double>::toValue(m_scrollOffsetY));
    if (m_timestamp.isJust())
        result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp.fromJust()));
    return result;
}

std::unique_ptr<ScreencastFrameMetadata> ScreencastFrameMetadata::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

namespace DialogTypeEnum {
const char Alert[] = "alert";
const char Confirm[] = "confirm";
const char Prompt[] = "prompt";
const char Beforeunload[] = "beforeunload";
} // namespace DialogTypeEnum

std::unique_ptr<AppManifestError> AppManifestError::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AppManifestError> result(new AppManifestError());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* messageValue = object->get("message");
    errors->setName("message");
    result->m_message = ValueConversions<String>::fromValue(messageValue, errors);
    protocol::Value* criticalValue = object->get("critical");
    errors->setName("critical");
    result->m_critical = ValueConversions<int>::fromValue(criticalValue, errors);
    protocol::Value* lineValue = object->get("line");
    errors->setName("line");
    result->m_line = ValueConversions<int>::fromValue(lineValue, errors);
    protocol::Value* columnValue = object->get("column");
    errors->setName("column");
    result->m_column = ValueConversions<int>::fromValue(columnValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AppManifestError::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("message", ValueConversions<String>::toValue(m_message));
    result->setValue("critical", ValueConversions<int>::toValue(m_critical));
    result->setValue("line", ValueConversions<int>::toValue(m_line));
    result->setValue("column", ValueConversions<int>::toValue(m_column));
    return result;
}

std::unique_ptr<AppManifestError> AppManifestError::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<Viewport> Viewport::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Viewport> result(new Viewport());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* xValue = object->get("x");
    errors->setName("x");
    result->m_x = ValueConversions<double>::fromValue(xValue, errors);
    protocol::Value* yValue = object->get("y");
    errors->setName("y");
    result->m_y = ValueConversions<double>::fromValue(yValue, errors);
    protocol::Value* widthValue = object->get("width");
    errors->setName("width");
    result->m_width = ValueConversions<double>::fromValue(widthValue, errors);
    protocol::Value* heightValue = object->get("height");
    errors->setName("height");
    result->m_height = ValueConversions<double>::fromValue(heightValue, errors);
    protocol::Value* scaleValue = object->get("scale");
    errors->setName("scale");
    result->m_scale = ValueConversions<double>::fromValue(scaleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Viewport::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("x", ValueConversions<double>::toValue(m_x));
    result->setValue("y", ValueConversions<double>::toValue(m_y));
    result->setValue("width", ValueConversions<double>::toValue(m_width));
    result->setValue("height", ValueConversions<double>::toValue(m_height));
    result->setValue("scale", ValueConversions<double>::toValue(m_scale));
    return result;
}

std::unique_ptr<Viewport> Viewport::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<JavascriptDialogClosedNotification> JavascriptDialogClosedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<JavascriptDialogClosedNotification> result(new JavascriptDialogClosedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* resultValue = object->get("result");
    errors->setName("result");
    result->m_result = ValueConversions<bool>::fromValue(resultValue, errors);
    protocol::Value* userInputValue = object->get("userInput");
    errors->setName("userInput");
    result->m_userInput = ValueConversions<String>::fromValue(userInputValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> JavascriptDialogClosedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("result", ValueConversions<bool>::toValue(m_result));
    result->setValue("userInput", ValueConversions<String>::toValue(m_userInput));
    return result;
}

std::unique_ptr<JavascriptDialogClosedNotification> JavascriptDialogClosedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<JavascriptDialogOpeningNotification> JavascriptDialogOpeningNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<JavascriptDialogOpeningNotification> result(new JavascriptDialogOpeningNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* messageValue = object->get("message");
    errors->setName("message");
    result->m_message = ValueConversions<String>::fromValue(messageValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<String>::fromValue(typeValue, errors);
    protocol::Value* hasBrowserHandlerValue = object->get("hasBrowserHandler");
    errors->setName("hasBrowserHandler");
    result->m_hasBrowserHandler = ValueConversions<bool>::fromValue(hasBrowserHandlerValue, errors);
    protocol::Value* defaultPromptValue = object->get("defaultPrompt");
    if (defaultPromptValue) {
        errors->setName("defaultPrompt");
        result->m_defaultPrompt = ValueConversions<String>::fromValue(defaultPromptValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> JavascriptDialogOpeningNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("message", ValueConversions<String>::toValue(m_message));
    result->setValue("type", ValueConversions<String>::toValue(m_type));
    result->setValue("hasBrowserHandler", ValueConversions<bool>::toValue(m_hasBrowserHandler));
    if (m_defaultPrompt.isJust())
        result->setValue("defaultPrompt", ValueConversions<String>::toValue(m_defaultPrompt.fromJust()));
    return result;
}

std::unique_ptr<JavascriptDialogOpeningNotification> JavascriptDialogOpeningNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ScreencastFrameNotification> ScreencastFrameNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreencastFrameNotification> result(new ScreencastFrameNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* dataValue = object->get("data");
    errors->setName("data");
    result->m_data = ValueConversions<String>::fromValue(dataValue, errors);
    protocol::Value* metadataValue = object->get("metadata");
    errors->setName("metadata");
    result->m_metadata = ValueConversions<protocol::Page::ScreencastFrameMetadata>::fromValue(metadataValue, errors);
    protocol::Value* sessionIdValue = object->get("sessionId");
    errors->setName("sessionId");
    result->m_sessionId = ValueConversions<int>::fromValue(sessionIdValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreencastFrameNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("data", ValueConversions<String>::toValue(m_data));
    result->setValue("metadata", ValueConversions<protocol::Page::ScreencastFrameMetadata>::toValue(m_metadata.get()));
    result->setValue("sessionId", ValueConversions<int>::toValue(m_sessionId));
    return result;
}

std::unique_ptr<ScreencastFrameNotification> ScreencastFrameNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ScreencastVisibilityChangedNotification> ScreencastVisibilityChangedNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreencastVisibilityChangedNotification> result(new ScreencastVisibilityChangedNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* visibleValue = object->get("visible");
    errors->setName("visible");
    result->m_visible = ValueConversions<bool>::fromValue(visibleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreencastVisibilityChangedNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("visible", ValueConversions<bool>::toValue(m_visible));
    return result;
}

std::unique_ptr<ScreencastVisibilityChangedNotification> ScreencastVisibilityChangedNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

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

void Frontend::InterstitialHidden()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.interstitialHidden"));
}

void Frontend::InterstitialShown()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.interstitialShown"));
}

void Frontend::JavascriptDialogClosed(bool result, const String& userInput)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<JavascriptDialogClosedNotification> messageData = JavascriptDialogClosedNotification::Create()
        .SetResult(result)
        .SetUserInput(userInput)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.javascriptDialogClosed", std::move(messageData)));
}

void Frontend::JavascriptDialogOpening(const String& url, const String& message, const String& type, bool hasBrowserHandler, Maybe<String> defaultPrompt)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<JavascriptDialogOpeningNotification> messageData = JavascriptDialogOpeningNotification::Create()
        .SetUrl(url)
        .SetMessage(message)
        .SetType(type)
        .SetHasBrowserHandler(hasBrowserHandler)
        .Build();
    if (defaultPrompt.isJust())
        messageData->SetDefaultPrompt(std::move(defaultPrompt).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.javascriptDialogOpening", std::move(messageData)));
}

void Frontend::ScreencastFrame(const String& data, std::unique_ptr<protocol::Page::ScreencastFrameMetadata> metadata, int sessionId)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ScreencastFrameNotification> messageData = ScreencastFrameNotification::Create()
        .SetData(data)
        .SetMetadata(std::move(metadata))
        .SetSessionId(sessionId)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.screencastFrame", std::move(messageData)));
}

void Frontend::ScreencastVisibilityChanged(bool visible)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ScreencastVisibilityChangedNotification> messageData = ScreencastVisibilityChangedNotification::Create()
        .SetVisible(visible)
        .Build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("Page.screencastVisibilityChanged", std::move(messageData)));
}

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
        m_dispatchMap["Page.bringToFront"] = &DispatcherImpl::bringToFront;
        m_dispatchMap["Page.captureScreenshot"] = &DispatcherImpl::captureScreenshot;
      m_redirects["Page.clearDeviceMetricsOverride"] = "Emulation.clearDeviceMetricsOverride";
      m_redirects["Page.clearDeviceOrientationOverride"] = "DeviceOrientation.clearDeviceOrientationOverride";
      m_redirects["Page.clearGeolocationOverride"] = "Emulation.clearGeolocationOverride";
      m_redirects["Page.deleteCookie"] = "Network.deleteCookie";
        m_dispatchMap["Page.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Page.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Page.getAppManifest"] = &DispatcherImpl::getAppManifest;
      m_redirects["Page.getCookies"] = "Network.getCookies";
        m_dispatchMap["Page.getNavigationHistory"] = &DispatcherImpl::getNavigationHistory;
        m_dispatchMap["Page.handleJavaScriptDialog"] = &DispatcherImpl::handleJavaScriptDialog;
        m_dispatchMap["Page.navigate"] = &DispatcherImpl::navigate;
        m_dispatchMap["Page.navigateToHistoryEntry"] = &DispatcherImpl::navigateToHistoryEntry;
        m_dispatchMap["Page.printToPDF"] = &DispatcherImpl::printToPDF;
        m_dispatchMap["Page.reload"] = &DispatcherImpl::reload;
        m_dispatchMap["Page.requestAppBanner"] = &DispatcherImpl::requestAppBanner;
        m_dispatchMap["Page.screencastFrameAck"] = &DispatcherImpl::screencastFrameAck;
      m_redirects["Page.setDeviceMetricsOverride"] = "Emulation.setDeviceMetricsOverride";
      m_redirects["Page.setDeviceOrientationOverride"] = "DeviceOrientation.setDeviceOrientationOverride";
        m_dispatchMap["Page.setDownloadBehavior"] = &DispatcherImpl::setDownloadBehavior;
      m_redirects["Page.setGeolocationOverride"] = "Emulation.setGeolocationOverride";
      m_redirects["Page.setTouchEmulationEnabled"] = "Emulation.setTouchEmulationEnabled";
        m_dispatchMap["Page.startScreencast"] = &DispatcherImpl::startScreencast;
        m_dispatchMap["Page.stopLoading"] = &DispatcherImpl::stopLoading;
        m_dispatchMap["Page.crash"] = &DispatcherImpl::crash;
        m_dispatchMap["Page.close"] = &DispatcherImpl::close;
        m_dispatchMap["Page.setWebLifecycleState"] = &DispatcherImpl::setWebLifecycleState;
        m_dispatchMap["Page.stopScreencast"] = &DispatcherImpl::stopScreencast;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status bringToFront(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status captureScreenshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getAppManifest(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status getNavigationHistory(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status handleJavaScriptDialog(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status navigate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status navigateToHistoryEntry(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status printToPDF(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status reload(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status requestAppBanner(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status screencastFrameAck(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setDownloadBehavior(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status startScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status stopLoading(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status crash(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status close(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status setWebLifecycleState(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    DispatchResponse::Status stopScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::bringToFront(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->BringToFront();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

class CaptureScreenshotCallbackImpl : public Backend::CaptureScreenshotCallback, public DispatcherBase::Callback {
public:
    CaptureScreenshotCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
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

DispatchResponse::Status DispatcherImpl::captureScreenshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* formatValue = object ? object->get("format") : nullptr;
    Maybe<String> in_format;
    if (formatValue) {
        errors->setName("format");
        in_format = ValueConversions<String>::fromValue(formatValue, errors);
    }
    protocol::Value* qualityValue = object ? object->get("quality") : nullptr;
    Maybe<int> in_quality;
    if (qualityValue) {
        errors->setName("quality");
        in_quality = ValueConversions<int>::fromValue(qualityValue, errors);
    }
    protocol::Value* clipValue = object ? object->get("clip") : nullptr;
    Maybe<protocol::Page::Viewport> in_clip;
    if (clipValue) {
        errors->setName("clip");
        in_clip = ValueConversions<protocol::Page::Viewport>::fromValue(clipValue, errors);
    }
    protocol::Value* fromSurfaceValue = object ? object->get("fromSurface") : nullptr;
    Maybe<bool> in_fromSurface;
    if (fromSurfaceValue) {
        errors->setName("fromSurface");
        in_fromSurface = ValueConversions<bool>::fromValue(fromSurfaceValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<CaptureScreenshotCallbackImpl> callback(new CaptureScreenshotCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->CaptureScreenshot(std::move(in_format), std::move(in_quality), std::move(in_clip), std::move(in_fromSurface), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
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

class GetAppManifestCallbackImpl : public Backend::GetAppManifestCallback, public DispatcherBase::Callback {
public:
    GetAppManifestCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(const String& url, std::unique_ptr<protocol::Array<protocol::Page::AppManifestError>> errors, Maybe<String> data) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("url", ValueConversions<String>::toValue(url));
        resultObject->setValue("errors", ValueConversions<protocol::Array<protocol::Page::AppManifestError>>::toValue(errors.get()));
        if (data.isJust())
            resultObject->setValue("data", ValueConversions<String>::toValue(data.fromJust()));
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

DispatchResponse::Status DispatcherImpl::getAppManifest(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<GetAppManifestCallbackImpl> callback(new GetAppManifestCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->GetAppManifest(std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::getNavigationHistory(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    int out_currentIndex;
    std::unique_ptr<protocol::Array<protocol::Page::NavigationEntry>> out_entries;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->GetNavigationHistory(&out_currentIndex, &out_entries);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("currentIndex", ValueConversions<int>::toValue(out_currentIndex));
        result->setValue("entries", ValueConversions<protocol::Array<protocol::Page::NavigationEntry>>::toValue(out_entries.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return response.status();
}

DispatchResponse::Status DispatcherImpl::handleJavaScriptDialog(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* acceptValue = object ? object->get("accept") : nullptr;
    errors->setName("accept");
    bool in_accept = ValueConversions<bool>::fromValue(acceptValue, errors);
    protocol::Value* promptTextValue = object ? object->get("promptText") : nullptr;
    Maybe<String> in_promptText;
    if (promptTextValue) {
        errors->setName("promptText");
        in_promptText = ValueConversions<String>::fromValue(promptTextValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->HandleJavaScriptDialog(in_accept, std::move(in_promptText));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

class NavigateCallbackImpl : public Backend::NavigateCallback, public DispatcherBase::Callback {
public:
    NavigateCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId, int callbackId)
        : DispatcherBase::Callback(std::move(backendImpl), callId, callbackId) { }

    void sendSuccess(const String& frameId, Maybe<String> loaderId, Maybe<String> errorText) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("frameId", ValueConversions<String>::toValue(frameId));
        if (loaderId.isJust())
            resultObject->setValue("loaderId", ValueConversions<String>::toValue(loaderId.fromJust()));
        if (errorText.isJust())
            resultObject->setValue("errorText", ValueConversions<String>::toValue(errorText.fromJust()));
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

DispatchResponse::Status DispatcherImpl::navigate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    String in_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* referrerValue = object ? object->get("referrer") : nullptr;
    Maybe<String> in_referrer;
    if (referrerValue) {
        errors->setName("referrer");
        in_referrer = ValueConversions<String>::fromValue(referrerValue, errors);
    }
    protocol::Value* transitionTypeValue = object ? object->get("transitionType") : nullptr;
    Maybe<String> in_transitionType;
    if (transitionTypeValue) {
        errors->setName("transitionType");
        in_transitionType = ValueConversions<String>::fromValue(transitionTypeValue, errors);
    }
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    Maybe<String> in_frameId;
    if (frameIdValue) {
        errors->setName("frameId");
        in_frameId = ValueConversions<String>::fromValue(frameIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    std::unique_ptr<NavigateCallbackImpl> callback(new NavigateCallbackImpl(weakPtr(), callId, nextCallbackId()));
    m_backend->Navigate(in_url, std::move(in_referrer), std::move(in_transitionType), std::move(in_frameId), std::move(callback));
    return (weak->get() && weak->get()->lastCallbackFallThrough()) ? DispatchResponse::kFallThrough : DispatchResponse::kAsync;
}

DispatchResponse::Status DispatcherImpl::navigateToHistoryEntry(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* entryIdValue = object ? object->get("entryId") : nullptr;
    errors->setName("entryId");
    int in_entryId = ValueConversions<int>::fromValue(entryIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->NavigateToHistoryEntry(in_entryId);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
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

DispatchResponse::Status DispatcherImpl::reload(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* ignoreCacheValue = object ? object->get("ignoreCache") : nullptr;
    Maybe<bool> in_ignoreCache;
    if (ignoreCacheValue) {
        errors->setName("ignoreCache");
        in_ignoreCache = ValueConversions<bool>::fromValue(ignoreCacheValue, errors);
    }
    protocol::Value* scriptToEvaluateOnLoadValue = object ? object->get("scriptToEvaluateOnLoad") : nullptr;
    Maybe<String> in_scriptToEvaluateOnLoad;
    if (scriptToEvaluateOnLoadValue) {
        errors->setName("scriptToEvaluateOnLoad");
        in_scriptToEvaluateOnLoad = ValueConversions<String>::fromValue(scriptToEvaluateOnLoadValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Reload(std::move(in_ignoreCache), std::move(in_scriptToEvaluateOnLoad));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::requestAppBanner(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->RequestAppBanner();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::screencastFrameAck(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* sessionIdValue = object ? object->get("sessionId") : nullptr;
    errors->setName("sessionId");
    int in_sessionId = ValueConversions<int>::fromValue(sessionIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->ScreencastFrameAck(in_sessionId);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setDownloadBehavior(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* behaviorValue = object ? object->get("behavior") : nullptr;
    errors->setName("behavior");
    String in_behavior = ValueConversions<String>::fromValue(behaviorValue, errors);
    protocol::Value* downloadPathValue = object ? object->get("downloadPath") : nullptr;
    Maybe<String> in_downloadPath;
    if (downloadPathValue) {
        errors->setName("downloadPath");
        in_downloadPath = ValueConversions<String>::fromValue(downloadPathValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetDownloadBehavior(in_behavior, std::move(in_downloadPath));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::startScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* formatValue = object ? object->get("format") : nullptr;
    Maybe<String> in_format;
    if (formatValue) {
        errors->setName("format");
        in_format = ValueConversions<String>::fromValue(formatValue, errors);
    }
    protocol::Value* qualityValue = object ? object->get("quality") : nullptr;
    Maybe<int> in_quality;
    if (qualityValue) {
        errors->setName("quality");
        in_quality = ValueConversions<int>::fromValue(qualityValue, errors);
    }
    protocol::Value* maxWidthValue = object ? object->get("maxWidth") : nullptr;
    Maybe<int> in_maxWidth;
    if (maxWidthValue) {
        errors->setName("maxWidth");
        in_maxWidth = ValueConversions<int>::fromValue(maxWidthValue, errors);
    }
    protocol::Value* maxHeightValue = object ? object->get("maxHeight") : nullptr;
    Maybe<int> in_maxHeight;
    if (maxHeightValue) {
        errors->setName("maxHeight");
        in_maxHeight = ValueConversions<int>::fromValue(maxHeightValue, errors);
    }
    protocol::Value* everyNthFrameValue = object ? object->get("everyNthFrame") : nullptr;
    Maybe<int> in_everyNthFrame;
    if (everyNthFrameValue) {
        errors->setName("everyNthFrame");
        in_everyNthFrame = ValueConversions<int>::fromValue(everyNthFrameValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->StartScreencast(std::move(in_format), std::move(in_quality), std::move(in_maxWidth), std::move(in_maxHeight), std::move(in_everyNthFrame));
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::stopLoading(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->StopLoading();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::crash(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Crash();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::close(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->Close();
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::setWebLifecycleState(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* stateValue = object ? object->get("state") : nullptr;
    errors->setName("state");
    String in_state = ValueConversions<String>::fromValue(stateValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetWebLifecycleState(in_state);
    if (response.status() == DispatchResponse::kFallThrough)
        return response.status();
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return response.status();
}

DispatchResponse::Status DispatcherImpl::stopScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->StopScreencast();
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
} // namespace content
} // namespace protocol
