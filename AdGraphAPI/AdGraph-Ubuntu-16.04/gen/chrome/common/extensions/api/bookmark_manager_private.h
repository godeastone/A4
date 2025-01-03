// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/bookmark_manager_private.json
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_BOOKMARK_MANAGER_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_BOOKMARK_MANAGER_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"
#include "chrome/common/extensions/api/bookmarks.h"
#include "chrome/common/extensions/api/bookmarks.h"
#include "chrome/common/extensions/api/bookmarks.h"


namespace extensions {
namespace api {
namespace bookmark_manager_private {

//
// Types
//

struct BookmarkNodeDataElement {
  BookmarkNodeDataElement();
  ~BookmarkNodeDataElement();
  BookmarkNodeDataElement(BookmarkNodeDataElement&& rhs);
  BookmarkNodeDataElement& operator=(BookmarkNodeDataElement&& rhs);

  // Populates a BookmarkNodeDataElement object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, BookmarkNodeDataElement* out);

  // Creates a BookmarkNodeDataElement object from a base::Value, or NULL on
  // failure.
  static std::unique_ptr<BookmarkNodeDataElement> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this BookmarkNodeDataElement object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The ID of the bookmark. This is only provided if the data is from the same
  // profile.
  std::unique_ptr<std::string> id;

  // The ID of the parent of the bookmark. This is only provided if the data is
  // from the same profile.
  std::unique_ptr<std::string> parent_id;

  std::string title;

  std::unique_ptr<std::string> url;

  std::vector<BookmarkNodeDataElement> children;


 private:
  DISALLOW_COPY_AND_ASSIGN(BookmarkNodeDataElement);
};

// Information about the drag and drop data for use with drag and drop events.
struct BookmarkNodeData {
  BookmarkNodeData();
  ~BookmarkNodeData();
  BookmarkNodeData(BookmarkNodeData&& rhs);
  BookmarkNodeData& operator=(BookmarkNodeData&& rhs);

  // Populates a BookmarkNodeData object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, BookmarkNodeData* out);

  // Creates a BookmarkNodeData object from a base::Value, or NULL on failure.
  static std::unique_ptr<BookmarkNodeData> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this BookmarkNodeData object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  bool same_profile;

  std::vector<BookmarkNodeDataElement> elements;


 private:
  DISALLOW_COPY_AND_ASSIGN(BookmarkNodeData);
};

// Collection of meta info fields.
struct MetaInfoFields {
  MetaInfoFields();
  ~MetaInfoFields();
  MetaInfoFields(MetaInfoFields&& rhs);
  MetaInfoFields& operator=(MetaInfoFields&& rhs);

  // Populates a MetaInfoFields object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, MetaInfoFields* out);

  // Creates a MetaInfoFields object from a base::Value, or NULL on failure.
  static std::unique_ptr<MetaInfoFields> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this MetaInfoFields object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::map<std::string, std::string> additional_properties;

 private:
  DISALLOW_COPY_AND_ASSIGN(MetaInfoFields);
};


//
// Functions
//

namespace Copy {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An array of string-valued ids
  std::vector<std::string> id_list;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Copy

namespace Cut {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An array of string-valued ids
  std::vector<std::string> id_list;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Cut

namespace Paste {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string parent_id;

  // An array of string-valued ids for selected bookmarks.
  std::unique_ptr<std::vector<std::string>> selected_id_list;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Paste

namespace CanPaste {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The ID of the folder to paste into.
  std::string parent_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create(bool result);
}  // namespace Results

}  // namespace CanPaste

namespace SortChildren {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The ID of the folder to sort the children of.
  std::string parent_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SortChildren

namespace GetStrings {

namespace Results {

struct Result {
  Result();
  ~Result();
  Result(Result&& rhs);
  Result& operator=(Result&& rhs);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Result object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  std::map<std::string, std::string> additional_properties;

 private:
  DISALLOW_COPY_AND_ASSIGN(Result);
};


std::unique_ptr<base::ListValue> Create(const Result& result);
}  // namespace Results

}  // namespace GetStrings

namespace StartDrag {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An array of string-valued ids.
  std::vector<std::string> id_list;

  // True if the drag was initiated from touch.
  bool is_from_touch;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace StartDrag

namespace Drop {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The ID of the folder that the drop was made.
  std::string parent_id;

  // The index of the position to drop at. If left out the dropped items will be
  // placed at the end of the existing children.
  std::unique_ptr<int> index;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Drop

namespace GetSubtree {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // ID of the root of the tree to pull.  If empty, the entire tree will be
  // returned.
  std::string id;

  // Pass true to only return folders.
  bool folders_only;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<extensions::api::bookmarks::BookmarkTreeNode>& results);
}  // namespace Results

}  // namespace GetSubtree

namespace CanEdit {

namespace Results {

std::unique_ptr<base::ListValue> Create(bool result);
}  // namespace Results

}  // namespace CanEdit

namespace RemoveTrees {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // An array of string-valued ids.
  std::vector<std::string> id_list;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace RemoveTrees

namespace RecordLaunch {

}  // namespace RecordLaunch

namespace CreateWithMetaInfo {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  extensions::api::bookmarks::CreateDetails bookmark;

  MetaInfoFields meta_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create(const extensions::api::bookmarks::BookmarkTreeNode& result);
}  // namespace Results

}  // namespace CreateWithMetaInfo

namespace GetMetaInfo {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The id of the bookmark to retrieve meta info from. If omitted meta info for
  // all nodes is returned.
  std::unique_ptr<std::string> id;

  // The key for the meta info to retrieve. If omitted, all fields are returned.
  std::unique_ptr<std::string> key;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// If a key was given, the value of the specified field, if present. Otherwise
// an object containing all meta info fields for the node. If id is not given
// then meta info for all nodes as an object with node id to meta info.
struct Value {
  Value();
  ~Value();
  Value(Value&& rhs);
  Value& operator=(Value&& rhs);

  // Returns a new base::Value representing the serialized form of this Value
  // object.
  std::unique_ptr<base::Value> ToValue() const;
  struct Object {
    Object();
    ~Object();
    Object(Object&& rhs);
    Object& operator=(Object&& rhs);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this Object object.
    std::unique_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(Object);
  };


  // Choices:
  std::unique_ptr<std::string> as_string;
  std::unique_ptr<Object> as_object;

 private:
  DISALLOW_COPY_AND_ASSIGN(Value);
};


// If a key was given, the value of the specified field, if present. Otherwise
// an object containing all meta info fields for the node. If id is not given
// then meta info for all nodes as an object with node id to meta info.
std::unique_ptr<base::ListValue> Create(const Value& value);
}  // namespace Results

}  // namespace GetMetaInfo

namespace SetMetaInfo {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The id of the bookmark node to set the meta info on.
  std::string id;

  // The key of the meta info to set.
  std::string key;

  // The meta info to set.
  std::string value;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetMetaInfo

namespace UpdateMetaInfo {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The id of the bookmark node to update the meta info of.
  std::string id;

  // A set of meta info key/value pairs to update.
  MetaInfoFields meta_info_changes;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace UpdateMetaInfo

namespace Undo {

}  // namespace Undo

namespace Redo {

}  // namespace Redo

namespace GetUndoInfo {

namespace Results {

struct Result {
  Result();
  ~Result();
  Result(Result&& rhs);
  Result& operator=(Result&& rhs);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Result object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Whether there is an action to undo.
  bool enabled;

  // The i18n label to use for the undo action.
  std::string label;


 private:
  DISALLOW_COPY_AND_ASSIGN(Result);
};


std::unique_ptr<base::ListValue> Create(const Result& result);
}  // namespace Results

}  // namespace GetUndoInfo

namespace GetRedoInfo {

namespace Results {

struct Result {
  Result();
  ~Result();
  Result(Result&& rhs);
  Result& operator=(Result&& rhs);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Result object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Whether there is an action to redo
  bool enabled;

  // The i18n label to use for the redo action
  std::string label;


 private:
  DISALLOW_COPY_AND_ASSIGN(Result);
};


std::unique_ptr<base::ListValue> Create(const Result& result);
}  // namespace Results

}  // namespace GetRedoInfo

//
// Events
//

namespace OnDragEnter {

extern const char kEventName[];  // "bookmarkManagerPrivate.onDragEnter"

std::unique_ptr<base::ListValue> Create(const BookmarkNodeData& bookmark_node_data);
}  // namespace OnDragEnter

namespace OnDragLeave {

extern const char kEventName[];  // "bookmarkManagerPrivate.onDragLeave"

std::unique_ptr<base::ListValue> Create(const BookmarkNodeData& bookmark_node_data);
}  // namespace OnDragLeave

namespace OnDrop {

extern const char kEventName[];  // "bookmarkManagerPrivate.onDrop"

std::unique_ptr<base::ListValue> Create(const BookmarkNodeData& bookmark_node_data);
}  // namespace OnDrop

namespace OnMetaInfoChanged {

extern const char kEventName[];  // "bookmarkManagerPrivate.onMetaInfoChanged"

std::unique_ptr<base::ListValue> Create(const std::string& id, const MetaInfoFields& meta_info_changes);
}  // namespace OnMetaInfoChanged

}  // namespace bookmark_manager_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_BOOKMARK_MANAGER_PRIVATE_H__
