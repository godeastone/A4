// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ui_devtools_protocol_CSS_h
#define ui_devtools_protocol_CSS_h

#include "components/ui_devtools/devtools_export.h"
#include "components/ui_devtools/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace ui_devtools {
namespace protocol {
namespace CSS {

// ------------- Forward and enum declarations.
using StyleSheetId = String;
class SourceRange;
class StyleDeclarationEdit;
class CSSProperty;
class CSSStyle;
class StyleSheetChangedNotification;

// ------------- Type and builder declarations.

class UI_DEVTOOLS_EXPORT SourceRange : public Serializable{
    PROTOCOL_DISALLOW_COPY(SourceRange);
public:
    static std::unique_ptr<SourceRange> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SourceRange() override { }

    int getStartLine() { return m_startLine; }
    void setStartLine(int value) { m_startLine = value; }

    int getStartColumn() { return m_startColumn; }
    void setStartColumn(int value) { m_startColumn = value; }

    int getEndLine() { return m_endLine; }
    void setEndLine(int value) { m_endLine = value; }

    int getEndColumn() { return m_endColumn; }
    void setEndColumn(int value) { m_endColumn = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SourceRange> clone() const;

    template<int STATE>
    class SourceRangeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StartLineSet = 1 << 1,
            StartColumnSet = 1 << 2,
            EndLineSet = 1 << 3,
            EndColumnSet = 1 << 4,
            AllFieldsSet = (StartLineSet | StartColumnSet | EndLineSet | EndColumnSet | 0)};


        SourceRangeBuilder<STATE | StartLineSet>& setStartLine(int value)
        {
            static_assert(!(STATE & StartLineSet), "property startLine should not be set yet");
            m_result->setStartLine(value);
            return castState<StartLineSet>();
        }

        SourceRangeBuilder<STATE | StartColumnSet>& setStartColumn(int value)
        {
            static_assert(!(STATE & StartColumnSet), "property startColumn should not be set yet");
            m_result->setStartColumn(value);
            return castState<StartColumnSet>();
        }

        SourceRangeBuilder<STATE | EndLineSet>& setEndLine(int value)
        {
            static_assert(!(STATE & EndLineSet), "property endLine should not be set yet");
            m_result->setEndLine(value);
            return castState<EndLineSet>();
        }

        SourceRangeBuilder<STATE | EndColumnSet>& setEndColumn(int value)
        {
            static_assert(!(STATE & EndColumnSet), "property endColumn should not be set yet");
            m_result->setEndColumn(value);
            return castState<EndColumnSet>();
        }

        std::unique_ptr<SourceRange> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SourceRange;
        SourceRangeBuilder() : m_result(new SourceRange()) { }

        template<int STEP> SourceRangeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SourceRangeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CSS::SourceRange> m_result;
    };

    static SourceRangeBuilder<0> create()
    {
        return SourceRangeBuilder<0>();
    }

private:
    SourceRange()
    {
          m_startLine = 0;
          m_startColumn = 0;
          m_endLine = 0;
          m_endColumn = 0;
    }

    int m_startLine;
    int m_startColumn;
    int m_endLine;
    int m_endColumn;
};


class UI_DEVTOOLS_EXPORT StyleDeclarationEdit : public Serializable{
    PROTOCOL_DISALLOW_COPY(StyleDeclarationEdit);
public:
    static std::unique_ptr<StyleDeclarationEdit> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~StyleDeclarationEdit() override { }

    String getStyleSheetId() { return m_styleSheetId; }
    void setStyleSheetId(const String& value) { m_styleSheetId = value; }

    String getText() { return m_text; }
    void setText(const String& value) { m_text = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<StyleDeclarationEdit> clone() const;

    template<int STATE>
    class StyleDeclarationEditBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StyleSheetIdSet = 1 << 1,
            TextSet = 1 << 2,
            AllFieldsSet = (StyleSheetIdSet | TextSet | 0)};


        StyleDeclarationEditBuilder<STATE | StyleSheetIdSet>& setStyleSheetId(const String& value)
        {
            static_assert(!(STATE & StyleSheetIdSet), "property styleSheetId should not be set yet");
            m_result->setStyleSheetId(value);
            return castState<StyleSheetIdSet>();
        }

        StyleDeclarationEditBuilder<STATE | TextSet>& setText(const String& value)
        {
            static_assert(!(STATE & TextSet), "property text should not be set yet");
            m_result->setText(value);
            return castState<TextSet>();
        }

        std::unique_ptr<StyleDeclarationEdit> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StyleDeclarationEdit;
        StyleDeclarationEditBuilder() : m_result(new StyleDeclarationEdit()) { }

        template<int STEP> StyleDeclarationEditBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StyleDeclarationEditBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CSS::StyleDeclarationEdit> m_result;
    };

    static StyleDeclarationEditBuilder<0> create()
    {
        return StyleDeclarationEditBuilder<0>();
    }

private:
    StyleDeclarationEdit()
    {
    }

    String m_styleSheetId;
    String m_text;
};


class UI_DEVTOOLS_EXPORT CSSProperty : public Serializable{
    PROTOCOL_DISALLOW_COPY(CSSProperty);
public:
    static std::unique_ptr<CSSProperty> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CSSProperty() override { }

    String getName() { return m_name; }
    void setName(const String& value) { m_name = value; }

    String getValue() { return m_value; }
    void setValue(const String& value) { m_value = value; }

    bool hasRange() { return m_range.isJust(); }
    protocol::CSS::SourceRange* getRange(protocol::CSS::SourceRange* defaultValue) { return m_range.isJust() ? m_range.fromJust() : defaultValue; }
    void setRange(std::unique_ptr<protocol::CSS::SourceRange> value) { m_range = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CSSProperty> clone() const;

    template<int STATE>
    class CSSPropertyBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            ValueSet = 1 << 2,
            AllFieldsSet = (NameSet | ValueSet | 0)};


        CSSPropertyBuilder<STATE | NameSet>& setName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        CSSPropertyBuilder<STATE | ValueSet>& setValue(const String& value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->setValue(value);
            return castState<ValueSet>();
        }

        CSSPropertyBuilder<STATE>& setRange(std::unique_ptr<protocol::CSS::SourceRange> value)
        {
            m_result->setRange(std::move(value));
            return *this;
        }

        std::unique_ptr<CSSProperty> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CSSProperty;
        CSSPropertyBuilder() : m_result(new CSSProperty()) { }

        template<int STEP> CSSPropertyBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CSSPropertyBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CSS::CSSProperty> m_result;
    };

    static CSSPropertyBuilder<0> create()
    {
        return CSSPropertyBuilder<0>();
    }

private:
    CSSProperty()
    {
    }

    String m_name;
    String m_value;
    Maybe<protocol::CSS::SourceRange> m_range;
};


class UI_DEVTOOLS_EXPORT CSSStyle : public Serializable{
    PROTOCOL_DISALLOW_COPY(CSSStyle);
public:
    static std::unique_ptr<CSSStyle> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~CSSStyle() override { }

    bool hasStyleSheetId() { return m_styleSheetId.isJust(); }
    String getStyleSheetId(const String& defaultValue) { return m_styleSheetId.isJust() ? m_styleSheetId.fromJust() : defaultValue; }
    void setStyleSheetId(const String& value) { m_styleSheetId = value; }

    protocol::Array<protocol::CSS::CSSProperty>* getCssProperties() { return m_cssProperties.get(); }
    void setCssProperties(std::unique_ptr<protocol::Array<protocol::CSS::CSSProperty>> value) { m_cssProperties = std::move(value); }

    protocol::Array<String>* getShorthandEntries() { return m_shorthandEntries.get(); }
    void setShorthandEntries(std::unique_ptr<protocol::Array<String>> value) { m_shorthandEntries = std::move(value); }

    bool hasRange() { return m_range.isJust(); }
    protocol::CSS::SourceRange* getRange(protocol::CSS::SourceRange* defaultValue) { return m_range.isJust() ? m_range.fromJust() : defaultValue; }
    void setRange(std::unique_ptr<protocol::CSS::SourceRange> value) { m_range = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<CSSStyle> clone() const;

    template<int STATE>
    class CSSStyleBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            CssPropertiesSet = 1 << 1,
            ShorthandEntriesSet = 1 << 2,
            AllFieldsSet = (CssPropertiesSet | ShorthandEntriesSet | 0)};


        CSSStyleBuilder<STATE>& setStyleSheetId(const String& value)
        {
            m_result->setStyleSheetId(value);
            return *this;
        }

        CSSStyleBuilder<STATE | CssPropertiesSet>& setCssProperties(std::unique_ptr<protocol::Array<protocol::CSS::CSSProperty>> value)
        {
            static_assert(!(STATE & CssPropertiesSet), "property cssProperties should not be set yet");
            m_result->setCssProperties(std::move(value));
            return castState<CssPropertiesSet>();
        }

        CSSStyleBuilder<STATE | ShorthandEntriesSet>& setShorthandEntries(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & ShorthandEntriesSet), "property shorthandEntries should not be set yet");
            m_result->setShorthandEntries(std::move(value));
            return castState<ShorthandEntriesSet>();
        }

        CSSStyleBuilder<STATE>& setRange(std::unique_ptr<protocol::CSS::SourceRange> value)
        {
            m_result->setRange(std::move(value));
            return *this;
        }

        std::unique_ptr<CSSStyle> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CSSStyle;
        CSSStyleBuilder() : m_result(new CSSStyle()) { }

        template<int STEP> CSSStyleBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CSSStyleBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CSS::CSSStyle> m_result;
    };

    static CSSStyleBuilder<0> create()
    {
        return CSSStyleBuilder<0>();
    }

private:
    CSSStyle()
    {
    }

    Maybe<String> m_styleSheetId;
    std::unique_ptr<protocol::Array<protocol::CSS::CSSProperty>> m_cssProperties;
    std::unique_ptr<protocol::Array<String>> m_shorthandEntries;
    Maybe<protocol::CSS::SourceRange> m_range;
};


class UI_DEVTOOLS_EXPORT StyleSheetChangedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(StyleSheetChangedNotification);
public:
    static std::unique_ptr<StyleSheetChangedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~StyleSheetChangedNotification() override { }

    String getStyleSheetId() { return m_styleSheetId; }
    void setStyleSheetId(const String& value) { m_styleSheetId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<StyleSheetChangedNotification> clone() const;

    template<int STATE>
    class StyleSheetChangedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StyleSheetIdSet = 1 << 1,
            AllFieldsSet = (StyleSheetIdSet | 0)};


        StyleSheetChangedNotificationBuilder<STATE | StyleSheetIdSet>& setStyleSheetId(const String& value)
        {
            static_assert(!(STATE & StyleSheetIdSet), "property styleSheetId should not be set yet");
            m_result->setStyleSheetId(value);
            return castState<StyleSheetIdSet>();
        }

        std::unique_ptr<StyleSheetChangedNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StyleSheetChangedNotification;
        StyleSheetChangedNotificationBuilder() : m_result(new StyleSheetChangedNotification()) { }

        template<int STEP> StyleSheetChangedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StyleSheetChangedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CSS::StyleSheetChangedNotification> m_result;
    };

    static StyleSheetChangedNotificationBuilder<0> create()
    {
        return StyleSheetChangedNotificationBuilder<0>();
    }

private:
    StyleSheetChangedNotification()
    {
    }

    String m_styleSheetId;
};


// ------------- Backend interface.

class UI_DEVTOOLS_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse getMatchedStylesForNode(int in_nodeId, Maybe<protocol::CSS::CSSStyle>* out_inlineStyle) = 0;
    virtual DispatchResponse setStyleTexts(std::unique_ptr<protocol::Array<protocol::CSS::StyleDeclarationEdit>> in_edits, std::unique_ptr<protocol::Array<protocol::CSS::CSSStyle>>* out_styles) = 0;

};

// ------------- Frontend interface.

class UI_DEVTOOLS_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void styleSheetChanged(const String& styleSheetId);

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class UI_DEVTOOLS_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class UI_DEVTOOLS_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace CSS
} // namespace ui_devtools
} // namespace protocol

#endif // !defined(ui_devtools_protocol_CSS_h)
