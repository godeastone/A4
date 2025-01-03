// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1944899464 value is based on sha256(salt + "EmbeddedWorkerInstanceClient1").
constexpr uint32_t kEmbeddedWorkerInstanceClient_StartWorker_Name = 1944899464;
// The 97712261 value is based on sha256(salt + "EmbeddedWorkerInstanceClient2").
constexpr uint32_t kEmbeddedWorkerInstanceClient_StopWorker_Name = 97712261;
// The 998105787 value is based on sha256(salt + "EmbeddedWorkerInstanceClient3").
constexpr uint32_t kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name = 998105787;
// The 1818336507 value is based on sha256(salt + "EmbeddedWorkerInstanceClient4").
constexpr uint32_t kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name = 1818336507;
// The 1307798564 value is based on sha256(salt + "EmbeddedWorkerInstanceClient5").
constexpr uint32_t kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name = 1307798564;
// The 724316488 value is based on sha256(salt + "EmbeddedWorkerInstanceHost1").
constexpr uint32_t kEmbeddedWorkerInstanceHost_RequestTermination_Name = 724316488;
// The 369278884 value is based on sha256(salt + "EmbeddedWorkerInstanceHost2").
constexpr uint32_t kEmbeddedWorkerInstanceHost_CountFeature_Name = 369278884;
// The 159580209 value is based on sha256(salt + "EmbeddedWorkerInstanceHost3").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name = 159580209;
// The 1181147903 value is based on sha256(salt + "EmbeddedWorkerInstanceHost4").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name = 1181147903;
// The 1383074418 value is based on sha256(salt + "EmbeddedWorkerInstanceHost5").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name = 1383074418;
// The 693910533 value is based on sha256(salt + "EmbeddedWorkerInstanceHost6").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnThreadStarted_Name = 693910533;
// The 1884346503 value is based on sha256(salt + "EmbeddedWorkerInstanceHost7").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name = 1884346503;
// The 1668211552 value is based on sha256(salt + "EmbeddedWorkerInstanceHost8").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStarted_Name = 1668211552;
// The 1305866504 value is based on sha256(salt + "EmbeddedWorkerInstanceHost9").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportException_Name = 1305866504;
// The 1787613266 value is based on sha256(salt + "EmbeddedWorkerInstanceHost10").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name = 1787613266;
// The 1806476336 value is based on sha256(salt + "EmbeddedWorkerInstanceHost11").
constexpr uint32_t kEmbeddedWorkerInstanceHost_OnStopped_Name = 1806476336;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_