// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef GamepadEventInit_h
#define GamepadEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Gamepad;

class MODULES_EXPORT GamepadEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  GamepadEventInit();
  virtual ~GamepadEventInit();
  GamepadEventInit(const GamepadEventInit&);
  GamepadEventInit& operator=(const GamepadEventInit&);

  bool hasGamepad() const { return gamepad_; }
  Gamepad* gamepad() const {
    return gamepad_;
  }
  inline void setGamepad(Gamepad*);
  inline void setGamepadToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<Gamepad> gamepad_;

  friend class V8GamepadEventInit;
};

void GamepadEventInit::setGamepad(Gamepad* value) {
  gamepad_ = value;
}
void GamepadEventInit::setGamepadToNull() {
  gamepad_ = Member<Gamepad>();
}

}  // namespace blink

#endif  // GamepadEventInit_h
