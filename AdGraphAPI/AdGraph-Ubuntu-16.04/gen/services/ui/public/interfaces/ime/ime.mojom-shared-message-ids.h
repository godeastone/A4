// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 820628653 value is based on sha256(salt + "IMEDriver1").
constexpr uint32_t kIMEDriver_StartSession_Name = 820628653;
// The 2059786430 value is based on sha256(salt + "IMERegistrar1").
constexpr uint32_t kIMERegistrar_RegisterDriver_Name = 2059786430;
// The 2043150462 value is based on sha256(salt + "InputMethod1").
constexpr uint32_t kInputMethod_OnTextInputTypeChanged_Name = 2043150462;
// The 1871743963 value is based on sha256(salt + "InputMethod2").
constexpr uint32_t kInputMethod_OnCaretBoundsChanged_Name = 1871743963;
// The 1063667768 value is based on sha256(salt + "InputMethod3").
constexpr uint32_t kInputMethod_ProcessKeyEvent_Name = 1063667768;
// The 2109300827 value is based on sha256(salt + "InputMethod4").
constexpr uint32_t kInputMethod_CancelComposition_Name = 2109300827;
// The 1651856425 value is based on sha256(salt + "TextInputClient1").
constexpr uint32_t kTextInputClient_SetCompositionText_Name = 1651856425;
// The 794663523 value is based on sha256(salt + "TextInputClient2").
constexpr uint32_t kTextInputClient_ConfirmCompositionText_Name = 794663523;
// The 1752588358 value is based on sha256(salt + "TextInputClient3").
constexpr uint32_t kTextInputClient_ClearCompositionText_Name = 1752588358;
// The 1246417677 value is based on sha256(salt + "TextInputClient4").
constexpr uint32_t kTextInputClient_InsertText_Name = 1246417677;
// The 1381415469 value is based on sha256(salt + "TextInputClient5").
constexpr uint32_t kTextInputClient_InsertChar_Name = 1381415469;
// The 1285170492 value is based on sha256(salt + "TextInputClient6").
constexpr uint32_t kTextInputClient_DispatchKeyEventPostIME_Name = 1285170492;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_IME_MOJOM_SHARED_MESSAGE_IDS_H_