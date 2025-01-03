// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_H_
#define CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "chrome/common/importer/profile_import.mojom-shared.h"
#include "components/autofill/content/common/autofill_types.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "chrome/common/importer/imported_bookmark_entry.h"
#include "chrome/common/importer/importer_autofill_form_data_entry.h"
#include "chrome/common/importer/importer_data_types.h"
#include "chrome/common/importer/importer_url_row.h"
#include "components/favicon_base/favicon_usage_data.h"


namespace chrome {
namespace mojom {
extern const char kProfileImportServiceName[];
class ProfileImportObserver;
using ProfileImportObserverPtr = mojo::InterfacePtr<ProfileImportObserver>;
using ProfileImportObserverPtrInfo = mojo::InterfacePtrInfo<ProfileImportObserver>;
using ThreadSafeProfileImportObserverPtr =
    mojo::ThreadSafeInterfacePtr<ProfileImportObserver>;
using ProfileImportObserverRequest = mojo::InterfaceRequest<ProfileImportObserver>;
using ProfileImportObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProfileImportObserver>;
using ThreadSafeProfileImportObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProfileImportObserver>;
using ProfileImportObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProfileImportObserver>;
using ProfileImportObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProfileImportObserver>;

class ProfileImport;
using ProfileImportPtr = mojo::InterfacePtr<ProfileImport>;
using ProfileImportPtrInfo = mojo::InterfacePtrInfo<ProfileImport>;
using ThreadSafeProfileImportPtr =
    mojo::ThreadSafeInterfacePtr<ProfileImport>;
using ProfileImportRequest = mojo::InterfaceRequest<ProfileImport>;
using ProfileImportAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProfileImport>;
using ThreadSafeProfileImportAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProfileImport>;
using ProfileImportAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProfileImport>;
using ProfileImportAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProfileImport>;

using ImportedBookmarkEntry = mojo::native::NativeStruct;
using ImportedBookmarkEntryPtr = mojo::native::NativeStructPtr;

using ImporterAutofillFormDataEntry = mojo::native::NativeStruct;
using ImporterAutofillFormDataEntryPtr = mojo::native::NativeStructPtr;

using SearchEngineInfo = mojo::native::NativeStruct;
using SearchEngineInfoPtr = mojo::native::NativeStructPtr;

using ImporterURLRow = mojo::native::NativeStruct;
using ImporterURLRowPtr = mojo::native::NativeStructPtr;

using SourceProfile = mojo::native::NativeStruct;
using SourceProfilePtr = mojo::native::NativeStructPtr;

using FaviconUsageDataList = mojo::native::NativeStruct;
using FaviconUsageDataListPtr = mojo::native::NativeStructPtr;

using ImporterIE7PasswordInfo = mojo::native::NativeStruct;
using ImporterIE7PasswordInfoPtr = mojo::native::NativeStructPtr;


class ProfileImportObserverProxy;

template <typename ImplRefTraits>
class ProfileImportObserverStub;

class ProfileImportObserverRequestValidator;

class  ProfileImportObserver
    : public ProfileImportObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProfileImportObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProfileImportObserverStub<ImplRefTraits>;

  using RequestValidator_ = ProfileImportObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnImportStartMinVersion = 0,
    kOnImportFinishedMinVersion = 0,
    kOnImportItemStartMinVersion = 0,
    kOnImportItemFinishedMinVersion = 0,
    kOnHistoryImportStartMinVersion = 0,
    kOnHistoryImportGroupMinVersion = 0,
    kOnHomePageImportReadyMinVersion = 0,
    kOnBookmarksImportStartMinVersion = 0,
    kOnBookmarksImportGroupMinVersion = 0,
    kOnFaviconsImportStartMinVersion = 0,
    kOnFaviconsImportGroupMinVersion = 0,
    kOnPasswordFormImportReadyMinVersion = 0,
    kOnKeywordsImportReadyMinVersion = 0,
    kOnFirefoxSearchEngineDataReceivedMinVersion = 0,
    kOnAutofillFormDataImportStartMinVersion = 0,
    kOnAutofillFormDataImportGroupMinVersion = 0,
    kOnIE7PasswordReceivedMinVersion = 0,
  };
  virtual ~ProfileImportObserver() {}

  virtual void OnImportStart() = 0;

  virtual void OnImportFinished(bool succeeded, const std::string& error_msg) = 0;

  virtual void OnImportItemStart(::importer::ImportItem item) = 0;

  virtual void OnImportItemFinished(::importer::ImportItem item) = 0;

  virtual void OnHistoryImportStart(uint32_t total_history_rows_count) = 0;

  virtual void OnHistoryImportGroup(const std::vector<::ImporterURLRow>& history_rows_group, int32_t visit_source) = 0;

  virtual void OnHomePageImportReady(const GURL& home_page) = 0;

  virtual void OnBookmarksImportStart(const base::string16& first_folder_name, uint32_t total_bookmarks_count) = 0;

  virtual void OnBookmarksImportGroup(const std::vector<::ImportedBookmarkEntry>& bookmarks_group) = 0;

  virtual void OnFaviconsImportStart(uint32_t total_favicons_count) = 0;

  virtual void OnFaviconsImportGroup(const ::favicon_base::FaviconUsageDataList& favicons_group) = 0;

  virtual void OnPasswordFormImportReady(const autofill::PasswordForm& form) = 0;

  virtual void OnKeywordsImportReady(const std::vector<::importer::SearchEngineInfo>& search_engines, bool unique_on_host_and_path) = 0;

  virtual void OnFirefoxSearchEngineDataReceived(const std::vector<std::string>& search_engine_data) = 0;

  virtual void OnAutofillFormDataImportStart(uint32_t total_autofill_form_data_entry_count) = 0;

  virtual void OnAutofillFormDataImportGroup(const std::vector<::ImporterAutofillFormDataEntry>& autofill_form_data_entry_group) = 0;

  virtual void OnIE7PasswordReceived(const ::importer::ImporterIE7PasswordInfo& importer_password_info) = 0;
};
class  ProfileImportObserverInterceptorForTesting : public ProfileImportObserver {
  virtual ProfileImportObserver* GetForwardingInterface() = 0;
  void OnImportStart() override;
  void OnImportFinished(bool succeeded, const std::string& error_msg) override;
  void OnImportItemStart(::importer::ImportItem item) override;
  void OnImportItemFinished(::importer::ImportItem item) override;
  void OnHistoryImportStart(uint32_t total_history_rows_count) override;
  void OnHistoryImportGroup(const std::vector<::ImporterURLRow>& history_rows_group, int32_t visit_source) override;
  void OnHomePageImportReady(const GURL& home_page) override;
  void OnBookmarksImportStart(const base::string16& first_folder_name, uint32_t total_bookmarks_count) override;
  void OnBookmarksImportGroup(const std::vector<::ImportedBookmarkEntry>& bookmarks_group) override;
  void OnFaviconsImportStart(uint32_t total_favicons_count) override;
  void OnFaviconsImportGroup(const ::favicon_base::FaviconUsageDataList& favicons_group) override;
  void OnPasswordFormImportReady(const autofill::PasswordForm& form) override;
  void OnKeywordsImportReady(const std::vector<::importer::SearchEngineInfo>& search_engines, bool unique_on_host_and_path) override;
  void OnFirefoxSearchEngineDataReceived(const std::vector<std::string>& search_engine_data) override;
  void OnAutofillFormDataImportStart(uint32_t total_autofill_form_data_entry_count) override;
  void OnAutofillFormDataImportGroup(const std::vector<::ImporterAutofillFormDataEntry>& autofill_form_data_entry_group) override;
  void OnIE7PasswordReceived(const ::importer::ImporterIE7PasswordInfo& importer_password_info) override;
};
class  ProfileImportObserverAsyncWaiter {
 public:
  explicit ProfileImportObserverAsyncWaiter(ProfileImportObserver* proxy);
  ~ProfileImportObserverAsyncWaiter();

 private:
  ProfileImportObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProfileImportObserverAsyncWaiter);
};

class ProfileImportProxy;

template <typename ImplRefTraits>
class ProfileImportStub;

class ProfileImportRequestValidator;

class  ProfileImport
    : public ProfileImportInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProfileImportProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProfileImportStub<ImplRefTraits>;

  using RequestValidator_ = ProfileImportRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartImportMinVersion = 0,
    kCancelImportMinVersion = 0,
    kReportImportItemFinishedMinVersion = 0,
  };
  virtual ~ProfileImport() {}

  virtual void StartImport(const ::importer::SourceProfile& source_profile, uint16_t items, const base::flat_map<uint32_t, std::string>& localized_strings, ProfileImportObserverPtr observer) = 0;

  virtual void CancelImport() = 0;

  virtual void ReportImportItemFinished(::importer::ImportItem item) = 0;
};
class  ProfileImportInterceptorForTesting : public ProfileImport {
  virtual ProfileImport* GetForwardingInterface() = 0;
  void StartImport(const ::importer::SourceProfile& source_profile, uint16_t items, const base::flat_map<uint32_t, std::string>& localized_strings, ProfileImportObserverPtr observer) override;
  void CancelImport() override;
  void ReportImportItemFinished(::importer::ImportItem item) override;
};
class  ProfileImportAsyncWaiter {
 public:
  explicit ProfileImportAsyncWaiter(ProfileImport* proxy);
  ~ProfileImportAsyncWaiter();

 private:
  ProfileImport* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProfileImportAsyncWaiter);
};

class  ProfileImportObserverProxy
    : public ProfileImportObserver {
 public:
  explicit ProfileImportObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnImportStart() final;
  void OnImportFinished(bool succeeded, const std::string& error_msg) final;
  void OnImportItemStart(::importer::ImportItem item) final;
  void OnImportItemFinished(::importer::ImportItem item) final;
  void OnHistoryImportStart(uint32_t total_history_rows_count) final;
  void OnHistoryImportGroup(const std::vector<::ImporterURLRow>& history_rows_group, int32_t visit_source) final;
  void OnHomePageImportReady(const GURL& home_page) final;
  void OnBookmarksImportStart(const base::string16& first_folder_name, uint32_t total_bookmarks_count) final;
  void OnBookmarksImportGroup(const std::vector<::ImportedBookmarkEntry>& bookmarks_group) final;
  void OnFaviconsImportStart(uint32_t total_favicons_count) final;
  void OnFaviconsImportGroup(const ::favicon_base::FaviconUsageDataList& favicons_group) final;
  void OnPasswordFormImportReady(const autofill::PasswordForm& form) final;
  void OnKeywordsImportReady(const std::vector<::importer::SearchEngineInfo>& search_engines, bool unique_on_host_and_path) final;
  void OnFirefoxSearchEngineDataReceived(const std::vector<std::string>& search_engine_data) final;
  void OnAutofillFormDataImportStart(uint32_t total_autofill_form_data_entry_count) final;
  void OnAutofillFormDataImportGroup(const std::vector<::ImporterAutofillFormDataEntry>& autofill_form_data_entry_group) final;
  void OnIE7PasswordReceived(const ::importer::ImporterIE7PasswordInfo& importer_password_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProfileImportProxy
    : public ProfileImport {
 public:
  explicit ProfileImportProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartImport(const ::importer::SourceProfile& source_profile, uint16_t items, const base::flat_map<uint32_t, std::string>& localized_strings, ProfileImportObserverPtr observer) final;
  void CancelImport() final;
  void ReportImportItemFinished(::importer::ImportItem item) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProfileImportObserverStubDispatch {
 public:
  static bool Accept(ProfileImportObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProfileImportObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProfileImportObserver>>
class ProfileImportObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProfileImportObserverStub() {}
  ~ProfileImportObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfileImportObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfileImportObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProfileImportStubDispatch {
 public:
  static bool Accept(ProfileImport* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProfileImport* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProfileImport>>
class ProfileImportStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProfileImportStub() {}
  ~ProfileImportStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfileImportStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfileImportStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProfileImportObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProfileImportRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



















}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_IMPORTER_PROFILE_IMPORT_MOJOM_H_