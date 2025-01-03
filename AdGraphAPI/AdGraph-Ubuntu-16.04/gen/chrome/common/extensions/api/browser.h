// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/browser.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_BROWSER_H__
#define CHROME_COMMON_EXTENSIONS_API_BROWSER_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace browser {

//
// Types
//

struct OpenTabOptions {
  OpenTabOptions();
  ~OpenTabOptions();
  OpenTabOptions(OpenTabOptions&& rhs);
  OpenTabOptions& operator=(OpenTabOptions&& rhs);

  // Populates a OpenTabOptions object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, OpenTabOptions* out);

  // Creates a OpenTabOptions object from a base::Value, or NULL on failure.
  static std::unique_ptr<OpenTabOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this OpenTabOptions object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The URL to navigate to when the new tab is initially opened.
  std::string url;


 private:
  DISALLOW_COPY_AND_ASSIGN(OpenTabOptions);
};


//
// Functions
//

namespace OpenTab {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Configures how the tab should be opened.
  OpenTabOptions options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace OpenTab

}  // namespace browser
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_BROWSER_H__
