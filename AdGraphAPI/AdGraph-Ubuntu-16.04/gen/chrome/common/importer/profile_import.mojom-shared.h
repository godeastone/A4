// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_H_
#define CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "chrome/common/importer/profile_import.mojom-shared-internal.h"
#include "components/autofill/content/common/autofill_types.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {
using ImportedBookmarkEntryDataView = mojo::native::NativeStructDataView;

using ImporterAutofillFormDataEntryDataView = mojo::native::NativeStructDataView;

using SearchEngineInfoDataView = mojo::native::NativeStructDataView;

using ImporterURLRowDataView = mojo::native::NativeStructDataView;

using SourceProfileDataView = mojo::native::NativeStructDataView;

using FaviconUsageDataListDataView = mojo::native::NativeStructDataView;

using ImporterIE7PasswordInfoDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
using ImportItem = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class ProfileImportObserverInterfaceBase {};

using ProfileImportObserverPtrDataView =
    mojo::InterfacePtrDataView<ProfileImportObserverInterfaceBase>;
using ProfileImportObserverRequestDataView =
    mojo::InterfaceRequestDataView<ProfileImportObserverInterfaceBase>;
using ProfileImportObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProfileImportObserverInterfaceBase>;
using ProfileImportObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProfileImportObserverInterfaceBase>;
class ProfileImportInterfaceBase {};

using ProfileImportPtrDataView =
    mojo::InterfacePtrDataView<ProfileImportInterfaceBase>;
using ProfileImportRequestDataView =
    mojo::InterfaceRequestDataView<ProfileImportInterfaceBase>;
using ProfileImportAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProfileImportInterfaceBase>;
using ProfileImportAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProfileImportInterfaceBase>;
class ProfileImportObserver_OnImportStart_ParamsDataView {
 public:
  ProfileImportObserver_OnImportStart_ParamsDataView() {}

  ProfileImportObserver_OnImportStart_ParamsDataView(
      internal::ProfileImportObserver_OnImportStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProfileImportObserver_OnImportStart_Params_Data* data_ = nullptr;
};

class ProfileImportObserver_OnImportFinished_ParamsDataView {
 public:
  ProfileImportObserver_OnImportFinished_ParamsDataView() {}

  ProfileImportObserver_OnImportFinished_ParamsDataView(
      internal::ProfileImportObserver_OnImportFinished_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool succeeded() const {
    return data_->succeeded;
  }
  inline void GetErrorMsgDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMsg(UserType* output) {
    auto* pointer = data_->error_msg.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnImportFinished_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnImportItemStart_ParamsDataView {
 public:
  ProfileImportObserver_OnImportItemStart_ParamsDataView() {}

  ProfileImportObserver_OnImportItemStart_ParamsDataView(
      internal::ProfileImportObserver_OnImportItemStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadItem(UserType* output) const {
    auto data_value = data_->item;
    return mojo::internal::Deserialize<::chrome::mojom::ImportItem>(
        data_value, output);
  }

  ImportItem item() const {
    return static_cast<ImportItem>(data_->item);
  }
 private:
  internal::ProfileImportObserver_OnImportItemStart_Params_Data* data_ = nullptr;
};

class ProfileImportObserver_OnImportItemFinished_ParamsDataView {
 public:
  ProfileImportObserver_OnImportItemFinished_ParamsDataView() {}

  ProfileImportObserver_OnImportItemFinished_ParamsDataView(
      internal::ProfileImportObserver_OnImportItemFinished_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadItem(UserType* output) const {
    auto data_value = data_->item;
    return mojo::internal::Deserialize<::chrome::mojom::ImportItem>(
        data_value, output);
  }

  ImportItem item() const {
    return static_cast<ImportItem>(data_->item);
  }
 private:
  internal::ProfileImportObserver_OnImportItemFinished_Params_Data* data_ = nullptr;
};

class ProfileImportObserver_OnHistoryImportStart_ParamsDataView {
 public:
  ProfileImportObserver_OnHistoryImportStart_ParamsDataView() {}

  ProfileImportObserver_OnHistoryImportStart_ParamsDataView(
      internal::ProfileImportObserver_OnHistoryImportStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t total_history_rows_count() const {
    return data_->total_history_rows_count;
  }
 private:
  internal::ProfileImportObserver_OnHistoryImportStart_Params_Data* data_ = nullptr;
};

class ProfileImportObserver_OnHistoryImportGroup_ParamsDataView {
 public:
  ProfileImportObserver_OnHistoryImportGroup_ParamsDataView() {}

  ProfileImportObserver_OnHistoryImportGroup_ParamsDataView(
      internal::ProfileImportObserver_OnHistoryImportGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHistoryRowsGroupDataView(
      mojo::ArrayDataView<ImporterURLRowDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHistoryRowsGroup(UserType* output) {
    auto* pointer = data_->history_rows_group.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::ImporterURLRowDataView>>(
        pointer, output, context_);
  }
  int32_t visit_source() const {
    return data_->visit_source;
  }
 private:
  internal::ProfileImportObserver_OnHistoryImportGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnHomePageImportReady_ParamsDataView {
 public:
  ProfileImportObserver_OnHomePageImportReady_ParamsDataView() {}

  ProfileImportObserver_OnHomePageImportReady_ParamsDataView(
      internal::ProfileImportObserver_OnHomePageImportReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHomePageDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHomePage(UserType* output) {
    auto* pointer = data_->home_page.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnHomePageImportReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnBookmarksImportStart_ParamsDataView {
 public:
  ProfileImportObserver_OnBookmarksImportStart_ParamsDataView() {}

  ProfileImportObserver_OnBookmarksImportStart_ParamsDataView(
      internal::ProfileImportObserver_OnBookmarksImportStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFirstFolderNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstFolderName(UserType* output) {
    auto* pointer = data_->first_folder_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  uint32_t total_bookmarks_count() const {
    return data_->total_bookmarks_count;
  }
 private:
  internal::ProfileImportObserver_OnBookmarksImportStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnBookmarksImportGroup_ParamsDataView {
 public:
  ProfileImportObserver_OnBookmarksImportGroup_ParamsDataView() {}

  ProfileImportObserver_OnBookmarksImportGroup_ParamsDataView(
      internal::ProfileImportObserver_OnBookmarksImportGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBookmarksGroupDataView(
      mojo::ArrayDataView<ImportedBookmarkEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBookmarksGroup(UserType* output) {
    auto* pointer = data_->bookmarks_group.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::ImportedBookmarkEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnBookmarksImportGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnFaviconsImportStart_ParamsDataView {
 public:
  ProfileImportObserver_OnFaviconsImportStart_ParamsDataView() {}

  ProfileImportObserver_OnFaviconsImportStart_ParamsDataView(
      internal::ProfileImportObserver_OnFaviconsImportStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t total_favicons_count() const {
    return data_->total_favicons_count;
  }
 private:
  internal::ProfileImportObserver_OnFaviconsImportStart_Params_Data* data_ = nullptr;
};

class ProfileImportObserver_OnFaviconsImportGroup_ParamsDataView {
 public:
  ProfileImportObserver_OnFaviconsImportGroup_ParamsDataView() {}

  ProfileImportObserver_OnFaviconsImportGroup_ParamsDataView(
      internal::ProfileImportObserver_OnFaviconsImportGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFaviconsGroupDataView(
      FaviconUsageDataListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFaviconsGroup(UserType* output) {
    auto* pointer = data_->favicons_group.Get();
    return mojo::internal::Deserialize<::chrome::mojom::FaviconUsageDataListDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnFaviconsImportGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnPasswordFormImportReady_ParamsDataView {
 public:
  ProfileImportObserver_OnPasswordFormImportReady_ParamsDataView() {}

  ProfileImportObserver_OnPasswordFormImportReady_ParamsDataView(
      internal::ProfileImportObserver_OnPasswordFormImportReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormDataView(
      ::autofill::mojom::PasswordFormDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadForm(UserType* output) {
    auto* pointer = data_->form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnPasswordFormImportReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnKeywordsImportReady_ParamsDataView {
 public:
  ProfileImportObserver_OnKeywordsImportReady_ParamsDataView() {}

  ProfileImportObserver_OnKeywordsImportReady_ParamsDataView(
      internal::ProfileImportObserver_OnKeywordsImportReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSearchEnginesDataView(
      mojo::ArrayDataView<SearchEngineInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchEngines(UserType* output) {
    auto* pointer = data_->search_engines.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::SearchEngineInfoDataView>>(
        pointer, output, context_);
  }
  bool unique_on_host_and_path() const {
    return data_->unique_on_host_and_path;
  }
 private:
  internal::ProfileImportObserver_OnKeywordsImportReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnFirefoxSearchEngineDataReceived_ParamsDataView {
 public:
  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_ParamsDataView() {}

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_ParamsDataView(
      internal::ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSearchEngineDataDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearchEngineData(UserType* output) {
    auto* pointer = data_->search_engine_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnAutofillFormDataImportStart_ParamsDataView {
 public:
  ProfileImportObserver_OnAutofillFormDataImportStart_ParamsDataView() {}

  ProfileImportObserver_OnAutofillFormDataImportStart_ParamsDataView(
      internal::ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t total_autofill_form_data_entry_count() const {
    return data_->total_autofill_form_data_entry_count;
  }
 private:
  internal::ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data* data_ = nullptr;
};

class ProfileImportObserver_OnAutofillFormDataImportGroup_ParamsDataView {
 public:
  ProfileImportObserver_OnAutofillFormDataImportGroup_ParamsDataView() {}

  ProfileImportObserver_OnAutofillFormDataImportGroup_ParamsDataView(
      internal::ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAutofillFormDataEntryGroupDataView(
      mojo::ArrayDataView<ImporterAutofillFormDataEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAutofillFormDataEntryGroup(UserType* output) {
    auto* pointer = data_->autofill_form_data_entry_group.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::ImporterAutofillFormDataEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImportObserver_OnIE7PasswordReceived_ParamsDataView {
 public:
  ProfileImportObserver_OnIE7PasswordReceived_ParamsDataView() {}

  ProfileImportObserver_OnIE7PasswordReceived_ParamsDataView(
      internal::ProfileImportObserver_OnIE7PasswordReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImporterPasswordInfoDataView(
      ImporterIE7PasswordInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImporterPasswordInfo(UserType* output) {
    auto* pointer = data_->importer_password_info.Get();
    return mojo::internal::Deserialize<::chrome::mojom::ImporterIE7PasswordInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfileImportObserver_OnIE7PasswordReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImport_StartImport_ParamsDataView {
 public:
  ProfileImport_StartImport_ParamsDataView() {}

  ProfileImport_StartImport_ParamsDataView(
      internal::ProfileImport_StartImport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceProfileDataView(
      SourceProfileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceProfile(UserType* output) {
    auto* pointer = data_->source_profile.Get();
    return mojo::internal::Deserialize<::chrome::mojom::SourceProfileDataView>(
        pointer, output, context_);
  }
  uint16_t items() const {
    return data_->items;
  }
  inline void GetLocalizedStringsDataView(
      mojo::MapDataView<uint32_t, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalizedStrings(UserType* output) {
    auto* pointer = data_->localized_strings.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint32_t, mojo::StringDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::chrome::mojom::ProfileImportObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProfileImport_StartImport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfileImport_CancelImport_ParamsDataView {
 public:
  ProfileImport_CancelImport_ParamsDataView() {}

  ProfileImport_CancelImport_ParamsDataView(
      internal::ProfileImport_CancelImport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProfileImport_CancelImport_Params_Data* data_ = nullptr;
};

class ProfileImport_ReportImportItemFinished_ParamsDataView {
 public:
  ProfileImport_ReportImportItemFinished_ParamsDataView() {}

  ProfileImport_ReportImportItemFinished_ParamsDataView(
      internal::ProfileImport_ReportImportItemFinished_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadItem(UserType* output) const {
    auto data_value = data_->item;
    return mojo::internal::Deserialize<::chrome::mojom::ImportItem>(
        data_value, output);
  }

  ImportItem item() const {
    return static_cast<ImportItem>(data_->item);
  }
 private:
  internal::ProfileImport_ReportImportItemFinished_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {



inline void ProfileImportObserver_OnImportFinished_ParamsDataView::GetErrorMsgDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_msg.Get();
  *output = mojo::StringDataView(pointer, context_);
}








inline void ProfileImportObserver_OnHistoryImportGroup_ParamsDataView::GetHistoryRowsGroupDataView(
    mojo::ArrayDataView<ImporterURLRowDataView>* output) {
  auto pointer = data_->history_rows_group.Get();
  *output = mojo::ArrayDataView<ImporterURLRowDataView>(pointer, context_);
}


inline void ProfileImportObserver_OnHomePageImportReady_ParamsDataView::GetHomePageDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->home_page.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ProfileImportObserver_OnBookmarksImportStart_ParamsDataView::GetFirstFolderNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->first_folder_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ProfileImportObserver_OnBookmarksImportGroup_ParamsDataView::GetBookmarksGroupDataView(
    mojo::ArrayDataView<ImportedBookmarkEntryDataView>* output) {
  auto pointer = data_->bookmarks_group.Get();
  *output = mojo::ArrayDataView<ImportedBookmarkEntryDataView>(pointer, context_);
}




inline void ProfileImportObserver_OnFaviconsImportGroup_ParamsDataView::GetFaviconsGroupDataView(
    FaviconUsageDataListDataView* output) {
  auto pointer = data_->favicons_group.Get();
  *output = FaviconUsageDataListDataView(pointer, context_);
}


inline void ProfileImportObserver_OnPasswordFormImportReady_ParamsDataView::GetFormDataView(
    ::autofill::mojom::PasswordFormDataView* output) {
  auto pointer = data_->form.Get();
  *output = ::autofill::mojom::PasswordFormDataView(pointer, context_);
}


inline void ProfileImportObserver_OnKeywordsImportReady_ParamsDataView::GetSearchEnginesDataView(
    mojo::ArrayDataView<SearchEngineInfoDataView>* output) {
  auto pointer = data_->search_engines.Get();
  *output = mojo::ArrayDataView<SearchEngineInfoDataView>(pointer, context_);
}


inline void ProfileImportObserver_OnFirefoxSearchEngineDataReceived_ParamsDataView::GetSearchEngineDataDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->search_engine_data.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void ProfileImportObserver_OnAutofillFormDataImportGroup_ParamsDataView::GetAutofillFormDataEntryGroupDataView(
    mojo::ArrayDataView<ImporterAutofillFormDataEntryDataView>* output) {
  auto pointer = data_->autofill_form_data_entry_group.Get();
  *output = mojo::ArrayDataView<ImporterAutofillFormDataEntryDataView>(pointer, context_);
}


inline void ProfileImportObserver_OnIE7PasswordReceived_ParamsDataView::GetImporterPasswordInfoDataView(
    ImporterIE7PasswordInfoDataView* output) {
  auto pointer = data_->importer_password_info.Get();
  *output = ImporterIE7PasswordInfoDataView(pointer, context_);
}


inline void ProfileImport_StartImport_ParamsDataView::GetSourceProfileDataView(
    SourceProfileDataView* output) {
  auto pointer = data_->source_profile.Get();
  *output = SourceProfileDataView(pointer, context_);
}
inline void ProfileImport_StartImport_ParamsDataView::GetLocalizedStringsDataView(
    mojo::MapDataView<uint32_t, mojo::StringDataView>* output) {
  auto pointer = data_->localized_strings.Get();
  *output = mojo::MapDataView<uint32_t, mojo::StringDataView>(pointer, context_);
}







}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_SHARED_H_
