// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_BROWSER_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_BROWSER_H_

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/values.h"
#include "headless/public/devtools/domains/types_browser.h"
#include "headless/public/devtools/domains/types_target.h"
#include "headless/public/headless_export.h"
#include "headless/public/internal/message_dispatcher.h"


namespace headless {
namespace browser {
class HEADLESS_EXPORT ExperimentalDomain;
class HEADLESS_EXPORT ExperimentalObserver;

// The Browser domain defines methods and events for browser managing.
class HEADLESS_EXPORT Domain {
 public:

  // Return the experimental interface for this domain. Note that experimental
  // commands may be changed or removed at any time.
  ExperimentalDomain* GetExperimental();

  // Close browser gracefully.
  void Close(std::unique_ptr<CloseParams> params, base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback = base::OnceCallback<void(std::unique_ptr<CloseResult>)>());
  void Close(base::OnceClosure callback = base::OnceClosure());
  void Close(std::unique_ptr<CloseParams> params, base::OnceClosure callback);

  // Returns version information.
  void GetVersion(std::unique_ptr<GetVersionParams> params, base::OnceCallback<void(std::unique_ptr<GetVersionResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetVersionResult>)>());
  void GetVersion(base::OnceCallback<void(std::unique_ptr<GetVersionResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetVersionResult>)>());

 protected:
  Domain(internal::MessageDispatcher* dispatcher);
  ~Domain();

  static void HandleCloseResponse(base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback, const base::Value& response);
  static void HandleGetVersionResponse(base::OnceCallback<void(std::unique_ptr<GetVersionResult>)> callback, const base::Value& response);
  static void HandleGetBrowserCommandLineResponse(base::OnceCallback<void(std::unique_ptr<GetBrowserCommandLineResult>)> callback, const base::Value& response);
  static void HandleGetHistogramsResponse(base::OnceCallback<void(std::unique_ptr<GetHistogramsResult>)> callback, const base::Value& response);
  static void HandleGetHistogramResponse(base::OnceCallback<void(std::unique_ptr<GetHistogramResult>)> callback, const base::Value& response);
  static void HandleGetWindowBoundsResponse(base::OnceCallback<void(std::unique_ptr<GetWindowBoundsResult>)> callback, const base::Value& response);
  static void HandleGetWindowForTargetResponse(base::OnceCallback<void(std::unique_ptr<GetWindowForTargetResult>)> callback, const base::Value& response);
  static void HandleSetWindowBoundsResponse(base::OnceCallback<void(std::unique_ptr<SetWindowBoundsResult>)> callback, const base::Value& response);


  internal::MessageDispatcher* dispatcher_;  // Not owned.

 private:
  DISALLOW_COPY_AND_ASSIGN(Domain);
};

class ExperimentalDomain : public Domain {
 public:
  ExperimentalDomain(internal::MessageDispatcher* dispatcher);
  ~ExperimentalDomain();


  // Returns the command line switches for the browser process if, and only if
  // --enable-automation is on the commandline.
  void GetBrowserCommandLine(std::unique_ptr<GetBrowserCommandLineParams> params, base::OnceCallback<void(std::unique_ptr<GetBrowserCommandLineResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetBrowserCommandLineResult>)>());

  // Get Chrome histograms.
  void GetHistograms(std::unique_ptr<GetHistogramsParams> params, base::OnceCallback<void(std::unique_ptr<GetHistogramsResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetHistogramsResult>)>());

  // Get a Chrome histogram by name.
  void GetHistogram(std::unique_ptr<GetHistogramParams> params, base::OnceCallback<void(std::unique_ptr<GetHistogramResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetHistogramResult>)>());

  // Get position and size of the browser window.
  void GetWindowBounds(std::unique_ptr<GetWindowBoundsParams> params, base::OnceCallback<void(std::unique_ptr<GetWindowBoundsResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetWindowBoundsResult>)>());

  // Get the browser window that contains the devtools target.
  void GetWindowForTarget(std::unique_ptr<GetWindowForTargetParams> params, base::OnceCallback<void(std::unique_ptr<GetWindowForTargetResult>)> callback = base::OnceCallback<void(std::unique_ptr<GetWindowForTargetResult>)>());

  // Set position and/or size of the browser window.
  void SetWindowBounds(std::unique_ptr<SetWindowBoundsParams> params, base::OnceCallback<void(std::unique_ptr<SetWindowBoundsResult>)> callback = base::OnceCallback<void(std::unique_ptr<SetWindowBoundsResult>)>());


 private:
  DISALLOW_COPY_AND_ASSIGN(ExperimentalDomain);
};

}  // namespace browser
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_BROWSER_H_
