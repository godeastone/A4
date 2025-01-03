// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_HEADLESS_EXPERIMENTAL_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_HEADLESS_EXPERIMENTAL_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "headless/public/devtools/domains/types_dom.h"
#include "headless/public/devtools/domains/types_debugger.h"
#include "headless/public/devtools/domains/types_emulation.h"
#include "headless/public/devtools/domains/types_headless_experimental.h"
#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/devtools/domains/types_network.h"
#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/devtools/domains/types_runtime.h"
#include "headless/public/devtools/domains/types_security.h"
#include "headless/public/headless_export.h"
#include "headless/public/internal/message_dispatcher.h"


namespace headless {
namespace headless_experimental {
class HEADLESS_EXPORT ExperimentalDomain;
class HEADLESS_EXPORT ExperimentalObserver;

class HEADLESS_EXPORT ExperimentalObserver {
 public:
  virtual ~ExperimentalObserver() {}
  // Issued when the target starts or stops needing BeginFrames.
  virtual void OnNeedsBeginFramesChanged(const NeedsBeginFramesChangedParams& params) {}
};

class HEADLESS_EXPORT Observer : public ExperimentalObserver {
 public:
  virtual ~Observer() {}
  // Experimental: Issued when the target starts or stops needing BeginFrames.
  virtual void OnNeedsBeginFramesChanged(const NeedsBeginFramesChangedParams& params) final {}
};

// This domain provides experimental commands only supported in headless mode.
class HEADLESS_EXPORT Domain {
 public:
  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(Observer* observer);
  void RemoveObserver(Observer* observer);

  // Return the experimental interface for this domain. Note that experimental
  // commands may be changed or removed at any time.
  ExperimentalDomain* GetExperimental();

 protected:
  Domain(internal::MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleBeginFrameResponse(base::OnceCallback<void(std::unique_ptr<BeginFrameResult>)> callback, const base::Value& response);
  static void HandleDisableResponse(base::OnceCallback<void(std::unique_ptr<DisableResult>)> callback, const base::Value& response);
  static void HandleEnableResponse(base::OnceCallback<void(std::unique_ptr<EnableResult>)> callback, const base::Value& response);

  void DispatchNeedsBeginFramesChangedEvent(const base::Value& params);

  internal::MessageDispatcher* dispatcher_;  // Not owned.
  base::ObserverList<ExperimentalObserver> observers_;

 protected:
  void RegisterEventHandlersIfNeeded();

 private:
  bool event_handlers_registered_ = false;

  DISALLOW_COPY_AND_ASSIGN(Domain);
};

class ExperimentalDomain : public Domain {
 public:
  ExperimentalDomain(internal::MessageDispatcher* dispatcher);
  ~ExperimentalDomain();

  // Add or remove an observer. |observer| must be removed before being
  // destroyed.
  void AddObserver(ExperimentalObserver* observer);
  void RemoveObserver(ExperimentalObserver* observer);

  // Sends a BeginFrame to the target and returns when the frame was completed. Optionally captures a
  // screenshot from the resulting frame. Requires that the target was created with enabled
  // BeginFrameControl. Designed for use with --run-all-compositor-stages-before-draw, see also
  // https://goo.gl/3zHXhB for more background.
  void BeginFrame(std::unique_ptr<BeginFrameParams> params, base::OnceCallback<void(std::unique_ptr<BeginFrameResult>)> callback = base::OnceCallback<void(std::unique_ptr<BeginFrameResult>)>());

  // Disables headless events for the target.
  void Disable(std::unique_ptr<DisableParams> params, base::OnceCallback<void(std::unique_ptr<DisableResult>)> callback = base::OnceCallback<void(std::unique_ptr<DisableResult>)>());

  // Enables headless events for the target.
  void Enable(std::unique_ptr<EnableParams> params, base::OnceCallback<void(std::unique_ptr<EnableResult>)> callback = base::OnceCallback<void(std::unique_ptr<EnableResult>)>());


 private:
  DISALLOW_COPY_AND_ASSIGN(ExperimentalDomain);
};

}  // namespace headless_experimental
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_HEADLESS_EXPERIMENTAL_H_
