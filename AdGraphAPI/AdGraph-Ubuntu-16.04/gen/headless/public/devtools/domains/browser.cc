// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/browser.h"

#include "base/bind.h"
#include "headless/public/util/error_reporter.h"

namespace headless {

namespace browser {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}



void Domain::Close(std::unique_ptr<CloseParams> params, base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback) {
  dispatcher_->SendMessage("Browser.close", params->Serialize(), base::BindOnce(&Domain::HandleCloseResponse, std::move(callback)));
}

void Domain::Close(base::OnceClosure callback) {
  std::unique_ptr<CloseParams> params = CloseParams::Builder()
      .Build();
  dispatcher_->SendMessage("Browser.close", params->Serialize(), std::move(callback));
}
void Domain::Close(std::unique_ptr<CloseParams> params, base::OnceClosure callback) {
  dispatcher_->SendMessage("Browser.close", params->Serialize(), std::move(callback));
}

void Domain::GetVersion(std::unique_ptr<GetVersionParams> params, base::OnceCallback<void(std::unique_ptr<GetVersionResult>)> callback) {
  dispatcher_->SendMessage("Browser.getVersion", params->Serialize(), base::BindOnce(&Domain::HandleGetVersionResponse, std::move(callback)));
}

void Domain::GetVersion(base::OnceCallback<void(std::unique_ptr<GetVersionResult>)> callback) {
  std::unique_ptr<GetVersionParams> params = GetVersionParams::Builder()
      .Build();
dispatcher_->SendMessage("Browser.getVersion", params->Serialize(), base::BindOnce(&Domain::HandleGetVersionResponse, std::move(callback)));
}

void ExperimentalDomain::GetBrowserCommandLine(std::unique_ptr<GetBrowserCommandLineParams> params, base::OnceCallback<void(std::unique_ptr<GetBrowserCommandLineResult>)> callback) {
  dispatcher_->SendMessage("Browser.getBrowserCommandLine", params->Serialize(), base::BindOnce(&Domain::HandleGetBrowserCommandLineResponse, std::move(callback)));
}

void ExperimentalDomain::GetHistograms(std::unique_ptr<GetHistogramsParams> params, base::OnceCallback<void(std::unique_ptr<GetHistogramsResult>)> callback) {
  dispatcher_->SendMessage("Browser.getHistograms", params->Serialize(), base::BindOnce(&Domain::HandleGetHistogramsResponse, std::move(callback)));
}

void ExperimentalDomain::GetHistogram(std::unique_ptr<GetHistogramParams> params, base::OnceCallback<void(std::unique_ptr<GetHistogramResult>)> callback) {
  dispatcher_->SendMessage("Browser.getHistogram", params->Serialize(), base::BindOnce(&Domain::HandleGetHistogramResponse, std::move(callback)));
}

void ExperimentalDomain::GetWindowBounds(std::unique_ptr<GetWindowBoundsParams> params, base::OnceCallback<void(std::unique_ptr<GetWindowBoundsResult>)> callback) {
  dispatcher_->SendMessage("Browser.getWindowBounds", params->Serialize(), base::BindOnce(&Domain::HandleGetWindowBoundsResponse, std::move(callback)));
}

void ExperimentalDomain::GetWindowForTarget(std::unique_ptr<GetWindowForTargetParams> params, base::OnceCallback<void(std::unique_ptr<GetWindowForTargetResult>)> callback) {
  dispatcher_->SendMessage("Browser.getWindowForTarget", params->Serialize(), base::BindOnce(&Domain::HandleGetWindowForTargetResponse, std::move(callback)));
}

void ExperimentalDomain::SetWindowBounds(std::unique_ptr<SetWindowBoundsParams> params, base::OnceCallback<void(std::unique_ptr<SetWindowBoundsResult>)> callback) {
  dispatcher_->SendMessage("Browser.setWindowBounds", params->Serialize(), base::BindOnce(&Domain::HandleSetWindowBoundsResponse, std::move(callback)));
}


// static
void Domain::HandleCloseResponse(base::OnceCallback<void(std::unique_ptr<CloseResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<CloseResult> result = CloseResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetVersionResponse(base::OnceCallback<void(std::unique_ptr<GetVersionResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetVersionResult> result = GetVersionResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetBrowserCommandLineResponse(base::OnceCallback<void(std::unique_ptr<GetBrowserCommandLineResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetBrowserCommandLineResult> result = GetBrowserCommandLineResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetHistogramsResponse(base::OnceCallback<void(std::unique_ptr<GetHistogramsResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetHistogramsResult> result = GetHistogramsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetHistogramResponse(base::OnceCallback<void(std::unique_ptr<GetHistogramResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetHistogramResult> result = GetHistogramResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetWindowBoundsResponse(base::OnceCallback<void(std::unique_ptr<GetWindowBoundsResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetWindowBoundsResult> result = GetWindowBoundsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleGetWindowForTargetResponse(base::OnceCallback<void(std::unique_ptr<GetWindowForTargetResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetWindowForTargetResult> result = GetWindowForTargetResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

// static
void Domain::HandleSetWindowBoundsResponse(base::OnceCallback<void(std::unique_ptr<SetWindowBoundsResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<SetWindowBoundsResult> result = SetWindowBoundsResult::Parse(response, &errors);
  DCHECK(!errors.HasErrors()) << errors.ToString();
  std::move(callback).Run(std::move(result));
}

Domain::Domain(internal::MessageDispatcher* dispatcher)
    : dispatcher_(dispatcher) {
}

Domain::~Domain() {}

ExperimentalDomain::ExperimentalDomain(internal::MessageDispatcher* dispatcher)
    : Domain(dispatcher) {}

ExperimentalDomain::~ExperimentalDomain() {}


}  // namespace browser

} // namespace headless
