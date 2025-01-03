// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /InstrumentingProbesImpl.cpp.tmpl
// and input files:
//   PlatformProbes.pidl


#include "third_party/blink/renderer/platform/PlatformProbesInl.h"
#include "third_party/blink/renderer/platform/PlatformProbeSink.h"
#include "third_party/blink/renderer/platform/probe/platform_trace_events_agent.h"
#include "third_party/blink/renderer/platform/wtf/threading_primitives.h"

namespace blink {

namespace {

Mutex& AgentCountMutex() {
  DEFINE_THREAD_SAFE_STATIC_LOCAL(Mutex, mutex, ());
  return mutex;
}

}  // namespace

// static
std::atomic<unsigned> PlatformProbeSink::s_existingAgents;

PlatformProbeSink::PlatformProbeSink() {}

PlatformProbeSink::~PlatformProbeSink() {
  MutexLocker lock(AgentCountMutex());
  if (hasPlatformTraceEventss() && --s_numSinksWithPlatformTraceEvents == 0)
    s_existingAgents &= ~kPlatformTraceEvents;
}


// static
unsigned PlatformProbeSink::s_numSinksWithPlatformTraceEvents = 0;

void PlatformProbeSink::addPlatformTraceEvents(PlatformTraceEventsAgent* agent) {
  bool already_had_agent = hasPlatformTraceEventss();
  m_platformTraceEventss.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithPlatformTraceEvents == 1)
      s_existingAgents |= kPlatformTraceEvents;
  }

  DCHECK(HasAgentsGlobal(kPlatformTraceEvents));
}

void PlatformProbeSink::removePlatformTraceEvents(PlatformTraceEventsAgent* agent) {
  if (!hasPlatformTraceEventss())
    return;

  m_platformTraceEventss.erase(agent);

  if (!hasPlatformTraceEventss()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithPlatformTraceEvents == 0)
      s_existingAgents &= ~kPlatformTraceEvents;
  }

  if (hasPlatformTraceEventss())
    DCHECK(HasAgentsGlobal(kPlatformTraceEvents));
}

void PlatformProbeSink::Trace(Visitor* visitor)
{
  visitor->Trace(m_platformTraceEventss);
}

namespace probe {

PlatformSendRequest::PlatformSendRequest(FetchContext* paramFetchContext, unsigned long identifier, ResourceRequest& paramResourceRequest, const ResourceResponse& redirectResponse, const FetchInitiatorInfo& paramFetchInitiatorInfo) :
    paramFetchContext(paramFetchContext),
    identifier(identifier),
    paramResourceRequest(paramResourceRequest),
    redirectResponse(redirectResponse),
    paramFetchInitiatorInfo(paramFetchInitiatorInfo) {
  probe_sink = ToPlatformProbeSink(paramFetchContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasPlatformTraceEventss()) {
    for (PlatformTraceEventsAgent* agent : probe_sink->platformTraceEventss())
      agent->Will(*this);
  }
}

PlatformSendRequest::~PlatformSendRequest() {
  if (!probe_sink)
    return;
  if (probe_sink->hasPlatformTraceEventss()) {
    for (PlatformTraceEventsAgent* agent : probe_sink->platformTraceEventss())
      agent->Did(*this);
  }
}


} // namespace probe
} // namespace blink
