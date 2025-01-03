// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SECURITY_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SECURITY_H_

#include "base/values.h"

namespace headless {

namespace security {
class SecurityStateExplanation;
class InsecureContentStatus;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class SetIgnoreCertificateErrorsParams;
class SetIgnoreCertificateErrorsResult;
class HandleCertificateErrorParams;
class HandleCertificateErrorResult;
class SetOverrideCertificateErrorsParams;
class SetOverrideCertificateErrorsResult;
class CertificateErrorParams;
class SecurityStateChangedParams;

enum class MixedContentType {
  BLOCKABLE,
  OPTIONALLY_BLOCKABLE,
  NONE
};

enum class SecurityState {
  UNKNOWN,
  NEUTRAL,
  INSECURE,
  SECURE,
  INFO
};

enum class CertificateErrorAction {
  CONTINUE,
  CANCEL
};

}  // namespace security

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SECURITY_H_
