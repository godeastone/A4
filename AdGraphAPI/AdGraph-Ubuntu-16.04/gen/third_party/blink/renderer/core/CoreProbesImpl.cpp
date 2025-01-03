// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /InstrumentingProbesImpl.cpp.tmpl
// and input files:
//   CoreProbes.pidl


#include "third_party/blink/renderer/core/CoreProbesInl.h"
#include "third_party/blink/renderer/core/CoreProbeSink.h"
#include "third_party/blink/renderer/core/frame/ad_tracker.h"
#include "third_party/blink/renderer/core/inspector/inspector_log_agent.h"
#include "third_party/blink/renderer/core/frame/performance_monitor.h"
#include "third_party/blink/renderer/core/inspector/inspector_css_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_emulation_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_dom_debugger_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_trace_events.h"
#include "third_party/blink/renderer/core/inspector/inspector_dom_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_application_cache_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_network_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_worker_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_performance_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_animation_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_page_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_dom_snapshot_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_layer_tree_agent.h"
#include "third_party/blink/renderer/platform/wtf/threading_primitives.h"

namespace blink {

namespace {

Mutex& AgentCountMutex() {
  DEFINE_THREAD_SAFE_STATIC_LOCAL(Mutex, mutex, ());
  return mutex;
}

}  // namespace

// static
std::atomic<unsigned> CoreProbeSink::s_existingAgents;

CoreProbeSink::CoreProbeSink() {}

CoreProbeSink::~CoreProbeSink() {
  MutexLocker lock(AgentCountMutex());
  if (hasAdTrackers() && --s_numSinksWithAdTracker == 0)
    s_existingAgents &= ~kAdTracker;
  if (hasInspectorLogAgents() && --s_numSinksWithInspectorLogAgent == 0)
    s_existingAgents &= ~kInspectorLogAgent;
  if (hasPerformanceMonitors() && --s_numSinksWithPerformanceMonitor == 0)
    s_existingAgents &= ~kPerformanceMonitor;
  if (hasInspectorCSSAgents() && --s_numSinksWithInspectorCSSAgent == 0)
    s_existingAgents &= ~kInspectorCSSAgent;
  if (hasInspectorEmulationAgents() && --s_numSinksWithInspectorEmulationAgent == 0)
    s_existingAgents &= ~kInspectorEmulationAgent;
  if (hasInspectorDOMDebuggerAgents() && --s_numSinksWithInspectorDOMDebuggerAgent == 0)
    s_existingAgents &= ~kInspectorDOMDebuggerAgent;
  if (hasInspectorTraceEventss() && --s_numSinksWithInspectorTraceEvents == 0)
    s_existingAgents &= ~kInspectorTraceEvents;
  if (hasInspectorDOMAgents() && --s_numSinksWithInspectorDOMAgent == 0)
    s_existingAgents &= ~kInspectorDOMAgent;
  if (hasInspectorApplicationCacheAgents() && --s_numSinksWithInspectorApplicationCacheAgent == 0)
    s_existingAgents &= ~kInspectorApplicationCacheAgent;
  if (hasInspectorNetworkAgents() && --s_numSinksWithInspectorNetworkAgent == 0)
    s_existingAgents &= ~kInspectorNetworkAgent;
  if (hasInspectorWorkerAgents() && --s_numSinksWithInspectorWorkerAgent == 0)
    s_existingAgents &= ~kInspectorWorkerAgent;
  if (hasInspectorPerformanceAgents() && --s_numSinksWithInspectorPerformanceAgent == 0)
    s_existingAgents &= ~kInspectorPerformanceAgent;
  if (hasInspectorAnimationAgents() && --s_numSinksWithInspectorAnimationAgent == 0)
    s_existingAgents &= ~kInspectorAnimationAgent;
  if (hasInspectorPageAgents() && --s_numSinksWithInspectorPageAgent == 0)
    s_existingAgents &= ~kInspectorPageAgent;
  if (hasInspectorDOMSnapshotAgents() && --s_numSinksWithInspectorDOMSnapshotAgent == 0)
    s_existingAgents &= ~kInspectorDOMSnapshotAgent;
  if (hasInspectorLayerTreeAgents() && --s_numSinksWithInspectorLayerTreeAgent == 0)
    s_existingAgents &= ~kInspectorLayerTreeAgent;
}


// static
unsigned CoreProbeSink::s_numSinksWithAdTracker = 0;

void CoreProbeSink::addAdTracker(AdTracker* agent) {
  bool already_had_agent = hasAdTrackers();
  m_adTrackers.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithAdTracker == 1)
      s_existingAgents |= kAdTracker;
  }

  DCHECK(HasAgentsGlobal(kAdTracker));
}

void CoreProbeSink::removeAdTracker(AdTracker* agent) {
  if (!hasAdTrackers())
    return;

  m_adTrackers.erase(agent);

  if (!hasAdTrackers()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithAdTracker == 0)
      s_existingAgents &= ~kAdTracker;
  }

  if (hasAdTrackers())
    DCHECK(HasAgentsGlobal(kAdTracker));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorLogAgent = 0;

void CoreProbeSink::addInspectorLogAgent(InspectorLogAgent* agent) {
  bool already_had_agent = hasInspectorLogAgents();
  m_inspectorLogAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorLogAgent == 1)
      s_existingAgents |= kInspectorLogAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorLogAgent));
}

void CoreProbeSink::removeInspectorLogAgent(InspectorLogAgent* agent) {
  if (!hasInspectorLogAgents())
    return;

  m_inspectorLogAgents.erase(agent);

  if (!hasInspectorLogAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorLogAgent == 0)
      s_existingAgents &= ~kInspectorLogAgent;
  }

  if (hasInspectorLogAgents())
    DCHECK(HasAgentsGlobal(kInspectorLogAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithPerformanceMonitor = 0;

void CoreProbeSink::addPerformanceMonitor(PerformanceMonitor* agent) {
  bool already_had_agent = hasPerformanceMonitors();
  m_performanceMonitors.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithPerformanceMonitor == 1)
      s_existingAgents |= kPerformanceMonitor;
  }

  DCHECK(HasAgentsGlobal(kPerformanceMonitor));
}

void CoreProbeSink::removePerformanceMonitor(PerformanceMonitor* agent) {
  if (!hasPerformanceMonitors())
    return;

  m_performanceMonitors.erase(agent);

  if (!hasPerformanceMonitors()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithPerformanceMonitor == 0)
      s_existingAgents &= ~kPerformanceMonitor;
  }

  if (hasPerformanceMonitors())
    DCHECK(HasAgentsGlobal(kPerformanceMonitor));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorCSSAgent = 0;

void CoreProbeSink::addInspectorCSSAgent(InspectorCSSAgent* agent) {
  bool already_had_agent = hasInspectorCSSAgents();
  m_inspectorCSSAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorCSSAgent == 1)
      s_existingAgents |= kInspectorCSSAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorCSSAgent));
}

void CoreProbeSink::removeInspectorCSSAgent(InspectorCSSAgent* agent) {
  if (!hasInspectorCSSAgents())
    return;

  m_inspectorCSSAgents.erase(agent);

  if (!hasInspectorCSSAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorCSSAgent == 0)
      s_existingAgents &= ~kInspectorCSSAgent;
  }

  if (hasInspectorCSSAgents())
    DCHECK(HasAgentsGlobal(kInspectorCSSAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorEmulationAgent = 0;

void CoreProbeSink::addInspectorEmulationAgent(InspectorEmulationAgent* agent) {
  bool already_had_agent = hasInspectorEmulationAgents();
  m_inspectorEmulationAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorEmulationAgent == 1)
      s_existingAgents |= kInspectorEmulationAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorEmulationAgent));
}

void CoreProbeSink::removeInspectorEmulationAgent(InspectorEmulationAgent* agent) {
  if (!hasInspectorEmulationAgents())
    return;

  m_inspectorEmulationAgents.erase(agent);

  if (!hasInspectorEmulationAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorEmulationAgent == 0)
      s_existingAgents &= ~kInspectorEmulationAgent;
  }

  if (hasInspectorEmulationAgents())
    DCHECK(HasAgentsGlobal(kInspectorEmulationAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorDOMDebuggerAgent = 0;

void CoreProbeSink::addInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent) {
  bool already_had_agent = hasInspectorDOMDebuggerAgents();
  m_inspectorDOMDebuggerAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorDOMDebuggerAgent == 1)
      s_existingAgents |= kInspectorDOMDebuggerAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorDOMDebuggerAgent));
}

void CoreProbeSink::removeInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent) {
  if (!hasInspectorDOMDebuggerAgents())
    return;

  m_inspectorDOMDebuggerAgents.erase(agent);

  if (!hasInspectorDOMDebuggerAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorDOMDebuggerAgent == 0)
      s_existingAgents &= ~kInspectorDOMDebuggerAgent;
  }

  if (hasInspectorDOMDebuggerAgents())
    DCHECK(HasAgentsGlobal(kInspectorDOMDebuggerAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorTraceEvents = 0;

void CoreProbeSink::addInspectorTraceEvents(InspectorTraceEvents* agent) {
  bool already_had_agent = hasInspectorTraceEventss();
  m_inspectorTraceEventss.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorTraceEvents == 1)
      s_existingAgents |= kInspectorTraceEvents;
  }

  DCHECK(HasAgentsGlobal(kInspectorTraceEvents));
}

void CoreProbeSink::removeInspectorTraceEvents(InspectorTraceEvents* agent) {
  if (!hasInspectorTraceEventss())
    return;

  m_inspectorTraceEventss.erase(agent);

  if (!hasInspectorTraceEventss()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorTraceEvents == 0)
      s_existingAgents &= ~kInspectorTraceEvents;
  }

  if (hasInspectorTraceEventss())
    DCHECK(HasAgentsGlobal(kInspectorTraceEvents));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorDOMAgent = 0;

void CoreProbeSink::addInspectorDOMAgent(InspectorDOMAgent* agent) {
  bool already_had_agent = hasInspectorDOMAgents();
  m_inspectorDOMAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorDOMAgent == 1)
      s_existingAgents |= kInspectorDOMAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorDOMAgent));
}

void CoreProbeSink::removeInspectorDOMAgent(InspectorDOMAgent* agent) {
  if (!hasInspectorDOMAgents())
    return;

  m_inspectorDOMAgents.erase(agent);

  if (!hasInspectorDOMAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorDOMAgent == 0)
      s_existingAgents &= ~kInspectorDOMAgent;
  }

  if (hasInspectorDOMAgents())
    DCHECK(HasAgentsGlobal(kInspectorDOMAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorApplicationCacheAgent = 0;

void CoreProbeSink::addInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent) {
  bool already_had_agent = hasInspectorApplicationCacheAgents();
  m_inspectorApplicationCacheAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorApplicationCacheAgent == 1)
      s_existingAgents |= kInspectorApplicationCacheAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorApplicationCacheAgent));
}

void CoreProbeSink::removeInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent) {
  if (!hasInspectorApplicationCacheAgents())
    return;

  m_inspectorApplicationCacheAgents.erase(agent);

  if (!hasInspectorApplicationCacheAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorApplicationCacheAgent == 0)
      s_existingAgents &= ~kInspectorApplicationCacheAgent;
  }

  if (hasInspectorApplicationCacheAgents())
    DCHECK(HasAgentsGlobal(kInspectorApplicationCacheAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorNetworkAgent = 0;

void CoreProbeSink::addInspectorNetworkAgent(InspectorNetworkAgent* agent) {
  bool already_had_agent = hasInspectorNetworkAgents();
  m_inspectorNetworkAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorNetworkAgent == 1)
      s_existingAgents |= kInspectorNetworkAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorNetworkAgent));
}

void CoreProbeSink::removeInspectorNetworkAgent(InspectorNetworkAgent* agent) {
  if (!hasInspectorNetworkAgents())
    return;

  m_inspectorNetworkAgents.erase(agent);

  if (!hasInspectorNetworkAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorNetworkAgent == 0)
      s_existingAgents &= ~kInspectorNetworkAgent;
  }

  if (hasInspectorNetworkAgents())
    DCHECK(HasAgentsGlobal(kInspectorNetworkAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorWorkerAgent = 0;

void CoreProbeSink::addInspectorWorkerAgent(InspectorWorkerAgent* agent) {
  bool already_had_agent = hasInspectorWorkerAgents();
  m_inspectorWorkerAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorWorkerAgent == 1)
      s_existingAgents |= kInspectorWorkerAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorWorkerAgent));
}

void CoreProbeSink::removeInspectorWorkerAgent(InspectorWorkerAgent* agent) {
  if (!hasInspectorWorkerAgents())
    return;

  m_inspectorWorkerAgents.erase(agent);

  if (!hasInspectorWorkerAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorWorkerAgent == 0)
      s_existingAgents &= ~kInspectorWorkerAgent;
  }

  if (hasInspectorWorkerAgents())
    DCHECK(HasAgentsGlobal(kInspectorWorkerAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorPerformanceAgent = 0;

void CoreProbeSink::addInspectorPerformanceAgent(InspectorPerformanceAgent* agent) {
  bool already_had_agent = hasInspectorPerformanceAgents();
  m_inspectorPerformanceAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorPerformanceAgent == 1)
      s_existingAgents |= kInspectorPerformanceAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorPerformanceAgent));
}

void CoreProbeSink::removeInspectorPerformanceAgent(InspectorPerformanceAgent* agent) {
  if (!hasInspectorPerformanceAgents())
    return;

  m_inspectorPerformanceAgents.erase(agent);

  if (!hasInspectorPerformanceAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorPerformanceAgent == 0)
      s_existingAgents &= ~kInspectorPerformanceAgent;
  }

  if (hasInspectorPerformanceAgents())
    DCHECK(HasAgentsGlobal(kInspectorPerformanceAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorAnimationAgent = 0;

void CoreProbeSink::addInspectorAnimationAgent(InspectorAnimationAgent* agent) {
  bool already_had_agent = hasInspectorAnimationAgents();
  m_inspectorAnimationAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorAnimationAgent == 1)
      s_existingAgents |= kInspectorAnimationAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorAnimationAgent));
}

void CoreProbeSink::removeInspectorAnimationAgent(InspectorAnimationAgent* agent) {
  if (!hasInspectorAnimationAgents())
    return;

  m_inspectorAnimationAgents.erase(agent);

  if (!hasInspectorAnimationAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorAnimationAgent == 0)
      s_existingAgents &= ~kInspectorAnimationAgent;
  }

  if (hasInspectorAnimationAgents())
    DCHECK(HasAgentsGlobal(kInspectorAnimationAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorPageAgent = 0;

void CoreProbeSink::addInspectorPageAgent(InspectorPageAgent* agent) {
  bool already_had_agent = hasInspectorPageAgents();
  m_inspectorPageAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorPageAgent == 1)
      s_existingAgents |= kInspectorPageAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorPageAgent));
}

void CoreProbeSink::removeInspectorPageAgent(InspectorPageAgent* agent) {
  if (!hasInspectorPageAgents())
    return;

  m_inspectorPageAgents.erase(agent);

  if (!hasInspectorPageAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorPageAgent == 0)
      s_existingAgents &= ~kInspectorPageAgent;
  }

  if (hasInspectorPageAgents())
    DCHECK(HasAgentsGlobal(kInspectorPageAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorDOMSnapshotAgent = 0;

void CoreProbeSink::addInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent) {
  bool already_had_agent = hasInspectorDOMSnapshotAgents();
  m_inspectorDOMSnapshotAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorDOMSnapshotAgent == 1)
      s_existingAgents |= kInspectorDOMSnapshotAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorDOMSnapshotAgent));
}

void CoreProbeSink::removeInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent) {
  if (!hasInspectorDOMSnapshotAgents())
    return;

  m_inspectorDOMSnapshotAgents.erase(agent);

  if (!hasInspectorDOMSnapshotAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorDOMSnapshotAgent == 0)
      s_existingAgents &= ~kInspectorDOMSnapshotAgent;
  }

  if (hasInspectorDOMSnapshotAgents())
    DCHECK(HasAgentsGlobal(kInspectorDOMSnapshotAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorLayerTreeAgent = 0;

void CoreProbeSink::addInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent) {
  bool already_had_agent = hasInspectorLayerTreeAgents();
  m_inspectorLayerTreeAgents.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorLayerTreeAgent == 1)
      s_existingAgents |= kInspectorLayerTreeAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorLayerTreeAgent));
}

void CoreProbeSink::removeInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent) {
  if (!hasInspectorLayerTreeAgents())
    return;

  m_inspectorLayerTreeAgents.erase(agent);

  if (!hasInspectorLayerTreeAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorLayerTreeAgent == 0)
      s_existingAgents &= ~kInspectorLayerTreeAgent;
  }

  if (hasInspectorLayerTreeAgents())
    DCHECK(HasAgentsGlobal(kInspectorLayerTreeAgent));
}

void CoreProbeSink::Trace(Visitor* visitor)
{
  visitor->Trace(m_adTrackers);
  visitor->Trace(m_inspectorLogAgents);
  visitor->Trace(m_performanceMonitors);
  visitor->Trace(m_inspectorCSSAgents);
  visitor->Trace(m_inspectorEmulationAgents);
  visitor->Trace(m_inspectorDOMDebuggerAgents);
  visitor->Trace(m_inspectorTraceEventss);
  visitor->Trace(m_inspectorDOMAgents);
  visitor->Trace(m_inspectorApplicationCacheAgents);
  visitor->Trace(m_inspectorNetworkAgents);
  visitor->Trace(m_inspectorWorkerAgents);
  visitor->Trace(m_inspectorPerformanceAgents);
  visitor->Trace(m_inspectorAnimationAgents);
  visitor->Trace(m_inspectorPageAgents);
  visitor->Trace(m_inspectorDOMSnapshotAgents);
  visitor->Trace(m_inspectorLayerTreeAgents);
}

namespace probe {

void didClearDocumentOfWindowObjectImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorAnimationAgents()) {
    for (InspectorAnimationAgent* agent : probe_sink->inspectorAnimationAgents())
      agent->DidClearDocumentOfWindowObject(paramLocalFrame);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->DidClearDocumentOfWindowObject(paramLocalFrame);
  }
}

void willInsertDOMNodeImpl(Node* parent) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(parent);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->WillInsertDOMNode(parent);
  }
}

void didInsertDOMNodeImpl(Node* paramNode) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramNode);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->DidInsertDOMNode(paramNode);
  }
  if (probe_sink->hasInspectorDOMSnapshotAgents()) {
    for (InspectorDOMSnapshotAgent* agent : probe_sink->inspectorDOMSnapshotAgents())
      agent->DidInsertDOMNode(paramNode);
  }
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidInsertDOMNode(paramNode);
  }
}

void willRemoveDOMNodeImpl(Node* paramNode) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramNode);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->WillRemoveDOMNode(paramNode);
  }
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->WillRemoveDOMNode(paramNode);
  }
}

void willModifyDOMAttrImpl(Element* paramElement, const AtomicString& oldValue, const AtomicString& newValue) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->WillModifyDOMAttr(paramElement, oldValue, newValue);
  }
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->WillModifyDOMAttr(paramElement, oldValue, newValue);
  }
}

void didModifyDOMAttrImpl(Element* paramElement, const QualifiedName& name, const AtomicString& value) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidModifyDOMAttr(paramElement, name, value);
  }
}

void didRemoveDOMAttrImpl(Element* paramElement, const QualifiedName& name) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidRemoveDOMAttr(paramElement, name);
  }
}

void willChangeStyleElementImpl(Element* paramElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->inspectorCSSAgents())
      agent->WillChangeStyleElement(paramElement);
  }
}

void characterDataModifiedImpl(CharacterData* paramCharacterData) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramCharacterData);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMSnapshotAgents()) {
    for (InspectorDOMSnapshotAgent* agent : probe_sink->inspectorDOMSnapshotAgents())
      agent->CharacterDataModified(paramCharacterData);
  }
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->CharacterDataModified(paramCharacterData);
  }
}

void didInvalidateStyleAttrImpl(Node* paramNode) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramNode);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->DidInvalidateStyleAttr(paramNode);
  }
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidInvalidateStyleAttr(paramNode);
  }
}

void didPerformElementShadowDistributionImpl(Element* paramElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidPerformElementShadowDistribution(paramElement);
  }
}

void didPerformSlotDistributionImpl(HTMLSlotElement* paramHTMLSlotElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramHTMLSlotElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidPerformSlotDistribution(paramHTMLSlotElement);
  }
}

void documentDetachedImpl(Document* paramDocument) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->inspectorCSSAgents())
      agent->DocumentDetached(paramDocument);
  }
}

void activeStyleSheetsUpdatedImpl(Document* paramDocument) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->inspectorCSSAgents())
      agent->ActiveStyleSheetsUpdated(paramDocument);
  }
}

void fontsUpdatedImpl(ExecutionContext* paramExecutionContext, const FontFace* face, const String& src, const FontCustomPlatformData* fontCustomPlatformData) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->inspectorCSSAgents())
      agent->FontsUpdated(face, src, fontCustomPlatformData);
  }
}

void mediaQueryResultChangedImpl(Document* paramDocument) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->inspectorCSSAgents())
      agent->MediaQueryResultChanged();
  }
}

void didPushShadowRootImpl(Element* host, ShadowRoot* paramShadowRoot) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(host);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidPushShadowRoot(host, paramShadowRoot);
  }
}

void willPopShadowRootImpl(Element* host, ShadowRoot* paramShadowRoot) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(host);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->WillPopShadowRoot(host, paramShadowRoot);
  }
}

void willSendXMLHttpOrFetchNetworkRequestImpl(ExecutionContext* paramExecutionContext, const String& url) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->WillSendXMLHttpOrFetchNetworkRequest(url);
  }
}

void didCreateCanvasContextImpl(Document* paramDocument) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->DidCreateCanvasContext();
  }
}

void didFireWebGLErrorImpl(Element* paramElement, const String& errorName) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->DidFireWebGLError(errorName);
  }
}

void didFireWebGLWarningImpl(Element* paramElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->DidFireWebGLWarning();
  }
}

void didFireWebGLErrorOrWarningImpl(Element* paramElement, const String& message) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->DidFireWebGLErrorOrWarning(message);
  }
}

void didResizeMainFrameImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->DidResizeMainFrame();
  }
}

void didPaintImpl(LocalFrame* paramLocalFrame, const GraphicsLayer* paramGraphicsLayer, GraphicsContext& paramGraphicsContext, const LayoutRect& paramLayoutRect) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorLayerTreeAgents()) {
    for (InspectorLayerTreeAgent* agent : probe_sink->inspectorLayerTreeAgents())
      agent->DidPaint(paramGraphicsLayer, paramGraphicsContext, paramLayoutRect);
  }
}

void applyUserAgentOverrideImpl(ExecutionContext* paramExecutionContext, String* userAgent) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->ApplyUserAgentOverride(userAgent);
  }
}

void didBlockRequestImpl(ExecutionContext* paramExecutionContext, const ResourceRequest& paramResourceRequest, DocumentLoader* paramDocumentLoader, const FetchInitiatorInfo& paramFetchInitiatorInfo, ResourceRequestBlockedReason paramResourceRequestBlockedReason, Resource::Type paramResource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidBlockRequest(paramExecutionContext, paramResourceRequest, paramDocumentLoader, paramFetchInitiatorInfo, paramResourceRequestBlockedReason, paramResource);
  }
}

void didChangeResourcePriorityImpl(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader, unsigned long identifier, ResourceLoadPriority loadPriority) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidChangeResourcePriority(paramDocumentLoader, identifier, loadPriority);
  }
}

void willSendRequestImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, ResourceRequest& paramResourceRequest, const ResourceResponse& redirectResponse, const FetchInitiatorInfo& paramFetchInitiatorInfo, Resource::Type paramResource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasAdTrackers()) {
    for (AdTracker* agent : probe_sink->adTrackers())
      agent->WillSendRequest(paramExecutionContext, identifier, paramDocumentLoader, paramResourceRequest, redirectResponse, paramFetchInitiatorInfo, paramResource);
  }
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->WillSendRequest(paramExecutionContext, identifier, paramDocumentLoader, paramResourceRequest, redirectResponse, paramFetchInitiatorInfo, paramResource);
  }
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->WillSendRequest(paramExecutionContext, identifier, paramDocumentLoader, paramResourceRequest, redirectResponse, paramFetchInitiatorInfo, paramResource);
  }
}

void markResourceAsCachedImpl(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader, unsigned long identifier) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->MarkResourceAsCached(paramDocumentLoader, identifier);
  }
}

void didReceiveResourceResponseImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const ResourceResponse& paramResourceResponse, Resource* paramResource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->DidReceiveResourceResponse(identifier, paramDocumentLoader, paramResourceResponse, paramResource);
  }
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveResourceResponse(identifier, paramDocumentLoader, paramResourceResponse, paramResource);
  }
}

void didReceiveDataImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const char* data, int dataLength) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->DidReceiveData(identifier, paramDocumentLoader, data, dataLength);
  }
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveData(identifier, paramDocumentLoader, data, dataLength);
  }
}

void didReceiveBlobImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, BlobDataHandle* paramBlobDataHandle) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveBlob(identifier, paramDocumentLoader, paramBlobDataHandle);
  }
}

void didReceiveEncodedDataLengthImpl(ExecutionContext* paramExecutionContext, DocumentLoader* loader, unsigned long identifier, int encodedDataLength) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveEncodedDataLength(loader, identifier, encodedDataLength);
  }
}

void didFinishLoadingImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, TimeTicks finishTime, int64_t encoded_data_length, int64_t decodedBodyLength, bool blocked_cross_site_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->DidFinishLoading(identifier, paramDocumentLoader, finishTime, encoded_data_length, decodedBodyLength, blocked_cross_site_document);
  }
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidFinishLoading(identifier, paramDocumentLoader, finishTime, encoded_data_length, decodedBodyLength, blocked_cross_site_document);
  }
}

void didReceiveCORSRedirectResponseImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const ResourceResponse& paramResourceResponse, Resource* paramResource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveCORSRedirectResponse(identifier, paramDocumentLoader, paramResourceResponse, paramResource);
  }
}

void didFailLoadingImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, DocumentLoader* paramDocumentLoader, const ResourceError& paramResourceError) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->DidFailLoading(identifier, paramDocumentLoader, paramResourceError);
  }
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidFailLoading(identifier, paramDocumentLoader, paramResourceError);
  }
}

void documentThreadableLoaderStartedLoadingForClientImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, ThreadableLoaderClient* client) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DocumentThreadableLoaderStartedLoadingForClient(identifier, client);
  }
}

void documentThreadableLoaderFailedToStartLoadingForClientImpl(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* client) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DocumentThreadableLoaderFailedToStartLoadingForClient(client);
  }
}

void willSendEventSourceRequestImpl(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* eventSource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->WillSendEventSourceRequest(eventSource);
  }
}

void willDispatchEventSourceEventImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, const AtomicString& eventName, const AtomicString& eventId, const String& data) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->WillDispatchEventSourceEvent(identifier, eventName, eventId, data);
  }
}

void didFinishEventSourceRequestImpl(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* eventSource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidFinishEventSourceRequest(eventSource);
  }
}

void willLoadXHRImpl(ExecutionContext* paramExecutionContext, XMLHttpRequest* xhr, ThreadableLoaderClient* client, const AtomicString& method, const KURL& url, bool async, const HTTPHeaderMap& headers, bool includeCredentials) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->WillLoadXHR(xhr, client, method, url, async, headers, includeCredentials);
  }
}

void didFailXHRLoadingImpl(ExecutionContext* paramExecutionContext, XMLHttpRequest* xhr, ThreadableLoaderClient* client, const AtomicString& method, const String& url) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidFailXHRLoading(paramExecutionContext, xhr, client, method, url);
  }
}

void didFinishXHRLoadingImpl(ExecutionContext* paramExecutionContext, XMLHttpRequest* xhr, ThreadableLoaderClient* client, const AtomicString& method, const String& url) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidFinishXHRLoading(paramExecutionContext, xhr, client, method, url);
  }
}

void willStartFetchImpl(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* paramThreadableLoaderClient) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->WillStartFetch(paramThreadableLoaderClient);
  }
}

void detachClientRequestImpl(ExecutionContext* paramExecutionContext, ThreadableLoaderClient* paramThreadableLoaderClient) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DetachClientRequest(paramThreadableLoaderClient);
  }
}

void scriptImportedImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, const String& sourceString) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->ScriptImported(identifier, sourceString);
  }
}

void scriptExecutionBlockedByCSPImpl(ExecutionContext* paramExecutionContext, const String& directiveText) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->ScriptExecutionBlockedByCSP(directiveText);
  }
}

void didReceiveScriptResponseImpl(ExecutionContext* paramExecutionContext, unsigned long identifier) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveScriptResponse(identifier);
  }
}

void domContentLoadedEventFiredImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DomContentLoadedEventFired(paramLocalFrame);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->DomContentLoadedEventFired(paramLocalFrame);
  }
}

void loadEventFiredImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->LoadEventFired(paramLocalFrame);
  }
}

void frameAttachedToParentImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->FrameAttachedToParent(paramLocalFrame);
  }
}

void frameDetachedFromParentImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->FrameDetachedFromParent(paramLocalFrame);
  }
}

void willCommitLoadImpl(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->WillCommitLoad(paramLocalFrame, paramDocumentLoader);
  }
}

void didCommitLoadImpl(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidCommitLoad(paramLocalFrame, paramDocumentLoader);
  }
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->DidCommitLoad(paramLocalFrame, paramDocumentLoader);
  }
}

void didNavigateWithinDocumentImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->DidNavigateWithinDocument(paramLocalFrame);
  }
}

void frameDocumentUpdatedImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->FrameDocumentUpdated(paramLocalFrame);
  }
}

void frameOwnerContentUpdatedImpl(LocalFrame* paramLocalFrame, HTMLFrameOwnerElement* paramHTMLFrameOwnerElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->FrameOwnerContentUpdated(paramLocalFrame, paramHTMLFrameOwnerElement);
  }
}

void frameStartedLoadingImpl(LocalFrame* paramLocalFrame, FrameLoadType paramFrameLoadType) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->FrameStartedLoading(paramLocalFrame, paramFrameLoadType);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->FrameStartedLoading(paramLocalFrame, paramFrameLoadType);
  }
  if (probe_sink->hasInspectorEmulationAgents()) {
    for (InspectorEmulationAgent* agent : probe_sink->inspectorEmulationAgents())
      agent->FrameStartedLoading(paramLocalFrame, paramFrameLoadType);
  }
}

void frameStoppedLoadingImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->FrameStoppedLoading(paramLocalFrame);
  }
}

void frameScheduledNavigationImpl(LocalFrame* paramLocalFrame, ScheduledNavigation* paramScheduledNavigation) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->FrameScheduledNavigation(paramLocalFrame, paramScheduledNavigation);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->FrameScheduledNavigation(paramLocalFrame, paramScheduledNavigation);
  }
}

void frameClearedScheduledNavigationImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->FrameClearedScheduledNavigation(paramLocalFrame);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->FrameClearedScheduledNavigation(paramLocalFrame);
  }
}

void frameScheduledClientNavigationImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->FrameScheduledClientNavigation(paramLocalFrame);
  }
}

void frameClearedScheduledClientNavigationImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->FrameClearedScheduledClientNavigation(paramLocalFrame);
  }
}

void didStartWorkerImpl(ExecutionContext* paramExecutionContext, WorkerInspectorProxy* proxy, bool waitingForDebugger) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorWorkerAgents()) {
    for (InspectorWorkerAgent* agent : probe_sink->inspectorWorkerAgents())
      agent->DidStartWorker(proxy, waitingForDebugger);
  }
}

void workerTerminatedImpl(ExecutionContext* paramExecutionContext, WorkerInspectorProxy* proxy) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorWorkerAgents()) {
    for (InspectorWorkerAgent* agent : probe_sink->inspectorWorkerAgents())
      agent->WorkerTerminated(proxy);
  }
}

void didCreateWebSocketImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, const KURL& requestURL, const String& protocol) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidCreateWebSocket(paramExecutionContext, identifier, requestURL, protocol);
  }
}

void willSendWebSocketHandshakeRequestImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, const WebSocketHandshakeRequest* request) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->WillSendWebSocketHandshakeRequest(paramExecutionContext, identifier, request);
  }
}

void didReceiveWebSocketHandshakeResponseImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, const WebSocketHandshakeRequest* request, const WebSocketHandshakeResponse* response) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveWebSocketHandshakeResponse(paramExecutionContext, identifier, request, response);
  }
}

void didCloseWebSocketImpl(ExecutionContext* paramExecutionContext, unsigned long identifier) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidCloseWebSocket(paramExecutionContext, identifier);
  }
}

void didReceiveWebSocketFrameImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, int opCode, bool masked, const char* payload, size_t payloadLength) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveWebSocketFrame(identifier, opCode, masked, payload, payloadLength);
  }
}

void didSendWebSocketFrameImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, int opCode, bool masked, const char* payload, size_t payloadLength) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidSendWebSocketFrame(identifier, opCode, masked, payload, payloadLength);
  }
}

void didReceiveWebSocketFrameErrorImpl(ExecutionContext* paramExecutionContext, unsigned long identifier, const String& errorMessage) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->DidReceiveWebSocketFrameError(identifier, errorMessage);
  }
}

void networkStateChangedImpl(LocalFrame* paramLocalFrame, bool online) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorApplicationCacheAgents()) {
    for (InspectorApplicationCacheAgent* agent : probe_sink->inspectorApplicationCacheAgents())
      agent->NetworkStateChanged(paramLocalFrame, online);
  }
}

void updateApplicationCacheStatusImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorApplicationCacheAgents()) {
    for (InspectorApplicationCacheAgent* agent : probe_sink->inspectorApplicationCacheAgents())
      agent->UpdateApplicationCacheStatus(paramLocalFrame);
  }
}

void layerTreeDidChangeImpl(LocalFrame* paramLocalFrame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorLayerTreeAgents()) {
    for (InspectorLayerTreeAgent* agent : probe_sink->inspectorLayerTreeAgents())
      agent->LayerTreeDidChange();
  }
}

void pseudoElementCreatedImpl(PseudoElement* paramPseudoElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramPseudoElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->PseudoElementCreated(paramPseudoElement);
  }
}

void pseudoElementDestroyedImpl(PseudoElement* paramPseudoElement) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramPseudoElement);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->inspectorDOMAgents())
      agent->PseudoElementDestroyed(paramPseudoElement);
  }
}

void didCreateAnimationImpl(Document* paramDocument, unsigned paramunsigned) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorAnimationAgents()) {
    for (InspectorAnimationAgent* agent : probe_sink->inspectorAnimationAgents())
      agent->DidCreateAnimation(paramunsigned);
  }
}

void animationPlayStateChangedImpl(Document* paramDocument, Animation* paramAnimation, Animation::AnimationPlayState oldPlayState, Animation::AnimationPlayState newPlayState) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorAnimationAgents()) {
    for (InspectorAnimationAgent* agent : probe_sink->inspectorAnimationAgents())
      agent->AnimationPlayStateChanged(paramAnimation, oldPlayState, newPlayState);
  }
}

void windowOpenImpl(Document* paramDocument, const String& url, const AtomicString& windowName, const WebWindowFeatures& windowFeatures, bool userGestrue) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->WindowOpen(paramDocument, url, windowName, windowFeatures, userGestrue);
  }
}

void consoleMessageAddedImpl(ExecutionContext* paramExecutionContext, ConsoleMessage* paramConsoleMessage) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorLogAgents()) {
    for (InspectorLogAgent* agent : probe_sink->inspectorLogAgents())
      agent->ConsoleMessageAdded(paramConsoleMessage);
  }
}

void willRunJavaScriptDialogImpl(LocalFrame* frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(frame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->WillRunJavaScriptDialog();
  }
}

void didRunJavaScriptDialogImpl(LocalFrame* frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(frame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->DidRunJavaScriptDialog();
  }
}

void documentWriteFetchScriptImpl(Document* paramDocument) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->DocumentWriteFetchScript(paramDocument);
  }
}

void didChangeViewportImpl(LocalFrame* document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->DidChangeViewport();
  }
}

void breakableLocationImpl(ExecutionContext* context, const char* name) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->BreakableLocation(name);
  }
}

RecalculateStyle::RecalculateStyle(Document* document) :
    document(document) {
  probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Will(*this);
  }
}

RecalculateStyle::~RecalculateStyle() {
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Did(*this);
  }
}

UpdateLayout::UpdateLayout(Document* document) :
    document(document) {
  probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Will(*this);
  }
}

UpdateLayout::~UpdateLayout() {
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Did(*this);
  }
}

ExecuteScript::ExecuteScript(ExecutionContext* context, const String& script_url) :
    context(context),
    script_url(script_url) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasAdTrackers()) {
    for (AdTracker* agent : probe_sink->adTrackers())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->Will(*this);
  }
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Will(*this);
  }
}

ExecuteScript::~ExecuteScript() {
  if (!probe_sink)
    return;
  if (probe_sink->hasAdTrackers()) {
    for (AdTracker* agent : probe_sink->adTrackers())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->Did(*this);
  }
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Did(*this);
  }
}

CallFunction::CallFunction(ExecutionContext* context, v8::Local<v8::Function> function, int depth) :
    context(context),
    function(function),
    depth(depth) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasAdTrackers()) {
    for (AdTracker* agent : probe_sink->adTrackers())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->Will(*this);
  }
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Will(*this);
  }
}

CallFunction::~CallFunction() {
  if (!probe_sink)
    return;
  if (probe_sink->hasAdTrackers()) {
    for (AdTracker* agent : probe_sink->adTrackers())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->Did(*this);
  }
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->Did(*this);
  }
}

UserCallback::UserCallback(ExecutionContext* context, const char* name, const AtomicString& atomicName, bool recurring, EventTarget* eventTarget) :
    context(context),
    name(name),
    atomicName(atomicName),
    recurring(recurring),
    eventTarget(eventTarget) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->Will(*this);
  }
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Will(*this);
  }
}

UserCallback::~UserCallback() {
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->inspectorDOMDebuggerAgents())
      agent->Did(*this);
  }
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Did(*this);
  }
}

V8Compile::V8Compile(ExecutionContext* context, const String& file_name, int line, int column) :
    context(context),
    file_name(file_name),
    line(line),
    column(column) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Will(*this);
  }
}

V8Compile::~V8Compile() {
  if (!probe_sink)
    return;
  if (probe_sink->hasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->performanceMonitors())
      agent->Did(*this);
  }
}

ParseHTML::ParseHTML(Document* document, HTMLDocumentParser* parser) :
    document(document),
    parser(parser) {
  probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->Will(*this);
  }
}

ParseHTML::~ParseHTML() {
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->Did(*this);
  }
}

void forcePseudoStateImpl(Element* element, CSSSelector::PseudoType pseudoState, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(element);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->inspectorCSSAgents())
      agent->ForcePseudoState(element, pseudoState, result);
  }
}

void shouldWaitForDebuggerOnWorkerStartImpl(ExecutionContext* context, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorWorkerAgents()) {
    for (InspectorWorkerAgent* agent : probe_sink->inspectorWorkerAgents())
      agent->ShouldWaitForDebuggerOnWorkerStart(result);
  }
}

void shouldForceCORSPreflightImpl(ExecutionContext* paramExecutionContext, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->ShouldForceCORSPreflight(result);
  }
}

void shouldBlockRequestImpl(ExecutionContext* paramExecutionContext, const KURL& paramKURL, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->ShouldBlockRequest(paramKURL, result);
  }
}

void shouldBypassServiceWorkerImpl(ExecutionContext* context, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->inspectorNetworkAgents())
      agent->ShouldBypassServiceWorker(result);
  }
}

void consoleTimeStampImpl(ExecutionContext* paramExecutionContext, const String& title) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramExecutionContext);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->inspectorPerformanceAgents())
      agent->ConsoleTimeStamp(title);
  }
}

void lifecycleEventImpl(LocalFrame* paramLocalFrame, DocumentLoader* paramDocumentLoader, const char* name, double timestamp) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramLocalFrame);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->LifecycleEvent(paramLocalFrame, paramDocumentLoader, name, timestamp);
  }
}

void paintTimingImpl(Document* paramDocument, const char* name, double timestamp) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(paramDocument);
  if (!probe_sink)
    return;
  if (probe_sink->hasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->inspectorTraceEventss())
      agent->PaintTiming(paramDocument, name, timestamp);
  }
  if (probe_sink->hasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->inspectorPageAgents())
      agent->PaintTiming(paramDocument, name, timestamp);
  }
}


} // namespace probe
} // namespace blink
