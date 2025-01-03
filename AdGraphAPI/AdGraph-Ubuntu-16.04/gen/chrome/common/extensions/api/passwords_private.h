// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/passwords_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_PASSWORDS_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_PASSWORDS_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace passwords_private {

//
// Types
//

enum ExportProgressStatus {
  EXPORT_PROGRESS_STATUS_NONE,
  EXPORT_PROGRESS_STATUS_NOT_STARTED,
  EXPORT_PROGRESS_STATUS_IN_PROGRESS,
  EXPORT_PROGRESS_STATUS_SUCCEEDED,
  EXPORT_PROGRESS_STATUS_FAILED_CANCELLED,
  EXPORT_PROGRESS_STATUS_FAILED_WRITE_FAILED,
  EXPORT_PROGRESS_STATUS_LAST = EXPORT_PROGRESS_STATUS_FAILED_WRITE_FAILED,
};


const char* ToString(ExportProgressStatus as_enum);
ExportProgressStatus ParseExportProgressStatus(const std::string& as_string);

struct UrlCollection {
  UrlCollection();
  ~UrlCollection();
  UrlCollection(UrlCollection&& rhs);
  UrlCollection& operator=(UrlCollection&& rhs);

  // Populates a UrlCollection object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, UrlCollection* out);

  // Creates a UrlCollection object from a base::Value, or NULL on failure.
  static std::unique_ptr<UrlCollection> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this UrlCollection object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The fully specified URL of the credential's origin.
  std::string origin;

  // A human readable version of the URL of the credential's origin.
  std::string shown;

  // The URL that will be linked to when an entry is clicked.
  std::string link;


 private:
  DISALLOW_COPY_AND_ASSIGN(UrlCollection);
};

struct LoginPair {
  LoginPair();
  ~LoginPair();
  LoginPair(LoginPair&& rhs);
  LoginPair& operator=(LoginPair&& rhs);

  // Populates a LoginPair object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, LoginPair* out);

  // Creates a LoginPair object from a base::Value, or NULL on failure.
  static std::unique_ptr<LoginPair> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this LoginPair object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  UrlCollection urls;

  // The username used in conjunction with the saved password.
  std::string username;


 private:
  DISALLOW_COPY_AND_ASSIGN(LoginPair);
};

struct PasswordUiEntry {
  PasswordUiEntry();
  ~PasswordUiEntry();
  PasswordUiEntry(PasswordUiEntry&& rhs);
  PasswordUiEntry& operator=(PasswordUiEntry&& rhs);

  // Populates a PasswordUiEntry object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, PasswordUiEntry* out);

  // Creates a PasswordUiEntry object from a base::Value, or NULL on failure.
  static std::unique_ptr<PasswordUiEntry> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PasswordUiEntry object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The login information for this entry.
  LoginPair login_pair;

  // The number of characters in the password; used to display placeholder dots in
  // the UI.
  int num_characters_in_password;

  // Text shown if the password was obtained via a federated identity.
  std::unique_ptr<std::string> federation_text;

  // An index to refer back to a unique password entry record.
  int index;


 private:
  DISALLOW_COPY_AND_ASSIGN(PasswordUiEntry);
};

struct PlaintextPasswordEventParameters {
  PlaintextPasswordEventParameters();
  ~PlaintextPasswordEventParameters();
  PlaintextPasswordEventParameters(PlaintextPasswordEventParameters&& rhs);
  PlaintextPasswordEventParameters& operator=(PlaintextPasswordEventParameters&& rhs);

  // Populates a PlaintextPasswordEventParameters object from a base::Value.
  // Returns whether |out| was successfully populated.
  static bool Populate(const base::Value& value, PlaintextPasswordEventParameters* out);

  // Creates a PlaintextPasswordEventParameters object from a base::Value, or
  // NULL on failure.
  static std::unique_ptr<PlaintextPasswordEventParameters> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PlaintextPasswordEventParameters object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // An index to refer back to a unique password entry record.
  int index;

  // The password in plaintext.
  std::string plaintext_password;


 private:
  DISALLOW_COPY_AND_ASSIGN(PlaintextPasswordEventParameters);
};

struct ExceptionEntry {
  ExceptionEntry();
  ~ExceptionEntry();
  ExceptionEntry(ExceptionEntry&& rhs);
  ExceptionEntry& operator=(ExceptionEntry&& rhs);

  // Populates a ExceptionEntry object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ExceptionEntry* out);

  // Creates a ExceptionEntry object from a base::Value, or NULL on failure.
  static std::unique_ptr<ExceptionEntry> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ExceptionEntry object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  UrlCollection urls;

  // An index to refer back to a unique exception entry record.
  int index;


 private:
  DISALLOW_COPY_AND_ASSIGN(ExceptionEntry);
};

struct PasswordExportProgress {
  PasswordExportProgress();
  ~PasswordExportProgress();
  PasswordExportProgress(PasswordExportProgress&& rhs);
  PasswordExportProgress& operator=(PasswordExportProgress&& rhs);

  // Populates a PasswordExportProgress object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, PasswordExportProgress* out);

  // Creates a PasswordExportProgress object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<PasswordExportProgress> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PasswordExportProgress object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The current status of the export task.
  ExportProgressStatus status;

  // If |status| is $ref(ExportProgressStatus.FAILED_WRITE_FAILED), this will be
  // the name of the selected folder to export to.
  std::unique_ptr<std::string> folder_name;


 private:
  DISALLOW_COPY_AND_ASSIGN(PasswordExportProgress);
};


//
// Functions
//

namespace RemoveSavedPassword {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The index for the password entry being removed.
  int index;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace RemoveSavedPassword

namespace RemovePasswordException {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The index for the exception url entry being removed.
  int index;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace RemovePasswordException

namespace UndoRemoveSavedPasswordOrException {

}  // namespace UndoRemoveSavedPasswordOrException

namespace RequestPlaintextPassword {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The index for the password entry being being retrieved.
  int index;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace RequestPlaintextPassword

namespace GetSavedPasswordList {

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<PasswordUiEntry>& entries);
}  // namespace Results

}  // namespace GetSavedPasswordList

namespace GetPasswordExceptionList {

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<ExceptionEntry>& exceptions);
}  // namespace Results

}  // namespace GetPasswordExceptionList

namespace ImportPasswords {

}  // namespace ImportPasswords

namespace ExportPasswords {

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace ExportPasswords

namespace RequestExportProgressStatus {

namespace Results {

std::unique_ptr<base::ListValue> Create(const ExportProgressStatus& status);
}  // namespace Results

}  // namespace RequestExportProgressStatus

namespace CancelExportPasswords {

}  // namespace CancelExportPasswords

//
// Events
//

namespace OnSavedPasswordsListChanged {

extern const char kEventName[];  // "passwordsPrivate.onSavedPasswordsListChanged"

// The updated list of password entries.
std::unique_ptr<base::ListValue> Create(const std::vector<PasswordUiEntry>& entries);
}  // namespace OnSavedPasswordsListChanged

namespace OnPasswordExceptionsListChanged {

extern const char kEventName[];  // "passwordsPrivate.onPasswordExceptionsListChanged"

// The updated list of password exceptions.
std::unique_ptr<base::ListValue> Create(const std::vector<ExceptionEntry>& exceptions);
}  // namespace OnPasswordExceptionsListChanged

namespace OnPlaintextPasswordRetrieved {

extern const char kEventName[];  // "passwordsPrivate.onPlaintextPasswordRetrieved"

std::unique_ptr<base::ListValue> Create(const PlaintextPasswordEventParameters& dict);
}  // namespace OnPlaintextPasswordRetrieved

namespace OnPasswordsFileExportProgress {

extern const char kEventName[];  // "passwordsPrivate.onPasswordsFileExportProgress"

// The progress status and an optional UI message.
std::unique_ptr<base::ListValue> Create(const PasswordExportProgress& status);
}  // namespace OnPasswordsFileExportProgress

}  // namespace passwords_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_PASSWORDS_PRIVATE_H__
