// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   chrome/common/extensions/api/webrtc_audio_private.idl
// DO NOT EDIT.

#ifndef CHROME_COMMON_EXTENSIONS_API_WEBRTC_AUDIO_PRIVATE_H__
#define CHROME_COMMON_EXTENSIONS_API_WEBRTC_AUDIO_PRIVATE_H__

#include <stdint.h>

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace webrtc_audio_private {

//
// Types
//

struct SinkInfo {
  SinkInfo();
  ~SinkInfo();
  SinkInfo(SinkInfo&& rhs);
  SinkInfo& operator=(SinkInfo&& rhs);

  // Populates a SinkInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, SinkInfo* out);

  // Creates a SinkInfo object from a base::Value, or NULL on failure.
  static std::unique_ptr<SinkInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SinkInfo object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The opaque identifier of the audio sink device, which is unique and static
  // for the extension calling the API but invalid for others.
  std::string sink_id;

  // The user-friendly name (e.g. "Bose Amplifier").
  std::string sink_label;

  // Current sample rate of the device, in Hz. Useful e.g. to know if the remote
  // side should be asked to send a lower sampling rate.
  int sample_rate;

  // <p>True if the device is ready to play out audio. E.g. if it is a device that
  // takes an audio jack, whether a jack is plugged in.</p><p>TODO(joi): Do
  // unplugged devices even get included in enumeration?</p>
  bool is_ready;

  // True if this device is the default audio sink device on the machine.
  bool is_default;


 private:
  DISALLOW_COPY_AND_ASSIGN(SinkInfo);
};

struct RequestInfo {
  RequestInfo();
  ~RequestInfo();
  RequestInfo(RequestInfo&& rhs);
  RequestInfo& operator=(RequestInfo&& rhs);

  // Populates a RequestInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, RequestInfo* out);

  // Creates a RequestInfo object from a base::Value, or NULL on failure.
  static std::unique_ptr<RequestInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RequestInfo object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // The tab identifier from the chrome.tabs API, if the request is from a tab.
  std::unique_ptr<int> tab_id;

  // The guest process id for the requester, if the request is from a webview.
  std::unique_ptr<int> guest_process_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(RequestInfo);
};

struct AudioExperiments {
  AudioExperiments();
  ~AudioExperiments();
  AudioExperiments(AudioExperiments&& rhs);
  AudioExperiments& operator=(AudioExperiments&& rhs);

  // Populates a AudioExperiments object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, AudioExperiments* out);

  // Creates a AudioExperiments object from a base::Value, or NULL on failure.
  static std::unique_ptr<AudioExperiments> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this AudioExperiments object.
  std::unique_ptr<base::DictionaryValue> ToValue() const;

  // Enables or disables the new acoustic echo canceller (AEC3) in WebRTC.
  std::unique_ptr<bool> enable_aec3;


 private:
  DISALLOW_COPY_AND_ASSIGN(AudioExperiments);
};


//
// Functions
//

namespace GetSinks {

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::vector<SinkInfo>& sink_info);
}  // namespace Results

}  // namespace GetSinks

namespace GetAssociatedSink {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string security_origin;

  std::string source_id_in_origin;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create(const std::string& sink_id);
}  // namespace Results

}  // namespace GetAssociatedSink

namespace SetAudioExperiments {

struct Params {
  static std::unique_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Information about the requesting process.
  RequestInfo request;

  // The origin to restrict the settings to.
  std::string security_origin;

  // The experiments to enable or disable.
  AudioExperiments audio_experiments;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

std::unique_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetAudioExperiments

//
// Events
//

namespace OnSinksChanged {

extern const char kEventName[];  // "webrtcAudioPrivate.onSinksChanged"

std::unique_ptr<base::ListValue> Create();
}  // namespace OnSinksChanged

}  // namespace webrtc_audio_private
}  // namespace api
}  // namespace extensions
#endif  // CHROME_COMMON_EXTENSIONS_API_WEBRTC_AUDIO_PRIVATE_H__
