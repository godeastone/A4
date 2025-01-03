// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/file_system.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "extensions/common/api/file_system.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace file_system {
//
// Types
//

AcceptOption::AcceptOption()
 {}

AcceptOption::~AcceptOption() {}
AcceptOption::AcceptOption(AcceptOption&& rhs)
: description(std::move(rhs.description)),
mime_types(std::move(rhs.mime_types)),
extensions(std::move(rhs.extensions)){
}

AcceptOption& AcceptOption::operator=(AcceptOption&& rhs)
{
description = std::move(rhs.description);
mime_types = std::move(rhs.mime_types);
extensions = std::move(rhs.extensions);
return *this;
}

// static
bool AcceptOption::Populate(
    const base::Value& value, AcceptOption* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* description_value = NULL;
  if (dict->GetWithoutPathExpansion("description", &description_value)) {
    {
      std::string temp;
      if (!description_value->GetAsString(&temp)) {
        out->description.reset();
        return false;
      }
      else
        out->description.reset(new std::string(temp));
    }
  }

  const base::Value* mime_types_value = NULL;
  if (dict->GetWithoutPathExpansion("mimeTypes", &mime_types_value)) {
    {
      const base::ListValue* list = NULL;
      if (!mime_types_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->mime_types)) {
          return false;
        }
      }
    }
  }

  const base::Value* extensions_value = NULL;
  if (dict->GetWithoutPathExpansion("extensions", &extensions_value)) {
    {
      const base::ListValue* list = NULL;
      if (!extensions_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->extensions)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
std::unique_ptr<AcceptOption> AcceptOption::FromValue(const base::Value& value) {
  std::unique_ptr<AcceptOption> out(new AcceptOption());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> AcceptOption::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->description.get()) {
    value->SetWithoutPathExpansion("description", std::make_unique<base::Value>(*this->description));

  }
  if (this->mime_types.get()) {
    value->SetWithoutPathExpansion("mimeTypes", json_schema_compiler::util::CreateValueFromOptionalArray(this->mime_types));

  }
  if (this->extensions.get()) {
    value->SetWithoutPathExpansion("extensions", json_schema_compiler::util::CreateValueFromOptionalArray(this->extensions));

  }

  return value;
}


const char* ToString(ChooseEntryType enum_param) {
  switch (enum_param) {
    case CHOOSE_ENTRY_TYPE_OPENFILE:
      return "openFile";
    case CHOOSE_ENTRY_TYPE_OPENWRITABLEFILE:
      return "openWritableFile";
    case CHOOSE_ENTRY_TYPE_SAVEFILE:
      return "saveFile";
    case CHOOSE_ENTRY_TYPE_OPENDIRECTORY:
      return "openDirectory";
    case CHOOSE_ENTRY_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ChooseEntryType ParseChooseEntryType(const std::string& enum_string) {
  if (enum_string == "openFile")
    return CHOOSE_ENTRY_TYPE_OPENFILE;
  if (enum_string == "openWritableFile")
    return CHOOSE_ENTRY_TYPE_OPENWRITABLEFILE;
  if (enum_string == "saveFile")
    return CHOOSE_ENTRY_TYPE_SAVEFILE;
  if (enum_string == "openDirectory")
    return CHOOSE_ENTRY_TYPE_OPENDIRECTORY;
  return CHOOSE_ENTRY_TYPE_NONE;
}


const char* ToString(ChildChangeType enum_param) {
  switch (enum_param) {
    case CHILD_CHANGE_TYPE_CREATED:
      return "created";
    case CHILD_CHANGE_TYPE_REMOVED:
      return "removed";
    case CHILD_CHANGE_TYPE_CHANGED:
      return "changed";
    case CHILD_CHANGE_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ChildChangeType ParseChildChangeType(const std::string& enum_string) {
  if (enum_string == "created")
    return CHILD_CHANGE_TYPE_CREATED;
  if (enum_string == "removed")
    return CHILD_CHANGE_TYPE_REMOVED;
  if (enum_string == "changed")
    return CHILD_CHANGE_TYPE_CHANGED;
  return CHILD_CHANGE_TYPE_NONE;
}


ChooseEntryOptions::ChooseEntryOptions()
: type(CHOOSE_ENTRY_TYPE_NONE) {}

ChooseEntryOptions::~ChooseEntryOptions() {}
ChooseEntryOptions::ChooseEntryOptions(ChooseEntryOptions&& rhs)
: type(rhs.type),
suggested_name(std::move(rhs.suggested_name)),
accepts(std::move(rhs.accepts)),
accepts_all_types(std::move(rhs.accepts_all_types)),
accepts_multiple(std::move(rhs.accepts_multiple)){
}

ChooseEntryOptions& ChooseEntryOptions::operator=(ChooseEntryOptions&& rhs)
{
type = rhs.type;
suggested_name = std::move(rhs.suggested_name);
accepts = std::move(rhs.accepts);
accepts_all_types = std::move(rhs.accepts_all_types);
accepts_multiple = std::move(rhs.accepts_multiple);
return *this;
}

// static
bool ChooseEntryOptions::Populate(
    const base::Value& value, ChooseEntryOptions* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->type = CHOOSE_ENTRY_TYPE_NONE;
  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("type", &type_value)) {
    {
      std::string choose_entry_type_as_string;
      if (!type_value->GetAsString(&choose_entry_type_as_string)) {
        return false;
      }
      out->type = ParseChooseEntryType(choose_entry_type_as_string);
      if (out->type == CHOOSE_ENTRY_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->type = CHOOSE_ENTRY_TYPE_NONE;
  }

  const base::Value* suggested_name_value = NULL;
  if (dict->GetWithoutPathExpansion("suggestedName", &suggested_name_value)) {
    {
      std::string temp;
      if (!suggested_name_value->GetAsString(&temp)) {
        out->suggested_name.reset();
        return false;
      }
      else
        out->suggested_name.reset(new std::string(temp));
    }
  }

  const base::Value* accepts_value = NULL;
  if (dict->GetWithoutPathExpansion("accepts", &accepts_value)) {
    {
      const base::ListValue* list = NULL;
      if (!accepts_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->accepts)) {
          return false;
        }
      }
    }
  }

  const base::Value* accepts_all_types_value = NULL;
  if (dict->GetWithoutPathExpansion("acceptsAllTypes", &accepts_all_types_value)) {
    {
      bool temp;
      if (!accepts_all_types_value->GetAsBoolean(&temp)) {
        out->accepts_all_types.reset();
        return false;
      }
      else
        out->accepts_all_types.reset(new bool(temp));
    }
  }

  const base::Value* accepts_multiple_value = NULL;
  if (dict->GetWithoutPathExpansion("acceptsMultiple", &accepts_multiple_value)) {
    {
      bool temp;
      if (!accepts_multiple_value->GetAsBoolean(&temp)) {
        out->accepts_multiple.reset();
        return false;
      }
      else
        out->accepts_multiple.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<ChooseEntryOptions> ChooseEntryOptions::FromValue(const base::Value& value) {
  std::unique_ptr<ChooseEntryOptions> out(new ChooseEntryOptions());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ChooseEntryOptions::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->type != CHOOSE_ENTRY_TYPE_NONE) {
    value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(file_system::ToString(this->type)));

  }
  if (this->suggested_name.get()) {
    value->SetWithoutPathExpansion("suggestedName", std::make_unique<base::Value>(*this->suggested_name));

  }
  if (this->accepts.get()) {
    value->SetWithoutPathExpansion("accepts", json_schema_compiler::util::CreateValueFromOptionalArray(this->accepts));

  }
  if (this->accepts_all_types.get()) {
    value->SetWithoutPathExpansion("acceptsAllTypes", std::make_unique<base::Value>(*this->accepts_all_types));

  }
  if (this->accepts_multiple.get()) {
    value->SetWithoutPathExpansion("acceptsMultiple", std::make_unique<base::Value>(*this->accepts_multiple));

  }

  return value;
}


RequestFileSystemOptions::RequestFileSystemOptions()
 {}

RequestFileSystemOptions::~RequestFileSystemOptions() {}
RequestFileSystemOptions::RequestFileSystemOptions(RequestFileSystemOptions&& rhs)
: volume_id(std::move(rhs.volume_id)),
writable(std::move(rhs.writable)){
}

RequestFileSystemOptions& RequestFileSystemOptions::operator=(RequestFileSystemOptions&& rhs)
{
volume_id = std::move(rhs.volume_id);
writable = std::move(rhs.writable);
return *this;
}

// static
bool RequestFileSystemOptions::Populate(
    const base::Value& value, RequestFileSystemOptions* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* volume_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("volumeId", &volume_id_value)) {
    return false;
  }
  {
    if (!volume_id_value->GetAsString(&out->volume_id)) {
      return false;
    }
  }

  const base::Value* writable_value = NULL;
  if (dict->GetWithoutPathExpansion("writable", &writable_value)) {
    {
      bool temp;
      if (!writable_value->GetAsBoolean(&temp)) {
        out->writable.reset();
        return false;
      }
      else
        out->writable.reset(new bool(temp));
    }
  }

  return true;
}

// static
std::unique_ptr<RequestFileSystemOptions> RequestFileSystemOptions::FromValue(const base::Value& value) {
  std::unique_ptr<RequestFileSystemOptions> out(new RequestFileSystemOptions());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> RequestFileSystemOptions::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("volumeId", std::make_unique<base::Value>(this->volume_id));

  if (this->writable.get()) {
    value->SetWithoutPathExpansion("writable", std::make_unique<base::Value>(*this->writable));

  }

  return value;
}


Volume::Volume()
: writable(false) {}

Volume::~Volume() {}
Volume::Volume(Volume&& rhs)
: volume_id(std::move(rhs.volume_id)),
writable(rhs.writable){
}

Volume& Volume::operator=(Volume&& rhs)
{
volume_id = std::move(rhs.volume_id);
writable = rhs.writable;
return *this;
}

// static
bool Volume::Populate(
    const base::Value& value, Volume* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* volume_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("volumeId", &volume_id_value)) {
    return false;
  }
  {
    if (!volume_id_value->GetAsString(&out->volume_id)) {
      return false;
    }
  }

  const base::Value* writable_value = NULL;
  if (!dict->GetWithoutPathExpansion("writable", &writable_value)) {
    return false;
  }
  {
    if (!writable_value->GetAsBoolean(&out->writable)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<Volume> Volume::FromValue(const base::Value& value) {
  std::unique_ptr<Volume> out(new Volume());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> Volume::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("volumeId", std::make_unique<base::Value>(this->volume_id));

  value->SetWithoutPathExpansion("writable", std::make_unique<base::Value>(this->writable));


  return value;
}


ChildChange::Entry::Entry()
 {}

ChildChange::Entry::~Entry() {}
ChildChange::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

ChildChange::Entry& ChildChange::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool ChildChange::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}

std::unique_ptr<base::DictionaryValue> ChildChange::Entry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



ChildChange::ChildChange()
: type(CHILD_CHANGE_TYPE_NONE) {}

ChildChange::~ChildChange() {}
ChildChange::ChildChange(ChildChange&& rhs)
: entry(std::move(rhs.entry)),
type(rhs.type){
}

ChildChange& ChildChange::operator=(ChildChange&& rhs)
{
entry = std::move(rhs.entry);
type = rhs.type;
return *this;
}

// static
bool ChildChange::Populate(
    const base::Value& value, ChildChange* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* entry_value = NULL;
  if (!dict->GetWithoutPathExpansion("entry", &entry_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!entry_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Entry::Populate(*dictionary, &out->entry)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string child_change_type_as_string;
    if (!type_value->GetAsString(&child_change_type_as_string)) {
      return false;
    }
    out->type = ParseChildChangeType(child_change_type_as_string);
    if (out->type == CHILD_CHANGE_TYPE_NONE) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<ChildChange> ChildChange::FromValue(const base::Value& value) {
  std::unique_ptr<ChildChange> out(new ChildChange());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> ChildChange::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("entry", (this->entry).ToValue());

  value->SetWithoutPathExpansion("type", std::make_unique<base::Value>(file_system::ToString(this->type)));


  return value;
}


VolumeListChangedEvent::VolumeListChangedEvent()
 {}

VolumeListChangedEvent::~VolumeListChangedEvent() {}
VolumeListChangedEvent::VolumeListChangedEvent(VolumeListChangedEvent&& rhs)
: volumes(std::move(rhs.volumes)){
}

VolumeListChangedEvent& VolumeListChangedEvent::operator=(VolumeListChangedEvent&& rhs)
{
volumes = std::move(rhs.volumes);
return *this;
}

// static
bool VolumeListChangedEvent::Populate(
    const base::Value& value, VolumeListChangedEvent* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* volumes_value = NULL;
  if (!dict->GetWithoutPathExpansion("volumes", &volumes_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!volumes_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->volumes)) {
        return false;
      }
    }
  }

  return true;
}

// static
std::unique_ptr<VolumeListChangedEvent> VolumeListChangedEvent::FromValue(const base::Value& value) {
  std::unique_ptr<VolumeListChangedEvent> out(new VolumeListChangedEvent());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> VolumeListChangedEvent::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("volumes", json_schema_compiler::util::CreateValueFromArray(this->volumes));


  return value;
}


EntryChangedEvent::Target::Target()
 {}

EntryChangedEvent::Target::~Target() {}
EntryChangedEvent::Target::Target(Target&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

EntryChangedEvent::Target& EntryChangedEvent::Target::operator=(Target&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool EntryChangedEvent::Target::Populate(
    const base::Value& value, Target* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}

std::unique_ptr<base::DictionaryValue> EntryChangedEvent::Target::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



EntryChangedEvent::EntryChangedEvent()
 {}

EntryChangedEvent::~EntryChangedEvent() {}
EntryChangedEvent::EntryChangedEvent(EntryChangedEvent&& rhs)
: target(std::move(rhs.target)),
child_changes(std::move(rhs.child_changes)){
}

EntryChangedEvent& EntryChangedEvent::operator=(EntryChangedEvent&& rhs)
{
target = std::move(rhs.target);
child_changes = std::move(rhs.child_changes);
return *this;
}

// static
bool EntryChangedEvent::Populate(
    const base::Value& value, EntryChangedEvent* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* target_value = NULL;
  if (!dict->GetWithoutPathExpansion("target", &target_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!target_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Target::Populate(*dictionary, &out->target)) {
      return false;
    }
  }

  const base::Value* child_changes_value = NULL;
  if (dict->GetWithoutPathExpansion("childChanges", &child_changes_value)) {
    {
      const base::ListValue* list = NULL;
      if (!child_changes_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->child_changes)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
std::unique_ptr<EntryChangedEvent> EntryChangedEvent::FromValue(const base::Value& value) {
  std::unique_ptr<EntryChangedEvent> out(new EntryChangedEvent());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> EntryChangedEvent::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("target", (this->target).ToValue());

  if (this->child_changes.get()) {
    value->SetWithoutPathExpansion("childChanges", json_schema_compiler::util::CreateValueFromOptionalArray(this->child_changes));

  }

  return value;
}


EntryRemovedEvent::Target::Target()
 {}

EntryRemovedEvent::Target::~Target() {}
EntryRemovedEvent::Target::Target(Target&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

EntryRemovedEvent::Target& EntryRemovedEvent::Target::operator=(Target&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool EntryRemovedEvent::Target::Populate(
    const base::Value& value, Target* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}

std::unique_ptr<base::DictionaryValue> EntryRemovedEvent::Target::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



EntryRemovedEvent::EntryRemovedEvent()
 {}

EntryRemovedEvent::~EntryRemovedEvent() {}
EntryRemovedEvent::EntryRemovedEvent(EntryRemovedEvent&& rhs)
: target(std::move(rhs.target)){
}

EntryRemovedEvent& EntryRemovedEvent::operator=(EntryRemovedEvent&& rhs)
{
target = std::move(rhs.target);
return *this;
}

// static
bool EntryRemovedEvent::Populate(
    const base::Value& value, EntryRemovedEvent* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* target_value = NULL;
  if (!dict->GetWithoutPathExpansion("target", &target_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!target_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Target::Populate(*dictionary, &out->target)) {
      return false;
    }
  }

  return true;
}

// static
std::unique_ptr<EntryRemovedEvent> EntryRemovedEvent::FromValue(const base::Value& value) {
  std::unique_ptr<EntryRemovedEvent> out(new EntryRemovedEvent());
  if (!Populate(value, out.get()))
    return nullptr;
  return out;
}

std::unique_ptr<base::DictionaryValue> EntryRemovedEvent::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("target", (this->target).ToValue());


  return value;
}



//
// Functions
//

namespace GetDisplayPath {

Params::Entry::Entry()
 {}

Params::Entry::~Entry() {}
Params::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Params::Entry& Params::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool Params::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* entry_value = NULL;
  if (args.Get(0, &entry_value) &&
      !entry_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!entry_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Entry::Populate(*dictionary, &params->entry)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(const std::string& display_path) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(display_path));

  return create_results;
}
}  // namespace GetDisplayPath

namespace GetWritableEntry {

Params::Entry::Entry()
 {}

Params::Entry::~Entry() {}
Params::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Params::Entry& Params::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool Params::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* entry_value = NULL;
  if (args.Get(0, &entry_value) &&
      !entry_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!entry_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Entry::Populate(*dictionary, &params->entry)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


Results::Entry::Entry()
 {}

Results::Entry::~Entry() {}
Results::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::Entry& Results::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::Entry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const Entry& entry) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((entry).ToValue());

  return create_results;
}
}  // namespace GetWritableEntry

namespace IsWritableEntry {

Params::Entry::Entry()
 {}

Params::Entry::~Entry() {}
Params::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Params::Entry& Params::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool Params::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* entry_value = NULL;
  if (args.Get(0, &entry_value) &&
      !entry_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!entry_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Entry::Populate(*dictionary, &params->entry)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool is_writable) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(is_writable));

  return create_results;
}
}  // namespace IsWritableEntry

namespace ChooseEntry {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      else {
        std::unique_ptr<ChooseEntryOptions> temp(new ChooseEntryOptions());
        if (!ChooseEntryOptions::Populate(*dictionary, temp.get())) {
          return std::unique_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


Results::Entry::Entry()
 {}

Results::Entry::~Entry() {}
Results::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::Entry& Results::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::Entry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


Results::FileEntriesType::FileEntriesType()
 {}

Results::FileEntriesType::~FileEntriesType() {}
Results::FileEntriesType::FileEntriesType(FileEntriesType&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::FileEntriesType& Results::FileEntriesType::operator=(FileEntriesType&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::FileEntriesType::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



std::unique_ptr<base::ListValue> Results::Create(const Entry& entry, const std::vector<FileEntriesType>& file_entries) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((entry).ToValue());

  create_results->Append(json_schema_compiler::util::CreateValueFromArray(file_entries));

  return create_results;
}
}  // namespace ChooseEntry

namespace RestoreEntry {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->is_none()) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


Results::Entry::Entry()
 {}

Results::Entry::~Entry() {}
Results::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::Entry& Results::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::Entry::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const Entry& entry) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((entry).ToValue());

  return create_results;
}
}  // namespace RestoreEntry

namespace IsRestorable {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->is_none()) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


std::unique_ptr<base::ListValue> Results::Create(bool is_restorable) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(std::make_unique<base::Value>(is_restorable));

  return create_results;
}
}  // namespace IsRestorable

namespace RetainEntry {

Params::Entry::Entry()
 {}

Params::Entry::~Entry() {}
Params::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Params::Entry& Params::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool Params::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* entry_value = NULL;
  if (args.Get(0, &entry_value) &&
      !entry_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!entry_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Entry::Populate(*dictionary, &params->entry)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace RetainEntry

namespace RequestFileSystem {

Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!RequestFileSystemOptions::Populate(*dictionary, &params->options)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


Results::FileSystem::FileSystem()
 {}

Results::FileSystem::~FileSystem() {}
Results::FileSystem::FileSystem(FileSystem&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::FileSystem& Results::FileSystem::operator=(FileSystem&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::FileSystem::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


std::unique_ptr<base::ListValue> Results::Create(const FileSystem& file_system) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((file_system).ToValue());

  return create_results;
}
}  // namespace RequestFileSystem

namespace GetVolumeList {

std::unique_ptr<base::ListValue> Results::Create(const std::vector<Volume>& volumes) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(volumes));

  return create_results;
}
}  // namespace GetVolumeList

namespace ObserveDirectory {

Params::Entry::Entry()
 {}

Params::Entry::~Entry() {}
Params::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Params::Entry& Params::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool Params::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* entry_value = NULL;
  if (args.Get(0, &entry_value) &&
      !entry_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!entry_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Entry::Populate(*dictionary, &params->entry)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  const base::Value* recursive_value = NULL;
  if (args.Get(1, &recursive_value) &&
      !recursive_value->is_none()) {
    {
      bool temp;
      if (!recursive_value->GetAsBoolean(&temp)) {
        params->recursive.reset();
        return std::unique_ptr<Params>();
      }
      else
        params->recursive.reset(new bool(temp));
    }
  }

  return params;
}


}  // namespace ObserveDirectory

namespace UnobserveEntry {

Params::Entry::Entry()
 {}

Params::Entry::~Entry() {}
Params::Entry::Entry(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Params::Entry& Params::Entry::operator=(Entry&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

// static
bool Params::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.is_dict()) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
std::unique_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return nullptr;
  }
  std::unique_ptr<Params> params(new Params());

  const base::Value* entry_value = NULL;
  if (args.Get(0, &entry_value) &&
      !entry_value->is_none()) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!entry_value->GetAsDictionary(&dictionary)) {
        return std::unique_ptr<Params>();
      }
      if (!Entry::Populate(*dictionary, &params->entry)) {
        return std::unique_ptr<Params>();
      }
    }
  }
  else {
    return std::unique_ptr<Params>();
  }

  return params;
}


}  // namespace UnobserveEntry

namespace GetObservedEntries {

Results::EntriesType::EntriesType()
 {}

Results::EntriesType::~EntriesType() {}
Results::EntriesType::EntriesType(EntriesType&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
}

Results::EntriesType& Results::EntriesType::operator=(EntriesType&& rhs)
{
additional_properties.Swap(&rhs.additional_properties);
return *this;
}

std::unique_ptr<base::DictionaryValue> Results::EntriesType::ToValue() const {
  std::unique_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



std::unique_ptr<base::ListValue> Results::Create(const std::vector<EntriesType>& entries) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(entries));

  return create_results;
}
}  // namespace GetObservedEntries

//
// Events
//

namespace OnVolumeListChanged {

const char kEventName[] = "fileSystem.onVolumeListChanged";

std::unique_ptr<base::ListValue> Create(const VolumeListChangedEvent& event) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((event).ToValue());

  return create_results;
}

}  // namespace OnVolumeListChanged

namespace OnEntryChanged {

const char kEventName[] = "fileSystem.onEntryChanged";

std::unique_ptr<base::ListValue> Create(const EntryChangedEvent& event) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((event).ToValue());

  return create_results;
}

}  // namespace OnEntryChanged

namespace OnEntryRemoved {

const char kEventName[] = "fileSystem.onEntryRemoved";

std::unique_ptr<base::ListValue> Create(const EntryRemovedEvent& event) {
  std::unique_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((event).ToValue());

  return create_results;
}

}  // namespace OnEntryRemoved

}  // namespace file_system
}  // namespace api
}  // namespace extensions

