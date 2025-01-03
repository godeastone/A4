// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /InstrumentingProbesInl.h.tmpl
// and input files:
//   CoreProbes.pidl


#ifndef CoreProbesInl_h
#define CoreProbesInl_h

#include "third_party/blink/renderer/platform/heap/heap_allocator.h"
#include "third_party/blink/renderer/core/CoreProbeSink.h"
#include "third_party/blink/renderer/core/probe/core_probes.h"


namespace blink {

class ConsoleMessage;
class FontCustomPlatformData;
class FontFace;
class HTMLDocumentParser;
class ScheduledNavigation;
class ThreadableLoaderClient;
class WebSocketHandshakeRequest;
class WebSocketHandshakeResponse;
class WorkerInspectorProxy;
class XMLHttpRequest;

namespace probe {


CORE_EXPORT void didClearDocumentOfWindowObjectImpl(LocalFrame*);
inline void didClearDocumentOfWindowObject(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorAnimationAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  didClearDocumentOfWindowObjectImpl(paramLocalFrame);
}

CORE_EXPORT void willInsertDOMNodeImpl(Node*);
inline void willInsertDOMNode(Node* parent) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  willInsertDOMNodeImpl(parent);
}

CORE_EXPORT void didInsertDOMNodeImpl(Node*);
inline void didInsertDOMNode(Node* paramNode) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMSnapshotAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  didInsertDOMNodeImpl(paramNode);
}

CORE_EXPORT void willRemoveDOMNodeImpl(Node*);
inline void willRemoveDOMNode(Node* paramNode) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  willRemoveDOMNodeImpl(paramNode);
}

CORE_EXPORT void willModifyDOMAttrImpl(Element*, const AtomicString&, const AtomicString&);
inline void willModifyDOMAttr(Element* paramElement, const AtomicString& oldValue, const AtomicString& newValue) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  willModifyDOMAttrImpl(paramElement, oldValue, newValue);
}

CORE_EXPORT void didModifyDOMAttrImpl(Element*, const QualifiedName&, const AtomicString&);
inline void didModifyDOMAttr(Element* paramElement, const QualifiedName& name, const AtomicString& value) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  didModifyDOMAttrImpl(paramElement, name, value);
}

CORE_EXPORT void didRemoveDOMAttrImpl(Element*, const QualifiedName&);
inline void didRemoveDOMAttr(Element* paramElement, const QualifiedName& name) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  didRemoveDOMAttrImpl(paramElement, name);
}

CORE_EXPORT void willChangeStyleElementImpl(Element*);
inline void willChangeStyleElement(Element* paramElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  willChangeStyleElementImpl(paramElement);
}

CORE_EXPORT void characterDataModifiedImpl(CharacterData*);
inline void characterDataModified(CharacterData* paramCharacterData) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMSnapshotAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  characterDataModifiedImpl(paramCharacterData);
}

CORE_EXPORT void didInvalidateStyleAttrImpl(Node*);
inline void didInvalidateStyleAttr(Node* paramNode) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  didInvalidateStyleAttrImpl(paramNode);
}

CORE_EXPORT void didPerformElementShadowDistributionImpl(Element*);
inline void didPerformElementShadowDistribution(Element* paramElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  didPerformElementShadowDistributionImpl(paramElement);
}

CORE_EXPORT void didPerformSlotDistributionImpl(HTMLSlotElement*);
inline void didPerformSlotDistribution(HTMLSlotElement* paramHTMLSlotElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  didPerformSlotDistributionImpl(paramHTMLSlotElement);
}

CORE_EXPORT void documentDetachedImpl(Document*);
inline void documentDetached(Document* paramDocument) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  documentDetachedImpl(paramDocument);
}

CORE_EXPORT void activeStyleSheetsUpdatedImpl(Document*);
inline void activeStyleSheetsUpdated(Document* paramDocument) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  activeStyleSheetsUpdatedImpl(paramDocument);
}

CORE_EXPORT void fontsUpdatedImpl(ExecutionContext*, const FontFace*, const String&, const FontCustomPlatformData*);
inline void fontsUpdated(ExecutionContext* paramExecutionContext, const FontFace* face, const String& src, const FontCustomPlatformData* fontCustomPlatformData) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  fontsUpdatedImpl(paramExecutionContext, face, src, fontCustomPlatformData);
}

CORE_EXPORT void mediaQueryResultChangedImpl(Document*);
inline void mediaQueryResultChanged(Document* paramDocument) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  mediaQueryResultChangedImpl(paramDocument);
}

CORE_EXPORT void didPushShadowRootImpl(Element*, ShadowRoot*);
inline void didPushShadowRoot(Element* host, ShadowRoot* paramShadowRoot) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  didPushShadowRootImpl(host, paramShadowRoot);
}

CORE_EXPORT void willPopShadowRootImpl(Element*, ShadowRoot*);
inline void willPopShadowRoot(Element* host, ShadowRoot* paramShadowRoot) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  willPopShadowRootImpl(host, paramShadowRoot);
}

CORE_EXPORT void willSendXMLHttpOrFetchNetworkRequestImpl(ExecutionContext*, const String&);
inline void willSendXMLHttpOrFetchNetworkRequest(ExecutionContext* paramExecutionContext, const String& url) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  willSendXMLHttpOrFetchNetworkRequestImpl(paramExecutionContext, url);
}

CORE_EXPORT void didCreateCanvasContextImpl(Document*);
inline void didCreateCanvasContext(Document* paramDocument) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  didCreateCanvasContextImpl(paramDocument);
}

CORE_EXPORT void didFireWebGLErrorImpl(Element*, const String&);
inline void didFireWebGLError(Element* paramElement, const String& errorName) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  didFireWebGLErrorImpl(paramElement, errorName);
}

CORE_EXPORT void didFireWebGLWarningImpl(Element*);
inline void didFireWebGLWarning(Element* paramElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  didFireWebGLWarningImpl(paramElement);
}

CORE_EXPORT void didFireWebGLErrorOrWarningImpl(Element*, const String&);
inline void didFireWebGLErrorOrWarning(Element* paramElement, const String& message) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  didFireWebGLErrorOrWarningImpl(paramElement, message);
}

CORE_EXPORT void didResizeMainFrameImpl(LocalFrame*);
inline void didResizeMainFrame(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  didResizeMainFrameImpl(paramLocalFrame);
}

CORE_EXPORT void didPaintImpl(LocalFrame*, const GraphicsLayer*, GraphicsContext&, const LayoutRect&);
inline void didPaint(LocalFrame* paramLocalFrame, const GraphicsLayer* paramGraphicsLayer, GraphicsContext& paramGraphicsContext, const LayoutRect& paramLayoutRect) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLayerTreeAgent))
    return;

  didPaintImpl(paramLocalFrame, paramGraphicsLayer, paramGraphicsContext, paramLayoutRect);
}

CORE_EXPORT void applyUserAgentOverrideImpl(ExecutionContext*, String*);
inline void applyUserAgentOverride(ExecutionContext* paramExecutionContext, String* userAgent) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  applyUserAgentOverrideImpl(paramExecutionContext, userAgent);
}

CORE_EXPORT void didBlockRequestImpl(ExecutionContext*, const ResourceRequest&, DocumentLoader*, const FetchInitiatorInfo&, ResourceRequestBlockedReason, Resource::Type);
inline void didBlockRequest(ExecutionContext* paramExecutionContext, const ResourceRequest& paramResourceRequest, DocumentLoader* paramDocumentLoader, const FetchInitiatorInfo& paramFetchInitiatorInfo, ResourceRequestBlockedReason paramResourceRequestBlockedReason, Resource::Type paramResource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didBlockRequestImpl(paramExecutionContext, paramResourceRequest, paramDocumentLoader, paramFetchInitiatorInfo, paramResourceRequestBlockedReason, paramResource);
}

CORE_EXPORT void didChangeResourcePriorityImpl(LocalFrame*, DocumentLoader*, unsigned long, ResourceLoadPriority);
inline void didChangeResourcePriority(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader, unsigned long identifier, ResourceLoadPriority loadPriority) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didChangeResourcePriorityImpl(paramLocalFrame, paramDocumentLoader, identifier, loadPriority);
}

CORE_EXPORT void willSendRequestImpl(ExecutionContext*, unsigned long, DocumentLoader*, ResourceRequest&, const ResourceResponse&, const FetchInitiatorInfo&, Resource::Type);
inline void willSendRequest(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, ResourceRequest& paramResourceRequest, const ResourceResponse& redirectResponse, const FetchInitiatorInfo& paramFetchInitiatorInfo, Resource::Type paramResource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kAdTracker | CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  willSendRequestImpl(paramExecutionContext, identifier, paramDocumentLoader, paramResourceRequest, redirectResponse, paramFetchInitiatorInfo, paramResource);
}

CORE_EXPORT void markResourceAsCachedImpl(LocalFrame*, DocumentLoader*, unsigned long);
inline void markResourceAsCached(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader, unsigned long identifier) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  markResourceAsCachedImpl(paramLocalFrame, paramDocumentLoader, identifier);
}

CORE_EXPORT void didReceiveResourceResponseImpl(ExecutionContext*, unsigned long, DocumentLoader*, const ResourceResponse&, Resource*);
inline void didReceiveResourceResponse(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const ResourceResponse& paramResourceResponse, Resource* paramResource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveResourceResponseImpl(paramExecutionContext, identifier, paramDocumentLoader, paramResourceResponse, paramResource);
}

CORE_EXPORT void didReceiveDataImpl(ExecutionContext*, unsigned long, DocumentLoader*, const char*, int);
inline void didReceiveData(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const char* data, int dataLength) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveDataImpl(paramExecutionContext, identifier, paramDocumentLoader, data, dataLength);
}

CORE_EXPORT void didReceiveBlobImpl(ExecutionContext*, unsigned long, DocumentLoader*, BlobDataHandle*);
inline void didReceiveBlob(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, BlobDataHandle* paramBlobDataHandle) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveBlobImpl(paramExecutionContext, identifier, paramDocumentLoader, paramBlobDataHandle);
}

CORE_EXPORT void didReceiveEncodedDataLengthImpl(ExecutionContext*, DocumentLoader*, unsigned long, int);
inline void didReceiveEncodedDataLength(ExecutionContext* paramExecutionContext, DocumentLoader* loader, unsigned long identifier, int encodedDataLength) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveEncodedDataLengthImpl(paramExecutionContext, loader, identifier, encodedDataLength);
}

CORE_EXPORT void didFinishLoadingImpl(ExecutionContext*, unsigned long, DocumentLoader*, TimeTicks, int64_t, int64_t, bool);
inline void didFinishLoading(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, TimeTicks finishTime, int64_t encoded_data_length, int64_t decodedBodyLength, bool blocked_cross_site_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  didFinishLoadingImpl(paramExecutionContext, identifier, paramDocumentLoader, finishTime, encoded_data_length, decodedBodyLength, blocked_cross_site_document);
}

CORE_EXPORT void didReceiveCORSRedirectResponseImpl(ExecutionContext*, unsigned long, DocumentLoader*, const ResourceResponse&, Resource*);
inline void didReceiveCORSRedirectResponse(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const ResourceResponse& paramResourceResponse, Resource* paramResource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveCORSRedirectResponseImpl(paramExecutionContext, identifier, paramDocumentLoader, paramResourceResponse, paramResource);
}

CORE_EXPORT void didFailLoadingImpl(ExecutionContext*, unsigned long, DocumentLoader*, const ResourceError&);
inline void didFailLoading(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const ResourceError& paramResourceError) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  didFailLoadingImpl(paramExecutionContext, identifier, paramDocumentLoader, paramResourceError);
}

CORE_EXPORT void documentThreadableLoaderStartedLoadingForClientImpl(ExecutionContext*, unsigned long, ThreadableLoaderClient*);
inline void documentThreadableLoaderStartedLoadingForClient(ExecutionContext* paramExecutionContext, unsigned long identifier, ThreadableLoaderClient* client) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  documentThreadableLoaderStartedLoadingForClientImpl(paramExecutionContext, identifier, client);
}

CORE_EXPORT void documentThreadableLoaderFailedToStartLoadingForClientImpl(ExecutionContext*, ThreadableLoaderClient*);
inline void documentThreadableLoaderFailedToStartLoadingForClient(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* client) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  documentThreadableLoaderFailedToStartLoadingForClientImpl(paramExecutionContext, client);
}

CORE_EXPORT void willSendEventSourceRequestImpl(ExecutionContext*, ThreadableLoaderClient*);
inline void willSendEventSourceRequest(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* eventSource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  willSendEventSourceRequestImpl(paramExecutionContext, eventSource);
}

CORE_EXPORT void willDispatchEventSourceEventImpl(ExecutionContext*, unsigned long, const AtomicString&, const AtomicString&, const String&);
inline void willDispatchEventSourceEvent(ExecutionContext* paramExecutionContext, unsigned long identifier, const AtomicString& eventName, const AtomicString& eventId, const String& data) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  willDispatchEventSourceEventImpl(paramExecutionContext, identifier, eventName, eventId, data);
}

CORE_EXPORT void didFinishEventSourceRequestImpl(ExecutionContext*, ThreadableLoaderClient*);
inline void didFinishEventSourceRequest(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* eventSource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didFinishEventSourceRequestImpl(paramExecutionContext, eventSource);
}

CORE_EXPORT void willLoadXHRImpl(ExecutionContext*, XMLHttpRequest*, ThreadableLoaderClient*, const AtomicString&, const KURL&, bool, const HTTPHeaderMap&, bool);
inline void willLoadXHR(ExecutionContext* paramExecutionContext, XMLHttpRequest* xhr, ThreadableLoaderClient* client, const AtomicString& method, const KURL& url, bool async, const HTTPHeaderMap& headers, bool includeCredentials) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  willLoadXHRImpl(paramExecutionContext, xhr, client, method, url, async, headers, includeCredentials);
}

CORE_EXPORT void didFailXHRLoadingImpl(ExecutionContext*, XMLHttpRequest*, ThreadableLoaderClient*, const AtomicString&, const String&);
inline void didFailXHRLoading(ExecutionContext* paramExecutionContext, XMLHttpRequest* xhr, ThreadableLoaderClient* client, const AtomicString& method, const String& url) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didFailXHRLoadingImpl(paramExecutionContext, xhr, client, method, url);
}

CORE_EXPORT void didFinishXHRLoadingImpl(ExecutionContext*, XMLHttpRequest*, ThreadableLoaderClient*, const AtomicString&, const String&);
inline void didFinishXHRLoading(ExecutionContext* paramExecutionContext, XMLHttpRequest* xhr, ThreadableLoaderClient* client, const AtomicString& method, const String& url) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didFinishXHRLoadingImpl(paramExecutionContext, xhr, client, method, url);
}

CORE_EXPORT void willStartFetchImpl(ExecutionContext*, ThreadableLoaderClient*);
inline void willStartFetch(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* paramThreadableLoaderClient) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  willStartFetchImpl(paramExecutionContext, paramThreadableLoaderClient);
}

CORE_EXPORT void detachClientRequestImpl(ExecutionContext*, ThreadableLoaderClient*);
inline void detachClientRequest(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* paramThreadableLoaderClient) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  detachClientRequestImpl(paramExecutionContext, paramThreadableLoaderClient);
}

CORE_EXPORT void scriptImportedImpl(ExecutionContext*, unsigned long, const String&);
inline void scriptImported(ExecutionContext* paramExecutionContext, unsigned long identifier, const String& sourceString) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  scriptImportedImpl(paramExecutionContext, identifier, sourceString);
}

CORE_EXPORT void scriptExecutionBlockedByCSPImpl(ExecutionContext*, const String&);
inline void scriptExecutionBlockedByCSP(ExecutionContext* paramExecutionContext, const String& directiveText) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  scriptExecutionBlockedByCSPImpl(paramExecutionContext, directiveText);
}

CORE_EXPORT void didReceiveScriptResponseImpl(ExecutionContext*, unsigned long);
inline void didReceiveScriptResponse(ExecutionContext* paramExecutionContext, unsigned long identifier) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveScriptResponseImpl(paramExecutionContext, identifier);
}

CORE_EXPORT void domContentLoadedEventFiredImpl(LocalFrame*);
inline void domContentLoadedEventFired(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  domContentLoadedEventFiredImpl(paramLocalFrame);
}

CORE_EXPORT void loadEventFiredImpl(LocalFrame*);
inline void loadEventFired(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  loadEventFiredImpl(paramLocalFrame);
}

CORE_EXPORT void frameAttachedToParentImpl(LocalFrame*);
inline void frameAttachedToParent(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  frameAttachedToParentImpl(paramLocalFrame);
}

CORE_EXPORT void frameDetachedFromParentImpl(LocalFrame*);
inline void frameDetachedFromParent(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  frameDetachedFromParentImpl(paramLocalFrame);
}

CORE_EXPORT void willCommitLoadImpl(LocalFrame*, DocumentLoader*);
inline void willCommitLoad(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  willCommitLoadImpl(paramLocalFrame, paramDocumentLoader);
}

CORE_EXPORT void didCommitLoadImpl(LocalFrame*, DocumentLoader*);
inline void didCommitLoad(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  didCommitLoadImpl(paramLocalFrame, paramDocumentLoader);
}

CORE_EXPORT void didNavigateWithinDocumentImpl(LocalFrame*);
inline void didNavigateWithinDocument(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  didNavigateWithinDocumentImpl(paramLocalFrame);
}

CORE_EXPORT void frameDocumentUpdatedImpl(LocalFrame*);
inline void frameDocumentUpdated(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  frameDocumentUpdatedImpl(paramLocalFrame);
}

CORE_EXPORT void frameOwnerContentUpdatedImpl(LocalFrame*, HTMLFrameOwnerElement*);
inline void frameOwnerContentUpdated(LocalFrame* paramLocalFrame, HTMLFrameOwnerElement* paramHTMLFrameOwnerElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  frameOwnerContentUpdatedImpl(paramLocalFrame, paramHTMLFrameOwnerElement);
}

CORE_EXPORT void frameStartedLoadingImpl(LocalFrame*, FrameLoadType);
inline void frameStartedLoading(LocalFrame* paramLocalFrame, FrameLoadType paramFrameLoadType) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorPageAgent | CoreProbeSink::kInspectorEmulationAgent))
    return;

  frameStartedLoadingImpl(paramLocalFrame, paramFrameLoadType);
}

CORE_EXPORT void frameStoppedLoadingImpl(LocalFrame*);
inline void frameStoppedLoading(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  frameStoppedLoadingImpl(paramLocalFrame);
}

CORE_EXPORT void frameScheduledNavigationImpl(LocalFrame*, ScheduledNavigation*);
inline void frameScheduledNavigation(LocalFrame* paramLocalFrame, ScheduledNavigation* paramScheduledNavigation) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  frameScheduledNavigationImpl(paramLocalFrame, paramScheduledNavigation);
}

CORE_EXPORT void frameClearedScheduledNavigationImpl(LocalFrame*);
inline void frameClearedScheduledNavigation(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  frameClearedScheduledNavigationImpl(paramLocalFrame);
}

CORE_EXPORT void frameScheduledClientNavigationImpl(LocalFrame*);
inline void frameScheduledClientNavigation(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  frameScheduledClientNavigationImpl(paramLocalFrame);
}

CORE_EXPORT void frameClearedScheduledClientNavigationImpl(LocalFrame*);
inline void frameClearedScheduledClientNavigation(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  frameClearedScheduledClientNavigationImpl(paramLocalFrame);
}

CORE_EXPORT void didStartWorkerImpl(ExecutionContext*, WorkerInspectorProxy*, bool);
inline void didStartWorker(ExecutionContext* paramExecutionContext, WorkerInspectorProxy* proxy, bool waitingForDebugger) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorWorkerAgent))
    return;

  didStartWorkerImpl(paramExecutionContext, proxy, waitingForDebugger);
}

CORE_EXPORT void workerTerminatedImpl(ExecutionContext*, WorkerInspectorProxy*);
inline void workerTerminated(ExecutionContext* paramExecutionContext, WorkerInspectorProxy* proxy) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorWorkerAgent))
    return;

  workerTerminatedImpl(paramExecutionContext, proxy);
}

CORE_EXPORT void didCreateWebSocketImpl(ExecutionContext*, unsigned long, const KURL&, const String&);
inline void didCreateWebSocket(ExecutionContext* paramExecutionContext, unsigned long identifier, const KURL& requestURL, const String& protocol) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didCreateWebSocketImpl(paramExecutionContext, identifier, requestURL, protocol);
}

CORE_EXPORT void willSendWebSocketHandshakeRequestImpl(ExecutionContext*, unsigned long, const WebSocketHandshakeRequest*);
inline void willSendWebSocketHandshakeRequest(ExecutionContext* paramExecutionContext, unsigned long identifier, const WebSocketHandshakeRequest* request) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  willSendWebSocketHandshakeRequestImpl(paramExecutionContext, identifier, request);
}

CORE_EXPORT void didReceiveWebSocketHandshakeResponseImpl(ExecutionContext*, unsigned long, const WebSocketHandshakeRequest*, const WebSocketHandshakeResponse*);
inline void didReceiveWebSocketHandshakeResponse(ExecutionContext* paramExecutionContext, unsigned long identifier, const WebSocketHandshakeRequest* request, const WebSocketHandshakeResponse* response) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveWebSocketHandshakeResponseImpl(paramExecutionContext, identifier, request, response);
}

CORE_EXPORT void didCloseWebSocketImpl(ExecutionContext*, unsigned long);
inline void didCloseWebSocket(ExecutionContext* paramExecutionContext, unsigned long identifier) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didCloseWebSocketImpl(paramExecutionContext, identifier);
}

CORE_EXPORT void didReceiveWebSocketFrameImpl(ExecutionContext*, unsigned long, int, bool, const char*, size_t);
inline void didReceiveWebSocketFrame(ExecutionContext* paramExecutionContext, unsigned long identifier, int opCode, bool masked, const char* payload, size_t payloadLength) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveWebSocketFrameImpl(paramExecutionContext, identifier, opCode, masked, payload, payloadLength);
}

CORE_EXPORT void didSendWebSocketFrameImpl(ExecutionContext*, unsigned long, int, bool, const char*, size_t);
inline void didSendWebSocketFrame(ExecutionContext* paramExecutionContext, unsigned long identifier, int opCode, bool masked, const char* payload, size_t payloadLength) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didSendWebSocketFrameImpl(paramExecutionContext, identifier, opCode, masked, payload, payloadLength);
}

CORE_EXPORT void didReceiveWebSocketFrameErrorImpl(ExecutionContext*, unsigned long, const String&);
inline void didReceiveWebSocketFrameError(ExecutionContext* paramExecutionContext, unsigned long identifier, const String& errorMessage) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  didReceiveWebSocketFrameErrorImpl(paramExecutionContext, identifier, errorMessage);
}

CORE_EXPORT void networkStateChangedImpl(LocalFrame*, bool);
inline void networkStateChanged(LocalFrame* paramLocalFrame, bool online) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorApplicationCacheAgent))
    return;

  networkStateChangedImpl(paramLocalFrame, online);
}

CORE_EXPORT void updateApplicationCacheStatusImpl(LocalFrame*);
inline void updateApplicationCacheStatus(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorApplicationCacheAgent))
    return;

  updateApplicationCacheStatusImpl(paramLocalFrame);
}

CORE_EXPORT void layerTreeDidChangeImpl(LocalFrame*);
inline void layerTreeDidChange(LocalFrame* paramLocalFrame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLayerTreeAgent))
    return;

  layerTreeDidChangeImpl(paramLocalFrame);
}

CORE_EXPORT void pseudoElementCreatedImpl(PseudoElement*);
inline void pseudoElementCreated(PseudoElement* paramPseudoElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  pseudoElementCreatedImpl(paramPseudoElement);
}

CORE_EXPORT void pseudoElementDestroyedImpl(PseudoElement*);
inline void pseudoElementDestroyed(PseudoElement* paramPseudoElement) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  pseudoElementDestroyedImpl(paramPseudoElement);
}

CORE_EXPORT void didCreateAnimationImpl(Document*, unsigned);
inline void didCreateAnimation(Document* paramDocument, unsigned paramunsigned) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorAnimationAgent))
    return;

  didCreateAnimationImpl(paramDocument, paramunsigned);
}

CORE_EXPORT void animationPlayStateChangedImpl(Document*, Animation*, Animation::AnimationPlayState, Animation::AnimationPlayState);
inline void animationPlayStateChanged(Document* paramDocument, Animation* paramAnimation, Animation::AnimationPlayState oldPlayState, Animation::AnimationPlayState newPlayState) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorAnimationAgent))
    return;

  animationPlayStateChangedImpl(paramDocument, paramAnimation, oldPlayState, newPlayState);
}

CORE_EXPORT void windowOpenImpl(Document*, const String&, const AtomicString&, const WebWindowFeatures&, bool);
inline void windowOpen(Document* paramDocument, const String& url, const AtomicString& windowName, const WebWindowFeatures& windowFeatures, bool userGestrue) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  windowOpenImpl(paramDocument, url, windowName, windowFeatures, userGestrue);
}

CORE_EXPORT void consoleMessageAddedImpl(ExecutionContext*, ConsoleMessage*);
inline void consoleMessageAdded(ExecutionContext* paramExecutionContext, ConsoleMessage* paramConsoleMessage) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLogAgent))
    return;

  consoleMessageAddedImpl(paramExecutionContext, paramConsoleMessage);
}

CORE_EXPORT void willRunJavaScriptDialogImpl(LocalFrame*);
inline void willRunJavaScriptDialog(LocalFrame* frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  willRunJavaScriptDialogImpl(frame);
}

CORE_EXPORT void didRunJavaScriptDialogImpl(LocalFrame*);
inline void didRunJavaScriptDialog(LocalFrame* frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  didRunJavaScriptDialogImpl(frame);
}

CORE_EXPORT void documentWriteFetchScriptImpl(Document*);
inline void documentWriteFetchScript(Document* paramDocument) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kPerformanceMonitor))
    return;

  documentWriteFetchScriptImpl(paramDocument);
}

CORE_EXPORT void didChangeViewportImpl(LocalFrame*);
inline void didChangeViewport(LocalFrame* document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  didChangeViewportImpl(document);
}

CORE_EXPORT void breakableLocationImpl(ExecutionContext*, const char*);
inline void breakableLocation(ExecutionContext* context, const char* name) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  breakableLocationImpl(context, name);
}

class CORE_EXPORT RecalculateStyle : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit RecalculateStyle(Document*);
  ~RecalculateStyle();
  Member<CoreProbeSink> probe_sink;
  Member<Document> document;
};

class CORE_EXPORT UpdateLayout : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit UpdateLayout(Document*);
  ~UpdateLayout();
  Member<CoreProbeSink> probe_sink;
  Member<Document> document;
};

class CORE_EXPORT ExecuteScript : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit ExecuteScript(ExecutionContext*, const String&);
  ~ExecuteScript();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  const String& script_url;
};

class CORE_EXPORT CallFunction : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit CallFunction(ExecutionContext*, v8::Local<v8::Function>, int = 0);
  ~CallFunction();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  v8::Local<v8::Function> function;
  int depth;
};

class CORE_EXPORT UserCallback : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit UserCallback(ExecutionContext*, const char*, const AtomicString&, bool, EventTarget* = nullptr);
  ~UserCallback();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  const char* name;
  const AtomicString& atomicName;
  bool recurring;
  Member<EventTarget> eventTarget;
};

class CORE_EXPORT V8Compile : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit V8Compile(ExecutionContext*, const String&, int, int);
  ~V8Compile();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  const String& file_name;
  int line;
  int column;
};

class CORE_EXPORT ParseHTML : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit ParseHTML(Document*, HTMLDocumentParser*);
  ~ParseHTML();
  Member<CoreProbeSink> probe_sink;
  Member<Document> document;
  Member<HTMLDocumentParser> parser;
};

CORE_EXPORT void forcePseudoStateImpl(Element*, CSSSelector::PseudoType, bool*);
inline void forcePseudoState(Element* element, CSSSelector::PseudoType pseudoState, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  forcePseudoStateImpl(element, pseudoState, result);
}

CORE_EXPORT void shouldWaitForDebuggerOnWorkerStartImpl(ExecutionContext*, bool*);
inline void shouldWaitForDebuggerOnWorkerStart(ExecutionContext* context, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorWorkerAgent))
    return;

  shouldWaitForDebuggerOnWorkerStartImpl(context, result);
}

CORE_EXPORT void shouldForceCORSPreflightImpl(ExecutionContext*, bool*);
inline void shouldForceCORSPreflight(ExecutionContext* paramExecutionContext, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  shouldForceCORSPreflightImpl(paramExecutionContext, result);
}

CORE_EXPORT void shouldBlockRequestImpl(ExecutionContext*, const KURL&, bool*);
inline void shouldBlockRequest(ExecutionContext* paramExecutionContext, const KURL& paramKURL, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  shouldBlockRequestImpl(paramExecutionContext, paramKURL, result);
}

CORE_EXPORT void shouldBypassServiceWorkerImpl(ExecutionContext*, bool*);
inline void shouldBypassServiceWorker(ExecutionContext* context, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  shouldBypassServiceWorkerImpl(context, result);
}

CORE_EXPORT void consoleTimeStampImpl(ExecutionContext*, const String&);
inline void consoleTimeStamp(ExecutionContext* paramExecutionContext, const String& title) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPerformanceAgent))
    return;

  consoleTimeStampImpl(paramExecutionContext, title);
}

CORE_EXPORT void lifecycleEventImpl(LocalFrame*, DocumentLoader*, const char*, double);
inline void lifecycleEvent(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader, const char* name, double timestamp) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  lifecycleEventImpl(paramLocalFrame, paramDocumentLoader, name, timestamp);
}

CORE_EXPORT void paintTimingImpl(Document*, const char*, double);
inline void paintTiming(Document* paramDocument, const char* name, double timestamp) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorPageAgent))
    return;

  paintTimingImpl(paramDocument, name, timestamp);
}

} // namespace probe
} // namespace blink

#endif // !defined(CoreProbesInl_h)
