// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/inline_install_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_INLINE_INSTALL_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_INLINE_INSTALL_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace inline_install_private {

//
// Functions
//

namespace Install {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::string& error, const std::string& error_code);
}  // namespace Results

}  // namespace Install

}  // namespace inline_install_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_INLINE_INSTALL_PRIVATE_H__
