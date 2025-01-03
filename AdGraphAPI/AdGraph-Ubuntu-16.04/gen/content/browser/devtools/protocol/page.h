// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Page_h
#define content_protocol_Page_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "content/browser/devtools/protocol/dom.h"
#include "content/browser/devtools/protocol/network.h"

namespace content {
namespace protocol {
namespace Page {

// ------------- Forward and enum declarations.
using ResourceType = String;
using FrameId = String;
using TransitionType = String;
class NavigationEntry;
class ScreencastFrameMetadata;
using DialogType = String;
class AppManifestError;
class Viewport;
using InterstitialHiddenNotification = Object;
using InterstitialShownNotification = Object;
class JavascriptDialogClosedNotification;
class JavascriptDialogOpeningNotification;
class ScreencastFrameNotification;
class ScreencastVisibilityChangedNotification;

namespace ResourceTypeEnum {
CONTENT_EXPORT extern const char Document[];
CONTENT_EXPORT extern const char Stylesheet[];
CONTENT_EXPORT extern const char Image[];
CONTENT_EXPORT extern const char Media[];
CONTENT_EXPORT extern const char Font[];
CONTENT_EXPORT extern const char Script[];
CONTENT_EXPORT extern const char TextTrack[];
CONTENT_EXPORT extern const char XHR[];
CONTENT_EXPORT extern const char Fetch[];
CONTENT_EXPORT extern const char EventSource[];
CONTENT_EXPORT extern const char WebSocket[];
CONTENT_EXPORT extern const char Manifest[];
CONTENT_EXPORT extern const char SignedExchange[];
CONTENT_EXPORT extern const char Other[];
} // namespace ResourceTypeEnum

namespace TransitionTypeEnum {
CONTENT_EXPORT extern const char Link[];
CONTENT_EXPORT extern const char Typed[];
CONTENT_EXPORT extern const char Auto_bookmark[];
CONTENT_EXPORT extern const char Auto_subframe[];
CONTENT_EXPORT extern const char Manual_subframe[];
CONTENT_EXPORT extern const char Generated[];
CONTENT_EXPORT extern const char Auto_toplevel[];
CONTENT_EXPORT extern const char Form_submit[];
CONTENT_EXPORT extern const char Reload[];
CONTENT_EXPORT extern const char Keyword[];
CONTENT_EXPORT extern const char Keyword_generated[];
CONTENT_EXPORT extern const char Other[];
} // namespace TransitionTypeEnum

namespace DialogTypeEnum {
CONTENT_EXPORT extern const char Alert[];
CONTENT_EXPORT extern const char Confirm[];
CONTENT_EXPORT extern const char Prompt[];
CONTENT_EXPORT extern const char Beforeunload[];
} // namespace DialogTypeEnum

namespace CaptureScreenshot {
namespace FormatEnum {
CONTENT_EXPORT extern const char* Jpeg;
CONTENT_EXPORT extern const char* Png;
} // FormatEnum
} // CaptureScreenshot

namespace SetDownloadBehavior {
namespace BehaviorEnum {
CONTENT_EXPORT extern const char* Deny;
CONTENT_EXPORT extern const char* Allow;
CONTENT_EXPORT extern const char* Default;
} // BehaviorEnum
} // SetDownloadBehavior

namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
CONTENT_EXPORT extern const char* Mobile;
CONTENT_EXPORT extern const char* Desktop;
} // ConfigurationEnum
} // SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
CONTENT_EXPORT extern const char* Jpeg;
CONTENT_EXPORT extern const char* Png;
} // FormatEnum
} // StartScreencast

namespace SetWebLifecycleState {
namespace StateEnum {
CONTENT_EXPORT extern const char* Frozen;
CONTENT_EXPORT extern const char* Active;
} // StateEnum
} // SetWebLifecycleState

namespace FrameScheduledNavigation {
namespace ReasonEnum {
CONTENT_EXPORT extern const char* FormSubmissionGet;
CONTENT_EXPORT extern const char* FormSubmissionPost;
CONTENT_EXPORT extern const char* HttpHeaderRefresh;
CONTENT_EXPORT extern const char* ScriptInitiated;
CONTENT_EXPORT extern const char* MetaTagRefresh;
CONTENT_EXPORT extern const char* PageBlockInterstitial;
CONTENT_EXPORT extern const char* Reload;
} // ReasonEnum
} // FrameScheduledNavigation

// ------------- Type and builder declarations.

class CONTENT_EXPORT NavigationEntry : public Serializable{
    PROTOCOL_DISALLOW_COPY(NavigationEntry);
public:
    static std::unique_ptr<NavigationEntry> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~NavigationEntry() override { }

    int GetId() { return m_id; }
    void SetId(int value) { m_id = value; }

    String GetUrl() { return m_url; }
    void SetUrl(const String& value) { m_url = value; }

    String GetUserTypedURL() { return m_userTypedURL; }
    void SetUserTypedURL(const String& value) { m_userTypedURL = value; }

    String GetTitle() { return m_title; }
    void SetTitle(const String& value) { m_title = value; }

    String GetTransitionType() { return m_transitionType; }
    void SetTransitionType(const String& value) { m_transitionType = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<NavigationEntry> clone() const;

    template<int STATE>
    class NavigationEntryBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            IdSet = 1 << 1,
            UrlSet = 1 << 2,
            UserTypedURLSet = 1 << 3,
            TitleSet = 1 << 4,
            TransitionTypeSet = 1 << 5,
            AllFieldsSet = (IdSet | UrlSet | UserTypedURLSet | TitleSet | TransitionTypeSet | 0)};


        NavigationEntryBuilder<STATE | IdSet>& SetId(int value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->SetId(value);
            return castState<IdSet>();
        }

        NavigationEntryBuilder<STATE | UrlSet>& SetUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->SetUrl(value);
            return castState<UrlSet>();
        }

        NavigationEntryBuilder<STATE | UserTypedURLSet>& SetUserTypedURL(const String& value)
        {
            static_assert(!(STATE & UserTypedURLSet), "property userTypedURL should not be set yet");
            m_result->SetUserTypedURL(value);
            return castState<UserTypedURLSet>();
        }

        NavigationEntryBuilder<STATE | TitleSet>& SetTitle(const String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->SetTitle(value);
            return castState<TitleSet>();
        }

        NavigationEntryBuilder<STATE | TransitionTypeSet>& SetTransitionType(const String& value)
        {
            static_assert(!(STATE & TransitionTypeSet), "property transitionType should not be set yet");
            m_result->SetTransitionType(value);
            return castState<TransitionTypeSet>();
        }

        std::unique_ptr<NavigationEntry> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NavigationEntry;
        NavigationEntryBuilder() : m_result(new NavigationEntry()) { }

        template<int STEP> NavigationEntryBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NavigationEntryBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::NavigationEntry> m_result;
    };

    static NavigationEntryBuilder<0> Create()
    {
        return NavigationEntryBuilder<0>();
    }

private:
    NavigationEntry()
    {
          m_id = 0;
    }

    int m_id;
    String m_url;
    String m_userTypedURL;
    String m_title;
    String m_transitionType;
};


class CONTENT_EXPORT ScreencastFrameMetadata : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreencastFrameMetadata);
public:
    static std::unique_ptr<ScreencastFrameMetadata> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreencastFrameMetadata() override { }

    double GetOffsetTop() { return m_offsetTop; }
    void SetOffsetTop(double value) { m_offsetTop = value; }

    double GetPageScaleFactor() { return m_pageScaleFactor; }
    void SetPageScaleFactor(double value) { m_pageScaleFactor = value; }

    double GetDeviceWidth() { return m_deviceWidth; }
    void SetDeviceWidth(double value) { m_deviceWidth = value; }

    double GetDeviceHeight() { return m_deviceHeight; }
    void SetDeviceHeight(double value) { m_deviceHeight = value; }

    double GetScrollOffsetX() { return m_scrollOffsetX; }
    void SetScrollOffsetX(double value) { m_scrollOffsetX = value; }

    double GetScrollOffsetY() { return m_scrollOffsetY; }
    void SetScrollOffsetY(double value) { m_scrollOffsetY = value; }

    bool HasTimestamp() { return m_timestamp.isJust(); }
    double GetTimestamp(double defaultValue) { return m_timestamp.isJust() ? m_timestamp.fromJust() : defaultValue; }
    void SetTimestamp(double value) { m_timestamp = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ScreencastFrameMetadata> clone() const;

    template<int STATE>
    class ScreencastFrameMetadataBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            OffsetTopSet = 1 << 1,
            PageScaleFactorSet = 1 << 2,
            DeviceWidthSet = 1 << 3,
            DeviceHeightSet = 1 << 4,
            ScrollOffsetXSet = 1 << 5,
            ScrollOffsetYSet = 1 << 6,
            AllFieldsSet = (OffsetTopSet | PageScaleFactorSet | DeviceWidthSet | DeviceHeightSet | ScrollOffsetXSet | ScrollOffsetYSet | 0)};


        ScreencastFrameMetadataBuilder<STATE | OffsetTopSet>& SetOffsetTop(double value)
        {
            static_assert(!(STATE & OffsetTopSet), "property offsetTop should not be set yet");
            m_result->SetOffsetTop(value);
            return castState<OffsetTopSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | PageScaleFactorSet>& SetPageScaleFactor(double value)
        {
            static_assert(!(STATE & PageScaleFactorSet), "property pageScaleFactor should not be set yet");
            m_result->SetPageScaleFactor(value);
            return castState<PageScaleFactorSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | DeviceWidthSet>& SetDeviceWidth(double value)
        {
            static_assert(!(STATE & DeviceWidthSet), "property deviceWidth should not be set yet");
            m_result->SetDeviceWidth(value);
            return castState<DeviceWidthSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | DeviceHeightSet>& SetDeviceHeight(double value)
        {
            static_assert(!(STATE & DeviceHeightSet), "property deviceHeight should not be set yet");
            m_result->SetDeviceHeight(value);
            return castState<DeviceHeightSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | ScrollOffsetXSet>& SetScrollOffsetX(double value)
        {
            static_assert(!(STATE & ScrollOffsetXSet), "property scrollOffsetX should not be set yet");
            m_result->SetScrollOffsetX(value);
            return castState<ScrollOffsetXSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | ScrollOffsetYSet>& SetScrollOffsetY(double value)
        {
            static_assert(!(STATE & ScrollOffsetYSet), "property scrollOffsetY should not be set yet");
            m_result->SetScrollOffsetY(value);
            return castState<ScrollOffsetYSet>();
        }

        ScreencastFrameMetadataBuilder<STATE>& SetTimestamp(double value)
        {
            m_result->SetTimestamp(value);
            return *this;
        }

        std::unique_ptr<ScreencastFrameMetadata> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreencastFrameMetadata;
        ScreencastFrameMetadataBuilder() : m_result(new ScreencastFrameMetadata()) { }

        template<int STEP> ScreencastFrameMetadataBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreencastFrameMetadataBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::ScreencastFrameMetadata> m_result;
    };

    static ScreencastFrameMetadataBuilder<0> Create()
    {
        return ScreencastFrameMetadataBuilder<0>();
    }

private:
    ScreencastFrameMetadata()
    {
          m_offsetTop = 0;
          m_pageScaleFactor = 0;
          m_deviceWidth = 0;
          m_deviceHeight = 0;
          m_scrollOffsetX = 0;
          m_scrollOffsetY = 0;
    }

    double m_offsetTop;
    double m_pageScaleFactor;
    double m_deviceWidth;
    double m_deviceHeight;
    double m_scrollOffsetX;
    double m_scrollOffsetY;
    Maybe<double> m_timestamp;
};


class CONTENT_EXPORT AppManifestError : public Serializable{
    PROTOCOL_DISALLOW_COPY(AppManifestError);
public:
    static std::unique_ptr<AppManifestError> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AppManifestError() override { }

    String GetMessage() { return m_message; }
    void SetMessage(const String& value) { m_message = value; }

    int GetCritical() { return m_critical; }
    void SetCritical(int value) { m_critical = value; }

    int GetLine() { return m_line; }
    void SetLine(int value) { m_line = value; }

    int GetColumn() { return m_column; }
    void SetColumn(int value) { m_column = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<AppManifestError> clone() const;

    template<int STATE>
    class AppManifestErrorBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            MessageSet = 1 << 1,
            CriticalSet = 1 << 2,
            LineSet = 1 << 3,
            ColumnSet = 1 << 4,
            AllFieldsSet = (MessageSet | CriticalSet | LineSet | ColumnSet | 0)};


        AppManifestErrorBuilder<STATE | MessageSet>& SetMessage(const String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->SetMessage(value);
            return castState<MessageSet>();
        }

        AppManifestErrorBuilder<STATE | CriticalSet>& SetCritical(int value)
        {
            static_assert(!(STATE & CriticalSet), "property critical should not be set yet");
            m_result->SetCritical(value);
            return castState<CriticalSet>();
        }

        AppManifestErrorBuilder<STATE | LineSet>& SetLine(int value)
        {
            static_assert(!(STATE & LineSet), "property line should not be set yet");
            m_result->SetLine(value);
            return castState<LineSet>();
        }

        AppManifestErrorBuilder<STATE | ColumnSet>& SetColumn(int value)
        {
            static_assert(!(STATE & ColumnSet), "property column should not be set yet");
            m_result->SetColumn(value);
            return castState<ColumnSet>();
        }

        std::unique_ptr<AppManifestError> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AppManifestError;
        AppManifestErrorBuilder() : m_result(new AppManifestError()) { }

        template<int STEP> AppManifestErrorBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AppManifestErrorBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::AppManifestError> m_result;
    };

    static AppManifestErrorBuilder<0> Create()
    {
        return AppManifestErrorBuilder<0>();
    }

private:
    AppManifestError()
    {
          m_critical = 0;
          m_line = 0;
          m_column = 0;
    }

    String m_message;
    int m_critical;
    int m_line;
    int m_column;
};


class CONTENT_EXPORT Viewport : public Serializable{
    PROTOCOL_DISALLOW_COPY(Viewport);
public:
    static std::unique_ptr<Viewport> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~Viewport() override { }

    double GetX() { return m_x; }
    void SetX(double value) { m_x = value; }

    double GetY() { return m_y; }
    void SetY(double value) { m_y = value; }

    double GetWidth() { return m_width; }
    void SetWidth(double value) { m_width = value; }

    double GetHeight() { return m_height; }
    void SetHeight(double value) { m_height = value; }

    double GetScale() { return m_scale; }
    void SetScale(double value) { m_scale = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<Viewport> clone() const;

    template<int STATE>
    class ViewportBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            XSet = 1 << 1,
            YSet = 1 << 2,
            WidthSet = 1 << 3,
            HeightSet = 1 << 4,
            ScaleSet = 1 << 5,
            AllFieldsSet = (XSet | YSet | WidthSet | HeightSet | ScaleSet | 0)};


        ViewportBuilder<STATE | XSet>& SetX(double value)
        {
            static_assert(!(STATE & XSet), "property x should not be set yet");
            m_result->SetX(value);
            return castState<XSet>();
        }

        ViewportBuilder<STATE | YSet>& SetY(double value)
        {
            static_assert(!(STATE & YSet), "property y should not be set yet");
            m_result->SetY(value);
            return castState<YSet>();
        }

        ViewportBuilder<STATE | WidthSet>& SetWidth(double value)
        {
            static_assert(!(STATE & WidthSet), "property width should not be set yet");
            m_result->SetWidth(value);
            return castState<WidthSet>();
        }

        ViewportBuilder<STATE | HeightSet>& SetHeight(double value)
        {
            static_assert(!(STATE & HeightSet), "property height should not be set yet");
            m_result->SetHeight(value);
            return castState<HeightSet>();
        }

        ViewportBuilder<STATE | ScaleSet>& SetScale(double value)
        {
            static_assert(!(STATE & ScaleSet), "property scale should not be set yet");
            m_result->SetScale(value);
            return castState<ScaleSet>();
        }

        std::unique_ptr<Viewport> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Viewport;
        ViewportBuilder() : m_result(new Viewport()) { }

        template<int STEP> ViewportBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ViewportBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::Viewport> m_result;
    };

    static ViewportBuilder<0> Create()
    {
        return ViewportBuilder<0>();
    }

private:
    Viewport()
    {
          m_x = 0;
          m_y = 0;
          m_width = 0;
          m_height = 0;
          m_scale = 0;
    }

    double m_x;
    double m_y;
    double m_width;
    double m_height;
    double m_scale;
};


class CONTENT_EXPORT JavascriptDialogClosedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(JavascriptDialogClosedNotification);
public:
    static std::unique_ptr<JavascriptDialogClosedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~JavascriptDialogClosedNotification() override { }

    bool GetResult() { return m_result; }
    void SetResult(bool value) { m_result = value; }

    String GetUserInput() { return m_userInput; }
    void SetUserInput(const String& value) { m_userInput = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<JavascriptDialogClosedNotification> clone() const;

    template<int STATE>
    class JavascriptDialogClosedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ResultSet = 1 << 1,
            UserInputSet = 1 << 2,
            AllFieldsSet = (ResultSet | UserInputSet | 0)};


        JavascriptDialogClosedNotificationBuilder<STATE | ResultSet>& SetResult(bool value)
        {
            static_assert(!(STATE & ResultSet), "property result should not be set yet");
            m_result->SetResult(value);
            return castState<ResultSet>();
        }

        JavascriptDialogClosedNotificationBuilder<STATE | UserInputSet>& SetUserInput(const String& value)
        {
            static_assert(!(STATE & UserInputSet), "property userInput should not be set yet");
            m_result->SetUserInput(value);
            return castState<UserInputSet>();
        }

        std::unique_ptr<JavascriptDialogClosedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class JavascriptDialogClosedNotification;
        JavascriptDialogClosedNotificationBuilder() : m_result(new JavascriptDialogClosedNotification()) { }

        template<int STEP> JavascriptDialogClosedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<JavascriptDialogClosedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::JavascriptDialogClosedNotification> m_result;
    };

    static JavascriptDialogClosedNotificationBuilder<0> Create()
    {
        return JavascriptDialogClosedNotificationBuilder<0>();
    }

private:
    JavascriptDialogClosedNotification()
    {
          m_result = false;
    }

    bool m_result;
    String m_userInput;
};


class CONTENT_EXPORT JavascriptDialogOpeningNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(JavascriptDialogOpeningNotification);
public:
    static std::unique_ptr<JavascriptDialogOpeningNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~JavascriptDialogOpeningNotification() override { }

    String GetUrl() { return m_url; }
    void SetUrl(const String& value) { m_url = value; }

    String GetMessage() { return m_message; }
    void SetMessage(const String& value) { m_message = value; }

    String GetType() { return m_type; }
    void SetType(const String& value) { m_type = value; }

    bool GetHasBrowserHandler() { return m_hasBrowserHandler; }
    void SetHasBrowserHandler(bool value) { m_hasBrowserHandler = value; }

    bool HasDefaultPrompt() { return m_defaultPrompt.isJust(); }
    String GetDefaultPrompt(const String& defaultValue) { return m_defaultPrompt.isJust() ? m_defaultPrompt.fromJust() : defaultValue; }
    void SetDefaultPrompt(const String& value) { m_defaultPrompt = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<JavascriptDialogOpeningNotification> clone() const;

    template<int STATE>
    class JavascriptDialogOpeningNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            UrlSet = 1 << 1,
            MessageSet = 1 << 2,
            TypeSet = 1 << 3,
            HasBrowserHandlerSet = 1 << 4,
            AllFieldsSet = (UrlSet | MessageSet | TypeSet | HasBrowserHandlerSet | 0)};


        JavascriptDialogOpeningNotificationBuilder<STATE | UrlSet>& SetUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->SetUrl(value);
            return castState<UrlSet>();
        }

        JavascriptDialogOpeningNotificationBuilder<STATE | MessageSet>& SetMessage(const String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->SetMessage(value);
            return castState<MessageSet>();
        }

        JavascriptDialogOpeningNotificationBuilder<STATE | TypeSet>& SetType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->SetType(value);
            return castState<TypeSet>();
        }

        JavascriptDialogOpeningNotificationBuilder<STATE | HasBrowserHandlerSet>& SetHasBrowserHandler(bool value)
        {
            static_assert(!(STATE & HasBrowserHandlerSet), "property hasBrowserHandler should not be set yet");
            m_result->SetHasBrowserHandler(value);
            return castState<HasBrowserHandlerSet>();
        }

        JavascriptDialogOpeningNotificationBuilder<STATE>& SetDefaultPrompt(const String& value)
        {
            m_result->SetDefaultPrompt(value);
            return *this;
        }

        std::unique_ptr<JavascriptDialogOpeningNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class JavascriptDialogOpeningNotification;
        JavascriptDialogOpeningNotificationBuilder() : m_result(new JavascriptDialogOpeningNotification()) { }

        template<int STEP> JavascriptDialogOpeningNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<JavascriptDialogOpeningNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::JavascriptDialogOpeningNotification> m_result;
    };

    static JavascriptDialogOpeningNotificationBuilder<0> Create()
    {
        return JavascriptDialogOpeningNotificationBuilder<0>();
    }

private:
    JavascriptDialogOpeningNotification()
    {
          m_hasBrowserHandler = false;
    }

    String m_url;
    String m_message;
    String m_type;
    bool m_hasBrowserHandler;
    Maybe<String> m_defaultPrompt;
};


class CONTENT_EXPORT ScreencastFrameNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreencastFrameNotification);
public:
    static std::unique_ptr<ScreencastFrameNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreencastFrameNotification() override { }

    String GetData() { return m_data; }
    void SetData(const String& value) { m_data = value; }

    protocol::Page::ScreencastFrameMetadata* GetMetadata() { return m_metadata.get(); }
    void SetMetadata(std::unique_ptr<protocol::Page::ScreencastFrameMetadata> value) { m_metadata = std::move(value); }

    int GetSessionId() { return m_sessionId; }
    void SetSessionId(int value) { m_sessionId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ScreencastFrameNotification> clone() const;

    template<int STATE>
    class ScreencastFrameNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            DataSet = 1 << 1,
            MetadataSet = 1 << 2,
            SessionIdSet = 1 << 3,
            AllFieldsSet = (DataSet | MetadataSet | SessionIdSet | 0)};


        ScreencastFrameNotificationBuilder<STATE | DataSet>& SetData(const String& value)
        {
            static_assert(!(STATE & DataSet), "property data should not be set yet");
            m_result->SetData(value);
            return castState<DataSet>();
        }

        ScreencastFrameNotificationBuilder<STATE | MetadataSet>& SetMetadata(std::unique_ptr<protocol::Page::ScreencastFrameMetadata> value)
        {
            static_assert(!(STATE & MetadataSet), "property metadata should not be set yet");
            m_result->SetMetadata(std::move(value));
            return castState<MetadataSet>();
        }

        ScreencastFrameNotificationBuilder<STATE | SessionIdSet>& SetSessionId(int value)
        {
            static_assert(!(STATE & SessionIdSet), "property sessionId should not be set yet");
            m_result->SetSessionId(value);
            return castState<SessionIdSet>();
        }

        std::unique_ptr<ScreencastFrameNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreencastFrameNotification;
        ScreencastFrameNotificationBuilder() : m_result(new ScreencastFrameNotification()) { }

        template<int STEP> ScreencastFrameNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreencastFrameNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::ScreencastFrameNotification> m_result;
    };

    static ScreencastFrameNotificationBuilder<0> Create()
    {
        return ScreencastFrameNotificationBuilder<0>();
    }

private:
    ScreencastFrameNotification()
    {
          m_sessionId = 0;
    }

    String m_data;
    std::unique_ptr<protocol::Page::ScreencastFrameMetadata> m_metadata;
    int m_sessionId;
};


class CONTENT_EXPORT ScreencastVisibilityChangedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ScreencastVisibilityChangedNotification);
public:
    static std::unique_ptr<ScreencastVisibilityChangedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ScreencastVisibilityChangedNotification() override { }

    bool GetVisible() { return m_visible; }
    void SetVisible(bool value) { m_visible = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ScreencastVisibilityChangedNotification> clone() const;

    template<int STATE>
    class ScreencastVisibilityChangedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            VisibleSet = 1 << 1,
            AllFieldsSet = (VisibleSet | 0)};


        ScreencastVisibilityChangedNotificationBuilder<STATE | VisibleSet>& SetVisible(bool value)
        {
            static_assert(!(STATE & VisibleSet), "property visible should not be set yet");
            m_result->SetVisible(value);
            return castState<VisibleSet>();
        }

        std::unique_ptr<ScreencastVisibilityChangedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreencastVisibilityChangedNotification;
        ScreencastVisibilityChangedNotificationBuilder() : m_result(new ScreencastVisibilityChangedNotification()) { }

        template<int STEP> ScreencastVisibilityChangedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreencastVisibilityChangedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::ScreencastVisibilityChangedNotification> m_result;
    };

    static ScreencastVisibilityChangedNotificationBuilder<0> Create()
    {
        return ScreencastVisibilityChangedNotificationBuilder<0>();
    }

private:
    ScreencastVisibilityChangedNotification()
    {
          m_visible = false;
    }

    bool m_visible;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse BringToFront() = 0;
    class CONTENT_EXPORT CaptureScreenshotCallback {
    public:
        virtual void sendSuccess(const String& data) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~CaptureScreenshotCallback() { }
    };
    virtual void CaptureScreenshot(Maybe<String> in_format, Maybe<int> in_quality, Maybe<protocol::Page::Viewport> in_clip, Maybe<bool> in_fromSurface, std::unique_ptr<CaptureScreenshotCallback> callback) = 0;
    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse Enable() = 0;
    class CONTENT_EXPORT GetAppManifestCallback {
    public:
        virtual void sendSuccess(const String& url, std::unique_ptr<protocol::Array<protocol::Page::AppManifestError>> errors, Maybe<String> data) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetAppManifestCallback() { }
    };
    virtual void GetAppManifest(std::unique_ptr<GetAppManifestCallback> callback) = 0;
    virtual DispatchResponse GetNavigationHistory(int* out_currentIndex, std::unique_ptr<protocol::Array<protocol::Page::NavigationEntry>>* out_entries) = 0;
    virtual DispatchResponse HandleJavaScriptDialog(bool in_accept, Maybe<String> in_promptText) = 0;
    class CONTENT_EXPORT NavigateCallback {
    public:
        virtual void sendSuccess(const String& frameId, Maybe<String> loaderId, Maybe<String> errorText) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~NavigateCallback() { }
    };
    virtual void Navigate(const String& in_url, Maybe<String> in_referrer, Maybe<String> in_transitionType, Maybe<String> in_frameId, std::unique_ptr<NavigateCallback> callback) = 0;
    virtual DispatchResponse NavigateToHistoryEntry(int in_entryId) = 0;
    class CONTENT_EXPORT PrintToPDFCallback {
    public:
        virtual void sendSuccess(const String& data) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~PrintToPDFCallback() { }
    };
    virtual void PrintToPDF(Maybe<bool> in_landscape, Maybe<bool> in_displayHeaderFooter, Maybe<bool> in_printBackground, Maybe<double> in_scale, Maybe<double> in_paperWidth, Maybe<double> in_paperHeight, Maybe<double> in_marginTop, Maybe<double> in_marginBottom, Maybe<double> in_marginLeft, Maybe<double> in_marginRight, Maybe<String> in_pageRanges, Maybe<bool> in_ignoreInvalidPageRanges, Maybe<String> in_headerTemplate, Maybe<String> in_footerTemplate, Maybe<bool> in_preferCSSPageSize, std::unique_ptr<PrintToPDFCallback> callback) = 0;
    virtual DispatchResponse Reload(Maybe<bool> in_ignoreCache, Maybe<String> in_scriptToEvaluateOnLoad) = 0;
    virtual DispatchResponse RequestAppBanner() = 0;
    virtual DispatchResponse ScreencastFrameAck(int in_sessionId) = 0;
    virtual DispatchResponse SetDownloadBehavior(const String& in_behavior, Maybe<String> in_downloadPath) = 0;
    virtual DispatchResponse StartScreencast(Maybe<String> in_format, Maybe<int> in_quality, Maybe<int> in_maxWidth, Maybe<int> in_maxHeight, Maybe<int> in_everyNthFrame) = 0;
    virtual DispatchResponse StopLoading() = 0;
    virtual DispatchResponse Crash() = 0;
    virtual DispatchResponse Close() = 0;
    virtual DispatchResponse SetWebLifecycleState(const String& in_state) = 0;
    virtual DispatchResponse StopScreencast() = 0;

};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void InterstitialHidden();
    void InterstitialShown();
    void JavascriptDialogClosed(bool result, const String& userInput);
    void JavascriptDialogOpening(const String& url, const String& message, const String& type, bool hasBrowserHandler, Maybe<String> defaultPrompt = Maybe<String>());
    void ScreencastFrame(const String& data, std::unique_ptr<protocol::Page::ScreencastFrameMetadata> metadata, int sessionId);
    void ScreencastVisibilityChanged(bool visible);

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

} // namespace Page
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Page_h)
