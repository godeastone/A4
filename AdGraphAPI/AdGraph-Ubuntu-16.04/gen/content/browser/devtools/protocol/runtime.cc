// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/runtime.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace Runtime {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Runtime";
const char Metainfo::commandPrefix[] = "Runtime.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<CallFrame> CallFrame::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CallFrame> result(new CallFrame());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* functionNameValue = object->get("functionName");
    errors->setName("functionName");
    result->m_functionName = ValueConversions<String>::fromValue(functionNameValue, errors);
    protocol::Value* scriptIdValue = object->get("scriptId");
    errors->setName("scriptId");
    result->m_scriptId = ValueConversions<String>::fromValue(scriptIdValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<String>::fromValue(urlValue, errors);
    protocol::Value* lineNumberValue = object->get("lineNumber");
    errors->setName("lineNumber");
    result->m_lineNumber = ValueConversions<int>::fromValue(lineNumberValue, errors);
    protocol::Value* columnNumberValue = object->get("columnNumber");
    errors->setName("columnNumber");
    result->m_columnNumber = ValueConversions<int>::fromValue(columnNumberValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CallFrame::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("functionName", ValueConversions<String>::toValue(m_functionName));
    result->setValue("scriptId", ValueConversions<String>::toValue(m_scriptId));
    result->setValue("url", ValueConversions<String>::toValue(m_url));
    result->setValue("lineNumber", ValueConversions<int>::toValue(m_lineNumber));
    result->setValue("columnNumber", ValueConversions<int>::toValue(m_columnNumber));
    return result;
}

std::unique_ptr<CallFrame> CallFrame::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<StackTrace> StackTrace::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<StackTrace> result(new StackTrace());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* descriptionValue = object->get("description");
    if (descriptionValue) {
        errors->setName("description");
        result->m_description = ValueConversions<String>::fromValue(descriptionValue, errors);
    }
    protocol::Value* callFramesValue = object->get("callFrames");
    errors->setName("callFrames");
    result->m_callFrames = ValueConversions<protocol::Array<protocol::Runtime::CallFrame>>::fromValue(callFramesValue, errors);
    protocol::Value* parentValue = object->get("parent");
    if (parentValue) {
        errors->setName("parent");
        result->m_parent = ValueConversions<protocol::Runtime::StackTrace>::fromValue(parentValue, errors);
    }
    protocol::Value* parentIdValue = object->get("parentId");
    if (parentIdValue) {
        errors->setName("parentId");
        result->m_parentId = ValueConversions<protocol::Runtime::StackTraceId>::fromValue(parentIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> StackTrace::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_description.isJust())
        result->setValue("description", ValueConversions<String>::toValue(m_description.fromJust()));
    result->setValue("callFrames", ValueConversions<protocol::Array<protocol::Runtime::CallFrame>>::toValue(m_callFrames.get()));
    if (m_parent.isJust())
        result->setValue("parent", ValueConversions<protocol::Runtime::StackTrace>::toValue(m_parent.fromJust()));
    if (m_parentId.isJust())
        result->setValue("parentId", ValueConversions<protocol::Runtime::StackTraceId>::toValue(m_parentId.fromJust()));
    return result;
}

std::unique_ptr<StackTrace> StackTrace::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<StackTraceId> StackTraceId::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<StackTraceId> result(new StackTraceId());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<String>::fromValue(idValue, errors);
    protocol::Value* debuggerIdValue = object->get("debuggerId");
    if (debuggerIdValue) {
        errors->setName("debuggerId");
        result->m_debuggerId = ValueConversions<String>::fromValue(debuggerIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> StackTraceId::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<String>::toValue(m_id));
    if (m_debuggerId.isJust())
        result->setValue("debuggerId", ValueConversions<String>::toValue(m_debuggerId.fromJust()));
    return result;
}

std::unique_ptr<StackTraceId> StackTraceId::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


namespace ConsoleAPICalled {
namespace TypeEnum {
const char* Log = "log";
const char* Debug = "debug";
const char* Info = "info";
const char* Error = "error";
const char* Warning = "warning";
const char* Dir = "dir";
const char* Dirxml = "dirxml";
const char* Table = "table";
const char* Trace = "trace";
const char* Clear = "clear";
const char* StartGroup = "startGroup";
const char* StartGroupCollapsed = "startGroupCollapsed";
const char* EndGroup = "endGroup";
const char* Assert = "assert";
const char* Profile = "profile";
const char* ProfileEnd = "profileEnd";
const char* Count = "count";
const char* TimeEnd = "timeEnd";
} // namespace TypeEnum
} // namespace ConsoleAPICalled

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
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;


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


// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend, uber->fallThroughForNotFound()));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("Runtime", std::move(dispatcher));
}

} // Runtime
} // namespace content
} // namespace protocol
