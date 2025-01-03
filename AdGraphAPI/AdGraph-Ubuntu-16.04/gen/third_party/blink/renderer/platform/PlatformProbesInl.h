// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /InstrumentingProbesInl.h.tmpl
// and input files:
//   PlatformProbes.pidl


#ifndef PlatformProbesInl_h
#define PlatformProbesInl_h

#include "third_party/blink/renderer/platform/heap/heap_allocator.h"
#include "third_party/blink/renderer/platform/PlatformProbeSink.h"
#include "third_party/blink/renderer/platform/probe/platform_probes.h"


namespace blink {

class FetchContext;
class ResourceRequest;
class ResourceResponse;
struct FetchInitiatorInfo;

namespace probe {


class PLATFORM_EXPORT PlatformSendRequest : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit PlatformSendRequest(FetchContext*, unsigned long, ResourceRequest&, const ResourceResponse&, const FetchInitiatorInfo&);
  ~PlatformSendRequest();
  Member<PlatformProbeSink> probe_sink;
  Member<FetchContext> paramFetchContext;
  unsigned long identifier;
  ResourceRequest& paramResourceRequest;
  const ResourceResponse& redirectResponse;
  const FetchInitiatorInfo& paramFetchInitiatorInfo;
};

} // namespace probe
} // namespace blink

#endif // !defined(PlatformProbesInl_h)
