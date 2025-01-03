// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /ProbeSink.h.tmpl
// and input files:
//   CoreProbes.pidl



#ifndef CoreProbeSink_h
#define CoreProbeSink_h

#include <atomic>

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/heap_allocator.h"

namespace blink {

class AdTracker;
class InspectorLogAgent;
class PerformanceMonitor;
class InspectorCSSAgent;
class InspectorEmulationAgent;
class InspectorDOMDebuggerAgent;
class InspectorTraceEvents;
class InspectorDOMAgent;
class InspectorApplicationCacheAgent;
class InspectorNetworkAgent;
class InspectorWorkerAgent;
class InspectorPerformanceAgent;
class InspectorAnimationAgent;
class InspectorPageAgent;
class InspectorDOMSnapshotAgent;
class InspectorLayerTreeAgent;

class CORE_EXPORT CoreProbeSink : public GarbageCollectedFinalized<CoreProbeSink> {

 public:
  enum AgentType : unsigned {
    kAdTracker = 1u << 0,
    kInspectorLogAgent = 1u << 1,
    kPerformanceMonitor = 1u << 2,
    kInspectorCSSAgent = 1u << 3,
    kInspectorEmulationAgent = 1u << 4,
    kInspectorDOMDebuggerAgent = 1u << 5,
    kInspectorTraceEvents = 1u << 6,
    kInspectorDOMAgent = 1u << 7,
    kInspectorApplicationCacheAgent = 1u << 8,
    kInspectorNetworkAgent = 1u << 9,
    kInspectorWorkerAgent = 1u << 10,
    kInspectorPerformanceAgent = 1u << 11,
    kInspectorAnimationAgent = 1u << 12,
    kInspectorPageAgent = 1u << 13,
    kInspectorDOMSnapshotAgent = 1u << 14,
    kInspectorLayerTreeAgent = 1u << 15,
  };

  CoreProbeSink();
  ~CoreProbeSink();
  CoreProbeSink (const CoreProbeSink&) = delete;
  CoreProbeSink& operator=(const CoreProbeSink&) = delete;

  void Trace(Visitor*);

  bool hasAdTrackers() const { return !m_adTrackers.IsEmpty(); }
  const HeapListHashSet<Member<AdTracker>>& adTrackers() const { return m_adTrackers; }
  void addAdTracker(AdTracker* agent);
  void removeAdTracker(AdTracker* agent);

  bool hasInspectorLogAgents() const { return !m_inspectorLogAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorLogAgent>>& inspectorLogAgents() const { return m_inspectorLogAgents; }
  void addInspectorLogAgent(InspectorLogAgent* agent);
  void removeInspectorLogAgent(InspectorLogAgent* agent);

  bool hasPerformanceMonitors() const { return !m_performanceMonitors.IsEmpty(); }
  const HeapListHashSet<Member<PerformanceMonitor>>& performanceMonitors() const { return m_performanceMonitors; }
  void addPerformanceMonitor(PerformanceMonitor* agent);
  void removePerformanceMonitor(PerformanceMonitor* agent);

  bool hasInspectorCSSAgents() const { return !m_inspectorCSSAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorCSSAgent>>& inspectorCSSAgents() const { return m_inspectorCSSAgents; }
  void addInspectorCSSAgent(InspectorCSSAgent* agent);
  void removeInspectorCSSAgent(InspectorCSSAgent* agent);

  bool hasInspectorEmulationAgents() const { return !m_inspectorEmulationAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorEmulationAgent>>& inspectorEmulationAgents() const { return m_inspectorEmulationAgents; }
  void addInspectorEmulationAgent(InspectorEmulationAgent* agent);
  void removeInspectorEmulationAgent(InspectorEmulationAgent* agent);

  bool hasInspectorDOMDebuggerAgents() const { return !m_inspectorDOMDebuggerAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorDOMDebuggerAgent>>& inspectorDOMDebuggerAgents() const { return m_inspectorDOMDebuggerAgents; }
  void addInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent);
  void removeInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent);

  bool hasInspectorTraceEventss() const { return !m_inspectorTraceEventss.IsEmpty(); }
  const HeapListHashSet<Member<InspectorTraceEvents>>& inspectorTraceEventss() const { return m_inspectorTraceEventss; }
  void addInspectorTraceEvents(InspectorTraceEvents* agent);
  void removeInspectorTraceEvents(InspectorTraceEvents* agent);

  bool hasInspectorDOMAgents() const { return !m_inspectorDOMAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorDOMAgent>>& inspectorDOMAgents() const { return m_inspectorDOMAgents; }
  void addInspectorDOMAgent(InspectorDOMAgent* agent);
  void removeInspectorDOMAgent(InspectorDOMAgent* agent);

  bool hasInspectorApplicationCacheAgents() const { return !m_inspectorApplicationCacheAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorApplicationCacheAgent>>& inspectorApplicationCacheAgents() const { return m_inspectorApplicationCacheAgents; }
  void addInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent);
  void removeInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent);

  bool hasInspectorNetworkAgents() const { return !m_inspectorNetworkAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorNetworkAgent>>& inspectorNetworkAgents() const { return m_inspectorNetworkAgents; }
  void addInspectorNetworkAgent(InspectorNetworkAgent* agent);
  void removeInspectorNetworkAgent(InspectorNetworkAgent* agent);

  bool hasInspectorWorkerAgents() const { return !m_inspectorWorkerAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorWorkerAgent>>& inspectorWorkerAgents() const { return m_inspectorWorkerAgents; }
  void addInspectorWorkerAgent(InspectorWorkerAgent* agent);
  void removeInspectorWorkerAgent(InspectorWorkerAgent* agent);

  bool hasInspectorPerformanceAgents() const { return !m_inspectorPerformanceAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorPerformanceAgent>>& inspectorPerformanceAgents() const { return m_inspectorPerformanceAgents; }
  void addInspectorPerformanceAgent(InspectorPerformanceAgent* agent);
  void removeInspectorPerformanceAgent(InspectorPerformanceAgent* agent);

  bool hasInspectorAnimationAgents() const { return !m_inspectorAnimationAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorAnimationAgent>>& inspectorAnimationAgents() const { return m_inspectorAnimationAgents; }
  void addInspectorAnimationAgent(InspectorAnimationAgent* agent);
  void removeInspectorAnimationAgent(InspectorAnimationAgent* agent);

  bool hasInspectorPageAgents() const { return !m_inspectorPageAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorPageAgent>>& inspectorPageAgents() const { return m_inspectorPageAgents; }
  void addInspectorPageAgent(InspectorPageAgent* agent);
  void removeInspectorPageAgent(InspectorPageAgent* agent);

  bool hasInspectorDOMSnapshotAgents() const { return !m_inspectorDOMSnapshotAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorDOMSnapshotAgent>>& inspectorDOMSnapshotAgents() const { return m_inspectorDOMSnapshotAgents; }
  void addInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent);
  void removeInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent);

  bool hasInspectorLayerTreeAgents() const { return !m_inspectorLayerTreeAgents.IsEmpty(); }
  const HeapListHashSet<Member<InspectorLayerTreeAgent>>& inspectorLayerTreeAgents() const { return m_inspectorLayerTreeAgents; }
  void addInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent);
  void removeInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent);

  // Queries process-wide. Intended for fast-return cases only.
  static bool HasAgentsGlobal(unsigned mask) {
    return s_existingAgents.load(std::memory_order_acquire) & mask;
  }

 private:
  HeapListHashSet<Member<AdTracker>> m_adTrackers;
  HeapListHashSet<Member<InspectorLogAgent>> m_inspectorLogAgents;
  HeapListHashSet<Member<PerformanceMonitor>> m_performanceMonitors;
  HeapListHashSet<Member<InspectorCSSAgent>> m_inspectorCSSAgents;
  HeapListHashSet<Member<InspectorEmulationAgent>> m_inspectorEmulationAgents;
  HeapListHashSet<Member<InspectorDOMDebuggerAgent>> m_inspectorDOMDebuggerAgents;
  HeapListHashSet<Member<InspectorTraceEvents>> m_inspectorTraceEventss;
  HeapListHashSet<Member<InspectorDOMAgent>> m_inspectorDOMAgents;
  HeapListHashSet<Member<InspectorApplicationCacheAgent>> m_inspectorApplicationCacheAgents;
  HeapListHashSet<Member<InspectorNetworkAgent>> m_inspectorNetworkAgents;
  HeapListHashSet<Member<InspectorWorkerAgent>> m_inspectorWorkerAgents;
  HeapListHashSet<Member<InspectorPerformanceAgent>> m_inspectorPerformanceAgents;
  HeapListHashSet<Member<InspectorAnimationAgent>> m_inspectorAnimationAgents;
  HeapListHashSet<Member<InspectorPageAgent>> m_inspectorPageAgents;
  HeapListHashSet<Member<InspectorDOMSnapshotAgent>> m_inspectorDOMSnapshotAgents;
  HeapListHashSet<Member<InspectorLayerTreeAgent>> m_inspectorLayerTreeAgents;

  // Number of sinks with an enabled agent of each type, used to keep
  // |s_existingAgents| up to date.
  // Access must be guarded by AgentCountMutex in the source file.
  static unsigned s_numSinksWithAdTracker;
  static unsigned s_numSinksWithInspectorLogAgent;
  static unsigned s_numSinksWithPerformanceMonitor;
  static unsigned s_numSinksWithInspectorCSSAgent;
  static unsigned s_numSinksWithInspectorEmulationAgent;
  static unsigned s_numSinksWithInspectorDOMDebuggerAgent;
  static unsigned s_numSinksWithInspectorTraceEvents;
  static unsigned s_numSinksWithInspectorDOMAgent;
  static unsigned s_numSinksWithInspectorApplicationCacheAgent;
  static unsigned s_numSinksWithInspectorNetworkAgent;
  static unsigned s_numSinksWithInspectorWorkerAgent;
  static unsigned s_numSinksWithInspectorPerformanceAgent;
  static unsigned s_numSinksWithInspectorAnimationAgent;
  static unsigned s_numSinksWithInspectorPageAgent;
  static unsigned s_numSinksWithInspectorDOMSnapshotAgent;
  static unsigned s_numSinksWithInspectorLayerTreeAgent;

  // Bit-set of types of enabled agent which exist in this process.
  // Always a bitwise-or of AgentType enumerators.
  static std::atomic<unsigned> s_existingAgents;
};

} // namespace blink

#endif // !defined(CoreProbeSink_h)
