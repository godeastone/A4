// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_BROWSER_H_
#define HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_BROWSER_H_

#include "base/optional.h"
#include "base/values.h"
#include "headless/public/devtools/internal/types_forward_declarations_browser.h"
#include "headless/public/devtools/internal/types_forward_declarations_target.h"
#include "headless/public/headless_export.h"

namespace headless {

class ErrorReporter;

namespace browser {

// Browser window bounds information
class HEADLESS_EXPORT Bounds {
 public:
  static std::unique_ptr<Bounds> Parse(const base::Value& value, ErrorReporter* errors);
  ~Bounds() { }

  // The offset from the left edge of the screen to the window in pixels.
  bool HasLeft() const { return !!left_; }
  int GetLeft() const { DCHECK(HasLeft()); return left_.value(); }
  void SetLeft(int value) { left_ = value; }

  // The offset from the top edge of the screen to the window in pixels.
  bool HasTop() const { return !!top_; }
  int GetTop() const { DCHECK(HasTop()); return top_.value(); }
  void SetTop(int value) { top_ = value; }

  // The window width in pixels.
  bool HasWidth() const { return !!width_; }
  int GetWidth() const { DCHECK(HasWidth()); return width_.value(); }
  void SetWidth(int value) { width_ = value; }

  // The window height in pixels.
  bool HasHeight() const { return !!height_; }
  int GetHeight() const { DCHECK(HasHeight()); return height_.value(); }
  void SetHeight(int value) { height_ = value; }

  // The window state. Default to normal.
  bool HasWindowState() const { return !!window_state_; }
  ::headless::browser::WindowState GetWindowState() const { DCHECK(HasWindowState()); return window_state_.value(); }
  void SetWindowState(::headless::browser::WindowState value) { window_state_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Bounds> Clone() const;

  template<int STATE>
  class BoundsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    BoundsBuilder<STATE>& SetLeft(int value) {
      result_->SetLeft(value);
      return *this;
    }

    BoundsBuilder<STATE>& SetTop(int value) {
      result_->SetTop(value);
      return *this;
    }

    BoundsBuilder<STATE>& SetWidth(int value) {
      result_->SetWidth(value);
      return *this;
    }

    BoundsBuilder<STATE>& SetHeight(int value) {
      result_->SetHeight(value);
      return *this;
    }

    BoundsBuilder<STATE>& SetWindowState(::headless::browser::WindowState value) {
      result_->SetWindowState(value);
      return *this;
    }

    std::unique_ptr<Bounds> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Bounds;
    BoundsBuilder() : result_(new Bounds()) { }

    template<int STEP> BoundsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BoundsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Bounds> result_;
  };

  static BoundsBuilder<0> Builder() {
    return BoundsBuilder<0>();
  }

 private:
  Bounds() { }

  base::Optional<int> left_;
  base::Optional<int> top_;
  base::Optional<int> width_;
  base::Optional<int> height_;
  base::Optional<::headless::browser::WindowState> window_state_;

  DISALLOW_COPY_AND_ASSIGN(Bounds);
};


// Chrome histogram bucket.
class HEADLESS_EXPORT Bucket {
 public:
  static std::unique_ptr<Bucket> Parse(const base::Value& value, ErrorReporter* errors);
  ~Bucket() { }

  // Minimum value (inclusive).
  int GetLow() const { return low_; }
  void SetLow(int value) { low_ = value; }

  // Maximum value (exclusive).
  int GetHigh() const { return high_; }
  void SetHigh(int value) { high_ = value; }

  // Number of samples.
  int GetCount() const { return count_; }
  void SetCount(int value) { count_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Bucket> Clone() const;

  template<int STATE>
  class BucketBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLowSet = 1 << 1,
    kHighSet = 1 << 2,
    kCountSet = 1 << 3,
      kAllRequiredFieldsSet = (kLowSet | kHighSet | kCountSet | 0)
    };

    BucketBuilder<STATE | kLowSet>& SetLow(int value) {
      static_assert(!(STATE & kLowSet), "property low should not have already been set");
      result_->SetLow(value);
      return CastState<kLowSet>();
    }

    BucketBuilder<STATE | kHighSet>& SetHigh(int value) {
      static_assert(!(STATE & kHighSet), "property high should not have already been set");
      result_->SetHigh(value);
      return CastState<kHighSet>();
    }

    BucketBuilder<STATE | kCountSet>& SetCount(int value) {
      static_assert(!(STATE & kCountSet), "property count should not have already been set");
      result_->SetCount(value);
      return CastState<kCountSet>();
    }

    std::unique_ptr<Bucket> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Bucket;
    BucketBuilder() : result_(new Bucket()) { }

    template<int STEP> BucketBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BucketBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Bucket> result_;
  };

  static BucketBuilder<0> Builder() {
    return BucketBuilder<0>();
  }

 private:
  Bucket() { }

  int low_;
  int high_;
  int count_;

  DISALLOW_COPY_AND_ASSIGN(Bucket);
};


// Chrome histogram.
class HEADLESS_EXPORT Histogram {
 public:
  static std::unique_ptr<Histogram> Parse(const base::Value& value, ErrorReporter* errors);
  ~Histogram() { }

  // Name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Sum of sample values.
  int GetSum() const { return sum_; }
  void SetSum(int value) { sum_ = value; }

  // Total number of samples.
  int GetCount() const { return count_; }
  void SetCount(int value) { count_ = value; }

  // Buckets.
  const std::vector<std::unique_ptr<::headless::browser::Bucket>>* GetBuckets() const { return &buckets_; }
  void SetBuckets(std::vector<std::unique_ptr<::headless::browser::Bucket>> value) { buckets_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Histogram> Clone() const;

  template<int STATE>
  class HistogramBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kSumSet = 1 << 2,
    kCountSet = 1 << 3,
    kBucketsSet = 1 << 4,
      kAllRequiredFieldsSet = (kNameSet | kSumSet | kCountSet | kBucketsSet | 0)
    };

    HistogramBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    HistogramBuilder<STATE | kSumSet>& SetSum(int value) {
      static_assert(!(STATE & kSumSet), "property sum should not have already been set");
      result_->SetSum(value);
      return CastState<kSumSet>();
    }

    HistogramBuilder<STATE | kCountSet>& SetCount(int value) {
      static_assert(!(STATE & kCountSet), "property count should not have already been set");
      result_->SetCount(value);
      return CastState<kCountSet>();
    }

    HistogramBuilder<STATE | kBucketsSet>& SetBuckets(std::vector<std::unique_ptr<::headless::browser::Bucket>> value) {
      static_assert(!(STATE & kBucketsSet), "property buckets should not have already been set");
      result_->SetBuckets(std::move(value));
      return CastState<kBucketsSet>();
    }

    std::unique_ptr<Histogram> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Histogram;
    HistogramBuilder() : result_(new Histogram()) { }

    template<int STEP> HistogramBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HistogramBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Histogram> result_;
  };

  static HistogramBuilder<0> Builder() {
    return HistogramBuilder<0>();
  }

 private:
  Histogram() { }

  std::string name_;
  int sum_;
  int count_;
  std::vector<std::unique_ptr<::headless::browser::Bucket>> buckets_;

  DISALLOW_COPY_AND_ASSIGN(Histogram);
};


// Parameters for the Close command.
class HEADLESS_EXPORT CloseParams {
 public:
  static std::unique_ptr<CloseParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~CloseParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CloseParams> Clone() const;

  template<int STATE>
  class CloseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<CloseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CloseParams;
    CloseParamsBuilder() : result_(new CloseParams()) { }

    template<int STEP> CloseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CloseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CloseParams> result_;
  };

  static CloseParamsBuilder<0> Builder() {
    return CloseParamsBuilder<0>();
  }

 private:
  CloseParams() { }


  DISALLOW_COPY_AND_ASSIGN(CloseParams);
};


// Result for the Close command.
class HEADLESS_EXPORT CloseResult {
 public:
  static std::unique_ptr<CloseResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~CloseResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CloseResult> Clone() const;

  template<int STATE>
  class CloseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<CloseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CloseResult;
    CloseResultBuilder() : result_(new CloseResult()) { }

    template<int STEP> CloseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CloseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CloseResult> result_;
  };

  static CloseResultBuilder<0> Builder() {
    return CloseResultBuilder<0>();
  }

 private:
  CloseResult() { }


  DISALLOW_COPY_AND_ASSIGN(CloseResult);
};


// Parameters for the GetVersion command.
class HEADLESS_EXPORT GetVersionParams {
 public:
  static std::unique_ptr<GetVersionParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetVersionParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetVersionParams> Clone() const;

  template<int STATE>
  class GetVersionParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<GetVersionParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetVersionParams;
    GetVersionParamsBuilder() : result_(new GetVersionParams()) { }

    template<int STEP> GetVersionParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetVersionParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetVersionParams> result_;
  };

  static GetVersionParamsBuilder<0> Builder() {
    return GetVersionParamsBuilder<0>();
  }

 private:
  GetVersionParams() { }


  DISALLOW_COPY_AND_ASSIGN(GetVersionParams);
};


// Result for the GetVersion command.
class HEADLESS_EXPORT GetVersionResult {
 public:
  static std::unique_ptr<GetVersionResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetVersionResult() { }

  // Protocol version.
  std::string GetProtocolVersion() const { return protocol_version_; }
  void SetProtocolVersion(const std::string& value) { protocol_version_ = value; }

  // Product name.
  std::string GetProduct() const { return product_; }
  void SetProduct(const std::string& value) { product_ = value; }

  // Product revision.
  std::string GetRevision() const { return revision_; }
  void SetRevision(const std::string& value) { revision_ = value; }

  // User-Agent.
  std::string GetUserAgent() const { return user_agent_; }
  void SetUserAgent(const std::string& value) { user_agent_ = value; }

  // V8 version.
  std::string GetJsVersion() const { return js_version_; }
  void SetJsVersion(const std::string& value) { js_version_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetVersionResult> Clone() const;

  template<int STATE>
  class GetVersionResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kProtocolVersionSet = 1 << 1,
    kProductSet = 1 << 2,
    kRevisionSet = 1 << 3,
    kUserAgentSet = 1 << 4,
    kJsVersionSet = 1 << 5,
      kAllRequiredFieldsSet = (kProtocolVersionSet | kProductSet | kRevisionSet | kUserAgentSet | kJsVersionSet | 0)
    };

    GetVersionResultBuilder<STATE | kProtocolVersionSet>& SetProtocolVersion(const std::string& value) {
      static_assert(!(STATE & kProtocolVersionSet), "property protocolVersion should not have already been set");
      result_->SetProtocolVersion(value);
      return CastState<kProtocolVersionSet>();
    }

    GetVersionResultBuilder<STATE | kProductSet>& SetProduct(const std::string& value) {
      static_assert(!(STATE & kProductSet), "property product should not have already been set");
      result_->SetProduct(value);
      return CastState<kProductSet>();
    }

    GetVersionResultBuilder<STATE | kRevisionSet>& SetRevision(const std::string& value) {
      static_assert(!(STATE & kRevisionSet), "property revision should not have already been set");
      result_->SetRevision(value);
      return CastState<kRevisionSet>();
    }

    GetVersionResultBuilder<STATE | kUserAgentSet>& SetUserAgent(const std::string& value) {
      static_assert(!(STATE & kUserAgentSet), "property userAgent should not have already been set");
      result_->SetUserAgent(value);
      return CastState<kUserAgentSet>();
    }

    GetVersionResultBuilder<STATE | kJsVersionSet>& SetJsVersion(const std::string& value) {
      static_assert(!(STATE & kJsVersionSet), "property jsVersion should not have already been set");
      result_->SetJsVersion(value);
      return CastState<kJsVersionSet>();
    }

    std::unique_ptr<GetVersionResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetVersionResult;
    GetVersionResultBuilder() : result_(new GetVersionResult()) { }

    template<int STEP> GetVersionResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetVersionResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetVersionResult> result_;
  };

  static GetVersionResultBuilder<0> Builder() {
    return GetVersionResultBuilder<0>();
  }

 private:
  GetVersionResult() { }

  std::string protocol_version_;
  std::string product_;
  std::string revision_;
  std::string user_agent_;
  std::string js_version_;

  DISALLOW_COPY_AND_ASSIGN(GetVersionResult);
};


// Parameters for the GetBrowserCommandLine command.
class HEADLESS_EXPORT GetBrowserCommandLineParams {
 public:
  static std::unique_ptr<GetBrowserCommandLineParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetBrowserCommandLineParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetBrowserCommandLineParams> Clone() const;

  template<int STATE>
  class GetBrowserCommandLineParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<GetBrowserCommandLineParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetBrowserCommandLineParams;
    GetBrowserCommandLineParamsBuilder() : result_(new GetBrowserCommandLineParams()) { }

    template<int STEP> GetBrowserCommandLineParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetBrowserCommandLineParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetBrowserCommandLineParams> result_;
  };

  static GetBrowserCommandLineParamsBuilder<0> Builder() {
    return GetBrowserCommandLineParamsBuilder<0>();
  }

 private:
  GetBrowserCommandLineParams() { }


  DISALLOW_COPY_AND_ASSIGN(GetBrowserCommandLineParams);
};


// Result for the GetBrowserCommandLine command.
class HEADLESS_EXPORT GetBrowserCommandLineResult {
 public:
  static std::unique_ptr<GetBrowserCommandLineResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetBrowserCommandLineResult() { }

  // Commandline parameters
  const std::vector<std::string>* GetArguments() const { return &arguments_; }
  void SetArguments(std::vector<std::string> value) { arguments_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetBrowserCommandLineResult> Clone() const;

  template<int STATE>
  class GetBrowserCommandLineResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kArgumentsSet = 1 << 1,
      kAllRequiredFieldsSet = (kArgumentsSet | 0)
    };

    GetBrowserCommandLineResultBuilder<STATE | kArgumentsSet>& SetArguments(std::vector<std::string> value) {
      static_assert(!(STATE & kArgumentsSet), "property arguments should not have already been set");
      result_->SetArguments(std::move(value));
      return CastState<kArgumentsSet>();
    }

    std::unique_ptr<GetBrowserCommandLineResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetBrowserCommandLineResult;
    GetBrowserCommandLineResultBuilder() : result_(new GetBrowserCommandLineResult()) { }

    template<int STEP> GetBrowserCommandLineResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetBrowserCommandLineResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetBrowserCommandLineResult> result_;
  };

  static GetBrowserCommandLineResultBuilder<0> Builder() {
    return GetBrowserCommandLineResultBuilder<0>();
  }

 private:
  GetBrowserCommandLineResult() { }

  std::vector<std::string> arguments_;

  DISALLOW_COPY_AND_ASSIGN(GetBrowserCommandLineResult);
};


// Parameters for the GetHistograms command.
class HEADLESS_EXPORT GetHistogramsParams {
 public:
  static std::unique_ptr<GetHistogramsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetHistogramsParams() { }

  // Requested substring in name. Only histograms which have query as a
  // substring in their name are extracted. An empty or absent query returns
  // all histograms.
  bool HasQuery() const { return !!query_; }
  std::string GetQuery() const { DCHECK(HasQuery()); return query_.value(); }
  void SetQuery(const std::string& value) { query_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHistogramsParams> Clone() const;

  template<int STATE>
  class GetHistogramsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    GetHistogramsParamsBuilder<STATE>& SetQuery(const std::string& value) {
      result_->SetQuery(value);
      return *this;
    }

    std::unique_ptr<GetHistogramsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHistogramsParams;
    GetHistogramsParamsBuilder() : result_(new GetHistogramsParams()) { }

    template<int STEP> GetHistogramsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHistogramsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHistogramsParams> result_;
  };

  static GetHistogramsParamsBuilder<0> Builder() {
    return GetHistogramsParamsBuilder<0>();
  }

 private:
  GetHistogramsParams() { }

  base::Optional<std::string> query_;

  DISALLOW_COPY_AND_ASSIGN(GetHistogramsParams);
};


// Result for the GetHistograms command.
class HEADLESS_EXPORT GetHistogramsResult {
 public:
  static std::unique_ptr<GetHistogramsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetHistogramsResult() { }

  // Histograms.
  const std::vector<std::unique_ptr<::headless::browser::Histogram>>* GetHistograms() const { return &histograms_; }
  void SetHistograms(std::vector<std::unique_ptr<::headless::browser::Histogram>> value) { histograms_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHistogramsResult> Clone() const;

  template<int STATE>
  class GetHistogramsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHistogramsSet = 1 << 1,
      kAllRequiredFieldsSet = (kHistogramsSet | 0)
    };

    GetHistogramsResultBuilder<STATE | kHistogramsSet>& SetHistograms(std::vector<std::unique_ptr<::headless::browser::Histogram>> value) {
      static_assert(!(STATE & kHistogramsSet), "property histograms should not have already been set");
      result_->SetHistograms(std::move(value));
      return CastState<kHistogramsSet>();
    }

    std::unique_ptr<GetHistogramsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHistogramsResult;
    GetHistogramsResultBuilder() : result_(new GetHistogramsResult()) { }

    template<int STEP> GetHistogramsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHistogramsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHistogramsResult> result_;
  };

  static GetHistogramsResultBuilder<0> Builder() {
    return GetHistogramsResultBuilder<0>();
  }

 private:
  GetHistogramsResult() { }

  std::vector<std::unique_ptr<::headless::browser::Histogram>> histograms_;

  DISALLOW_COPY_AND_ASSIGN(GetHistogramsResult);
};


// Parameters for the GetHistogram command.
class HEADLESS_EXPORT GetHistogramParams {
 public:
  static std::unique_ptr<GetHistogramParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetHistogramParams() { }

  // Requested histogram name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHistogramParams> Clone() const;

  template<int STATE>
  class GetHistogramParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kNameSet | 0)
    };

    GetHistogramParamsBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    std::unique_ptr<GetHistogramParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHistogramParams;
    GetHistogramParamsBuilder() : result_(new GetHistogramParams()) { }

    template<int STEP> GetHistogramParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHistogramParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHistogramParams> result_;
  };

  static GetHistogramParamsBuilder<0> Builder() {
    return GetHistogramParamsBuilder<0>();
  }

 private:
  GetHistogramParams() { }

  std::string name_;

  DISALLOW_COPY_AND_ASSIGN(GetHistogramParams);
};


// Result for the GetHistogram command.
class HEADLESS_EXPORT GetHistogramResult {
 public:
  static std::unique_ptr<GetHistogramResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetHistogramResult() { }

  // Histogram.
  const ::headless::browser::Histogram* GetHistogram() const { return histogram_.get(); }
  void SetHistogram(std::unique_ptr<::headless::browser::Histogram> value) { histogram_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHistogramResult> Clone() const;

  template<int STATE>
  class GetHistogramResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHistogramSet = 1 << 1,
      kAllRequiredFieldsSet = (kHistogramSet | 0)
    };

    GetHistogramResultBuilder<STATE | kHistogramSet>& SetHistogram(std::unique_ptr<::headless::browser::Histogram> value) {
      static_assert(!(STATE & kHistogramSet), "property histogram should not have already been set");
      result_->SetHistogram(std::move(value));
      return CastState<kHistogramSet>();
    }

    std::unique_ptr<GetHistogramResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHistogramResult;
    GetHistogramResultBuilder() : result_(new GetHistogramResult()) { }

    template<int STEP> GetHistogramResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHistogramResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHistogramResult> result_;
  };

  static GetHistogramResultBuilder<0> Builder() {
    return GetHistogramResultBuilder<0>();
  }

 private:
  GetHistogramResult() { }

  std::unique_ptr<::headless::browser::Histogram> histogram_;

  DISALLOW_COPY_AND_ASSIGN(GetHistogramResult);
};


// Parameters for the GetWindowBounds command.
class HEADLESS_EXPORT GetWindowBoundsParams {
 public:
  static std::unique_ptr<GetWindowBoundsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetWindowBoundsParams() { }

  // Browser window id.
  int GetWindowId() const { return window_id_; }
  void SetWindowId(int value) { window_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetWindowBoundsParams> Clone() const;

  template<int STATE>
  class GetWindowBoundsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kWindowIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kWindowIdSet | 0)
    };

    GetWindowBoundsParamsBuilder<STATE | kWindowIdSet>& SetWindowId(int value) {
      static_assert(!(STATE & kWindowIdSet), "property windowId should not have already been set");
      result_->SetWindowId(value);
      return CastState<kWindowIdSet>();
    }

    std::unique_ptr<GetWindowBoundsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetWindowBoundsParams;
    GetWindowBoundsParamsBuilder() : result_(new GetWindowBoundsParams()) { }

    template<int STEP> GetWindowBoundsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetWindowBoundsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetWindowBoundsParams> result_;
  };

  static GetWindowBoundsParamsBuilder<0> Builder() {
    return GetWindowBoundsParamsBuilder<0>();
  }

 private:
  GetWindowBoundsParams() { }

  int window_id_;

  DISALLOW_COPY_AND_ASSIGN(GetWindowBoundsParams);
};


// Result for the GetWindowBounds command.
class HEADLESS_EXPORT GetWindowBoundsResult {
 public:
  static std::unique_ptr<GetWindowBoundsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetWindowBoundsResult() { }

  // Bounds information of the window. When window state is 'minimized', the restored window
  // position and size are returned.
  const ::headless::browser::Bounds* GetBounds() const { return bounds_.get(); }
  void SetBounds(std::unique_ptr<::headless::browser::Bounds> value) { bounds_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetWindowBoundsResult> Clone() const;

  template<int STATE>
  class GetWindowBoundsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kBoundsSet = 1 << 1,
      kAllRequiredFieldsSet = (kBoundsSet | 0)
    };

    GetWindowBoundsResultBuilder<STATE | kBoundsSet>& SetBounds(std::unique_ptr<::headless::browser::Bounds> value) {
      static_assert(!(STATE & kBoundsSet), "property bounds should not have already been set");
      result_->SetBounds(std::move(value));
      return CastState<kBoundsSet>();
    }

    std::unique_ptr<GetWindowBoundsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetWindowBoundsResult;
    GetWindowBoundsResultBuilder() : result_(new GetWindowBoundsResult()) { }

    template<int STEP> GetWindowBoundsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetWindowBoundsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetWindowBoundsResult> result_;
  };

  static GetWindowBoundsResultBuilder<0> Builder() {
    return GetWindowBoundsResultBuilder<0>();
  }

 private:
  GetWindowBoundsResult() { }

  std::unique_ptr<::headless::browser::Bounds> bounds_;

  DISALLOW_COPY_AND_ASSIGN(GetWindowBoundsResult);
};


// Parameters for the GetWindowForTarget command.
class HEADLESS_EXPORT GetWindowForTargetParams {
 public:
  static std::unique_ptr<GetWindowForTargetParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetWindowForTargetParams() { }

  // Devtools agent host id.
  std::string GetTargetId() const { return target_id_; }
  void SetTargetId(const std::string& value) { target_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetWindowForTargetParams> Clone() const;

  template<int STATE>
  class GetWindowForTargetParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTargetIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kTargetIdSet | 0)
    };

    GetWindowForTargetParamsBuilder<STATE | kTargetIdSet>& SetTargetId(const std::string& value) {
      static_assert(!(STATE & kTargetIdSet), "property targetId should not have already been set");
      result_->SetTargetId(value);
      return CastState<kTargetIdSet>();
    }

    std::unique_ptr<GetWindowForTargetParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetWindowForTargetParams;
    GetWindowForTargetParamsBuilder() : result_(new GetWindowForTargetParams()) { }

    template<int STEP> GetWindowForTargetParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetWindowForTargetParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetWindowForTargetParams> result_;
  };

  static GetWindowForTargetParamsBuilder<0> Builder() {
    return GetWindowForTargetParamsBuilder<0>();
  }

 private:
  GetWindowForTargetParams() { }

  std::string target_id_;

  DISALLOW_COPY_AND_ASSIGN(GetWindowForTargetParams);
};


// Result for the GetWindowForTarget command.
class HEADLESS_EXPORT GetWindowForTargetResult {
 public:
  static std::unique_ptr<GetWindowForTargetResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~GetWindowForTargetResult() { }

  // Browser window id.
  int GetWindowId() const { return window_id_; }
  void SetWindowId(int value) { window_id_ = value; }

  // Bounds information of the window. When window state is 'minimized', the restored window
  // position and size are returned.
  const ::headless::browser::Bounds* GetBounds() const { return bounds_.get(); }
  void SetBounds(std::unique_ptr<::headless::browser::Bounds> value) { bounds_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetWindowForTargetResult> Clone() const;

  template<int STATE>
  class GetWindowForTargetResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kWindowIdSet = 1 << 1,
    kBoundsSet = 1 << 2,
      kAllRequiredFieldsSet = (kWindowIdSet | kBoundsSet | 0)
    };

    GetWindowForTargetResultBuilder<STATE | kWindowIdSet>& SetWindowId(int value) {
      static_assert(!(STATE & kWindowIdSet), "property windowId should not have already been set");
      result_->SetWindowId(value);
      return CastState<kWindowIdSet>();
    }

    GetWindowForTargetResultBuilder<STATE | kBoundsSet>& SetBounds(std::unique_ptr<::headless::browser::Bounds> value) {
      static_assert(!(STATE & kBoundsSet), "property bounds should not have already been set");
      result_->SetBounds(std::move(value));
      return CastState<kBoundsSet>();
    }

    std::unique_ptr<GetWindowForTargetResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetWindowForTargetResult;
    GetWindowForTargetResultBuilder() : result_(new GetWindowForTargetResult()) { }

    template<int STEP> GetWindowForTargetResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetWindowForTargetResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetWindowForTargetResult> result_;
  };

  static GetWindowForTargetResultBuilder<0> Builder() {
    return GetWindowForTargetResultBuilder<0>();
  }

 private:
  GetWindowForTargetResult() { }

  int window_id_;
  std::unique_ptr<::headless::browser::Bounds> bounds_;

  DISALLOW_COPY_AND_ASSIGN(GetWindowForTargetResult);
};


// Parameters for the SetWindowBounds command.
class HEADLESS_EXPORT SetWindowBoundsParams {
 public:
  static std::unique_ptr<SetWindowBoundsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetWindowBoundsParams() { }

  // Browser window id.
  int GetWindowId() const { return window_id_; }
  void SetWindowId(int value) { window_id_ = value; }

  // New window bounds. The 'minimized', 'maximized' and 'fullscreen' states cannot be combined
  // with 'left', 'top', 'width' or 'height'. Leaves unspecified fields unchanged.
  const ::headless::browser::Bounds* GetBounds() const { return bounds_.get(); }
  void SetBounds(std::unique_ptr<::headless::browser::Bounds> value) { bounds_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetWindowBoundsParams> Clone() const;

  template<int STATE>
  class SetWindowBoundsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kWindowIdSet = 1 << 1,
    kBoundsSet = 1 << 2,
      kAllRequiredFieldsSet = (kWindowIdSet | kBoundsSet | 0)
    };

    SetWindowBoundsParamsBuilder<STATE | kWindowIdSet>& SetWindowId(int value) {
      static_assert(!(STATE & kWindowIdSet), "property windowId should not have already been set");
      result_->SetWindowId(value);
      return CastState<kWindowIdSet>();
    }

    SetWindowBoundsParamsBuilder<STATE | kBoundsSet>& SetBounds(std::unique_ptr<::headless::browser::Bounds> value) {
      static_assert(!(STATE & kBoundsSet), "property bounds should not have already been set");
      result_->SetBounds(std::move(value));
      return CastState<kBoundsSet>();
    }

    std::unique_ptr<SetWindowBoundsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetWindowBoundsParams;
    SetWindowBoundsParamsBuilder() : result_(new SetWindowBoundsParams()) { }

    template<int STEP> SetWindowBoundsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetWindowBoundsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetWindowBoundsParams> result_;
  };

  static SetWindowBoundsParamsBuilder<0> Builder() {
    return SetWindowBoundsParamsBuilder<0>();
  }

 private:
  SetWindowBoundsParams() { }

  int window_id_;
  std::unique_ptr<::headless::browser::Bounds> bounds_;

  DISALLOW_COPY_AND_ASSIGN(SetWindowBoundsParams);
};


// Result for the SetWindowBounds command.
class HEADLESS_EXPORT SetWindowBoundsResult {
 public:
  static std::unique_ptr<SetWindowBoundsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ~SetWindowBoundsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetWindowBoundsResult> Clone() const;

  template<int STATE>
  class SetWindowBoundsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetWindowBoundsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetWindowBoundsResult;
    SetWindowBoundsResultBuilder() : result_(new SetWindowBoundsResult()) { }

    template<int STEP> SetWindowBoundsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetWindowBoundsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetWindowBoundsResult> result_;
  };

  static SetWindowBoundsResultBuilder<0> Builder() {
    return SetWindowBoundsResultBuilder<0>();
  }

 private:
  SetWindowBoundsResult() { }


  DISALLOW_COPY_AND_ASSIGN(SetWindowBoundsResult);
};


}  // namespace browser

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_DOMAINS_TYPES_BROWSER_H_
