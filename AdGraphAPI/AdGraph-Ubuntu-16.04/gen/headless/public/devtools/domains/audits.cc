// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "headless/public/devtools/domains/audits.h"

#include "base/bind.h"
#include "headless/public/util/error_reporter.h"

namespace headless {

namespace audits {

ExperimentalDomain* Domain::GetExperimental() {
  return static_cast<ExperimentalDomain*>(this);
}



void ExperimentalDomain::GetEncodedResponse(std::unique_ptr<GetEncodedResponseParams> params, base::OnceCallback<void(std::unique_ptr<GetEncodedResponseResult>)> callback) {
  dispatcher_->SendMessage("Audits.getEncodedResponse", params->Serialize(), base::BindOnce(&Domain::HandleGetEncodedResponseResponse, std::move(callback)));
}


// static
void Domain::HandleGetEncodedResponseResponse(base::OnceCallback<void(std::unique_ptr<GetEncodedResponseResult>)> callback, const base::Value& response) {
  if (callback.is_null())
    return;
  // This is an error response.
  if (response.is_none()) {
    std::move(callback).Run(nullptr);
    return;
  }
  ErrorReporter errors;
  std::unique_ptr<GetEncodedResponseResult> result = GetEncodedResponseResult::Parse(response, &errors);
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


}  // namespace audits

} // namespace headless
