// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/enterprise_reporting_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_ENTERPRISE_REPORTING_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_ENTERPRISE_REPORTING_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace enterprise_reporting_private {

//
// Functions
//

namespace UploadChromeDesktopReport {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  struct Report {
    Report();
    ~Report();
    Report(Report&& rhs);
    Report& operator=(Report&& rhs);

    // Populates a Report object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Report* out);

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(Report);
  };


  Report report;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace UploadChromeDesktopReport

}  // namespace enterprise_reporting_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_ENTERPRISE_REPORTING_PRIVATE_H__
