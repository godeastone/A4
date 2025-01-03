// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_AUDITS_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_AUDITS_H_

#include "base/optional.h"
#include "base/values.h"
#include "headless/public/devtools/internal/types_forward_declarations_audits.h"
#include "headless/public/devtools/internal/types_forward_declarations_dom.h"
#include "headless/public/devtools/internal/types_forward_declarations_debugger.h"
#include "headless/public/devtools/internal/types_forward_declarations_emulation.h"
#include "headless/public/devtools/internal/types_forward_declarations_io.h"
#include "headless/public/devtools/internal/types_forward_declarations_network.h"
#include "headless/public/devtools/internal/types_forward_declarations_page.h"
#include "headless/public/devtools/internal/types_forward_declarations_runtime.h"
#include "headless/public/devtools/internal/types_forward_declarations_security.h"
#include "headless/public/headless_export.h"

namespace headless {

class ErrorReporter;

namespace audits {

// Parameters for the GetEncodedResponse command.
class HEADLESS_EXPORT GetEncodedResponseParams {
 public:
  static std::unique_ptr<GetEncodedResponseParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetEncodedResponseParams() { }

  // Identifier of the network request to get content for.
  std::string GetRequestId() const { return request_id_; }
  void SetRequestId(const std::string& value) { request_id_ = value; }

  // The encoding to use.
  ::headless::audits::GetEncodedResponseEncoding GetEncoding() const { return encoding_; }
  void SetEncoding(::headless::audits::GetEncodedResponseEncoding value) { encoding_ = value; }

  // The quality of the encoding (0-1). (defaults to 1)
  bool HasQuality() const { return !!quality_; }
  double GetQuality() const { DCHECK(HasQuality()); return quality_.value(); }
  void SetQuality(double value) { quality_ = value; }

  // Whether to only return the size information (defaults to false).
  bool HasSizeOnly() const { return !!size_only_; }
  bool GetSizeOnly() const { DCHECK(HasSizeOnly()); return size_only_.value(); }
  void SetSizeOnly(bool value) { size_only_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetEncodedResponseParams> Clone() const;

  template<int STATE>
  class GetEncodedResponseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRequestIdSet = 1 << 1,
    kEncodingSet = 1 << 2,
      kAllRequiredFieldsSet = (kRequestIdSet | kEncodingSet | 0)
    };

    GetEncodedResponseParamsBuilder<STATE | kRequestIdSet>& SetRequestId(const std::string& value) {
      static_assert(!(STATE & kRequestIdSet), "property requestId should not have already been set");
      result_->SetRequestId(value);
      return CastState<kRequestIdSet>();
    }

    GetEncodedResponseParamsBuilder<STATE | kEncodingSet>& SetEncoding(::headless::audits::GetEncodedResponseEncoding value) {
      static_assert(!(STATE & kEncodingSet), "property encoding should not have already been set");
      result_->SetEncoding(value);
      return CastState<kEncodingSet>();
    }

    GetEncodedResponseParamsBuilder<STATE>& SetQuality(double value) {
      result_->SetQuality(value);
      return *this;
    }

    GetEncodedResponseParamsBuilder<STATE>& SetSizeOnly(bool value) {
      result_->SetSizeOnly(value);
      return *this;
    }

    std::unique_ptr<GetEncodedResponseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetEncodedResponseParams;
    GetEncodedResponseParamsBuilder() : result_(new GetEncodedResponseParams()) { }

    template<int STEP> GetEncodedResponseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetEncodedResponseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetEncodedResponseParams> result_;
  };

  static GetEncodedResponseParamsBuilder<0> Builder() {
    return GetEncodedResponseParamsBuilder<0>();
  }

 private:
  GetEncodedResponseParams() { }

  std::string request_id_;
  ::headless::audits::GetEncodedResponseEncoding encoding_;
  base::Optional<double> quality_;
  base::Optional<bool> size_only_;

  DISALLOW_COPY_AND_ASSIGN(GetEncodedResponseParams);
};


// Result for the GetEncodedResponse command.
class HEADLESS_EXPORT GetEncodedResponseResult {
 public:
  static std::unique_ptr<GetEncodedResponseResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetEncodedResponseResult() { }

  // The encoded body as a base64 string. Omitted if sizeOnly is true.
  bool HasBody() const { return !!body_; }
  std::string GetBody() const { DCHECK(HasBody()); return body_.value(); }
  void SetBody(const std::string& value) { body_ = value; }

  // Size before re-encoding.
  int GetOriginalSize() const { return original_size_; }
  void SetOriginalSize(int value) { original_size_ = value; }

  // Size after re-encoding.
  int GetEncodedSize() const { return encoded_size_; }
  void SetEncodedSize(int value) { encoded_size_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetEncodedResponseResult> Clone() const;

  template<int STATE>
  class GetEncodedResponseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginalSizeSet = 1 << 1,
    kEncodedSizeSet = 1 << 2,
      kAllRequiredFieldsSet = (kOriginalSizeSet | kEncodedSizeSet | 0)
    };

    GetEncodedResponseResultBuilder<STATE>& SetBody(const std::string& value) {
      result_->SetBody(value);
      return *this;
    }

    GetEncodedResponseResultBuilder<STATE | kOriginalSizeSet>& SetOriginalSize(int value) {
      static_assert(!(STATE & kOriginalSizeSet), "property originalSize should not have already been set");
      result_->SetOriginalSize(value);
      return CastState<kOriginalSizeSet>();
    }

    GetEncodedResponseResultBuilder<STATE | kEncodedSizeSet>& SetEncodedSize(int value) {
      static_assert(!(STATE & kEncodedSizeSet), "property encodedSize should not have already been set");
      result_->SetEncodedSize(value);
      return CastState<kEncodedSizeSet>();
    }

    std::unique_ptr<GetEncodedResponseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetEncodedResponseResult;
    GetEncodedResponseResultBuilder() : result_(new GetEncodedResponseResult()) { }

    template<int STEP> GetEncodedResponseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetEncodedResponseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetEncodedResponseResult> result_;
  };

  static GetEncodedResponseResultBuilder<0> Builder() {
    return GetEncodedResponseResultBuilder<0>();
  }

 private:
  GetEncodedResponseResult() { }

  base::Optional<std::string> body_;
  int original_size_;
  int encoded_size_;

  DISALLOW_COPY_AND_ASSIGN(GetEncodedResponseResult);
};


}  // namespace audits

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_AUDITS_H_
