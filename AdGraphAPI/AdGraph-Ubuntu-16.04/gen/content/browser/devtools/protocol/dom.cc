// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/browser/devtools/protocol/dom.h"

#include "content/browser/devtools/protocol/protocol.h"

namespace content {
namespace protocol {
namespace DOM {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "DOM";
const char Metainfo::commandPrefix[] = "DOM.";
const char Metainfo::version[] = "1.3";

// ------------- Enum values from params.


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
      m_redirects["DOM.hideHighlight"] = "Overlay.hideHighlight";
      m_redirects["DOM.highlightNode"] = "Overlay.highlightNode";
      m_redirects["DOM.highlightRect"] = "Overlay.highlightRect";
        m_dispatchMap["DOM.setFileInputFiles"] = &DispatcherImpl::setFileInputFiles;
    }
    ~DispatcherImpl() override { }
    DispatchResponse::Status dispatch(int callId, const String& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    HashMap<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = DispatchResponse::Status (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String, CallHandler>;
    DispatchMap m_dispatchMap;
    HashMap<String, String> m_redirects;

    DispatchResponse::Status setFileInputFiles(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


DispatchResponse::Status DispatcherImpl::setFileInputFiles(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* filesValue = object ? object->get("files") : nullptr;
    errors->setName("files");
    std::unique_ptr<protocol::Array<String>> in_files = ValueConversions<protocol::Array<String>>::fromValue(filesValue, errors);
    protocol::Value* nodeIdValue = object ? object->get("nodeId") : nullptr;
    Maybe<int> in_nodeId;
    if (nodeIdValue) {
        errors->setName("nodeId");
        in_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    }
    protocol::Value* backendNodeIdValue = object ? object->get("backendNodeId") : nullptr;
    Maybe<int> in_backendNodeId;
    if (backendNodeIdValue) {
        errors->setName("backendNodeId");
        in_backendNodeId = ValueConversions<int>::fromValue(backendNodeIdValue, errors);
    }
    protocol::Value* objectIdValue = object ? object->get("objectId") : nullptr;
    Maybe<String> in_objectId;
    if (objectIdValue) {
        errors->setName("objectId");
        in_objectId = ValueConversions<String>::fromValue(objectIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return DispatchResponse::kError;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->SetFileInputFiles(std::move(in_files), std::move(in_nodeId), std::move(in_backendNodeId), std::move(in_objectId));
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
    uber->registerBackend("DOM", std::move(dispatcher));
}

} // DOM
} // namespace content
} // namespace protocol
