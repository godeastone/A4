// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_SHARED_H_
#define UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_SHARED_H_

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
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class AcceleratorPhase : int32_t {
  PRE_TARGET,
  POST_TARGET,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, AcceleratorPhase value) {
  switch(value) {
    case AcceleratorPhase::PRE_TARGET:
      return os << "AcceleratorPhase::PRE_TARGET";
    case AcceleratorPhase::POST_TARGET:
      return os << "AcceleratorPhase::POST_TARGET";
    default:
      return os << "Unknown AcceleratorPhase value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AcceleratorPhase value) {
  return internal::AcceleratorPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class EventType : int32_t {
  UNKNOWN,
  KEY_PRESSED,
  KEY_RELEASED,
  POINTER_DOWN,
  POINTER_MOVED,
  POINTER_UP,
  POINTER_CANCELLED,
  POINTER_ENTERED,
  POINTER_EXITED,
  POINTER_WHEEL_CHANGED,
  POINTER_CAPTURE_CHANGED,
  GESTURE_TAP,
  SCROLL,
  SCROLL_FLING_START,
  SCROLL_FLING_CANCEL,
  kMinValue = 0,
  kMaxValue = 14,
};

inline std::ostream& operator<<(std::ostream& os, EventType value) {
  switch(value) {
    case EventType::UNKNOWN:
      return os << "EventType::UNKNOWN";
    case EventType::KEY_PRESSED:
      return os << "EventType::KEY_PRESSED";
    case EventType::KEY_RELEASED:
      return os << "EventType::KEY_RELEASED";
    case EventType::POINTER_DOWN:
      return os << "EventType::POINTER_DOWN";
    case EventType::POINTER_MOVED:
      return os << "EventType::POINTER_MOVED";
    case EventType::POINTER_UP:
      return os << "EventType::POINTER_UP";
    case EventType::POINTER_CANCELLED:
      return os << "EventType::POINTER_CANCELLED";
    case EventType::POINTER_ENTERED:
      return os << "EventType::POINTER_ENTERED";
    case EventType::POINTER_EXITED:
      return os << "EventType::POINTER_EXITED";
    case EventType::POINTER_WHEEL_CHANGED:
      return os << "EventType::POINTER_WHEEL_CHANGED";
    case EventType::POINTER_CAPTURE_CHANGED:
      return os << "EventType::POINTER_CAPTURE_CHANGED";
    case EventType::GESTURE_TAP:
      return os << "EventType::GESTURE_TAP";
    case EventType::SCROLL:
      return os << "EventType::SCROLL";
    case EventType::SCROLL_FLING_START:
      return os << "EventType::SCROLL_FLING_START";
    case EventType::SCROLL_FLING_CANCEL:
      return os << "EventType::SCROLL_FLING_CANCEL";
    default:
      return os << "Unknown EventType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EventType value) {
  return internal::EventType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PointerKind : int32_t {
  MOUSE,
  PEN,
  TOUCH,
  ERASER,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, PointerKind value) {
  switch(value) {
    case PointerKind::MOUSE:
      return os << "PointerKind::MOUSE";
    case PointerKind::PEN:
      return os << "PointerKind::PEN";
    case PointerKind::TOUCH:
      return os << "PointerKind::TOUCH";
    case PointerKind::ERASER:
      return os << "PointerKind::ERASER";
    default:
      return os << "Unknown PointerKind value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PointerKind value) {
  return internal::PointerKind_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class WheelMode : int32_t {
  PIXEL,
  LINE,
  PAGE,
  SCALING,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, WheelMode value) {
  switch(value) {
    case WheelMode::PIXEL:
      return os << "WheelMode::PIXEL";
    case WheelMode::LINE:
      return os << "WheelMode::LINE";
    case WheelMode::PAGE:
      return os << "WheelMode::PAGE";
    case WheelMode::SCALING:
      return os << "WheelMode::SCALING";
    default:
      return os << "Unknown WheelMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WheelMode value) {
  return internal::WheelMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ScrollEventPhase : int32_t {
  kNone,
  kBegan,
  kUpdate,
  kEnd,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, ScrollEventPhase value) {
  switch(value) {
    case ScrollEventPhase::kNone:
      return os << "ScrollEventPhase::kNone";
    case ScrollEventPhase::kBegan:
      return os << "ScrollEventPhase::kBegan";
    case ScrollEventPhase::kUpdate:
      return os << "ScrollEventPhase::kUpdate";
    case ScrollEventPhase::kEnd:
      return os << "ScrollEventPhase::kEnd";
    default:
      return os << "Unknown ScrollEventPhase value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ScrollEventPhase value) {
  return internal::ScrollEventPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class EventMomentumPhase : int32_t {
  NONE,
  BEGAN,
  MAY_BEGIN,
  INERTIAL_UPDATE,
  END,
  kMinValue = 0,
  kMaxValue = 4,
};

inline std::ostream& operator<<(std::ostream& os, EventMomentumPhase value) {
  switch(value) {
    case EventMomentumPhase::NONE:
      return os << "EventMomentumPhase::NONE";
    case EventMomentumPhase::BEGAN:
      return os << "EventMomentumPhase::BEGAN";
    case EventMomentumPhase::MAY_BEGIN:
      return os << "EventMomentumPhase::MAY_BEGIN";
    case EventMomentumPhase::INERTIAL_UPDATE:
      return os << "EventMomentumPhase::INERTIAL_UPDATE";
    case EventMomentumPhase::END:
      return os << "EventMomentumPhase::END";
    default:
      return os << "Unknown EventMomentumPhase value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EventMomentumPhase value) {
  return internal::EventMomentumPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::AcceleratorPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::AcceleratorPhase> {};

template <>
struct hash<::ui::mojom::EventType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventType> {};

template <>
struct hash<::ui::mojom::PointerKind>
    : public mojo::internal::EnumHashImpl<::ui::mojom::PointerKind> {};

template <>
struct hash<::ui::mojom::WheelMode>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WheelMode> {};

template <>
struct hash<::ui::mojom::ScrollEventPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ScrollEventPhase> {};

template <>
struct hash<::ui::mojom::EventMomentumPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventMomentumPhase> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::AcceleratorPhase, ::ui::mojom::AcceleratorPhase> {
  static ::ui::mojom::AcceleratorPhase ToMojom(::ui::mojom::AcceleratorPhase input) { return input; }
  static bool FromMojom(::ui::mojom::AcceleratorPhase input, ::ui::mojom::AcceleratorPhase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AcceleratorPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::AcceleratorPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::AcceleratorPhase>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::EventType, ::ui::mojom::EventType> {
  static ::ui::mojom::EventType ToMojom(::ui::mojom::EventType input) { return input; }
  static bool FromMojom(::ui::mojom::EventType input, ::ui::mojom::EventType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::PointerKind, ::ui::mojom::PointerKind> {
  static ::ui::mojom::PointerKind ToMojom(::ui::mojom::PointerKind input) { return input; }
  static bool FromMojom(::ui::mojom::PointerKind input, ::ui::mojom::PointerKind* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerKind, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::PointerKind, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::PointerKind>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::WheelMode, ::ui::mojom::WheelMode> {
  static ::ui::mojom::WheelMode ToMojom(::ui::mojom::WheelMode input) { return input; }
  static bool FromMojom(::ui::mojom::WheelMode input, ::ui::mojom::WheelMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WheelMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WheelMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WheelMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ScrollEventPhase, ::ui::mojom::ScrollEventPhase> {
  static ::ui::mojom::ScrollEventPhase ToMojom(::ui::mojom::ScrollEventPhase input) { return input; }
  static bool FromMojom(::ui::mojom::ScrollEventPhase input, ::ui::mojom::ScrollEventPhase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ScrollEventPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ScrollEventPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ScrollEventPhase>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::EventMomentumPhase, ::ui::mojom::EventMomentumPhase> {
  static ::ui::mojom::EventMomentumPhase ToMojom(::ui::mojom::EventMomentumPhase input) { return input; }
  static bool FromMojom(::ui::mojom::EventMomentumPhase input, ::ui::mojom::EventMomentumPhase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventMomentumPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventMomentumPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventMomentumPhase>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_CONSTANTS_MOJOM_SHARED_H_
