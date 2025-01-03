// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This is a generated file. Please see the "catalog_cpp_source" template in
// src/services/catalog/public/tools/catalog.gni for more details.

#include "chrome/service/service_process_catalog_source.h"

#include "base/values.h"

namespace {

template <typename T>
std::unique_ptr<base::Value> GenerateValue(T generator) { return generator(); }

}  // namespace

std::unique_ptr<base::Value> CreateServiceProcessCatalog() {
  return GenerateValue([]() {
    auto dict = std::make_unique<base::DictionaryValue>();
    dict->Set("services", GenerateValue([]() {
      auto dict = std::make_unique<base::DictionaryValue>();
      dict->Set("content_browser", GenerateValue([]() {
        auto dict = std::make_unique<base::DictionaryValue>();
        dict->Set("embedded", std::make_unique<base::Value>(true));
        dict->Set("manifest", GenerateValue([]() {
          auto dict = std::make_unique<base::DictionaryValue>();
          dict->Set("services", GenerateValue([]() {
            auto list = std::make_unique<base::ListValue>();
            list->Append(GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("display_name", std::make_unique<base::Value>("File Service"));
              dict->Set("name", std::make_unique<base::Value>("file"));
              dict->Set("interface_provider_specs", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("service_manager:connector", GenerateValue([]() {
                  auto dict = std::make_unique<base::DictionaryValue>();
                  dict->Set("requires", GenerateValue([]() {
                    auto dict = std::make_unique<base::DictionaryValue>();
                    dict->Set("*", GenerateValue([]() {
                      auto list = std::make_unique<base::ListValue>();
                      list->Append(std::make_unique<base::Value>("app"));
                      return list;
                    }));
                    return dict;
                  }));
                  dict->Set("provides", GenerateValue([]() {
                    auto dict = std::make_unique<base::DictionaryValue>();
                    dict->Set("file:leveldb", GenerateValue([]() {
                      auto list = std::make_unique<base::ListValue>();
                      list->Append(std::make_unique<base::Value>("leveldb.mojom.LevelDBService"));
                      return list;
                    }));
                    dict->Set("file:filesystem", GenerateValue([]() {
                      auto list = std::make_unique<base::ListValue>();
                      list->Append(std::make_unique<base::Value>("file.mojom.FileSystem"));
                      return list;
                    }));
                    return dict;
                  }));
                  return dict;
                }));
                return dict;
              }));
              return dict;
            }));
            return list;
          }));
          dict->Set("display_name", std::make_unique<base::Value>("Content (browser process)"));
          dict->Set("name", std::make_unique<base::Value>("content_browser"));
          dict->Set("interface_provider_specs", GenerateValue([]() {
            auto dict = std::make_unique<base::DictionaryValue>();
            dict->Set("navigation:shared_worker", GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("provides", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("blink.mojom.BudgetService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.CacheStorage"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.LockManager"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.NotificationService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.PermissionService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.QuotaDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("network.mojom.WebSocket"));
                  list->Append(std::make_unique<base::Value>("payments.mojom.PaymentManager"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.BarcodeDetection"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.FaceDetectionProvider"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.TextDetection"));
                  return list;
                }));
                return dict;
              }));
              return dict;
            }));
            dict->Set("navigation:dedicated_worker", GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("provides", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("blink.mojom.BudgetService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.CacheStorage"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.LockManager"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.NotificationService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.PermissionService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.QuotaDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("device.mojom.UsbDeviceManager"));
                  list->Append(std::make_unique<base::Value>("network.mojom.WebSocket"));
                  list->Append(std::make_unique<base::Value>("payments.mojom.PaymentManager"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.BarcodeDetection"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.FaceDetectionProvider"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.TextDetection"));
                  return list;
                }));
                return dict;
              }));
              return dict;
            }));
            dict->Set("service_manager:connector", GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("requires", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("data_decoder", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("image_decoder"));
                  list->Append(std::make_unique<base::Value>("json_parser"));
                  list->Append(std::make_unique<base::Value>("xml_parser"));
                  return list;
                }));
                dict->Set("cdm", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("media:cdm"));
                  return list;
                }));
                dict->Set("unzip_service", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("unzip_file"));
                  return list;
                }));
                dict->Set("network", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("network_service"));
                  list->Append(std::make_unique<base::Value>("test"));
                  list->Append(std::make_unique<base::Value>("url_loader"));
                  return list;
                }));
                dict->Set("content_renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("browser"));
                  return list;
                }));
                dict->Set("media", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("media:media"));
                  return list;
                }));
                dict->Set("*", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("app"));
                  return list;
                }));
                dict->Set("shape_detection", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("barcode_detection"));
                  list->Append(std::make_unique<base::Value>("face_detection"));
                  list->Append(std::make_unique<base::Value>("text_detection"));
                  return list;
                }));
                dict->Set("content_plugin", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("browser"));
                  return list;
                }));
                dict->Set("patch_service", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("patch_file"));
                  return list;
                }));
                dict->Set("metrics", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("url_keyed_metrics"));
                  return list;
                }));
                dict->Set("content_utility", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("browser"));
                  return list;
                }));
                dict->Set("resource_coordinator", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("coordination_unit"));
                  list->Append(std::make_unique<base::Value>("coordination_unit_introspector"));
                  list->Append(std::make_unique<base::Value>("service_callbacks"));
                  list->Append(std::make_unique<base::Value>("page_signal"));
                  return list;
                }));
                dict->Set("ui", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("arc_manager"));
                  list->Append(std::make_unique<base::Value>("display_output_protection"));
                  list->Append(std::make_unique<base::Value>("video_detector"));
                  return list;
                }));
                dict->Set("video_capture", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("capture"));
                  list->Append(std::make_unique<base::Value>("tests"));
                  return list;
                }));
                dict->Set("file", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("file:filesystem"));
                  list->Append(std::make_unique<base::Value>("file:leveldb"));
                  return list;
                }));
                dict->Set("tracing", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("tracing"));
                  return list;
                }));
                dict->Set("device", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("device:battery_monitor"));
                  list->Append(std::make_unique<base::Value>("device:generic_sensor"));
                  list->Append(std::make_unique<base::Value>("device:geolocation"));
                  list->Append(std::make_unique<base::Value>("device:hid"));
                  list->Append(std::make_unique<base::Value>("device:input_service"));
                  list->Append(std::make_unique<base::Value>("device:mtp"));
                  list->Append(std::make_unique<base::Value>("device:nfc"));
                  list->Append(std::make_unique<base::Value>("device:serial"));
                  list->Append(std::make_unique<base::Value>("device:vibration"));
                  list->Append(std::make_unique<base::Value>("device:wake_lock"));
                  return list;
                }));
                dict->Set("service_manager", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("service_manager:client_process"));
                  list->Append(std::make_unique<base::Value>("service_manager:instance_name"));
                  list->Append(std::make_unique<base::Value>("service_manager:service_manager"));
                  list->Append(std::make_unique<base::Value>("service_manager:user_id"));
                  return list;
                }));
                dict->Set("audio", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("info"));
                  list->Append(std::make_unique<base::Value>("debug_recording"));
                  list->Append(std::make_unique<base::Value>("device_notifier"));
                  list->Append(std::make_unique<base::Value>("stream_factory"));
                  return list;
                }));
                dict->Set("content_gpu", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("browser"));
                  return list;
                }));
                return dict;
              }));
              dict->Set("provides", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("field_trials", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("content.mojom.FieldTrialRecorder"));
                  return list;
                }));
                dict->Set("font_loader", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("content.mojom.FontLoaderMac"));
                  return list;
                }));
                dict->Set("service_manager:service_factory", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("service_manager.mojom.ServiceFactory"));
                  return list;
                }));
                dict->Set("plugin", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("discardable_memory.mojom.DiscardableSharedMemoryManager"));
                  list->Append(std::make_unique<base::Value>("ui.mojom.Gpu"));
                  return list;
                }));
                dict->Set("app", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("discardable_memory.mojom.DiscardableSharedMemoryManager"));
                  list->Append(std::make_unique<base::Value>("memory_instrumentation.mojom.Coordinator"));
                  return list;
                }));
                dict->Set("dwrite_font_proxy", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("content.mojom.DWriteFontProxy"));
                  return list;
                }));
                dict->Set("renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("blink.mojom.BackgroundSyncService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.BlobRegistry"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.BroadcastChannelProvider"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.ClipboardHost"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.EmbeddedFrameSinkProvider"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.FileUtilitiesHost"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.LockManager"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.Hyphenation"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.MimeRegistry"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.ReportingServiceProxy"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.WebDatabaseHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.AppCacheBackend"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ClipboardHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.FieldTrialRecorder"));
                  list->Append(std::make_unique<base::Value>("content.mojom.FrameSinkProvider"));
                  list->Append(std::make_unique<base::Value>("content.mojom.MediaStreamTrackMetricsHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.MemoryCoordinatorHandle"));
                  list->Append(std::make_unique<base::Value>("content.mojom.PeerConnectionTrackerHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.PushMessaging"));
                  list->Append(std::make_unique<base::Value>("content.mojom.RendererHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ReportingServiceProxy"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ServiceWorkerDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.StoragePartitionService"));
                  list->Append(std::make_unique<base::Value>("content.mojom.WorkerURLLoaderFactoryProvider"));
                  list->Append(std::make_unique<base::Value>("device.mojom.BatteryMonitor"));
                  list->Append(std::make_unique<base::Value>("device.mojom.GamepadHapticsManager"));
                  list->Append(std::make_unique<base::Value>("device.mojom.GamepadMonitor"));
                  list->Append(std::make_unique<base::Value>("discardable_memory.mojom.DiscardableSharedMemoryManager"));
                  list->Append(std::make_unique<base::Value>("media.mojom.KeySystemSupport"));
                  list->Append(std::make_unique<base::Value>("media.mojom.VideoCaptureHost"));
                  list->Append(std::make_unique<base::Value>("media.mojom.VideoDecodePerfHistory"));
                  list->Append(std::make_unique<base::Value>("memory_coordinator.mojom.MemoryCoordinatorHandle"));
                  list->Append(std::make_unique<base::Value>("metrics.mojom.SingleSampleMetricsProvider"));
                  list->Append(std::make_unique<base::Value>("network.mojom.URLLoaderFactory"));
                  list->Append(std::make_unique<base::Value>("resource_coordinator.mojom.ProcessCoordinationUnit"));
                  list->Append(std::make_unique<base::Value>("ui.mojom.Gpu"));
                  list->Append(std::make_unique<base::Value>("viz.mojom.CompositingModeReporter"));
                  return list;
                }));
                dict->Set("font_cache", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("content.mojom.FontCacheWin"));
                  return list;
                }));
                dict->Set("gpu", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("discardable_memory.mojom.DiscardableSharedMemoryManager"));
                  list->Append(std::make_unique<base::Value>("media.mojom.AndroidOverlayProvider"));
                  return list;
                }));
                return dict;
              }));
              return dict;
            }));
            dict->Set("navigation:service_worker", GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("provides", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("blink.mojom.BackgroundFetchService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.BudgetService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.CacheStorage"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.CookieStore"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.LockManager"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.NotificationService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.PermissionService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.QuotaDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("network.mojom.RestrictedCookieManager"));
                  list->Append(std::make_unique<base::Value>("network.mojom.WebSocket"));
                  list->Append(std::make_unique<base::Value>("payments.mojom.PaymentManager"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.BarcodeDetection"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.FaceDetectionProvider"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.TextDetection"));
                  return list;
                }));
                return dict;
              }));
              return dict;
            }));
            dict->Set("navigation:frame", GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("requires", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("content_renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("browser"));
                  return list;
                }));
                return dict;
              }));
              dict->Set("provides", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("renderer", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("autofill.mojom.AutofillDriver"));
                  list->Append(std::make_unique<base::Value>("autofill.mojom.PasswordManagerDriver"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.BackgroundFetchService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.BudgetService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.CacheStorage"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.ColorChooserFactory"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.DedicatedWorkerFactory"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.LockManager"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.GeolocationService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.InsecureInputService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.KeyboardLockService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.MediaDevicesDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.MediaSessionService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.NotificationService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.PermissionService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.PrefetchURLLoaderService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.PresentationService"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.QuotaDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.TextSuggestionHost"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.UnhandledTapNotifier"));
                  list->Append(std::make_unique<base::Value>("blink.mojom.WebBluetoothService"));
                  list->Append(std::make_unique<base::Value>("content.mojom.BrowserTarget"));
                  list->Append(std::make_unique<base::Value>("content.mojom.InputInjector"));
                  list->Append(std::make_unique<base::Value>("content.mojom.MediaStreamDispatcherHost"));
                  list->Append(std::make_unique<base::Value>("content.mojom.RendererAudioInputStreamFactory"));
                  list->Append(std::make_unique<base::Value>("content.mojom.RendererAudioOutputStreamFactory"));
                  list->Append(std::make_unique<base::Value>("content.mojom.SharedWorkerConnector"));
                  list->Append(std::make_unique<base::Value>("content.mojom.SpeechRecognizer"));
                  list->Append(std::make_unique<base::Value>("device.mojom.Geolocation"));
                  list->Append(std::make_unique<base::Value>("device.mojom.NFC"));
                  list->Append(std::make_unique<base::Value>("device.mojom.SensorProvider"));
                  list->Append(std::make_unique<base::Value>("device.mojom.UsbChooserService"));
                  list->Append(std::make_unique<base::Value>("device.mojom.UsbDeviceManager"));
                  list->Append(std::make_unique<base::Value>("device.mojom.VibrationManager"));
                  list->Append(std::make_unique<base::Value>("device.mojom.UsbDeviceManager"));
                  list->Append(std::make_unique<base::Value>("device.mojom.VRService"));
                  list->Append(std::make_unique<base::Value>("device.mojom.VRService"));
                  list->Append(std::make_unique<base::Value>("device.mojom.WakeLock"));
                  list->Append(std::make_unique<base::Value>("discardable_memory.mojom.DiscardableSharedMemoryManager"));
                  list->Append(std::make_unique<base::Value>("media.mojom.ImageCapture"));
                  list->Append(std::make_unique<base::Value>("media.mojom.InterfaceFactory"));
                  list->Append(std::make_unique<base::Value>("media.mojom.MediaMetricsProvider"));
                  list->Append(std::make_unique<base::Value>("media.mojom.RemoterFactory"));
                  list->Append(std::make_unique<base::Value>("media.mojom.Renderer"));
                  list->Append(std::make_unique<base::Value>("network.mojom.RestrictedCookieManager"));
                  list->Append(std::make_unique<base::Value>("network.mojom.WebSocket"));
                  list->Append(std::make_unique<base::Value>("password_manager.mojom.CredentialManager"));
                  list->Append(std::make_unique<base::Value>("payments.mojom.PaymentManager"));
                  list->Append(std::make_unique<base::Value>("payments.mojom.PaymentRequest"));
                  list->Append(std::make_unique<base::Value>("resource_coordinator.mojom.FrameCoordinationUnit"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.BarcodeDetection"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.FaceDetectionProvider"));
                  list->Append(std::make_unique<base::Value>("shape_detection.mojom.TextDetection"));
                  list->Append(std::make_unique<base::Value>("ui.mojom.Gpu"));
                  list->Append(std::make_unique<base::Value>("webauth.mojom.Authenticator"));
                  list->Append(std::make_unique<base::Value>("webauth.test.mojom.VirtualAuthenticatorManager"));
                  return list;
                }));
                return dict;
              }));
              return dict;
            }));
            return dict;
          }));
          return dict;
        }));
        return dict;
      }));
      dict->Set("content_utility", GenerateValue([]() {
        auto dict = std::make_unique<base::DictionaryValue>();
        dict->Set("embedded", std::make_unique<base::Value>(true));
        dict->Set("manifest", GenerateValue([]() {
          auto dict = std::make_unique<base::DictionaryValue>();
          dict->Set("required_files", GenerateValue([]() {
            auto dict = std::make_unique<base::DictionaryValue>();
            dict->Set("v8_context_snapshot_data", GenerateValue([]() {
              auto list = std::make_unique<base::ListValue>();
              list->Append(GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("path", std::make_unique<base::Value>("v8_context_snapshot.bin"));
                dict->Set("platform", std::make_unique<base::Value>("linux"));
                return dict;
              }));
              return list;
            }));
            dict->Set("v8_natives_data", GenerateValue([]() {
              auto list = std::make_unique<base::ListValue>();
              list->Append(GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("path", std::make_unique<base::Value>("natives_blob.bin"));
                dict->Set("platform", std::make_unique<base::Value>("linux"));
                return dict;
              }));
              list->Append(GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("path", std::make_unique<base::Value>("assets/natives_blob.bin"));
                dict->Set("platform", std::make_unique<base::Value>("android"));
                return dict;
              }));
              return list;
            }));
            dict->Set("v8_snapshot_64_data", GenerateValue([]() {
              auto list = std::make_unique<base::ListValue>();
              list->Append(GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("path", std::make_unique<base::Value>("assets/v8_context_snapshot_64.bin"));
                dict->Set("platform", std::make_unique<base::Value>("android"));
                return dict;
              }));
              return list;
            }));
            dict->Set("v8_snapshot_32_data", GenerateValue([]() {
              auto list = std::make_unique<base::ListValue>();
              list->Append(GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("path", std::make_unique<base::Value>("assets/v8_context_snapshot_32.bin"));
                dict->Set("platform", std::make_unique<base::Value>("android"));
                return dict;
              }));
              return list;
            }));
            return dict;
          }));
          dict->Set("display_name", std::make_unique<base::Value>("Content (utility process)"));
          dict->Set("name", std::make_unique<base::Value>("content_utility"));
          dict->Set("interface_provider_specs", GenerateValue([]() {
            auto dict = std::make_unique<base::DictionaryValue>();
            dict->Set("service_manager:connector", GenerateValue([]() {
              auto dict = std::make_unique<base::DictionaryValue>();
              dict->Set("requires", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("device", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("device:power_monitor"));
                  list->Append(std::make_unique<base::Value>("device:time_zone_monitor"));
                  return list;
                }));
                dict->Set("content_browser", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("dwrite_font_proxy"));
                  list->Append(std::make_unique<base::Value>("field_trials"));
                  list->Append(std::make_unique<base::Value>("font_cache"));
                  return list;
                }));
                dict->Set("*", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("app"));
                  return list;
                }));
                return dict;
              }));
              dict->Set("provides", GenerateValue([]() {
                auto dict = std::make_unique<base::DictionaryValue>();
                dict->Set("service_manager:service_factory", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("service_manager.mojom.ServiceFactory"));
                  return list;
                }));
                dict->Set("browser", GenerateValue([]() {
                  auto list = std::make_unique<base::ListValue>();
                  list->Append(std::make_unique<base::Value>("content.mojom.Child"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ChildControl"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ChildHistogramFetcher"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ChildHistogramFetcherFactory"));
                  list->Append(std::make_unique<base::Value>("content.mojom.ResourceUsageReporter"));
                  list->Append(std::make_unique<base::Value>("IPC.mojom.ChannelBootstrap"));
                  list->Append(std::make_unique<base::Value>("printing.mojom.PdfToEmfConverterFactory"));
                  list->Append(std::make_unique<base::Value>("printing.mojom.PdfToPwgRasterConverter"));
                  list->Append(std::make_unique<base::Value>("service_manager.mojom.ServiceFactory"));
                  return list;
                }));
                return dict;
              }));
              return dict;
            }));
            return dict;
          }));
          return dict;
        }));
        return dict;
      }));
      return dict;
    }));
    return dict;
  });
}
