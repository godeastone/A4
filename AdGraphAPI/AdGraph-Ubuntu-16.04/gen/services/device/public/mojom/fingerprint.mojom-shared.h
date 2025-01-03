// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/fingerprint.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FingerprintObserverInterfaceBase {};

using FingerprintObserverPtrDataView =
    mojo::InterfacePtrDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverRequestDataView =
    mojo::InterfaceRequestDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FingerprintObserverInterfaceBase>;
class FingerprintInterfaceBase {};

using FingerprintPtrDataView =
    mojo::InterfacePtrDataView<FingerprintInterfaceBase>;
using FingerprintRequestDataView =
    mojo::InterfaceRequestDataView<FingerprintInterfaceBase>;
using FingerprintAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FingerprintInterfaceBase>;
using FingerprintAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FingerprintInterfaceBase>;
class FingerprintObserver_OnRestarted_ParamsDataView {
 public:
  FingerprintObserver_OnRestarted_ParamsDataView() {}

  FingerprintObserver_OnRestarted_ParamsDataView(
      internal::FingerprintObserver_OnRestarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FingerprintObserver_OnRestarted_Params_Data* data_ = nullptr;
};

class FingerprintObserver_OnEnrollScanDone_ParamsDataView {
 public:
  FingerprintObserver_OnEnrollScanDone_ParamsDataView() {}

  FingerprintObserver_OnEnrollScanDone_ParamsDataView(
      internal::FingerprintObserver_OnEnrollScanDone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t scan_result() const {
    return data_->scan_result;
  }
  bool is_complete() const {
    return data_->is_complete;
  }
  int32_t percent_complete() const {
    return data_->percent_complete;
  }
 private:
  internal::FingerprintObserver_OnEnrollScanDone_Params_Data* data_ = nullptr;
};

class FingerprintObserver_OnAuthScanDone_ParamsDataView {
 public:
  FingerprintObserver_OnAuthScanDone_ParamsDataView() {}

  FingerprintObserver_OnAuthScanDone_ParamsDataView(
      internal::FingerprintObserver_OnAuthScanDone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t scan_result() const {
    return data_->scan_result;
  }
  inline void GetMatchesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatches(UserType* output) {
    auto* pointer = data_->matches.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::FingerprintObserver_OnAuthScanDone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FingerprintObserver_OnSessionFailed_ParamsDataView {
 public:
  FingerprintObserver_OnSessionFailed_ParamsDataView() {}

  FingerprintObserver_OnSessionFailed_ParamsDataView(
      internal::FingerprintObserver_OnSessionFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FingerprintObserver_OnSessionFailed_Params_Data* data_ = nullptr;
};

class Fingerprint_GetRecordsForUser_ParamsDataView {
 public:
  Fingerprint_GetRecordsForUser_ParamsDataView() {}

  Fingerprint_GetRecordsForUser_ParamsDataView(
      internal::Fingerprint_GetRecordsForUser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserId(UserType* output) {
    auto* pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_GetRecordsForUser_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_GetRecordsForUser_ResponseParamsDataView {
 public:
  Fingerprint_GetRecordsForUser_ResponseParamsDataView() {}

  Fingerprint_GetRecordsForUser_ResponseParamsDataView(
      internal::Fingerprint_GetRecordsForUser_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordsDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecords(UserType* output) {
    auto* pointer = data_->records.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_GetRecordsForUser_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_StartEnrollSession_ParamsDataView {
 public:
  Fingerprint_StartEnrollSession_ParamsDataView() {}

  Fingerprint_StartEnrollSession_ParamsDataView(
      internal::Fingerprint_StartEnrollSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserId(UserType* output) {
    auto* pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_StartEnrollSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_CancelCurrentEnrollSession_ParamsDataView {
 public:
  Fingerprint_CancelCurrentEnrollSession_ParamsDataView() {}

  Fingerprint_CancelCurrentEnrollSession_ParamsDataView(
      internal::Fingerprint_CancelCurrentEnrollSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_CancelCurrentEnrollSession_Params_Data* data_ = nullptr;
};

class Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView {
 public:
  Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView() {}

  Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView(
      internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_RequestRecordLabel_ParamsDataView {
 public:
  Fingerprint_RequestRecordLabel_ParamsDataView() {}

  Fingerprint_RequestRecordLabel_ParamsDataView(
      internal::Fingerprint_RequestRecordLabel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordPath(UserType* output) {
    auto* pointer = data_->record_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_RequestRecordLabel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_RequestRecordLabel_ResponseParamsDataView {
 public:
  Fingerprint_RequestRecordLabel_ResponseParamsDataView() {}

  Fingerprint_RequestRecordLabel_ResponseParamsDataView(
      internal::Fingerprint_RequestRecordLabel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLabel(UserType* output) {
    auto* pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_RequestRecordLabel_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_SetRecordLabel_ParamsDataView {
 public:
  Fingerprint_SetRecordLabel_ParamsDataView() {}

  Fingerprint_SetRecordLabel_ParamsDataView(
      internal::Fingerprint_SetRecordLabel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordPath(UserType* output) {
    auto* pointer = data_->record_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNewLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewLabel(UserType* output) {
    auto* pointer = data_->new_label.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_SetRecordLabel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_SetRecordLabel_ResponseParamsDataView {
 public:
  Fingerprint_SetRecordLabel_ResponseParamsDataView() {}

  Fingerprint_SetRecordLabel_ResponseParamsDataView(
      internal::Fingerprint_SetRecordLabel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_SetRecordLabel_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_RemoveRecord_ParamsDataView {
 public:
  Fingerprint_RemoveRecord_ParamsDataView() {}

  Fingerprint_RemoveRecord_ParamsDataView(
      internal::Fingerprint_RemoveRecord_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecordPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordPath(UserType* output) {
    auto* pointer = data_->record_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Fingerprint_RemoveRecord_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_RemoveRecord_ResponseParamsDataView {
 public:
  Fingerprint_RemoveRecord_ResponseParamsDataView() {}

  Fingerprint_RemoveRecord_ResponseParamsDataView(
      internal::Fingerprint_RemoveRecord_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_RemoveRecord_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_StartAuthSession_ParamsDataView {
 public:
  Fingerprint_StartAuthSession_ParamsDataView() {}

  Fingerprint_StartAuthSession_ParamsDataView(
      internal::Fingerprint_StartAuthSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_StartAuthSession_Params_Data* data_ = nullptr;
};

class Fingerprint_EndCurrentAuthSession_ParamsDataView {
 public:
  Fingerprint_EndCurrentAuthSession_ParamsDataView() {}

  Fingerprint_EndCurrentAuthSession_ParamsDataView(
      internal::Fingerprint_EndCurrentAuthSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_EndCurrentAuthSession_Params_Data* data_ = nullptr;
};

class Fingerprint_EndCurrentAuthSession_ResponseParamsDataView {
 public:
  Fingerprint_EndCurrentAuthSession_ResponseParamsDataView() {}

  Fingerprint_EndCurrentAuthSession_ResponseParamsDataView(
      internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_DestroyAllRecords_ParamsDataView {
 public:
  Fingerprint_DestroyAllRecords_ParamsDataView() {}

  Fingerprint_DestroyAllRecords_ParamsDataView(
      internal::Fingerprint_DestroyAllRecords_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_DestroyAllRecords_Params_Data* data_ = nullptr;
};

class Fingerprint_DestroyAllRecords_ResponseParamsDataView {
 public:
  Fingerprint_DestroyAllRecords_ResponseParamsDataView() {}

  Fingerprint_DestroyAllRecords_ResponseParamsDataView(
      internal::Fingerprint_DestroyAllRecords_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Fingerprint_DestroyAllRecords_ResponseParams_Data* data_ = nullptr;
};

class Fingerprint_AddFingerprintObserver_ParamsDataView {
 public:
  Fingerprint_AddFingerprintObserver_ParamsDataView() {}

  Fingerprint_AddFingerprintObserver_ParamsDataView(
      internal::Fingerprint_AddFingerprintObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::FingerprintObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Fingerprint_AddFingerprintObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Fingerprint_RequestType_ParamsDataView {
 public:
  Fingerprint_RequestType_ParamsDataView() {}

  Fingerprint_RequestType_ParamsDataView(
      internal::Fingerprint_RequestType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Fingerprint_RequestType_Params_Data* data_ = nullptr;
};

class Fingerprint_RequestType_ResponseParamsDataView {
 public:
  Fingerprint_RequestType_ResponseParamsDataView() {}

  Fingerprint_RequestType_ResponseParamsDataView(
      internal::Fingerprint_RequestType_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t type() const {
    return data_->type;
  }
 private:
  internal::Fingerprint_RequestType_ResponseParams_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {





inline void FingerprintObserver_OnAuthScanDone_ParamsDataView::GetMatchesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->matches.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}




inline void Fingerprint_GetRecordsForUser_ParamsDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Fingerprint_GetRecordsForUser_ResponseParamsDataView::GetRecordsDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->records.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}


inline void Fingerprint_StartEnrollSession_ParamsDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Fingerprint_StartEnrollSession_ParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void Fingerprint_RequestRecordLabel_ParamsDataView::GetRecordPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->record_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Fingerprint_RequestRecordLabel_ResponseParamsDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Fingerprint_SetRecordLabel_ParamsDataView::GetRecordPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->record_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Fingerprint_SetRecordLabel_ParamsDataView::GetNewLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_label.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void Fingerprint_RemoveRecord_ParamsDataView::GetRecordPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->record_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}





















}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_
