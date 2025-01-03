// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/autotest_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_AUTOTEST_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_AUTOTEST_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace autotest_private {

//
// Types
//

struct LoginStatusDict {
  LoginStatusDict();
  ~LoginStatusDict();
  LoginStatusDict(LoginStatusDict&& rhs);
  LoginStatusDict& operator=(LoginStatusDict&& rhs);

  // Populates a LoginStatusDict object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, LoginStatusDict* out);

  // Creates a LoginStatusDict object from a base::Value, or NULL on failure.
  static std::unique_ptr<LoginStatusDict> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this LoginStatusDict object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Are we logged in?
  bool is_logged_in;

  // Is the logged-in user the owner?
  bool is_owner;

  // Is the screen locked?
  bool is_screen_locked;

  // Is the screen ready for password?
  bool is_ready_for_password;

  // Is the logged-in user a regular user?
  bool is_regular_user;

  // Are we logged into the guest account?
  bool is_guest;

  // Are we logged into kiosk-app mode?
  bool is_kiosk;

  std::string email;

  std::string display_email;

  // User image: 'file', 'profile' or a number.
  std::string user_image;


 private:
  DISALLOW_COPY_AND_ASSIGN(LoginStatusDict);
};

struct ExtensionInfoDict {
  ExtensionInfoDict();
  ~ExtensionInfoDict();
  ExtensionInfoDict(ExtensionInfoDict&& rhs);
  ExtensionInfoDict& operator=(ExtensionInfoDict&& rhs);

  // Populates a ExtensionInfoDict object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ExtensionInfoDict* out);

  // Creates a ExtensionInfoDict object from a base::Value, or NULL on failure.
  static std::unique_ptr<ExtensionInfoDict> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ExtensionInfoDict object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::string id;

  std::string version;

  std::string name;

  std::string public_key;

  std::string description;

  std::string background_url;

  std::string options_url;

  std::vector<std::string> host_permissions;

  std::vector<std::string> effective_host_permissions;

  std::vector<std::string> api_permissions;

  bool is_component;

  bool is_internal;

  bool is_user_installed;

  bool is_enabled;

  bool allowed_in_incognito;

  bool has_page_action;


 private:
  DISALLOW_COPY_AND_ASSIGN(ExtensionInfoDict);
};

struct ExtensionsInfoArray {
  ExtensionsInfoArray();
  ~ExtensionsInfoArray();
  ExtensionsInfoArray(ExtensionsInfoArray&& rhs);
  ExtensionsInfoArray& operator=(ExtensionsInfoArray&& rhs);

  // Populates a ExtensionsInfoArray object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ExtensionsInfoArray* out);

  // Creates a ExtensionsInfoArray object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<ExtensionsInfoArray> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ExtensionsInfoArray object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::vector<ExtensionInfoDict> extensions;


 private:
  DISALLOW_COPY_AND_ASSIGN(ExtensionsInfoArray);
};

struct Notification {
  Notification();
  ~Notification();
  Notification(Notification&& rhs);
  Notification& operator=(Notification&& rhs);

  // Populates a Notification object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, Notification* out);

  // Creates a Notification object from a base::Value, or NULL on failure.
  static std::unique_ptr<Notification> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Notification object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::string id;

  std::string type;

  std::string title;

  std::string message;

  int priority;

  int progress;


 private:
  DISALLOW_COPY_AND_ASSIGN(Notification);
};

struct Printer {
  Printer();
  ~Printer();
  Printer(Printer&& rhs);
  Printer& operator=(Printer&& rhs);

  // Populates a Printer object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Printer* out);

  // Creates a Printer object from a base::Value, or NULL on failure.
  static std::unique_ptr<Printer> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Printer object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::string printer_name;

  std::unique_ptr<std::string> printer_id;

  std::unique_ptr<std::string> printer_type;

  std::unique_ptr<std::string> printer_desc;

  std::unique_ptr<std::string> printer_make_and_model;

  std::unique_ptr<std::string> printer_uri;

  std::unique_ptr<std::string> printer_ppd;


 private:
  DISALLOW_COPY_AND_ASSIGN(Printer);
};

struct PlayStoreState {
  PlayStoreState();
  ~PlayStoreState();
  PlayStoreState(PlayStoreState&& rhs);
  PlayStoreState& operator=(PlayStoreState&& rhs);

  // Populates a PlayStoreState object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, PlayStoreState* out);

  // Creates a PlayStoreState object from a base::Value, or NULL on failure.
  static std::unique_ptr<PlayStoreState> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PlayStoreState object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Whether the Play Store allowed for the current user.
  bool allowed;

  // Whether the Play Store currently enabled.
  std::unique_ptr<bool> enabled;

  // Whether the Play Store managed by policy.
  std::unique_ptr<bool> managed;


 private:
  DISALLOW_COPY_AND_ASSIGN(PlayStoreState);
};


//
// Functions
//

namespace Logout {

}  // namespace Logout

namespace Restart {

}  // namespace Restart

namespace Shutdown {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, ignore ongoing downloads and onunbeforeunload handlers.
  bool force;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace Shutdown

namespace LoginStatus {

namespace Results {

std::unique_ptr<base::ListValue> Create(const LoginStatusDict& status);
}  // namespace Results

}  // namespace LoginStatus

namespace LockScreen {

}  // namespace LockScreen

namespace GetExtensionsInfo {

namespace Results {

std::unique_ptr<base::ListValue> Create(const ExtensionsInfoArray& info);
}  // namespace Results

}  // namespace GetExtensionsInfo

namespace SimulateAsanMemoryBug {

}  // namespace SimulateAsanMemoryBug

namespace SetTouchpadSensitivity {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // the pointer sensitivity setting index.
  int value;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetTouchpadSensitivity

namespace SetTapToClick {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, enable tap-to-click.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetTapToClick

namespace SetThreeFingerClick {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, enable three finger click.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetThreeFingerClick

namespace SetTapDragging {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, enable tap dragging.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetTapDragging

namespace SetNaturalScroll {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, enable Australian scrolling.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetNaturalScroll

namespace SetMouseSensitivity {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // the pointer sensitivity setting index.
  int value;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetMouseSensitivity

namespace SetPrimaryButtonRight {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, swap the primary mouse button.
  bool right;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetPrimaryButtonRight

namespace SetMouseReverseScroll {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, enable reverse scrolling.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetMouseReverseScroll

namespace GetVisibleNotifications {

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<Notification>& notifications);
}  // namespace Results

}  // namespace GetVisibleNotifications

namespace GetPlayStoreState {

namespace Results {

std::unique_ptr<base::ListValue> Create(const PlayStoreState& result);
}  // namespace Results

}  // namespace GetPlayStoreState

namespace GetPrinterList {

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<Printer>& printers);
}  // namespace Results

}  // namespace GetPrinterList

namespace UpdatePrinter {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  Printer printer;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace UpdatePrinter

namespace RemovePrinter {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string printer_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace RemovePrinter

namespace SetPlayStoreEnabled {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // if set, enable the Play Store.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetPlayStoreEnabled

}  // namespace autotest_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_AUTOTEST_PRIVATE_H__
